// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TICKETCHANGINGENQUIRYRESPONSEBODYMODULEFLIGHTINFOLISTCABINLISTCHANGEOTAITEMRULERQREFUNDDETAILSREFUNDSUBITEMS_HPP_
#define ALIBABACLOUD_MODELS_TICKETCHANGINGENQUIRYRESPONSEBODYMODULEFLIGHTINFOLISTCABINLISTCHANGEOTAITEMRULERQREFUNDDETAILSREFUNDSUBITEMS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/TicketChangingEnquiryResponseBodyModuleFlightInfoListCabinListChangeOtaItemRuleRqRefundDetailsRefundSubItemsRefundSubContents.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class TicketChangingEnquiryResponseBodyModuleFlightInfoListCabinListChangeOtaItemRuleRqRefundDetailsRefundSubItems : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TicketChangingEnquiryResponseBodyModuleFlightInfoListCabinListChangeOtaItemRuleRqRefundDetailsRefundSubItems& obj) { 
      DARABONBA_PTR_TO_JSON(content, content_);
      DARABONBA_PTR_TO_JSON(is_struct, isStruct_);
      DARABONBA_PTR_TO_JSON(ptc, ptc_);
      DARABONBA_PTR_TO_JSON(refund_sub_contents, refundSubContents_);
      DARABONBA_PTR_TO_JSON(title, title_);
    };
    friend void from_json(const Darabonba::Json& j, TicketChangingEnquiryResponseBodyModuleFlightInfoListCabinListChangeOtaItemRuleRqRefundDetailsRefundSubItems& obj) { 
      DARABONBA_PTR_FROM_JSON(content, content_);
      DARABONBA_PTR_FROM_JSON(is_struct, isStruct_);
      DARABONBA_PTR_FROM_JSON(ptc, ptc_);
      DARABONBA_PTR_FROM_JSON(refund_sub_contents, refundSubContents_);
      DARABONBA_PTR_FROM_JSON(title, title_);
    };
    TicketChangingEnquiryResponseBodyModuleFlightInfoListCabinListChangeOtaItemRuleRqRefundDetailsRefundSubItems() = default ;
    TicketChangingEnquiryResponseBodyModuleFlightInfoListCabinListChangeOtaItemRuleRqRefundDetailsRefundSubItems(const TicketChangingEnquiryResponseBodyModuleFlightInfoListCabinListChangeOtaItemRuleRqRefundDetailsRefundSubItems &) = default ;
    TicketChangingEnquiryResponseBodyModuleFlightInfoListCabinListChangeOtaItemRuleRqRefundDetailsRefundSubItems(TicketChangingEnquiryResponseBodyModuleFlightInfoListCabinListChangeOtaItemRuleRqRefundDetailsRefundSubItems &&) = default ;
    TicketChangingEnquiryResponseBodyModuleFlightInfoListCabinListChangeOtaItemRuleRqRefundDetailsRefundSubItems(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TicketChangingEnquiryResponseBodyModuleFlightInfoListCabinListChangeOtaItemRuleRqRefundDetailsRefundSubItems() = default ;
    TicketChangingEnquiryResponseBodyModuleFlightInfoListCabinListChangeOtaItemRuleRqRefundDetailsRefundSubItems& operator=(const TicketChangingEnquiryResponseBodyModuleFlightInfoListCabinListChangeOtaItemRuleRqRefundDetailsRefundSubItems &) = default ;
    TicketChangingEnquiryResponseBodyModuleFlightInfoListCabinListChangeOtaItemRuleRqRefundDetailsRefundSubItems& operator=(TicketChangingEnquiryResponseBodyModuleFlightInfoListCabinListChangeOtaItemRuleRqRefundDetailsRefundSubItems &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->content_ != nullptr
        && this->isStruct_ != nullptr && this->ptc_ != nullptr && this->refundSubContents_ != nullptr && this->title_ != nullptr; };
    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline string content() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
    inline TicketChangingEnquiryResponseBodyModuleFlightInfoListCabinListChangeOtaItemRuleRqRefundDetailsRefundSubItems& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


    // isStruct Field Functions 
    bool hasIsStruct() const { return this->isStruct_ != nullptr;};
    void deleteIsStruct() { this->isStruct_ = nullptr;};
    inline bool isStruct() const { DARABONBA_PTR_GET_DEFAULT(isStruct_, false) };
    inline TicketChangingEnquiryResponseBodyModuleFlightInfoListCabinListChangeOtaItemRuleRqRefundDetailsRefundSubItems& setIsStruct(bool isStruct) { DARABONBA_PTR_SET_VALUE(isStruct_, isStruct) };


    // ptc Field Functions 
    bool hasPtc() const { return this->ptc_ != nullptr;};
    void deletePtc() { this->ptc_ = nullptr;};
    inline string ptc() const { DARABONBA_PTR_GET_DEFAULT(ptc_, "") };
    inline TicketChangingEnquiryResponseBodyModuleFlightInfoListCabinListChangeOtaItemRuleRqRefundDetailsRefundSubItems& setPtc(string ptc) { DARABONBA_PTR_SET_VALUE(ptc_, ptc) };


    // refundSubContents Field Functions 
    bool hasRefundSubContents() const { return this->refundSubContents_ != nullptr;};
    void deleteRefundSubContents() { this->refundSubContents_ = nullptr;};
    inline const vector<Models::TicketChangingEnquiryResponseBodyModuleFlightInfoListCabinListChangeOtaItemRuleRqRefundDetailsRefundSubItemsRefundSubContents> & refundSubContents() const { DARABONBA_PTR_GET_CONST(refundSubContents_, vector<Models::TicketChangingEnquiryResponseBodyModuleFlightInfoListCabinListChangeOtaItemRuleRqRefundDetailsRefundSubItemsRefundSubContents>) };
    inline vector<Models::TicketChangingEnquiryResponseBodyModuleFlightInfoListCabinListChangeOtaItemRuleRqRefundDetailsRefundSubItemsRefundSubContents> refundSubContents() { DARABONBA_PTR_GET(refundSubContents_, vector<Models::TicketChangingEnquiryResponseBodyModuleFlightInfoListCabinListChangeOtaItemRuleRqRefundDetailsRefundSubItemsRefundSubContents>) };
    inline TicketChangingEnquiryResponseBodyModuleFlightInfoListCabinListChangeOtaItemRuleRqRefundDetailsRefundSubItems& setRefundSubContents(const vector<Models::TicketChangingEnquiryResponseBodyModuleFlightInfoListCabinListChangeOtaItemRuleRqRefundDetailsRefundSubItemsRefundSubContents> & refundSubContents) { DARABONBA_PTR_SET_VALUE(refundSubContents_, refundSubContents) };
    inline TicketChangingEnquiryResponseBodyModuleFlightInfoListCabinListChangeOtaItemRuleRqRefundDetailsRefundSubItems& setRefundSubContents(vector<Models::TicketChangingEnquiryResponseBodyModuleFlightInfoListCabinListChangeOtaItemRuleRqRefundDetailsRefundSubItemsRefundSubContents> && refundSubContents) { DARABONBA_PTR_SET_RVALUE(refundSubContents_, refundSubContents) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string title() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline TicketChangingEnquiryResponseBodyModuleFlightInfoListCabinListChangeOtaItemRuleRqRefundDetailsRefundSubItems& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


  protected:
    std::shared_ptr<string> content_ = nullptr;
    std::shared_ptr<bool> isStruct_ = nullptr;
    std::shared_ptr<string> ptc_ = nullptr;
    std::shared_ptr<vector<Models::TicketChangingEnquiryResponseBodyModuleFlightInfoListCabinListChangeOtaItemRuleRqRefundDetailsRefundSubItemsRefundSubContents>> refundSubContents_ = nullptr;
    std::shared_ptr<string> title_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
