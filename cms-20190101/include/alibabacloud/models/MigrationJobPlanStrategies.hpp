// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MIGRATIONJOBPLANSTRATEGIES_HPP_
#define ALIBABACLOUD_MODELS_MIGRATIONJOBPLANSTRATEGIES_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/MigrationJobPlanStrategiesEscalationSetting.hpp>
#include <alibabacloud/models/MigrationJobPlanStrategiesPushingSetting.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class MigrationJobPlanStrategies : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const MigrationJobPlanStrategies& obj) { 
      DARABONBA_PTR_TO_JSON(EscalationSetting, escalationSetting_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(PushingSetting, pushingSetting_);
    };
    friend void from_json(const Darabonba::Json& j, MigrationJobPlanStrategies& obj) { 
      DARABONBA_PTR_FROM_JSON(EscalationSetting, escalationSetting_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(PushingSetting, pushingSetting_);
    };
    MigrationJobPlanStrategies() = default ;
    MigrationJobPlanStrategies(const MigrationJobPlanStrategies &) = default ;
    MigrationJobPlanStrategies(MigrationJobPlanStrategies &&) = default ;
    MigrationJobPlanStrategies(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~MigrationJobPlanStrategies() = default ;
    MigrationJobPlanStrategies& operator=(const MigrationJobPlanStrategies &) = default ;
    MigrationJobPlanStrategies& operator=(MigrationJobPlanStrategies &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->escalationSetting_ != nullptr
        && this->name_ != nullptr && this->pushingSetting_ != nullptr; };
    // escalationSetting Field Functions 
    bool hasEscalationSetting() const { return this->escalationSetting_ != nullptr;};
    void deleteEscalationSetting() { this->escalationSetting_ = nullptr;};
    inline const Models::MigrationJobPlanStrategiesEscalationSetting & escalationSetting() const { DARABONBA_PTR_GET_CONST(escalationSetting_, Models::MigrationJobPlanStrategiesEscalationSetting) };
    inline Models::MigrationJobPlanStrategiesEscalationSetting escalationSetting() { DARABONBA_PTR_GET(escalationSetting_, Models::MigrationJobPlanStrategiesEscalationSetting) };
    inline MigrationJobPlanStrategies& setEscalationSetting(const Models::MigrationJobPlanStrategiesEscalationSetting & escalationSetting) { DARABONBA_PTR_SET_VALUE(escalationSetting_, escalationSetting) };
    inline MigrationJobPlanStrategies& setEscalationSetting(Models::MigrationJobPlanStrategiesEscalationSetting && escalationSetting) { DARABONBA_PTR_SET_RVALUE(escalationSetting_, escalationSetting) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline MigrationJobPlanStrategies& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // pushingSetting Field Functions 
    bool hasPushingSetting() const { return this->pushingSetting_ != nullptr;};
    void deletePushingSetting() { this->pushingSetting_ = nullptr;};
    inline const Models::MigrationJobPlanStrategiesPushingSetting & pushingSetting() const { DARABONBA_PTR_GET_CONST(pushingSetting_, Models::MigrationJobPlanStrategiesPushingSetting) };
    inline Models::MigrationJobPlanStrategiesPushingSetting pushingSetting() { DARABONBA_PTR_GET(pushingSetting_, Models::MigrationJobPlanStrategiesPushingSetting) };
    inline MigrationJobPlanStrategies& setPushingSetting(const Models::MigrationJobPlanStrategiesPushingSetting & pushingSetting) { DARABONBA_PTR_SET_VALUE(pushingSetting_, pushingSetting) };
    inline MigrationJobPlanStrategies& setPushingSetting(Models::MigrationJobPlanStrategiesPushingSetting && pushingSetting) { DARABONBA_PTR_SET_RVALUE(pushingSetting_, pushingSetting) };


  protected:
    std::shared_ptr<Models::MigrationJobPlanStrategiesEscalationSetting> escalationSetting_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<Models::MigrationJobPlanStrategiesPushingSetting> pushingSetting_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
