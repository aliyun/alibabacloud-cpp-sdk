// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSPARKREPLSESSIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETSPARKREPLSESSIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class GetSparkReplSessionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSparkReplSessionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(SessionId, sessionId_);
    };
    friend void from_json(const Darabonba::Json& j, GetSparkReplSessionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(SessionId, sessionId_);
    };
    GetSparkReplSessionRequest() = default ;
    GetSparkReplSessionRequest(const GetSparkReplSessionRequest &) = default ;
    GetSparkReplSessionRequest(GetSparkReplSessionRequest &&) = default ;
    GetSparkReplSessionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSparkReplSessionRequest() = default ;
    GetSparkReplSessionRequest& operator=(const GetSparkReplSessionRequest &) = default ;
    GetSparkReplSessionRequest& operator=(GetSparkReplSessionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->appId_ != nullptr
        && this->sessionId_ != nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline GetSparkReplSessionRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // sessionId Field Functions 
    bool hasSessionId() const { return this->sessionId_ != nullptr;};
    void deleteSessionId() { this->sessionId_ = nullptr;};
    inline int64_t sessionId() const { DARABONBA_PTR_GET_DEFAULT(sessionId_, 0L) };
    inline GetSparkReplSessionRequest& setSessionId(int64_t sessionId) { DARABONBA_PTR_SET_VALUE(sessionId_, sessionId) };


  protected:
    // The application ID.
    // 
    // >  You can call the [ListSparkApps](https://help.aliyun.com/document_detail/455888.html) operation to query all application IDs.
    std::shared_ptr<string> appId_ = nullptr;
    // The ID of the session that executes the code.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> sessionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
