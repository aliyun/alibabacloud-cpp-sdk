// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAUTHTOKENTOMSENCERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETAUTHTOKENTOMSENCERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MPaaS20201028
{
namespace Models
{
  class GetAuthTokenToMsenceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAuthTokenToMsenceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(MpaasSystemOauthTokenResponse, mpaasSystemOauthTokenResponse_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResultCode, resultCode_);
      DARABONBA_PTR_TO_JSON(ResultMsg, resultMsg_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetAuthTokenToMsenceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(MpaasSystemOauthTokenResponse, mpaasSystemOauthTokenResponse_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResultCode, resultCode_);
      DARABONBA_PTR_FROM_JSON(ResultMsg, resultMsg_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetAuthTokenToMsenceResponseBody() = default ;
    GetAuthTokenToMsenceResponseBody(const GetAuthTokenToMsenceResponseBody &) = default ;
    GetAuthTokenToMsenceResponseBody(GetAuthTokenToMsenceResponseBody &&) = default ;
    GetAuthTokenToMsenceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAuthTokenToMsenceResponseBody() = default ;
    GetAuthTokenToMsenceResponseBody& operator=(const GetAuthTokenToMsenceResponseBody &) = default ;
    GetAuthTokenToMsenceResponseBody& operator=(GetAuthTokenToMsenceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class MpaasSystemOauthTokenResponse : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const MpaasSystemOauthTokenResponse& obj) { 
        DARABONBA_PTR_TO_JSON(AuthToken, authToken_);
        DARABONBA_PTR_TO_JSON(ExpiresIn, expiresIn_);
        DARABONBA_PTR_TO_JSON(OpenId, openId_);
        DARABONBA_PTR_TO_JSON(Platform, platform_);
        DARABONBA_PTR_TO_JSON(UserId, userId_);
      };
      friend void from_json(const Darabonba::Json& j, MpaasSystemOauthTokenResponse& obj) { 
        DARABONBA_PTR_FROM_JSON(AuthToken, authToken_);
        DARABONBA_PTR_FROM_JSON(ExpiresIn, expiresIn_);
        DARABONBA_PTR_FROM_JSON(OpenId, openId_);
        DARABONBA_PTR_FROM_JSON(Platform, platform_);
        DARABONBA_PTR_FROM_JSON(UserId, userId_);
      };
      MpaasSystemOauthTokenResponse() = default ;
      MpaasSystemOauthTokenResponse(const MpaasSystemOauthTokenResponse &) = default ;
      MpaasSystemOauthTokenResponse(MpaasSystemOauthTokenResponse &&) = default ;
      MpaasSystemOauthTokenResponse(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~MpaasSystemOauthTokenResponse() = default ;
      MpaasSystemOauthTokenResponse& operator=(const MpaasSystemOauthTokenResponse &) = default ;
      MpaasSystemOauthTokenResponse& operator=(MpaasSystemOauthTokenResponse &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->authToken_ == nullptr
        && this->expiresIn_ == nullptr && this->openId_ == nullptr && this->platform_ == nullptr && this->userId_ == nullptr; };
      // authToken Field Functions 
      bool hasAuthToken() const { return this->authToken_ != nullptr;};
      void deleteAuthToken() { this->authToken_ = nullptr;};
      inline string getAuthToken() const { DARABONBA_PTR_GET_DEFAULT(authToken_, "") };
      inline MpaasSystemOauthTokenResponse& setAuthToken(string authToken) { DARABONBA_PTR_SET_VALUE(authToken_, authToken) };


      // expiresIn Field Functions 
      bool hasExpiresIn() const { return this->expiresIn_ != nullptr;};
      void deleteExpiresIn() { this->expiresIn_ = nullptr;};
      inline string getExpiresIn() const { DARABONBA_PTR_GET_DEFAULT(expiresIn_, "") };
      inline MpaasSystemOauthTokenResponse& setExpiresIn(string expiresIn) { DARABONBA_PTR_SET_VALUE(expiresIn_, expiresIn) };


      // openId Field Functions 
      bool hasOpenId() const { return this->openId_ != nullptr;};
      void deleteOpenId() { this->openId_ = nullptr;};
      inline string getOpenId() const { DARABONBA_PTR_GET_DEFAULT(openId_, "") };
      inline MpaasSystemOauthTokenResponse& setOpenId(string openId) { DARABONBA_PTR_SET_VALUE(openId_, openId) };


      // platform Field Functions 
      bool hasPlatform() const { return this->platform_ != nullptr;};
      void deletePlatform() { this->platform_ = nullptr;};
      inline string getPlatform() const { DARABONBA_PTR_GET_DEFAULT(platform_, "") };
      inline MpaasSystemOauthTokenResponse& setPlatform(string platform) { DARABONBA_PTR_SET_VALUE(platform_, platform) };


      // userId Field Functions 
      bool hasUserId() const { return this->userId_ != nullptr;};
      void deleteUserId() { this->userId_ = nullptr;};
      inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
      inline MpaasSystemOauthTokenResponse& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


    protected:
      shared_ptr<string> authToken_ {};
      shared_ptr<string> expiresIn_ {};
      shared_ptr<string> openId_ {};
      shared_ptr<string> platform_ {};
      shared_ptr<string> userId_ {};
    };

    virtual bool empty() const override { return this->mpaasSystemOauthTokenResponse_ == nullptr
        && this->requestId_ == nullptr && this->resultCode_ == nullptr && this->resultMsg_ == nullptr && this->success_ == nullptr; };
    // mpaasSystemOauthTokenResponse Field Functions 
    bool hasMpaasSystemOauthTokenResponse() const { return this->mpaasSystemOauthTokenResponse_ != nullptr;};
    void deleteMpaasSystemOauthTokenResponse() { this->mpaasSystemOauthTokenResponse_ = nullptr;};
    inline const GetAuthTokenToMsenceResponseBody::MpaasSystemOauthTokenResponse & getMpaasSystemOauthTokenResponse() const { DARABONBA_PTR_GET_CONST(mpaasSystemOauthTokenResponse_, GetAuthTokenToMsenceResponseBody::MpaasSystemOauthTokenResponse) };
    inline GetAuthTokenToMsenceResponseBody::MpaasSystemOauthTokenResponse getMpaasSystemOauthTokenResponse() { DARABONBA_PTR_GET(mpaasSystemOauthTokenResponse_, GetAuthTokenToMsenceResponseBody::MpaasSystemOauthTokenResponse) };
    inline GetAuthTokenToMsenceResponseBody& setMpaasSystemOauthTokenResponse(const GetAuthTokenToMsenceResponseBody::MpaasSystemOauthTokenResponse & mpaasSystemOauthTokenResponse) { DARABONBA_PTR_SET_VALUE(mpaasSystemOauthTokenResponse_, mpaasSystemOauthTokenResponse) };
    inline GetAuthTokenToMsenceResponseBody& setMpaasSystemOauthTokenResponse(GetAuthTokenToMsenceResponseBody::MpaasSystemOauthTokenResponse && mpaasSystemOauthTokenResponse) { DARABONBA_PTR_SET_RVALUE(mpaasSystemOauthTokenResponse_, mpaasSystemOauthTokenResponse) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetAuthTokenToMsenceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resultCode Field Functions 
    bool hasResultCode() const { return this->resultCode_ != nullptr;};
    void deleteResultCode() { this->resultCode_ = nullptr;};
    inline string getResultCode() const { DARABONBA_PTR_GET_DEFAULT(resultCode_, "") };
    inline GetAuthTokenToMsenceResponseBody& setResultCode(string resultCode) { DARABONBA_PTR_SET_VALUE(resultCode_, resultCode) };


    // resultMsg Field Functions 
    bool hasResultMsg() const { return this->resultMsg_ != nullptr;};
    void deleteResultMsg() { this->resultMsg_ = nullptr;};
    inline string getResultMsg() const { DARABONBA_PTR_GET_DEFAULT(resultMsg_, "") };
    inline GetAuthTokenToMsenceResponseBody& setResultMsg(string resultMsg) { DARABONBA_PTR_SET_VALUE(resultMsg_, resultMsg) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetAuthTokenToMsenceResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<GetAuthTokenToMsenceResponseBody::MpaasSystemOauthTokenResponse> mpaasSystemOauthTokenResponse_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<string> resultCode_ {};
    shared_ptr<string> resultMsg_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MPaaS20201028
#endif
