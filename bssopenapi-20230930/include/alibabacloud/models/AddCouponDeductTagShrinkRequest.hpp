// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDCOUPONDEDUCTTAGSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ADDCOUPONDEDUCTTAGSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BssOpenApi20230930
{
namespace Models
{
  class AddCouponDeductTagShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddCouponDeductTagShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CouponId, couponId_);
      DARABONBA_PTR_TO_JSON(EcIdAccountIds, ecIdAccountIdsShrink_);
      DARABONBA_PTR_TO_JSON(Nbid, nbid_);
      DARABONBA_PTR_TO_JSON(Tags, tagsShrink_);
    };
    friend void from_json(const Darabonba::Json& j, AddCouponDeductTagShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CouponId, couponId_);
      DARABONBA_PTR_FROM_JSON(EcIdAccountIds, ecIdAccountIdsShrink_);
      DARABONBA_PTR_FROM_JSON(Nbid, nbid_);
      DARABONBA_PTR_FROM_JSON(Tags, tagsShrink_);
    };
    AddCouponDeductTagShrinkRequest() = default ;
    AddCouponDeductTagShrinkRequest(const AddCouponDeductTagShrinkRequest &) = default ;
    AddCouponDeductTagShrinkRequest(AddCouponDeductTagShrinkRequest &&) = default ;
    AddCouponDeductTagShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddCouponDeductTagShrinkRequest() = default ;
    AddCouponDeductTagShrinkRequest& operator=(const AddCouponDeductTagShrinkRequest &) = default ;
    AddCouponDeductTagShrinkRequest& operator=(AddCouponDeductTagShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->couponId_ == nullptr
        && this->ecIdAccountIdsShrink_ == nullptr && this->nbid_ == nullptr && this->tagsShrink_ == nullptr; };
    // couponId Field Functions 
    bool hasCouponId() const { return this->couponId_ != nullptr;};
    void deleteCouponId() { this->couponId_ = nullptr;};
    inline string getCouponId() const { DARABONBA_PTR_GET_DEFAULT(couponId_, "") };
    inline AddCouponDeductTagShrinkRequest& setCouponId(string couponId) { DARABONBA_PTR_SET_VALUE(couponId_, couponId) };


    // ecIdAccountIdsShrink Field Functions 
    bool hasEcIdAccountIdsShrink() const { return this->ecIdAccountIdsShrink_ != nullptr;};
    void deleteEcIdAccountIdsShrink() { this->ecIdAccountIdsShrink_ = nullptr;};
    inline string getEcIdAccountIdsShrink() const { DARABONBA_PTR_GET_DEFAULT(ecIdAccountIdsShrink_, "") };
    inline AddCouponDeductTagShrinkRequest& setEcIdAccountIdsShrink(string ecIdAccountIdsShrink) { DARABONBA_PTR_SET_VALUE(ecIdAccountIdsShrink_, ecIdAccountIdsShrink) };


    // nbid Field Functions 
    bool hasNbid() const { return this->nbid_ != nullptr;};
    void deleteNbid() { this->nbid_ = nullptr;};
    inline string getNbid() const { DARABONBA_PTR_GET_DEFAULT(nbid_, "") };
    inline AddCouponDeductTagShrinkRequest& setNbid(string nbid) { DARABONBA_PTR_SET_VALUE(nbid_, nbid) };


    // tagsShrink Field Functions 
    bool hasTagsShrink() const { return this->tagsShrink_ != nullptr;};
    void deleteTagsShrink() { this->tagsShrink_ = nullptr;};
    inline string getTagsShrink() const { DARABONBA_PTR_GET_DEFAULT(tagsShrink_, "") };
    inline AddCouponDeductTagShrinkRequest& setTagsShrink(string tagsShrink) { DARABONBA_PTR_SET_VALUE(tagsShrink_, tagsShrink) };


  protected:
    shared_ptr<string> couponId_ {};
    shared_ptr<string> ecIdAccountIdsShrink_ {};
    shared_ptr<string> nbid_ {};
    shared_ptr<string> tagsShrink_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BssOpenApi20230930
#endif
