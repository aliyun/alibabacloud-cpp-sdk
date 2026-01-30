// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYPREDICTIVETASKINFORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYPREDICTIVETASKINFORESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ess20220222
{
namespace Models
{
  class QueryPredictiveTaskInfoResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryPredictiveTaskInfoResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TaskInfos, taskInfos_);
    };
    friend void from_json(const Darabonba::Json& j, QueryPredictiveTaskInfoResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TaskInfos, taskInfos_);
    };
    QueryPredictiveTaskInfoResponseBody() = default ;
    QueryPredictiveTaskInfoResponseBody(const QueryPredictiveTaskInfoResponseBody &) = default ;
    QueryPredictiveTaskInfoResponseBody(QueryPredictiveTaskInfoResponseBody &&) = default ;
    QueryPredictiveTaskInfoResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryPredictiveTaskInfoResponseBody() = default ;
    QueryPredictiveTaskInfoResponseBody& operator=(const QueryPredictiveTaskInfoResponseBody &) = default ;
    QueryPredictiveTaskInfoResponseBody& operator=(QueryPredictiveTaskInfoResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class TaskInfos : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const TaskInfos& obj) { 
        DARABONBA_PTR_TO_JSON(TaskInfo, taskInfo_);
      };
      friend void from_json(const Darabonba::Json& j, TaskInfos& obj) { 
        DARABONBA_PTR_FROM_JSON(TaskInfo, taskInfo_);
      };
      TaskInfos() = default ;
      TaskInfos(const TaskInfos &) = default ;
      TaskInfos(TaskInfos &&) = default ;
      TaskInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~TaskInfos() = default ;
      TaskInfos& operator=(const TaskInfos &) = default ;
      TaskInfos& operator=(TaskInfos &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class TaskInfo : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const TaskInfo& obj) { 
          DARABONBA_PTR_TO_JSON(MaxValue, maxValue_);
          DARABONBA_PTR_TO_JSON(MinValue, minValue_);
          DARABONBA_PTR_TO_JSON(Time, time_);
        };
        friend void from_json(const Darabonba::Json& j, TaskInfo& obj) { 
          DARABONBA_PTR_FROM_JSON(MaxValue, maxValue_);
          DARABONBA_PTR_FROM_JSON(MinValue, minValue_);
          DARABONBA_PTR_FROM_JSON(Time, time_);
        };
        TaskInfo() = default ;
        TaskInfo(const TaskInfo &) = default ;
        TaskInfo(TaskInfo &&) = default ;
        TaskInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~TaskInfo() = default ;
        TaskInfo& operator=(const TaskInfo &) = default ;
        TaskInfo& operator=(TaskInfo &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->maxValue_ == nullptr
        && this->minValue_ == nullptr && this->time_ == nullptr; };
        // maxValue Field Functions 
        bool hasMaxValue() const { return this->maxValue_ != nullptr;};
        void deleteMaxValue() { this->maxValue_ = nullptr;};
        inline int32_t getMaxValue() const { DARABONBA_PTR_GET_DEFAULT(maxValue_, 0) };
        inline TaskInfo& setMaxValue(int32_t maxValue) { DARABONBA_PTR_SET_VALUE(maxValue_, maxValue) };


        // minValue Field Functions 
        bool hasMinValue() const { return this->minValue_ != nullptr;};
        void deleteMinValue() { this->minValue_ = nullptr;};
        inline int32_t getMinValue() const { DARABONBA_PTR_GET_DEFAULT(minValue_, 0) };
        inline TaskInfo& setMinValue(int32_t minValue) { DARABONBA_PTR_SET_VALUE(minValue_, minValue) };


        // time Field Functions 
        bool hasTime() const { return this->time_ != nullptr;};
        void deleteTime() { this->time_ = nullptr;};
        inline string getTime() const { DARABONBA_PTR_GET_DEFAULT(time_, "") };
        inline TaskInfo& setTime(string time) { DARABONBA_PTR_SET_VALUE(time_, time) };


      protected:
        // The maximum size of the scaling group that you want to create.
        shared_ptr<int32_t> maxValue_ {};
        // The minimum size of the scaling group that you want to create.
        shared_ptr<int32_t> minValue_ {};
        // The point in time at which the scheduled task is triggered. The value follows the ISO 8601 standard in the yyyy-MM-ddTHH:mmZ format.
        shared_ptr<string> time_ {};
      };

      virtual bool empty() const override { return this->taskInfo_ == nullptr; };
      // taskInfo Field Functions 
      bool hasTaskInfo() const { return this->taskInfo_ != nullptr;};
      void deleteTaskInfo() { this->taskInfo_ = nullptr;};
      inline const vector<TaskInfos::TaskInfo> & getTaskInfo() const { DARABONBA_PTR_GET_CONST(taskInfo_, vector<TaskInfos::TaskInfo>) };
      inline vector<TaskInfos::TaskInfo> getTaskInfo() { DARABONBA_PTR_GET(taskInfo_, vector<TaskInfos::TaskInfo>) };
      inline TaskInfos& setTaskInfo(const vector<TaskInfos::TaskInfo> & taskInfo) { DARABONBA_PTR_SET_VALUE(taskInfo_, taskInfo) };
      inline TaskInfos& setTaskInfo(vector<TaskInfos::TaskInfo> && taskInfo) { DARABONBA_PTR_SET_RVALUE(taskInfo_, taskInfo) };


    protected:
      shared_ptr<vector<TaskInfos::TaskInfo>> taskInfo_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->taskInfos_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryPredictiveTaskInfoResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // taskInfos Field Functions 
    bool hasTaskInfos() const { return this->taskInfos_ != nullptr;};
    void deleteTaskInfos() { this->taskInfos_ = nullptr;};
    inline const QueryPredictiveTaskInfoResponseBody::TaskInfos & getTaskInfos() const { DARABONBA_PTR_GET_CONST(taskInfos_, QueryPredictiveTaskInfoResponseBody::TaskInfos) };
    inline QueryPredictiveTaskInfoResponseBody::TaskInfos getTaskInfos() { DARABONBA_PTR_GET(taskInfos_, QueryPredictiveTaskInfoResponseBody::TaskInfos) };
    inline QueryPredictiveTaskInfoResponseBody& setTaskInfos(const QueryPredictiveTaskInfoResponseBody::TaskInfos & taskInfos) { DARABONBA_PTR_SET_VALUE(taskInfos_, taskInfos) };
    inline QueryPredictiveTaskInfoResponseBody& setTaskInfos(QueryPredictiveTaskInfoResponseBody::TaskInfos && taskInfos) { DARABONBA_PTR_SET_RVALUE(taskInfos_, taskInfos) };


  protected:
    // Request ID.
    shared_ptr<string> requestId_ {};
    // The scheduled task generated by the prediction rule.
    shared_ptr<QueryPredictiveTaskInfoResponseBody::TaskInfos> taskInfos_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ess20220222
#endif
