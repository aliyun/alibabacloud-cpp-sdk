// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETVIRUSSCANCONFIGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETVIRUSSCANCONFIGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class GetVirusScanConfigRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetVirusScanConfigRequest& obj) { 
      DARABONBA_PTR_TO_JSON(TaskType, taskType_);
    };
    friend void from_json(const Darabonba::Json& j, GetVirusScanConfigRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(TaskType, taskType_);
    };
    GetVirusScanConfigRequest() = default ;
    GetVirusScanConfigRequest(const GetVirusScanConfigRequest &) = default ;
    GetVirusScanConfigRequest(GetVirusScanConfigRequest &&) = default ;
    GetVirusScanConfigRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetVirusScanConfigRequest() = default ;
    GetVirusScanConfigRequest& operator=(const GetVirusScanConfigRequest &) = default ;
    GetVirusScanConfigRequest& operator=(GetVirusScanConfigRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->taskType_ != nullptr; };
    // taskType Field Functions 
    bool hasTaskType() const { return this->taskType_ != nullptr;};
    void deleteTaskType() { this->taskType_ = nullptr;};
    inline string taskType() const { DARABONBA_PTR_GET_DEFAULT(taskType_, "") };
    inline GetVirusScanConfigRequest& setTaskType(string taskType) { DARABONBA_PTR_SET_VALUE(taskType_, taskType) };


  protected:
    // The type of the task. Valid values:
    // 
    // *   **VIRUS_VUL_SCHEDULE_SCAN**: a virus scan task.
    std::shared_ptr<string> taskType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
