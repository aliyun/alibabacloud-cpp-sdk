// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEGATEWAYSECRETRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DELETEGATEWAYSECRETRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <alibabacloud/models/SecretDeleteRecordValue.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Servicemesh20200111
{
namespace Models
{
  class DeleteGatewaySecretResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteGatewaySecretResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SecretDeleteRecord, secretDeleteRecord_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteGatewaySecretResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SecretDeleteRecord, secretDeleteRecord_);
    };
    DeleteGatewaySecretResponseBody() = default ;
    DeleteGatewaySecretResponseBody(const DeleteGatewaySecretResponseBody &) = default ;
    DeleteGatewaySecretResponseBody(DeleteGatewaySecretResponseBody &&) = default ;
    DeleteGatewaySecretResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteGatewaySecretResponseBody() = default ;
    DeleteGatewaySecretResponseBody& operator=(const DeleteGatewaySecretResponseBody &) = default ;
    DeleteGatewaySecretResponseBody& operator=(DeleteGatewaySecretResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && return this->secretDeleteRecord_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DeleteGatewaySecretResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // secretDeleteRecord Field Functions 
    bool hasSecretDeleteRecord() const { return this->secretDeleteRecord_ != nullptr;};
    void deleteSecretDeleteRecord() { this->secretDeleteRecord_ = nullptr;};
    inline const map<string, SecretDeleteRecordValue> & secretDeleteRecord() const { DARABONBA_PTR_GET_CONST(secretDeleteRecord_, map<string, SecretDeleteRecordValue>) };
    inline map<string, SecretDeleteRecordValue> secretDeleteRecord() { DARABONBA_PTR_GET(secretDeleteRecord_, map<string, SecretDeleteRecordValue>) };
    inline DeleteGatewaySecretResponseBody& setSecretDeleteRecord(const map<string, SecretDeleteRecordValue> & secretDeleteRecord) { DARABONBA_PTR_SET_VALUE(secretDeleteRecord_, secretDeleteRecord) };
    inline DeleteGatewaySecretResponseBody& setSecretDeleteRecord(map<string, SecretDeleteRecordValue> && secretDeleteRecord) { DARABONBA_PTR_SET_RVALUE(secretDeleteRecord_, secretDeleteRecord) };


  protected:
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The records of deleting the secret in all clusters.
    std::shared_ptr<map<string, SecretDeleteRecordValue>> secretDeleteRecord_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Servicemesh20200111
#endif
