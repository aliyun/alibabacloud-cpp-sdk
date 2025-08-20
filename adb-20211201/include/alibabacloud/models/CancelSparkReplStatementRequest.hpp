// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CANCELSPARKREPLSTATEMENTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CANCELSPARKREPLSTATEMENTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class CancelSparkReplStatementRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CancelSparkReplStatementRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(SessionId, sessionId_);
      DARABONBA_PTR_TO_JSON(StatementId, statementId_);
    };
    friend void from_json(const Darabonba::Json& j, CancelSparkReplStatementRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(SessionId, sessionId_);
      DARABONBA_PTR_FROM_JSON(StatementId, statementId_);
    };
    CancelSparkReplStatementRequest() = default ;
    CancelSparkReplStatementRequest(const CancelSparkReplStatementRequest &) = default ;
    CancelSparkReplStatementRequest(CancelSparkReplStatementRequest &&) = default ;
    CancelSparkReplStatementRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CancelSparkReplStatementRequest() = default ;
    CancelSparkReplStatementRequest& operator=(const CancelSparkReplStatementRequest &) = default ;
    CancelSparkReplStatementRequest& operator=(CancelSparkReplStatementRequest &&) = default ;
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
    inline CancelSparkReplStatementRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // sessionId Field Functions 
    bool hasSessionId() const { return this->sessionId_ != nullptr;};
    void deleteSessionId() { this->sessionId_ = nullptr;};
    inline int64_t sessionId() const { DARABONBA_PTR_GET_DEFAULT(sessionId_, 0L) };
    inline CancelSparkReplStatementRequest& setSessionId(int64_t sessionId) { DARABONBA_PTR_SET_VALUE(sessionId_, sessionId) };


    // statementId Field Functions 
    bool hasStatementId() const { return this->statementId_ != nullptr;};
    void deleteStatementId() { this->statementId_ = nullptr;};
    inline int64_t statementId() const { DARABONBA_PTR_GET_DEFAULT(statementId_, 0L) };
    inline CancelSparkReplStatementRequest& setStatementId(int64_t statementId) { DARABONBA_PTR_SET_VALUE(statementId_, statementId) };


  protected:
    // The application ID.
    // 
    // >  You can call the [ListSparkApps](https://help.aliyun.com/document_detail/455888.html) operation to query Spark application IDs.
    std::shared_ptr<string> appId_ = nullptr;
    // The session ID.
    std::shared_ptr<int64_t> sessionId_ = nullptr;
    // The unique ID of the code block in the Spark job.
    std::shared_ptr<int64_t> statementId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
