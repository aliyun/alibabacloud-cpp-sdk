// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ENABLESQLCONCURRENCYCONTROLREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ENABLESQLCONCURRENCYCONTROLREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DAS20200116
{
namespace Models
{
  class EnableSqlConcurrencyControlRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const EnableSqlConcurrencyControlRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ConcurrencyControlTime, concurrencyControlTime_);
      DARABONBA_PTR_TO_JSON(ConsoleContext, consoleContext_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(MaxConcurrency, maxConcurrency_);
      DARABONBA_PTR_TO_JSON(SqlKeywords, sqlKeywords_);
      DARABONBA_PTR_TO_JSON(SqlType, sqlType_);
    };
    friend void from_json(const Darabonba::Json& j, EnableSqlConcurrencyControlRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ConcurrencyControlTime, concurrencyControlTime_);
      DARABONBA_PTR_FROM_JSON(ConsoleContext, consoleContext_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(MaxConcurrency, maxConcurrency_);
      DARABONBA_PTR_FROM_JSON(SqlKeywords, sqlKeywords_);
      DARABONBA_PTR_FROM_JSON(SqlType, sqlType_);
    };
    EnableSqlConcurrencyControlRequest() = default ;
    EnableSqlConcurrencyControlRequest(const EnableSqlConcurrencyControlRequest &) = default ;
    EnableSqlConcurrencyControlRequest(EnableSqlConcurrencyControlRequest &&) = default ;
    EnableSqlConcurrencyControlRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~EnableSqlConcurrencyControlRequest() = default ;
    EnableSqlConcurrencyControlRequest& operator=(const EnableSqlConcurrencyControlRequest &) = default ;
    EnableSqlConcurrencyControlRequest& operator=(EnableSqlConcurrencyControlRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->concurrencyControlTime_ != nullptr
        && this->consoleContext_ != nullptr && this->instanceId_ != nullptr && this->maxConcurrency_ != nullptr && this->sqlKeywords_ != nullptr && this->sqlType_ != nullptr; };
    // concurrencyControlTime Field Functions 
    bool hasConcurrencyControlTime() const { return this->concurrencyControlTime_ != nullptr;};
    void deleteConcurrencyControlTime() { this->concurrencyControlTime_ = nullptr;};
    inline int64_t concurrencyControlTime() const { DARABONBA_PTR_GET_DEFAULT(concurrencyControlTime_, 0L) };
    inline EnableSqlConcurrencyControlRequest& setConcurrencyControlTime(int64_t concurrencyControlTime) { DARABONBA_PTR_SET_VALUE(concurrencyControlTime_, concurrencyControlTime) };


    // consoleContext Field Functions 
    bool hasConsoleContext() const { return this->consoleContext_ != nullptr;};
    void deleteConsoleContext() { this->consoleContext_ = nullptr;};
    inline string consoleContext() const { DARABONBA_PTR_GET_DEFAULT(consoleContext_, "") };
    inline EnableSqlConcurrencyControlRequest& setConsoleContext(string consoleContext) { DARABONBA_PTR_SET_VALUE(consoleContext_, consoleContext) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline EnableSqlConcurrencyControlRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // maxConcurrency Field Functions 
    bool hasMaxConcurrency() const { return this->maxConcurrency_ != nullptr;};
    void deleteMaxConcurrency() { this->maxConcurrency_ = nullptr;};
    inline int64_t maxConcurrency() const { DARABONBA_PTR_GET_DEFAULT(maxConcurrency_, 0L) };
    inline EnableSqlConcurrencyControlRequest& setMaxConcurrency(int64_t maxConcurrency) { DARABONBA_PTR_SET_VALUE(maxConcurrency_, maxConcurrency) };


    // sqlKeywords Field Functions 
    bool hasSqlKeywords() const { return this->sqlKeywords_ != nullptr;};
    void deleteSqlKeywords() { this->sqlKeywords_ = nullptr;};
    inline string sqlKeywords() const { DARABONBA_PTR_GET_DEFAULT(sqlKeywords_, "") };
    inline EnableSqlConcurrencyControlRequest& setSqlKeywords(string sqlKeywords) { DARABONBA_PTR_SET_VALUE(sqlKeywords_, sqlKeywords) };


    // sqlType Field Functions 
    bool hasSqlType() const { return this->sqlType_ != nullptr;};
    void deleteSqlType() { this->sqlType_ = nullptr;};
    inline string sqlType() const { DARABONBA_PTR_GET_DEFAULT(sqlType_, "") };
    inline EnableSqlConcurrencyControlRequest& setSqlType(string sqlType) { DARABONBA_PTR_SET_VALUE(sqlType_, sqlType) };


  protected:
    // The duration within which the SQL throttling rule takes effect. Unit: seconds.
    // 
    // >  The throttling rule takes effect only within this duration.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> concurrencyControlTime_ = nullptr;
    // The reserved parameter.
    std::shared_ptr<string> consoleContext_ = nullptr;
    // The instance ID.
    // 
    // >  You must specify the instance ID only if your database instance is an ApsaraDB RDS for MySQL instance or a PolarDB for MySQL cluster.
    // 
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The maximum number of concurrent SQL statements. Set this parameter to a positive integer.
    // 
    // >  When the number of concurrent SQL statements that contain the specified keywords reaches this upper limit, the throttling rule is triggered.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> maxConcurrency_ = nullptr;
    // The keywords that are used to identify the SQL statements that need to be throttled.
    // 
    // >  If you specify multiple SQL keywords, separate them with tildes (~). If the number of concurrent SQL statements that contain all the specified SQL keywords reaches the specified upper limit, the throttling rule is triggered.
    // 
    // This parameter is required.
    std::shared_ptr<string> sqlKeywords_ = nullptr;
    // The type of the SQL statements. Valid values:
    // 
    // *   **SELECT**
    // *   **UPDATE**
    // *   **DELETE**
    // 
    // This parameter is required.
    std::shared_ptr<string> sqlType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DAS20200116
#endif
