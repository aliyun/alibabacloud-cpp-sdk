// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYSQLLOGCONFIGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_MODIFYSQLLOGCONFIGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DAS20200116
{
namespace Models
{
  class ModifySqlLogConfigResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifySqlLogConfigResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ModifySqlLogConfigResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    ModifySqlLogConfigResponseBody() = default ;
    ModifySqlLogConfigResponseBody(const ModifySqlLogConfigResponseBody &) = default ;
    ModifySqlLogConfigResponseBody(ModifySqlLogConfigResponseBody &&) = default ;
    ModifySqlLogConfigResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifySqlLogConfigResponseBody() = default ;
    ModifySqlLogConfigResponseBody& operator=(const ModifySqlLogConfigResponseBody &) = default ;
    ModifySqlLogConfigResponseBody& operator=(ModifySqlLogConfigResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(ColdEnable, coldEnable_);
        DARABONBA_PTR_TO_JSON(ColdRetention, coldRetention_);
        DARABONBA_PTR_TO_JSON(ColdStartTime, coldStartTime_);
        DARABONBA_PTR_TO_JSON(CollectorVersion, collectorVersion_);
        DARABONBA_PTR_TO_JSON(HotEnable, hotEnable_);
        DARABONBA_PTR_TO_JSON(HotRetention, hotRetention_);
        DARABONBA_PTR_TO_JSON(HotStartTime, hotStartTime_);
        DARABONBA_PTR_TO_JSON(LogFilter, logFilter_);
        DARABONBA_PTR_TO_JSON(RequestEnable, requestEnable_);
        DARABONBA_PTR_TO_JSON(RequestStartTime, requestStartTime_);
        DARABONBA_PTR_TO_JSON(RequestStopTime, requestStopTime_);
        DARABONBA_PTR_TO_JSON(Retention, retention_);
        DARABONBA_PTR_TO_JSON(SqlLogEnable, sqlLogEnable_);
        DARABONBA_PTR_TO_JSON(SqlLogSource, sqlLogSource_);
        DARABONBA_PTR_TO_JSON(SqlLogState, sqlLogState_);
        DARABONBA_PTR_TO_JSON(SqlLogVisibleTime, sqlLogVisibleTime_);
        DARABONBA_PTR_TO_JSON(SupportVersion, supportVersion_);
        DARABONBA_PTR_TO_JSON(Version, version_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(ColdEnable, coldEnable_);
        DARABONBA_PTR_FROM_JSON(ColdRetention, coldRetention_);
        DARABONBA_PTR_FROM_JSON(ColdStartTime, coldStartTime_);
        DARABONBA_PTR_FROM_JSON(CollectorVersion, collectorVersion_);
        DARABONBA_PTR_FROM_JSON(HotEnable, hotEnable_);
        DARABONBA_PTR_FROM_JSON(HotRetention, hotRetention_);
        DARABONBA_PTR_FROM_JSON(HotStartTime, hotStartTime_);
        DARABONBA_PTR_FROM_JSON(LogFilter, logFilter_);
        DARABONBA_PTR_FROM_JSON(RequestEnable, requestEnable_);
        DARABONBA_PTR_FROM_JSON(RequestStartTime, requestStartTime_);
        DARABONBA_PTR_FROM_JSON(RequestStopTime, requestStopTime_);
        DARABONBA_PTR_FROM_JSON(Retention, retention_);
        DARABONBA_PTR_FROM_JSON(SqlLogEnable, sqlLogEnable_);
        DARABONBA_PTR_FROM_JSON(SqlLogSource, sqlLogSource_);
        DARABONBA_PTR_FROM_JSON(SqlLogState, sqlLogState_);
        DARABONBA_PTR_FROM_JSON(SqlLogVisibleTime, sqlLogVisibleTime_);
        DARABONBA_PTR_FROM_JSON(SupportVersion, supportVersion_);
        DARABONBA_PTR_FROM_JSON(Version, version_);
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
      virtual bool empty() const override { return this->coldEnable_ == nullptr
        && this->coldRetention_ == nullptr && this->coldStartTime_ == nullptr && this->collectorVersion_ == nullptr && this->hotEnable_ == nullptr && this->hotRetention_ == nullptr
        && this->hotStartTime_ == nullptr && this->logFilter_ == nullptr && this->requestEnable_ == nullptr && this->requestStartTime_ == nullptr && this->requestStopTime_ == nullptr
        && this->retention_ == nullptr && this->sqlLogEnable_ == nullptr && this->sqlLogSource_ == nullptr && this->sqlLogState_ == nullptr && this->sqlLogVisibleTime_ == nullptr
        && this->supportVersion_ == nullptr && this->version_ == nullptr; };
      // coldEnable Field Functions 
      bool hasColdEnable() const { return this->coldEnable_ != nullptr;};
      void deleteColdEnable() { this->coldEnable_ = nullptr;};
      inline bool getColdEnable() const { DARABONBA_PTR_GET_DEFAULT(coldEnable_, false) };
      inline Data& setColdEnable(bool coldEnable) { DARABONBA_PTR_SET_VALUE(coldEnable_, coldEnable) };


      // coldRetention Field Functions 
      bool hasColdRetention() const { return this->coldRetention_ != nullptr;};
      void deleteColdRetention() { this->coldRetention_ = nullptr;};
      inline int32_t getColdRetention() const { DARABONBA_PTR_GET_DEFAULT(coldRetention_, 0) };
      inline Data& setColdRetention(int32_t coldRetention) { DARABONBA_PTR_SET_VALUE(coldRetention_, coldRetention) };


      // coldStartTime Field Functions 
      bool hasColdStartTime() const { return this->coldStartTime_ != nullptr;};
      void deleteColdStartTime() { this->coldStartTime_ = nullptr;};
      inline int64_t getColdStartTime() const { DARABONBA_PTR_GET_DEFAULT(coldStartTime_, 0L) };
      inline Data& setColdStartTime(int64_t coldStartTime) { DARABONBA_PTR_SET_VALUE(coldStartTime_, coldStartTime) };


      // collectorVersion Field Functions 
      bool hasCollectorVersion() const { return this->collectorVersion_ != nullptr;};
      void deleteCollectorVersion() { this->collectorVersion_ = nullptr;};
      inline string getCollectorVersion() const { DARABONBA_PTR_GET_DEFAULT(collectorVersion_, "") };
      inline Data& setCollectorVersion(string collectorVersion) { DARABONBA_PTR_SET_VALUE(collectorVersion_, collectorVersion) };


      // hotEnable Field Functions 
      bool hasHotEnable() const { return this->hotEnable_ != nullptr;};
      void deleteHotEnable() { this->hotEnable_ = nullptr;};
      inline bool getHotEnable() const { DARABONBA_PTR_GET_DEFAULT(hotEnable_, false) };
      inline Data& setHotEnable(bool hotEnable) { DARABONBA_PTR_SET_VALUE(hotEnable_, hotEnable) };


      // hotRetention Field Functions 
      bool hasHotRetention() const { return this->hotRetention_ != nullptr;};
      void deleteHotRetention() { this->hotRetention_ = nullptr;};
      inline int32_t getHotRetention() const { DARABONBA_PTR_GET_DEFAULT(hotRetention_, 0) };
      inline Data& setHotRetention(int32_t hotRetention) { DARABONBA_PTR_SET_VALUE(hotRetention_, hotRetention) };


      // hotStartTime Field Functions 
      bool hasHotStartTime() const { return this->hotStartTime_ != nullptr;};
      void deleteHotStartTime() { this->hotStartTime_ = nullptr;};
      inline int64_t getHotStartTime() const { DARABONBA_PTR_GET_DEFAULT(hotStartTime_, 0L) };
      inline Data& setHotStartTime(int64_t hotStartTime) { DARABONBA_PTR_SET_VALUE(hotStartTime_, hotStartTime) };


      // logFilter Field Functions 
      bool hasLogFilter() const { return this->logFilter_ != nullptr;};
      void deleteLogFilter() { this->logFilter_ = nullptr;};
      inline string getLogFilter() const { DARABONBA_PTR_GET_DEFAULT(logFilter_, "") };
      inline Data& setLogFilter(string logFilter) { DARABONBA_PTR_SET_VALUE(logFilter_, logFilter) };


      // requestEnable Field Functions 
      bool hasRequestEnable() const { return this->requestEnable_ != nullptr;};
      void deleteRequestEnable() { this->requestEnable_ = nullptr;};
      inline bool getRequestEnable() const { DARABONBA_PTR_GET_DEFAULT(requestEnable_, false) };
      inline Data& setRequestEnable(bool requestEnable) { DARABONBA_PTR_SET_VALUE(requestEnable_, requestEnable) };


      // requestStartTime Field Functions 
      bool hasRequestStartTime() const { return this->requestStartTime_ != nullptr;};
      void deleteRequestStartTime() { this->requestStartTime_ = nullptr;};
      inline int64_t getRequestStartTime() const { DARABONBA_PTR_GET_DEFAULT(requestStartTime_, 0L) };
      inline Data& setRequestStartTime(int64_t requestStartTime) { DARABONBA_PTR_SET_VALUE(requestStartTime_, requestStartTime) };


      // requestStopTime Field Functions 
      bool hasRequestStopTime() const { return this->requestStopTime_ != nullptr;};
      void deleteRequestStopTime() { this->requestStopTime_ = nullptr;};
      inline int64_t getRequestStopTime() const { DARABONBA_PTR_GET_DEFAULT(requestStopTime_, 0L) };
      inline Data& setRequestStopTime(int64_t requestStopTime) { DARABONBA_PTR_SET_VALUE(requestStopTime_, requestStopTime) };


      // retention Field Functions 
      bool hasRetention() const { return this->retention_ != nullptr;};
      void deleteRetention() { this->retention_ = nullptr;};
      inline int32_t getRetention() const { DARABONBA_PTR_GET_DEFAULT(retention_, 0) };
      inline Data& setRetention(int32_t retention) { DARABONBA_PTR_SET_VALUE(retention_, retention) };


      // sqlLogEnable Field Functions 
      bool hasSqlLogEnable() const { return this->sqlLogEnable_ != nullptr;};
      void deleteSqlLogEnable() { this->sqlLogEnable_ = nullptr;};
      inline bool getSqlLogEnable() const { DARABONBA_PTR_GET_DEFAULT(sqlLogEnable_, false) };
      inline Data& setSqlLogEnable(bool sqlLogEnable) { DARABONBA_PTR_SET_VALUE(sqlLogEnable_, sqlLogEnable) };


      // sqlLogSource Field Functions 
      bool hasSqlLogSource() const { return this->sqlLogSource_ != nullptr;};
      void deleteSqlLogSource() { this->sqlLogSource_ = nullptr;};
      inline string getSqlLogSource() const { DARABONBA_PTR_GET_DEFAULT(sqlLogSource_, "") };
      inline Data& setSqlLogSource(string sqlLogSource) { DARABONBA_PTR_SET_VALUE(sqlLogSource_, sqlLogSource) };


      // sqlLogState Field Functions 
      bool hasSqlLogState() const { return this->sqlLogState_ != nullptr;};
      void deleteSqlLogState() { this->sqlLogState_ = nullptr;};
      inline string getSqlLogState() const { DARABONBA_PTR_GET_DEFAULT(sqlLogState_, "") };
      inline Data& setSqlLogState(string sqlLogState) { DARABONBA_PTR_SET_VALUE(sqlLogState_, sqlLogState) };


      // sqlLogVisibleTime Field Functions 
      bool hasSqlLogVisibleTime() const { return this->sqlLogVisibleTime_ != nullptr;};
      void deleteSqlLogVisibleTime() { this->sqlLogVisibleTime_ = nullptr;};
      inline int64_t getSqlLogVisibleTime() const { DARABONBA_PTR_GET_DEFAULT(sqlLogVisibleTime_, 0L) };
      inline Data& setSqlLogVisibleTime(int64_t sqlLogVisibleTime) { DARABONBA_PTR_SET_VALUE(sqlLogVisibleTime_, sqlLogVisibleTime) };


      // supportVersion Field Functions 
      bool hasSupportVersion() const { return this->supportVersion_ != nullptr;};
      void deleteSupportVersion() { this->supportVersion_ = nullptr;};
      inline string getSupportVersion() const { DARABONBA_PTR_GET_DEFAULT(supportVersion_, "") };
      inline Data& setSupportVersion(string supportVersion) { DARABONBA_PTR_SET_VALUE(supportVersion_, supportVersion) };


      // version Field Functions 
      bool hasVersion() const { return this->version_ != nullptr;};
      void deleteVersion() { this->version_ = nullptr;};
      inline string getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
      inline Data& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


    protected:
      // Indicates whether the cold data storage is enabled. Valid values:
      // 
      // *   **true**
      // *   **false**
      shared_ptr<bool> coldEnable_ {};
      // The number of days for which the SQL Explorer and Audit data is stored in cold storage. The value is calculated by using the following formula: Value of ColdRetention = Value of Retention - Value of HotRetention.``
      shared_ptr<int32_t> coldRetention_ {};
      // The time when the cold data storage was enabled. This value is a UNIX timestamp representing the number of milliseconds that have elapsed since January 1, 1970, 00:00:00 UTC.
      shared_ptr<int64_t> coldStartTime_ {};
      // The collector version. Valid values:
      // 
      // *   **MYSQL_V0**
      // *   **MYSQL_V1**
      // *   **MYSQL_V2**
      // *   **MYSQL_V3**
      // *   **PG_V1**
      // *   **rdspg_v1**
      // *   **polarpg_v1**
      shared_ptr<string> collectorVersion_ {};
      // Indicates whether the hot data storage is enabled. Valid values:
      // 
      // *   **true**
      // *   **false**
      shared_ptr<bool> hotEnable_ {};
      // The number of days for which the SQL Explorer and Audit data is stored in hot storage.
      shared_ptr<int32_t> hotRetention_ {};
      // The time when the hot data storage was enabled. This value is a UNIX timestamp representing the number of milliseconds that have elapsed since January 1, 1970, 00:00:00 UTC.
      shared_ptr<int64_t> hotStartTime_ {};
      // A reserved parameter.
      shared_ptr<string> logFilter_ {};
      // Indicates whether the SQL Explorer feature is enabled. Valid values:
      // 
      // *   **true**
      // *   **false**
      shared_ptr<bool> requestEnable_ {};
      // The time when the SQL Explorer feature was enabled. This value is a UNIX timestamp representing the number of milliseconds that have elapsed since January 1, 1970, 00:00:00 UTC.
      shared_ptr<int64_t> requestStartTime_ {};
      // The time when DAS Enterprise Edition V1 expired. This value is a UNIX timestamp representing the number of milliseconds that have elapsed since January 1, 1970, 00:00:00 UTC.
      shared_ptr<int64_t> requestStopTime_ {};
      // The total storage duration of the SQL Explorer and Audit data. Unit: day.
      shared_ptr<int32_t> retention_ {};
      // Indicates whether DAS Enterprise Edition is enabled. Valid values:
      // 
      // *   **true**
      // *   **false**
      shared_ptr<bool> sqlLogEnable_ {};
      shared_ptr<string> sqlLogSource_ {};
      // The state of data migration. Valid values:
      // 
      // *   **FINISH**: The historical data is migrated.
      // *   **RUNNING**: The historical data is being migrated.
      // *   **FAILURE**: The historical data fails to be migrated.
      shared_ptr<string> sqlLogState_ {};
      // The time when DAS Enterprise Edition was enabled. This value is a UNIX timestamp representing the number of milliseconds that have elapsed since January 1, 1970, 00:00:00 UTC.
      shared_ptr<int64_t> sqlLogVisibleTime_ {};
      // The latest version of DAS Enterprise Edition that supports the database instance. Valid values:
      // 
      // *   **SQL_LOG_V0**: DAS Enterprise Edition V0.
      // *   **SQL_LOG_V1**: DAS Enterprise Edition V1.
      // *   **SQL_LOG_V2**: DAS Enterprise Edition V2.
      // *   **SQL_LOG_V3**: DAS Enterprise Edition V3.
      // *   **SQL_LOG_NOT_ENABLE**: DAS Enterprise Edition is not enabled.
      // *   **SQL_LOG_NOT_SUPPORT**: DAS Enterprise Edition is not supported.
      shared_ptr<string> supportVersion_ {};
      // The version of DAS Enterprise Edition that is enabled for the database instance. Valid values:
      // 
      // *   **SQL_LOG_V0**: DAS Enterprise Edition V0.
      // *   **SQL_LOG_V1**: DAS Enterprise Edition V1.
      // *   **SQL_LOG_V2**: DAS Enterprise Edition V2.
      // *   **SQL_LOG_V3**: DAS Enterprise Edition V3.
      // *   **SQL_LOG_NOT_ENABLE**: DAS Enterprise Edition is not enabled.
      // *   **SQL_LOG_NOT_SUPPORT**: DAS Enterprise Edition is not supported.
      shared_ptr<string> version_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ModifySqlLogConfigResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ModifySqlLogConfigResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, ModifySqlLogConfigResponseBody::Data) };
    inline ModifySqlLogConfigResponseBody::Data getData() { DARABONBA_PTR_GET(data_, ModifySqlLogConfigResponseBody::Data) };
    inline ModifySqlLogConfigResponseBody& setData(const ModifySqlLogConfigResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ModifySqlLogConfigResponseBody& setData(ModifySqlLogConfigResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ModifySqlLogConfigResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ModifySqlLogConfigResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline string getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, "") };
    inline ModifySqlLogConfigResponseBody& setSuccess(string success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The response code.
    shared_ptr<string> code_ {};
    // The data returned.
    shared_ptr<ModifySqlLogConfigResponseBody::Data> data_ {};
    // The returned message.
    // 
    // >  If the request was successful, **Successful** is returned. If the request failed, an error message is returned.
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
