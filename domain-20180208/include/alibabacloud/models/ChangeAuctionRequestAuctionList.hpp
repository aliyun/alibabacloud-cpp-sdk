// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHANGEAUCTIONREQUESTAUCTIONLIST_HPP_
#define ALIBABACLOUD_MODELS_CHANGEAUCTIONREQUESTAUCTIONLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ChangeAuctionRequestAuctionListBidRecords.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Domain20180208
{
namespace Models
{
  class ChangeAuctionRequestAuctionList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ChangeAuctionRequestAuctionList& obj) { 
      DARABONBA_PTR_TO_JSON(BidRecords, bidRecords_);
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(IsReserve, isReserve_);
      DARABONBA_PTR_TO_JSON(ReservePrice, reservePrice_);
      DARABONBA_PTR_TO_JSON(ReserveRange, reserveRange_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(TimeLeft, timeLeft_);
      DARABONBA_PTR_TO_JSON(Winner, winner_);
      DARABONBA_PTR_TO_JSON(WinnerPrice, winnerPrice_);
    };
    friend void from_json(const Darabonba::Json& j, ChangeAuctionRequestAuctionList& obj) { 
      DARABONBA_PTR_FROM_JSON(BidRecords, bidRecords_);
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(IsReserve, isReserve_);
      DARABONBA_PTR_FROM_JSON(ReservePrice, reservePrice_);
      DARABONBA_PTR_FROM_JSON(ReserveRange, reserveRange_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(TimeLeft, timeLeft_);
      DARABONBA_PTR_FROM_JSON(Winner, winner_);
      DARABONBA_PTR_FROM_JSON(WinnerPrice, winnerPrice_);
    };
    ChangeAuctionRequestAuctionList() = default ;
    ChangeAuctionRequestAuctionList(const ChangeAuctionRequestAuctionList &) = default ;
    ChangeAuctionRequestAuctionList(ChangeAuctionRequestAuctionList &&) = default ;
    ChangeAuctionRequestAuctionList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ChangeAuctionRequestAuctionList() = default ;
    ChangeAuctionRequestAuctionList& operator=(const ChangeAuctionRequestAuctionList &) = default ;
    ChangeAuctionRequestAuctionList& operator=(ChangeAuctionRequestAuctionList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bidRecords_ == nullptr
        && return this->domainName_ == nullptr && return this->endTime_ == nullptr && return this->isReserve_ == nullptr && return this->reservePrice_ == nullptr && return this->reserveRange_ == nullptr
        && return this->status_ == nullptr && return this->timeLeft_ == nullptr && return this->winner_ == nullptr && return this->winnerPrice_ == nullptr; };
    // bidRecords Field Functions 
    bool hasBidRecords() const { return this->bidRecords_ != nullptr;};
    void deleteBidRecords() { this->bidRecords_ = nullptr;};
    inline const vector<Models::ChangeAuctionRequestAuctionListBidRecords> & bidRecords() const { DARABONBA_PTR_GET_CONST(bidRecords_, vector<Models::ChangeAuctionRequestAuctionListBidRecords>) };
    inline vector<Models::ChangeAuctionRequestAuctionListBidRecords> bidRecords() { DARABONBA_PTR_GET(bidRecords_, vector<Models::ChangeAuctionRequestAuctionListBidRecords>) };
    inline ChangeAuctionRequestAuctionList& setBidRecords(const vector<Models::ChangeAuctionRequestAuctionListBidRecords> & bidRecords) { DARABONBA_PTR_SET_VALUE(bidRecords_, bidRecords) };
    inline ChangeAuctionRequestAuctionList& setBidRecords(vector<Models::ChangeAuctionRequestAuctionListBidRecords> && bidRecords) { DARABONBA_PTR_SET_RVALUE(bidRecords_, bidRecords) };


    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string domainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline ChangeAuctionRequestAuctionList& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline ChangeAuctionRequestAuctionList& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // isReserve Field Functions 
    bool hasIsReserve() const { return this->isReserve_ != nullptr;};
    void deleteIsReserve() { this->isReserve_ = nullptr;};
    inline int32_t isReserve() const { DARABONBA_PTR_GET_DEFAULT(isReserve_, 0) };
    inline ChangeAuctionRequestAuctionList& setIsReserve(int32_t isReserve) { DARABONBA_PTR_SET_VALUE(isReserve_, isReserve) };


    // reservePrice Field Functions 
    bool hasReservePrice() const { return this->reservePrice_ != nullptr;};
    void deleteReservePrice() { this->reservePrice_ = nullptr;};
    inline float reservePrice() const { DARABONBA_PTR_GET_DEFAULT(reservePrice_, 0.0) };
    inline ChangeAuctionRequestAuctionList& setReservePrice(float reservePrice) { DARABONBA_PTR_SET_VALUE(reservePrice_, reservePrice) };


    // reserveRange Field Functions 
    bool hasReserveRange() const { return this->reserveRange_ != nullptr;};
    void deleteReserveRange() { this->reserveRange_ = nullptr;};
    inline string reserveRange() const { DARABONBA_PTR_GET_DEFAULT(reserveRange_, "") };
    inline ChangeAuctionRequestAuctionList& setReserveRange(string reserveRange) { DARABONBA_PTR_SET_VALUE(reserveRange_, reserveRange) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ChangeAuctionRequestAuctionList& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // timeLeft Field Functions 
    bool hasTimeLeft() const { return this->timeLeft_ != nullptr;};
    void deleteTimeLeft() { this->timeLeft_ = nullptr;};
    inline int64_t timeLeft() const { DARABONBA_PTR_GET_DEFAULT(timeLeft_, 0L) };
    inline ChangeAuctionRequestAuctionList& setTimeLeft(int64_t timeLeft) { DARABONBA_PTR_SET_VALUE(timeLeft_, timeLeft) };


    // winner Field Functions 
    bool hasWinner() const { return this->winner_ != nullptr;};
    void deleteWinner() { this->winner_ = nullptr;};
    inline string winner() const { DARABONBA_PTR_GET_DEFAULT(winner_, "") };
    inline ChangeAuctionRequestAuctionList& setWinner(string winner) { DARABONBA_PTR_SET_VALUE(winner_, winner) };


    // winnerPrice Field Functions 
    bool hasWinnerPrice() const { return this->winnerPrice_ != nullptr;};
    void deleteWinnerPrice() { this->winnerPrice_ = nullptr;};
    inline float winnerPrice() const { DARABONBA_PTR_GET_DEFAULT(winnerPrice_, 0.0) };
    inline ChangeAuctionRequestAuctionList& setWinnerPrice(float winnerPrice) { DARABONBA_PTR_SET_VALUE(winnerPrice_, winnerPrice) };


  protected:
    std::shared_ptr<vector<Models::ChangeAuctionRequestAuctionListBidRecords>> bidRecords_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> domainName_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> endTime_ = nullptr;
    std::shared_ptr<int32_t> isReserve_ = nullptr;
    std::shared_ptr<float> reservePrice_ = nullptr;
    std::shared_ptr<string> reserveRange_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
    std::shared_ptr<int64_t> timeLeft_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> winner_ = nullptr;
    // This parameter is required.
    std::shared_ptr<float> winnerPrice_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Domain20180208
#endif
