// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MIGRATIONJOBPLANSTRATEGIESPUSHINGSETTING_HPP_
#define ALIBABACLOUD_MODELS_MIGRATIONJOBPLANSTRATEGIESPUSHINGSETTING_HPP_
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
  class MigrationJobPlanStrategiesPushingSetting : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const MigrationJobPlanStrategiesPushingSetting& obj) { 
      DARABONBA_PTR_TO_JSON(TargetUuids, targetUuids_);
    };
    friend void from_json(const Darabonba::Json& j, MigrationJobPlanStrategiesPushingSetting& obj) { 
      DARABONBA_PTR_FROM_JSON(TargetUuids, targetUuids_);
    };
    MigrationJobPlanStrategiesPushingSetting() = default ;
    MigrationJobPlanStrategiesPushingSetting(const MigrationJobPlanStrategiesPushingSetting &) = default ;
    MigrationJobPlanStrategiesPushingSetting(MigrationJobPlanStrategiesPushingSetting &&) = default ;
    MigrationJobPlanStrategiesPushingSetting(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~MigrationJobPlanStrategiesPushingSetting() = default ;
    MigrationJobPlanStrategiesPushingSetting& operator=(const MigrationJobPlanStrategiesPushingSetting &) = default ;
    MigrationJobPlanStrategiesPushingSetting& operator=(MigrationJobPlanStrategiesPushingSetting &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->targetUuids_ != nullptr; };
    // targetUuids Field Functions 
    bool hasTargetUuids() const { return this->targetUuids_ != nullptr;};
    void deleteTargetUuids() { this->targetUuids_ = nullptr;};
    inline const vector<string> & targetUuids() const { DARABONBA_PTR_GET_CONST(targetUuids_, vector<string>) };
    inline vector<string> targetUuids() { DARABONBA_PTR_GET(targetUuids_, vector<string>) };
    inline MigrationJobPlanStrategiesPushingSetting& setTargetUuids(const vector<string> & targetUuids) { DARABONBA_PTR_SET_VALUE(targetUuids_, targetUuids) };
    inline MigrationJobPlanStrategiesPushingSetting& setTargetUuids(vector<string> && targetUuids) { DARABONBA_PTR_SET_RVALUE(targetUuids_, targetUuids) };


  protected:
    std::shared_ptr<vector<string>> targetUuids_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
