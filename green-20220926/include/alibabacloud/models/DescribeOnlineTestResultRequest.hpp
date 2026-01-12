// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEONLINETESTRESULTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEONLINETESTRESULTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Green20220926
{
namespace Models
{
  class DescribeOnlineTestResultRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeOnlineTestResultRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_TO_JSON(ServiceCode, serviceCode_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeOnlineTestResultRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_FROM_JSON(ServiceCode, serviceCode_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
    };
    DescribeOnlineTestResultRequest() = default ;
    DescribeOnlineTestResultRequest(const DescribeOnlineTestResultRequest &) = default ;
    DescribeOnlineTestResultRequest(DescribeOnlineTestResultRequest &&) = default ;
    DescribeOnlineTestResultRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeOnlineTestResultRequest() = default ;
    DescribeOnlineTestResultRequest& operator=(const DescribeOnlineTestResultRequest &) = default ;
    DescribeOnlineTestResultRequest& operator=(DescribeOnlineTestResultRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->resourceType_ == nullptr
        && this->serviceCode_ == nullptr && this->taskId_ == nullptr; };
    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline string getResourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
    inline DescribeOnlineTestResultRequest& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


    // serviceCode Field Functions 
    bool hasServiceCode() const { return this->serviceCode_ != nullptr;};
    void deleteServiceCode() { this->serviceCode_ = nullptr;};
    inline string getServiceCode() const { DARABONBA_PTR_GET_DEFAULT(serviceCode_, "") };
    inline DescribeOnlineTestResultRequest& setServiceCode(string serviceCode) { DARABONBA_PTR_SET_VALUE(serviceCode_, serviceCode) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline DescribeOnlineTestResultRequest& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


  protected:
    shared_ptr<string> resourceType_ {};
    shared_ptr<string> serviceCode_ {};
    shared_ptr<string> taskId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Green20220926
#endif
