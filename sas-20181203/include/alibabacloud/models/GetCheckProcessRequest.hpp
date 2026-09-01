// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCHECKPROCESSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETCHECKPROCESSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class GetCheckProcessRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetCheckProcessRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ResourceDirectoryAccountId, resourceDirectoryAccountId_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
    };
    friend void from_json(const Darabonba::Json& j, GetCheckProcessRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ResourceDirectoryAccountId, resourceDirectoryAccountId_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
    };
    GetCheckProcessRequest() = default ;
    GetCheckProcessRequest(const GetCheckProcessRequest &) = default ;
    GetCheckProcessRequest(GetCheckProcessRequest &&) = default ;
    GetCheckProcessRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetCheckProcessRequest() = default ;
    GetCheckProcessRequest& operator=(const GetCheckProcessRequest &) = default ;
    GetCheckProcessRequest& operator=(GetCheckProcessRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->resourceDirectoryAccountId_ == nullptr
        && this->taskId_ == nullptr; };
    // resourceDirectoryAccountId Field Functions 
    bool hasResourceDirectoryAccountId() const { return this->resourceDirectoryAccountId_ != nullptr;};
    void deleteResourceDirectoryAccountId() { this->resourceDirectoryAccountId_ = nullptr;};
    inline int64_t getResourceDirectoryAccountId() const { DARABONBA_PTR_GET_DEFAULT(resourceDirectoryAccountId_, 0L) };
    inline GetCheckProcessRequest& setResourceDirectoryAccountId(int64_t resourceDirectoryAccountId) { DARABONBA_PTR_SET_VALUE(resourceDirectoryAccountId_, resourceDirectoryAccountId) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline GetCheckProcessRequest& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


  protected:
    // The ID of the member accounts in the resource folder (Alibaba Cloud account).
    // > You can invoke the [DescribeMonitorAccounts](~~DescribeMonitorAccounts~~) operation to obtain this parameter.
    shared_ptr<int64_t> resourceDirectoryAccountId_ {};
    // The ID of the cloud service configuration check task that you want to query.
    // > You can call the [SubmitCheck](~~SubmitCheck~~) operation to obtain this parameter.
    shared_ptr<string> taskId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
