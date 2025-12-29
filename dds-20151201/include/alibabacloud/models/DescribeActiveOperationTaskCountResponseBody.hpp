// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEACTIVEOPERATIONTASKCOUNTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEACTIVEOPERATIONTASKCOUNTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dds20151201
{
namespace Models
{
  class DescribeActiveOperationTaskCountResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeActiveOperationTaskCountResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(NeedPop, needPop_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TaskCount, taskCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeActiveOperationTaskCountResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(NeedPop, needPop_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TaskCount, taskCount_);
    };
    DescribeActiveOperationTaskCountResponseBody() = default ;
    DescribeActiveOperationTaskCountResponseBody(const DescribeActiveOperationTaskCountResponseBody &) = default ;
    DescribeActiveOperationTaskCountResponseBody(DescribeActiveOperationTaskCountResponseBody &&) = default ;
    DescribeActiveOperationTaskCountResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeActiveOperationTaskCountResponseBody() = default ;
    DescribeActiveOperationTaskCountResponseBody& operator=(const DescribeActiveOperationTaskCountResponseBody &) = default ;
    DescribeActiveOperationTaskCountResponseBody& operator=(DescribeActiveOperationTaskCountResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->needPop_ == nullptr
        && this->requestId_ == nullptr && this->taskCount_ == nullptr; };
    // needPop Field Functions 
    bool hasNeedPop() const { return this->needPop_ != nullptr;};
    void deleteNeedPop() { this->needPop_ = nullptr;};
    inline int32_t getNeedPop() const { DARABONBA_PTR_GET_DEFAULT(needPop_, 0) };
    inline DescribeActiveOperationTaskCountResponseBody& setNeedPop(int32_t needPop) { DARABONBA_PTR_SET_VALUE(needPop_, needPop) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeActiveOperationTaskCountResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // taskCount Field Functions 
    bool hasTaskCount() const { return this->taskCount_ != nullptr;};
    void deleteTaskCount() { this->taskCount_ = nullptr;};
    inline int32_t getTaskCount() const { DARABONBA_PTR_GET_DEFAULT(taskCount_, 0) };
    inline DescribeActiveOperationTaskCountResponseBody& setTaskCount(int32_t taskCount) { DARABONBA_PTR_SET_VALUE(taskCount_, taskCount) };


  protected:
    // Indicates whether any O\\&M tasks need pop-up windows to notify users actions. Valid values:
    // 
    // *   **0**: No O\\&M tasks need pop-up windows to notify users actions.
    // *   **1**: Some O\\&M tasks need pop-up windows to notify users actions.
    shared_ptr<int32_t> needPop_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The number of pending O\\&M tasks.
    shared_ptr<int32_t> taskCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dds20151201
#endif
