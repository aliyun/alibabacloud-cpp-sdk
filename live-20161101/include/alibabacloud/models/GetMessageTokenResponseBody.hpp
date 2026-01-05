// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMESSAGETOKENRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETMESSAGETOKENRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class GetMessageTokenResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetMessageTokenResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Result, result_);
    };
    friend void from_json(const Darabonba::Json& j, GetMessageTokenResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Result, result_);
    };
    GetMessageTokenResponseBody() = default ;
    GetMessageTokenResponseBody(const GetMessageTokenResponseBody &) = default ;
    GetMessageTokenResponseBody(GetMessageTokenResponseBody &&) = default ;
    GetMessageTokenResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetMessageTokenResponseBody() = default ;
    GetMessageTokenResponseBody& operator=(const GetMessageTokenResponseBody &) = default ;
    GetMessageTokenResponseBody& operator=(GetMessageTokenResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Result : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Result& obj) { 
        DARABONBA_PTR_TO_JSON(AccessToken, accessToken_);
        DARABONBA_PTR_TO_JSON(AccessTokenExpiredTime, accessTokenExpiredTime_);
        DARABONBA_PTR_TO_JSON(RefreshToken, refreshToken_);
      };
      friend void from_json(const Darabonba::Json& j, Result& obj) { 
        DARABONBA_PTR_FROM_JSON(AccessToken, accessToken_);
        DARABONBA_PTR_FROM_JSON(AccessTokenExpiredTime, accessTokenExpiredTime_);
        DARABONBA_PTR_FROM_JSON(RefreshToken, refreshToken_);
      };
      Result() = default ;
      Result(const Result &) = default ;
      Result(Result &&) = default ;
      Result(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Result() = default ;
      Result& operator=(const Result &) = default ;
      Result& operator=(Result &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->accessToken_ == nullptr
        && this->accessTokenExpiredTime_ == nullptr && this->refreshToken_ == nullptr; };
      // accessToken Field Functions 
      bool hasAccessToken() const { return this->accessToken_ != nullptr;};
      void deleteAccessToken() { this->accessToken_ = nullptr;};
      inline string getAccessToken() const { DARABONBA_PTR_GET_DEFAULT(accessToken_, "") };
      inline Result& setAccessToken(string accessToken) { DARABONBA_PTR_SET_VALUE(accessToken_, accessToken) };


      // accessTokenExpiredTime Field Functions 
      bool hasAccessTokenExpiredTime() const { return this->accessTokenExpiredTime_ != nullptr;};
      void deleteAccessTokenExpiredTime() { this->accessTokenExpiredTime_ = nullptr;};
      inline int64_t getAccessTokenExpiredTime() const { DARABONBA_PTR_GET_DEFAULT(accessTokenExpiredTime_, 0L) };
      inline Result& setAccessTokenExpiredTime(int64_t accessTokenExpiredTime) { DARABONBA_PTR_SET_VALUE(accessTokenExpiredTime_, accessTokenExpiredTime) };


      // refreshToken Field Functions 
      bool hasRefreshToken() const { return this->refreshToken_ != nullptr;};
      void deleteRefreshToken() { this->refreshToken_ = nullptr;};
      inline string getRefreshToken() const { DARABONBA_PTR_GET_DEFAULT(refreshToken_, "") };
      inline Result& setRefreshToken(string refreshToken) { DARABONBA_PTR_SET_VALUE(refreshToken_, refreshToken) };


    protected:
      // The token used to establish a persistent connection.
      shared_ptr<string> accessToken_ {};
      // Indicates how long until the token expires. Unit: milliseconds.
      shared_ptr<int64_t> accessTokenExpiredTime_ {};
      // The updated token. If a token expires, you can call RefreshToken to obtain a new token.
      shared_ptr<string> refreshToken_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->result_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetMessageTokenResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const GetMessageTokenResponseBody::Result & getResult() const { DARABONBA_PTR_GET_CONST(result_, GetMessageTokenResponseBody::Result) };
    inline GetMessageTokenResponseBody::Result getResult() { DARABONBA_PTR_GET(result_, GetMessageTokenResponseBody::Result) };
    inline GetMessageTokenResponseBody& setResult(const GetMessageTokenResponseBody::Result & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline GetMessageTokenResponseBody& setResult(GetMessageTokenResponseBody::Result && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


  protected:
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The returned result.
    shared_ptr<GetMessageTokenResponseBody::Result> result_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
