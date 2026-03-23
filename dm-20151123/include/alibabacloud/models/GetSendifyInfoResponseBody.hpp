// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSENDIFYINFORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETSENDIFYINFORESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dm20151123
{
namespace Models
{
  class GetSendifyInfoResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSendifyInfoResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(BuyResourcePackageUrl, buyResourcePackageUrl_);
      DARABONBA_PTR_TO_JSON(BuyUrl, buyUrl_);
      DARABONBA_PTR_TO_JSON(Discount, discount_);
      DARABONBA_PTR_TO_JSON(DowngradeUrl, downgradeUrl_);
      DARABONBA_PTR_TO_JSON(ExpireTime, expireTime_);
      DARABONBA_PTR_TO_JSON(LearnMoreUrl, learnMoreUrl_);
      DARABONBA_PTR_TO_JSON(Opened, opened_);
      DARABONBA_PTR_TO_JSON(ProductCode, productCode_);
      DARABONBA_PTR_TO_JSON(RenewUrl, renewUrl_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SpecUpgradeUrl, specUpgradeUrl_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(SupportTrial, supportTrial_);
      DARABONBA_PTR_TO_JSON(UpgradeUrl, upgradeUrl_);
    };
    friend void from_json(const Darabonba::Json& j, GetSendifyInfoResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(BuyResourcePackageUrl, buyResourcePackageUrl_);
      DARABONBA_PTR_FROM_JSON(BuyUrl, buyUrl_);
      DARABONBA_PTR_FROM_JSON(Discount, discount_);
      DARABONBA_PTR_FROM_JSON(DowngradeUrl, downgradeUrl_);
      DARABONBA_PTR_FROM_JSON(ExpireTime, expireTime_);
      DARABONBA_PTR_FROM_JSON(LearnMoreUrl, learnMoreUrl_);
      DARABONBA_PTR_FROM_JSON(Opened, opened_);
      DARABONBA_PTR_FROM_JSON(ProductCode, productCode_);
      DARABONBA_PTR_FROM_JSON(RenewUrl, renewUrl_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SpecUpgradeUrl, specUpgradeUrl_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(SupportTrial, supportTrial_);
      DARABONBA_PTR_FROM_JSON(UpgradeUrl, upgradeUrl_);
    };
    GetSendifyInfoResponseBody() = default ;
    GetSendifyInfoResponseBody(const GetSendifyInfoResponseBody &) = default ;
    GetSendifyInfoResponseBody(GetSendifyInfoResponseBody &&) = default ;
    GetSendifyInfoResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSendifyInfoResponseBody() = default ;
    GetSendifyInfoResponseBody& operator=(const GetSendifyInfoResponseBody &) = default ;
    GetSendifyInfoResponseBody& operator=(GetSendifyInfoResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->buyResourcePackageUrl_ == nullptr
        && this->buyUrl_ == nullptr && this->discount_ == nullptr && this->downgradeUrl_ == nullptr && this->expireTime_ == nullptr && this->learnMoreUrl_ == nullptr
        && this->opened_ == nullptr && this->productCode_ == nullptr && this->renewUrl_ == nullptr && this->requestId_ == nullptr && this->specUpgradeUrl_ == nullptr
        && this->status_ == nullptr && this->supportTrial_ == nullptr && this->upgradeUrl_ == nullptr; };
    // buyResourcePackageUrl Field Functions 
    bool hasBuyResourcePackageUrl() const { return this->buyResourcePackageUrl_ != nullptr;};
    void deleteBuyResourcePackageUrl() { this->buyResourcePackageUrl_ = nullptr;};
    inline string getBuyResourcePackageUrl() const { DARABONBA_PTR_GET_DEFAULT(buyResourcePackageUrl_, "") };
    inline GetSendifyInfoResponseBody& setBuyResourcePackageUrl(string buyResourcePackageUrl) { DARABONBA_PTR_SET_VALUE(buyResourcePackageUrl_, buyResourcePackageUrl) };


    // buyUrl Field Functions 
    bool hasBuyUrl() const { return this->buyUrl_ != nullptr;};
    void deleteBuyUrl() { this->buyUrl_ = nullptr;};
    inline string getBuyUrl() const { DARABONBA_PTR_GET_DEFAULT(buyUrl_, "") };
    inline GetSendifyInfoResponseBody& setBuyUrl(string buyUrl) { DARABONBA_PTR_SET_VALUE(buyUrl_, buyUrl) };


    // discount Field Functions 
    bool hasDiscount() const { return this->discount_ != nullptr;};
    void deleteDiscount() { this->discount_ = nullptr;};
    inline string getDiscount() const { DARABONBA_PTR_GET_DEFAULT(discount_, "") };
    inline GetSendifyInfoResponseBody& setDiscount(string discount) { DARABONBA_PTR_SET_VALUE(discount_, discount) };


    // downgradeUrl Field Functions 
    bool hasDowngradeUrl() const { return this->downgradeUrl_ != nullptr;};
    void deleteDowngradeUrl() { this->downgradeUrl_ = nullptr;};
    inline string getDowngradeUrl() const { DARABONBA_PTR_GET_DEFAULT(downgradeUrl_, "") };
    inline GetSendifyInfoResponseBody& setDowngradeUrl(string downgradeUrl) { DARABONBA_PTR_SET_VALUE(downgradeUrl_, downgradeUrl) };


    // expireTime Field Functions 
    bool hasExpireTime() const { return this->expireTime_ != nullptr;};
    void deleteExpireTime() { this->expireTime_ = nullptr;};
    inline string getExpireTime() const { DARABONBA_PTR_GET_DEFAULT(expireTime_, "") };
    inline GetSendifyInfoResponseBody& setExpireTime(string expireTime) { DARABONBA_PTR_SET_VALUE(expireTime_, expireTime) };


    // learnMoreUrl Field Functions 
    bool hasLearnMoreUrl() const { return this->learnMoreUrl_ != nullptr;};
    void deleteLearnMoreUrl() { this->learnMoreUrl_ = nullptr;};
    inline string getLearnMoreUrl() const { DARABONBA_PTR_GET_DEFAULT(learnMoreUrl_, "") };
    inline GetSendifyInfoResponseBody& setLearnMoreUrl(string learnMoreUrl) { DARABONBA_PTR_SET_VALUE(learnMoreUrl_, learnMoreUrl) };


    // opened Field Functions 
    bool hasOpened() const { return this->opened_ != nullptr;};
    void deleteOpened() { this->opened_ = nullptr;};
    inline bool getOpened() const { DARABONBA_PTR_GET_DEFAULT(opened_, false) };
    inline GetSendifyInfoResponseBody& setOpened(bool opened) { DARABONBA_PTR_SET_VALUE(opened_, opened) };


    // productCode Field Functions 
    bool hasProductCode() const { return this->productCode_ != nullptr;};
    void deleteProductCode() { this->productCode_ = nullptr;};
    inline string getProductCode() const { DARABONBA_PTR_GET_DEFAULT(productCode_, "") };
    inline GetSendifyInfoResponseBody& setProductCode(string productCode) { DARABONBA_PTR_SET_VALUE(productCode_, productCode) };


    // renewUrl Field Functions 
    bool hasRenewUrl() const { return this->renewUrl_ != nullptr;};
    void deleteRenewUrl() { this->renewUrl_ = nullptr;};
    inline string getRenewUrl() const { DARABONBA_PTR_GET_DEFAULT(renewUrl_, "") };
    inline GetSendifyInfoResponseBody& setRenewUrl(string renewUrl) { DARABONBA_PTR_SET_VALUE(renewUrl_, renewUrl) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetSendifyInfoResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // specUpgradeUrl Field Functions 
    bool hasSpecUpgradeUrl() const { return this->specUpgradeUrl_ != nullptr;};
    void deleteSpecUpgradeUrl() { this->specUpgradeUrl_ = nullptr;};
    inline string getSpecUpgradeUrl() const { DARABONBA_PTR_GET_DEFAULT(specUpgradeUrl_, "") };
    inline GetSendifyInfoResponseBody& setSpecUpgradeUrl(string specUpgradeUrl) { DARABONBA_PTR_SET_VALUE(specUpgradeUrl_, specUpgradeUrl) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetSendifyInfoResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // supportTrial Field Functions 
    bool hasSupportTrial() const { return this->supportTrial_ != nullptr;};
    void deleteSupportTrial() { this->supportTrial_ = nullptr;};
    inline bool getSupportTrial() const { DARABONBA_PTR_GET_DEFAULT(supportTrial_, false) };
    inline GetSendifyInfoResponseBody& setSupportTrial(bool supportTrial) { DARABONBA_PTR_SET_VALUE(supportTrial_, supportTrial) };


    // upgradeUrl Field Functions 
    bool hasUpgradeUrl() const { return this->upgradeUrl_ != nullptr;};
    void deleteUpgradeUrl() { this->upgradeUrl_ = nullptr;};
    inline string getUpgradeUrl() const { DARABONBA_PTR_GET_DEFAULT(upgradeUrl_, "") };
    inline GetSendifyInfoResponseBody& setUpgradeUrl(string upgradeUrl) { DARABONBA_PTR_SET_VALUE(upgradeUrl_, upgradeUrl) };


  protected:
    shared_ptr<string> buyResourcePackageUrl_ {};
    shared_ptr<string> buyUrl_ {};
    shared_ptr<string> discount_ {};
    shared_ptr<string> downgradeUrl_ {};
    shared_ptr<string> expireTime_ {};
    shared_ptr<string> learnMoreUrl_ {};
    shared_ptr<bool> opened_ {};
    shared_ptr<string> productCode_ {};
    shared_ptr<string> renewUrl_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<string> specUpgradeUrl_ {};
    shared_ptr<string> status_ {};
    shared_ptr<bool> supportTrial_ {};
    shared_ptr<string> upgradeUrl_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dm20151123
#endif
