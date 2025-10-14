// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MIGRATIONJOBPLANESCALATIONSESCALATIONS_HPP_
#define ALIBABACLOUD_MODELS_MIGRATIONJOBPLANESCALATIONSESCALATIONS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/MigrationJobPlanEscalationsEscalationsLevelGroups.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class MigrationJobPlanEscalationsEscalations : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const MigrationJobPlanEscalationsEscalations& obj) { 
      DARABONBA_PTR_TO_JSON(Groups, groups_);
      DARABONBA_PTR_TO_JSON(LevelGroups, levelGroups_);
    };
    friend void from_json(const Darabonba::Json& j, MigrationJobPlanEscalationsEscalations& obj) { 
      DARABONBA_PTR_FROM_JSON(Groups, groups_);
      DARABONBA_PTR_FROM_JSON(LevelGroups, levelGroups_);
    };
    MigrationJobPlanEscalationsEscalations() = default ;
    MigrationJobPlanEscalationsEscalations(const MigrationJobPlanEscalationsEscalations &) = default ;
    MigrationJobPlanEscalationsEscalations(MigrationJobPlanEscalationsEscalations &&) = default ;
    MigrationJobPlanEscalationsEscalations(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~MigrationJobPlanEscalationsEscalations() = default ;
    MigrationJobPlanEscalationsEscalations& operator=(const MigrationJobPlanEscalationsEscalations &) = default ;
    MigrationJobPlanEscalationsEscalations& operator=(MigrationJobPlanEscalationsEscalations &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->groups_ == nullptr
        && return this->levelGroups_ == nullptr; };
    // groups Field Functions 
    bool hasGroups() const { return this->groups_ != nullptr;};
    void deleteGroups() { this->groups_ = nullptr;};
    inline const vector<string> & groups() const { DARABONBA_PTR_GET_CONST(groups_, vector<string>) };
    inline vector<string> groups() { DARABONBA_PTR_GET(groups_, vector<string>) };
    inline MigrationJobPlanEscalationsEscalations& setGroups(const vector<string> & groups) { DARABONBA_PTR_SET_VALUE(groups_, groups) };
    inline MigrationJobPlanEscalationsEscalations& setGroups(vector<string> && groups) { DARABONBA_PTR_SET_RVALUE(groups_, groups) };


    // levelGroups Field Functions 
    bool hasLevelGroups() const { return this->levelGroups_ != nullptr;};
    void deleteLevelGroups() { this->levelGroups_ = nullptr;};
    inline const Models::MigrationJobPlanEscalationsEscalationsLevelGroups & levelGroups() const { DARABONBA_PTR_GET_CONST(levelGroups_, Models::MigrationJobPlanEscalationsEscalationsLevelGroups) };
    inline Models::MigrationJobPlanEscalationsEscalationsLevelGroups levelGroups() { DARABONBA_PTR_GET(levelGroups_, Models::MigrationJobPlanEscalationsEscalationsLevelGroups) };
    inline MigrationJobPlanEscalationsEscalations& setLevelGroups(const Models::MigrationJobPlanEscalationsEscalationsLevelGroups & levelGroups) { DARABONBA_PTR_SET_VALUE(levelGroups_, levelGroups) };
    inline MigrationJobPlanEscalationsEscalations& setLevelGroups(Models::MigrationJobPlanEscalationsEscalationsLevelGroups && levelGroups) { DARABONBA_PTR_SET_RVALUE(levelGroups_, levelGroups) };


  protected:
    std::shared_ptr<vector<string>> groups_ = nullptr;
    std::shared_ptr<Models::MigrationJobPlanEscalationsEscalationsLevelGroups> levelGroups_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
