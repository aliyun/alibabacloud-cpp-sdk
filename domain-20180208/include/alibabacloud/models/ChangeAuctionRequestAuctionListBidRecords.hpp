// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHANGEAUCTIONREQUESTAUCTIONLISTBIDRECORDS_HPP_
#define ALIBABACLOUD_MODELS_CHANGEAUCTIONREQUESTAUCTIONLISTBIDRECORDS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Domain20180208
{
namespace Models
{
  class ChangeAuctionRequestAuctionListBidRecords : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ChangeAuctionRequestAuctionListBidRecords& obj) { 
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(Price, price_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
    };
    friend void from_json(const Darabonba::Json& j, ChangeAuctionRequestAuctionListBidRecords& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(Price, price_);
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
    };
    ChangeAuctionRequestAuctionListBidRecords() = default ;
    ChangeAuctionRequestAuctionListBidRecords(const ChangeAuctionRequestAuctionListBidRecords &) = default ;
    ChangeAuctionRequestAuctionListBidRecords(ChangeAuctionRequestAuctionListBidRecords &&) = default ;
    ChangeAuctionRequestAuctionListBidRecords(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ChangeAuctionRequestAuctionListBidRecords() = default ;
    ChangeAuctionRequestAuctionListBidRecords& operator=(const ChangeAuctionRequestAuctionListBidRecords &) = default ;
    ChangeAuctionRequestAuctionListBidRecords& operator=(ChangeAuctionRequestAuctionListBidRecords &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->createTime_ == nullptr
        && return this->price_ == nullptr && return this->userId_ == nullptr; };
    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline ChangeAuctionRequestAuctionListBidRecords& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // price Field Functions 
    bool hasPrice() const { return this->price_ != nullptr;};
    void deletePrice() { this->price_ = nullptr;};
    inline float price() const { DARABONBA_PTR_GET_DEFAULT(price_, 0.0) };
    inline ChangeAuctionRequestAuctionListBidRecords& setPrice(float price) { DARABONBA_PTR_SET_VALUE(price_, price) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline ChangeAuctionRequestAuctionListBidRecords& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> createTime_ = nullptr;
    // This parameter is required.
    std::shared_ptr<float> price_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> userId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Domain20180208
#endif
