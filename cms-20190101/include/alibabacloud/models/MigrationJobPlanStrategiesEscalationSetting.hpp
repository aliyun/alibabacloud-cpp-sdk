// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MIGRATIONJOBPLANSTRATEGIESESCALATIONSETTING_HPP_
#define ALIBABACLOUD_MODELS_MIGRATIONJOBPLANSTRATEGIESESCALATIONSETTING_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class MigrationJobPlanStrategiesEscalationSetting : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const MigrationJobPlanStrategiesEscalationSetting& obj) { 
      DARABONBA_PTR_TO_JSON(escalationUuid, escalationUuid_);
    };
    friend void from_json(const Darabonba::Json& j, MigrationJobPlanStrategiesEscalationSetting& obj) { 
      DARABONBA_PTR_FROM_JSON(escalationUuid, escalationUuid_);
    };
    MigrationJobPlanStrategiesEscalationSetting() = default ;
    MigrationJobPlanStrategiesEscalationSetting(const MigrationJobPlanStrategiesEscalationSetting &) = default ;
    MigrationJobPlanStrategiesEscalationSetting(MigrationJobPlanStrategiesEscalationSetting &&) = default ;
    MigrationJobPlanStrategiesEscalationSetting(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~MigrationJobPlanStrategiesEscalationSetting() = default ;
    MigrationJobPlanStrategiesEscalationSetting& operator=(const MigrationJobPlanStrategiesEscalationSetting &) = default ;
    MigrationJobPlanStrategiesEscalationSetting& operator=(MigrationJobPlanStrategiesEscalationSetting &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->escalationUuid_ != nullptr; };
    // escalationUuid Field Functions 
    bool hasEscalationUuid() const { return this->escalationUuid_ != nullptr;};
    void deleteEscalationUuid() { this->escalationUuid_ = nullptr;};
    inline string escalationUuid() const { DARABONBA_PTR_GET_DEFAULT(escalationUuid_, "") };
    inline MigrationJobPlanStrategiesEscalationSetting& setEscalationUuid(string escalationUuid) { DARABONBA_PTR_SET_VALUE(escalationUuid_, escalationUuid) };


  protected:
    std::shared_ptr<string> escalationUuid_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
