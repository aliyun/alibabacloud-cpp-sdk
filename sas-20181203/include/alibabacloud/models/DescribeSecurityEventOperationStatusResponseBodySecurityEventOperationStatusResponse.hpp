// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESECURITYEVENTOPERATIONSTATUSRESPONSEBODYSECURITYEVENTOPERATIONSTATUSRESPONSE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESECURITYEVENTOPERATIONSTATUSRESPONSEBODYSECURITYEVENTOPERATIONSTATUSRESPONSE_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeSecurityEventOperationStatusResponseBodySecurityEventOperationStatusResponseSecurityEventOperationStatuses.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeSecurityEventOperationStatusResponseBodySecurityEventOperationStatusResponse : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSecurityEventOperationStatusResponseBodySecurityEventOperationStatusResponse& obj) { 
      DARABONBA_PTR_TO_JSON(SecurityEventOperationStatuses, securityEventOperationStatuses_);
      DARABONBA_PTR_TO_JSON(TaskStatus, taskStatus_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSecurityEventOperationStatusResponseBodySecurityEventOperationStatusResponse& obj) { 
      DARABONBA_PTR_FROM_JSON(SecurityEventOperationStatuses, securityEventOperationStatuses_);
      DARABONBA_PTR_FROM_JSON(TaskStatus, taskStatus_);
    };
    DescribeSecurityEventOperationStatusResponseBodySecurityEventOperationStatusResponse() = default ;
    DescribeSecurityEventOperationStatusResponseBodySecurityEventOperationStatusResponse(const DescribeSecurityEventOperationStatusResponseBodySecurityEventOperationStatusResponse &) = default ;
    DescribeSecurityEventOperationStatusResponseBodySecurityEventOperationStatusResponse(DescribeSecurityEventOperationStatusResponseBodySecurityEventOperationStatusResponse &&) = default ;
    DescribeSecurityEventOperationStatusResponseBodySecurityEventOperationStatusResponse(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSecurityEventOperationStatusResponseBodySecurityEventOperationStatusResponse() = default ;
    DescribeSecurityEventOperationStatusResponseBodySecurityEventOperationStatusResponse& operator=(const DescribeSecurityEventOperationStatusResponseBodySecurityEventOperationStatusResponse &) = default ;
    DescribeSecurityEventOperationStatusResponseBodySecurityEventOperationStatusResponse& operator=(DescribeSecurityEventOperationStatusResponseBodySecurityEventOperationStatusResponse &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->securityEventOperationStatuses_ != nullptr
        && this->taskStatus_ != nullptr; };
    // securityEventOperationStatuses Field Functions 
    bool hasSecurityEventOperationStatuses() const { return this->securityEventOperationStatuses_ != nullptr;};
    void deleteSecurityEventOperationStatuses() { this->securityEventOperationStatuses_ = nullptr;};
    inline const vector<Models::DescribeSecurityEventOperationStatusResponseBodySecurityEventOperationStatusResponseSecurityEventOperationStatuses> & securityEventOperationStatuses() const { DARABONBA_PTR_GET_CONST(securityEventOperationStatuses_, vector<Models::DescribeSecurityEventOperationStatusResponseBodySecurityEventOperationStatusResponseSecurityEventOperationStatuses>) };
    inline vector<Models::DescribeSecurityEventOperationStatusResponseBodySecurityEventOperationStatusResponseSecurityEventOperationStatuses> securityEventOperationStatuses() { DARABONBA_PTR_GET(securityEventOperationStatuses_, vector<Models::DescribeSecurityEventOperationStatusResponseBodySecurityEventOperationStatusResponseSecurityEventOperationStatuses>) };
    inline DescribeSecurityEventOperationStatusResponseBodySecurityEventOperationStatusResponse& setSecurityEventOperationStatuses(const vector<Models::DescribeSecurityEventOperationStatusResponseBodySecurityEventOperationStatusResponseSecurityEventOperationStatuses> & securityEventOperationStatuses) { DARABONBA_PTR_SET_VALUE(securityEventOperationStatuses_, securityEventOperationStatuses) };
    inline DescribeSecurityEventOperationStatusResponseBodySecurityEventOperationStatusResponse& setSecurityEventOperationStatuses(vector<Models::DescribeSecurityEventOperationStatusResponseBodySecurityEventOperationStatusResponseSecurityEventOperationStatuses> && securityEventOperationStatuses) { DARABONBA_PTR_SET_RVALUE(securityEventOperationStatuses_, securityEventOperationStatuses) };


    // taskStatus Field Functions 
    bool hasTaskStatus() const { return this->taskStatus_ != nullptr;};
    void deleteTaskStatus() { this->taskStatus_ = nullptr;};
    inline string taskStatus() const { DARABONBA_PTR_GET_DEFAULT(taskStatus_, "") };
    inline DescribeSecurityEventOperationStatusResponseBodySecurityEventOperationStatusResponse& setTaskStatus(string taskStatus) { DARABONBA_PTR_SET_VALUE(taskStatus_, taskStatus) };


  protected:
    // An array consisting of the status of the alert events handled by the task.
    std::shared_ptr<vector<Models::DescribeSecurityEventOperationStatusResponseBodySecurityEventOperationStatusResponseSecurityEventOperationStatuses>> securityEventOperationStatuses_ = nullptr;
    // The status of the task that handles the alert events. Valid values:
    // 
    // *   **Processing**: The task is running.
    // *   **Success**: The task is successful.
    // *   **Failure**: The task failed.
    // *   **Pending**: The task is pending.
    std::shared_ptr<string> taskStatus_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
