// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TICKETCHANGINGENQUIRYRESPONSEBODYMODULEFLIGHTINFOLISTCABINLISTCHANGEOTAITEMRULERQBAGGAGEDETAILSBAGGAGESUBITEMS_HPP_
#define ALIBABACLOUD_MODELS_TICKETCHANGINGENQUIRYRESPONSEBODYMODULEFLIGHTINFOLISTCABINLISTCHANGEOTAITEMRULERQBAGGAGEDETAILSBAGGAGESUBITEMS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/TicketChangingEnquiryResponseBodyModuleFlightInfoListCabinListChangeOtaItemRuleRqBaggageDetailsBaggageSubItemsBaggageSubContentVisualizes.hpp>
#include <alibabacloud/models/TicketChangingEnquiryResponseBodyModuleFlightInfoListCabinListChangeOtaItemRuleRqBaggageDetailsBaggageSubItemsBaggageSubContents.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class TicketChangingEnquiryResponseBodyModuleFlightInfoListCabinListChangeOtaItemRuleRqBaggageDetailsBaggageSubItems : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TicketChangingEnquiryResponseBodyModuleFlightInfoListCabinListChangeOtaItemRuleRqBaggageDetailsBaggageSubItems& obj) { 
      DARABONBA_ANY_TO_JSON(attributes, attributes_);
      DARABONBA_PTR_TO_JSON(baggage_sub_content_visualizes, baggageSubContentVisualizes_);
      DARABONBA_PTR_TO_JSON(baggage_sub_contents, baggageSubContents_);
      DARABONBA_PTR_TO_JSON(content, content_);
      DARABONBA_PTR_TO_JSON(is_struct, isStruct_);
      DARABONBA_PTR_TO_JSON(ptc, ptc_);
      DARABONBA_PTR_TO_JSON(title, title_);
    };
    friend void from_json(const Darabonba::Json& j, TicketChangingEnquiryResponseBodyModuleFlightInfoListCabinListChangeOtaItemRuleRqBaggageDetailsBaggageSubItems& obj) { 
      DARABONBA_ANY_FROM_JSON(attributes, attributes_);
      DARABONBA_PTR_FROM_JSON(baggage_sub_content_visualizes, baggageSubContentVisualizes_);
      DARABONBA_PTR_FROM_JSON(baggage_sub_contents, baggageSubContents_);
      DARABONBA_PTR_FROM_JSON(content, content_);
      DARABONBA_PTR_FROM_JSON(is_struct, isStruct_);
      DARABONBA_PTR_FROM_JSON(ptc, ptc_);
      DARABONBA_PTR_FROM_JSON(title, title_);
    };
    TicketChangingEnquiryResponseBodyModuleFlightInfoListCabinListChangeOtaItemRuleRqBaggageDetailsBaggageSubItems() = default ;
    TicketChangingEnquiryResponseBodyModuleFlightInfoListCabinListChangeOtaItemRuleRqBaggageDetailsBaggageSubItems(const TicketChangingEnquiryResponseBodyModuleFlightInfoListCabinListChangeOtaItemRuleRqBaggageDetailsBaggageSubItems &) = default ;
    TicketChangingEnquiryResponseBodyModuleFlightInfoListCabinListChangeOtaItemRuleRqBaggageDetailsBaggageSubItems(TicketChangingEnquiryResponseBodyModuleFlightInfoListCabinListChangeOtaItemRuleRqBaggageDetailsBaggageSubItems &&) = default ;
    TicketChangingEnquiryResponseBodyModuleFlightInfoListCabinListChangeOtaItemRuleRqBaggageDetailsBaggageSubItems(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TicketChangingEnquiryResponseBodyModuleFlightInfoListCabinListChangeOtaItemRuleRqBaggageDetailsBaggageSubItems() = default ;
    TicketChangingEnquiryResponseBodyModuleFlightInfoListCabinListChangeOtaItemRuleRqBaggageDetailsBaggageSubItems& operator=(const TicketChangingEnquiryResponseBodyModuleFlightInfoListCabinListChangeOtaItemRuleRqBaggageDetailsBaggageSubItems &) = default ;
    TicketChangingEnquiryResponseBodyModuleFlightInfoListCabinListChangeOtaItemRuleRqBaggageDetailsBaggageSubItems& operator=(TicketChangingEnquiryResponseBodyModuleFlightInfoListCabinListChangeOtaItemRuleRqBaggageDetailsBaggageSubItems &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->attributes_ != nullptr
        && this->baggageSubContentVisualizes_ != nullptr && this->baggageSubContents_ != nullptr && this->content_ != nullptr && this->isStruct_ != nullptr && this->ptc_ != nullptr
        && this->title_ != nullptr; };
    // attributes Field Functions 
    bool hasAttributes() const { return this->attributes_ != nullptr;};
    void deleteAttributes() { this->attributes_ = nullptr;};
    inline     const Darabonba::Json & attributes() const { DARABONBA_GET(attributes_) };
    Darabonba::Json & attributes() { DARABONBA_GET(attributes_) };
    inline TicketChangingEnquiryResponseBodyModuleFlightInfoListCabinListChangeOtaItemRuleRqBaggageDetailsBaggageSubItems& setAttributes(const Darabonba::Json & attributes) { DARABONBA_SET_VALUE(attributes_, attributes) };
    inline TicketChangingEnquiryResponseBodyModuleFlightInfoListCabinListChangeOtaItemRuleRqBaggageDetailsBaggageSubItems& setAttributes(Darabonba::Json & attributes) { DARABONBA_SET_RVALUE(attributes_, attributes) };


    // baggageSubContentVisualizes Field Functions 
    bool hasBaggageSubContentVisualizes() const { return this->baggageSubContentVisualizes_ != nullptr;};
    void deleteBaggageSubContentVisualizes() { this->baggageSubContentVisualizes_ = nullptr;};
    inline const vector<Models::TicketChangingEnquiryResponseBodyModuleFlightInfoListCabinListChangeOtaItemRuleRqBaggageDetailsBaggageSubItemsBaggageSubContentVisualizes> & baggageSubContentVisualizes() const { DARABONBA_PTR_GET_CONST(baggageSubContentVisualizes_, vector<Models::TicketChangingEnquiryResponseBodyModuleFlightInfoListCabinListChangeOtaItemRuleRqBaggageDetailsBaggageSubItemsBaggageSubContentVisualizes>) };
    inline vector<Models::TicketChangingEnquiryResponseBodyModuleFlightInfoListCabinListChangeOtaItemRuleRqBaggageDetailsBaggageSubItemsBaggageSubContentVisualizes> baggageSubContentVisualizes() { DARABONBA_PTR_GET(baggageSubContentVisualizes_, vector<Models::TicketChangingEnquiryResponseBodyModuleFlightInfoListCabinListChangeOtaItemRuleRqBaggageDetailsBaggageSubItemsBaggageSubContentVisualizes>) };
    inline TicketChangingEnquiryResponseBodyModuleFlightInfoListCabinListChangeOtaItemRuleRqBaggageDetailsBaggageSubItems& setBaggageSubContentVisualizes(const vector<Models::TicketChangingEnquiryResponseBodyModuleFlightInfoListCabinListChangeOtaItemRuleRqBaggageDetailsBaggageSubItemsBaggageSubContentVisualizes> & baggageSubContentVisualizes) { DARABONBA_PTR_SET_VALUE(baggageSubContentVisualizes_, baggageSubContentVisualizes) };
    inline TicketChangingEnquiryResponseBodyModuleFlightInfoListCabinListChangeOtaItemRuleRqBaggageDetailsBaggageSubItems& setBaggageSubContentVisualizes(vector<Models::TicketChangingEnquiryResponseBodyModuleFlightInfoListCabinListChangeOtaItemRuleRqBaggageDetailsBaggageSubItemsBaggageSubContentVisualizes> && baggageSubContentVisualizes) { DARABONBA_PTR_SET_RVALUE(baggageSubContentVisualizes_, baggageSubContentVisualizes) };


    // baggageSubContents Field Functions 
    bool hasBaggageSubContents() const { return this->baggageSubContents_ != nullptr;};
    void deleteBaggageSubContents() { this->baggageSubContents_ = nullptr;};
    inline const vector<Models::TicketChangingEnquiryResponseBodyModuleFlightInfoListCabinListChangeOtaItemRuleRqBaggageDetailsBaggageSubItemsBaggageSubContents> & baggageSubContents() const { DARABONBA_PTR_GET_CONST(baggageSubContents_, vector<Models::TicketChangingEnquiryResponseBodyModuleFlightInfoListCabinListChangeOtaItemRuleRqBaggageDetailsBaggageSubItemsBaggageSubContents>) };
    inline vector<Models::TicketChangingEnquiryResponseBodyModuleFlightInfoListCabinListChangeOtaItemRuleRqBaggageDetailsBaggageSubItemsBaggageSubContents> baggageSubContents() { DARABONBA_PTR_GET(baggageSubContents_, vector<Models::TicketChangingEnquiryResponseBodyModuleFlightInfoListCabinListChangeOtaItemRuleRqBaggageDetailsBaggageSubItemsBaggageSubContents>) };
    inline TicketChangingEnquiryResponseBodyModuleFlightInfoListCabinListChangeOtaItemRuleRqBaggageDetailsBaggageSubItems& setBaggageSubContents(const vector<Models::TicketChangingEnquiryResponseBodyModuleFlightInfoListCabinListChangeOtaItemRuleRqBaggageDetailsBaggageSubItemsBaggageSubContents> & baggageSubContents) { DARABONBA_PTR_SET_VALUE(baggageSubContents_, baggageSubContents) };
    inline TicketChangingEnquiryResponseBodyModuleFlightInfoListCabinListChangeOtaItemRuleRqBaggageDetailsBaggageSubItems& setBaggageSubContents(vector<Models::TicketChangingEnquiryResponseBodyModuleFlightInfoListCabinListChangeOtaItemRuleRqBaggageDetailsBaggageSubItemsBaggageSubContents> && baggageSubContents) { DARABONBA_PTR_SET_RVALUE(baggageSubContents_, baggageSubContents) };


    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline string content() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
    inline TicketChangingEnquiryResponseBodyModuleFlightInfoListCabinListChangeOtaItemRuleRqBaggageDetailsBaggageSubItems& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


    // isStruct Field Functions 
    bool hasIsStruct() const { return this->isStruct_ != nullptr;};
    void deleteIsStruct() { this->isStruct_ = nullptr;};
    inline bool isStruct() const { DARABONBA_PTR_GET_DEFAULT(isStruct_, false) };
    inline TicketChangingEnquiryResponseBodyModuleFlightInfoListCabinListChangeOtaItemRuleRqBaggageDetailsBaggageSubItems& setIsStruct(bool isStruct) { DARABONBA_PTR_SET_VALUE(isStruct_, isStruct) };


    // ptc Field Functions 
    bool hasPtc() const { return this->ptc_ != nullptr;};
    void deletePtc() { this->ptc_ = nullptr;};
    inline string ptc() const { DARABONBA_PTR_GET_DEFAULT(ptc_, "") };
    inline TicketChangingEnquiryResponseBodyModuleFlightInfoListCabinListChangeOtaItemRuleRqBaggageDetailsBaggageSubItems& setPtc(string ptc) { DARABONBA_PTR_SET_VALUE(ptc_, ptc) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string title() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline TicketChangingEnquiryResponseBodyModuleFlightInfoListCabinListChangeOtaItemRuleRqBaggageDetailsBaggageSubItems& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


  protected:
    // attributes
    Darabonba::Json attributes_ = nullptr;
    std::shared_ptr<vector<Models::TicketChangingEnquiryResponseBodyModuleFlightInfoListCabinListChangeOtaItemRuleRqBaggageDetailsBaggageSubItemsBaggageSubContentVisualizes>> baggageSubContentVisualizes_ = nullptr;
    std::shared_ptr<vector<Models::TicketChangingEnquiryResponseBodyModuleFlightInfoListCabinListChangeOtaItemRuleRqBaggageDetailsBaggageSubItemsBaggageSubContents>> baggageSubContents_ = nullptr;
    std::shared_ptr<string> content_ = nullptr;
    std::shared_ptr<bool> isStruct_ = nullptr;
    std::shared_ptr<string> ptc_ = nullptr;
    std::shared_ptr<string> title_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
