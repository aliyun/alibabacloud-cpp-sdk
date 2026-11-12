// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_IMPORTKEYPAIRREQUEST_HPP_
#define ALIBABACLOUD_MODELS_IMPORTKEYPAIRREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace SWASOPEN20200601
{
namespace Models
{
  class ImportKeyPairRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ImportKeyPairRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(KeyPairName, keyPairName_);
      DARABONBA_PTR_TO_JSON(PublicKeyBody, publicKeyBody_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, ImportKeyPairRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(KeyPairName, keyPairName_);
      DARABONBA_PTR_FROM_JSON(PublicKeyBody, publicKeyBody_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    ImportKeyPairRequest() = default ;
    ImportKeyPairRequest(const ImportKeyPairRequest &) = default ;
    ImportKeyPairRequest(ImportKeyPairRequest &&) = default ;
    ImportKeyPairRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ImportKeyPairRequest() = default ;
    ImportKeyPairRequest& operator=(const ImportKeyPairRequest &) = default ;
    ImportKeyPairRequest& operator=(ImportKeyPairRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clientToken_ == nullptr
        && this->keyPairName_ == nullptr && this->publicKeyBody_ == nullptr && this->regionId_ == nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline ImportKeyPairRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // keyPairName Field Functions 
    bool hasKeyPairName() const { return this->keyPairName_ != nullptr;};
    void deleteKeyPairName() { this->keyPairName_ = nullptr;};
    inline string getKeyPairName() const { DARABONBA_PTR_GET_DEFAULT(keyPairName_, "") };
    inline ImportKeyPairRequest& setKeyPairName(string keyPairName) { DARABONBA_PTR_SET_VALUE(keyPairName_, keyPairName) };


    // publicKeyBody Field Functions 
    bool hasPublicKeyBody() const { return this->publicKeyBody_ != nullptr;};
    void deletePublicKeyBody() { this->publicKeyBody_ = nullptr;};
    inline string getPublicKeyBody() const { DARABONBA_PTR_GET_DEFAULT(publicKeyBody_, "") };
    inline ImportKeyPairRequest& setPublicKeyBody(string publicKeyBody) { DARABONBA_PTR_SET_VALUE(publicKeyBody_, publicKeyBody) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ImportKeyPairRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // A client token used to ensure the idempotence of the request. Generate a unique value for this parameter from your client. **ClientToken** can contain only ASCII characters and must be no more than 64 characters long. For more information, see [How to ensure idempotence](https://help.aliyun.com/document_detail/25693.html).
    shared_ptr<string> clientToken_ {};
    // The name of the key pair. The name must be 2 to 64 characters in length. It must start with a letter or a Chinese character. It cannot start with http\\:// or https\\://. The name can contain digits, colons (:), underscores (_), and hyphens (-).
    // 
    // This parameter is required.
    shared_ptr<string> keyPairName_ {};
    // The content of the public key of the key pair.
    // 
    // This parameter is required.
    shared_ptr<string> publicKeyBody_ {};
    // The ID of the region where the Simple Application Server instance is located.
    // Call [ListRegions](https://help.aliyun.com/document_detail/189315.html) to view a list of supported Alibaba Cloud regions.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace SWASOPEN20200601
#endif
