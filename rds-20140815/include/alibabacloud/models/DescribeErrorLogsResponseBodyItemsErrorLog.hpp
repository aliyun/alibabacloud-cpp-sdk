// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEERRORLOGSRESPONSEBODYITEMSERRORLOG_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEERRORLOGSRESPONSEBODYITEMSERRORLOG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class DescribeErrorLogsResponseBodyItemsErrorLog : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeErrorLogsResponseBodyItemsErrorLog& obj) { 
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(Database, database_);
      DARABONBA_PTR_TO_JSON(ErrorInfo, errorInfo_);
      DARABONBA_PTR_TO_JSON(User, user_);
      DARABONBA_PTR_TO_JSON(UserIp, userIp_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeErrorLogsResponseBodyItemsErrorLog& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(Database, database_);
      DARABONBA_PTR_FROM_JSON(ErrorInfo, errorInfo_);
      DARABONBA_PTR_FROM_JSON(User, user_);
      DARABONBA_PTR_FROM_JSON(UserIp, userIp_);
    };
    DescribeErrorLogsResponseBodyItemsErrorLog() = default ;
    DescribeErrorLogsResponseBodyItemsErrorLog(const DescribeErrorLogsResponseBodyItemsErrorLog &) = default ;
    DescribeErrorLogsResponseBodyItemsErrorLog(DescribeErrorLogsResponseBodyItemsErrorLog &&) = default ;
    DescribeErrorLogsResponseBodyItemsErrorLog(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeErrorLogsResponseBodyItemsErrorLog() = default ;
    DescribeErrorLogsResponseBodyItemsErrorLog& operator=(const DescribeErrorLogsResponseBodyItemsErrorLog &) = default ;
    DescribeErrorLogsResponseBodyItemsErrorLog& operator=(DescribeErrorLogsResponseBodyItemsErrorLog &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->createTime_ == nullptr
        && return this->database_ == nullptr && return this->errorInfo_ == nullptr && return this->user_ == nullptr && return this->userIp_ == nullptr; };
    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline DescribeErrorLogsResponseBodyItemsErrorLog& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // database Field Functions 
    bool hasDatabase() const { return this->database_ != nullptr;};
    void deleteDatabase() { this->database_ = nullptr;};
    inline string database() const { DARABONBA_PTR_GET_DEFAULT(database_, "") };
    inline DescribeErrorLogsResponseBodyItemsErrorLog& setDatabase(string database) { DARABONBA_PTR_SET_VALUE(database_, database) };


    // errorInfo Field Functions 
    bool hasErrorInfo() const { return this->errorInfo_ != nullptr;};
    void deleteErrorInfo() { this->errorInfo_ = nullptr;};
    inline string errorInfo() const { DARABONBA_PTR_GET_DEFAULT(errorInfo_, "") };
    inline DescribeErrorLogsResponseBodyItemsErrorLog& setErrorInfo(string errorInfo) { DARABONBA_PTR_SET_VALUE(errorInfo_, errorInfo) };


    // user Field Functions 
    bool hasUser() const { return this->user_ != nullptr;};
    void deleteUser() { this->user_ = nullptr;};
    inline string user() const { DARABONBA_PTR_GET_DEFAULT(user_, "") };
    inline DescribeErrorLogsResponseBodyItemsErrorLog& setUser(string user) { DARABONBA_PTR_SET_VALUE(user_, user) };


    // userIp Field Functions 
    bool hasUserIp() const { return this->userIp_ != nullptr;};
    void deleteUserIp() { this->userIp_ = nullptr;};
    inline string userIp() const { DARABONBA_PTR_GET_DEFAULT(userIp_, "") };
    inline DescribeErrorLogsResponseBodyItemsErrorLog& setUserIp(string userIp) { DARABONBA_PTR_SET_VALUE(userIp_, userIp) };


  protected:
    // The time when the error log entry was generated. The time follows the ISO 8601 standard in the *yyyy-MM-dd*T*HH:mm:ss*Z format. The time is displayed in UTC.
    std::shared_ptr<string> createTime_ = nullptr;
    std::shared_ptr<string> database_ = nullptr;
    // The error log information.
    std::shared_ptr<string> errorInfo_ = nullptr;
    std::shared_ptr<string> user_ = nullptr;
    std::shared_ptr<string> userIp_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
