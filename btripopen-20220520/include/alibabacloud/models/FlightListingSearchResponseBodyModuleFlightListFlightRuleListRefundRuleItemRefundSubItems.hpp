// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_FLIGHTLISTINGSEARCHRESPONSEBODYMODULEFLIGHTLISTFLIGHTRULELISTREFUNDRULEITEMREFUNDSUBITEMS_HPP_
#define ALIBABACLOUD_MODELS_FLIGHTLISTINGSEARCHRESPONSEBODYMODULEFLIGHTLISTFLIGHTRULELISTREFUNDRULEITEMREFUNDSUBITEMS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/FlightListingSearchResponseBodyModuleFlightListFlightRuleListRefundRuleItemRefundSubItemsRefundSubContents.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class FlightListingSearchResponseBodyModuleFlightListFlightRuleListRefundRuleItemRefundSubItems : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const FlightListingSearchResponseBodyModuleFlightListFlightRuleListRefundRuleItemRefundSubItems& obj) { 
      DARABONBA_PTR_TO_JSON(is_struct, isStruct_);
      DARABONBA_PTR_TO_JSON(ptc, ptc_);
      DARABONBA_PTR_TO_JSON(refund_sub_contents, refundSubContents_);
      DARABONBA_PTR_TO_JSON(title, title_);
    };
    friend void from_json(const Darabonba::Json& j, FlightListingSearchResponseBodyModuleFlightListFlightRuleListRefundRuleItemRefundSubItems& obj) { 
      DARABONBA_PTR_FROM_JSON(is_struct, isStruct_);
      DARABONBA_PTR_FROM_JSON(ptc, ptc_);
      DARABONBA_PTR_FROM_JSON(refund_sub_contents, refundSubContents_);
      DARABONBA_PTR_FROM_JSON(title, title_);
    };
    FlightListingSearchResponseBodyModuleFlightListFlightRuleListRefundRuleItemRefundSubItems() = default ;
    FlightListingSearchResponseBodyModuleFlightListFlightRuleListRefundRuleItemRefundSubItems(const FlightListingSearchResponseBodyModuleFlightListFlightRuleListRefundRuleItemRefundSubItems &) = default ;
    FlightListingSearchResponseBodyModuleFlightListFlightRuleListRefundRuleItemRefundSubItems(FlightListingSearchResponseBodyModuleFlightListFlightRuleListRefundRuleItemRefundSubItems &&) = default ;
    FlightListingSearchResponseBodyModuleFlightListFlightRuleListRefundRuleItemRefundSubItems(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~FlightListingSearchResponseBodyModuleFlightListFlightRuleListRefundRuleItemRefundSubItems() = default ;
    FlightListingSearchResponseBodyModuleFlightListFlightRuleListRefundRuleItemRefundSubItems& operator=(const FlightListingSearchResponseBodyModuleFlightListFlightRuleListRefundRuleItemRefundSubItems &) = default ;
    FlightListingSearchResponseBodyModuleFlightListFlightRuleListRefundRuleItemRefundSubItems& operator=(FlightListingSearchResponseBodyModuleFlightListFlightRuleListRefundRuleItemRefundSubItems &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->isStruct_ != nullptr
        && this->ptc_ != nullptr && this->refundSubContents_ != nullptr && this->title_ != nullptr; };
    // isStruct Field Functions 
    bool hasIsStruct() const { return this->isStruct_ != nullptr;};
    void deleteIsStruct() { this->isStruct_ = nullptr;};
    inline bool isStruct() const { DARABONBA_PTR_GET_DEFAULT(isStruct_, false) };
    inline FlightListingSearchResponseBodyModuleFlightListFlightRuleListRefundRuleItemRefundSubItems& setIsStruct(bool isStruct) { DARABONBA_PTR_SET_VALUE(isStruct_, isStruct) };


    // ptc Field Functions 
    bool hasPtc() const { return this->ptc_ != nullptr;};
    void deletePtc() { this->ptc_ = nullptr;};
    inline string ptc() const { DARABONBA_PTR_GET_DEFAULT(ptc_, "") };
    inline FlightListingSearchResponseBodyModuleFlightListFlightRuleListRefundRuleItemRefundSubItems& setPtc(string ptc) { DARABONBA_PTR_SET_VALUE(ptc_, ptc) };


    // refundSubContents Field Functions 
    bool hasRefundSubContents() const { return this->refundSubContents_ != nullptr;};
    void deleteRefundSubContents() { this->refundSubContents_ = nullptr;};
    inline const vector<Models::FlightListingSearchResponseBodyModuleFlightListFlightRuleListRefundRuleItemRefundSubItemsRefundSubContents> & refundSubContents() const { DARABONBA_PTR_GET_CONST(refundSubContents_, vector<Models::FlightListingSearchResponseBodyModuleFlightListFlightRuleListRefundRuleItemRefundSubItemsRefundSubContents>) };
    inline vector<Models::FlightListingSearchResponseBodyModuleFlightListFlightRuleListRefundRuleItemRefundSubItemsRefundSubContents> refundSubContents() { DARABONBA_PTR_GET(refundSubContents_, vector<Models::FlightListingSearchResponseBodyModuleFlightListFlightRuleListRefundRuleItemRefundSubItemsRefundSubContents>) };
    inline FlightListingSearchResponseBodyModuleFlightListFlightRuleListRefundRuleItemRefundSubItems& setRefundSubContents(const vector<Models::FlightListingSearchResponseBodyModuleFlightListFlightRuleListRefundRuleItemRefundSubItemsRefundSubContents> & refundSubContents) { DARABONBA_PTR_SET_VALUE(refundSubContents_, refundSubContents) };
    inline FlightListingSearchResponseBodyModuleFlightListFlightRuleListRefundRuleItemRefundSubItems& setRefundSubContents(vector<Models::FlightListingSearchResponseBodyModuleFlightListFlightRuleListRefundRuleItemRefundSubItemsRefundSubContents> && refundSubContents) { DARABONBA_PTR_SET_RVALUE(refundSubContents_, refundSubContents) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string title() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline FlightListingSearchResponseBodyModuleFlightListFlightRuleListRefundRuleItemRefundSubItems& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


  protected:
    std::shared_ptr<bool> isStruct_ = nullptr;
    // PTC
    std::shared_ptr<string> ptc_ = nullptr;
    std::shared_ptr<vector<Models::FlightListingSearchResponseBodyModuleFlightListFlightRuleListRefundRuleItemRefundSubItemsRefundSubContents>> refundSubContents_ = nullptr;
    std::shared_ptr<string> title_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
