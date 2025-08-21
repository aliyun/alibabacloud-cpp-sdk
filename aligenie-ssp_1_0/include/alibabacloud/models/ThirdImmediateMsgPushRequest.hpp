// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_THIRDIMMEDIATEMSGPUSHREQUEST_HPP_
#define ALIBABACLOUD_MODELS_THIRDIMMEDIATEMSGPUSHREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliGeniessp_1_0
{
namespace Models
{
  class ThirdImmediateMsgPushRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ThirdImmediateMsgPushRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BizType, bizType_);
      DARABONBA_PTR_TO_JSON(ChangeDetail, changeDetail_);
      DARABONBA_PTR_TO_JSON(OrderId, orderId_);
      DARABONBA_PTR_TO_JSON(PsgIds, psgIds_);
      DARABONBA_PTR_TO_JSON(TrafficChangeType, trafficChangeType_);
      DARABONBA_PTR_TO_JSON(TrafficChangeTypeDesc, trafficChangeTypeDesc_);
      DARABONBA_PTR_TO_JSON(TrafficJourneyIds, trafficJourneyIds_);
      DARABONBA_PTR_TO_JSON(TrafficSubOrderIds, trafficSubOrderIds_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
    };
    friend void from_json(const Darabonba::Json& j, ThirdImmediateMsgPushRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BizType, bizType_);
      DARABONBA_PTR_FROM_JSON(ChangeDetail, changeDetail_);
      DARABONBA_PTR_FROM_JSON(OrderId, orderId_);
      DARABONBA_PTR_FROM_JSON(PsgIds, psgIds_);
      DARABONBA_PTR_FROM_JSON(TrafficChangeType, trafficChangeType_);
      DARABONBA_PTR_FROM_JSON(TrafficChangeTypeDesc, trafficChangeTypeDesc_);
      DARABONBA_PTR_FROM_JSON(TrafficJourneyIds, trafficJourneyIds_);
      DARABONBA_PTR_FROM_JSON(TrafficSubOrderIds, trafficSubOrderIds_);
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
    };
    ThirdImmediateMsgPushRequest() = default ;
    ThirdImmediateMsgPushRequest(const ThirdImmediateMsgPushRequest &) = default ;
    ThirdImmediateMsgPushRequest(ThirdImmediateMsgPushRequest &&) = default ;
    ThirdImmediateMsgPushRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ThirdImmediateMsgPushRequest() = default ;
    ThirdImmediateMsgPushRequest& operator=(const ThirdImmediateMsgPushRequest &) = default ;
    ThirdImmediateMsgPushRequest& operator=(ThirdImmediateMsgPushRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->bizType_ != nullptr
        && this->changeDetail_ != nullptr && this->orderId_ != nullptr && this->psgIds_ != nullptr && this->trafficChangeType_ != nullptr && this->trafficChangeTypeDesc_ != nullptr
        && this->trafficJourneyIds_ != nullptr && this->trafficSubOrderIds_ != nullptr && this->userId_ != nullptr; };
    // bizType Field Functions 
    bool hasBizType() const { return this->bizType_ != nullptr;};
    void deleteBizType() { this->bizType_ = nullptr;};
    inline string bizType() const { DARABONBA_PTR_GET_DEFAULT(bizType_, "") };
    inline ThirdImmediateMsgPushRequest& setBizType(string bizType) { DARABONBA_PTR_SET_VALUE(bizType_, bizType) };


    // changeDetail Field Functions 
    bool hasChangeDetail() const { return this->changeDetail_ != nullptr;};
    void deleteChangeDetail() { this->changeDetail_ = nullptr;};
    inline string changeDetail() const { DARABONBA_PTR_GET_DEFAULT(changeDetail_, "") };
    inline ThirdImmediateMsgPushRequest& setChangeDetail(string changeDetail) { DARABONBA_PTR_SET_VALUE(changeDetail_, changeDetail) };


    // orderId Field Functions 
    bool hasOrderId() const { return this->orderId_ != nullptr;};
    void deleteOrderId() { this->orderId_ = nullptr;};
    inline string orderId() const { DARABONBA_PTR_GET_DEFAULT(orderId_, "") };
    inline ThirdImmediateMsgPushRequest& setOrderId(string orderId) { DARABONBA_PTR_SET_VALUE(orderId_, orderId) };


    // psgIds Field Functions 
    bool hasPsgIds() const { return this->psgIds_ != nullptr;};
    void deletePsgIds() { this->psgIds_ = nullptr;};
    inline string psgIds() const { DARABONBA_PTR_GET_DEFAULT(psgIds_, "") };
    inline ThirdImmediateMsgPushRequest& setPsgIds(string psgIds) { DARABONBA_PTR_SET_VALUE(psgIds_, psgIds) };


    // trafficChangeType Field Functions 
    bool hasTrafficChangeType() const { return this->trafficChangeType_ != nullptr;};
    void deleteTrafficChangeType() { this->trafficChangeType_ = nullptr;};
    inline string trafficChangeType() const { DARABONBA_PTR_GET_DEFAULT(trafficChangeType_, "") };
    inline ThirdImmediateMsgPushRequest& setTrafficChangeType(string trafficChangeType) { DARABONBA_PTR_SET_VALUE(trafficChangeType_, trafficChangeType) };


    // trafficChangeTypeDesc Field Functions 
    bool hasTrafficChangeTypeDesc() const { return this->trafficChangeTypeDesc_ != nullptr;};
    void deleteTrafficChangeTypeDesc() { this->trafficChangeTypeDesc_ = nullptr;};
    inline string trafficChangeTypeDesc() const { DARABONBA_PTR_GET_DEFAULT(trafficChangeTypeDesc_, "") };
    inline ThirdImmediateMsgPushRequest& setTrafficChangeTypeDesc(string trafficChangeTypeDesc) { DARABONBA_PTR_SET_VALUE(trafficChangeTypeDesc_, trafficChangeTypeDesc) };


    // trafficJourneyIds Field Functions 
    bool hasTrafficJourneyIds() const { return this->trafficJourneyIds_ != nullptr;};
    void deleteTrafficJourneyIds() { this->trafficJourneyIds_ = nullptr;};
    inline string trafficJourneyIds() const { DARABONBA_PTR_GET_DEFAULT(trafficJourneyIds_, "") };
    inline ThirdImmediateMsgPushRequest& setTrafficJourneyIds(string trafficJourneyIds) { DARABONBA_PTR_SET_VALUE(trafficJourneyIds_, trafficJourneyIds) };


    // trafficSubOrderIds Field Functions 
    bool hasTrafficSubOrderIds() const { return this->trafficSubOrderIds_ != nullptr;};
    void deleteTrafficSubOrderIds() { this->trafficSubOrderIds_ = nullptr;};
    inline string trafficSubOrderIds() const { DARABONBA_PTR_GET_DEFAULT(trafficSubOrderIds_, "") };
    inline ThirdImmediateMsgPushRequest& setTrafficSubOrderIds(string trafficSubOrderIds) { DARABONBA_PTR_SET_VALUE(trafficSubOrderIds_, trafficSubOrderIds) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline ThirdImmediateMsgPushRequest& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


  protected:
    std::shared_ptr<string> bizType_ = nullptr;
    std::shared_ptr<string> changeDetail_ = nullptr;
    std::shared_ptr<string> orderId_ = nullptr;
    std::shared_ptr<string> psgIds_ = nullptr;
    std::shared_ptr<string> trafficChangeType_ = nullptr;
    std::shared_ptr<string> trafficChangeTypeDesc_ = nullptr;
    std::shared_ptr<string> trafficJourneyIds_ = nullptr;
    std::shared_ptr<string> trafficSubOrderIds_ = nullptr;
    std::shared_ptr<string> userId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGeniessp_1_0
#endif
