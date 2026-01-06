// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAUTOSCALINGHISTORYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAUTOSCALINGHISTORYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DAS20200116
{
namespace Models
{
  class DescribeAutoScalingHistoryResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAutoScalingHistoryResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAutoScalingHistoryResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    DescribeAutoScalingHistoryResponseBody() = default ;
    DescribeAutoScalingHistoryResponseBody(const DescribeAutoScalingHistoryResponseBody &) = default ;
    DescribeAutoScalingHistoryResponseBody(DescribeAutoScalingHistoryResponseBody &&) = default ;
    DescribeAutoScalingHistoryResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAutoScalingHistoryResponseBody() = default ;
    DescribeAutoScalingHistoryResponseBody& operator=(const DescribeAutoScalingHistoryResponseBody &) = default ;
    DescribeAutoScalingHistoryResponseBody& operator=(DescribeAutoScalingHistoryResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(Bandwidth, bandwidth_);
        DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_TO_JSON(Resource, resource_);
        DARABONBA_PTR_TO_JSON(Shard, shard_);
        DARABONBA_PTR_TO_JSON(SpecHistory, specHistory_);
        DARABONBA_PTR_TO_JSON(Storage, storage_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(Bandwidth, bandwidth_);
        DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_FROM_JSON(Resource, resource_);
        DARABONBA_PTR_FROM_JSON(Shard, shard_);
        DARABONBA_PTR_FROM_JSON(SpecHistory, specHistory_);
        DARABONBA_PTR_FROM_JSON(Storage, storage_);
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
      class SpecHistory : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const SpecHistory& obj) { 
          DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
          DARABONBA_PTR_TO_JSON(OriginCore, originCore_);
          DARABONBA_PTR_TO_JSON(OriginInstanceClass, originInstanceClass_);
          DARABONBA_PTR_TO_JSON(OriginMemory, originMemory_);
          DARABONBA_PTR_TO_JSON(ScaleType, scaleType_);
          DARABONBA_PTR_TO_JSON(TargetCore, targetCore_);
          DARABONBA_PTR_TO_JSON(TargetInstanceClass, targetInstanceClass_);
          DARABONBA_PTR_TO_JSON(TargetMemory, targetMemory_);
          DARABONBA_PTR_TO_JSON(TaskExcuteStatus, taskExcuteStatus_);
          DARABONBA_PTR_TO_JSON(TaskTime, taskTime_);
        };
        friend void from_json(const Darabonba::Json& j, SpecHistory& obj) { 
          DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
          DARABONBA_PTR_FROM_JSON(OriginCore, originCore_);
          DARABONBA_PTR_FROM_JSON(OriginInstanceClass, originInstanceClass_);
          DARABONBA_PTR_FROM_JSON(OriginMemory, originMemory_);
          DARABONBA_PTR_FROM_JSON(ScaleType, scaleType_);
          DARABONBA_PTR_FROM_JSON(TargetCore, targetCore_);
          DARABONBA_PTR_FROM_JSON(TargetInstanceClass, targetInstanceClass_);
          DARABONBA_PTR_FROM_JSON(TargetMemory, targetMemory_);
          DARABONBA_PTR_FROM_JSON(TaskExcuteStatus, taskExcuteStatus_);
          DARABONBA_PTR_FROM_JSON(TaskTime, taskTime_);
        };
        SpecHistory() = default ;
        SpecHistory(const SpecHistory &) = default ;
        SpecHistory(SpecHistory &&) = default ;
        SpecHistory(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~SpecHistory() = default ;
        SpecHistory& operator=(const SpecHistory &) = default ;
        SpecHistory& operator=(SpecHistory &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->errorCode_ == nullptr
        && this->originCore_ == nullptr && this->originInstanceClass_ == nullptr && this->originMemory_ == nullptr && this->scaleType_ == nullptr && this->targetCore_ == nullptr
        && this->targetInstanceClass_ == nullptr && this->targetMemory_ == nullptr && this->taskExcuteStatus_ == nullptr && this->taskTime_ == nullptr; };
        // errorCode Field Functions 
        bool hasErrorCode() const { return this->errorCode_ != nullptr;};
        void deleteErrorCode() { this->errorCode_ = nullptr;};
        inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
        inline SpecHistory& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


        // originCore Field Functions 
        bool hasOriginCore() const { return this->originCore_ != nullptr;};
        void deleteOriginCore() { this->originCore_ = nullptr;};
        inline int32_t getOriginCore() const { DARABONBA_PTR_GET_DEFAULT(originCore_, 0) };
        inline SpecHistory& setOriginCore(int32_t originCore) { DARABONBA_PTR_SET_VALUE(originCore_, originCore) };


        // originInstanceClass Field Functions 
        bool hasOriginInstanceClass() const { return this->originInstanceClass_ != nullptr;};
        void deleteOriginInstanceClass() { this->originInstanceClass_ = nullptr;};
        inline string getOriginInstanceClass() const { DARABONBA_PTR_GET_DEFAULT(originInstanceClass_, "") };
        inline SpecHistory& setOriginInstanceClass(string originInstanceClass) { DARABONBA_PTR_SET_VALUE(originInstanceClass_, originInstanceClass) };


        // originMemory Field Functions 
        bool hasOriginMemory() const { return this->originMemory_ != nullptr;};
        void deleteOriginMemory() { this->originMemory_ = nullptr;};
        inline double getOriginMemory() const { DARABONBA_PTR_GET_DEFAULT(originMemory_, 0.0) };
        inline SpecHistory& setOriginMemory(double originMemory) { DARABONBA_PTR_SET_VALUE(originMemory_, originMemory) };


        // scaleType Field Functions 
        bool hasScaleType() const { return this->scaleType_ != nullptr;};
        void deleteScaleType() { this->scaleType_ = nullptr;};
        inline string getScaleType() const { DARABONBA_PTR_GET_DEFAULT(scaleType_, "") };
        inline SpecHistory& setScaleType(string scaleType) { DARABONBA_PTR_SET_VALUE(scaleType_, scaleType) };


        // targetCore Field Functions 
        bool hasTargetCore() const { return this->targetCore_ != nullptr;};
        void deleteTargetCore() { this->targetCore_ = nullptr;};
        inline int32_t getTargetCore() const { DARABONBA_PTR_GET_DEFAULT(targetCore_, 0) };
        inline SpecHistory& setTargetCore(int32_t targetCore) { DARABONBA_PTR_SET_VALUE(targetCore_, targetCore) };


        // targetInstanceClass Field Functions 
        bool hasTargetInstanceClass() const { return this->targetInstanceClass_ != nullptr;};
        void deleteTargetInstanceClass() { this->targetInstanceClass_ = nullptr;};
        inline string getTargetInstanceClass() const { DARABONBA_PTR_GET_DEFAULT(targetInstanceClass_, "") };
        inline SpecHistory& setTargetInstanceClass(string targetInstanceClass) { DARABONBA_PTR_SET_VALUE(targetInstanceClass_, targetInstanceClass) };


        // targetMemory Field Functions 
        bool hasTargetMemory() const { return this->targetMemory_ != nullptr;};
        void deleteTargetMemory() { this->targetMemory_ = nullptr;};
        inline double getTargetMemory() const { DARABONBA_PTR_GET_DEFAULT(targetMemory_, 0.0) };
        inline SpecHistory& setTargetMemory(double targetMemory) { DARABONBA_PTR_SET_VALUE(targetMemory_, targetMemory) };


        // taskExcuteStatus Field Functions 
        bool hasTaskExcuteStatus() const { return this->taskExcuteStatus_ != nullptr;};
        void deleteTaskExcuteStatus() { this->taskExcuteStatus_ = nullptr;};
        inline bool getTaskExcuteStatus() const { DARABONBA_PTR_GET_DEFAULT(taskExcuteStatus_, false) };
        inline SpecHistory& setTaskExcuteStatus(bool taskExcuteStatus) { DARABONBA_PTR_SET_VALUE(taskExcuteStatus_, taskExcuteStatus) };


        // taskTime Field Functions 
        bool hasTaskTime() const { return this->taskTime_ != nullptr;};
        void deleteTaskTime() { this->taskTime_ = nullptr;};
        inline int64_t getTaskTime() const { DARABONBA_PTR_GET_DEFAULT(taskTime_, 0L) };
        inline SpecHistory& setTaskTime(int64_t taskTime) { DARABONBA_PTR_SET_VALUE(taskTime_, taskTime) };


      protected:
        // The error code returned by the scaling task. Valid values:
        // 
        // *   **Insufficient_Balance**: The account has insufficient balance or an unpaid order.
        // *   **REACH_SPEC_UPPERBOUND**: The instance type reaches the upper limit.
        // *   **Control_Error_Timeout_Msg**: The management task timed out.
        // *   **Invoke_Rds_Api_Error_Msg**: Failed to call the ApsaraDB RDS API.
        shared_ptr<string> errorCode_ {};
        // The original number of CPU cores of the instance.
        shared_ptr<int32_t> originCore_ {};
        // The original instance type.
        shared_ptr<string> originInstanceClass_ {};
        // The original memory size of the instance. Unit: GB.
        shared_ptr<double> originMemory_ {};
        // The type of the automatic performance scaling task. Valid values:
        // 
        // *   **SCALE_UP**: automatic instance type scale-up task.
        // *   **SCALE_DOWN**: automatic instance type scale-down task.
        shared_ptr<string> scaleType_ {};
        // The destination number of CPU cores of the instance.
        shared_ptr<int32_t> targetCore_ {};
        // The destination instance type.
        shared_ptr<string> targetInstanceClass_ {};
        // The destination memory size of the instance. Unit: GB.
        shared_ptr<double> targetMemory_ {};
        // The status of the task. Valid values:
        // 
        // *   **true**: The task was successful.
        // *   **false**: The task failed.
        shared_ptr<bool> taskExcuteStatus_ {};
        // The time when the task was run. Set this parameter to a UNIX timestamp representing the number of milliseconds that have elapsed since January 1, 1970, 00:00:00 UTC.
        shared_ptr<int64_t> taskTime_ {};
      };

      virtual bool empty() const override { return this->bandwidth_ == nullptr
        && this->instanceId_ == nullptr && this->resource_ == nullptr && this->shard_ == nullptr && this->specHistory_ == nullptr && this->storage_ == nullptr; };
      // bandwidth Field Functions 
      bool hasBandwidth() const { return this->bandwidth_ != nullptr;};
      void deleteBandwidth() { this->bandwidth_ = nullptr;};
      inline const vector<Darabonba::Json> & getBandwidth() const { DARABONBA_PTR_GET_CONST(bandwidth_, vector<Darabonba::Json>) };
      inline vector<Darabonba::Json> getBandwidth() { DARABONBA_PTR_GET(bandwidth_, vector<Darabonba::Json>) };
      inline Data& setBandwidth(const vector<Darabonba::Json> & bandwidth) { DARABONBA_PTR_SET_VALUE(bandwidth_, bandwidth) };
      inline Data& setBandwidth(vector<Darabonba::Json> && bandwidth) { DARABONBA_PTR_SET_RVALUE(bandwidth_, bandwidth) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline Data& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // resource Field Functions 
      bool hasResource() const { return this->resource_ != nullptr;};
      void deleteResource() { this->resource_ = nullptr;};
      inline const vector<Darabonba::Json> & getResource() const { DARABONBA_PTR_GET_CONST(resource_, vector<Darabonba::Json>) };
      inline vector<Darabonba::Json> getResource() { DARABONBA_PTR_GET(resource_, vector<Darabonba::Json>) };
      inline Data& setResource(const vector<Darabonba::Json> & resource) { DARABONBA_PTR_SET_VALUE(resource_, resource) };
      inline Data& setResource(vector<Darabonba::Json> && resource) { DARABONBA_PTR_SET_RVALUE(resource_, resource) };


      // shard Field Functions 
      bool hasShard() const { return this->shard_ != nullptr;};
      void deleteShard() { this->shard_ = nullptr;};
      inline const vector<Darabonba::Json> & getShard() const { DARABONBA_PTR_GET_CONST(shard_, vector<Darabonba::Json>) };
      inline vector<Darabonba::Json> getShard() { DARABONBA_PTR_GET(shard_, vector<Darabonba::Json>) };
      inline Data& setShard(const vector<Darabonba::Json> & shard) { DARABONBA_PTR_SET_VALUE(shard_, shard) };
      inline Data& setShard(vector<Darabonba::Json> && shard) { DARABONBA_PTR_SET_RVALUE(shard_, shard) };


      // specHistory Field Functions 
      bool hasSpecHistory() const { return this->specHistory_ != nullptr;};
      void deleteSpecHistory() { this->specHistory_ = nullptr;};
      inline const vector<Data::SpecHistory> & getSpecHistory() const { DARABONBA_PTR_GET_CONST(specHistory_, vector<Data::SpecHistory>) };
      inline vector<Data::SpecHistory> getSpecHistory() { DARABONBA_PTR_GET(specHistory_, vector<Data::SpecHistory>) };
      inline Data& setSpecHistory(const vector<Data::SpecHistory> & specHistory) { DARABONBA_PTR_SET_VALUE(specHistory_, specHistory) };
      inline Data& setSpecHistory(vector<Data::SpecHistory> && specHistory) { DARABONBA_PTR_SET_RVALUE(specHistory_, specHistory) };


      // storage Field Functions 
      bool hasStorage() const { return this->storage_ != nullptr;};
      void deleteStorage() { this->storage_ = nullptr;};
      inline const vector<Darabonba::Json> & getStorage() const { DARABONBA_PTR_GET_CONST(storage_, vector<Darabonba::Json>) };
      inline vector<Darabonba::Json> getStorage() { DARABONBA_PTR_GET(storage_, vector<Darabonba::Json>) };
      inline Data& setStorage(const vector<Darabonba::Json> & storage) { DARABONBA_PTR_SET_VALUE(storage_, storage) };
      inline Data& setStorage(vector<Darabonba::Json> && storage) { DARABONBA_PTR_SET_RVALUE(storage_, storage) };


    protected:
      // The history of automatic bandwidth scaling of ApsaraDB for Redis instances. This feature is not supported.
      shared_ptr<vector<Darabonba::Json>> bandwidth_ {};
      // The instance ID.
      shared_ptr<string> instanceId_ {};
      // The history of resource scale-out of ApsaraDB for Redis instances. This feature is not supported.
      shared_ptr<vector<Darabonba::Json>> resource_ {};
      // The history of automatic shard scale-out of ApsaraDB for Redis instances. This feature is not supported.
      shared_ptr<vector<Darabonba::Json>> shard_ {};
      // The history of automatic performance scaling.
      shared_ptr<vector<Data::SpecHistory>> specHistory_ {};
      // The history of storage expansion. This feature is not supported.
      shared_ptr<vector<Darabonba::Json>> storage_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline DescribeAutoScalingHistoryResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const DescribeAutoScalingHistoryResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, DescribeAutoScalingHistoryResponseBody::Data) };
    inline DescribeAutoScalingHistoryResponseBody::Data getData() { DARABONBA_PTR_GET(data_, DescribeAutoScalingHistoryResponseBody::Data) };
    inline DescribeAutoScalingHistoryResponseBody& setData(const DescribeAutoScalingHistoryResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DescribeAutoScalingHistoryResponseBody& setData(DescribeAutoScalingHistoryResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DescribeAutoScalingHistoryResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeAutoScalingHistoryResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline string getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, "") };
    inline DescribeAutoScalingHistoryResponseBody& setSuccess(string success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The HTTP status code returned. The status code 200 indicates that the request was successful.
    shared_ptr<string> code_ {};
    // The history of auto scaling.
    shared_ptr<DescribeAutoScalingHistoryResponseBody::Data> data_ {};
    // The returned message.
    // 
    // > If the request was successful, **Successful** is returned. Otherwise, an error message such as an error code is returned.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful. Valid values:
    // 
    // *   **true**
    // *   **false**
    shared_ptr<string> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DAS20200116
#endif
