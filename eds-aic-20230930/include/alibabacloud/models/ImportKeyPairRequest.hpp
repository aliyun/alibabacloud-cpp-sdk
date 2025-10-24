// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_IMPORTKEYPAIRREQUEST_HPP_
#define ALIBABACLOUD_MODELS_IMPORTKEYPAIRREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EdsAic20230930
{
namespace Models
{
  class ImportKeyPairRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ImportKeyPairRequest& obj) { 
      DARABONBA_PTR_TO_JSON(KeyPairName, keyPairName_);
      DARABONBA_PTR_TO_JSON(PublicKeyBody, publicKeyBody_);
    };
    friend void from_json(const Darabonba::Json& j, ImportKeyPairRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(KeyPairName, keyPairName_);
      DARABONBA_PTR_FROM_JSON(PublicKeyBody, publicKeyBody_);
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
    virtual bool empty() const override { return this->keyPairName_ == nullptr
        && return this->publicKeyBody_ == nullptr; };
    // keyPairName Field Functions 
    bool hasKeyPairName() const { return this->keyPairName_ != nullptr;};
    void deleteKeyPairName() { this->keyPairName_ = nullptr;};
    inline string keyPairName() const { DARABONBA_PTR_GET_DEFAULT(keyPairName_, "") };
    inline ImportKeyPairRequest& setKeyPairName(string keyPairName) { DARABONBA_PTR_SET_VALUE(keyPairName_, keyPairName) };


    // publicKeyBody Field Functions 
    bool hasPublicKeyBody() const { return this->publicKeyBody_ != nullptr;};
    void deletePublicKeyBody() { this->publicKeyBody_ = nullptr;};
    inline string publicKeyBody() const { DARABONBA_PTR_GET_DEFAULT(publicKeyBody_, "") };
    inline ImportKeyPairRequest& setPublicKeyBody(string publicKeyBody) { DARABONBA_PTR_SET_VALUE(publicKeyBody_, publicKeyBody) };


  protected:
    // The name of the ADB key pair.
    // 
    // This parameter is required.
    std::shared_ptr<string> keyPairName_ = nullptr;
    // The public key of the ADB key pair.
    // 
    // This parameter is required.
    std::shared_ptr<string> publicKeyBody_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EdsAic20230930
#endif
