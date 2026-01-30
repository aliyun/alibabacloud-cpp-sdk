// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHECKRESULTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CHECKRESULTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudauthIntl20220809
{
namespace Models
{
  class CheckResultRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CheckResultRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ExtraImageControlList, extraImageControlList_);
      DARABONBA_PTR_TO_JSON(IsReturnImage, isReturnImage_);
      DARABONBA_PTR_TO_JSON(MerchantBizId, merchantBizId_);
      DARABONBA_PTR_TO_JSON(ReturnFiveCategorySpoofResult, returnFiveCategorySpoofResult_);
      DARABONBA_PTR_TO_JSON(TransactionId, transactionId_);
    };
    friend void from_json(const Darabonba::Json& j, CheckResultRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ExtraImageControlList, extraImageControlList_);
      DARABONBA_PTR_FROM_JSON(IsReturnImage, isReturnImage_);
      DARABONBA_PTR_FROM_JSON(MerchantBizId, merchantBizId_);
      DARABONBA_PTR_FROM_JSON(ReturnFiveCategorySpoofResult, returnFiveCategorySpoofResult_);
      DARABONBA_PTR_FROM_JSON(TransactionId, transactionId_);
    };
    CheckResultRequest() = default ;
    CheckResultRequest(const CheckResultRequest &) = default ;
    CheckResultRequest(CheckResultRequest &&) = default ;
    CheckResultRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CheckResultRequest() = default ;
    CheckResultRequest& operator=(const CheckResultRequest &) = default ;
    CheckResultRequest& operator=(CheckResultRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->extraImageControlList_ == nullptr
        && this->isReturnImage_ == nullptr && this->merchantBizId_ == nullptr && this->returnFiveCategorySpoofResult_ == nullptr && this->transactionId_ == nullptr; };
    // extraImageControlList Field Functions 
    bool hasExtraImageControlList() const { return this->extraImageControlList_ != nullptr;};
    void deleteExtraImageControlList() { this->extraImageControlList_ = nullptr;};
    inline string getExtraImageControlList() const { DARABONBA_PTR_GET_DEFAULT(extraImageControlList_, "") };
    inline CheckResultRequest& setExtraImageControlList(string extraImageControlList) { DARABONBA_PTR_SET_VALUE(extraImageControlList_, extraImageControlList) };


    // isReturnImage Field Functions 
    bool hasIsReturnImage() const { return this->isReturnImage_ != nullptr;};
    void deleteIsReturnImage() { this->isReturnImage_ = nullptr;};
    inline string getIsReturnImage() const { DARABONBA_PTR_GET_DEFAULT(isReturnImage_, "") };
    inline CheckResultRequest& setIsReturnImage(string isReturnImage) { DARABONBA_PTR_SET_VALUE(isReturnImage_, isReturnImage) };


    // merchantBizId Field Functions 
    bool hasMerchantBizId() const { return this->merchantBizId_ != nullptr;};
    void deleteMerchantBizId() { this->merchantBizId_ = nullptr;};
    inline string getMerchantBizId() const { DARABONBA_PTR_GET_DEFAULT(merchantBizId_, "") };
    inline CheckResultRequest& setMerchantBizId(string merchantBizId) { DARABONBA_PTR_SET_VALUE(merchantBizId_, merchantBizId) };


    // returnFiveCategorySpoofResult Field Functions 
    bool hasReturnFiveCategorySpoofResult() const { return this->returnFiveCategorySpoofResult_ != nullptr;};
    void deleteReturnFiveCategorySpoofResult() { this->returnFiveCategorySpoofResult_ = nullptr;};
    inline string getReturnFiveCategorySpoofResult() const { DARABONBA_PTR_GET_DEFAULT(returnFiveCategorySpoofResult_, "") };
    inline CheckResultRequest& setReturnFiveCategorySpoofResult(string returnFiveCategorySpoofResult) { DARABONBA_PTR_SET_VALUE(returnFiveCategorySpoofResult_, returnFiveCategorySpoofResult) };


    // transactionId Field Functions 
    bool hasTransactionId() const { return this->transactionId_ != nullptr;};
    void deleteTransactionId() { this->transactionId_ = nullptr;};
    inline string getTransactionId() const { DARABONBA_PTR_GET_DEFAULT(transactionId_, "") };
    inline CheckResultRequest& setTransactionId(string transactionId) { DARABONBA_PTR_SET_VALUE(transactionId_, transactionId) };


  protected:
    // Return additional information.
    shared_ptr<string> extraImageControlList_ {};
    // Whether to return images.
    // - Y: Return
    // - N: Do not return
    shared_ptr<string> isReturnImage_ {};
    // A unique business identifier defined by the merchant, used for subsequent troubleshooting. It supports a combination of letters and numbers, with a maximum length of 32 characters. Please ensure its uniqueness.
    shared_ptr<string> merchantBizId_ {};
    // Whether to return anti-fraud detection results.
    shared_ptr<string> returnFiveCategorySpoofResult_ {};
    // Authentication ID.
    shared_ptr<string> transactionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudauthIntl20220809
#endif
