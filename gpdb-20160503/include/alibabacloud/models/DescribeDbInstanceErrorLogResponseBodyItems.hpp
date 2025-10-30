// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDBINSTANCEERRORLOGRESPONSEBODYITEMS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDBINSTANCEERRORLOGRESPONSEBODYITEMS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gpdb20160503
{
namespace Models
{
  class DescribeDBInstanceErrorLogResponseBodyItems : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDBInstanceErrorLogResponseBodyItems& obj) { 
      DARABONBA_PTR_TO_JSON(Database, database_);
      DARABONBA_PTR_TO_JSON(Host, host_);
      DARABONBA_PTR_TO_JSON(LogContext, logContext_);
      DARABONBA_PTR_TO_JSON(LogLevel, logLevel_);
      DARABONBA_PTR_TO_JSON(Time, time_);
      DARABONBA_PTR_TO_JSON(User, user_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDBInstanceErrorLogResponseBodyItems& obj) { 
      DARABONBA_PTR_FROM_JSON(Database, database_);
      DARABONBA_PTR_FROM_JSON(Host, host_);
      DARABONBA_PTR_FROM_JSON(LogContext, logContext_);
      DARABONBA_PTR_FROM_JSON(LogLevel, logLevel_);
      DARABONBA_PTR_FROM_JSON(Time, time_);
      DARABONBA_PTR_FROM_JSON(User, user_);
    };
    DescribeDBInstanceErrorLogResponseBodyItems() = default ;
    DescribeDBInstanceErrorLogResponseBodyItems(const DescribeDBInstanceErrorLogResponseBodyItems &) = default ;
    DescribeDBInstanceErrorLogResponseBodyItems(DescribeDBInstanceErrorLogResponseBodyItems &&) = default ;
    DescribeDBInstanceErrorLogResponseBodyItems(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDBInstanceErrorLogResponseBodyItems() = default ;
    DescribeDBInstanceErrorLogResponseBodyItems& operator=(const DescribeDBInstanceErrorLogResponseBodyItems &) = default ;
    DescribeDBInstanceErrorLogResponseBodyItems& operator=(DescribeDBInstanceErrorLogResponseBodyItems &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->database_ == nullptr
        && return this->host_ == nullptr && return this->logContext_ == nullptr && return this->logLevel_ == nullptr && return this->time_ == nullptr && return this->user_ == nullptr; };
    // database Field Functions 
    bool hasDatabase() const { return this->database_ != nullptr;};
    void deleteDatabase() { this->database_ = nullptr;};
    inline string database() const { DARABONBA_PTR_GET_DEFAULT(database_, "") };
    inline DescribeDBInstanceErrorLogResponseBodyItems& setDatabase(string database) { DARABONBA_PTR_SET_VALUE(database_, database) };


    // host Field Functions 
    bool hasHost() const { return this->host_ != nullptr;};
    void deleteHost() { this->host_ = nullptr;};
    inline string host() const { DARABONBA_PTR_GET_DEFAULT(host_, "") };
    inline DescribeDBInstanceErrorLogResponseBodyItems& setHost(string host) { DARABONBA_PTR_SET_VALUE(host_, host) };


    // logContext Field Functions 
    bool hasLogContext() const { return this->logContext_ != nullptr;};
    void deleteLogContext() { this->logContext_ = nullptr;};
    inline string logContext() const { DARABONBA_PTR_GET_DEFAULT(logContext_, "") };
    inline DescribeDBInstanceErrorLogResponseBodyItems& setLogContext(string logContext) { DARABONBA_PTR_SET_VALUE(logContext_, logContext) };


    // logLevel Field Functions 
    bool hasLogLevel() const { return this->logLevel_ != nullptr;};
    void deleteLogLevel() { this->logLevel_ = nullptr;};
    inline string logLevel() const { DARABONBA_PTR_GET_DEFAULT(logLevel_, "") };
    inline DescribeDBInstanceErrorLogResponseBodyItems& setLogLevel(string logLevel) { DARABONBA_PTR_SET_VALUE(logLevel_, logLevel) };


    // time Field Functions 
    bool hasTime() const { return this->time_ != nullptr;};
    void deleteTime() { this->time_ = nullptr;};
    inline int64_t time() const { DARABONBA_PTR_GET_DEFAULT(time_, 0L) };
    inline DescribeDBInstanceErrorLogResponseBodyItems& setTime(int64_t time) { DARABONBA_PTR_SET_VALUE(time_, time) };


    // user Field Functions 
    bool hasUser() const { return this->user_ != nullptr;};
    void deleteUser() { this->user_ = nullptr;};
    inline string user() const { DARABONBA_PTR_GET_DEFAULT(user_, "") };
    inline DescribeDBInstanceErrorLogResponseBodyItems& setUser(string user) { DARABONBA_PTR_SET_VALUE(user_, user) };


  protected:
    // The name of the database.
    std::shared_ptr<string> database_ = nullptr;
    // This parameter is not supported.
    std::shared_ptr<string> host_ = nullptr;
    // The content of the error log.
    std::shared_ptr<string> logContext_ = nullptr;
    // The level of the queried log.
    std::shared_ptr<string> logLevel_ = nullptr;
    // The time when the log was generated. The time is displayed in UTC.
    std::shared_ptr<int64_t> time_ = nullptr;
    // The name of the database account.
    std::shared_ptr<string> user_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
