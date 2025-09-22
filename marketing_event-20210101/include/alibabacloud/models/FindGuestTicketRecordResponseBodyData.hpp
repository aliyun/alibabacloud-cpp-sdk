// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_FINDGUESTTICKETRECORDRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_FINDGUESTTICKETRECORDRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/FindGuestTicketRecordResponseBodyDataChannelLevelInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MarketingEvent20210101
{
namespace Models
{
  class FindGuestTicketRecordResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const FindGuestTicketRecordResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(ChannelLevelInfo, channelLevelInfo_);
      DARABONBA_PTR_TO_JSON(CompanyName, companyName_);
      DARABONBA_PTR_TO_JSON(EquityDates, equityDates_);
      DARABONBA_PTR_TO_JSON(HealthCommitmentStatus, healthCommitmentStatus_);
      DARABONBA_PTR_TO_JSON(IdNumber, idNumber_);
      DARABONBA_PTR_TO_JSON(IdType, idType_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(TicketCode, ticketCode_);
      DARABONBA_PTR_TO_JSON(TicketName, ticketName_);
      DARABONBA_PTR_TO_JSON(TicketReceiveDates, ticketReceiveDates_);
      DARABONBA_PTR_TO_JSON(TicketType, ticketType_);
    };
    friend void from_json(const Darabonba::Json& j, FindGuestTicketRecordResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(ChannelLevelInfo, channelLevelInfo_);
      DARABONBA_PTR_FROM_JSON(CompanyName, companyName_);
      DARABONBA_PTR_FROM_JSON(EquityDates, equityDates_);
      DARABONBA_PTR_FROM_JSON(HealthCommitmentStatus, healthCommitmentStatus_);
      DARABONBA_PTR_FROM_JSON(IdNumber, idNumber_);
      DARABONBA_PTR_FROM_JSON(IdType, idType_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(TicketCode, ticketCode_);
      DARABONBA_PTR_FROM_JSON(TicketName, ticketName_);
      DARABONBA_PTR_FROM_JSON(TicketReceiveDates, ticketReceiveDates_);
      DARABONBA_PTR_FROM_JSON(TicketType, ticketType_);
    };
    FindGuestTicketRecordResponseBodyData() = default ;
    FindGuestTicketRecordResponseBodyData(const FindGuestTicketRecordResponseBodyData &) = default ;
    FindGuestTicketRecordResponseBodyData(FindGuestTicketRecordResponseBodyData &&) = default ;
    FindGuestTicketRecordResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~FindGuestTicketRecordResponseBodyData() = default ;
    FindGuestTicketRecordResponseBodyData& operator=(const FindGuestTicketRecordResponseBodyData &) = default ;
    FindGuestTicketRecordResponseBodyData& operator=(FindGuestTicketRecordResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->channelLevelInfo_ != nullptr
        && this->companyName_ != nullptr && this->equityDates_ != nullptr && this->healthCommitmentStatus_ != nullptr && this->idNumber_ != nullptr && this->idType_ != nullptr
        && this->name_ != nullptr && this->status_ != nullptr && this->ticketCode_ != nullptr && this->ticketName_ != nullptr && this->ticketReceiveDates_ != nullptr
        && this->ticketType_ != nullptr; };
    // channelLevelInfo Field Functions 
    bool hasChannelLevelInfo() const { return this->channelLevelInfo_ != nullptr;};
    void deleteChannelLevelInfo() { this->channelLevelInfo_ = nullptr;};
    inline const Models::FindGuestTicketRecordResponseBodyDataChannelLevelInfo & channelLevelInfo() const { DARABONBA_PTR_GET_CONST(channelLevelInfo_, Models::FindGuestTicketRecordResponseBodyDataChannelLevelInfo) };
    inline Models::FindGuestTicketRecordResponseBodyDataChannelLevelInfo channelLevelInfo() { DARABONBA_PTR_GET(channelLevelInfo_, Models::FindGuestTicketRecordResponseBodyDataChannelLevelInfo) };
    inline FindGuestTicketRecordResponseBodyData& setChannelLevelInfo(const Models::FindGuestTicketRecordResponseBodyDataChannelLevelInfo & channelLevelInfo) { DARABONBA_PTR_SET_VALUE(channelLevelInfo_, channelLevelInfo) };
    inline FindGuestTicketRecordResponseBodyData& setChannelLevelInfo(Models::FindGuestTicketRecordResponseBodyDataChannelLevelInfo && channelLevelInfo) { DARABONBA_PTR_SET_RVALUE(channelLevelInfo_, channelLevelInfo) };


    // companyName Field Functions 
    bool hasCompanyName() const { return this->companyName_ != nullptr;};
    void deleteCompanyName() { this->companyName_ = nullptr;};
    inline string companyName() const { DARABONBA_PTR_GET_DEFAULT(companyName_, "") };
    inline FindGuestTicketRecordResponseBodyData& setCompanyName(string companyName) { DARABONBA_PTR_SET_VALUE(companyName_, companyName) };


    // equityDates Field Functions 
    bool hasEquityDates() const { return this->equityDates_ != nullptr;};
    void deleteEquityDates() { this->equityDates_ = nullptr;};
    inline string equityDates() const { DARABONBA_PTR_GET_DEFAULT(equityDates_, "") };
    inline FindGuestTicketRecordResponseBodyData& setEquityDates(string equityDates) { DARABONBA_PTR_SET_VALUE(equityDates_, equityDates) };


    // healthCommitmentStatus Field Functions 
    bool hasHealthCommitmentStatus() const { return this->healthCommitmentStatus_ != nullptr;};
    void deleteHealthCommitmentStatus() { this->healthCommitmentStatus_ = nullptr;};
    inline int32_t healthCommitmentStatus() const { DARABONBA_PTR_GET_DEFAULT(healthCommitmentStatus_, 0) };
    inline FindGuestTicketRecordResponseBodyData& setHealthCommitmentStatus(int32_t healthCommitmentStatus) { DARABONBA_PTR_SET_VALUE(healthCommitmentStatus_, healthCommitmentStatus) };


    // idNumber Field Functions 
    bool hasIdNumber() const { return this->idNumber_ != nullptr;};
    void deleteIdNumber() { this->idNumber_ = nullptr;};
    inline string idNumber() const { DARABONBA_PTR_GET_DEFAULT(idNumber_, "") };
    inline FindGuestTicketRecordResponseBodyData& setIdNumber(string idNumber) { DARABONBA_PTR_SET_VALUE(idNumber_, idNumber) };


    // idType Field Functions 
    bool hasIdType() const { return this->idType_ != nullptr;};
    void deleteIdType() { this->idType_ = nullptr;};
    inline string idType() const { DARABONBA_PTR_GET_DEFAULT(idType_, "") };
    inline FindGuestTicketRecordResponseBodyData& setIdType(string idType) { DARABONBA_PTR_SET_VALUE(idType_, idType) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline FindGuestTicketRecordResponseBodyData& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t status() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline FindGuestTicketRecordResponseBodyData& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // ticketCode Field Functions 
    bool hasTicketCode() const { return this->ticketCode_ != nullptr;};
    void deleteTicketCode() { this->ticketCode_ = nullptr;};
    inline string ticketCode() const { DARABONBA_PTR_GET_DEFAULT(ticketCode_, "") };
    inline FindGuestTicketRecordResponseBodyData& setTicketCode(string ticketCode) { DARABONBA_PTR_SET_VALUE(ticketCode_, ticketCode) };


    // ticketName Field Functions 
    bool hasTicketName() const { return this->ticketName_ != nullptr;};
    void deleteTicketName() { this->ticketName_ = nullptr;};
    inline string ticketName() const { DARABONBA_PTR_GET_DEFAULT(ticketName_, "") };
    inline FindGuestTicketRecordResponseBodyData& setTicketName(string ticketName) { DARABONBA_PTR_SET_VALUE(ticketName_, ticketName) };


    // ticketReceiveDates Field Functions 
    bool hasTicketReceiveDates() const { return this->ticketReceiveDates_ != nullptr;};
    void deleteTicketReceiveDates() { this->ticketReceiveDates_ = nullptr;};
    inline string ticketReceiveDates() const { DARABONBA_PTR_GET_DEFAULT(ticketReceiveDates_, "") };
    inline FindGuestTicketRecordResponseBodyData& setTicketReceiveDates(string ticketReceiveDates) { DARABONBA_PTR_SET_VALUE(ticketReceiveDates_, ticketReceiveDates) };


    // ticketType Field Functions 
    bool hasTicketType() const { return this->ticketType_ != nullptr;};
    void deleteTicketType() { this->ticketType_ = nullptr;};
    inline string ticketType() const { DARABONBA_PTR_GET_DEFAULT(ticketType_, "") };
    inline FindGuestTicketRecordResponseBodyData& setTicketType(string ticketType) { DARABONBA_PTR_SET_VALUE(ticketType_, ticketType) };


  protected:
    std::shared_ptr<Models::FindGuestTicketRecordResponseBodyDataChannelLevelInfo> channelLevelInfo_ = nullptr;
    std::shared_ptr<string> companyName_ = nullptr;
    std::shared_ptr<string> equityDates_ = nullptr;
    std::shared_ptr<int32_t> healthCommitmentStatus_ = nullptr;
    std::shared_ptr<string> idNumber_ = nullptr;
    std::shared_ptr<string> idType_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<int32_t> status_ = nullptr;
    std::shared_ptr<string> ticketCode_ = nullptr;
    std::shared_ptr<string> ticketName_ = nullptr;
    std::shared_ptr<string> ticketReceiveDates_ = nullptr;
    std::shared_ptr<string> ticketType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MarketingEvent20210101
#endif
