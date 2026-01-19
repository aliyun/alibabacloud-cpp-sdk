// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECLIENTPUBLICKEYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATECLIENTPUBLICKEYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eiam20211201
{
namespace Models
{
  class CreateClientPublicKeyResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateClientPublicKeyResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ClientPublicKeyId, clientPublicKeyId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateClientPublicKeyResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientPublicKeyId, clientPublicKeyId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CreateClientPublicKeyResponseBody() = default ;
    CreateClientPublicKeyResponseBody(const CreateClientPublicKeyResponseBody &) = default ;
    CreateClientPublicKeyResponseBody(CreateClientPublicKeyResponseBody &&) = default ;
    CreateClientPublicKeyResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateClientPublicKeyResponseBody() = default ;
    CreateClientPublicKeyResponseBody& operator=(const CreateClientPublicKeyResponseBody &) = default ;
    CreateClientPublicKeyResponseBody& operator=(CreateClientPublicKeyResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clientPublicKeyId_ == nullptr
        && this->requestId_ == nullptr; };
    // clientPublicKeyId Field Functions 
    bool hasClientPublicKeyId() const { return this->clientPublicKeyId_ != nullptr;};
    void deleteClientPublicKeyId() { this->clientPublicKeyId_ = nullptr;};
    inline string getClientPublicKeyId() const { DARABONBA_PTR_GET_DEFAULT(clientPublicKeyId_, "") };
    inline CreateClientPublicKeyResponseBody& setClientPublicKeyId(string clientPublicKeyId) { DARABONBA_PTR_SET_VALUE(clientPublicKeyId_, clientPublicKeyId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateClientPublicKeyResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<string> clientPublicKeyId_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
