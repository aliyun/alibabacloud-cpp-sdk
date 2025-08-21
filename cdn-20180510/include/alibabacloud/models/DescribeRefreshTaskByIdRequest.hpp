// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEREFRESHTASKBYIDREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEREFRESHTASKBYIDREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cdn20180510
{
namespace Models
{
  class DescribeRefreshTaskByIdRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRefreshTaskByIdRequest& obj) { 
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRefreshTaskByIdRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
    };
    DescribeRefreshTaskByIdRequest() = default ;
    DescribeRefreshTaskByIdRequest(const DescribeRefreshTaskByIdRequest &) = default ;
    DescribeRefreshTaskByIdRequest(DescribeRefreshTaskByIdRequest &&) = default ;
    DescribeRefreshTaskByIdRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRefreshTaskByIdRequest() = default ;
    DescribeRefreshTaskByIdRequest& operator=(const DescribeRefreshTaskByIdRequest &) = default ;
    DescribeRefreshTaskByIdRequest& operator=(DescribeRefreshTaskByIdRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->taskId_ != nullptr; };
    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline DescribeRefreshTaskByIdRequest& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


  protected:
    // The ID of the task that you want to query.
    // 
    // You can call the [RefreshObjectCaches](https://help.aliyun.com/document_detail/91164.html) operation to query task IDs. Then, you can use the task IDs to query task status.
    // 
    // You can specify up to 10 task IDs. Separate task IDs with commas (,).
    // 
    // This parameter is required.
    std::shared_ptr<string> taskId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cdn20180510
#endif
