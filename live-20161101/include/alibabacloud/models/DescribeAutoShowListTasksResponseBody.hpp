// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAUTOSHOWLISTTASKSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAUTOSHOWLISTTASKSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeAutoShowListTasksResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAutoShowListTasksResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AutoShowListTasks, autoShowListTasks_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAutoShowListTasksResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AutoShowListTasks, autoShowListTasks_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeAutoShowListTasksResponseBody() = default ;
    DescribeAutoShowListTasksResponseBody(const DescribeAutoShowListTasksResponseBody &) = default ;
    DescribeAutoShowListTasksResponseBody(DescribeAutoShowListTasksResponseBody &&) = default ;
    DescribeAutoShowListTasksResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAutoShowListTasksResponseBody() = default ;
    DescribeAutoShowListTasksResponseBody& operator=(const DescribeAutoShowListTasksResponseBody &) = default ;
    DescribeAutoShowListTasksResponseBody& operator=(DescribeAutoShowListTasksResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->autoShowListTasks_ != nullptr
        && this->requestId_ != nullptr; };
    // autoShowListTasks Field Functions 
    bool hasAutoShowListTasks() const { return this->autoShowListTasks_ != nullptr;};
    void deleteAutoShowListTasks() { this->autoShowListTasks_ = nullptr;};
    inline string autoShowListTasks() const { DARABONBA_PTR_GET_DEFAULT(autoShowListTasks_, "") };
    inline DescribeAutoShowListTasksResponseBody& setAutoShowListTasks(string autoShowListTasks) { DARABONBA_PTR_SET_VALUE(autoShowListTasks_, autoShowListTasks) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeAutoShowListTasksResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The information about the scheduled tasks. The following fields are included:
    // 
    // *   Status: the status of the scheduled task. Valid values: 0 and 1. A value of 0 indicates that the scheduled task is paused. A value of 1 indicates that the scheduled task is started.
    // *   LiveTemplate: the transcoding templates.
    // *   TranscodeConfig: the transcoding configuration for the source URL.
    // *   CasterId: the ID of the production studio.
    std::shared_ptr<string> autoShowListTasks_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
