// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEDOWNLOADTASKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEDOWNLOADTASKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class CreateDownloadTaskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateDownloadTaskRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(TaskData, taskData_);
      DARABONBA_PTR_TO_JSON(TaskType, taskType_);
      DARABONBA_PTR_TO_JSON(TimeZone, timeZone_);
    };
    friend void from_json(const Darabonba::Json& j, CreateDownloadTaskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(TaskData, taskData_);
      DARABONBA_PTR_FROM_JSON(TaskType, taskType_);
      DARABONBA_PTR_FROM_JSON(TimeZone, timeZone_);
    };
    CreateDownloadTaskRequest() = default ;
    CreateDownloadTaskRequest(const CreateDownloadTaskRequest &) = default ;
    CreateDownloadTaskRequest(CreateDownloadTaskRequest &&) = default ;
    CreateDownloadTaskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateDownloadTaskRequest() = default ;
    CreateDownloadTaskRequest& operator=(const CreateDownloadTaskRequest &) = default ;
    CreateDownloadTaskRequest& operator=(CreateDownloadTaskRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->lang_ == nullptr
        && this->taskData_ == nullptr && this->taskType_ == nullptr && this->timeZone_ == nullptr; };
    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline CreateDownloadTaskRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // taskData Field Functions 
    bool hasTaskData() const { return this->taskData_ != nullptr;};
    void deleteTaskData() { this->taskData_ = nullptr;};
    inline string getTaskData() const { DARABONBA_PTR_GET_DEFAULT(taskData_, "") };
    inline CreateDownloadTaskRequest& setTaskData(string taskData) { DARABONBA_PTR_SET_VALUE(taskData_, taskData) };


    // taskType Field Functions 
    bool hasTaskType() const { return this->taskType_ != nullptr;};
    void deleteTaskType() { this->taskType_ = nullptr;};
    inline string getTaskType() const { DARABONBA_PTR_GET_DEFAULT(taskType_, "") };
    inline CreateDownloadTaskRequest& setTaskType(string taskType) { DARABONBA_PTR_SET_VALUE(taskType_, taskType) };


    // timeZone Field Functions 
    bool hasTimeZone() const { return this->timeZone_ != nullptr;};
    void deleteTimeZone() { this->timeZone_ = nullptr;};
    inline string getTimeZone() const { DARABONBA_PTR_GET_DEFAULT(timeZone_, "") };
    inline CreateDownloadTaskRequest& setTimeZone(string timeZone) { DARABONBA_PTR_SET_VALUE(timeZone_, timeZone) };


  protected:
    // The language of the content within the response.
    // 
    // Valid values:
    // 
    // *   **zh**: Chinese (default)
    // *   **en**: English
    shared_ptr<string> lang_ {};
    // The query condition of the download task.
    shared_ptr<string> taskData_ {};
    // The type of the task. For more information about task types, see the descriptions in the "DescribeDownloadTaskType" topic.
    shared_ptr<string> taskType_ {};
    // The time zone of the time information in the downloaded file. The value must be an identifier of a time zone in the Internet Assigned Numbers Authority (IANA) database. The default value is Asia/Shanghai, which indicates UTC+8.
    shared_ptr<string> timeZone_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
