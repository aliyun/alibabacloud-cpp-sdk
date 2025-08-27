// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TICKETCHANGINGENQUIRYRESPONSEBODYMODULEFLIGHTINFOLISTCABINLISTCHANGEOTAITEMRULERQBAGGAGEDETAILSBAGGAGESUBITEMSBAGGAGESUBCONTENTS_HPP_
#define ALIBABACLOUD_MODELS_TICKETCHANGINGENQUIRYRESPONSEBODYMODULEFLIGHTINFOLISTCABINLISTCHANGEOTAITEMRULERQBAGGAGEDETAILSBAGGAGESUBITEMSBAGGAGESUBCONTENTS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class TicketChangingEnquiryResponseBodyModuleFlightInfoListCabinListChangeOtaItemRuleRqBaggageDetailsBaggageSubItemsBaggageSubContents : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TicketChangingEnquiryResponseBodyModuleFlightInfoListCabinListChangeOtaItemRuleRqBaggageDetailsBaggageSubItemsBaggageSubContents& obj) { 
      DARABONBA_PTR_TO_JSON(baggage_desc, baggageDesc_);
      DARABONBA_PTR_TO_JSON(icon, icon_);
      DARABONBA_PTR_TO_JSON(style, style_);
      DARABONBA_PTR_TO_JSON(sub_title, subTitle_);
    };
    friend void from_json(const Darabonba::Json& j, TicketChangingEnquiryResponseBodyModuleFlightInfoListCabinListChangeOtaItemRuleRqBaggageDetailsBaggageSubItemsBaggageSubContents& obj) { 
      DARABONBA_PTR_FROM_JSON(baggage_desc, baggageDesc_);
      DARABONBA_PTR_FROM_JSON(icon, icon_);
      DARABONBA_PTR_FROM_JSON(style, style_);
      DARABONBA_PTR_FROM_JSON(sub_title, subTitle_);
    };
    TicketChangingEnquiryResponseBodyModuleFlightInfoListCabinListChangeOtaItemRuleRqBaggageDetailsBaggageSubItemsBaggageSubContents() = default ;
    TicketChangingEnquiryResponseBodyModuleFlightInfoListCabinListChangeOtaItemRuleRqBaggageDetailsBaggageSubItemsBaggageSubContents(const TicketChangingEnquiryResponseBodyModuleFlightInfoListCabinListChangeOtaItemRuleRqBaggageDetailsBaggageSubItemsBaggageSubContents &) = default ;
    TicketChangingEnquiryResponseBodyModuleFlightInfoListCabinListChangeOtaItemRuleRqBaggageDetailsBaggageSubItemsBaggageSubContents(TicketChangingEnquiryResponseBodyModuleFlightInfoListCabinListChangeOtaItemRuleRqBaggageDetailsBaggageSubItemsBaggageSubContents &&) = default ;
    TicketChangingEnquiryResponseBodyModuleFlightInfoListCabinListChangeOtaItemRuleRqBaggageDetailsBaggageSubItemsBaggageSubContents(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TicketChangingEnquiryResponseBodyModuleFlightInfoListCabinListChangeOtaItemRuleRqBaggageDetailsBaggageSubItemsBaggageSubContents() = default ;
    TicketChangingEnquiryResponseBodyModuleFlightInfoListCabinListChangeOtaItemRuleRqBaggageDetailsBaggageSubItemsBaggageSubContents& operator=(const TicketChangingEnquiryResponseBodyModuleFlightInfoListCabinListChangeOtaItemRuleRqBaggageDetailsBaggageSubItemsBaggageSubContents &) = default ;
    TicketChangingEnquiryResponseBodyModuleFlightInfoListCabinListChangeOtaItemRuleRqBaggageDetailsBaggageSubItemsBaggageSubContents& operator=(TicketChangingEnquiryResponseBodyModuleFlightInfoListCabinListChangeOtaItemRuleRqBaggageDetailsBaggageSubItemsBaggageSubContents &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->baggageDesc_ != nullptr
        && this->icon_ != nullptr && this->style_ != nullptr && this->subTitle_ != nullptr; };
    // baggageDesc Field Functions 
    bool hasBaggageDesc() const { return this->baggageDesc_ != nullptr;};
    void deleteBaggageDesc() { this->baggageDesc_ = nullptr;};
    inline string baggageDesc() const { DARABONBA_PTR_GET_DEFAULT(baggageDesc_, "") };
    inline TicketChangingEnquiryResponseBodyModuleFlightInfoListCabinListChangeOtaItemRuleRqBaggageDetailsBaggageSubItemsBaggageSubContents& setBaggageDesc(string baggageDesc) { DARABONBA_PTR_SET_VALUE(baggageDesc_, baggageDesc) };


    // icon Field Functions 
    bool hasIcon() const { return this->icon_ != nullptr;};
    void deleteIcon() { this->icon_ = nullptr;};
    inline string icon() const { DARABONBA_PTR_GET_DEFAULT(icon_, "") };
    inline TicketChangingEnquiryResponseBodyModuleFlightInfoListCabinListChangeOtaItemRuleRqBaggageDetailsBaggageSubItemsBaggageSubContents& setIcon(string icon) { DARABONBA_PTR_SET_VALUE(icon_, icon) };


    // style Field Functions 
    bool hasStyle() const { return this->style_ != nullptr;};
    void deleteStyle() { this->style_ = nullptr;};
    inline int32_t style() const { DARABONBA_PTR_GET_DEFAULT(style_, 0) };
    inline TicketChangingEnquiryResponseBodyModuleFlightInfoListCabinListChangeOtaItemRuleRqBaggageDetailsBaggageSubItemsBaggageSubContents& setStyle(int32_t style) { DARABONBA_PTR_SET_VALUE(style_, style) };


    // subTitle Field Functions 
    bool hasSubTitle() const { return this->subTitle_ != nullptr;};
    void deleteSubTitle() { this->subTitle_ = nullptr;};
    inline string subTitle() const { DARABONBA_PTR_GET_DEFAULT(subTitle_, "") };
    inline TicketChangingEnquiryResponseBodyModuleFlightInfoListCabinListChangeOtaItemRuleRqBaggageDetailsBaggageSubItemsBaggageSubContents& setSubTitle(string subTitle) { DARABONBA_PTR_SET_VALUE(subTitle_, subTitle) };


  protected:
    std::shared_ptr<string> baggageDesc_ = nullptr;
    std::shared_ptr<string> icon_ = nullptr;
    std::shared_ptr<int32_t> style_ = nullptr;
    std::shared_ptr<string> subTitle_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
