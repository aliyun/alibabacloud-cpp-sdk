// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSQLCONCURRENCYCONTROLRULESHISTORYRESPONSEBODYDATALISTRULES_HPP_
#define ALIBABACLOUD_MODELS_GETSQLCONCURRENCYCONTROLRULESHISTORYRESPONSEBODYDATALISTRULES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DAS20200116
{
namespace Models
{
  class GetSqlConcurrencyControlRulesHistoryResponseBodyDataListRules : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSqlConcurrencyControlRulesHistoryResponseBodyDataListRules& obj) { 
      DARABONBA_PTR_TO_JSON(ConcurrencyControlTime, concurrencyControlTime_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(ItemId, itemId_);
      DARABONBA_PTR_TO_JSON(KeywordsHash, keywordsHash_);
      DARABONBA_PTR_TO_JSON(MaxConcurrency, maxConcurrency_);
      DARABONBA_PTR_TO_JSON(SqlKeywords, sqlKeywords_);
      DARABONBA_PTR_TO_JSON(SqlType, sqlType_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
    };
    friend void from_json(const Darabonba::Json& j, GetSqlConcurrencyControlRulesHistoryResponseBodyDataListRules& obj) { 
      DARABONBA_PTR_FROM_JSON(ConcurrencyControlTime, concurrencyControlTime_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(ItemId, itemId_);
      DARABONBA_PTR_FROM_JSON(KeywordsHash, keywordsHash_);
      DARABONBA_PTR_FROM_JSON(MaxConcurrency, maxConcurrency_);
      DARABONBA_PTR_FROM_JSON(SqlKeywords, sqlKeywords_);
      DARABONBA_PTR_FROM_JSON(SqlType, sqlType_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
    };
    GetSqlConcurrencyControlRulesHistoryResponseBodyDataListRules() = default ;
    GetSqlConcurrencyControlRulesHistoryResponseBodyDataListRules(const GetSqlConcurrencyControlRulesHistoryResponseBodyDataListRules &) = default ;
    GetSqlConcurrencyControlRulesHistoryResponseBodyDataListRules(GetSqlConcurrencyControlRulesHistoryResponseBodyDataListRules &&) = default ;
    GetSqlConcurrencyControlRulesHistoryResponseBodyDataListRules(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSqlConcurrencyControlRulesHistoryResponseBodyDataListRules() = default ;
    GetSqlConcurrencyControlRulesHistoryResponseBodyDataListRules& operator=(const GetSqlConcurrencyControlRulesHistoryResponseBodyDataListRules &) = default ;
    GetSqlConcurrencyControlRulesHistoryResponseBodyDataListRules& operator=(GetSqlConcurrencyControlRulesHistoryResponseBodyDataListRules &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->concurrencyControlTime_ != nullptr
        && this->instanceId_ != nullptr && this->itemId_ != nullptr && this->keywordsHash_ != nullptr && this->maxConcurrency_ != nullptr && this->sqlKeywords_ != nullptr
        && this->sqlType_ != nullptr && this->startTime_ != nullptr && this->status_ != nullptr && this->userId_ != nullptr; };
    // concurrencyControlTime Field Functions 
    bool hasConcurrencyControlTime() const { return this->concurrencyControlTime_ != nullptr;};
    void deleteConcurrencyControlTime() { this->concurrencyControlTime_ = nullptr;};
    inline int64_t concurrencyControlTime() const { DARABONBA_PTR_GET_DEFAULT(concurrencyControlTime_, 0L) };
    inline GetSqlConcurrencyControlRulesHistoryResponseBodyDataListRules& setConcurrencyControlTime(int64_t concurrencyControlTime) { DARABONBA_PTR_SET_VALUE(concurrencyControlTime_, concurrencyControlTime) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline GetSqlConcurrencyControlRulesHistoryResponseBodyDataListRules& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // itemId Field Functions 
    bool hasItemId() const { return this->itemId_ != nullptr;};
    void deleteItemId() { this->itemId_ = nullptr;};
    inline int64_t itemId() const { DARABONBA_PTR_GET_DEFAULT(itemId_, 0L) };
    inline GetSqlConcurrencyControlRulesHistoryResponseBodyDataListRules& setItemId(int64_t itemId) { DARABONBA_PTR_SET_VALUE(itemId_, itemId) };


    // keywordsHash Field Functions 
    bool hasKeywordsHash() const { return this->keywordsHash_ != nullptr;};
    void deleteKeywordsHash() { this->keywordsHash_ = nullptr;};
    inline string keywordsHash() const { DARABONBA_PTR_GET_DEFAULT(keywordsHash_, "") };
    inline GetSqlConcurrencyControlRulesHistoryResponseBodyDataListRules& setKeywordsHash(string keywordsHash) { DARABONBA_PTR_SET_VALUE(keywordsHash_, keywordsHash) };


    // maxConcurrency Field Functions 
    bool hasMaxConcurrency() const { return this->maxConcurrency_ != nullptr;};
    void deleteMaxConcurrency() { this->maxConcurrency_ = nullptr;};
    inline int64_t maxConcurrency() const { DARABONBA_PTR_GET_DEFAULT(maxConcurrency_, 0L) };
    inline GetSqlConcurrencyControlRulesHistoryResponseBodyDataListRules& setMaxConcurrency(int64_t maxConcurrency) { DARABONBA_PTR_SET_VALUE(maxConcurrency_, maxConcurrency) };


    // sqlKeywords Field Functions 
    bool hasSqlKeywords() const { return this->sqlKeywords_ != nullptr;};
    void deleteSqlKeywords() { this->sqlKeywords_ = nullptr;};
    inline string sqlKeywords() const { DARABONBA_PTR_GET_DEFAULT(sqlKeywords_, "") };
    inline GetSqlConcurrencyControlRulesHistoryResponseBodyDataListRules& setSqlKeywords(string sqlKeywords) { DARABONBA_PTR_SET_VALUE(sqlKeywords_, sqlKeywords) };


    // sqlType Field Functions 
    bool hasSqlType() const { return this->sqlType_ != nullptr;};
    void deleteSqlType() { this->sqlType_ = nullptr;};
    inline string sqlType() const { DARABONBA_PTR_GET_DEFAULT(sqlType_, "") };
    inline GetSqlConcurrencyControlRulesHistoryResponseBodyDataListRules& setSqlType(string sqlType) { DARABONBA_PTR_SET_VALUE(sqlType_, sqlType) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline int64_t startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
    inline GetSqlConcurrencyControlRulesHistoryResponseBodyDataListRules& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetSqlConcurrencyControlRulesHistoryResponseBodyDataListRules& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline GetSqlConcurrencyControlRulesHistoryResponseBodyDataListRules& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


  protected:
    // The duration within which the SQL throttling rule takes effect. Unit: seconds.
    // 
    // >  The throttling rule takes effect only within this duration.
    std::shared_ptr<int64_t> concurrencyControlTime_ = nullptr;
    // The instance ID.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The ID of the throttling rule that is applied to the instance.
    std::shared_ptr<int64_t> itemId_ = nullptr;
    // The hash value of the SQL keywords. The SQL keywords are contained in the SQL statements to which the throttling rule is applied.
    std::shared_ptr<string> keywordsHash_ = nullptr;
    // The maximum number of concurrent SQL statements. Set this parameter to a positive integer.
    // 
    // >  When the number of concurrent SQL statements that contain the specified keywords reaches this upper limit, the throttling rule is triggered.
    std::shared_ptr<int64_t> maxConcurrency_ = nullptr;
    // The keywords that are used to identify the SQL statements that need to be throttled.
    // 
    // > SQL keywords are separated with tildes (~). When the number of concurrent SQL statements that contain all the specified SQL keywords reaches the specified upper limit, the throttling rule is triggered.
    std::shared_ptr<string> sqlKeywords_ = nullptr;
    // The type of the SQL statements. Valid values:
    // 
    // * **SELECT**
    // * **UPDATE**
    // * **DELETE**
    std::shared_ptr<string> sqlType_ = nullptr;
    // The beginning of the time range to query. This value is a UNIX timestamp representing the number of milliseconds that have elapsed since January 1, 1970, 00:00:00 UTC.
    std::shared_ptr<int64_t> startTime_ = nullptr;
    // The state of the throttling rule. Valid values:
    // 
    // * **Open**: The throttling rule is in effect.
    // * **Closed**: The throttling rule was in effect.
    std::shared_ptr<string> status_ = nullptr;
    // The user ID.
    std::shared_ptr<string> userId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DAS20200116
#endif
