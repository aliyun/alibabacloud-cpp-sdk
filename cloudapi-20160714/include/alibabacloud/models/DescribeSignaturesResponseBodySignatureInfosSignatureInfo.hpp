// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESIGNATURESRESPONSEBODYSIGNATUREINFOSSIGNATUREINFO_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESIGNATURESRESPONSEBODYSIGNATUREINFOSSIGNATUREINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class DescribeSignaturesResponseBodySignatureInfosSignatureInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSignaturesResponseBodySignatureInfosSignatureInfo& obj) { 
      DARABONBA_PTR_TO_JSON(CreatedTime, createdTime_);
      DARABONBA_PTR_TO_JSON(ModifiedTime, modifiedTime_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(SignatureId, signatureId_);
      DARABONBA_PTR_TO_JSON(SignatureKey, signatureKey_);
      DARABONBA_PTR_TO_JSON(SignatureName, signatureName_);
      DARABONBA_PTR_TO_JSON(SignatureSecret, signatureSecret_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSignaturesResponseBodySignatureInfosSignatureInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(CreatedTime, createdTime_);
      DARABONBA_PTR_FROM_JSON(ModifiedTime, modifiedTime_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(SignatureId, signatureId_);
      DARABONBA_PTR_FROM_JSON(SignatureKey, signatureKey_);
      DARABONBA_PTR_FROM_JSON(SignatureName, signatureName_);
      DARABONBA_PTR_FROM_JSON(SignatureSecret, signatureSecret_);
    };
    DescribeSignaturesResponseBodySignatureInfosSignatureInfo() = default ;
    DescribeSignaturesResponseBodySignatureInfosSignatureInfo(const DescribeSignaturesResponseBodySignatureInfosSignatureInfo &) = default ;
    DescribeSignaturesResponseBodySignatureInfosSignatureInfo(DescribeSignaturesResponseBodySignatureInfosSignatureInfo &&) = default ;
    DescribeSignaturesResponseBodySignatureInfosSignatureInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSignaturesResponseBodySignatureInfosSignatureInfo() = default ;
    DescribeSignaturesResponseBodySignatureInfosSignatureInfo& operator=(const DescribeSignaturesResponseBodySignatureInfosSignatureInfo &) = default ;
    DescribeSignaturesResponseBodySignatureInfosSignatureInfo& operator=(DescribeSignaturesResponseBodySignatureInfosSignatureInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->createdTime_ == nullptr
        && return this->modifiedTime_ == nullptr && return this->regionId_ == nullptr && return this->signatureId_ == nullptr && return this->signatureKey_ == nullptr && return this->signatureName_ == nullptr
        && return this->signatureSecret_ == nullptr; };
    // createdTime Field Functions 
    bool hasCreatedTime() const { return this->createdTime_ != nullptr;};
    void deleteCreatedTime() { this->createdTime_ = nullptr;};
    inline string createdTime() const { DARABONBA_PTR_GET_DEFAULT(createdTime_, "") };
    inline DescribeSignaturesResponseBodySignatureInfosSignatureInfo& setCreatedTime(string createdTime) { DARABONBA_PTR_SET_VALUE(createdTime_, createdTime) };


    // modifiedTime Field Functions 
    bool hasModifiedTime() const { return this->modifiedTime_ != nullptr;};
    void deleteModifiedTime() { this->modifiedTime_ = nullptr;};
    inline string modifiedTime() const { DARABONBA_PTR_GET_DEFAULT(modifiedTime_, "") };
    inline DescribeSignaturesResponseBodySignatureInfosSignatureInfo& setModifiedTime(string modifiedTime) { DARABONBA_PTR_SET_VALUE(modifiedTime_, modifiedTime) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeSignaturesResponseBodySignatureInfosSignatureInfo& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // signatureId Field Functions 
    bool hasSignatureId() const { return this->signatureId_ != nullptr;};
    void deleteSignatureId() { this->signatureId_ = nullptr;};
    inline string signatureId() const { DARABONBA_PTR_GET_DEFAULT(signatureId_, "") };
    inline DescribeSignaturesResponseBodySignatureInfosSignatureInfo& setSignatureId(string signatureId) { DARABONBA_PTR_SET_VALUE(signatureId_, signatureId) };


    // signatureKey Field Functions 
    bool hasSignatureKey() const { return this->signatureKey_ != nullptr;};
    void deleteSignatureKey() { this->signatureKey_ = nullptr;};
    inline string signatureKey() const { DARABONBA_PTR_GET_DEFAULT(signatureKey_, "") };
    inline DescribeSignaturesResponseBodySignatureInfosSignatureInfo& setSignatureKey(string signatureKey) { DARABONBA_PTR_SET_VALUE(signatureKey_, signatureKey) };


    // signatureName Field Functions 
    bool hasSignatureName() const { return this->signatureName_ != nullptr;};
    void deleteSignatureName() { this->signatureName_ = nullptr;};
    inline string signatureName() const { DARABONBA_PTR_GET_DEFAULT(signatureName_, "") };
    inline DescribeSignaturesResponseBodySignatureInfosSignatureInfo& setSignatureName(string signatureName) { DARABONBA_PTR_SET_VALUE(signatureName_, signatureName) };


    // signatureSecret Field Functions 
    bool hasSignatureSecret() const { return this->signatureSecret_ != nullptr;};
    void deleteSignatureSecret() { this->signatureSecret_ = nullptr;};
    inline string signatureSecret() const { DARABONBA_PTR_GET_DEFAULT(signatureSecret_, "") };
    inline DescribeSignaturesResponseBodySignatureInfosSignatureInfo& setSignatureSecret(string signatureSecret) { DARABONBA_PTR_SET_VALUE(signatureSecret_, signatureSecret) };


  protected:
    // The creation time of the key.
    std::shared_ptr<string> createdTime_ = nullptr;
    // The last modification time of the key.
    std::shared_ptr<string> modifiedTime_ = nullptr;
    // The region where the key is located.
    std::shared_ptr<string> regionId_ = nullptr;
    // The ID of the backend signature key.
    std::shared_ptr<string> signatureId_ = nullptr;
    // The Key value of the backend signature key.
    std::shared_ptr<string> signatureKey_ = nullptr;
    // The name of the backend signature key.
    std::shared_ptr<string> signatureName_ = nullptr;
    // The Secret value of the backend signature key.
    std::shared_ptr<string> signatureSecret_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
