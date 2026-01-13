class Fighter {

    boolean isVulnerable() {
        return true;
    }

    int getDamagePoints(Fighter fighter) {
        return 1;
    }
}

// Warrior class
class Warrior extends Fighter {

    @Override
    public boolean isVulnerable() {
        return false;
    }
    @Override
    public int getDamagePoints(Fighter fighter) {
        return fighter.isVulnerable() ? 10 : 6;
    }

    @Override
    public String toString() {
        return "Fighter is a Warrior";
    }
}

// Wizard class
class Wizard extends Fighter {
    private boolean preparedSpell = false;
    
    public void prepareSpell() {
        preparedSpell = true;
    }
    
     @Override
    public boolean isVulnerable() {
        return !preparedSpell;
    }

    @Override
    public int getDamagePoints(Fighter fighter) {
        return preparedSpell ? 12 : 3;
    }

    @Override
    public String toString() {
        return "Fighter is a Wizard";
    }
}
