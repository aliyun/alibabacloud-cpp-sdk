// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEGATEWAYSECRETRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEGATEWAYSECRETRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <alibabacloud/models/SecretCreateRecordValue.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Servicemesh20200111
{
namespace Models
{
  class CreateGatewaySecretResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateGatewaySecretResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SecretCreateRecord, secretCreateRecord_);
    };
    friend void from_json(const Darabonba::Json& j, CreateGatewaySecretResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SecretCreateRecord, secretCreateRecord_);
    };
    CreateGatewaySecretResponseBody() = default ;
    CreateGatewaySecretResponseBody(const CreateGatewaySecretResponseBody &) = default ;
    CreateGatewaySecretResponseBody(CreateGatewaySecretResponseBody &&) = default ;
    CreateGatewaySecretResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateGatewaySecretResponseBody() = default ;
    CreateGatewaySecretResponseBody& operator=(const CreateGatewaySecretResponseBody &) = default ;
    CreateGatewaySecretResponseBody& operator=(CreateGatewaySecretResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && return this->secretCreateRecord_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateGatewaySecretResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // secretCreateRecord Field Functions 
    bool hasSecretCreateRecord() const { return this->secretCreateRecord_ != nullptr;};
    void deleteSecretCreateRecord() { this->secretCreateRecord_ = nullptr;};
    inline const map<string, SecretCreateRecordValue> & secretCreateRecord() const { DARABONBA_PTR_GET_CONST(secretCreateRecord_, map<string, SecretCreateRecordValue>) };
    inline map<string, SecretCreateRecordValue> secretCreateRecord() { DARABONBA_PTR_GET(secretCreateRecord_, map<string, SecretCreateRecordValue>) };
    inline CreateGatewaySecretResponseBody& setSecretCreateRecord(const map<string, SecretCreateRecordValue> & secretCreateRecord) { DARABONBA_PTR_SET_VALUE(secretCreateRecord_, secretCreateRecord) };
    inline CreateGatewaySecretResponseBody& setSecretCreateRecord(map<string, SecretCreateRecordValue> && secretCreateRecord) { DARABONBA_PTR_SET_RVALUE(secretCreateRecord_, secretCreateRecord) };


  protected:
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The record of creating the secret.
    std::shared_ptr<map<string, SecretCreateRecordValue>> secretCreateRecord_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Servicemesh20200111
#endif
