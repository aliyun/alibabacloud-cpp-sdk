// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEJOBGROUPEXPORTTASKPROGRESSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEJOBGROUPEXPORTTASKPROGRESSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OutboundBot20191226
{
namespace Models
{
  class DescribeJobGroupExportTaskProgressRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeJobGroupExportTaskProgressRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeJobGroupExportTaskProgressRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
    };
    DescribeJobGroupExportTaskProgressRequest() = default ;
    DescribeJobGroupExportTaskProgressRequest(const DescribeJobGroupExportTaskProgressRequest &) = default ;
    DescribeJobGroupExportTaskProgressRequest(DescribeJobGroupExportTaskProgressRequest &&) = default ;
    DescribeJobGroupExportTaskProgressRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeJobGroupExportTaskProgressRequest() = default ;
    DescribeJobGroupExportTaskProgressRequest& operator=(const DescribeJobGroupExportTaskProgressRequest &) = default ;
    DescribeJobGroupExportTaskProgressRequest& operator=(DescribeJobGroupExportTaskProgressRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceId_ == nullptr
        && return this->taskId_ == nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DescribeJobGroupExportTaskProgressRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline DescribeJobGroupExportTaskProgressRequest& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


  protected:
    std::shared_ptr<string> instanceId_ = nullptr;
    std::shared_ptr<string> taskId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OutboundBot20191226
#endif
