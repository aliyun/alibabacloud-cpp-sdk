// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TRAINORDERQUERYV2RESPONSEBODYMODULEREFUNDTICKETINFOLIST_HPP_
#define ALIBABACLOUD_MODELS_TRAINORDERQUERYV2RESPONSEBODYMODULEREFUNDTICKETINFOLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class TrainOrderQueryV2ResponseBodyModuleRefundTicketInfoList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TrainOrderQueryV2ResponseBodyModuleRefundTicketInfoList& obj) { 
      DARABONBA_PTR_TO_JSON(gmt_create, gmtCreate_);
      DARABONBA_PTR_TO_JSON(gmt_modify, gmtModify_);
      DARABONBA_PTR_TO_JSON(refund_apply_id, refundApplyId_);
      DARABONBA_PTR_TO_JSON(refund_fee, refundFee_);
      DARABONBA_PTR_TO_JSON(refund_service_fee, refundServiceFee_);
      DARABONBA_PTR_TO_JSON(ticket_no, ticketNo_);
      DARABONBA_PTR_TO_JSON(user_id, userId_);
    };
    friend void from_json(const Darabonba::Json& j, TrainOrderQueryV2ResponseBodyModuleRefundTicketInfoList& obj) { 
      DARABONBA_PTR_FROM_JSON(gmt_create, gmtCreate_);
      DARABONBA_PTR_FROM_JSON(gmt_modify, gmtModify_);
      DARABONBA_PTR_FROM_JSON(refund_apply_id, refundApplyId_);
      DARABONBA_PTR_FROM_JSON(refund_fee, refundFee_);
      DARABONBA_PTR_FROM_JSON(refund_service_fee, refundServiceFee_);
      DARABONBA_PTR_FROM_JSON(ticket_no, ticketNo_);
      DARABONBA_PTR_FROM_JSON(user_id, userId_);
    };
    TrainOrderQueryV2ResponseBodyModuleRefundTicketInfoList() = default ;
    TrainOrderQueryV2ResponseBodyModuleRefundTicketInfoList(const TrainOrderQueryV2ResponseBodyModuleRefundTicketInfoList &) = default ;
    TrainOrderQueryV2ResponseBodyModuleRefundTicketInfoList(TrainOrderQueryV2ResponseBodyModuleRefundTicketInfoList &&) = default ;
    TrainOrderQueryV2ResponseBodyModuleRefundTicketInfoList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TrainOrderQueryV2ResponseBodyModuleRefundTicketInfoList() = default ;
    TrainOrderQueryV2ResponseBodyModuleRefundTicketInfoList& operator=(const TrainOrderQueryV2ResponseBodyModuleRefundTicketInfoList &) = default ;
    TrainOrderQueryV2ResponseBodyModuleRefundTicketInfoList& operator=(TrainOrderQueryV2ResponseBodyModuleRefundTicketInfoList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->gmtCreate_ != nullptr
        && this->gmtModify_ != nullptr && this->refundApplyId_ != nullptr && this->refundFee_ != nullptr && this->refundServiceFee_ != nullptr && this->ticketNo_ != nullptr
        && this->userId_ != nullptr; };
    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline string gmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
    inline TrainOrderQueryV2ResponseBodyModuleRefundTicketInfoList& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    // gmtModify Field Functions 
    bool hasGmtModify() const { return this->gmtModify_ != nullptr;};
    void deleteGmtModify() { this->gmtModify_ = nullptr;};
    inline string gmtModify() const { DARABONBA_PTR_GET_DEFAULT(gmtModify_, "") };
    inline TrainOrderQueryV2ResponseBodyModuleRefundTicketInfoList& setGmtModify(string gmtModify) { DARABONBA_PTR_SET_VALUE(gmtModify_, gmtModify) };


    // refundApplyId Field Functions 
    bool hasRefundApplyId() const { return this->refundApplyId_ != nullptr;};
    void deleteRefundApplyId() { this->refundApplyId_ = nullptr;};
    inline string refundApplyId() const { DARABONBA_PTR_GET_DEFAULT(refundApplyId_, "") };
    inline TrainOrderQueryV2ResponseBodyModuleRefundTicketInfoList& setRefundApplyId(string refundApplyId) { DARABONBA_PTR_SET_VALUE(refundApplyId_, refundApplyId) };


    // refundFee Field Functions 
    bool hasRefundFee() const { return this->refundFee_ != nullptr;};
    void deleteRefundFee() { this->refundFee_ = nullptr;};
    inline double refundFee() const { DARABONBA_PTR_GET_DEFAULT(refundFee_, 0.0) };
    inline TrainOrderQueryV2ResponseBodyModuleRefundTicketInfoList& setRefundFee(double refundFee) { DARABONBA_PTR_SET_VALUE(refundFee_, refundFee) };


    // refundServiceFee Field Functions 
    bool hasRefundServiceFee() const { return this->refundServiceFee_ != nullptr;};
    void deleteRefundServiceFee() { this->refundServiceFee_ = nullptr;};
    inline double refundServiceFee() const { DARABONBA_PTR_GET_DEFAULT(refundServiceFee_, 0.0) };
    inline TrainOrderQueryV2ResponseBodyModuleRefundTicketInfoList& setRefundServiceFee(double refundServiceFee) { DARABONBA_PTR_SET_VALUE(refundServiceFee_, refundServiceFee) };


    // ticketNo Field Functions 
    bool hasTicketNo() const { return this->ticketNo_ != nullptr;};
    void deleteTicketNo() { this->ticketNo_ = nullptr;};
    inline string ticketNo() const { DARABONBA_PTR_GET_DEFAULT(ticketNo_, "") };
    inline TrainOrderQueryV2ResponseBodyModuleRefundTicketInfoList& setTicketNo(string ticketNo) { DARABONBA_PTR_SET_VALUE(ticketNo_, ticketNo) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline TrainOrderQueryV2ResponseBodyModuleRefundTicketInfoList& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


  protected:
    std::shared_ptr<string> gmtCreate_ = nullptr;
    std::shared_ptr<string> gmtModify_ = nullptr;
    std::shared_ptr<string> refundApplyId_ = nullptr;
    std::shared_ptr<double> refundFee_ = nullptr;
    std::shared_ptr<double> refundServiceFee_ = nullptr;
    std::shared_ptr<string> ticketNo_ = nullptr;
    std::shared_ptr<string> userId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
