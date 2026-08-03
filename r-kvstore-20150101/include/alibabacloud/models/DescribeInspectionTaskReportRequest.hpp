// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINSPECTIONTASKREPORTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINSPECTIONTASKREPORTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RKvstore20150101
{
namespace Models
{
  class DescribeInspectionTaskReportRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInspectionTaskReportRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InspectionInsId, inspectionInsId_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(SecurityToken, securityToken_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInspectionTaskReportRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InspectionInsId, inspectionInsId_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(SecurityToken, securityToken_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
    };
    DescribeInspectionTaskReportRequest() = default ;
    DescribeInspectionTaskReportRequest(const DescribeInspectionTaskReportRequest &) = default ;
    DescribeInspectionTaskReportRequest(DescribeInspectionTaskReportRequest &&) = default ;
    DescribeInspectionTaskReportRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeInspectionTaskReportRequest() = default ;
    DescribeInspectionTaskReportRequest& operator=(const DescribeInspectionTaskReportRequest &) = default ;
    DescribeInspectionTaskReportRequest& operator=(DescribeInspectionTaskReportRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->inspectionInsId_ == nullptr
        && this->instanceId_ == nullptr && this->securityToken_ == nullptr && this->taskId_ == nullptr; };
    // inspectionInsId Field Functions 
    bool hasInspectionInsId() const { return this->inspectionInsId_ != nullptr;};
    void deleteInspectionInsId() { this->inspectionInsId_ = nullptr;};
    inline string getInspectionInsId() const { DARABONBA_PTR_GET_DEFAULT(inspectionInsId_, "") };
    inline DescribeInspectionTaskReportRequest& setInspectionInsId(string inspectionInsId) { DARABONBA_PTR_SET_VALUE(inspectionInsId_, inspectionInsId) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DescribeInspectionTaskReportRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // securityToken Field Functions 
    bool hasSecurityToken() const { return this->securityToken_ != nullptr;};
    void deleteSecurityToken() { this->securityToken_ = nullptr;};
    inline string getSecurityToken() const { DARABONBA_PTR_GET_DEFAULT(securityToken_, "") };
    inline DescribeInspectionTaskReportRequest& setSecurityToken(string securityToken) { DARABONBA_PTR_SET_VALUE(securityToken_, securityToken) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline DescribeInspectionTaskReportRequest& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


  protected:
    shared_ptr<string> inspectionInsId_ {};
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    shared_ptr<string> securityToken_ {};
    // This parameter is required.
    shared_ptr<string> taskId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RKvstore20150101
#endif
