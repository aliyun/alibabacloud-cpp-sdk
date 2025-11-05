// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ISSUECOUPONFORCUSTOMERRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_ISSUECOUPONFORCUSTOMERRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Agency20221216
{
namespace Models
{
  class IssueCouponForCustomerResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const IssueCouponForCustomerResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(CouponTemplateId, couponTemplateId_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(Uidlist, uidlist_);
    };
    friend void from_json(const Darabonba::Json& j, IssueCouponForCustomerResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(CouponTemplateId, couponTemplateId_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(Uidlist, uidlist_);
    };
    IssueCouponForCustomerResponseBodyData() = default ;
    IssueCouponForCustomerResponseBodyData(const IssueCouponForCustomerResponseBodyData &) = default ;
    IssueCouponForCustomerResponseBodyData(IssueCouponForCustomerResponseBodyData &&) = default ;
    IssueCouponForCustomerResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~IssueCouponForCustomerResponseBodyData() = default ;
    IssueCouponForCustomerResponseBodyData& operator=(const IssueCouponForCustomerResponseBodyData &) = default ;
    IssueCouponForCustomerResponseBodyData& operator=(IssueCouponForCustomerResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->couponTemplateId_ == nullptr
        && return this->createTime_ == nullptr && return this->uidlist_ == nullptr; };
    // couponTemplateId Field Functions 
    bool hasCouponTemplateId() const { return this->couponTemplateId_ != nullptr;};
    void deleteCouponTemplateId() { this->couponTemplateId_ = nullptr;};
    inline int64_t couponTemplateId() const { DARABONBA_PTR_GET_DEFAULT(couponTemplateId_, 0L) };
    inline IssueCouponForCustomerResponseBodyData& setCouponTemplateId(int64_t couponTemplateId) { DARABONBA_PTR_SET_VALUE(couponTemplateId_, couponTemplateId) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline IssueCouponForCustomerResponseBodyData& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // uidlist Field Functions 
    bool hasUidlist() const { return this->uidlist_ != nullptr;};
    void deleteUidlist() { this->uidlist_ = nullptr;};
    inline string uidlist() const { DARABONBA_PTR_GET_DEFAULT(uidlist_, "") };
    inline IssueCouponForCustomerResponseBodyData& setUidlist(string uidlist) { DARABONBA_PTR_SET_VALUE(uidlist_, uidlist) };


  protected:
    std::shared_ptr<int64_t> couponTemplateId_ = nullptr;
    std::shared_ptr<string> createTime_ = nullptr;
    std::shared_ptr<string> uidlist_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Agency20221216
#endif
