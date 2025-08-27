// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_FLIGHTSEARCHLISTRESPONSEBODYMODULEFLIGHTLISTTRANSFERINFOTRANSFERFLIGHTRULELISTCHANGERULEITEMREFUNDSUBITEMSREFUNDSUBCONTENTS_HPP_
#define ALIBABACLOUD_MODELS_FLIGHTSEARCHLISTRESPONSEBODYMODULEFLIGHTLISTTRANSFERINFOTRANSFERFLIGHTRULELISTCHANGERULEITEMREFUNDSUBITEMSREFUNDSUBCONTENTS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class FlightSearchListResponseBodyModuleFlightListTransferInfoTransferFlightRuleListChangeRuleItemRefundSubItemsRefundSubContents : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const FlightSearchListResponseBodyModuleFlightListTransferInfoTransferFlightRuleListChangeRuleItemRefundSubItemsRefundSubContents& obj) { 
      DARABONBA_PTR_TO_JSON(fee_desc, feeDesc_);
      DARABONBA_PTR_TO_JSON(fee_range, feeRange_);
      DARABONBA_PTR_TO_JSON(style, style_);
    };
    friend void from_json(const Darabonba::Json& j, FlightSearchListResponseBodyModuleFlightListTransferInfoTransferFlightRuleListChangeRuleItemRefundSubItemsRefundSubContents& obj) { 
      DARABONBA_PTR_FROM_JSON(fee_desc, feeDesc_);
      DARABONBA_PTR_FROM_JSON(fee_range, feeRange_);
      DARABONBA_PTR_FROM_JSON(style, style_);
    };
    FlightSearchListResponseBodyModuleFlightListTransferInfoTransferFlightRuleListChangeRuleItemRefundSubItemsRefundSubContents() = default ;
    FlightSearchListResponseBodyModuleFlightListTransferInfoTransferFlightRuleListChangeRuleItemRefundSubItemsRefundSubContents(const FlightSearchListResponseBodyModuleFlightListTransferInfoTransferFlightRuleListChangeRuleItemRefundSubItemsRefundSubContents &) = default ;
    FlightSearchListResponseBodyModuleFlightListTransferInfoTransferFlightRuleListChangeRuleItemRefundSubItemsRefundSubContents(FlightSearchListResponseBodyModuleFlightListTransferInfoTransferFlightRuleListChangeRuleItemRefundSubItemsRefundSubContents &&) = default ;
    FlightSearchListResponseBodyModuleFlightListTransferInfoTransferFlightRuleListChangeRuleItemRefundSubItemsRefundSubContents(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~FlightSearchListResponseBodyModuleFlightListTransferInfoTransferFlightRuleListChangeRuleItemRefundSubItemsRefundSubContents() = default ;
    FlightSearchListResponseBodyModuleFlightListTransferInfoTransferFlightRuleListChangeRuleItemRefundSubItemsRefundSubContents& operator=(const FlightSearchListResponseBodyModuleFlightListTransferInfoTransferFlightRuleListChangeRuleItemRefundSubItemsRefundSubContents &) = default ;
    FlightSearchListResponseBodyModuleFlightListTransferInfoTransferFlightRuleListChangeRuleItemRefundSubItemsRefundSubContents& operator=(FlightSearchListResponseBodyModuleFlightListTransferInfoTransferFlightRuleListChangeRuleItemRefundSubItemsRefundSubContents &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->feeDesc_ != nullptr
        && this->feeRange_ != nullptr && this->style_ != nullptr; };
    // feeDesc Field Functions 
    bool hasFeeDesc() const { return this->feeDesc_ != nullptr;};
    void deleteFeeDesc() { this->feeDesc_ = nullptr;};
    inline string feeDesc() const { DARABONBA_PTR_GET_DEFAULT(feeDesc_, "") };
    inline FlightSearchListResponseBodyModuleFlightListTransferInfoTransferFlightRuleListChangeRuleItemRefundSubItemsRefundSubContents& setFeeDesc(string feeDesc) { DARABONBA_PTR_SET_VALUE(feeDesc_, feeDesc) };


    // feeRange Field Functions 
    bool hasFeeRange() const { return this->feeRange_ != nullptr;};
    void deleteFeeRange() { this->feeRange_ = nullptr;};
    inline string feeRange() const { DARABONBA_PTR_GET_DEFAULT(feeRange_, "") };
    inline FlightSearchListResponseBodyModuleFlightListTransferInfoTransferFlightRuleListChangeRuleItemRefundSubItemsRefundSubContents& setFeeRange(string feeRange) { DARABONBA_PTR_SET_VALUE(feeRange_, feeRange) };


    // style Field Functions 
    bool hasStyle() const { return this->style_ != nullptr;};
    void deleteStyle() { this->style_ = nullptr;};
    inline int32_t style() const { DARABONBA_PTR_GET_DEFAULT(style_, 0) };
    inline FlightSearchListResponseBodyModuleFlightListTransferInfoTransferFlightRuleListChangeRuleItemRefundSubItemsRefundSubContents& setStyle(int32_t style) { DARABONBA_PTR_SET_VALUE(style_, style) };


  protected:
    std::shared_ptr<string> feeDesc_ = nullptr;
    std::shared_ptr<string> feeRange_ = nullptr;
    std::shared_ptr<int32_t> style_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
