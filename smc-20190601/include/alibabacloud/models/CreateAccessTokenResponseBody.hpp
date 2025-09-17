// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEACCESSTOKENRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEACCESSTOKENRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Smc20190601
{
namespace Models
{
  class CreateAccessTokenResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateAccessTokenResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccessTokenCode, accessTokenCode_);
      DARABONBA_PTR_TO_JSON(AccessTokenId, accessTokenId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateAccessTokenResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessTokenCode, accessTokenCode_);
      DARABONBA_PTR_FROM_JSON(AccessTokenId, accessTokenId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CreateAccessTokenResponseBody() = default ;
    CreateAccessTokenResponseBody(const CreateAccessTokenResponseBody &) = default ;
    CreateAccessTokenResponseBody(CreateAccessTokenResponseBody &&) = default ;
    CreateAccessTokenResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateAccessTokenResponseBody() = default ;
    CreateAccessTokenResponseBody& operator=(const CreateAccessTokenResponseBody &) = default ;
    CreateAccessTokenResponseBody& operator=(CreateAccessTokenResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->accessTokenCode_ != nullptr
        && this->accessTokenId_ != nullptr && this->requestId_ != nullptr; };
    // accessTokenCode Field Functions 
    bool hasAccessTokenCode() const { return this->accessTokenCode_ != nullptr;};
    void deleteAccessTokenCode() { this->accessTokenCode_ = nullptr;};
    inline string accessTokenCode() const { DARABONBA_PTR_GET_DEFAULT(accessTokenCode_, "") };
    inline CreateAccessTokenResponseBody& setAccessTokenCode(string accessTokenCode) { DARABONBA_PTR_SET_VALUE(accessTokenCode_, accessTokenCode) };


    // accessTokenId Field Functions 
    bool hasAccessTokenId() const { return this->accessTokenId_ != nullptr;};
    void deleteAccessTokenId() { this->accessTokenId_ = nullptr;};
    inline string accessTokenId() const { DARABONBA_PTR_GET_DEFAULT(accessTokenId_, "") };
    inline CreateAccessTokenResponseBody& setAccessTokenId(string accessTokenId) { DARABONBA_PTR_SET_VALUE(accessTokenId_, accessTokenId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateAccessTokenResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The value of the activation code. The value is returned only once after the CreateAccessToken operation is called and cannot be subsequently queried. Make sure that you properly save the returned value.
    std::shared_ptr<string> accessTokenCode_ = nullptr;
    // The ID of the activation code.
    std::shared_ptr<string> accessTokenId_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Smc20190601
#endif
