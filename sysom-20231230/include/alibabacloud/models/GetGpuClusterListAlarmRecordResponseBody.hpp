// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETGPUCLUSTERLISTALARMRECORDRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETGPUCLUSTERLISTALARMRECORDRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace SysOM20231230
{
namespace Models
{
  class GetGpuClusterListAlarmRecordResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetGpuClusterListAlarmRecordResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(total, total_);
    };
    friend void from_json(const Darabonba::Json& j, GetGpuClusterListAlarmRecordResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(total, total_);
    };
    GetGpuClusterListAlarmRecordResponseBody() = default ;
    GetGpuClusterListAlarmRecordResponseBody(const GetGpuClusterListAlarmRecordResponseBody &) = default ;
    GetGpuClusterListAlarmRecordResponseBody(GetGpuClusterListAlarmRecordResponseBody &&) = default ;
    GetGpuClusterListAlarmRecordResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetGpuClusterListAlarmRecordResponseBody() = default ;
    GetGpuClusterListAlarmRecordResponseBody& operator=(const GetGpuClusterListAlarmRecordResponseBody &) = default ;
    GetGpuClusterListAlarmRecordResponseBody& operator=(GetGpuClusterListAlarmRecordResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(alarmCluster, alarmCluster_);
        DARABONBA_ANY_TO_JSON(alarmExtInfo, alarmExtInfo_);
        DARABONBA_PTR_TO_JSON(alarmId, alarmId_);
        DARABONBA_PTR_TO_JSON(alarmLog, alarmLog_);
        DARABONBA_PTR_TO_JSON(alarmTask, alarmTask_);
        DARABONBA_PTR_TO_JSON(alarmTime, alarmTime_);
        DARABONBA_ANY_TO_JSON(alarmTopology, alarmTopology_);
        DARABONBA_PTR_TO_JSON(alarmType, alarmType_);
        DARABONBA_PTR_TO_JSON(status, status_);
        DARABONBA_PTR_TO_JSON(uid, uid_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(alarmCluster, alarmCluster_);
        DARABONBA_ANY_FROM_JSON(alarmExtInfo, alarmExtInfo_);
        DARABONBA_PTR_FROM_JSON(alarmId, alarmId_);
        DARABONBA_PTR_FROM_JSON(alarmLog, alarmLog_);
        DARABONBA_PTR_FROM_JSON(alarmTask, alarmTask_);
        DARABONBA_PTR_FROM_JSON(alarmTime, alarmTime_);
        DARABONBA_ANY_FROM_JSON(alarmTopology, alarmTopology_);
        DARABONBA_PTR_FROM_JSON(alarmType, alarmType_);
        DARABONBA_PTR_FROM_JSON(status, status_);
        DARABONBA_PTR_FROM_JSON(uid, uid_);
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
      virtual bool empty() const override { return this->alarmCluster_ == nullptr
        && this->alarmExtInfo_ == nullptr && this->alarmId_ == nullptr && this->alarmLog_ == nullptr && this->alarmTask_ == nullptr && this->alarmTime_ == nullptr
        && this->alarmTopology_ == nullptr && this->alarmType_ == nullptr && this->status_ == nullptr && this->uid_ == nullptr; };
      // alarmCluster Field Functions 
      bool hasAlarmCluster() const { return this->alarmCluster_ != nullptr;};
      void deleteAlarmCluster() { this->alarmCluster_ = nullptr;};
      inline string getAlarmCluster() const { DARABONBA_PTR_GET_DEFAULT(alarmCluster_, "") };
      inline Data& setAlarmCluster(string alarmCluster) { DARABONBA_PTR_SET_VALUE(alarmCluster_, alarmCluster) };


      // alarmExtInfo Field Functions 
      bool hasAlarmExtInfo() const { return this->alarmExtInfo_ != nullptr;};
      void deleteAlarmExtInfo() { this->alarmExtInfo_ = nullptr;};
      inline       const Darabonba::Json & getAlarmExtInfo() const { DARABONBA_GET(alarmExtInfo_) };
      Darabonba::Json & getAlarmExtInfo() { DARABONBA_GET(alarmExtInfo_) };
      inline Data& setAlarmExtInfo(const Darabonba::Json & alarmExtInfo) { DARABONBA_SET_VALUE(alarmExtInfo_, alarmExtInfo) };
      inline Data& setAlarmExtInfo(Darabonba::Json && alarmExtInfo) { DARABONBA_SET_RVALUE(alarmExtInfo_, alarmExtInfo) };


      // alarmId Field Functions 
      bool hasAlarmId() const { return this->alarmId_ != nullptr;};
      void deleteAlarmId() { this->alarmId_ = nullptr;};
      inline string getAlarmId() const { DARABONBA_PTR_GET_DEFAULT(alarmId_, "") };
      inline Data& setAlarmId(string alarmId) { DARABONBA_PTR_SET_VALUE(alarmId_, alarmId) };


      // alarmLog Field Functions 
      bool hasAlarmLog() const { return this->alarmLog_ != nullptr;};
      void deleteAlarmLog() { this->alarmLog_ = nullptr;};
      inline string getAlarmLog() const { DARABONBA_PTR_GET_DEFAULT(alarmLog_, "") };
      inline Data& setAlarmLog(string alarmLog) { DARABONBA_PTR_SET_VALUE(alarmLog_, alarmLog) };


      // alarmTask Field Functions 
      bool hasAlarmTask() const { return this->alarmTask_ != nullptr;};
      void deleteAlarmTask() { this->alarmTask_ = nullptr;};
      inline string getAlarmTask() const { DARABONBA_PTR_GET_DEFAULT(alarmTask_, "") };
      inline Data& setAlarmTask(string alarmTask) { DARABONBA_PTR_SET_VALUE(alarmTask_, alarmTask) };


      // alarmTime Field Functions 
      bool hasAlarmTime() const { return this->alarmTime_ != nullptr;};
      void deleteAlarmTime() { this->alarmTime_ = nullptr;};
      inline string getAlarmTime() const { DARABONBA_PTR_GET_DEFAULT(alarmTime_, "") };
      inline Data& setAlarmTime(string alarmTime) { DARABONBA_PTR_SET_VALUE(alarmTime_, alarmTime) };


      // alarmTopology Field Functions 
      bool hasAlarmTopology() const { return this->alarmTopology_ != nullptr;};
      void deleteAlarmTopology() { this->alarmTopology_ = nullptr;};
      inline       const Darabonba::Json & getAlarmTopology() const { DARABONBA_GET(alarmTopology_) };
      Darabonba::Json & getAlarmTopology() { DARABONBA_GET(alarmTopology_) };
      inline Data& setAlarmTopology(const Darabonba::Json & alarmTopology) { DARABONBA_SET_VALUE(alarmTopology_, alarmTopology) };
      inline Data& setAlarmTopology(Darabonba::Json && alarmTopology) { DARABONBA_SET_RVALUE(alarmTopology_, alarmTopology) };


      // alarmType Field Functions 
      bool hasAlarmType() const { return this->alarmType_ != nullptr;};
      void deleteAlarmType() { this->alarmType_ = nullptr;};
      inline string getAlarmType() const { DARABONBA_PTR_GET_DEFAULT(alarmType_, "") };
      inline Data& setAlarmType(string alarmType) { DARABONBA_PTR_SET_VALUE(alarmType_, alarmType) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Data& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // uid Field Functions 
      bool hasUid() const { return this->uid_ != nullptr;};
      void deleteUid() { this->uid_ = nullptr;};
      inline string getUid() const { DARABONBA_PTR_GET_DEFAULT(uid_, "") };
      inline Data& setUid(string uid) { DARABONBA_PTR_SET_VALUE(uid_, uid) };


    protected:
      // The cluster where the alert is triggered.
      shared_ptr<string> alarmCluster_ {};
      // The extended information of the alert.
      Darabonba::Json alarmExtInfo_ {};
      // The unique ID of the alert.
      shared_ptr<string> alarmId_ {};
      // The alerting event log.
      shared_ptr<string> alarmLog_ {};
      // The ID of the task where the anomaly occurred.
      shared_ptr<string> alarmTask_ {};
      // The date and time when the alert is triggered.
      shared_ptr<string> alarmTime_ {};
      // The topology snapshot.
      Darabonba::Json alarmTopology_ {};
      // The alerting type.
      shared_ptr<string> alarmType_ {};
      // The status of the task.
      shared_ptr<string> status_ {};
      // The UUID of the cloud account.
      shared_ptr<string> uid_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->total_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetGpuClusterListAlarmRecordResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<GetGpuClusterListAlarmRecordResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<GetGpuClusterListAlarmRecordResponseBody::Data>) };
    inline vector<GetGpuClusterListAlarmRecordResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<GetGpuClusterListAlarmRecordResponseBody::Data>) };
    inline GetGpuClusterListAlarmRecordResponseBody& setData(const vector<GetGpuClusterListAlarmRecordResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetGpuClusterListAlarmRecordResponseBody& setData(vector<GetGpuClusterListAlarmRecordResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetGpuClusterListAlarmRecordResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetGpuClusterListAlarmRecordResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline string getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, "") };
    inline GetGpuClusterListAlarmRecordResponseBody& setTotal(string total) { DARABONBA_PTR_SET_VALUE(total_, total) };


  protected:
    // The response code. Valid values: Success and Sysom.ServerError.
    shared_ptr<string> code_ {};
    // The list of alert data.
    shared_ptr<vector<GetGpuClusterListAlarmRecordResponseBody::Data>> data_ {};
    // The error message returned when the code is not Success.
    shared_ptr<string> message_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
    // The total number of returned records.
    shared_ptr<string> total_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace SysOM20231230
#endif
