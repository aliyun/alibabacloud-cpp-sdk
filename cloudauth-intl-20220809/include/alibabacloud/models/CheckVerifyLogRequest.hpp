// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHECKVERIFYLOGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CHECKVERIFYLOGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudauthIntl20220809
{
namespace Models
{
  class CheckVerifyLogRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CheckVerifyLogRequest& obj) { 
      DARABONBA_PTR_TO_JSON(MerchantBizId, merchantBizId_);
      DARABONBA_PTR_TO_JSON(TransactionId, transactionId_);
    };
    friend void from_json(const Darabonba::Json& j, CheckVerifyLogRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(MerchantBizId, merchantBizId_);
      DARABONBA_PTR_FROM_JSON(TransactionId, transactionId_);
    };
    CheckVerifyLogRequest() = default ;
    CheckVerifyLogRequest(const CheckVerifyLogRequest &) = default ;
    CheckVerifyLogRequest(CheckVerifyLogRequest &&) = default ;
    CheckVerifyLogRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CheckVerifyLogRequest() = default ;
    CheckVerifyLogRequest& operator=(const CheckVerifyLogRequest &) = default ;
    CheckVerifyLogRequest& operator=(CheckVerifyLogRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->merchantBizId_ == nullptr
        && return this->transactionId_ == nullptr; };
    // merchantBizId Field Functions 
    bool hasMerchantBizId() const { return this->merchantBizId_ != nullptr;};
    void deleteMerchantBizId() { this->merchantBizId_ = nullptr;};
    inline string merchantBizId() const { DARABONBA_PTR_GET_DEFAULT(merchantBizId_, "") };
    inline CheckVerifyLogRequest& setMerchantBizId(string merchantBizId) { DARABONBA_PTR_SET_VALUE(merchantBizId_, merchantBizId) };


    // transactionId Field Functions 
    bool hasTransactionId() const { return this->transactionId_ != nullptr;};
    void deleteTransactionId() { this->transactionId_ = nullptr;};
    inline string transactionId() const { DARABONBA_PTR_GET_DEFAULT(transactionId_, "") };
    inline CheckVerifyLogRequest& setTransactionId(string transactionId) { DARABONBA_PTR_SET_VALUE(transactionId_, transactionId) };


  protected:
    // A unique business identifier defined by the merchant, used for subsequent problem localization and troubleshooting. Supports a combination of letters and numbers, with a maximum length of 32 characters. Ensure uniqueness.
    std::shared_ptr<string> merchantBizId_ = nullptr;
    // The unique identifier for the entire authentication process. This value needs to be obtained by calling Initialize.
    std::shared_ptr<string> transactionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudauthIntl20220809
#endif
