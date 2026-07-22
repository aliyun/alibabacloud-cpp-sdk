// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBETASKDISPATCHSTATUSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBETASKDISPATCHSTATUSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class DescribeTaskDispatchStatusRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeTaskDispatchStatusRequest& obj) { 
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeTaskDispatchStatusRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
    };
    DescribeTaskDispatchStatusRequest() = default ;
    DescribeTaskDispatchStatusRequest(const DescribeTaskDispatchStatusRequest &) = default ;
    DescribeTaskDispatchStatusRequest(DescribeTaskDispatchStatusRequest &&) = default ;
    DescribeTaskDispatchStatusRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeTaskDispatchStatusRequest() = default ;
    DescribeTaskDispatchStatusRequest& operator=(const DescribeTaskDispatchStatusRequest &) = default ;
    DescribeTaskDispatchStatusRequest& operator=(DescribeTaskDispatchStatusRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->taskId_ == nullptr; };
    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline DescribeTaskDispatchStatusRequest& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


  protected:
    // The task ID, which is the unique identifier of the log configuration modification task. Obtain this value from the TaskId response parameter of the ModifySlsDispatchConfig operation.
    shared_ptr<string> taskId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
