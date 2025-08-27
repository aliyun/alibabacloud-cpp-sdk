// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TICKETCHANGINGAPPLYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_TICKETCHANGINGAPPLYREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/TicketChangingApplyRequestModifyFlightInfoList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class TicketChangingApplyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TicketChangingApplyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(dis_order_id, disOrderId_);
      DARABONBA_PTR_TO_JSON(dis_sub_order_id, disSubOrderId_);
      DARABONBA_PTR_TO_JSON(is_voluntary, isVoluntary_);
      DARABONBA_PTR_TO_JSON(modify_flight_info_list, modifyFlightInfoList_);
      DARABONBA_PTR_TO_JSON(ota_item_id, otaItemId_);
      DARABONBA_PTR_TO_JSON(reason, reason_);
      DARABONBA_PTR_TO_JSON(session_id, sessionId_);
      DARABONBA_PTR_TO_JSON(whether_retry, whetherRetry_);
    };
    friend void from_json(const Darabonba::Json& j, TicketChangingApplyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(dis_order_id, disOrderId_);
      DARABONBA_PTR_FROM_JSON(dis_sub_order_id, disSubOrderId_);
      DARABONBA_PTR_FROM_JSON(is_voluntary, isVoluntary_);
      DARABONBA_PTR_FROM_JSON(modify_flight_info_list, modifyFlightInfoList_);
      DARABONBA_PTR_FROM_JSON(ota_item_id, otaItemId_);
      DARABONBA_PTR_FROM_JSON(reason, reason_);
      DARABONBA_PTR_FROM_JSON(session_id, sessionId_);
      DARABONBA_PTR_FROM_JSON(whether_retry, whetherRetry_);
    };
    TicketChangingApplyRequest() = default ;
    TicketChangingApplyRequest(const TicketChangingApplyRequest &) = default ;
    TicketChangingApplyRequest(TicketChangingApplyRequest &&) = default ;
    TicketChangingApplyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TicketChangingApplyRequest() = default ;
    TicketChangingApplyRequest& operator=(const TicketChangingApplyRequest &) = default ;
    TicketChangingApplyRequest& operator=(TicketChangingApplyRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->disOrderId_ != nullptr
        && this->disSubOrderId_ != nullptr && this->isVoluntary_ != nullptr && this->modifyFlightInfoList_ != nullptr && this->otaItemId_ != nullptr && this->reason_ != nullptr
        && this->sessionId_ != nullptr && this->whetherRetry_ != nullptr; };
    // disOrderId Field Functions 
    bool hasDisOrderId() const { return this->disOrderId_ != nullptr;};
    void deleteDisOrderId() { this->disOrderId_ = nullptr;};
    inline string disOrderId() const { DARABONBA_PTR_GET_DEFAULT(disOrderId_, "") };
    inline TicketChangingApplyRequest& setDisOrderId(string disOrderId) { DARABONBA_PTR_SET_VALUE(disOrderId_, disOrderId) };


    // disSubOrderId Field Functions 
    bool hasDisSubOrderId() const { return this->disSubOrderId_ != nullptr;};
    void deleteDisSubOrderId() { this->disSubOrderId_ = nullptr;};
    inline string disSubOrderId() const { DARABONBA_PTR_GET_DEFAULT(disSubOrderId_, "") };
    inline TicketChangingApplyRequest& setDisSubOrderId(string disSubOrderId) { DARABONBA_PTR_SET_VALUE(disSubOrderId_, disSubOrderId) };


    // isVoluntary Field Functions 
    bool hasIsVoluntary() const { return this->isVoluntary_ != nullptr;};
    void deleteIsVoluntary() { this->isVoluntary_ = nullptr;};
    inline int32_t isVoluntary() const { DARABONBA_PTR_GET_DEFAULT(isVoluntary_, 0) };
    inline TicketChangingApplyRequest& setIsVoluntary(int32_t isVoluntary) { DARABONBA_PTR_SET_VALUE(isVoluntary_, isVoluntary) };


    // modifyFlightInfoList Field Functions 
    bool hasModifyFlightInfoList() const { return this->modifyFlightInfoList_ != nullptr;};
    void deleteModifyFlightInfoList() { this->modifyFlightInfoList_ = nullptr;};
    inline const vector<TicketChangingApplyRequestModifyFlightInfoList> & modifyFlightInfoList() const { DARABONBA_PTR_GET_CONST(modifyFlightInfoList_, vector<TicketChangingApplyRequestModifyFlightInfoList>) };
    inline vector<TicketChangingApplyRequestModifyFlightInfoList> modifyFlightInfoList() { DARABONBA_PTR_GET(modifyFlightInfoList_, vector<TicketChangingApplyRequestModifyFlightInfoList>) };
    inline TicketChangingApplyRequest& setModifyFlightInfoList(const vector<TicketChangingApplyRequestModifyFlightInfoList> & modifyFlightInfoList) { DARABONBA_PTR_SET_VALUE(modifyFlightInfoList_, modifyFlightInfoList) };
    inline TicketChangingApplyRequest& setModifyFlightInfoList(vector<TicketChangingApplyRequestModifyFlightInfoList> && modifyFlightInfoList) { DARABONBA_PTR_SET_RVALUE(modifyFlightInfoList_, modifyFlightInfoList) };


    // otaItemId Field Functions 
    bool hasOtaItemId() const { return this->otaItemId_ != nullptr;};
    void deleteOtaItemId() { this->otaItemId_ = nullptr;};
    inline string otaItemId() const { DARABONBA_PTR_GET_DEFAULT(otaItemId_, "") };
    inline TicketChangingApplyRequest& setOtaItemId(string otaItemId) { DARABONBA_PTR_SET_VALUE(otaItemId_, otaItemId) };


    // reason Field Functions 
    bool hasReason() const { return this->reason_ != nullptr;};
    void deleteReason() { this->reason_ = nullptr;};
    inline string reason() const { DARABONBA_PTR_GET_DEFAULT(reason_, "") };
    inline TicketChangingApplyRequest& setReason(string reason) { DARABONBA_PTR_SET_VALUE(reason_, reason) };


    // sessionId Field Functions 
    bool hasSessionId() const { return this->sessionId_ != nullptr;};
    void deleteSessionId() { this->sessionId_ = nullptr;};
    inline string sessionId() const { DARABONBA_PTR_GET_DEFAULT(sessionId_, "") };
    inline TicketChangingApplyRequest& setSessionId(string sessionId) { DARABONBA_PTR_SET_VALUE(sessionId_, sessionId) };


    // whetherRetry Field Functions 
    bool hasWhetherRetry() const { return this->whetherRetry_ != nullptr;};
    void deleteWhetherRetry() { this->whetherRetry_ = nullptr;};
    inline bool whetherRetry() const { DARABONBA_PTR_GET_DEFAULT(whetherRetry_, false) };
    inline TicketChangingApplyRequest& setWhetherRetry(bool whetherRetry) { DARABONBA_PTR_SET_VALUE(whetherRetry_, whetherRetry) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> disOrderId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> disSubOrderId_ = nullptr;
    std::shared_ptr<int32_t> isVoluntary_ = nullptr;
    // This parameter is required.
    std::shared_ptr<vector<TicketChangingApplyRequestModifyFlightInfoList>> modifyFlightInfoList_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> otaItemId_ = nullptr;
    std::shared_ptr<string> reason_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> sessionId_ = nullptr;
    std::shared_ptr<bool> whetherRetry_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
