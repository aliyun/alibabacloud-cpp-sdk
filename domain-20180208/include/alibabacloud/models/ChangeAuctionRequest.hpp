// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHANGEAUCTIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CHANGEAUCTIONREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Domain20180208
{
namespace Models
{
  class ChangeAuctionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ChangeAuctionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AuctionList, auctionList_);
    };
    friend void from_json(const Darabonba::Json& j, ChangeAuctionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AuctionList, auctionList_);
    };
    ChangeAuctionRequest() = default ;
    ChangeAuctionRequest(const ChangeAuctionRequest &) = default ;
    ChangeAuctionRequest(ChangeAuctionRequest &&) = default ;
    ChangeAuctionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ChangeAuctionRequest() = default ;
    ChangeAuctionRequest& operator=(const ChangeAuctionRequest &) = default ;
    ChangeAuctionRequest& operator=(ChangeAuctionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class AuctionList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AuctionList& obj) { 
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
      friend void from_json(const Darabonba::Json& j, AuctionList& obj) { 
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
      AuctionList() = default ;
      AuctionList(const AuctionList &) = default ;
      AuctionList(AuctionList &&) = default ;
      AuctionList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AuctionList() = default ;
      AuctionList& operator=(const AuctionList &) = default ;
      AuctionList& operator=(AuctionList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class BidRecords : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const BidRecords& obj) { 
          DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
          DARABONBA_PTR_TO_JSON(Price, price_);
          DARABONBA_PTR_TO_JSON(UserId, userId_);
        };
        friend void from_json(const Darabonba::Json& j, BidRecords& obj) { 
          DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
          DARABONBA_PTR_FROM_JSON(Price, price_);
          DARABONBA_PTR_FROM_JSON(UserId, userId_);
        };
        BidRecords() = default ;
        BidRecords(const BidRecords &) = default ;
        BidRecords(BidRecords &&) = default ;
        BidRecords(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~BidRecords() = default ;
        BidRecords& operator=(const BidRecords &) = default ;
        BidRecords& operator=(BidRecords &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->createTime_ == nullptr
        && this->price_ == nullptr && this->userId_ == nullptr; };
        // createTime Field Functions 
        bool hasCreateTime() const { return this->createTime_ != nullptr;};
        void deleteCreateTime() { this->createTime_ = nullptr;};
        inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
        inline BidRecords& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


        // price Field Functions 
        bool hasPrice() const { return this->price_ != nullptr;};
        void deletePrice() { this->price_ = nullptr;};
        inline float getPrice() const { DARABONBA_PTR_GET_DEFAULT(price_, 0.0) };
        inline BidRecords& setPrice(float price) { DARABONBA_PTR_SET_VALUE(price_, price) };


        // userId Field Functions 
        bool hasUserId() const { return this->userId_ != nullptr;};
        void deleteUserId() { this->userId_ = nullptr;};
        inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
        inline BidRecords& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


      protected:
        // This parameter is required.
        shared_ptr<string> createTime_ {};
        // This parameter is required.
        shared_ptr<float> price_ {};
        // This parameter is required.
        shared_ptr<string> userId_ {};
      };

      virtual bool empty() const override { return this->bidRecords_ == nullptr
        && this->domainName_ == nullptr && this->endTime_ == nullptr && this->isReserve_ == nullptr && this->reservePrice_ == nullptr && this->reserveRange_ == nullptr
        && this->status_ == nullptr && this->timeLeft_ == nullptr && this->winner_ == nullptr && this->winnerPrice_ == nullptr; };
      // bidRecords Field Functions 
      bool hasBidRecords() const { return this->bidRecords_ != nullptr;};
      void deleteBidRecords() { this->bidRecords_ = nullptr;};
      inline const vector<AuctionList::BidRecords> & getBidRecords() const { DARABONBA_PTR_GET_CONST(bidRecords_, vector<AuctionList::BidRecords>) };
      inline vector<AuctionList::BidRecords> getBidRecords() { DARABONBA_PTR_GET(bidRecords_, vector<AuctionList::BidRecords>) };
      inline AuctionList& setBidRecords(const vector<AuctionList::BidRecords> & bidRecords) { DARABONBA_PTR_SET_VALUE(bidRecords_, bidRecords) };
      inline AuctionList& setBidRecords(vector<AuctionList::BidRecords> && bidRecords) { DARABONBA_PTR_SET_RVALUE(bidRecords_, bidRecords) };


      // domainName Field Functions 
      bool hasDomainName() const { return this->domainName_ != nullptr;};
      void deleteDomainName() { this->domainName_ = nullptr;};
      inline string getDomainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
      inline AuctionList& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


      // endTime Field Functions 
      bool hasEndTime() const { return this->endTime_ != nullptr;};
      void deleteEndTime() { this->endTime_ = nullptr;};
      inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
      inline AuctionList& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


      // isReserve Field Functions 
      bool hasIsReserve() const { return this->isReserve_ != nullptr;};
      void deleteIsReserve() { this->isReserve_ = nullptr;};
      inline int32_t getIsReserve() const { DARABONBA_PTR_GET_DEFAULT(isReserve_, 0) };
      inline AuctionList& setIsReserve(int32_t isReserve) { DARABONBA_PTR_SET_VALUE(isReserve_, isReserve) };


      // reservePrice Field Functions 
      bool hasReservePrice() const { return this->reservePrice_ != nullptr;};
      void deleteReservePrice() { this->reservePrice_ = nullptr;};
      inline float getReservePrice() const { DARABONBA_PTR_GET_DEFAULT(reservePrice_, 0.0) };
      inline AuctionList& setReservePrice(float reservePrice) { DARABONBA_PTR_SET_VALUE(reservePrice_, reservePrice) };


      // reserveRange Field Functions 
      bool hasReserveRange() const { return this->reserveRange_ != nullptr;};
      void deleteReserveRange() { this->reserveRange_ = nullptr;};
      inline string getReserveRange() const { DARABONBA_PTR_GET_DEFAULT(reserveRange_, "") };
      inline AuctionList& setReserveRange(string reserveRange) { DARABONBA_PTR_SET_VALUE(reserveRange_, reserveRange) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline AuctionList& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // timeLeft Field Functions 
      bool hasTimeLeft() const { return this->timeLeft_ != nullptr;};
      void deleteTimeLeft() { this->timeLeft_ = nullptr;};
      inline int64_t getTimeLeft() const { DARABONBA_PTR_GET_DEFAULT(timeLeft_, 0L) };
      inline AuctionList& setTimeLeft(int64_t timeLeft) { DARABONBA_PTR_SET_VALUE(timeLeft_, timeLeft) };


      // winner Field Functions 
      bool hasWinner() const { return this->winner_ != nullptr;};
      void deleteWinner() { this->winner_ = nullptr;};
      inline string getWinner() const { DARABONBA_PTR_GET_DEFAULT(winner_, "") };
      inline AuctionList& setWinner(string winner) { DARABONBA_PTR_SET_VALUE(winner_, winner) };


      // winnerPrice Field Functions 
      bool hasWinnerPrice() const { return this->winnerPrice_ != nullptr;};
      void deleteWinnerPrice() { this->winnerPrice_ = nullptr;};
      inline float getWinnerPrice() const { DARABONBA_PTR_GET_DEFAULT(winnerPrice_, 0.0) };
      inline AuctionList& setWinnerPrice(float winnerPrice) { DARABONBA_PTR_SET_VALUE(winnerPrice_, winnerPrice) };


    protected:
      shared_ptr<vector<AuctionList::BidRecords>> bidRecords_ {};
      // This parameter is required.
      shared_ptr<string> domainName_ {};
      // This parameter is required.
      shared_ptr<string> endTime_ {};
      shared_ptr<int32_t> isReserve_ {};
      shared_ptr<float> reservePrice_ {};
      shared_ptr<string> reserveRange_ {};
      shared_ptr<string> status_ {};
      shared_ptr<int64_t> timeLeft_ {};
      // This parameter is required.
      shared_ptr<string> winner_ {};
      // This parameter is required.
      shared_ptr<float> winnerPrice_ {};
    };

    virtual bool empty() const override { return this->auctionList_ == nullptr; };
    // auctionList Field Functions 
    bool hasAuctionList() const { return this->auctionList_ != nullptr;};
    void deleteAuctionList() { this->auctionList_ = nullptr;};
    inline const vector<ChangeAuctionRequest::AuctionList> & getAuctionList() const { DARABONBA_PTR_GET_CONST(auctionList_, vector<ChangeAuctionRequest::AuctionList>) };
    inline vector<ChangeAuctionRequest::AuctionList> getAuctionList() { DARABONBA_PTR_GET(auctionList_, vector<ChangeAuctionRequest::AuctionList>) };
    inline ChangeAuctionRequest& setAuctionList(const vector<ChangeAuctionRequest::AuctionList> & auctionList) { DARABONBA_PTR_SET_VALUE(auctionList_, auctionList) };
    inline ChangeAuctionRequest& setAuctionList(vector<ChangeAuctionRequest::AuctionList> && auctionList) { DARABONBA_PTR_SET_RVALUE(auctionList_, auctionList) };


  protected:
    shared_ptr<vector<ChangeAuctionRequest::AuctionList>> auctionList_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Domain20180208
#endif
