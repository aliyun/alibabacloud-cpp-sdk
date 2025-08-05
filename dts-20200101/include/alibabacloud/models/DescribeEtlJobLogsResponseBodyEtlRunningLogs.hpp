// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEETLJOBLOGSRESPONSEBODYETLRUNNINGLOGS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEETLJOBLOGSRESPONSEBODYETLRUNNINGLOGS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dts20200101
{
namespace Models
{
  class DescribeEtlJobLogsResponseBodyEtlRunningLogs : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeEtlJobLogsResponseBodyEtlRunningLogs& obj) { 
      DARABONBA_PTR_TO_JSON(Content, content_);
      DARABONBA_PTR_TO_JSON(ContentKey, contentKey_);
      DARABONBA_PTR_TO_JSON(EtlId, etlId_);
      DARABONBA_PTR_TO_JSON(LogDatetime, logDatetime_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeEtlJobLogsResponseBodyEtlRunningLogs& obj) { 
      DARABONBA_PTR_FROM_JSON(Content, content_);
      DARABONBA_PTR_FROM_JSON(ContentKey, contentKey_);
      DARABONBA_PTR_FROM_JSON(EtlId, etlId_);
      DARABONBA_PTR_FROM_JSON(LogDatetime, logDatetime_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
    };
    DescribeEtlJobLogsResponseBodyEtlRunningLogs() = default ;
    DescribeEtlJobLogsResponseBodyEtlRunningLogs(const DescribeEtlJobLogsResponseBodyEtlRunningLogs &) = default ;
    DescribeEtlJobLogsResponseBodyEtlRunningLogs(DescribeEtlJobLogsResponseBodyEtlRunningLogs &&) = default ;
    DescribeEtlJobLogsResponseBodyEtlRunningLogs(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeEtlJobLogsResponseBodyEtlRunningLogs() = default ;
    DescribeEtlJobLogsResponseBodyEtlRunningLogs& operator=(const DescribeEtlJobLogsResponseBodyEtlRunningLogs &) = default ;
    DescribeEtlJobLogsResponseBodyEtlRunningLogs& operator=(DescribeEtlJobLogsResponseBodyEtlRunningLogs &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->content_ != nullptr
        && this->contentKey_ != nullptr && this->etlId_ != nullptr && this->logDatetime_ != nullptr && this->status_ != nullptr && this->userId_ != nullptr; };
    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline string content() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
    inline DescribeEtlJobLogsResponseBodyEtlRunningLogs& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


    // contentKey Field Functions 
    bool hasContentKey() const { return this->contentKey_ != nullptr;};
    void deleteContentKey() { this->contentKey_ = nullptr;};
    inline string contentKey() const { DARABONBA_PTR_GET_DEFAULT(contentKey_, "") };
    inline DescribeEtlJobLogsResponseBodyEtlRunningLogs& setContentKey(string contentKey) { DARABONBA_PTR_SET_VALUE(contentKey_, contentKey) };


    // etlId Field Functions 
    bool hasEtlId() const { return this->etlId_ != nullptr;};
    void deleteEtlId() { this->etlId_ = nullptr;};
    inline string etlId() const { DARABONBA_PTR_GET_DEFAULT(etlId_, "") };
    inline DescribeEtlJobLogsResponseBodyEtlRunningLogs& setEtlId(string etlId) { DARABONBA_PTR_SET_VALUE(etlId_, etlId) };


    // logDatetime Field Functions 
    bool hasLogDatetime() const { return this->logDatetime_ != nullptr;};
    void deleteLogDatetime() { this->logDatetime_ = nullptr;};
    inline string logDatetime() const { DARABONBA_PTR_GET_DEFAULT(logDatetime_, "") };
    inline DescribeEtlJobLogsResponseBodyEtlRunningLogs& setLogDatetime(string logDatetime) { DARABONBA_PTR_SET_VALUE(logDatetime_, logDatetime) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeEtlJobLogsResponseBodyEtlRunningLogs& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline DescribeEtlJobLogsResponseBodyEtlRunningLogs& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


  protected:
    // The state of the ETL task.
    std::shared_ptr<string> content_ = nullptr;
    // The module for which the logs are generated, such as the conversion module of ETL tasks.
    std::shared_ptr<string> contentKey_ = nullptr;
    // The ID of the ETL task.
    std::shared_ptr<string> etlId_ = nullptr;
    // The time when the log was generated. This value is a UNIX timestamp representing the number of milliseconds that have elapsed since January 1, 1970, 00:00:00 UTC.
    std::shared_ptr<string> logDatetime_ = nullptr;
    // The log level. Valid values: ERROR, WARN, INFO, and DEBUG.
    std::shared_ptr<string> status_ = nullptr;
    // The ID of the user.
    std::shared_ptr<string> userId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dts20200101
#endif
