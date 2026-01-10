// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDATACRONCLEARCONFIGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETDATACRONCLEARCONFIGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class GetDataCronClearConfigResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDataCronClearConfigResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DataCronClearConfig, dataCronClearConfig_);
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetDataCronClearConfigResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DataCronClearConfig, dataCronClearConfig_);
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetDataCronClearConfigResponseBody() = default ;
    GetDataCronClearConfigResponseBody(const GetDataCronClearConfigResponseBody &) = default ;
    GetDataCronClearConfigResponseBody(GetDataCronClearConfigResponseBody &&) = default ;
    GetDataCronClearConfigResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDataCronClearConfigResponseBody() = default ;
    GetDataCronClearConfigResponseBody& operator=(const GetDataCronClearConfigResponseBody &) = default ;
    GetDataCronClearConfigResponseBody& operator=(GetDataCronClearConfigResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class DataCronClearConfig : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DataCronClearConfig& obj) { 
        DARABONBA_PTR_TO_JSON(CronCallTimes, cronCallTimes_);
        DARABONBA_PTR_TO_JSON(CronFormat, cronFormat_);
        DARABONBA_PTR_TO_JSON(CronLastCallStartTime, cronLastCallStartTime_);
        DARABONBA_PTR_TO_JSON(CronNextCallTime, cronNextCallTime_);
        DARABONBA_PTR_TO_JSON(CronStatus, cronStatus_);
        DARABONBA_PTR_TO_JSON(CurrentClearTaskCount, currentClearTaskCount_);
        DARABONBA_PTR_TO_JSON(Duration, duration_);
        DARABONBA_PTR_TO_JSON(OptimizeTableAfterEveryClearTimes, optimizeTableAfterEveryClearTimes_);
      };
      friend void from_json(const Darabonba::Json& j, DataCronClearConfig& obj) { 
        DARABONBA_PTR_FROM_JSON(CronCallTimes, cronCallTimes_);
        DARABONBA_PTR_FROM_JSON(CronFormat, cronFormat_);
        DARABONBA_PTR_FROM_JSON(CronLastCallStartTime, cronLastCallStartTime_);
        DARABONBA_PTR_FROM_JSON(CronNextCallTime, cronNextCallTime_);
        DARABONBA_PTR_FROM_JSON(CronStatus, cronStatus_);
        DARABONBA_PTR_FROM_JSON(CurrentClearTaskCount, currentClearTaskCount_);
        DARABONBA_PTR_FROM_JSON(Duration, duration_);
        DARABONBA_PTR_FROM_JSON(OptimizeTableAfterEveryClearTimes, optimizeTableAfterEveryClearTimes_);
      };
      DataCronClearConfig() = default ;
      DataCronClearConfig(const DataCronClearConfig &) = default ;
      DataCronClearConfig(DataCronClearConfig &&) = default ;
      DataCronClearConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DataCronClearConfig() = default ;
      DataCronClearConfig& operator=(const DataCronClearConfig &) = default ;
      DataCronClearConfig& operator=(DataCronClearConfig &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->cronCallTimes_ == nullptr
        && this->cronFormat_ == nullptr && this->cronLastCallStartTime_ == nullptr && this->cronNextCallTime_ == nullptr && this->cronStatus_ == nullptr && this->currentClearTaskCount_ == nullptr
        && this->duration_ == nullptr && this->optimizeTableAfterEveryClearTimes_ == nullptr; };
      // cronCallTimes Field Functions 
      bool hasCronCallTimes() const { return this->cronCallTimes_ != nullptr;};
      void deleteCronCallTimes() { this->cronCallTimes_ = nullptr;};
      inline string getCronCallTimes() const { DARABONBA_PTR_GET_DEFAULT(cronCallTimes_, "") };
      inline DataCronClearConfig& setCronCallTimes(string cronCallTimes) { DARABONBA_PTR_SET_VALUE(cronCallTimes_, cronCallTimes) };


      // cronFormat Field Functions 
      bool hasCronFormat() const { return this->cronFormat_ != nullptr;};
      void deleteCronFormat() { this->cronFormat_ = nullptr;};
      inline string getCronFormat() const { DARABONBA_PTR_GET_DEFAULT(cronFormat_, "") };
      inline DataCronClearConfig& setCronFormat(string cronFormat) { DARABONBA_PTR_SET_VALUE(cronFormat_, cronFormat) };


      // cronLastCallStartTime Field Functions 
      bool hasCronLastCallStartTime() const { return this->cronLastCallStartTime_ != nullptr;};
      void deleteCronLastCallStartTime() { this->cronLastCallStartTime_ = nullptr;};
      inline string getCronLastCallStartTime() const { DARABONBA_PTR_GET_DEFAULT(cronLastCallStartTime_, "") };
      inline DataCronClearConfig& setCronLastCallStartTime(string cronLastCallStartTime) { DARABONBA_PTR_SET_VALUE(cronLastCallStartTime_, cronLastCallStartTime) };


      // cronNextCallTime Field Functions 
      bool hasCronNextCallTime() const { return this->cronNextCallTime_ != nullptr;};
      void deleteCronNextCallTime() { this->cronNextCallTime_ = nullptr;};
      inline string getCronNextCallTime() const { DARABONBA_PTR_GET_DEFAULT(cronNextCallTime_, "") };
      inline DataCronClearConfig& setCronNextCallTime(string cronNextCallTime) { DARABONBA_PTR_SET_VALUE(cronNextCallTime_, cronNextCallTime) };


      // cronStatus Field Functions 
      bool hasCronStatus() const { return this->cronStatus_ != nullptr;};
      void deleteCronStatus() { this->cronStatus_ = nullptr;};
      inline string getCronStatus() const { DARABONBA_PTR_GET_DEFAULT(cronStatus_, "") };
      inline DataCronClearConfig& setCronStatus(string cronStatus) { DARABONBA_PTR_SET_VALUE(cronStatus_, cronStatus) };


      // currentClearTaskCount Field Functions 
      bool hasCurrentClearTaskCount() const { return this->currentClearTaskCount_ != nullptr;};
      void deleteCurrentClearTaskCount() { this->currentClearTaskCount_ = nullptr;};
      inline int64_t getCurrentClearTaskCount() const { DARABONBA_PTR_GET_DEFAULT(currentClearTaskCount_, 0L) };
      inline DataCronClearConfig& setCurrentClearTaskCount(int64_t currentClearTaskCount) { DARABONBA_PTR_SET_VALUE(currentClearTaskCount_, currentClearTaskCount) };


      // duration Field Functions 
      bool hasDuration() const { return this->duration_ != nullptr;};
      void deleteDuration() { this->duration_ = nullptr;};
      inline string getDuration() const { DARABONBA_PTR_GET_DEFAULT(duration_, "") };
      inline DataCronClearConfig& setDuration(string duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


      // optimizeTableAfterEveryClearTimes Field Functions 
      bool hasOptimizeTableAfterEveryClearTimes() const { return this->optimizeTableAfterEveryClearTimes_ != nullptr;};
      void deleteOptimizeTableAfterEveryClearTimes() { this->optimizeTableAfterEveryClearTimes_ = nullptr;};
      inline int64_t getOptimizeTableAfterEveryClearTimes() const { DARABONBA_PTR_GET_DEFAULT(optimizeTableAfterEveryClearTimes_, 0L) };
      inline DataCronClearConfig& setOptimizeTableAfterEveryClearTimes(int64_t optimizeTableAfterEveryClearTimes) { DARABONBA_PTR_SET_VALUE(optimizeTableAfterEveryClearTimes_, optimizeTableAfterEveryClearTimes) };


    protected:
      // The number of times that the task is run.
      shared_ptr<string> cronCallTimes_ {};
      // The crontab expression that you can use to run the task at a specified time. For more information, see [Crontab expression](https://help.aliyun.com/document_detail/206581.html).
      shared_ptr<string> cronFormat_ {};
      // The time when the task was last run.
      shared_ptr<string> cronLastCallStartTime_ {};
      // The time when the task is run next time. This parameter is displayed only when the status of the scheduled task is SUCCESS.
      shared_ptr<string> cronNextCallTime_ {};
      // The status of the scheduled task. If this parameter is empty, it indicates the task is not run. Valid values:
      // 
      // *   PAUSE: The task is suspended.
      // *   WAITING: The task is waiting to be run.
      // *   SUCCESS: The task is complete.
      shared_ptr<string> cronStatus_ {};
      // The number of times that the Optimize Table statement is automatically exeuted. This parameter is valid only when the value of the OptimizeTableAfterEveryClearTimes parameter is greater than 0.
      shared_ptr<int64_t> currentClearTaskCount_ {};
      // The execution duration of the task. Unit: hours. If the value is 0, it indicates the duration is not specified.
      shared_ptr<string> duration_ {};
      // Specifies whether to enable automatic execution of the OPTIMIZE TABLE statement. Valid values:
      // 
      // *   0: disables automatic execution
      // *   A number greater than 0: enables automatic execution. The number specifies the number of times that cleanup operations must be performed before the OPTIMIZE TABLE statement is automatically executed.
      shared_ptr<int64_t> optimizeTableAfterEveryClearTimes_ {};
    };

    virtual bool empty() const override { return this->dataCronClearConfig_ == nullptr
        && this->errorCode_ == nullptr && this->errorMessage_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // dataCronClearConfig Field Functions 
    bool hasDataCronClearConfig() const { return this->dataCronClearConfig_ != nullptr;};
    void deleteDataCronClearConfig() { this->dataCronClearConfig_ = nullptr;};
    inline const GetDataCronClearConfigResponseBody::DataCronClearConfig & getDataCronClearConfig() const { DARABONBA_PTR_GET_CONST(dataCronClearConfig_, GetDataCronClearConfigResponseBody::DataCronClearConfig) };
    inline GetDataCronClearConfigResponseBody::DataCronClearConfig getDataCronClearConfig() { DARABONBA_PTR_GET(dataCronClearConfig_, GetDataCronClearConfigResponseBody::DataCronClearConfig) };
    inline GetDataCronClearConfigResponseBody& setDataCronClearConfig(const GetDataCronClearConfigResponseBody::DataCronClearConfig & dataCronClearConfig) { DARABONBA_PTR_SET_VALUE(dataCronClearConfig_, dataCronClearConfig) };
    inline GetDataCronClearConfigResponseBody& setDataCronClearConfig(GetDataCronClearConfigResponseBody::DataCronClearConfig && dataCronClearConfig) { DARABONBA_PTR_SET_RVALUE(dataCronClearConfig_, dataCronClearConfig) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline GetDataCronClearConfigResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline GetDataCronClearConfigResponseBody& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetDataCronClearConfigResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetDataCronClearConfigResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // Data configuration.
    shared_ptr<GetDataCronClearConfigResponseBody::DataCronClearConfig> dataCronClearConfig_ {};
    // The error code.
    shared_ptr<string> errorCode_ {};
    // The error message returned if the request failed.
    shared_ptr<string> errorMessage_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful. Valid values:
    // 
    // *   true: The request was successful.
    // *   false: The request failed.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
