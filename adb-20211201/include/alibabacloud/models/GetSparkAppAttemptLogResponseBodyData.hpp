// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSPARKAPPATTEMPTLOGRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETSPARKAPPATTEMPTLOGRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class GetSparkAppAttemptLogResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSparkAppAttemptLogResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_TO_JSON(LogContent, logContent_);
      DARABONBA_PTR_TO_JSON(LogSize, logSize_);
      DARABONBA_PTR_TO_JSON(Message, message_);
    };
    friend void from_json(const Darabonba::Json& j, GetSparkAppAttemptLogResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_FROM_JSON(LogContent, logContent_);
      DARABONBA_PTR_FROM_JSON(LogSize, logSize_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
    };
    GetSparkAppAttemptLogResponseBodyData() = default ;
    GetSparkAppAttemptLogResponseBodyData(const GetSparkAppAttemptLogResponseBodyData &) = default ;
    GetSparkAppAttemptLogResponseBodyData(GetSparkAppAttemptLogResponseBodyData &&) = default ;
    GetSparkAppAttemptLogResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSparkAppAttemptLogResponseBodyData() = default ;
    GetSparkAppAttemptLogResponseBodyData& operator=(const GetSparkAppAttemptLogResponseBodyData &) = default ;
    GetSparkAppAttemptLogResponseBodyData& operator=(GetSparkAppAttemptLogResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appId_ == nullptr
        && return this->DBClusterId_ == nullptr && return this->logContent_ == nullptr && return this->logSize_ == nullptr && return this->message_ == nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline GetSparkAppAttemptLogResponseBodyData& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // DBClusterId Field Functions 
    bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
    void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
    inline string DBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
    inline GetSparkAppAttemptLogResponseBodyData& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


    // logContent Field Functions 
    bool hasLogContent() const { return this->logContent_ != nullptr;};
    void deleteLogContent() { this->logContent_ = nullptr;};
    inline string logContent() const { DARABONBA_PTR_GET_DEFAULT(logContent_, "") };
    inline GetSparkAppAttemptLogResponseBodyData& setLogContent(string logContent) { DARABONBA_PTR_SET_VALUE(logContent_, logContent) };


    // logSize Field Functions 
    bool hasLogSize() const { return this->logSize_ != nullptr;};
    void deleteLogSize() { this->logSize_ = nullptr;};
    inline int32_t logSize() const { DARABONBA_PTR_GET_DEFAULT(logSize_, 0) };
    inline GetSparkAppAttemptLogResponseBodyData& setLogSize(int32_t logSize) { DARABONBA_PTR_SET_VALUE(logSize_, logSize) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetSparkAppAttemptLogResponseBodyData& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


  protected:
    // The application ID.
    std::shared_ptr<string> appId_ = nullptr;
    // The ID of the AnalyticDB for MySQL Data Lakehouse Edition cluster.
    std::shared_ptr<string> DBClusterId_ = nullptr;
    // The content of the log.
    std::shared_ptr<string> logContent_ = nullptr;
    // The number of log entries. A value of 0 indicates that no valid logs are returned.
    std::shared_ptr<int32_t> logSize_ = nullptr;
    // The alert message returned for the request, such as task execution failure or insufficient resources. If no alert occurs, null is returned.
    std::shared_ptr<string> message_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
