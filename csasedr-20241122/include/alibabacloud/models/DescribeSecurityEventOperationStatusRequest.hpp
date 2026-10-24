// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESECURITYEVENTOPERATIONSTATUSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESECURITYEVENTOPERATIONSTATUSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CsasEdr20241122
{
namespace Models
{
  class DescribeSecurityEventOperationStatusRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSecurityEventOperationStatusRequest& obj) { 
      DARABONBA_PTR_TO_JSON(SecurityEventIds, securityEventIds_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSecurityEventOperationStatusRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(SecurityEventIds, securityEventIds_);
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
    virtual bool empty() const override { return this->securityEventIds_ == nullptr
        && this->taskId_ == nullptr; };
    // securityEventIds Field Functions 
    bool hasSecurityEventIds() const { return this->securityEventIds_ != nullptr;};
    void deleteSecurityEventIds() { this->securityEventIds_ = nullptr;};
    inline const vector<int64_t> & getSecurityEventIds() const { DARABONBA_PTR_GET_CONST(securityEventIds_, vector<int64_t>) };
    inline vector<int64_t> getSecurityEventIds() { DARABONBA_PTR_GET(securityEventIds_, vector<int64_t>) };
    inline DescribeSecurityEventOperationStatusRequest& setSecurityEventIds(const vector<int64_t> & securityEventIds) { DARABONBA_PTR_SET_VALUE(securityEventIds_, securityEventIds) };
    inline DescribeSecurityEventOperationStatusRequest& setSecurityEventIds(vector<int64_t> && securityEventIds) { DARABONBA_PTR_SET_RVALUE(securityEventIds_, securityEventIds) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline int64_t getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, 0L) };
    inline DescribeSecurityEventOperationStatusRequest& setTaskId(int64_t taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


  protected:
    // The IDs of the security alert events.
    // > You must specify either TaskId or SecurityEventIds. The API call succeeds only if one of these parameters is specified.
    // 
    // This parameter is required.
    shared_ptr<vector<int64_t>> securityEventIds_ {};
    // The ID of the task that processes the security alert event.
    // 
    // > You must specify either TaskId or SecurityEventIds. The API call succeeds only if one of these parameters is specified.
    // 
    // This parameter is required.
    shared_ptr<int64_t> taskId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CsasEdr20241122
#endif
