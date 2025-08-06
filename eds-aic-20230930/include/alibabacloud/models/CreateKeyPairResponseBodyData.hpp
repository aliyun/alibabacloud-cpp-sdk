// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEKEYPAIRRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_CREATEKEYPAIRRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EdsAic20230930
{
namespace Models
{
  class CreateKeyPairResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateKeyPairResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(GmtCreated, gmtCreated_);
      DARABONBA_PTR_TO_JSON(KeyPairId, keyPairId_);
      DARABONBA_PTR_TO_JSON(KeyPairName, keyPairName_);
      DARABONBA_PTR_TO_JSON(PrivateKeyBody, privateKeyBody_);
    };
    friend void from_json(const Darabonba::Json& j, CreateKeyPairResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(GmtCreated, gmtCreated_);
      DARABONBA_PTR_FROM_JSON(KeyPairId, keyPairId_);
      DARABONBA_PTR_FROM_JSON(KeyPairName, keyPairName_);
      DARABONBA_PTR_FROM_JSON(PrivateKeyBody, privateKeyBody_);
    };
    CreateKeyPairResponseBodyData() = default ;
    CreateKeyPairResponseBodyData(const CreateKeyPairResponseBodyData &) = default ;
    CreateKeyPairResponseBodyData(CreateKeyPairResponseBodyData &&) = default ;
    CreateKeyPairResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateKeyPairResponseBodyData() = default ;
    CreateKeyPairResponseBodyData& operator=(const CreateKeyPairResponseBodyData &) = default ;
    CreateKeyPairResponseBodyData& operator=(CreateKeyPairResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->gmtCreated_ != nullptr
        && this->keyPairId_ != nullptr && this->keyPairName_ != nullptr && this->privateKeyBody_ != nullptr; };
    // gmtCreated Field Functions 
    bool hasGmtCreated() const { return this->gmtCreated_ != nullptr;};
    void deleteGmtCreated() { this->gmtCreated_ = nullptr;};
    inline string gmtCreated() const { DARABONBA_PTR_GET_DEFAULT(gmtCreated_, "") };
    inline CreateKeyPairResponseBodyData& setGmtCreated(string gmtCreated) { DARABONBA_PTR_SET_VALUE(gmtCreated_, gmtCreated) };


    // keyPairId Field Functions 
    bool hasKeyPairId() const { return this->keyPairId_ != nullptr;};
    void deleteKeyPairId() { this->keyPairId_ = nullptr;};
    inline string keyPairId() const { DARABONBA_PTR_GET_DEFAULT(keyPairId_, "") };
    inline CreateKeyPairResponseBodyData& setKeyPairId(string keyPairId) { DARABONBA_PTR_SET_VALUE(keyPairId_, keyPairId) };


    // keyPairName Field Functions 
    bool hasKeyPairName() const { return this->keyPairName_ != nullptr;};
    void deleteKeyPairName() { this->keyPairName_ = nullptr;};
    inline string keyPairName() const { DARABONBA_PTR_GET_DEFAULT(keyPairName_, "") };
    inline CreateKeyPairResponseBodyData& setKeyPairName(string keyPairName) { DARABONBA_PTR_SET_VALUE(keyPairName_, keyPairName) };


    // privateKeyBody Field Functions 
    bool hasPrivateKeyBody() const { return this->privateKeyBody_ != nullptr;};
    void deletePrivateKeyBody() { this->privateKeyBody_ = nullptr;};
    inline string privateKeyBody() const { DARABONBA_PTR_GET_DEFAULT(privateKeyBody_, "") };
    inline CreateKeyPairResponseBodyData& setPrivateKeyBody(string privateKeyBody) { DARABONBA_PTR_SET_VALUE(privateKeyBody_, privateKeyBody) };


  protected:
    // The time when the key pair was created.
    std::shared_ptr<string> gmtCreated_ = nullptr;
    // The ID of the key pair.
    std::shared_ptr<string> keyPairId_ = nullptr;
    // The name of the key pair.
    std::shared_ptr<string> keyPairName_ = nullptr;
    // The private key of the key pair. The PEM-encoded private key that is in PKCS#8 format and adheres to the ADB connection specification.
    std::shared_ptr<string> privateKeyBody_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EdsAic20230930
#endif
