// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYSQLLOGCONFIGRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_MODIFYSQLLOGCONFIGRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DAS20200116
{
namespace Models
{
  class ModifySqlLogConfigResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifySqlLogConfigResponseBodyData& obj) { 
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
    friend void from_json(const Darabonba::Json& j, ModifySqlLogConfigResponseBodyData& obj) { 
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
    ModifySqlLogConfigResponseBodyData() = default ;
    ModifySqlLogConfigResponseBodyData(const ModifySqlLogConfigResponseBodyData &) = default ;
    ModifySqlLogConfigResponseBodyData(ModifySqlLogConfigResponseBodyData &&) = default ;
    ModifySqlLogConfigResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifySqlLogConfigResponseBodyData() = default ;
    ModifySqlLogConfigResponseBodyData& operator=(const ModifySqlLogConfigResponseBodyData &) = default ;
    ModifySqlLogConfigResponseBodyData& operator=(ModifySqlLogConfigResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->coldEnable_ == nullptr
        && return this->coldRetention_ == nullptr && return this->coldStartTime_ == nullptr && return this->collectorVersion_ == nullptr && return this->hotEnable_ == nullptr && return this->hotRetention_ == nullptr
        && return this->hotStartTime_ == nullptr && return this->logFilter_ == nullptr && return this->requestEnable_ == nullptr && return this->requestStartTime_ == nullptr && return this->requestStopTime_ == nullptr
        && return this->retention_ == nullptr && return this->sqlLogEnable_ == nullptr && return this->sqlLogSource_ == nullptr && return this->sqlLogState_ == nullptr && return this->sqlLogVisibleTime_ == nullptr
        && return this->supportVersion_ == nullptr && return this->version_ == nullptr; };
    // coldEnable Field Functions 
    bool hasColdEnable() const { return this->coldEnable_ != nullptr;};
    void deleteColdEnable() { this->coldEnable_ = nullptr;};
    inline bool coldEnable() const { DARABONBA_PTR_GET_DEFAULT(coldEnable_, false) };
    inline ModifySqlLogConfigResponseBodyData& setColdEnable(bool coldEnable) { DARABONBA_PTR_SET_VALUE(coldEnable_, coldEnable) };


    // coldRetention Field Functions 
    bool hasColdRetention() const { return this->coldRetention_ != nullptr;};
    void deleteColdRetention() { this->coldRetention_ = nullptr;};
    inline int32_t coldRetention() const { DARABONBA_PTR_GET_DEFAULT(coldRetention_, 0) };
    inline ModifySqlLogConfigResponseBodyData& setColdRetention(int32_t coldRetention) { DARABONBA_PTR_SET_VALUE(coldRetention_, coldRetention) };


    // coldStartTime Field Functions 
    bool hasColdStartTime() const { return this->coldStartTime_ != nullptr;};
    void deleteColdStartTime() { this->coldStartTime_ = nullptr;};
    inline int64_t coldStartTime() const { DARABONBA_PTR_GET_DEFAULT(coldStartTime_, 0L) };
    inline ModifySqlLogConfigResponseBodyData& setColdStartTime(int64_t coldStartTime) { DARABONBA_PTR_SET_VALUE(coldStartTime_, coldStartTime) };


    // collectorVersion Field Functions 
    bool hasCollectorVersion() const { return this->collectorVersion_ != nullptr;};
    void deleteCollectorVersion() { this->collectorVersion_ = nullptr;};
    inline string collectorVersion() const { DARABONBA_PTR_GET_DEFAULT(collectorVersion_, "") };
    inline ModifySqlLogConfigResponseBodyData& setCollectorVersion(string collectorVersion) { DARABONBA_PTR_SET_VALUE(collectorVersion_, collectorVersion) };


    // hotEnable Field Functions 
    bool hasHotEnable() const { return this->hotEnable_ != nullptr;};
    void deleteHotEnable() { this->hotEnable_ = nullptr;};
    inline bool hotEnable() const { DARABONBA_PTR_GET_DEFAULT(hotEnable_, false) };
    inline ModifySqlLogConfigResponseBodyData& setHotEnable(bool hotEnable) { DARABONBA_PTR_SET_VALUE(hotEnable_, hotEnable) };


    // hotRetention Field Functions 
    bool hasHotRetention() const { return this->hotRetention_ != nullptr;};
    void deleteHotRetention() { this->hotRetention_ = nullptr;};
    inline int32_t hotRetention() const { DARABONBA_PTR_GET_DEFAULT(hotRetention_, 0) };
    inline ModifySqlLogConfigResponseBodyData& setHotRetention(int32_t hotRetention) { DARABONBA_PTR_SET_VALUE(hotRetention_, hotRetention) };


    // hotStartTime Field Functions 
    bool hasHotStartTime() const { return this->hotStartTime_ != nullptr;};
    void deleteHotStartTime() { this->hotStartTime_ = nullptr;};
    inline int64_t hotStartTime() const { DARABONBA_PTR_GET_DEFAULT(hotStartTime_, 0L) };
    inline ModifySqlLogConfigResponseBodyData& setHotStartTime(int64_t hotStartTime) { DARABONBA_PTR_SET_VALUE(hotStartTime_, hotStartTime) };


    // logFilter Field Functions 
    bool hasLogFilter() const { return this->logFilter_ != nullptr;};
    void deleteLogFilter() { this->logFilter_ = nullptr;};
    inline string logFilter() const { DARABONBA_PTR_GET_DEFAULT(logFilter_, "") };
    inline ModifySqlLogConfigResponseBodyData& setLogFilter(string logFilter) { DARABONBA_PTR_SET_VALUE(logFilter_, logFilter) };


    // requestEnable Field Functions 
    bool hasRequestEnable() const { return this->requestEnable_ != nullptr;};
    void deleteRequestEnable() { this->requestEnable_ = nullptr;};
    inline bool requestEnable() const { DARABONBA_PTR_GET_DEFAULT(requestEnable_, false) };
    inline ModifySqlLogConfigResponseBodyData& setRequestEnable(bool requestEnable) { DARABONBA_PTR_SET_VALUE(requestEnable_, requestEnable) };


    // requestStartTime Field Functions 
    bool hasRequestStartTime() const { return this->requestStartTime_ != nullptr;};
    void deleteRequestStartTime() { this->requestStartTime_ = nullptr;};
    inline int64_t requestStartTime() const { DARABONBA_PTR_GET_DEFAULT(requestStartTime_, 0L) };
    inline ModifySqlLogConfigResponseBodyData& setRequestStartTime(int64_t requestStartTime) { DARABONBA_PTR_SET_VALUE(requestStartTime_, requestStartTime) };


    // requestStopTime Field Functions 
    bool hasRequestStopTime() const { return this->requestStopTime_ != nullptr;};
    void deleteRequestStopTime() { this->requestStopTime_ = nullptr;};
    inline int64_t requestStopTime() const { DARABONBA_PTR_GET_DEFAULT(requestStopTime_, 0L) };
    inline ModifySqlLogConfigResponseBodyData& setRequestStopTime(int64_t requestStopTime) { DARABONBA_PTR_SET_VALUE(requestStopTime_, requestStopTime) };


    // retention Field Functions 
    bool hasRetention() const { return this->retention_ != nullptr;};
    void deleteRetention() { this->retention_ = nullptr;};
    inline int32_t retention() const { DARABONBA_PTR_GET_DEFAULT(retention_, 0) };
    inline ModifySqlLogConfigResponseBodyData& setRetention(int32_t retention) { DARABONBA_PTR_SET_VALUE(retention_, retention) };


    // sqlLogEnable Field Functions 
    bool hasSqlLogEnable() const { return this->sqlLogEnable_ != nullptr;};
    void deleteSqlLogEnable() { this->sqlLogEnable_ = nullptr;};
    inline bool sqlLogEnable() const { DARABONBA_PTR_GET_DEFAULT(sqlLogEnable_, false) };
    inline ModifySqlLogConfigResponseBodyData& setSqlLogEnable(bool sqlLogEnable) { DARABONBA_PTR_SET_VALUE(sqlLogEnable_, sqlLogEnable) };


    // sqlLogSource Field Functions 
    bool hasSqlLogSource() const { return this->sqlLogSource_ != nullptr;};
    void deleteSqlLogSource() { this->sqlLogSource_ = nullptr;};
    inline string sqlLogSource() const { DARABONBA_PTR_GET_DEFAULT(sqlLogSource_, "") };
    inline ModifySqlLogConfigResponseBodyData& setSqlLogSource(string sqlLogSource) { DARABONBA_PTR_SET_VALUE(sqlLogSource_, sqlLogSource) };


    // sqlLogState Field Functions 
    bool hasSqlLogState() const { return this->sqlLogState_ != nullptr;};
    void deleteSqlLogState() { this->sqlLogState_ = nullptr;};
    inline string sqlLogState() const { DARABONBA_PTR_GET_DEFAULT(sqlLogState_, "") };
    inline ModifySqlLogConfigResponseBodyData& setSqlLogState(string sqlLogState) { DARABONBA_PTR_SET_VALUE(sqlLogState_, sqlLogState) };


    // sqlLogVisibleTime Field Functions 
    bool hasSqlLogVisibleTime() const { return this->sqlLogVisibleTime_ != nullptr;};
    void deleteSqlLogVisibleTime() { this->sqlLogVisibleTime_ = nullptr;};
    inline int64_t sqlLogVisibleTime() const { DARABONBA_PTR_GET_DEFAULT(sqlLogVisibleTime_, 0L) };
    inline ModifySqlLogConfigResponseBodyData& setSqlLogVisibleTime(int64_t sqlLogVisibleTime) { DARABONBA_PTR_SET_VALUE(sqlLogVisibleTime_, sqlLogVisibleTime) };


    // supportVersion Field Functions 
    bool hasSupportVersion() const { return this->supportVersion_ != nullptr;};
    void deleteSupportVersion() { this->supportVersion_ = nullptr;};
    inline string supportVersion() const { DARABONBA_PTR_GET_DEFAULT(supportVersion_, "") };
    inline ModifySqlLogConfigResponseBodyData& setSupportVersion(string supportVersion) { DARABONBA_PTR_SET_VALUE(supportVersion_, supportVersion) };


    // version Field Functions 
    bool hasVersion() const { return this->version_ != nullptr;};
    void deleteVersion() { this->version_ = nullptr;};
    inline string version() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
    inline ModifySqlLogConfigResponseBodyData& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


  protected:
    // Indicates whether the cold data storage is enabled. Valid values:
    // 
    // *   **true**
    // *   **false**
    std::shared_ptr<bool> coldEnable_ = nullptr;
    // The number of days for which the SQL Explorer and Audit data is stored in cold storage. The value is calculated by using the following formula: Value of ColdRetention = Value of Retention - Value of HotRetention.``
    std::shared_ptr<int32_t> coldRetention_ = nullptr;
    // The time when the cold data storage was enabled. This value is a UNIX timestamp representing the number of milliseconds that have elapsed since January 1, 1970, 00:00:00 UTC.
    std::shared_ptr<int64_t> coldStartTime_ = nullptr;
    // The collector version. Valid values:
    // 
    // *   **MYSQL_V0**
    // *   **MYSQL_V1**
    // *   **MYSQL_V2**
    // *   **MYSQL_V3**
    // *   **PG_V1**
    // *   **rdspg_v1**
    // *   **polarpg_v1**
    std::shared_ptr<string> collectorVersion_ = nullptr;
    // Indicates whether the hot data storage is enabled. Valid values:
    // 
    // *   **true**
    // *   **false**
    std::shared_ptr<bool> hotEnable_ = nullptr;
    // The number of days for which the SQL Explorer and Audit data is stored in hot storage.
    std::shared_ptr<int32_t> hotRetention_ = nullptr;
    // The time when the hot data storage was enabled. This value is a UNIX timestamp representing the number of milliseconds that have elapsed since January 1, 1970, 00:00:00 UTC.
    std::shared_ptr<int64_t> hotStartTime_ = nullptr;
    // A reserved parameter.
    std::shared_ptr<string> logFilter_ = nullptr;
    // Indicates whether the SQL Explorer feature is enabled. Valid values:
    // 
    // *   **true**
    // *   **false**
    std::shared_ptr<bool> requestEnable_ = nullptr;
    // The time when the SQL Explorer feature was enabled. This value is a UNIX timestamp representing the number of milliseconds that have elapsed since January 1, 1970, 00:00:00 UTC.
    std::shared_ptr<int64_t> requestStartTime_ = nullptr;
    // The time when DAS Enterprise Edition V1 expired. This value is a UNIX timestamp representing the number of milliseconds that have elapsed since January 1, 1970, 00:00:00 UTC.
    std::shared_ptr<int64_t> requestStopTime_ = nullptr;
    // The total storage duration of the SQL Explorer and Audit data. Unit: day.
    std::shared_ptr<int32_t> retention_ = nullptr;
    // Indicates whether DAS Enterprise Edition is enabled. Valid values:
    // 
    // *   **true**
    // *   **false**
    std::shared_ptr<bool> sqlLogEnable_ = nullptr;
    std::shared_ptr<string> sqlLogSource_ = nullptr;
    // The state of data migration. Valid values:
    // 
    // *   **FINISH**: The historical data is migrated.
    // *   **RUNNING**: The historical data is being migrated.
    // *   **FAILURE**: The historical data fails to be migrated.
    std::shared_ptr<string> sqlLogState_ = nullptr;
    // The time when DAS Enterprise Edition was enabled. This value is a UNIX timestamp representing the number of milliseconds that have elapsed since January 1, 1970, 00:00:00 UTC.
    std::shared_ptr<int64_t> sqlLogVisibleTime_ = nullptr;
    // The latest version of DAS Enterprise Edition that supports the database instance. Valid values:
    // 
    // *   **SQL_LOG_V0**: DAS Enterprise Edition V0.
    // *   **SQL_LOG_V1**: DAS Enterprise Edition V1.
    // *   **SQL_LOG_V2**: DAS Enterprise Edition V2.
    // *   **SQL_LOG_V3**: DAS Enterprise Edition V3.
    // *   **SQL_LOG_NOT_ENABLE**: DAS Enterprise Edition is not enabled.
    // *   **SQL_LOG_NOT_SUPPORT**: DAS Enterprise Edition is not supported.
    std::shared_ptr<string> supportVersion_ = nullptr;
    // The version of DAS Enterprise Edition that is enabled for the database instance. Valid values:
    // 
    // *   **SQL_LOG_V0**: DAS Enterprise Edition V0.
    // *   **SQL_LOG_V1**: DAS Enterprise Edition V1.
    // *   **SQL_LOG_V2**: DAS Enterprise Edition V2.
    // *   **SQL_LOG_V3**: DAS Enterprise Edition V3.
    // *   **SQL_LOG_NOT_ENABLE**: DAS Enterprise Edition is not enabled.
    // *   **SQL_LOG_NOT_SUPPORT**: DAS Enterprise Edition is not supported.
    std::shared_ptr<string> version_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DAS20200116
#endif
