// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETUSERBUYSTATUSRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETUSERBUYSTATUSRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Green20220926
{
namespace Models
{
  class GetUserBuyStatusResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetUserBuyStatusResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(Bid, bid_);
      DARABONBA_PTR_TO_JSON(Buy, buy_);
      DARABONBA_PTR_TO_JSON(Indebt, indebt_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
    };
    friend void from_json(const Darabonba::Json& j, GetUserBuyStatusResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(Bid, bid_);
      DARABONBA_PTR_FROM_JSON(Buy, buy_);
      DARABONBA_PTR_FROM_JSON(Indebt, indebt_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
    };
    GetUserBuyStatusResponseBodyData() = default ;
    GetUserBuyStatusResponseBodyData(const GetUserBuyStatusResponseBodyData &) = default ;
    GetUserBuyStatusResponseBodyData(GetUserBuyStatusResponseBodyData &&) = default ;
    GetUserBuyStatusResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetUserBuyStatusResponseBodyData() = default ;
    GetUserBuyStatusResponseBodyData& operator=(const GetUserBuyStatusResponseBodyData &) = default ;
    GetUserBuyStatusResponseBodyData& operator=(GetUserBuyStatusResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bid_ == nullptr
        && return this->buy_ == nullptr && return this->indebt_ == nullptr && return this->instanceId_ == nullptr && return this->tag_ == nullptr; };
    // bid Field Functions 
    bool hasBid() const { return this->bid_ != nullptr;};
    void deleteBid() { this->bid_ = nullptr;};
    inline int64_t bid() const { DARABONBA_PTR_GET_DEFAULT(bid_, 0L) };
    inline GetUserBuyStatusResponseBodyData& setBid(int64_t bid) { DARABONBA_PTR_SET_VALUE(bid_, bid) };


    // buy Field Functions 
    bool hasBuy() const { return this->buy_ != nullptr;};
    void deleteBuy() { this->buy_ = nullptr;};
    inline bool buy() const { DARABONBA_PTR_GET_DEFAULT(buy_, false) };
    inline GetUserBuyStatusResponseBodyData& setBuy(bool buy) { DARABONBA_PTR_SET_VALUE(buy_, buy) };


    // indebt Field Functions 
    bool hasIndebt() const { return this->indebt_ != nullptr;};
    void deleteIndebt() { this->indebt_ = nullptr;};
    inline bool indebt() const { DARABONBA_PTR_GET_DEFAULT(indebt_, false) };
    inline GetUserBuyStatusResponseBodyData& setIndebt(bool indebt) { DARABONBA_PTR_SET_VALUE(indebt_, indebt) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline GetUserBuyStatusResponseBodyData& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline string tag() const { DARABONBA_PTR_GET_DEFAULT(tag_, "") };
    inline GetUserBuyStatusResponseBodyData& setTag(string tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };


  protected:
    // Bid.
    std::shared_ptr<int64_t> bid_ = nullptr;
    // Indicates whether the product has been activated on Alibaba Cloud.
    std::shared_ptr<bool> buy_ = nullptr;
    // Indicates whether there is an outstanding payment.
    std::shared_ptr<bool> indebt_ = nullptr;
    std::shared_ptr<string> instanceId_ = nullptr;
    // Tag.
    std::shared_ptr<string> tag_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Green20220926
#endif
