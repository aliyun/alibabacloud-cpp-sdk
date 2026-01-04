// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_IMPORTKEYPAIRREQUEST_HPP_
#define ALIBABACLOUD_MODELS_IMPORTKEYPAIRREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
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
        && this->publicKeyBody_ == nullptr; };
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


  protected:
    // The name of the key pair. The name must conform to the following naming conventions:
    // 
    // *   The name must be 2 to 128 characters in length.
    // *   The name must start with a letter but cannot start with `http://` or `https://`.
    // *   The name can contain letters, digits, colons (:), underscores (_), and hyphens (-).
    // 
    // You can specify the name of only one key pair.
    // 
    // This parameter is required.
    shared_ptr<string> keyPairName_ {};
    // The public key of the key pair. You can specify only one public key.
    // 
    // This parameter is required.
    shared_ptr<string> publicKeyBody_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
