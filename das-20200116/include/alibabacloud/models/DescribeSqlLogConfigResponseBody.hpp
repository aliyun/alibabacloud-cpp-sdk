// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESQLLOGCONFIGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESQLLOGCONFIGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DAS20200116
{
namespace Models
{
  class DescribeSqlLogConfigResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSqlLogConfigResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSqlLogConfigResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    DescribeSqlLogConfigResponseBody() = default ;
    DescribeSqlLogConfigResponseBody(const DescribeSqlLogConfigResponseBody &) = default ;
    DescribeSqlLogConfigResponseBody(DescribeSqlLogConfigResponseBody &&) = default ;
    DescribeSqlLogConfigResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSqlLogConfigResponseBody() = default ;
    DescribeSqlLogConfigResponseBody& operator=(const DescribeSqlLogConfigResponseBody &) = default ;
    DescribeSqlLogConfigResponseBody& operator=(DescribeSqlLogConfigResponseBody &&) = default ;
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
        DARABONBA_PTR_TO_JSON(Enable, enable_);
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
        DARABONBA_PTR_TO_JSON(SupportMigration, supportMigration_);
        DARABONBA_PTR_TO_JSON(SupportSecurityAudit, supportSecurityAudit_);
        DARABONBA_PTR_TO_JSON(SupportVersion, supportVersion_);
        DARABONBA_PTR_TO_JSON(Version, version_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(ColdEnable, coldEnable_);
        DARABONBA_PTR_FROM_JSON(ColdRetention, coldRetention_);
        DARABONBA_PTR_FROM_JSON(ColdStartTime, coldStartTime_);
        DARABONBA_PTR_FROM_JSON(CollectorVersion, collectorVersion_);
        DARABONBA_PTR_FROM_JSON(Enable, enable_);
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
        DARABONBA_PTR_FROM_JSON(SupportMigration, supportMigration_);
        DARABONBA_PTR_FROM_JSON(SupportSecurityAudit, supportSecurityAudit_);
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
        && this->coldRetention_ == nullptr && this->coldStartTime_ == nullptr && this->collectorVersion_ == nullptr && this->enable_ == nullptr && this->hotEnable_ == nullptr
        && this->hotRetention_ == nullptr && this->hotStartTime_ == nullptr && this->logFilter_ == nullptr && this->requestEnable_ == nullptr && this->requestStartTime_ == nullptr
        && this->requestStopTime_ == nullptr && this->retention_ == nullptr && this->sqlLogEnable_ == nullptr && this->sqlLogSource_ == nullptr && this->sqlLogState_ == nullptr
        && this->sqlLogVisibleTime_ == nullptr && this->supportMigration_ == nullptr && this->supportSecurityAudit_ == nullptr && this->supportVersion_ == nullptr && this->version_ == nullptr; };
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


      // enable Field Functions 
      bool hasEnable() const { return this->enable_ != nullptr;};
      void deleteEnable() { this->enable_ = nullptr;};
      inline bool getEnable() const { DARABONBA_PTR_GET_DEFAULT(enable_, false) };
      inline Data& setEnable(bool enable) { DARABONBA_PTR_SET_VALUE(enable_, enable) };


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


      // supportMigration Field Functions 
      bool hasSupportMigration() const { return this->supportMigration_ != nullptr;};
      void deleteSupportMigration() { this->supportMigration_ = nullptr;};
      inline bool getSupportMigration() const { DARABONBA_PTR_GET_DEFAULT(supportMigration_, false) };
      inline Data& setSupportMigration(bool supportMigration) { DARABONBA_PTR_SET_VALUE(supportMigration_, supportMigration) };


      // supportSecurityAudit Field Functions 
      bool hasSupportSecurityAudit() const { return this->supportSecurityAudit_ != nullptr;};
      void deleteSupportSecurityAudit() { this->supportSecurityAudit_ = nullptr;};
      inline bool getSupportSecurityAudit() const { DARABONBA_PTR_GET_DEFAULT(supportSecurityAudit_, false) };
      inline Data& setSupportSecurityAudit(bool supportSecurityAudit) { DARABONBA_PTR_SET_VALUE(supportSecurityAudit_, supportSecurityAudit) };


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
      // Indicates whether cold data storage is enabled. Valid values:
      // - **true**: Enabled.
      // - **false**: Disabled.
      shared_ptr<bool> coldEnable_ {};
      // The cold data storage duration. Unit: days.
      shared_ptr<int32_t> coldRetention_ {};
      // The start time of cold data storage. The value is a UNIX timestamp. Unit: milliseconds.
      shared_ptr<int64_t> coldStartTime_ {};
      // The collector version. Valid values:
      // 
      // - **MYSQL_V0**: MySQL V0.
      // - **MYSQL_V1**: MySQL V1.
      // - **MYSQL_V2**: MySQL V2.
      // - **MYSQL_V3**: MySQL V3.
      // - **PG_V1**: PostgreSQL V1.
      // - **rdspg_v1**: ApsaraDB RDS for PostgreSQL V1.
      // - **polarpg_v1**: PolarDB for PostgreSQL V1.
      shared_ptr<string> collectorVersion_ {};
      shared_ptr<bool> enable_ {};
      // Indicates whether hot data storage is enabled. Valid values:
      // - **true**: Enabled.
      // - **false**: Disabled.
      shared_ptr<bool> hotEnable_ {};
      // The hot data storage duration. Unit: days.
      shared_ptr<int32_t> hotRetention_ {};
      // The start time of hot data storage. The value is a UNIX timestamp. Unit: milliseconds.
      shared_ptr<int64_t> hotStartTime_ {};
      // A reserved parameter.
      shared_ptr<string> logFilter_ {};
      // Indicates whether SQL Explorer is enabled. Valid values:
      // - **true**: Enabled.
      // - **false**: Disabled.
      shared_ptr<bool> requestEnable_ {};
      // The time when SQL Explorer was enabled. The value is a UNIX timestamp. Unit: milliseconds.
      shared_ptr<int64_t> requestStartTime_ {};
      // The expiration time of DAS Enterprise Edition V1. The value is a UNIX timestamp. Unit: milliseconds.
      shared_ptr<int64_t> requestStopTime_ {};
      // The total data storage duration, which is the sum of **HotRetention** and **ColdRetention**. Unit: days.
      shared_ptr<int32_t> retention_ {};
      // Indicates whether DAS Enterprise Edition is enabled. Valid values:
      // - **true**: Enabled.
      // - **false**: Disabled.
      shared_ptr<bool> sqlLogEnable_ {};
      // A reserved parameter.
      shared_ptr<string> sqlLogSource_ {};
      // The data migration status. Valid values:
      // 
      // - **FINISH**: Historical data migration is complete.
      // - **RUNNING**: Historical data migration is in progress.
      // - **FAILURE**: Historical data migration failed.
      shared_ptr<string> sqlLogState_ {};
      // The time when DAS Enterprise Edition was enabled. The value is a UNIX timestamp. Unit: milliseconds.
      shared_ptr<int64_t> sqlLogVisibleTime_ {};
      // A reserved parameter.
      shared_ptr<bool> supportMigration_ {};
      shared_ptr<bool> supportSecurityAudit_ {};
      // The latest DAS Enterprise Edition version supported by the instance. Valid values:
      // - **SQL_LOG_V0**: Enterprise Edition V0.
      // - **SQL_LOG_V1**: Enterprise Edition V1.
      // - **SQL_LOG_V2**: Enterprise Edition V2.
      // - **SQL_LOG_V3**: Enterprise Edition V3.
      // - **SQL_LOG_NOT_ENABLE**: Enterprise Edition is not enabled.
      // - **SQL_LOG_NOT_SUPPORT**: Enterprise Edition is not supported.
      shared_ptr<string> supportVersion_ {};
      // The current DAS Enterprise Edition version that is enabled. Valid values:
      // - **SQL_LOG_V0**: Enterprise Edition V0.
      // - **SQL_LOG_V1**: Enterprise Edition V1.
      // - **SQL_LOG_V2**: Enterprise Edition V2.
      // - **SQL_LOG_V3**: Enterprise Edition V3.
      // - **SQL_LOG_NOT_ENABLE**: Enterprise Edition is not enabled.
      // - **SQL_LOG_NOT_SUPPORT**: Enterprise Edition is not supported.
      shared_ptr<string> version_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline DescribeSqlLogConfigResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const DescribeSqlLogConfigResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, DescribeSqlLogConfigResponseBody::Data) };
    inline DescribeSqlLogConfigResponseBody::Data getData() { DARABONBA_PTR_GET(data_, DescribeSqlLogConfigResponseBody::Data) };
    inline DescribeSqlLogConfigResponseBody& setData(const DescribeSqlLogConfigResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DescribeSqlLogConfigResponseBody& setData(DescribeSqlLogConfigResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DescribeSqlLogConfigResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeSqlLogConfigResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline string getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, "") };
    inline DescribeSqlLogConfigResponseBody& setSuccess(string success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The returned status code.
    shared_ptr<string> code_ {};
    // The returned data.
    shared_ptr<DescribeSqlLogConfigResponseBody::Data> data_ {};
    // The returned message.
    // >If the request is successful, **Successful** is returned. If the request fails, an error message that contains information such as an error code is returned.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful. Valid values:
    // * **true**: The request was successful.
    // * **false**: The request failed.
    shared_ptr<string> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DAS20200116
#endif
