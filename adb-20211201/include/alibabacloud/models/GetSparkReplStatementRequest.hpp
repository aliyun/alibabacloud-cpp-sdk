// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSPARKREPLSTATEMENTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETSPARKREPLSTATEMENTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class GetSparkReplStatementRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSparkReplStatementRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(SessionId, sessionId_);
      DARABONBA_PTR_TO_JSON(StatementId, statementId_);
    };
    friend void from_json(const Darabonba::Json& j, GetSparkReplStatementRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(SessionId, sessionId_);
      DARABONBA_PTR_FROM_JSON(StatementId, statementId_);
    };
    GetSparkReplStatementRequest() = default ;
    GetSparkReplStatementRequest(const GetSparkReplStatementRequest &) = default ;
    GetSparkReplStatementRequest(GetSparkReplStatementRequest &&) = default ;
    GetSparkReplStatementRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSparkReplStatementRequest() = default ;
    GetSparkReplStatementRequest& operator=(const GetSparkReplStatementRequest &) = default ;
    GetSparkReplStatementRequest& operator=(GetSparkReplStatementRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->appId_ != nullptr
        && this->sessionId_ != nullptr && this->statementId_ != nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline GetSparkReplStatementRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // sessionId Field Functions 
    bool hasSessionId() const { return this->sessionId_ != nullptr;};
    void deleteSessionId() { this->sessionId_ = nullptr;};
    inline int64_t sessionId() const { DARABONBA_PTR_GET_DEFAULT(sessionId_, 0L) };
    inline GetSparkReplStatementRequest& setSessionId(int64_t sessionId) { DARABONBA_PTR_SET_VALUE(sessionId_, sessionId) };


    // statementId Field Functions 
    bool hasStatementId() const { return this->statementId_ != nullptr;};
    void deleteStatementId() { this->statementId_ = nullptr;};
    inline int64_t statementId() const { DARABONBA_PTR_GET_DEFAULT(statementId_, 0L) };
    inline GetSparkReplStatementRequest& setStatementId(int64_t statementId) { DARABONBA_PTR_SET_VALUE(statementId_, statementId) };


  protected:
    // The application ID.
    // 
    // >  You can call the [ListSparkApps](https://help.aliyun.com/document_detail/455888.html) operation to query Spark application IDs.
    std::shared_ptr<string> appId_ = nullptr;
    // The ID of the session that executes the code.
    std::shared_ptr<int64_t> sessionId_ = nullptr;
    // The unique ID of the code block in the Spark job.
    std::shared_ptr<int64_t> statementId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
