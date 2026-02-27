// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEKMSENCRYPTIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEKMSENCRYPTIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CS20151215
{
namespace Models
{
  class UpdateKMSEncryptionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateKMSEncryptionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(disable_encryption, disableEncryption_);
      DARABONBA_PTR_TO_JSON(kms_key_id, kmsKeyId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateKMSEncryptionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(disable_encryption, disableEncryption_);
      DARABONBA_PTR_FROM_JSON(kms_key_id, kmsKeyId_);
    };
    UpdateKMSEncryptionRequest() = default ;
    UpdateKMSEncryptionRequest(const UpdateKMSEncryptionRequest &) = default ;
    UpdateKMSEncryptionRequest(UpdateKMSEncryptionRequest &&) = default ;
    UpdateKMSEncryptionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateKMSEncryptionRequest() = default ;
    UpdateKMSEncryptionRequest& operator=(const UpdateKMSEncryptionRequest &) = default ;
    UpdateKMSEncryptionRequest& operator=(UpdateKMSEncryptionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->disableEncryption_ == nullptr
        && this->kmsKeyId_ == nullptr; };
    // disableEncryption Field Functions 
    bool hasDisableEncryption() const { return this->disableEncryption_ != nullptr;};
    void deleteDisableEncryption() { this->disableEncryption_ = nullptr;};
    inline bool getDisableEncryption() const { DARABONBA_PTR_GET_DEFAULT(disableEncryption_, false) };
    inline UpdateKMSEncryptionRequest& setDisableEncryption(bool disableEncryption) { DARABONBA_PTR_SET_VALUE(disableEncryption_, disableEncryption) };


    // kmsKeyId Field Functions 
    bool hasKmsKeyId() const { return this->kmsKeyId_ != nullptr;};
    void deleteKmsKeyId() { this->kmsKeyId_ = nullptr;};
    inline string getKmsKeyId() const { DARABONBA_PTR_GET_DEFAULT(kmsKeyId_, "") };
    inline UpdateKMSEncryptionRequest& setKmsKeyId(string kmsKeyId) { DARABONBA_PTR_SET_VALUE(kmsKeyId_, kmsKeyId) };


  protected:
    shared_ptr<bool> disableEncryption_ {};
    shared_ptr<string> kmsKeyId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CS20151215
#endif
