// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETIDENTIFICATIONRESULTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETIDENTIFICATIONRESULTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dytnsapi20230101
{
namespace Models
{
  class GetIdentificationResultRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetIdentificationResultRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AuthCode, authCode_);
      DARABONBA_PTR_TO_JSON(SessionId, sessionId_);
    };
    friend void from_json(const Darabonba::Json& j, GetIdentificationResultRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AuthCode, authCode_);
      DARABONBA_PTR_FROM_JSON(SessionId, sessionId_);
    };
    GetIdentificationResultRequest() = default ;
    GetIdentificationResultRequest(const GetIdentificationResultRequest &) = default ;
    GetIdentificationResultRequest(GetIdentificationResultRequest &&) = default ;
    GetIdentificationResultRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetIdentificationResultRequest() = default ;
    GetIdentificationResultRequest& operator=(const GetIdentificationResultRequest &) = default ;
    GetIdentificationResultRequest& operator=(GetIdentificationResultRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->authCode_ == nullptr
        && this->sessionId_ == nullptr; };
    // authCode Field Functions 
    bool hasAuthCode() const { return this->authCode_ != nullptr;};
    void deleteAuthCode() { this->authCode_ = nullptr;};
    inline string getAuthCode() const { DARABONBA_PTR_GET_DEFAULT(authCode_, "") };
    inline GetIdentificationResultRequest& setAuthCode(string authCode) { DARABONBA_PTR_SET_VALUE(authCode_, authCode) };


    // sessionId Field Functions 
    bool hasSessionId() const { return this->sessionId_ != nullptr;};
    void deleteSessionId() { this->sessionId_ = nullptr;};
    inline string getSessionId() const { DARABONBA_PTR_GET_DEFAULT(sessionId_, "") };
    inline GetIdentificationResultRequest& setSessionId(string sessionId) { DARABONBA_PTR_SET_VALUE(sessionId_, sessionId) };


  protected:
    // This parameter is required.
    shared_ptr<string> authCode_ {};
    // This parameter is required.
    shared_ptr<string> sessionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dytnsapi20230101
#endif
