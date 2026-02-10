// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESOARSTRATEGYTASKPARAMSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESOARSTRATEGYTASKPARAMSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeSoarStrategyTaskParamsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSoarStrategyTaskParamsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TaskDetail, taskDetail_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSoarStrategyTaskParamsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TaskDetail, taskDetail_);
    };
    DescribeSoarStrategyTaskParamsResponseBody() = default ;
    DescribeSoarStrategyTaskParamsResponseBody(const DescribeSoarStrategyTaskParamsResponseBody &) = default ;
    DescribeSoarStrategyTaskParamsResponseBody(DescribeSoarStrategyTaskParamsResponseBody &&) = default ;
    DescribeSoarStrategyTaskParamsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSoarStrategyTaskParamsResponseBody() = default ;
    DescribeSoarStrategyTaskParamsResponseBody& operator=(const DescribeSoarStrategyTaskParamsResponseBody &) = default ;
    DescribeSoarStrategyTaskParamsResponseBody& operator=(DescribeSoarStrategyTaskParamsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class TaskDetail : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const TaskDetail& obj) { 
        DARABONBA_PTR_TO_JSON(Params, params_);
        DARABONBA_PTR_TO_JSON(TaskName, taskName_);
      };
      friend void from_json(const Darabonba::Json& j, TaskDetail& obj) { 
        DARABONBA_PTR_FROM_JSON(Params, params_);
        DARABONBA_PTR_FROM_JSON(TaskName, taskName_);
      };
      TaskDetail() = default ;
      TaskDetail(const TaskDetail &) = default ;
      TaskDetail(TaskDetail &&) = default ;
      TaskDetail(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~TaskDetail() = default ;
      TaskDetail& operator=(const TaskDetail &) = default ;
      TaskDetail& operator=(TaskDetail &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->params_ == nullptr
        && this->taskName_ == nullptr; };
      // params Field Functions 
      bool hasParams() const { return this->params_ != nullptr;};
      void deleteParams() { this->params_ = nullptr;};
      inline string getParams() const { DARABONBA_PTR_GET_DEFAULT(params_, "") };
      inline TaskDetail& setParams(string params) { DARABONBA_PTR_SET_VALUE(params_, params) };


      // taskName Field Functions 
      bool hasTaskName() const { return this->taskName_ != nullptr;};
      void deleteTaskName() { this->taskName_ = nullptr;};
      inline string getTaskName() const { DARABONBA_PTR_GET_DEFAULT(taskName_, "") };
      inline TaskDetail& setTaskName(string taskName) { DARABONBA_PTR_SET_VALUE(taskName_, taskName) };


    protected:
      // Task parameters.
      shared_ptr<string> params_ {};
      // 任务名称。
      shared_ptr<string> taskName_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->taskDetail_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeSoarStrategyTaskParamsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // taskDetail Field Functions 
    bool hasTaskDetail() const { return this->taskDetail_ != nullptr;};
    void deleteTaskDetail() { this->taskDetail_ = nullptr;};
    inline const DescribeSoarStrategyTaskParamsResponseBody::TaskDetail & getTaskDetail() const { DARABONBA_PTR_GET_CONST(taskDetail_, DescribeSoarStrategyTaskParamsResponseBody::TaskDetail) };
    inline DescribeSoarStrategyTaskParamsResponseBody::TaskDetail getTaskDetail() { DARABONBA_PTR_GET(taskDetail_, DescribeSoarStrategyTaskParamsResponseBody::TaskDetail) };
    inline DescribeSoarStrategyTaskParamsResponseBody& setTaskDetail(const DescribeSoarStrategyTaskParamsResponseBody::TaskDetail & taskDetail) { DARABONBA_PTR_SET_VALUE(taskDetail_, taskDetail) };
    inline DescribeSoarStrategyTaskParamsResponseBody& setTaskDetail(DescribeSoarStrategyTaskParamsResponseBody::TaskDetail && taskDetail) { DARABONBA_PTR_SET_RVALUE(taskDetail_, taskDetail) };


  protected:
    // The ID of this request, which is a unique identifier generated by Alibaba Cloud for this request, and can be used to troubleshoot and locate issues.
    shared_ptr<string> requestId_ {};
    // Task details.
    shared_ptr<DescribeSoarStrategyTaskParamsResponseBody::TaskDetail> taskDetail_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
