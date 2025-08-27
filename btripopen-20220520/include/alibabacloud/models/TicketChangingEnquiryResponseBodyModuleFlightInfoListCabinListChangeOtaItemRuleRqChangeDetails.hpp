// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TICKETCHANGINGENQUIRYRESPONSEBODYMODULEFLIGHTINFOLISTCABINLISTCHANGEOTAITEMRULERQCHANGEDETAILS_HPP_
#define ALIBABACLOUD_MODELS_TICKETCHANGINGENQUIRYRESPONSEBODYMODULEFLIGHTINFOLISTCABINLISTCHANGEOTAITEMRULERQCHANGEDETAILS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/TicketChangingEnquiryResponseBodyModuleFlightInfoListCabinListChangeOtaItemRuleRqChangeDetailsExtraContents.hpp>
#include <alibabacloud/models/TicketChangingEnquiryResponseBodyModuleFlightInfoListCabinListChangeOtaItemRuleRqChangeDetailsRefundSubItems.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class TicketChangingEnquiryResponseBodyModuleFlightInfoListCabinListChangeOtaItemRuleRqChangeDetails : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TicketChangingEnquiryResponseBodyModuleFlightInfoListCabinListChangeOtaItemRuleRqChangeDetails& obj) { 
      DARABONBA_PTR_TO_JSON(extra_contents, extraContents_);
      DARABONBA_PTR_TO_JSON(index, index_);
      DARABONBA_PTR_TO_JSON(refund_sub_items, refundSubItems_);
      DARABONBA_PTR_TO_JSON(table_head, tableHead_);
      DARABONBA_PTR_TO_JSON(title, title_);
      DARABONBA_PTR_TO_JSON(type, type_);
    };
    friend void from_json(const Darabonba::Json& j, TicketChangingEnquiryResponseBodyModuleFlightInfoListCabinListChangeOtaItemRuleRqChangeDetails& obj) { 
      DARABONBA_PTR_FROM_JSON(extra_contents, extraContents_);
      DARABONBA_PTR_FROM_JSON(index, index_);
      DARABONBA_PTR_FROM_JSON(refund_sub_items, refundSubItems_);
      DARABONBA_PTR_FROM_JSON(table_head, tableHead_);
      DARABONBA_PTR_FROM_JSON(title, title_);
      DARABONBA_PTR_FROM_JSON(type, type_);
    };
    TicketChangingEnquiryResponseBodyModuleFlightInfoListCabinListChangeOtaItemRuleRqChangeDetails() = default ;
    TicketChangingEnquiryResponseBodyModuleFlightInfoListCabinListChangeOtaItemRuleRqChangeDetails(const TicketChangingEnquiryResponseBodyModuleFlightInfoListCabinListChangeOtaItemRuleRqChangeDetails &) = default ;
    TicketChangingEnquiryResponseBodyModuleFlightInfoListCabinListChangeOtaItemRuleRqChangeDetails(TicketChangingEnquiryResponseBodyModuleFlightInfoListCabinListChangeOtaItemRuleRqChangeDetails &&) = default ;
    TicketChangingEnquiryResponseBodyModuleFlightInfoListCabinListChangeOtaItemRuleRqChangeDetails(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TicketChangingEnquiryResponseBodyModuleFlightInfoListCabinListChangeOtaItemRuleRqChangeDetails() = default ;
    TicketChangingEnquiryResponseBodyModuleFlightInfoListCabinListChangeOtaItemRuleRqChangeDetails& operator=(const TicketChangingEnquiryResponseBodyModuleFlightInfoListCabinListChangeOtaItemRuleRqChangeDetails &) = default ;
    TicketChangingEnquiryResponseBodyModuleFlightInfoListCabinListChangeOtaItemRuleRqChangeDetails& operator=(TicketChangingEnquiryResponseBodyModuleFlightInfoListCabinListChangeOtaItemRuleRqChangeDetails &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->extraContents_ != nullptr
        && this->index_ != nullptr && this->refundSubItems_ != nullptr && this->tableHead_ != nullptr && this->title_ != nullptr && this->type_ != nullptr; };
    // extraContents Field Functions 
    bool hasExtraContents() const { return this->extraContents_ != nullptr;};
    void deleteExtraContents() { this->extraContents_ = nullptr;};
    inline const vector<Models::TicketChangingEnquiryResponseBodyModuleFlightInfoListCabinListChangeOtaItemRuleRqChangeDetailsExtraContents> & extraContents() const { DARABONBA_PTR_GET_CONST(extraContents_, vector<Models::TicketChangingEnquiryResponseBodyModuleFlightInfoListCabinListChangeOtaItemRuleRqChangeDetailsExtraContents>) };
    inline vector<Models::TicketChangingEnquiryResponseBodyModuleFlightInfoListCabinListChangeOtaItemRuleRqChangeDetailsExtraContents> extraContents() { DARABONBA_PTR_GET(extraContents_, vector<Models::TicketChangingEnquiryResponseBodyModuleFlightInfoListCabinListChangeOtaItemRuleRqChangeDetailsExtraContents>) };
    inline TicketChangingEnquiryResponseBodyModuleFlightInfoListCabinListChangeOtaItemRuleRqChangeDetails& setExtraContents(const vector<Models::TicketChangingEnquiryResponseBodyModuleFlightInfoListCabinListChangeOtaItemRuleRqChangeDetailsExtraContents> & extraContents) { DARABONBA_PTR_SET_VALUE(extraContents_, extraContents) };
    inline TicketChangingEnquiryResponseBodyModuleFlightInfoListCabinListChangeOtaItemRuleRqChangeDetails& setExtraContents(vector<Models::TicketChangingEnquiryResponseBodyModuleFlightInfoListCabinListChangeOtaItemRuleRqChangeDetailsExtraContents> && extraContents) { DARABONBA_PTR_SET_RVALUE(extraContents_, extraContents) };


    // index Field Functions 
    bool hasIndex() const { return this->index_ != nullptr;};
    void deleteIndex() { this->index_ = nullptr;};
    inline int32_t index() const { DARABONBA_PTR_GET_DEFAULT(index_, 0) };
    inline TicketChangingEnquiryResponseBodyModuleFlightInfoListCabinListChangeOtaItemRuleRqChangeDetails& setIndex(int32_t index) { DARABONBA_PTR_SET_VALUE(index_, index) };


    // refundSubItems Field Functions 
    bool hasRefundSubItems() const { return this->refundSubItems_ != nullptr;};
    void deleteRefundSubItems() { this->refundSubItems_ = nullptr;};
    inline const vector<Models::TicketChangingEnquiryResponseBodyModuleFlightInfoListCabinListChangeOtaItemRuleRqChangeDetailsRefundSubItems> & refundSubItems() const { DARABONBA_PTR_GET_CONST(refundSubItems_, vector<Models::TicketChangingEnquiryResponseBodyModuleFlightInfoListCabinListChangeOtaItemRuleRqChangeDetailsRefundSubItems>) };
    inline vector<Models::TicketChangingEnquiryResponseBodyModuleFlightInfoListCabinListChangeOtaItemRuleRqChangeDetailsRefundSubItems> refundSubItems() { DARABONBA_PTR_GET(refundSubItems_, vector<Models::TicketChangingEnquiryResponseBodyModuleFlightInfoListCabinListChangeOtaItemRuleRqChangeDetailsRefundSubItems>) };
    inline TicketChangingEnquiryResponseBodyModuleFlightInfoListCabinListChangeOtaItemRuleRqChangeDetails& setRefundSubItems(const vector<Models::TicketChangingEnquiryResponseBodyModuleFlightInfoListCabinListChangeOtaItemRuleRqChangeDetailsRefundSubItems> & refundSubItems) { DARABONBA_PTR_SET_VALUE(refundSubItems_, refundSubItems) };
    inline TicketChangingEnquiryResponseBodyModuleFlightInfoListCabinListChangeOtaItemRuleRqChangeDetails& setRefundSubItems(vector<Models::TicketChangingEnquiryResponseBodyModuleFlightInfoListCabinListChangeOtaItemRuleRqChangeDetailsRefundSubItems> && refundSubItems) { DARABONBA_PTR_SET_RVALUE(refundSubItems_, refundSubItems) };


    // tableHead Field Functions 
    bool hasTableHead() const { return this->tableHead_ != nullptr;};
    void deleteTableHead() { this->tableHead_ = nullptr;};
    inline string tableHead() const { DARABONBA_PTR_GET_DEFAULT(tableHead_, "") };
    inline TicketChangingEnquiryResponseBodyModuleFlightInfoListCabinListChangeOtaItemRuleRqChangeDetails& setTableHead(string tableHead) { DARABONBA_PTR_SET_VALUE(tableHead_, tableHead) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string title() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline TicketChangingEnquiryResponseBodyModuleFlightInfoListCabinListChangeOtaItemRuleRqChangeDetails& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline int32_t type() const { DARABONBA_PTR_GET_DEFAULT(type_, 0) };
    inline TicketChangingEnquiryResponseBodyModuleFlightInfoListCabinListChangeOtaItemRuleRqChangeDetails& setType(int32_t type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    std::shared_ptr<vector<Models::TicketChangingEnquiryResponseBodyModuleFlightInfoListCabinListChangeOtaItemRuleRqChangeDetailsExtraContents>> extraContents_ = nullptr;
    std::shared_ptr<int32_t> index_ = nullptr;
    std::shared_ptr<vector<Models::TicketChangingEnquiryResponseBodyModuleFlightInfoListCabinListChangeOtaItemRuleRqChangeDetailsRefundSubItems>> refundSubItems_ = nullptr;
    std::shared_ptr<string> tableHead_ = nullptr;
    std::shared_ptr<string> title_ = nullptr;
    std::shared_ptr<int32_t> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
