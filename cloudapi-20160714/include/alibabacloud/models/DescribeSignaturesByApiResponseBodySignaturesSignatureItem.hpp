// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESIGNATURESBYAPIRESPONSEBODYSIGNATURESSIGNATUREITEM_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESIGNATURESBYAPIRESPONSEBODYSIGNATURESSIGNATUREITEM_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class DescribeSignaturesByApiResponseBodySignaturesSignatureItem : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSignaturesByApiResponseBodySignaturesSignatureItem& obj) { 
      DARABONBA_PTR_TO_JSON(BoundTime, boundTime_);
      DARABONBA_PTR_TO_JSON(SignatureId, signatureId_);
      DARABONBA_PTR_TO_JSON(SignatureName, signatureName_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSignaturesByApiResponseBodySignaturesSignatureItem& obj) { 
      DARABONBA_PTR_FROM_JSON(BoundTime, boundTime_);
      DARABONBA_PTR_FROM_JSON(SignatureId, signatureId_);
      DARABONBA_PTR_FROM_JSON(SignatureName, signatureName_);
    };
    DescribeSignaturesByApiResponseBodySignaturesSignatureItem() = default ;
    DescribeSignaturesByApiResponseBodySignaturesSignatureItem(const DescribeSignaturesByApiResponseBodySignaturesSignatureItem &) = default ;
    DescribeSignaturesByApiResponseBodySignaturesSignatureItem(DescribeSignaturesByApiResponseBodySignaturesSignatureItem &&) = default ;
    DescribeSignaturesByApiResponseBodySignaturesSignatureItem(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSignaturesByApiResponseBodySignaturesSignatureItem() = default ;
    DescribeSignaturesByApiResponseBodySignaturesSignatureItem& operator=(const DescribeSignaturesByApiResponseBodySignaturesSignatureItem &) = default ;
    DescribeSignaturesByApiResponseBodySignaturesSignatureItem& operator=(DescribeSignaturesByApiResponseBodySignaturesSignatureItem &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->boundTime_ == nullptr
        && return this->signatureId_ == nullptr && return this->signatureName_ == nullptr; };
    // boundTime Field Functions 
    bool hasBoundTime() const { return this->boundTime_ != nullptr;};
    void deleteBoundTime() { this->boundTime_ = nullptr;};
    inline string boundTime() const { DARABONBA_PTR_GET_DEFAULT(boundTime_, "") };
    inline DescribeSignaturesByApiResponseBodySignaturesSignatureItem& setBoundTime(string boundTime) { DARABONBA_PTR_SET_VALUE(boundTime_, boundTime) };


    // signatureId Field Functions 
    bool hasSignatureId() const { return this->signatureId_ != nullptr;};
    void deleteSignatureId() { this->signatureId_ = nullptr;};
    inline string signatureId() const { DARABONBA_PTR_GET_DEFAULT(signatureId_, "") };
    inline DescribeSignaturesByApiResponseBodySignaturesSignatureItem& setSignatureId(string signatureId) { DARABONBA_PTR_SET_VALUE(signatureId_, signatureId) };


    // signatureName Field Functions 
    bool hasSignatureName() const { return this->signatureName_ != nullptr;};
    void deleteSignatureName() { this->signatureName_ = nullptr;};
    inline string signatureName() const { DARABONBA_PTR_GET_DEFAULT(signatureName_, "") };
    inline DescribeSignaturesByApiResponseBodySignaturesSignatureItem& setSignatureName(string signatureName) { DARABONBA_PTR_SET_VALUE(signatureName_, signatureName) };


  protected:
    // The time when the key was bound.
    std::shared_ptr<string> boundTime_ = nullptr;
    // The ID of the backend signature key.
    std::shared_ptr<string> signatureId_ = nullptr;
    // The name of the backend signature key.
    std::shared_ptr<string> signatureName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
