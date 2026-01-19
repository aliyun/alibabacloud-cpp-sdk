// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESCHEDULEDPRELOADEXECUTIONSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATESCHEDULEDPRELOADEXECUTIONSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class CreateScheduledPreloadExecutionsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateScheduledPreloadExecutionsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Executions, executions_);
      DARABONBA_PTR_TO_JSON(Id, id_);
    };
    friend void from_json(const Darabonba::Json& j, CreateScheduledPreloadExecutionsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Executions, executions_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
    };
    CreateScheduledPreloadExecutionsRequest() = default ;
    CreateScheduledPreloadExecutionsRequest(const CreateScheduledPreloadExecutionsRequest &) = default ;
    CreateScheduledPreloadExecutionsRequest(CreateScheduledPreloadExecutionsRequest &&) = default ;
    CreateScheduledPreloadExecutionsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateScheduledPreloadExecutionsRequest() = default ;
    CreateScheduledPreloadExecutionsRequest& operator=(const CreateScheduledPreloadExecutionsRequest &) = default ;
    CreateScheduledPreloadExecutionsRequest& operator=(CreateScheduledPreloadExecutionsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Executions : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Executions& obj) { 
        DARABONBA_PTR_TO_JSON(EndTime, endTime_);
        DARABONBA_PTR_TO_JSON(Interval, interval_);
        DARABONBA_PTR_TO_JSON(SliceLen, sliceLen_);
        DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      };
      friend void from_json(const Darabonba::Json& j, Executions& obj) { 
        DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
        DARABONBA_PTR_FROM_JSON(Interval, interval_);
        DARABONBA_PTR_FROM_JSON(SliceLen, sliceLen_);
        DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      };
      Executions() = default ;
      Executions(const Executions &) = default ;
      Executions(Executions &&) = default ;
      Executions(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Executions() = default ;
      Executions& operator=(const Executions &) = default ;
      Executions& operator=(Executions &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->endTime_ == nullptr
        && this->interval_ == nullptr && this->sliceLen_ == nullptr && this->startTime_ == nullptr; };
      // endTime Field Functions 
      bool hasEndTime() const { return this->endTime_ != nullptr;};
      void deleteEndTime() { this->endTime_ = nullptr;};
      inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
      inline Executions& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


      // interval Field Functions 
      bool hasInterval() const { return this->interval_ != nullptr;};
      void deleteInterval() { this->interval_ = nullptr;};
      inline int32_t getInterval() const { DARABONBA_PTR_GET_DEFAULT(interval_, 0) };
      inline Executions& setInterval(int32_t interval) { DARABONBA_PTR_SET_VALUE(interval_, interval) };


      // sliceLen Field Functions 
      bool hasSliceLen() const { return this->sliceLen_ != nullptr;};
      void deleteSliceLen() { this->sliceLen_ = nullptr;};
      inline int32_t getSliceLen() const { DARABONBA_PTR_GET_DEFAULT(sliceLen_, 0) };
      inline Executions& setSliceLen(int32_t sliceLen) { DARABONBA_PTR_SET_VALUE(sliceLen_, sliceLen) };


      // startTime Field Functions 
      bool hasStartTime() const { return this->startTime_ != nullptr;};
      void deleteStartTime() { this->startTime_ = nullptr;};
      inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
      inline Executions& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    protected:
      // The end time of the prefetch plans.
      shared_ptr<string> endTime_ {};
      // The time interval between each batch execution. Unit: seconds.
      // 
      // This parameter is required.
      shared_ptr<int32_t> interval_ {};
      // The number of URLs prefetched in each batch.
      // 
      // This parameter is required.
      shared_ptr<int32_t> sliceLen_ {};
      // The start time of the prefetch plans.
      shared_ptr<string> startTime_ {};
    };

    virtual bool empty() const override { return this->executions_ == nullptr
        && this->id_ == nullptr; };
    // executions Field Functions 
    bool hasExecutions() const { return this->executions_ != nullptr;};
    void deleteExecutions() { this->executions_ = nullptr;};
    inline const vector<CreateScheduledPreloadExecutionsRequest::Executions> & getExecutions() const { DARABONBA_PTR_GET_CONST(executions_, vector<CreateScheduledPreloadExecutionsRequest::Executions>) };
    inline vector<CreateScheduledPreloadExecutionsRequest::Executions> getExecutions() { DARABONBA_PTR_GET(executions_, vector<CreateScheduledPreloadExecutionsRequest::Executions>) };
    inline CreateScheduledPreloadExecutionsRequest& setExecutions(const vector<CreateScheduledPreloadExecutionsRequest::Executions> & executions) { DARABONBA_PTR_SET_VALUE(executions_, executions) };
    inline CreateScheduledPreloadExecutionsRequest& setExecutions(vector<CreateScheduledPreloadExecutionsRequest::Executions> && executions) { DARABONBA_PTR_SET_RVALUE(executions_, executions) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline CreateScheduledPreloadExecutionsRequest& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


  protected:
    // The scheduled prefetch plans to create.
    // 
    // This parameter is required.
    shared_ptr<vector<CreateScheduledPreloadExecutionsRequest::Executions>> executions_ {};
    // The ID of the prefetch task, which is generated by calling the [CreateScheduledPreloadJob](https://help.aliyun.com/document_detail/2850459.html) operation.
    shared_ptr<string> id_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
