// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINSPECTIONTASKATTRIBUTERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINSPECTIONTASKATTRIBUTERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class DescribeInspectionTaskAttributeResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInspectionTaskAttributeResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(CronExpression, cronExpression_);
      DARABONBA_PTR_TO_JSON(DBClusterIds, DBClusterIds_);
      DARABONBA_PTR_TO_JSON(ExpireTime, expireTime_);
      DARABONBA_PTR_TO_JSON(ModifyTime, modifyTime_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TaskDescription, taskDescription_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInspectionTaskAttributeResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(CronExpression, cronExpression_);
      DARABONBA_PTR_FROM_JSON(DBClusterIds, DBClusterIds_);
      DARABONBA_PTR_FROM_JSON(ExpireTime, expireTime_);
      DARABONBA_PTR_FROM_JSON(ModifyTime, modifyTime_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TaskDescription, taskDescription_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
    };
    DescribeInspectionTaskAttributeResponseBody() = default ;
    DescribeInspectionTaskAttributeResponseBody(const DescribeInspectionTaskAttributeResponseBody &) = default ;
    DescribeInspectionTaskAttributeResponseBody(DescribeInspectionTaskAttributeResponseBody &&) = default ;
    DescribeInspectionTaskAttributeResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeInspectionTaskAttributeResponseBody() = default ;
    DescribeInspectionTaskAttributeResponseBody& operator=(const DescribeInspectionTaskAttributeResponseBody &) = default ;
    DescribeInspectionTaskAttributeResponseBody& operator=(DescribeInspectionTaskAttributeResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->createTime_ == nullptr
        && this->cronExpression_ == nullptr && this->DBClusterIds_ == nullptr && this->expireTime_ == nullptr && this->modifyTime_ == nullptr && this->requestId_ == nullptr
        && this->taskDescription_ == nullptr && this->taskId_ == nullptr; };
    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline DescribeInspectionTaskAttributeResponseBody& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // cronExpression Field Functions 
    bool hasCronExpression() const { return this->cronExpression_ != nullptr;};
    void deleteCronExpression() { this->cronExpression_ = nullptr;};
    inline string getCronExpression() const { DARABONBA_PTR_GET_DEFAULT(cronExpression_, "") };
    inline DescribeInspectionTaskAttributeResponseBody& setCronExpression(string cronExpression) { DARABONBA_PTR_SET_VALUE(cronExpression_, cronExpression) };


    // DBClusterIds Field Functions 
    bool hasDBClusterIds() const { return this->DBClusterIds_ != nullptr;};
    void deleteDBClusterIds() { this->DBClusterIds_ = nullptr;};
    inline string getDBClusterIds() const { DARABONBA_PTR_GET_DEFAULT(DBClusterIds_, "") };
    inline DescribeInspectionTaskAttributeResponseBody& setDBClusterIds(string DBClusterIds) { DARABONBA_PTR_SET_VALUE(DBClusterIds_, DBClusterIds) };


    // expireTime Field Functions 
    bool hasExpireTime() const { return this->expireTime_ != nullptr;};
    void deleteExpireTime() { this->expireTime_ = nullptr;};
    inline string getExpireTime() const { DARABONBA_PTR_GET_DEFAULT(expireTime_, "") };
    inline DescribeInspectionTaskAttributeResponseBody& setExpireTime(string expireTime) { DARABONBA_PTR_SET_VALUE(expireTime_, expireTime) };


    // modifyTime Field Functions 
    bool hasModifyTime() const { return this->modifyTime_ != nullptr;};
    void deleteModifyTime() { this->modifyTime_ = nullptr;};
    inline string getModifyTime() const { DARABONBA_PTR_GET_DEFAULT(modifyTime_, "") };
    inline DescribeInspectionTaskAttributeResponseBody& setModifyTime(string modifyTime) { DARABONBA_PTR_SET_VALUE(modifyTime_, modifyTime) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeInspectionTaskAttributeResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // taskDescription Field Functions 
    bool hasTaskDescription() const { return this->taskDescription_ != nullptr;};
    void deleteTaskDescription() { this->taskDescription_ = nullptr;};
    inline string getTaskDescription() const { DARABONBA_PTR_GET_DEFAULT(taskDescription_, "") };
    inline DescribeInspectionTaskAttributeResponseBody& setTaskDescription(string taskDescription) { DARABONBA_PTR_SET_VALUE(taskDescription_, taskDescription) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline DescribeInspectionTaskAttributeResponseBody& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


  protected:
    // The creation date of the inspection task. The format is YYYY-MM-DD.
    shared_ptr<string> createTime_ {};
    // The cron expression for the scheduled inspection.
    shared_ptr<string> cronExpression_ {};
    // The IDs of the PolarDB clusters to be inspected. Separate multiple IDs with commas.
    shared_ptr<string> DBClusterIds_ {};
    // The expiration date of the inspection task. The format is YYYY-MM-DD.
    shared_ptr<string> expireTime_ {};
    // The last modification date of the inspection task. The format is YYYY-MM-DD.
    shared_ptr<string> modifyTime_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The description of the inspection task.
    shared_ptr<string> taskDescription_ {};
    // The ID of the inspection task.
    shared_ptr<string> taskId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
