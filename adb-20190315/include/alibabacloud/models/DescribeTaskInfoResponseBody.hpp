// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBETASKINFORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBETASKINFORESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeTaskInfoResponseBodyTaskInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20190315
{
namespace Models
{
  class DescribeTaskInfoResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeTaskInfoResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TaskInfo, taskInfo_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeTaskInfoResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TaskInfo, taskInfo_);
    };
    DescribeTaskInfoResponseBody() = default ;
    DescribeTaskInfoResponseBody(const DescribeTaskInfoResponseBody &) = default ;
    DescribeTaskInfoResponseBody(DescribeTaskInfoResponseBody &&) = default ;
    DescribeTaskInfoResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeTaskInfoResponseBody() = default ;
    DescribeTaskInfoResponseBody& operator=(const DescribeTaskInfoResponseBody &) = default ;
    DescribeTaskInfoResponseBody& operator=(DescribeTaskInfoResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && return this->taskInfo_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeTaskInfoResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // taskInfo Field Functions 
    bool hasTaskInfo() const { return this->taskInfo_ != nullptr;};
    void deleteTaskInfo() { this->taskInfo_ = nullptr;};
    inline const DescribeTaskInfoResponseBodyTaskInfo & taskInfo() const { DARABONBA_PTR_GET_CONST(taskInfo_, DescribeTaskInfoResponseBodyTaskInfo) };
    inline DescribeTaskInfoResponseBodyTaskInfo taskInfo() { DARABONBA_PTR_GET(taskInfo_, DescribeTaskInfoResponseBodyTaskInfo) };
    inline DescribeTaskInfoResponseBody& setTaskInfo(const DescribeTaskInfoResponseBodyTaskInfo & taskInfo) { DARABONBA_PTR_SET_VALUE(taskInfo_, taskInfo) };
    inline DescribeTaskInfoResponseBody& setTaskInfo(DescribeTaskInfoResponseBodyTaskInfo && taskInfo) { DARABONBA_PTR_SET_RVALUE(taskInfo_, taskInfo) };


  protected:
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The queried task.
    std::shared_ptr<DescribeTaskInfoResponseBodyTaskInfo> taskInfo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20190315
#endif
