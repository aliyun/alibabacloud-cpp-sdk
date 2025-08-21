// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEUSAGEDETAILDATAEXPORTTASKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEUSAGEDETAILDATAEXPORTTASKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cdn20180510
{
namespace Models
{
  class CreateUsageDetailDataExportTaskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateUsageDetailDataExportTaskRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DomainNames, domainNames_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(Group, group_);
      DARABONBA_PTR_TO_JSON(Language, language_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(TaskName, taskName_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, CreateUsageDetailDataExportTaskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DomainNames, domainNames_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(Group, group_);
      DARABONBA_PTR_FROM_JSON(Language, language_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(TaskName, taskName_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    CreateUsageDetailDataExportTaskRequest() = default ;
    CreateUsageDetailDataExportTaskRequest(const CreateUsageDetailDataExportTaskRequest &) = default ;
    CreateUsageDetailDataExportTaskRequest(CreateUsageDetailDataExportTaskRequest &&) = default ;
    CreateUsageDetailDataExportTaskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateUsageDetailDataExportTaskRequest() = default ;
    CreateUsageDetailDataExportTaskRequest& operator=(const CreateUsageDetailDataExportTaskRequest &) = default ;
    CreateUsageDetailDataExportTaskRequest& operator=(CreateUsageDetailDataExportTaskRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->domainNames_ != nullptr
        && this->endTime_ != nullptr && this->group_ != nullptr && this->language_ != nullptr && this->startTime_ != nullptr && this->taskName_ != nullptr
        && this->type_ != nullptr; };
    // domainNames Field Functions 
    bool hasDomainNames() const { return this->domainNames_ != nullptr;};
    void deleteDomainNames() { this->domainNames_ = nullptr;};
    inline string domainNames() const { DARABONBA_PTR_GET_DEFAULT(domainNames_, "") };
    inline CreateUsageDetailDataExportTaskRequest& setDomainNames(string domainNames) { DARABONBA_PTR_SET_VALUE(domainNames_, domainNames) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline CreateUsageDetailDataExportTaskRequest& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // group Field Functions 
    bool hasGroup() const { return this->group_ != nullptr;};
    void deleteGroup() { this->group_ = nullptr;};
    inline string group() const { DARABONBA_PTR_GET_DEFAULT(group_, "") };
    inline CreateUsageDetailDataExportTaskRequest& setGroup(string group) { DARABONBA_PTR_SET_VALUE(group_, group) };


    // language Field Functions 
    bool hasLanguage() const { return this->language_ != nullptr;};
    void deleteLanguage() { this->language_ = nullptr;};
    inline string language() const { DARABONBA_PTR_GET_DEFAULT(language_, "") };
    inline CreateUsageDetailDataExportTaskRequest& setLanguage(string language) { DARABONBA_PTR_SET_VALUE(language_, language) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline CreateUsageDetailDataExportTaskRequest& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // taskName Field Functions 
    bool hasTaskName() const { return this->taskName_ != nullptr;};
    void deleteTaskName() { this->taskName_ = nullptr;};
    inline string taskName() const { DARABONBA_PTR_GET_DEFAULT(taskName_, "") };
    inline CreateUsageDetailDataExportTaskRequest& setTaskName(string taskName) { DARABONBA_PTR_SET_VALUE(taskName_, taskName) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline CreateUsageDetailDataExportTaskRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The domain names. If you do not specify the Group parameter, resource usage details of these domain names are exported.
    // 
    // If you do not specify this parameter, resource usage details are exported based on accounts.
    std::shared_ptr<string> domainNames_ = nullptr;
    // The end of the time range to query.
    // 
    // Specify the time in the ISO 8601 standard in the yyyy-MM-ddTHH:mm:ssZ format. The time must be in UTC.
    // 
    // > The end time must be later than the start time.
    // 
    // This parameter is required.
    std::shared_ptr<string> endTime_ = nullptr;
    // The domain name group. If you specify this parameter, the **DomainNames** parameter is ignored.
    std::shared_ptr<string> group_ = nullptr;
    // The language in which you want to export the file. Valid values:
    // 
    // *   **zh-cn**: Chinese. This is the default value.
    // *   **en-us**: English
    std::shared_ptr<string> language_ = nullptr;
    // The beginning of the time range to query.
    // 
    // Specify the time in the ISO 8601 standard in the yyyy-MM-ddTHH:mm:ssZ format. The time must be in UTC.
    // 
    // This parameter is required.
    std::shared_ptr<string> startTime_ = nullptr;
    // The name of the task.
    std::shared_ptr<string> taskName_ = nullptr;
    // The type of resource usage data to query. Valid values:
    // 
    // *   **flow**: traffic and bandwidth
    // *   **vas**: requests
    // 
    // This parameter is required.
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cdn20180510
#endif
