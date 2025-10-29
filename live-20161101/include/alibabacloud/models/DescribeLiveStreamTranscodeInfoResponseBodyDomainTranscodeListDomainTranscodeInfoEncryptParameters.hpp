// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELIVESTREAMTRANSCODEINFORESPONSEBODYDOMAINTRANSCODELISTDOMAINTRANSCODEINFOENCRYPTPARAMETERS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELIVESTREAMTRANSCODEINFORESPONSEBODYDOMAINTRANSCODELISTDOMAINTRANSCODEINFOENCRYPTPARAMETERS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeLiveStreamTranscodeInfoResponseBodyDomainTranscodeListDomainTranscodeInfoEncryptParameters : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLiveStreamTranscodeInfoResponseBodyDomainTranscodeListDomainTranscodeInfoEncryptParameters& obj) { 
      DARABONBA_PTR_TO_JSON(EncryptType, encryptType_);
      DARABONBA_PTR_TO_JSON(KmsKeyExpireInterval, kmsKeyExpireInterval_);
      DARABONBA_PTR_TO_JSON(KmsKeyID, kmsKeyID_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLiveStreamTranscodeInfoResponseBodyDomainTranscodeListDomainTranscodeInfoEncryptParameters& obj) { 
      DARABONBA_PTR_FROM_JSON(EncryptType, encryptType_);
      DARABONBA_PTR_FROM_JSON(KmsKeyExpireInterval, kmsKeyExpireInterval_);
      DARABONBA_PTR_FROM_JSON(KmsKeyID, kmsKeyID_);
    };
    DescribeLiveStreamTranscodeInfoResponseBodyDomainTranscodeListDomainTranscodeInfoEncryptParameters() = default ;
    DescribeLiveStreamTranscodeInfoResponseBodyDomainTranscodeListDomainTranscodeInfoEncryptParameters(const DescribeLiveStreamTranscodeInfoResponseBodyDomainTranscodeListDomainTranscodeInfoEncryptParameters &) = default ;
    DescribeLiveStreamTranscodeInfoResponseBodyDomainTranscodeListDomainTranscodeInfoEncryptParameters(DescribeLiveStreamTranscodeInfoResponseBodyDomainTranscodeListDomainTranscodeInfoEncryptParameters &&) = default ;
    DescribeLiveStreamTranscodeInfoResponseBodyDomainTranscodeListDomainTranscodeInfoEncryptParameters(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLiveStreamTranscodeInfoResponseBodyDomainTranscodeListDomainTranscodeInfoEncryptParameters() = default ;
    DescribeLiveStreamTranscodeInfoResponseBodyDomainTranscodeListDomainTranscodeInfoEncryptParameters& operator=(const DescribeLiveStreamTranscodeInfoResponseBodyDomainTranscodeListDomainTranscodeInfoEncryptParameters &) = default ;
    DescribeLiveStreamTranscodeInfoResponseBodyDomainTranscodeListDomainTranscodeInfoEncryptParameters& operator=(DescribeLiveStreamTranscodeInfoResponseBodyDomainTranscodeListDomainTranscodeInfoEncryptParameters &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->encryptType_ == nullptr
        && return this->kmsKeyExpireInterval_ == nullptr && return this->kmsKeyID_ == nullptr; };
    // encryptType Field Functions 
    bool hasEncryptType() const { return this->encryptType_ != nullptr;};
    void deleteEncryptType() { this->encryptType_ = nullptr;};
    inline string encryptType() const { DARABONBA_PTR_GET_DEFAULT(encryptType_, "") };
    inline DescribeLiveStreamTranscodeInfoResponseBodyDomainTranscodeListDomainTranscodeInfoEncryptParameters& setEncryptType(string encryptType) { DARABONBA_PTR_SET_VALUE(encryptType_, encryptType) };


    // kmsKeyExpireInterval Field Functions 
    bool hasKmsKeyExpireInterval() const { return this->kmsKeyExpireInterval_ != nullptr;};
    void deleteKmsKeyExpireInterval() { this->kmsKeyExpireInterval_ = nullptr;};
    inline string kmsKeyExpireInterval() const { DARABONBA_PTR_GET_DEFAULT(kmsKeyExpireInterval_, "") };
    inline DescribeLiveStreamTranscodeInfoResponseBodyDomainTranscodeListDomainTranscodeInfoEncryptParameters& setKmsKeyExpireInterval(string kmsKeyExpireInterval) { DARABONBA_PTR_SET_VALUE(kmsKeyExpireInterval_, kmsKeyExpireInterval) };


    // kmsKeyID Field Functions 
    bool hasKmsKeyID() const { return this->kmsKeyID_ != nullptr;};
    void deleteKmsKeyID() { this->kmsKeyID_ = nullptr;};
    inline string kmsKeyID() const { DARABONBA_PTR_GET_DEFAULT(kmsKeyID_, "") };
    inline DescribeLiveStreamTranscodeInfoResponseBodyDomainTranscodeListDomainTranscodeInfoEncryptParameters& setKmsKeyID(string kmsKeyID) { DARABONBA_PTR_SET_VALUE(kmsKeyID_, kmsKeyID) };


  protected:
    // The type of encryption. Fixed value: **aliyun**.
    std::shared_ptr<string> encryptType_ = nullptr;
    // The rotation period of the CMK. Valid values: **60 to 3600**. Unit: seconds.
    std::shared_ptr<string> kmsKeyExpireInterval_ = nullptr;
    // The ID of the customer master key (CMK) in Key Management Service (KMS).
    std::shared_ptr<string> kmsKeyID_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
