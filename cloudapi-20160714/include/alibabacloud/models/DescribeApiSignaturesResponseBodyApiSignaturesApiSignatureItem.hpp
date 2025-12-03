// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAPISIGNATURESRESPONSEBODYAPISIGNATURESAPISIGNATUREITEM_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAPISIGNATURESRESPONSEBODYAPISIGNATURESAPISIGNATUREITEM_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class DescribeApiSignaturesResponseBodyApiSignaturesApiSignatureItem : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeApiSignaturesResponseBodyApiSignaturesApiSignatureItem& obj) { 
      DARABONBA_PTR_TO_JSON(ApiId, apiId_);
      DARABONBA_PTR_TO_JSON(ApiName, apiName_);
      DARABONBA_PTR_TO_JSON(BoundTime, boundTime_);
      DARABONBA_PTR_TO_JSON(SignatureId, signatureId_);
      DARABONBA_PTR_TO_JSON(SignatureName, signatureName_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeApiSignaturesResponseBodyApiSignaturesApiSignatureItem& obj) { 
      DARABONBA_PTR_FROM_JSON(ApiId, apiId_);
      DARABONBA_PTR_FROM_JSON(ApiName, apiName_);
      DARABONBA_PTR_FROM_JSON(BoundTime, boundTime_);
      DARABONBA_PTR_FROM_JSON(SignatureId, signatureId_);
      DARABONBA_PTR_FROM_JSON(SignatureName, signatureName_);
    };
    DescribeApiSignaturesResponseBodyApiSignaturesApiSignatureItem() = default ;
    DescribeApiSignaturesResponseBodyApiSignaturesApiSignatureItem(const DescribeApiSignaturesResponseBodyApiSignaturesApiSignatureItem &) = default ;
    DescribeApiSignaturesResponseBodyApiSignaturesApiSignatureItem(DescribeApiSignaturesResponseBodyApiSignaturesApiSignatureItem &&) = default ;
    DescribeApiSignaturesResponseBodyApiSignaturesApiSignatureItem(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeApiSignaturesResponseBodyApiSignaturesApiSignatureItem() = default ;
    DescribeApiSignaturesResponseBodyApiSignaturesApiSignatureItem& operator=(const DescribeApiSignaturesResponseBodyApiSignaturesApiSignatureItem &) = default ;
    DescribeApiSignaturesResponseBodyApiSignaturesApiSignatureItem& operator=(DescribeApiSignaturesResponseBodyApiSignaturesApiSignatureItem &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->apiId_ == nullptr
        && return this->apiName_ == nullptr && return this->boundTime_ == nullptr && return this->signatureId_ == nullptr && return this->signatureName_ == nullptr; };
    // apiId Field Functions 
    bool hasApiId() const { return this->apiId_ != nullptr;};
    void deleteApiId() { this->apiId_ = nullptr;};
    inline string apiId() const { DARABONBA_PTR_GET_DEFAULT(apiId_, "") };
    inline DescribeApiSignaturesResponseBodyApiSignaturesApiSignatureItem& setApiId(string apiId) { DARABONBA_PTR_SET_VALUE(apiId_, apiId) };


    // apiName Field Functions 
    bool hasApiName() const { return this->apiName_ != nullptr;};
    void deleteApiName() { this->apiName_ = nullptr;};
    inline string apiName() const { DARABONBA_PTR_GET_DEFAULT(apiName_, "") };
    inline DescribeApiSignaturesResponseBodyApiSignaturesApiSignatureItem& setApiName(string apiName) { DARABONBA_PTR_SET_VALUE(apiName_, apiName) };


    // boundTime Field Functions 
    bool hasBoundTime() const { return this->boundTime_ != nullptr;};
    void deleteBoundTime() { this->boundTime_ = nullptr;};
    inline string boundTime() const { DARABONBA_PTR_GET_DEFAULT(boundTime_, "") };
    inline DescribeApiSignaturesResponseBodyApiSignaturesApiSignatureItem& setBoundTime(string boundTime) { DARABONBA_PTR_SET_VALUE(boundTime_, boundTime) };


    // signatureId Field Functions 
    bool hasSignatureId() const { return this->signatureId_ != nullptr;};
    void deleteSignatureId() { this->signatureId_ = nullptr;};
    inline string signatureId() const { DARABONBA_PTR_GET_DEFAULT(signatureId_, "") };
    inline DescribeApiSignaturesResponseBodyApiSignaturesApiSignatureItem& setSignatureId(string signatureId) { DARABONBA_PTR_SET_VALUE(signatureId_, signatureId) };


    // signatureName Field Functions 
    bool hasSignatureName() const { return this->signatureName_ != nullptr;};
    void deleteSignatureName() { this->signatureName_ = nullptr;};
    inline string signatureName() const { DARABONBA_PTR_GET_DEFAULT(signatureName_, "") };
    inline DescribeApiSignaturesResponseBodyApiSignaturesApiSignatureItem& setSignatureName(string signatureName) { DARABONBA_PTR_SET_VALUE(signatureName_, signatureName) };


  protected:
    // The ID of the API.
    std::shared_ptr<string> apiId_ = nullptr;
    // The name of the API.
    std::shared_ptr<string> apiName_ = nullptr;
    // The time when the backend signature key was bound.
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
