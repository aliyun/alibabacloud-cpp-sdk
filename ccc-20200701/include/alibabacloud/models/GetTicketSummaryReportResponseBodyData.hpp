// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTICKETSUMMARYREPORTRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETTICKETSUMMARYREPORTRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CCC20200701
{
namespace Models
{
  class GetTicketSummaryReportResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetTicketSummaryReportResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(TicketsAssigned, ticketsAssigned_);
      DARABONBA_PTR_TO_JSON(TicketsCreated, ticketsCreated_);
      DARABONBA_PTR_TO_JSON(TicketsParticipated, ticketsParticipated_);
    };
    friend void from_json(const Darabonba::Json& j, GetTicketSummaryReportResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(TicketsAssigned, ticketsAssigned_);
      DARABONBA_PTR_FROM_JSON(TicketsCreated, ticketsCreated_);
      DARABONBA_PTR_FROM_JSON(TicketsParticipated, ticketsParticipated_);
    };
    GetTicketSummaryReportResponseBodyData() = default ;
    GetTicketSummaryReportResponseBodyData(const GetTicketSummaryReportResponseBodyData &) = default ;
    GetTicketSummaryReportResponseBodyData(GetTicketSummaryReportResponseBodyData &&) = default ;
    GetTicketSummaryReportResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetTicketSummaryReportResponseBodyData() = default ;
    GetTicketSummaryReportResponseBodyData& operator=(const GetTicketSummaryReportResponseBodyData &) = default ;
    GetTicketSummaryReportResponseBodyData& operator=(GetTicketSummaryReportResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->ticketsAssigned_ == nullptr
        && return this->ticketsCreated_ == nullptr && return this->ticketsParticipated_ == nullptr; };
    // ticketsAssigned Field Functions 
    bool hasTicketsAssigned() const { return this->ticketsAssigned_ != nullptr;};
    void deleteTicketsAssigned() { this->ticketsAssigned_ = nullptr;};
    inline string ticketsAssigned() const { DARABONBA_PTR_GET_DEFAULT(ticketsAssigned_, "") };
    inline GetTicketSummaryReportResponseBodyData& setTicketsAssigned(string ticketsAssigned) { DARABONBA_PTR_SET_VALUE(ticketsAssigned_, ticketsAssigned) };


    // ticketsCreated Field Functions 
    bool hasTicketsCreated() const { return this->ticketsCreated_ != nullptr;};
    void deleteTicketsCreated() { this->ticketsCreated_ = nullptr;};
    inline string ticketsCreated() const { DARABONBA_PTR_GET_DEFAULT(ticketsCreated_, "") };
    inline GetTicketSummaryReportResponseBodyData& setTicketsCreated(string ticketsCreated) { DARABONBA_PTR_SET_VALUE(ticketsCreated_, ticketsCreated) };


    // ticketsParticipated Field Functions 
    bool hasTicketsParticipated() const { return this->ticketsParticipated_ != nullptr;};
    void deleteTicketsParticipated() { this->ticketsParticipated_ = nullptr;};
    inline string ticketsParticipated() const { DARABONBA_PTR_GET_DEFAULT(ticketsParticipated_, "") };
    inline GetTicketSummaryReportResponseBodyData& setTicketsParticipated(string ticketsParticipated) { DARABONBA_PTR_SET_VALUE(ticketsParticipated_, ticketsParticipated) };


  protected:
    std::shared_ptr<string> ticketsAssigned_ = nullptr;
    std::shared_ptr<string> ticketsCreated_ = nullptr;
    std::shared_ptr<string> ticketsParticipated_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CCC20200701
#endif
