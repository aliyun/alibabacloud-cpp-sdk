// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DECRYPTKMSDATAKEYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DECRYPTKMSDATAKEYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class DecryptKMSDataKeyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DecryptKMSDataKeyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CiphertextBlob, ciphertextBlob_);
    };
    friend void from_json(const Darabonba::Json& j, DecryptKMSDataKeyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CiphertextBlob, ciphertextBlob_);
    };
    DecryptKMSDataKeyRequest() = default ;
    DecryptKMSDataKeyRequest(const DecryptKMSDataKeyRequest &) = default ;
    DecryptKMSDataKeyRequest(DecryptKMSDataKeyRequest &&) = default ;
    DecryptKMSDataKeyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DecryptKMSDataKeyRequest() = default ;
    DecryptKMSDataKeyRequest& operator=(const DecryptKMSDataKeyRequest &) = default ;
    DecryptKMSDataKeyRequest& operator=(DecryptKMSDataKeyRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->ciphertextBlob_ == nullptr; };
    // ciphertextBlob Field Functions 
    bool hasCiphertextBlob() const { return this->ciphertextBlob_ != nullptr;};
    void deleteCiphertextBlob() { this->ciphertextBlob_ = nullptr;};
    inline string ciphertextBlob() const { DARABONBA_PTR_GET_DEFAULT(ciphertextBlob_, "") };
    inline DecryptKMSDataKeyRequest& setCiphertextBlob(string ciphertextBlob) { DARABONBA_PTR_SET_VALUE(ciphertextBlob_, ciphertextBlob) };


  protected:
    // The ciphertext that you want to decrypt.
    // 
    // This parameter is required.
    std::shared_ptr<string> ciphertextBlob_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
