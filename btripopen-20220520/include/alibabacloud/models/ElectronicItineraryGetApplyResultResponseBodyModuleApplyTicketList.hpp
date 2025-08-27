// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ELECTRONICITINERARYGETAPPLYRESULTRESPONSEBODYMODULEAPPLYTICKETLIST_HPP_
#define ALIBABACLOUD_MODELS_ELECTRONICITINERARYGETAPPLYRESULTRESPONSEBODYMODULEAPPLYTICKETLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class ElectronicItineraryGetApplyResultResponseBodyModuleApplyTicketList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ElectronicItineraryGetApplyResultResponseBodyModuleApplyTicketList& obj) { 
      DARABONBA_PTR_TO_JSON(failed_code, failedCode_);
      DARABONBA_PTR_TO_JSON(failed_reason, failedReason_);
      DARABONBA_PTR_TO_JSON(itinerary_status, itineraryStatus_);
      DARABONBA_PTR_TO_JSON(remark, remark_);
      DARABONBA_PTR_TO_JSON(ticket_no, ticketNo_);
    };
    friend void from_json(const Darabonba::Json& j, ElectronicItineraryGetApplyResultResponseBodyModuleApplyTicketList& obj) { 
      DARABONBA_PTR_FROM_JSON(failed_code, failedCode_);
      DARABONBA_PTR_FROM_JSON(failed_reason, failedReason_);
      DARABONBA_PTR_FROM_JSON(itinerary_status, itineraryStatus_);
      DARABONBA_PTR_FROM_JSON(remark, remark_);
      DARABONBA_PTR_FROM_JSON(ticket_no, ticketNo_);
    };
    ElectronicItineraryGetApplyResultResponseBodyModuleApplyTicketList() = default ;
    ElectronicItineraryGetApplyResultResponseBodyModuleApplyTicketList(const ElectronicItineraryGetApplyResultResponseBodyModuleApplyTicketList &) = default ;
    ElectronicItineraryGetApplyResultResponseBodyModuleApplyTicketList(ElectronicItineraryGetApplyResultResponseBodyModuleApplyTicketList &&) = default ;
    ElectronicItineraryGetApplyResultResponseBodyModuleApplyTicketList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ElectronicItineraryGetApplyResultResponseBodyModuleApplyTicketList() = default ;
    ElectronicItineraryGetApplyResultResponseBodyModuleApplyTicketList& operator=(const ElectronicItineraryGetApplyResultResponseBodyModuleApplyTicketList &) = default ;
    ElectronicItineraryGetApplyResultResponseBodyModuleApplyTicketList& operator=(ElectronicItineraryGetApplyResultResponseBodyModuleApplyTicketList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->failedCode_ != nullptr
        && this->failedReason_ != nullptr && this->itineraryStatus_ != nullptr && this->remark_ != nullptr && this->ticketNo_ != nullptr; };
    // failedCode Field Functions 
    bool hasFailedCode() const { return this->failedCode_ != nullptr;};
    void deleteFailedCode() { this->failedCode_ = nullptr;};
    inline int32_t failedCode() const { DARABONBA_PTR_GET_DEFAULT(failedCode_, 0) };
    inline ElectronicItineraryGetApplyResultResponseBodyModuleApplyTicketList& setFailedCode(int32_t failedCode) { DARABONBA_PTR_SET_VALUE(failedCode_, failedCode) };


    // failedReason Field Functions 
    bool hasFailedReason() const { return this->failedReason_ != nullptr;};
    void deleteFailedReason() { this->failedReason_ = nullptr;};
    inline string failedReason() const { DARABONBA_PTR_GET_DEFAULT(failedReason_, "") };
    inline ElectronicItineraryGetApplyResultResponseBodyModuleApplyTicketList& setFailedReason(string failedReason) { DARABONBA_PTR_SET_VALUE(failedReason_, failedReason) };


    // itineraryStatus Field Functions 
    bool hasItineraryStatus() const { return this->itineraryStatus_ != nullptr;};
    void deleteItineraryStatus() { this->itineraryStatus_ = nullptr;};
    inline int32_t itineraryStatus() const { DARABONBA_PTR_GET_DEFAULT(itineraryStatus_, 0) };
    inline ElectronicItineraryGetApplyResultResponseBodyModuleApplyTicketList& setItineraryStatus(int32_t itineraryStatus) { DARABONBA_PTR_SET_VALUE(itineraryStatus_, itineraryStatus) };


    // remark Field Functions 
    bool hasRemark() const { return this->remark_ != nullptr;};
    void deleteRemark() { this->remark_ = nullptr;};
    inline string remark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
    inline ElectronicItineraryGetApplyResultResponseBodyModuleApplyTicketList& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


    // ticketNo Field Functions 
    bool hasTicketNo() const { return this->ticketNo_ != nullptr;};
    void deleteTicketNo() { this->ticketNo_ = nullptr;};
    inline string ticketNo() const { DARABONBA_PTR_GET_DEFAULT(ticketNo_, "") };
    inline ElectronicItineraryGetApplyResultResponseBodyModuleApplyTicketList& setTicketNo(string ticketNo) { DARABONBA_PTR_SET_VALUE(ticketNo_, ticketNo) };


  protected:
    std::shared_ptr<int32_t> failedCode_ = nullptr;
    std::shared_ptr<string> failedReason_ = nullptr;
    std::shared_ptr<int32_t> itineraryStatus_ = nullptr;
    std::shared_ptr<string> remark_ = nullptr;
    std::shared_ptr<string> ticketNo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
