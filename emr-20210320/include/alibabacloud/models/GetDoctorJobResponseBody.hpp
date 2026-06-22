// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDOCTORJOBRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETDOCTORJOBRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Emr20210320
{
namespace Models
{
  class GetDoctorJobResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDoctorJobResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetDoctorJobResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetDoctorJobResponseBody() = default ;
    GetDoctorJobResponseBody(const GetDoctorJobResponseBody &) = default ;
    GetDoctorJobResponseBody(GetDoctorJobResponseBody &&) = default ;
    GetDoctorJobResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDoctorJobResponseBody() = default ;
    GetDoctorJobResponseBody& operator=(const GetDoctorJobResponseBody &) = default ;
    GetDoctorJobResponseBody& operator=(GetDoctorJobResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(AppId, appId_);
        DARABONBA_PTR_TO_JSON(AppName, appName_);
        DARABONBA_PTR_TO_JSON(ElapsedTime, elapsedTime_);
        DARABONBA_PTR_TO_JSON(FinalStatus, finalStatus_);
        DARABONBA_PTR_TO_JSON(FinishTime, finishTime_);
        DARABONBA_PTR_TO_JSON(LaunchTime, launchTime_);
        DARABONBA_PTR_TO_JSON(Metrics, metrics_);
        DARABONBA_PTR_TO_JSON(Queue, queue_);
        DARABONBA_PTR_TO_JSON(StartTime, startTime_);
        DARABONBA_PTR_TO_JSON(State, state_);
        DARABONBA_PTR_TO_JSON(Type, type_);
        DARABONBA_PTR_TO_JSON(User, user_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(AppId, appId_);
        DARABONBA_PTR_FROM_JSON(AppName, appName_);
        DARABONBA_PTR_FROM_JSON(ElapsedTime, elapsedTime_);
        DARABONBA_PTR_FROM_JSON(FinalStatus, finalStatus_);
        DARABONBA_PTR_FROM_JSON(FinishTime, finishTime_);
        DARABONBA_PTR_FROM_JSON(LaunchTime, launchTime_);
        DARABONBA_PTR_FROM_JSON(Metrics, metrics_);
        DARABONBA_PTR_FROM_JSON(Queue, queue_);
        DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
        DARABONBA_PTR_FROM_JSON(State, state_);
        DARABONBA_PTR_FROM_JSON(Type, type_);
        DARABONBA_PTR_FROM_JSON(User, user_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Metrics : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Metrics& obj) { 
          DARABONBA_PTR_TO_JSON(MemSeconds, memSeconds_);
          DARABONBA_PTR_TO_JSON(VcoreSeconds, vcoreSeconds_);
        };
        friend void from_json(const Darabonba::Json& j, Metrics& obj) { 
          DARABONBA_PTR_FROM_JSON(MemSeconds, memSeconds_);
          DARABONBA_PTR_FROM_JSON(VcoreSeconds, vcoreSeconds_);
        };
        Metrics() = default ;
        Metrics(const Metrics &) = default ;
        Metrics(Metrics &&) = default ;
        Metrics(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Metrics() = default ;
        Metrics& operator=(const Metrics &) = default ;
        Metrics& operator=(Metrics &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class VcoreSeconds : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const VcoreSeconds& obj) { 
            DARABONBA_PTR_TO_JSON(Description, description_);
            DARABONBA_PTR_TO_JSON(Name, name_);
            DARABONBA_PTR_TO_JSON(Unit, unit_);
            DARABONBA_PTR_TO_JSON(Value, value_);
          };
          friend void from_json(const Darabonba::Json& j, VcoreSeconds& obj) { 
            DARABONBA_PTR_FROM_JSON(Description, description_);
            DARABONBA_PTR_FROM_JSON(Name, name_);
            DARABONBA_PTR_FROM_JSON(Unit, unit_);
            DARABONBA_PTR_FROM_JSON(Value, value_);
          };
          VcoreSeconds() = default ;
          VcoreSeconds(const VcoreSeconds &) = default ;
          VcoreSeconds(VcoreSeconds &&) = default ;
          VcoreSeconds(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~VcoreSeconds() = default ;
          VcoreSeconds& operator=(const VcoreSeconds &) = default ;
          VcoreSeconds& operator=(VcoreSeconds &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->description_ == nullptr
        && this->name_ == nullptr && this->unit_ == nullptr && this->value_ == nullptr; };
          // description Field Functions 
          bool hasDescription() const { return this->description_ != nullptr;};
          void deleteDescription() { this->description_ = nullptr;};
          inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
          inline VcoreSeconds& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


          // name Field Functions 
          bool hasName() const { return this->name_ != nullptr;};
          void deleteName() { this->name_ = nullptr;};
          inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
          inline VcoreSeconds& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


          // unit Field Functions 
          bool hasUnit() const { return this->unit_ != nullptr;};
          void deleteUnit() { this->unit_ = nullptr;};
          inline string getUnit() const { DARABONBA_PTR_GET_DEFAULT(unit_, "") };
          inline VcoreSeconds& setUnit(string unit) { DARABONBA_PTR_SET_VALUE(unit_, unit) };


          // value Field Functions 
          bool hasValue() const { return this->value_ != nullptr;};
          void deleteValue() { this->value_ = nullptr;};
          inline int64_t getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, 0L) };
          inline VcoreSeconds& setValue(int64_t value) { DARABONBA_PTR_SET_VALUE(value_, value) };


        protected:
          // The description of the metric.
          shared_ptr<string> description_ {};
          // The name of the metric.
          shared_ptr<string> name_ {};
          // The unit of the metric.
          shared_ptr<string> unit_ {};
          // The value of the metric.
          shared_ptr<int64_t> value_ {};
        };

        class MemSeconds : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const MemSeconds& obj) { 
            DARABONBA_PTR_TO_JSON(Description, description_);
            DARABONBA_PTR_TO_JSON(Name, name_);
            DARABONBA_PTR_TO_JSON(Unit, unit_);
            DARABONBA_PTR_TO_JSON(Value, value_);
          };
          friend void from_json(const Darabonba::Json& j, MemSeconds& obj) { 
            DARABONBA_PTR_FROM_JSON(Description, description_);
            DARABONBA_PTR_FROM_JSON(Name, name_);
            DARABONBA_PTR_FROM_JSON(Unit, unit_);
            DARABONBA_PTR_FROM_JSON(Value, value_);
          };
          MemSeconds() = default ;
          MemSeconds(const MemSeconds &) = default ;
          MemSeconds(MemSeconds &&) = default ;
          MemSeconds(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~MemSeconds() = default ;
          MemSeconds& operator=(const MemSeconds &) = default ;
          MemSeconds& operator=(MemSeconds &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->description_ == nullptr
        && this->name_ == nullptr && this->unit_ == nullptr && this->value_ == nullptr; };
          // description Field Functions 
          bool hasDescription() const { return this->description_ != nullptr;};
          void deleteDescription() { this->description_ = nullptr;};
          inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
          inline MemSeconds& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


          // name Field Functions 
          bool hasName() const { return this->name_ != nullptr;};
          void deleteName() { this->name_ = nullptr;};
          inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
          inline MemSeconds& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


          // unit Field Functions 
          bool hasUnit() const { return this->unit_ != nullptr;};
          void deleteUnit() { this->unit_ = nullptr;};
          inline string getUnit() const { DARABONBA_PTR_GET_DEFAULT(unit_, "") };
          inline MemSeconds& setUnit(string unit) { DARABONBA_PTR_SET_VALUE(unit_, unit) };


          // value Field Functions 
          bool hasValue() const { return this->value_ != nullptr;};
          void deleteValue() { this->value_ = nullptr;};
          inline int64_t getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, 0L) };
          inline MemSeconds& setValue(int64_t value) { DARABONBA_PTR_SET_VALUE(value_, value) };


        protected:
          // The description of the metric.
          shared_ptr<string> description_ {};
          // The name of the metric.
          shared_ptr<string> name_ {};
          // The unit of the metric.
          shared_ptr<string> unit_ {};
          // The value of the metric.
          shared_ptr<int64_t> value_ {};
        };

        virtual bool empty() const override { return this->memSeconds_ == nullptr
        && this->vcoreSeconds_ == nullptr; };
        // memSeconds Field Functions 
        bool hasMemSeconds() const { return this->memSeconds_ != nullptr;};
        void deleteMemSeconds() { this->memSeconds_ = nullptr;};
        inline const Metrics::MemSeconds & getMemSeconds() const { DARABONBA_PTR_GET_CONST(memSeconds_, Metrics::MemSeconds) };
        inline Metrics::MemSeconds getMemSeconds() { DARABONBA_PTR_GET(memSeconds_, Metrics::MemSeconds) };
        inline Metrics& setMemSeconds(const Metrics::MemSeconds & memSeconds) { DARABONBA_PTR_SET_VALUE(memSeconds_, memSeconds) };
        inline Metrics& setMemSeconds(Metrics::MemSeconds && memSeconds) { DARABONBA_PTR_SET_RVALUE(memSeconds_, memSeconds) };


        // vcoreSeconds Field Functions 
        bool hasVcoreSeconds() const { return this->vcoreSeconds_ != nullptr;};
        void deleteVcoreSeconds() { this->vcoreSeconds_ = nullptr;};
        inline const Metrics::VcoreSeconds & getVcoreSeconds() const { DARABONBA_PTR_GET_CONST(vcoreSeconds_, Metrics::VcoreSeconds) };
        inline Metrics::VcoreSeconds getVcoreSeconds() { DARABONBA_PTR_GET(vcoreSeconds_, Metrics::VcoreSeconds) };
        inline Metrics& setVcoreSeconds(const Metrics::VcoreSeconds & vcoreSeconds) { DARABONBA_PTR_SET_VALUE(vcoreSeconds_, vcoreSeconds) };
        inline Metrics& setVcoreSeconds(Metrics::VcoreSeconds && vcoreSeconds) { DARABONBA_PTR_SET_RVALUE(vcoreSeconds_, vcoreSeconds) };


      protected:
        // The amount of memory consumed.
        shared_ptr<Metrics::MemSeconds> memSeconds_ {};
        // The CPU usage.
        shared_ptr<Metrics::VcoreSeconds> vcoreSeconds_ {};
      };

      virtual bool empty() const override { return this->appId_ == nullptr
        && this->appName_ == nullptr && this->elapsedTime_ == nullptr && this->finalStatus_ == nullptr && this->finishTime_ == nullptr && this->launchTime_ == nullptr
        && this->metrics_ == nullptr && this->queue_ == nullptr && this->startTime_ == nullptr && this->state_ == nullptr && this->type_ == nullptr
        && this->user_ == nullptr; };
      // appId Field Functions 
      bool hasAppId() const { return this->appId_ != nullptr;};
      void deleteAppId() { this->appId_ = nullptr;};
      inline string getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
      inline Data& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


      // appName Field Functions 
      bool hasAppName() const { return this->appName_ != nullptr;};
      void deleteAppName() { this->appName_ = nullptr;};
      inline string getAppName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
      inline Data& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


      // elapsedTime Field Functions 
      bool hasElapsedTime() const { return this->elapsedTime_ != nullptr;};
      void deleteElapsedTime() { this->elapsedTime_ = nullptr;};
      inline int64_t getElapsedTime() const { DARABONBA_PTR_GET_DEFAULT(elapsedTime_, 0L) };
      inline Data& setElapsedTime(int64_t elapsedTime) { DARABONBA_PTR_SET_VALUE(elapsedTime_, elapsedTime) };


      // finalStatus Field Functions 
      bool hasFinalStatus() const { return this->finalStatus_ != nullptr;};
      void deleteFinalStatus() { this->finalStatus_ = nullptr;};
      inline string getFinalStatus() const { DARABONBA_PTR_GET_DEFAULT(finalStatus_, "") };
      inline Data& setFinalStatus(string finalStatus) { DARABONBA_PTR_SET_VALUE(finalStatus_, finalStatus) };


      // finishTime Field Functions 
      bool hasFinishTime() const { return this->finishTime_ != nullptr;};
      void deleteFinishTime() { this->finishTime_ = nullptr;};
      inline int64_t getFinishTime() const { DARABONBA_PTR_GET_DEFAULT(finishTime_, 0L) };
      inline Data& setFinishTime(int64_t finishTime) { DARABONBA_PTR_SET_VALUE(finishTime_, finishTime) };


      // launchTime Field Functions 
      bool hasLaunchTime() const { return this->launchTime_ != nullptr;};
      void deleteLaunchTime() { this->launchTime_ = nullptr;};
      inline int64_t getLaunchTime() const { DARABONBA_PTR_GET_DEFAULT(launchTime_, 0L) };
      inline Data& setLaunchTime(int64_t launchTime) { DARABONBA_PTR_SET_VALUE(launchTime_, launchTime) };


      // metrics Field Functions 
      bool hasMetrics() const { return this->metrics_ != nullptr;};
      void deleteMetrics() { this->metrics_ = nullptr;};
      inline const Data::Metrics & getMetrics() const { DARABONBA_PTR_GET_CONST(metrics_, Data::Metrics) };
      inline Data::Metrics getMetrics() { DARABONBA_PTR_GET(metrics_, Data::Metrics) };
      inline Data& setMetrics(const Data::Metrics & metrics) { DARABONBA_PTR_SET_VALUE(metrics_, metrics) };
      inline Data& setMetrics(Data::Metrics && metrics) { DARABONBA_PTR_SET_RVALUE(metrics_, metrics) };


      // queue Field Functions 
      bool hasQueue() const { return this->queue_ != nullptr;};
      void deleteQueue() { this->queue_ = nullptr;};
      inline string getQueue() const { DARABONBA_PTR_GET_DEFAULT(queue_, "") };
      inline Data& setQueue(string queue) { DARABONBA_PTR_SET_VALUE(queue_, queue) };


      // startTime Field Functions 
      bool hasStartTime() const { return this->startTime_ != nullptr;};
      void deleteStartTime() { this->startTime_ = nullptr;};
      inline int64_t getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
      inline Data& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


      // state Field Functions 
      bool hasState() const { return this->state_ != nullptr;};
      void deleteState() { this->state_ = nullptr;};
      inline string getState() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
      inline Data& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline Data& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      // user Field Functions 
      bool hasUser() const { return this->user_ != nullptr;};
      void deleteUser() { this->user_ = nullptr;};
      inline string getUser() const { DARABONBA_PTR_GET_DEFAULT(user_, "") };
      inline Data& setUser(string user) { DARABONBA_PTR_SET_VALUE(user_, user) };


    protected:
      // The ID of the job that was submitted to YARN.
      shared_ptr<string> appId_ {};
      // The name of the job.
      shared_ptr<string> appName_ {};
      // The total running time of the job. Unit: milliseconds.
      shared_ptr<int64_t> elapsedTime_ {};
      // The final state of the job. Valid values:
      // 
      // *   SUCCEEDED
      // *   FAILED
      // *   KILLED
      // *   ENDED
      // *   UNDEFINED
      shared_ptr<string> finalStatus_ {};
      // The time when the job ended. This value is a UNIX timestamp representing the number of milliseconds that have elapsed since January 1, 1970, 00:00:00 UTC. Unit: milliseconds.
      shared_ptr<int64_t> finishTime_ {};
      // The time when the job was started. This value is a UNIX timestamp representing the number of milliseconds that have elapsed since January 1, 1970, 00:00:00 UTC. Unit: milliseconds.
      shared_ptr<int64_t> launchTime_ {};
      // The data about metrics.
      shared_ptr<Data::Metrics> metrics_ {};
      // The YARN queue to which the job was submitted.
      shared_ptr<string> queue_ {};
      // The time when the job was submitted. This value is a UNIX timestamp representing the number of milliseconds that have elapsed since January 1, 1970, 00:00:00 UTC. Unit: milliseconds.
      shared_ptr<int64_t> startTime_ {};
      // The running state of the job. Valid values:
      // 
      // *   FINISHED
      // *   FAILED
      // *   KILLED
      shared_ptr<string> state_ {};
      // The type of the compute engine.
      shared_ptr<string> type_ {};
      // The username that was used to submit the job.
      shared_ptr<string> user_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetDoctorJobResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetDoctorJobResponseBody::Data) };
    inline GetDoctorJobResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetDoctorJobResponseBody::Data) };
    inline GetDoctorJobResponseBody& setData(const GetDoctorJobResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetDoctorJobResponseBody& setData(GetDoctorJobResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetDoctorJobResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The information about the job.
    shared_ptr<GetDoctorJobResponseBody::Data> data_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Emr20210320
#endif
