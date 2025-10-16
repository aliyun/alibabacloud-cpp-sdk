// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETOTATASKBYTASKIDREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETOTATASKBYTASKIDREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AppstreamCenter20210901
{
namespace Models
{
  class GetOtaTaskByTaskIdRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetOtaTaskByTaskIdRequest& obj) { 
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
    };
    friend void from_json(const Darabonba::Json& j, GetOtaTaskByTaskIdRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
    };
    GetOtaTaskByTaskIdRequest() = default ;
    GetOtaTaskByTaskIdRequest(const GetOtaTaskByTaskIdRequest &) = default ;
    GetOtaTaskByTaskIdRequest(GetOtaTaskByTaskIdRequest &&) = default ;
    GetOtaTaskByTaskIdRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetOtaTaskByTaskIdRequest() = default ;
    GetOtaTaskByTaskIdRequest& operator=(const GetOtaTaskByTaskIdRequest &) = default ;
    GetOtaTaskByTaskIdRequest& operator=(GetOtaTaskByTaskIdRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->taskId_ == nullptr; };
    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline GetOtaTaskByTaskIdRequest& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


  protected:
    // The ID of the OTA update task. You can call the [ListAppInstanceGroup](https://help.aliyun.com/document_detail/428506.html) operation to obtain the ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> taskId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AppstreamCenter20210901
#endif
