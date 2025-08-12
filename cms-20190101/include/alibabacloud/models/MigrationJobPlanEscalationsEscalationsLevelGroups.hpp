// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MIGRATIONJOBPLANESCALATIONSESCALATIONSLEVELGROUPS_HPP_
#define ALIBABACLOUD_MODELS_MIGRATIONJOBPLANESCALATIONSESCALATIONSLEVELGROUPS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class MigrationJobPlanEscalationsEscalationsLevelGroups : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const MigrationJobPlanEscalationsEscalationsLevelGroups& obj) { 
      DARABONBA_PTR_TO_JSON(Critical, critical_);
      DARABONBA_PTR_TO_JSON(Info, info_);
      DARABONBA_PTR_TO_JSON(Resolved, resolved_);
      DARABONBA_PTR_TO_JSON(Warning, warning_);
    };
    friend void from_json(const Darabonba::Json& j, MigrationJobPlanEscalationsEscalationsLevelGroups& obj) { 
      DARABONBA_PTR_FROM_JSON(Critical, critical_);
      DARABONBA_PTR_FROM_JSON(Info, info_);
      DARABONBA_PTR_FROM_JSON(Resolved, resolved_);
      DARABONBA_PTR_FROM_JSON(Warning, warning_);
    };
    MigrationJobPlanEscalationsEscalationsLevelGroups() = default ;
    MigrationJobPlanEscalationsEscalationsLevelGroups(const MigrationJobPlanEscalationsEscalationsLevelGroups &) = default ;
    MigrationJobPlanEscalationsEscalationsLevelGroups(MigrationJobPlanEscalationsEscalationsLevelGroups &&) = default ;
    MigrationJobPlanEscalationsEscalationsLevelGroups(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~MigrationJobPlanEscalationsEscalationsLevelGroups() = default ;
    MigrationJobPlanEscalationsEscalationsLevelGroups& operator=(const MigrationJobPlanEscalationsEscalationsLevelGroups &) = default ;
    MigrationJobPlanEscalationsEscalationsLevelGroups& operator=(MigrationJobPlanEscalationsEscalationsLevelGroups &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->critical_ != nullptr
        && this->info_ != nullptr && this->resolved_ != nullptr && this->warning_ != nullptr; };
    // critical Field Functions 
    bool hasCritical() const { return this->critical_ != nullptr;};
    void deleteCritical() { this->critical_ = nullptr;};
    inline const vector<string> & critical() const { DARABONBA_PTR_GET_CONST(critical_, vector<string>) };
    inline vector<string> critical() { DARABONBA_PTR_GET(critical_, vector<string>) };
    inline MigrationJobPlanEscalationsEscalationsLevelGroups& setCritical(const vector<string> & critical) { DARABONBA_PTR_SET_VALUE(critical_, critical) };
    inline MigrationJobPlanEscalationsEscalationsLevelGroups& setCritical(vector<string> && critical) { DARABONBA_PTR_SET_RVALUE(critical_, critical) };


    // info Field Functions 
    bool hasInfo() const { return this->info_ != nullptr;};
    void deleteInfo() { this->info_ = nullptr;};
    inline const vector<string> & info() const { DARABONBA_PTR_GET_CONST(info_, vector<string>) };
    inline vector<string> info() { DARABONBA_PTR_GET(info_, vector<string>) };
    inline MigrationJobPlanEscalationsEscalationsLevelGroups& setInfo(const vector<string> & info) { DARABONBA_PTR_SET_VALUE(info_, info) };
    inline MigrationJobPlanEscalationsEscalationsLevelGroups& setInfo(vector<string> && info) { DARABONBA_PTR_SET_RVALUE(info_, info) };


    // resolved Field Functions 
    bool hasResolved() const { return this->resolved_ != nullptr;};
    void deleteResolved() { this->resolved_ = nullptr;};
    inline const vector<string> & resolved() const { DARABONBA_PTR_GET_CONST(resolved_, vector<string>) };
    inline vector<string> resolved() { DARABONBA_PTR_GET(resolved_, vector<string>) };
    inline MigrationJobPlanEscalationsEscalationsLevelGroups& setResolved(const vector<string> & resolved) { DARABONBA_PTR_SET_VALUE(resolved_, resolved) };
    inline MigrationJobPlanEscalationsEscalationsLevelGroups& setResolved(vector<string> && resolved) { DARABONBA_PTR_SET_RVALUE(resolved_, resolved) };


    // warning Field Functions 
    bool hasWarning() const { return this->warning_ != nullptr;};
    void deleteWarning() { this->warning_ = nullptr;};
    inline const vector<string> & warning() const { DARABONBA_PTR_GET_CONST(warning_, vector<string>) };
    inline vector<string> warning() { DARABONBA_PTR_GET(warning_, vector<string>) };
    inline MigrationJobPlanEscalationsEscalationsLevelGroups& setWarning(const vector<string> & warning) { DARABONBA_PTR_SET_VALUE(warning_, warning) };
    inline MigrationJobPlanEscalationsEscalationsLevelGroups& setWarning(vector<string> && warning) { DARABONBA_PTR_SET_RVALUE(warning_, warning) };


  protected:
    std::shared_ptr<vector<string>> critical_ = nullptr;
    std::shared_ptr<vector<string>> info_ = nullptr;
    std::shared_ptr<vector<string>> resolved_ = nullptr;
    std::shared_ptr<vector<string>> warning_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
