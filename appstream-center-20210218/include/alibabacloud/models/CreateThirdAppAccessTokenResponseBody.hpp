// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATETHIRDAPPACCESSTOKENRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATETHIRDAPPACCESSTOKENRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AppstreamCenter20210218
{
namespace Models
{
  class CreateThirdAppAccessTokenResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateThirdAppAccessTokenResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccessToken, accessToken_);
      DARABONBA_PTR_TO_JSON(ExpiresAt, expiresAt_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateThirdAppAccessTokenResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessToken, accessToken_);
      DARABONBA_PTR_FROM_JSON(ExpiresAt, expiresAt_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CreateThirdAppAccessTokenResponseBody() = default ;
    CreateThirdAppAccessTokenResponseBody(const CreateThirdAppAccessTokenResponseBody &) = default ;
    CreateThirdAppAccessTokenResponseBody(CreateThirdAppAccessTokenResponseBody &&) = default ;
    CreateThirdAppAccessTokenResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateThirdAppAccessTokenResponseBody() = default ;
    CreateThirdAppAccessTokenResponseBody& operator=(const CreateThirdAppAccessTokenResponseBody &) = default ;
    CreateThirdAppAccessTokenResponseBody& operator=(CreateThirdAppAccessTokenResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accessToken_ == nullptr
        && this->expiresAt_ == nullptr && this->requestId_ == nullptr; };
    // accessToken Field Functions 
    bool hasAccessToken() const { return this->accessToken_ != nullptr;};
    void deleteAccessToken() { this->accessToken_ = nullptr;};
    inline string getAccessToken() const { DARABONBA_PTR_GET_DEFAULT(accessToken_, "") };
    inline CreateThirdAppAccessTokenResponseBody& setAccessToken(string accessToken) { DARABONBA_PTR_SET_VALUE(accessToken_, accessToken) };


    // expiresAt Field Functions 
    bool hasExpiresAt() const { return this->expiresAt_ != nullptr;};
    void deleteExpiresAt() { this->expiresAt_ = nullptr;};
    inline int64_t getExpiresAt() const { DARABONBA_PTR_GET_DEFAULT(expiresAt_, 0L) };
    inline CreateThirdAppAccessTokenResponseBody& setExpiresAt(int64_t expiresAt) { DARABONBA_PTR_SET_VALUE(expiresAt_, expiresAt) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateThirdAppAccessTokenResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The time-limited static access token created for the specified user and single cloud desktop. This is a sensitive credential. Do not log or expose the full value.
    shared_ptr<string> accessToken_ {};
    // The absolute expiration time of the token, in UNIX milliseconds. This parameter is not empty when the call is successful. GetLatestThirdAppAccessToken returns the original expiration time without extending it.
    shared_ptr<int64_t> expiresAt_ {};
    // The unique identifier of the request, which can be used to locate and troubleshoot issues.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AppstreamCenter20210218
#endif
