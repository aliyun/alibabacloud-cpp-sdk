// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_IFLIGHTORDERLISTQUERYRESPONSEBODYMODULEFLIGHTMODIFYORDERLISTPASSENGERFEE_HPP_
#define ALIBABACLOUD_MODELS_IFLIGHTORDERLISTQUERYRESPONSEBODYMODULEFLIGHTMODIFYORDERLISTPASSENGERFEE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class IFlightOrderListQueryResponseBodyModuleFlightModifyOrderListPassengerFee : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const IFlightOrderListQueryResponseBodyModuleFlightModifyOrderListPassengerFee& obj) { 
      DARABONBA_PTR_TO_JSON(modify_hand_fee, modifyHandFee_);
      DARABONBA_PTR_TO_JSON(modify_upgrade_fee, modifyUpgradeFee_);
      DARABONBA_PTR_TO_JSON(tax_gap, taxGap_);
      DARABONBA_PTR_TO_JSON(user_id, userId_);
    };
    friend void from_json(const Darabonba::Json& j, IFlightOrderListQueryResponseBodyModuleFlightModifyOrderListPassengerFee& obj) { 
      DARABONBA_PTR_FROM_JSON(modify_hand_fee, modifyHandFee_);
      DARABONBA_PTR_FROM_JSON(modify_upgrade_fee, modifyUpgradeFee_);
      DARABONBA_PTR_FROM_JSON(tax_gap, taxGap_);
      DARABONBA_PTR_FROM_JSON(user_id, userId_);
    };
    IFlightOrderListQueryResponseBodyModuleFlightModifyOrderListPassengerFee() = default ;
    IFlightOrderListQueryResponseBodyModuleFlightModifyOrderListPassengerFee(const IFlightOrderListQueryResponseBodyModuleFlightModifyOrderListPassengerFee &) = default ;
    IFlightOrderListQueryResponseBodyModuleFlightModifyOrderListPassengerFee(IFlightOrderListQueryResponseBodyModuleFlightModifyOrderListPassengerFee &&) = default ;
    IFlightOrderListQueryResponseBodyModuleFlightModifyOrderListPassengerFee(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~IFlightOrderListQueryResponseBodyModuleFlightModifyOrderListPassengerFee() = default ;
    IFlightOrderListQueryResponseBodyModuleFlightModifyOrderListPassengerFee& operator=(const IFlightOrderListQueryResponseBodyModuleFlightModifyOrderListPassengerFee &) = default ;
    IFlightOrderListQueryResponseBodyModuleFlightModifyOrderListPassengerFee& operator=(IFlightOrderListQueryResponseBodyModuleFlightModifyOrderListPassengerFee &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->modifyHandFee_ != nullptr
        && this->modifyUpgradeFee_ != nullptr && this->taxGap_ != nullptr && this->userId_ != nullptr; };
    // modifyHandFee Field Functions 
    bool hasModifyHandFee() const { return this->modifyHandFee_ != nullptr;};
    void deleteModifyHandFee() { this->modifyHandFee_ = nullptr;};
    inline int64_t modifyHandFee() const { DARABONBA_PTR_GET_DEFAULT(modifyHandFee_, 0L) };
    inline IFlightOrderListQueryResponseBodyModuleFlightModifyOrderListPassengerFee& setModifyHandFee(int64_t modifyHandFee) { DARABONBA_PTR_SET_VALUE(modifyHandFee_, modifyHandFee) };


    // modifyUpgradeFee Field Functions 
    bool hasModifyUpgradeFee() const { return this->modifyUpgradeFee_ != nullptr;};
    void deleteModifyUpgradeFee() { this->modifyUpgradeFee_ = nullptr;};
    inline int64_t modifyUpgradeFee() const { DARABONBA_PTR_GET_DEFAULT(modifyUpgradeFee_, 0L) };
    inline IFlightOrderListQueryResponseBodyModuleFlightModifyOrderListPassengerFee& setModifyUpgradeFee(int64_t modifyUpgradeFee) { DARABONBA_PTR_SET_VALUE(modifyUpgradeFee_, modifyUpgradeFee) };


    // taxGap Field Functions 
    bool hasTaxGap() const { return this->taxGap_ != nullptr;};
    void deleteTaxGap() { this->taxGap_ = nullptr;};
    inline int64_t taxGap() const { DARABONBA_PTR_GET_DEFAULT(taxGap_, 0L) };
    inline IFlightOrderListQueryResponseBodyModuleFlightModifyOrderListPassengerFee& setTaxGap(int64_t taxGap) { DARABONBA_PTR_SET_VALUE(taxGap_, taxGap) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline IFlightOrderListQueryResponseBodyModuleFlightModifyOrderListPassengerFee& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


  protected:
    std::shared_ptr<int64_t> modifyHandFee_ = nullptr;
    std::shared_ptr<int64_t> modifyUpgradeFee_ = nullptr;
    std::shared_ptr<int64_t> taxGap_ = nullptr;
    std::shared_ptr<string> userId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
