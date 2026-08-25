// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SETENCRYPTIONCONFIGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SETENCRYPTIONCONFIGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IaCService20210806
{
namespace Models
{
  class SetEncryptionConfigRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SetEncryptionConfigRequest& obj) { 
      DARABONBA_PTR_TO_JSON(clientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(kmsKeyId, kmsKeyId_);
      DARABONBA_PTR_TO_JSON(kmsRegionId, kmsRegionId_);
    };
    friend void from_json(const Darabonba::Json& j, SetEncryptionConfigRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(clientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(kmsKeyId, kmsKeyId_);
      DARABONBA_PTR_FROM_JSON(kmsRegionId, kmsRegionId_);
    };
    SetEncryptionConfigRequest() = default ;
    SetEncryptionConfigRequest(const SetEncryptionConfigRequest &) = default ;
    SetEncryptionConfigRequest(SetEncryptionConfigRequest &&) = default ;
    SetEncryptionConfigRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SetEncryptionConfigRequest() = default ;
    SetEncryptionConfigRequest& operator=(const SetEncryptionConfigRequest &) = default ;
    SetEncryptionConfigRequest& operator=(SetEncryptionConfigRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clientToken_ == nullptr
        && this->kmsKeyId_ == nullptr && this->kmsRegionId_ == nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline SetEncryptionConfigRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // kmsKeyId Field Functions 
    bool hasKmsKeyId() const { return this->kmsKeyId_ != nullptr;};
    void deleteKmsKeyId() { this->kmsKeyId_ = nullptr;};
    inline string getKmsKeyId() const { DARABONBA_PTR_GET_DEFAULT(kmsKeyId_, "") };
    inline SetEncryptionConfigRequest& setKmsKeyId(string kmsKeyId) { DARABONBA_PTR_SET_VALUE(kmsKeyId_, kmsKeyId) };


    // kmsRegionId Field Functions 
    bool hasKmsRegionId() const { return this->kmsRegionId_ != nullptr;};
    void deleteKmsRegionId() { this->kmsRegionId_ = nullptr;};
    inline string getKmsRegionId() const { DARABONBA_PTR_GET_DEFAULT(kmsRegionId_, "") };
    inline SetEncryptionConfigRequest& setKmsRegionId(string kmsRegionId) { DARABONBA_PTR_SET_VALUE(kmsRegionId_, kmsRegionId) };


  protected:
    // The idempotence token. Format: [0-9a-zA-Z-]{1,64}. Use a UUID.
    shared_ptr<string> clientToken_ {};
    // The ID of the KMS key used for encryption.
    shared_ptr<string> kmsKeyId_ {};
    // The region ID of the KMS key.
    shared_ptr<string> kmsRegionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IaCService20210806
#endif
