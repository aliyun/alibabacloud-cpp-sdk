// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_OPENSTRUCTREFRESHJOBMODEL_HPP_
#define ALIBABACLOUD_MODELS_OPENSTRUCTREFRESHJOBMODEL_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class OpenStructRefreshJobModel : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const OpenStructRefreshJobModel& obj) { 
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Processid, processid_);
      DARABONBA_PTR_TO_JSON(RefreshInterval, refreshInterval_);
      DARABONBA_PTR_TO_JSON(RefreshModel, refreshModel_);
      DARABONBA_PTR_TO_JSON(ResourceGroup, resourceGroup_);
      DARABONBA_PTR_TO_JSON(ScheduledStartTime, scheduledStartTime_);
      DARABONBA_PTR_TO_JSON(SchemaName, schemaName_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, OpenStructRefreshJobModel& obj) { 
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Processid, processid_);
      DARABONBA_PTR_FROM_JSON(RefreshInterval, refreshInterval_);
      DARABONBA_PTR_FROM_JSON(RefreshModel, refreshModel_);
      DARABONBA_PTR_FROM_JSON(ResourceGroup, resourceGroup_);
      DARABONBA_PTR_FROM_JSON(ScheduledStartTime, scheduledStartTime_);
      DARABONBA_PTR_FROM_JSON(SchemaName, schemaName_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    OpenStructRefreshJobModel() = default ;
    OpenStructRefreshJobModel(const OpenStructRefreshJobModel &) = default ;
    OpenStructRefreshJobModel(OpenStructRefreshJobModel &&) = default ;
    OpenStructRefreshJobModel(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~OpenStructRefreshJobModel() = default ;
    OpenStructRefreshJobModel& operator=(const OpenStructRefreshJobModel &) = default ;
    OpenStructRefreshJobModel& operator=(OpenStructRefreshJobModel &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->endTime_ == nullptr
        && return this->name_ == nullptr && return this->processid_ == nullptr && return this->refreshInterval_ == nullptr && return this->refreshModel_ == nullptr && return this->resourceGroup_ == nullptr
        && return this->scheduledStartTime_ == nullptr && return this->schemaName_ == nullptr && return this->startTime_ == nullptr && return this->status_ == nullptr; };
    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline OpenStructRefreshJobModel& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline OpenStructRefreshJobModel& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // processid Field Functions 
    bool hasProcessid() const { return this->processid_ != nullptr;};
    void deleteProcessid() { this->processid_ = nullptr;};
    inline string processid() const { DARABONBA_PTR_GET_DEFAULT(processid_, "") };
    inline OpenStructRefreshJobModel& setProcessid(string processid) { DARABONBA_PTR_SET_VALUE(processid_, processid) };


    // refreshInterval Field Functions 
    bool hasRefreshInterval() const { return this->refreshInterval_ != nullptr;};
    void deleteRefreshInterval() { this->refreshInterval_ = nullptr;};
    inline string refreshInterval() const { DARABONBA_PTR_GET_DEFAULT(refreshInterval_, "") };
    inline OpenStructRefreshJobModel& setRefreshInterval(string refreshInterval) { DARABONBA_PTR_SET_VALUE(refreshInterval_, refreshInterval) };


    // refreshModel Field Functions 
    bool hasRefreshModel() const { return this->refreshModel_ != nullptr;};
    void deleteRefreshModel() { this->refreshModel_ = nullptr;};
    inline string refreshModel() const { DARABONBA_PTR_GET_DEFAULT(refreshModel_, "") };
    inline OpenStructRefreshJobModel& setRefreshModel(string refreshModel) { DARABONBA_PTR_SET_VALUE(refreshModel_, refreshModel) };


    // resourceGroup Field Functions 
    bool hasResourceGroup() const { return this->resourceGroup_ != nullptr;};
    void deleteResourceGroup() { this->resourceGroup_ = nullptr;};
    inline string resourceGroup() const { DARABONBA_PTR_GET_DEFAULT(resourceGroup_, "") };
    inline OpenStructRefreshJobModel& setResourceGroup(string resourceGroup) { DARABONBA_PTR_SET_VALUE(resourceGroup_, resourceGroup) };


    // scheduledStartTime Field Functions 
    bool hasScheduledStartTime() const { return this->scheduledStartTime_ != nullptr;};
    void deleteScheduledStartTime() { this->scheduledStartTime_ = nullptr;};
    inline string scheduledStartTime() const { DARABONBA_PTR_GET_DEFAULT(scheduledStartTime_, "") };
    inline OpenStructRefreshJobModel& setScheduledStartTime(string scheduledStartTime) { DARABONBA_PTR_SET_VALUE(scheduledStartTime_, scheduledStartTime) };


    // schemaName Field Functions 
    bool hasSchemaName() const { return this->schemaName_ != nullptr;};
    void deleteSchemaName() { this->schemaName_ = nullptr;};
    inline string schemaName() const { DARABONBA_PTR_GET_DEFAULT(schemaName_, "") };
    inline OpenStructRefreshJobModel& setSchemaName(string schemaName) { DARABONBA_PTR_SET_VALUE(schemaName_, schemaName) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline OpenStructRefreshJobModel& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline OpenStructRefreshJobModel& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    std::shared_ptr<string> endTime_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> processid_ = nullptr;
    std::shared_ptr<string> refreshInterval_ = nullptr;
    std::shared_ptr<string> refreshModel_ = nullptr;
    std::shared_ptr<string> resourceGroup_ = nullptr;
    std::shared_ptr<string> scheduledStartTime_ = nullptr;
    std::shared_ptr<string> schemaName_ = nullptr;
    std::shared_ptr<string> startTime_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
