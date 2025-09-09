// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEUSERPUBLICKEYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEUSERPUBLICKEYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace YundunBastionhost20191209
{
namespace Models
{
  class CreateUserPublicKeyResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateUserPublicKeyResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PublicKeyId, publicKeyId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateUserPublicKeyResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PublicKeyId, publicKeyId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CreateUserPublicKeyResponseBody() = default ;
    CreateUserPublicKeyResponseBody(const CreateUserPublicKeyResponseBody &) = default ;
    CreateUserPublicKeyResponseBody(CreateUserPublicKeyResponseBody &&) = default ;
    CreateUserPublicKeyResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateUserPublicKeyResponseBody() = default ;
    CreateUserPublicKeyResponseBody& operator=(const CreateUserPublicKeyResponseBody &) = default ;
    CreateUserPublicKeyResponseBody& operator=(CreateUserPublicKeyResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->publicKeyId_ != nullptr
        && this->requestId_ != nullptr; };
    // publicKeyId Field Functions 
    bool hasPublicKeyId() const { return this->publicKeyId_ != nullptr;};
    void deletePublicKeyId() { this->publicKeyId_ = nullptr;};
    inline string publicKeyId() const { DARABONBA_PTR_GET_DEFAULT(publicKeyId_, "") };
    inline CreateUserPublicKeyResponseBody& setPublicKeyId(string publicKeyId) { DARABONBA_PTR_SET_VALUE(publicKeyId_, publicKeyId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateUserPublicKeyResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The ID of the public key.
    std::shared_ptr<string> publicKeyId_ = nullptr;
    // The ID of the request, which is used to locate and troubleshoot issues.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace YundunBastionhost20191209
#endif
