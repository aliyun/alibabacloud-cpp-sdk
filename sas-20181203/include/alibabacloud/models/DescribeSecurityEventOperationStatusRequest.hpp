// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESECURITYEVENTOPERATIONSTATUSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESECURITYEVENTOPERATIONSTATUSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeSecurityEventOperationStatusRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSecurityEventOperationStatusRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(SecurityEventIds, securityEventIds_);
      DARABONBA_PTR_TO_JSON(SourceIp, sourceIp_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSecurityEventOperationStatusRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(SecurityEventIds, securityEventIds_);
      DARABONBA_PTR_FROM_JSON(SourceIp, sourceIp_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
    };
    DescribeSecurityEventOperationStatusRequest() = default ;
    DescribeSecurityEventOperationStatusRequest(const DescribeSecurityEventOperationStatusRequest &) = default ;
    DescribeSecurityEventOperationStatusRequest(DescribeSecurityEventOperationStatusRequest &&) = default ;
    DescribeSecurityEventOperationStatusRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSecurityEventOperationStatusRequest() = default ;
    DescribeSecurityEventOperationStatusRequest& operator=(const DescribeSecurityEventOperationStatusRequest &) = default ;
    DescribeSecurityEventOperationStatusRequest& operator=(DescribeSecurityEventOperationStatusRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->resourceOwnerId_ == nullptr
        && return this->securityEventIds_ == nullptr && return this->sourceIp_ == nullptr && return this->taskId_ == nullptr; };
    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t resourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline DescribeSecurityEventOperationStatusRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // securityEventIds Field Functions 
    bool hasSecurityEventIds() const { return this->securityEventIds_ != nullptr;};
    void deleteSecurityEventIds() { this->securityEventIds_ = nullptr;};
    inline const vector<string> & securityEventIds() const { DARABONBA_PTR_GET_CONST(securityEventIds_, vector<string>) };
    inline vector<string> securityEventIds() { DARABONBA_PTR_GET(securityEventIds_, vector<string>) };
    inline DescribeSecurityEventOperationStatusRequest& setSecurityEventIds(const vector<string> & securityEventIds) { DARABONBA_PTR_SET_VALUE(securityEventIds_, securityEventIds) };
    inline DescribeSecurityEventOperationStatusRequest& setSecurityEventIds(vector<string> && securityEventIds) { DARABONBA_PTR_SET_RVALUE(securityEventIds_, securityEventIds) };


    // sourceIp Field Functions 
    bool hasSourceIp() const { return this->sourceIp_ != nullptr;};
    void deleteSourceIp() { this->sourceIp_ = nullptr;};
    inline string sourceIp() const { DARABONBA_PTR_GET_DEFAULT(sourceIp_, "") };
    inline DescribeSecurityEventOperationStatusRequest& setSourceIp(string sourceIp) { DARABONBA_PTR_SET_VALUE(sourceIp_, sourceIp) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline int64_t taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, 0L) };
    inline DescribeSecurityEventOperationStatusRequest& setTaskId(int64_t taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


  protected:
    std::shared_ptr<int64_t> resourceOwnerId_ = nullptr;
    // The IDs of the alert events.
    // 
    // >  You must specify at least one of the TaskId and SecurityEventIds parameters.
    // 
    // This parameter is required.
    std::shared_ptr<vector<string>> securityEventIds_ = nullptr;
    // The source IP address of the request.
    std::shared_ptr<string> sourceIp_ = nullptr;
    // The ID of the task that handles the alert events.
    // 
    // >  You must specify at least one of the TaskId and SecurityEventIds parameters.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> taskId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
