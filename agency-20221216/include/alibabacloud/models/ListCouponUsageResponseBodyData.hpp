// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCOUPONUSAGERESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_LISTCOUPONUSAGERESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Agency20221216
{
namespace Models
{
  class ListCouponUsageResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListCouponUsageResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(Account, account_);
      DARABONBA_PTR_TO_JSON(Amount, amount_);
      DARABONBA_PTR_TO_JSON(Balance, balance_);
      DARABONBA_PTR_TO_JSON(CouponId, couponId_);
      DARABONBA_PTR_TO_JSON(CouponTemplateId, couponTemplateId_);
      DARABONBA_PTR_TO_JSON(EffDate, effDate_);
      DARABONBA_PTR_TO_JSON(PublishDate, publishDate_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Uid, uid_);
    };
    friend void from_json(const Darabonba::Json& j, ListCouponUsageResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(Account, account_);
      DARABONBA_PTR_FROM_JSON(Amount, amount_);
      DARABONBA_PTR_FROM_JSON(Balance, balance_);
      DARABONBA_PTR_FROM_JSON(CouponId, couponId_);
      DARABONBA_PTR_FROM_JSON(CouponTemplateId, couponTemplateId_);
      DARABONBA_PTR_FROM_JSON(EffDate, effDate_);
      DARABONBA_PTR_FROM_JSON(PublishDate, publishDate_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Uid, uid_);
    };
    ListCouponUsageResponseBodyData() = default ;
    ListCouponUsageResponseBodyData(const ListCouponUsageResponseBodyData &) = default ;
    ListCouponUsageResponseBodyData(ListCouponUsageResponseBodyData &&) = default ;
    ListCouponUsageResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListCouponUsageResponseBodyData() = default ;
    ListCouponUsageResponseBodyData& operator=(const ListCouponUsageResponseBodyData &) = default ;
    ListCouponUsageResponseBodyData& operator=(ListCouponUsageResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->account_ == nullptr
        && return this->amount_ == nullptr && return this->balance_ == nullptr && return this->couponId_ == nullptr && return this->couponTemplateId_ == nullptr && return this->effDate_ == nullptr
        && return this->publishDate_ == nullptr && return this->status_ == nullptr && return this->uid_ == nullptr; };
    // account Field Functions 
    bool hasAccount() const { return this->account_ != nullptr;};
    void deleteAccount() { this->account_ = nullptr;};
    inline string account() const { DARABONBA_PTR_GET_DEFAULT(account_, "") };
    inline ListCouponUsageResponseBodyData& setAccount(string account) { DARABONBA_PTR_SET_VALUE(account_, account) };


    // amount Field Functions 
    bool hasAmount() const { return this->amount_ != nullptr;};
    void deleteAmount() { this->amount_ = nullptr;};
    inline double amount() const { DARABONBA_PTR_GET_DEFAULT(amount_, 0.0) };
    inline ListCouponUsageResponseBodyData& setAmount(double amount) { DARABONBA_PTR_SET_VALUE(amount_, amount) };


    // balance Field Functions 
    bool hasBalance() const { return this->balance_ != nullptr;};
    void deleteBalance() { this->balance_ = nullptr;};
    inline double balance() const { DARABONBA_PTR_GET_DEFAULT(balance_, 0.0) };
    inline ListCouponUsageResponseBodyData& setBalance(double balance) { DARABONBA_PTR_SET_VALUE(balance_, balance) };


    // couponId Field Functions 
    bool hasCouponId() const { return this->couponId_ != nullptr;};
    void deleteCouponId() { this->couponId_ = nullptr;};
    inline string couponId() const { DARABONBA_PTR_GET_DEFAULT(couponId_, "") };
    inline ListCouponUsageResponseBodyData& setCouponId(string couponId) { DARABONBA_PTR_SET_VALUE(couponId_, couponId) };


    // couponTemplateId Field Functions 
    bool hasCouponTemplateId() const { return this->couponTemplateId_ != nullptr;};
    void deleteCouponTemplateId() { this->couponTemplateId_ = nullptr;};
    inline int64_t couponTemplateId() const { DARABONBA_PTR_GET_DEFAULT(couponTemplateId_, 0L) };
    inline ListCouponUsageResponseBodyData& setCouponTemplateId(int64_t couponTemplateId) { DARABONBA_PTR_SET_VALUE(couponTemplateId_, couponTemplateId) };


    // effDate Field Functions 
    bool hasEffDate() const { return this->effDate_ != nullptr;};
    void deleteEffDate() { this->effDate_ = nullptr;};
    inline string effDate() const { DARABONBA_PTR_GET_DEFAULT(effDate_, "") };
    inline ListCouponUsageResponseBodyData& setEffDate(string effDate) { DARABONBA_PTR_SET_VALUE(effDate_, effDate) };


    // publishDate Field Functions 
    bool hasPublishDate() const { return this->publishDate_ != nullptr;};
    void deletePublishDate() { this->publishDate_ = nullptr;};
    inline string publishDate() const { DARABONBA_PTR_GET_DEFAULT(publishDate_, "") };
    inline ListCouponUsageResponseBodyData& setPublishDate(string publishDate) { DARABONBA_PTR_SET_VALUE(publishDate_, publishDate) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListCouponUsageResponseBodyData& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // uid Field Functions 
    bool hasUid() const { return this->uid_ != nullptr;};
    void deleteUid() { this->uid_ = nullptr;};
    inline int64_t uid() const { DARABONBA_PTR_GET_DEFAULT(uid_, 0L) };
    inline ListCouponUsageResponseBodyData& setUid(int64_t uid) { DARABONBA_PTR_SET_VALUE(uid_, uid) };


  protected:
    std::shared_ptr<string> account_ = nullptr;
    std::shared_ptr<double> amount_ = nullptr;
    std::shared_ptr<double> balance_ = nullptr;
    std::shared_ptr<string> couponId_ = nullptr;
    std::shared_ptr<int64_t> couponTemplateId_ = nullptr;
    std::shared_ptr<string> effDate_ = nullptr;
    std::shared_ptr<string> publishDate_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
    std::shared_ptr<int64_t> uid_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Agency20221216
#endif
