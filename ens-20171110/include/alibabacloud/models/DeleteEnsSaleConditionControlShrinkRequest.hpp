// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEENSSALECONDITIONCONTROLSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEENSSALECONDITIONCONTROLSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class DeleteEnsSaleConditionControlShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteEnsSaleConditionControlShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AliUidAccount, aliUidAccount_);
      DARABONBA_PTR_TO_JSON(CommodityCode, commodityCode_);
      DARABONBA_PTR_TO_JSON(CustomAccount, customAccount_);
      DARABONBA_PTR_TO_JSON(SaleControls, saleControlsShrink_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteEnsSaleConditionControlShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AliUidAccount, aliUidAccount_);
      DARABONBA_PTR_FROM_JSON(CommodityCode, commodityCode_);
      DARABONBA_PTR_FROM_JSON(CustomAccount, customAccount_);
      DARABONBA_PTR_FROM_JSON(SaleControls, saleControlsShrink_);
    };
    DeleteEnsSaleConditionControlShrinkRequest() = default ;
    DeleteEnsSaleConditionControlShrinkRequest(const DeleteEnsSaleConditionControlShrinkRequest &) = default ;
    DeleteEnsSaleConditionControlShrinkRequest(DeleteEnsSaleConditionControlShrinkRequest &&) = default ;
    DeleteEnsSaleConditionControlShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteEnsSaleConditionControlShrinkRequest() = default ;
    DeleteEnsSaleConditionControlShrinkRequest& operator=(const DeleteEnsSaleConditionControlShrinkRequest &) = default ;
    DeleteEnsSaleConditionControlShrinkRequest& operator=(DeleteEnsSaleConditionControlShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->aliUidAccount_ != nullptr
        && this->commodityCode_ != nullptr && this->customAccount_ != nullptr && this->saleControlsShrink_ != nullptr; };
    // aliUidAccount Field Functions 
    bool hasAliUidAccount() const { return this->aliUidAccount_ != nullptr;};
    void deleteAliUidAccount() { this->aliUidAccount_ = nullptr;};
    inline string aliUidAccount() const { DARABONBA_PTR_GET_DEFAULT(aliUidAccount_, "") };
    inline DeleteEnsSaleConditionControlShrinkRequest& setAliUidAccount(string aliUidAccount) { DARABONBA_PTR_SET_VALUE(aliUidAccount_, aliUidAccount) };


    // commodityCode Field Functions 
    bool hasCommodityCode() const { return this->commodityCode_ != nullptr;};
    void deleteCommodityCode() { this->commodityCode_ = nullptr;};
    inline string commodityCode() const { DARABONBA_PTR_GET_DEFAULT(commodityCode_, "") };
    inline DeleteEnsSaleConditionControlShrinkRequest& setCommodityCode(string commodityCode) { DARABONBA_PTR_SET_VALUE(commodityCode_, commodityCode) };


    // customAccount Field Functions 
    bool hasCustomAccount() const { return this->customAccount_ != nullptr;};
    void deleteCustomAccount() { this->customAccount_ = nullptr;};
    inline string customAccount() const { DARABONBA_PTR_GET_DEFAULT(customAccount_, "") };
    inline DeleteEnsSaleConditionControlShrinkRequest& setCustomAccount(string customAccount) { DARABONBA_PTR_SET_VALUE(customAccount_, customAccount) };


    // saleControlsShrink Field Functions 
    bool hasSaleControlsShrink() const { return this->saleControlsShrink_ != nullptr;};
    void deleteSaleControlsShrink() { this->saleControlsShrink_ = nullptr;};
    inline string saleControlsShrink() const { DARABONBA_PTR_GET_DEFAULT(saleControlsShrink_, "") };
    inline DeleteEnsSaleConditionControlShrinkRequest& setSaleControlsShrink(string saleControlsShrink) { DARABONBA_PTR_SET_VALUE(saleControlsShrink_, saleControlsShrink) };


  protected:
    std::shared_ptr<string> aliUidAccount_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> commodityCode_ = nullptr;
    std::shared_ptr<string> customAccount_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> saleControlsShrink_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
