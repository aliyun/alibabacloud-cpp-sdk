// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TICKETCHANGINGENQUIRYRESPONSEBODYMODULEFLIGHTINFOLISTCABINLISTCHANGEOTAITEMRULERQREFUNDDETAILSEXTRACONTENTS_HPP_
#define ALIBABACLOUD_MODELS_TICKETCHANGINGENQUIRYRESPONSEBODYMODULEFLIGHTINFOLISTCABINLISTCHANGEOTAITEMRULERQREFUNDDETAILSEXTRACONTENTS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class TicketChangingEnquiryResponseBodyModuleFlightInfoListCabinListChangeOtaItemRuleRqRefundDetailsExtraContents : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TicketChangingEnquiryResponseBodyModuleFlightInfoListCabinListChangeOtaItemRuleRqRefundDetailsExtraContents& obj) { 
      DARABONBA_PTR_TO_JSON(content, content_);
      DARABONBA_PTR_TO_JSON(icon, icon_);
      DARABONBA_PTR_TO_JSON(title, title_);
    };
    friend void from_json(const Darabonba::Json& j, TicketChangingEnquiryResponseBodyModuleFlightInfoListCabinListChangeOtaItemRuleRqRefundDetailsExtraContents& obj) { 
      DARABONBA_PTR_FROM_JSON(content, content_);
      DARABONBA_PTR_FROM_JSON(icon, icon_);
      DARABONBA_PTR_FROM_JSON(title, title_);
    };
    TicketChangingEnquiryResponseBodyModuleFlightInfoListCabinListChangeOtaItemRuleRqRefundDetailsExtraContents() = default ;
    TicketChangingEnquiryResponseBodyModuleFlightInfoListCabinListChangeOtaItemRuleRqRefundDetailsExtraContents(const TicketChangingEnquiryResponseBodyModuleFlightInfoListCabinListChangeOtaItemRuleRqRefundDetailsExtraContents &) = default ;
    TicketChangingEnquiryResponseBodyModuleFlightInfoListCabinListChangeOtaItemRuleRqRefundDetailsExtraContents(TicketChangingEnquiryResponseBodyModuleFlightInfoListCabinListChangeOtaItemRuleRqRefundDetailsExtraContents &&) = default ;
    TicketChangingEnquiryResponseBodyModuleFlightInfoListCabinListChangeOtaItemRuleRqRefundDetailsExtraContents(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TicketChangingEnquiryResponseBodyModuleFlightInfoListCabinListChangeOtaItemRuleRqRefundDetailsExtraContents() = default ;
    TicketChangingEnquiryResponseBodyModuleFlightInfoListCabinListChangeOtaItemRuleRqRefundDetailsExtraContents& operator=(const TicketChangingEnquiryResponseBodyModuleFlightInfoListCabinListChangeOtaItemRuleRqRefundDetailsExtraContents &) = default ;
    TicketChangingEnquiryResponseBodyModuleFlightInfoListCabinListChangeOtaItemRuleRqRefundDetailsExtraContents& operator=(TicketChangingEnquiryResponseBodyModuleFlightInfoListCabinListChangeOtaItemRuleRqRefundDetailsExtraContents &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->content_ != nullptr
        && this->icon_ != nullptr && this->title_ != nullptr; };
    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline string content() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
    inline TicketChangingEnquiryResponseBodyModuleFlightInfoListCabinListChangeOtaItemRuleRqRefundDetailsExtraContents& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


    // icon Field Functions 
    bool hasIcon() const { return this->icon_ != nullptr;};
    void deleteIcon() { this->icon_ = nullptr;};
    inline string icon() const { DARABONBA_PTR_GET_DEFAULT(icon_, "") };
    inline TicketChangingEnquiryResponseBodyModuleFlightInfoListCabinListChangeOtaItemRuleRqRefundDetailsExtraContents& setIcon(string icon) { DARABONBA_PTR_SET_VALUE(icon_, icon) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string title() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline TicketChangingEnquiryResponseBodyModuleFlightInfoListCabinListChangeOtaItemRuleRqRefundDetailsExtraContents& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


  protected:
    std::shared_ptr<string> content_ = nullptr;
    std::shared_ptr<string> icon_ = nullptr;
    std::shared_ptr<string> title_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
