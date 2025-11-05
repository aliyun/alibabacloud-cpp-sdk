// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPRELOADDETAILBYIDREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPRELOADDETAILBYIDREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cdn20180510
{
namespace Models
{
  class DescribePreloadDetailByIdRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePreloadDetailByIdRequest& obj) { 
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePreloadDetailByIdRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
    };
    DescribePreloadDetailByIdRequest() = default ;
    DescribePreloadDetailByIdRequest(const DescribePreloadDetailByIdRequest &) = default ;
    DescribePreloadDetailByIdRequest(DescribePreloadDetailByIdRequest &&) = default ;
    DescribePreloadDetailByIdRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePreloadDetailByIdRequest() = default ;
    DescribePreloadDetailByIdRequest& operator=(const DescribePreloadDetailByIdRequest &) = default ;
    DescribePreloadDetailByIdRequest& operator=(DescribePreloadDetailByIdRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->taskId_ == nullptr; };
    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline DescribePreloadDetailByIdRequest& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


  protected:
    // Queries the details of a preload task by task ID. You can query one task ID at a time.
    // 
    // This parameter is required.
    std::shared_ptr<string> taskId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cdn20180510
#endif
