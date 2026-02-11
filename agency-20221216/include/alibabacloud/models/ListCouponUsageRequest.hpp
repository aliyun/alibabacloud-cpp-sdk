// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCOUPONUSAGEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTCOUPONUSAGEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Agency20221216
{
namespace Models
{
  class ListCouponUsageRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListCouponUsageRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Account, account_);
      DARABONBA_PTR_TO_JSON(CouponTemplateId, couponTemplateId_);
      DARABONBA_PTR_TO_JSON(Page, page_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(T2PartnerUid, t2PartnerUid_);
      DARABONBA_PTR_TO_JSON(Uid, uid_);
    };
    friend void from_json(const Darabonba::Json& j, ListCouponUsageRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Account, account_);
      DARABONBA_PTR_FROM_JSON(CouponTemplateId, couponTemplateId_);
      DARABONBA_PTR_FROM_JSON(Page, page_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(T2PartnerUid, t2PartnerUid_);
      DARABONBA_PTR_FROM_JSON(Uid, uid_);
    };
    ListCouponUsageRequest() = default ;
    ListCouponUsageRequest(const ListCouponUsageRequest &) = default ;
    ListCouponUsageRequest(ListCouponUsageRequest &&) = default ;
    ListCouponUsageRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListCouponUsageRequest() = default ;
    ListCouponUsageRequest& operator=(const ListCouponUsageRequest &) = default ;
    ListCouponUsageRequest& operator=(ListCouponUsageRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->account_ == nullptr
        && this->couponTemplateId_ == nullptr && this->page_ == nullptr && this->pageSize_ == nullptr && this->status_ == nullptr && this->t2PartnerUid_ == nullptr
        && this->uid_ == nullptr; };
    // account Field Functions 
    bool hasAccount() const { return this->account_ != nullptr;};
    void deleteAccount() { this->account_ = nullptr;};
    inline string getAccount() const { DARABONBA_PTR_GET_DEFAULT(account_, "") };
    inline ListCouponUsageRequest& setAccount(string account) { DARABONBA_PTR_SET_VALUE(account_, account) };


    // couponTemplateId Field Functions 
    bool hasCouponTemplateId() const { return this->couponTemplateId_ != nullptr;};
    void deleteCouponTemplateId() { this->couponTemplateId_ = nullptr;};
    inline int64_t getCouponTemplateId() const { DARABONBA_PTR_GET_DEFAULT(couponTemplateId_, 0L) };
    inline ListCouponUsageRequest& setCouponTemplateId(int64_t couponTemplateId) { DARABONBA_PTR_SET_VALUE(couponTemplateId_, couponTemplateId) };


    // page Field Functions 
    bool hasPage() const { return this->page_ != nullptr;};
    void deletePage() { this->page_ = nullptr;};
    inline int32_t getPage() const { DARABONBA_PTR_GET_DEFAULT(page_, 0) };
    inline ListCouponUsageRequest& setPage(int32_t page) { DARABONBA_PTR_SET_VALUE(page_, page) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListCouponUsageRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListCouponUsageRequest& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // t2PartnerUid Field Functions 
    bool hasT2PartnerUid() const { return this->t2PartnerUid_ != nullptr;};
    void deleteT2PartnerUid() { this->t2PartnerUid_ = nullptr;};
    inline int64_t getT2PartnerUid() const { DARABONBA_PTR_GET_DEFAULT(t2PartnerUid_, 0L) };
    inline ListCouponUsageRequest& setT2PartnerUid(int64_t t2PartnerUid) { DARABONBA_PTR_SET_VALUE(t2PartnerUid_, t2PartnerUid) };


    // uid Field Functions 
    bool hasUid() const { return this->uid_ != nullptr;};
    void deleteUid() { this->uid_ = nullptr;};
    inline int64_t getUid() const { DARABONBA_PTR_GET_DEFAULT(uid_, 0L) };
    inline ListCouponUsageRequest& setUid(int64_t uid) { DARABONBA_PTR_SET_VALUE(uid_, uid) };


  protected:
    // 阿里云客户账号
    shared_ptr<string> account_ {};
    // 优惠券模版id
    shared_ptr<int64_t> couponTemplateId_ {};
    // 页码</br> 
    //  默认值为1 最小值1
    shared_ptr<int32_t> page_ {};
    // 分页行数 </br>
    //   默认值20 最大值50 最小值1
    shared_ptr<int32_t> pageSize_ {};
    // 优惠券状态 </br>
    // AVAILABLE 正常 </br>
    // EXHAUSTED 已用完 </br>
    // EXPIRED 已过期 </br>
    // ABANDONED 已作废 </br>
    shared_ptr<string> status_ {};
    // T2伙伴uid
    // 如：123456789
    shared_ptr<int64_t> t2PartnerUid_ {};
    // 阿里云账号uid
    shared_ptr<int64_t> uid_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Agency20221216
#endif
