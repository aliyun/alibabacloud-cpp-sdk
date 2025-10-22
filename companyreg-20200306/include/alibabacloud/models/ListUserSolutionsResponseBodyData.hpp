// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTUSERSOLUTIONSRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_LISTUSERSOLUTIONSRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Companyreg20200306
{
namespace Models
{
  class ListUserSolutionsResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListUserSolutionsResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(BizId, bizId_);
      DARABONBA_PTR_TO_JSON(BizType, bizType_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(DeliveryOrderBizId, deliveryOrderBizId_);
      DARABONBA_PTR_TO_JSON(IntentionAssignBizId, intentionAssignBizId_);
      DARABONBA_PTR_TO_JSON(IntentionBizId, intentionBizId_);
      DARABONBA_PTR_TO_JSON(PartnerCode, partnerCode_);
      DARABONBA_PTR_TO_JSON(Reason, reason_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
    };
    friend void from_json(const Darabonba::Json& j, ListUserSolutionsResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(BizId, bizId_);
      DARABONBA_PTR_FROM_JSON(BizType, bizType_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(DeliveryOrderBizId, deliveryOrderBizId_);
      DARABONBA_PTR_FROM_JSON(IntentionAssignBizId, intentionAssignBizId_);
      DARABONBA_PTR_FROM_JSON(IntentionBizId, intentionBizId_);
      DARABONBA_PTR_FROM_JSON(PartnerCode, partnerCode_);
      DARABONBA_PTR_FROM_JSON(Reason, reason_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
    };
    ListUserSolutionsResponseBodyData() = default ;
    ListUserSolutionsResponseBodyData(const ListUserSolutionsResponseBodyData &) = default ;
    ListUserSolutionsResponseBodyData(ListUserSolutionsResponseBodyData &&) = default ;
    ListUserSolutionsResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListUserSolutionsResponseBodyData() = default ;
    ListUserSolutionsResponseBodyData& operator=(const ListUserSolutionsResponseBodyData &) = default ;
    ListUserSolutionsResponseBodyData& operator=(ListUserSolutionsResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bizId_ == nullptr
        && return this->bizType_ == nullptr && return this->createTime_ == nullptr && return this->deliveryOrderBizId_ == nullptr && return this->intentionAssignBizId_ == nullptr && return this->intentionBizId_ == nullptr
        && return this->partnerCode_ == nullptr && return this->reason_ == nullptr && return this->status_ == nullptr && return this->updateTime_ == nullptr && return this->userId_ == nullptr; };
    // bizId Field Functions 
    bool hasBizId() const { return this->bizId_ != nullptr;};
    void deleteBizId() { this->bizId_ = nullptr;};
    inline string bizId() const { DARABONBA_PTR_GET_DEFAULT(bizId_, "") };
    inline ListUserSolutionsResponseBodyData& setBizId(string bizId) { DARABONBA_PTR_SET_VALUE(bizId_, bizId) };


    // bizType Field Functions 
    bool hasBizType() const { return this->bizType_ != nullptr;};
    void deleteBizType() { this->bizType_ = nullptr;};
    inline string bizType() const { DARABONBA_PTR_GET_DEFAULT(bizType_, "") };
    inline ListUserSolutionsResponseBodyData& setBizType(string bizType) { DARABONBA_PTR_SET_VALUE(bizType_, bizType) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline int64_t createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
    inline ListUserSolutionsResponseBodyData& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // deliveryOrderBizId Field Functions 
    bool hasDeliveryOrderBizId() const { return this->deliveryOrderBizId_ != nullptr;};
    void deleteDeliveryOrderBizId() { this->deliveryOrderBizId_ = nullptr;};
    inline string deliveryOrderBizId() const { DARABONBA_PTR_GET_DEFAULT(deliveryOrderBizId_, "") };
    inline ListUserSolutionsResponseBodyData& setDeliveryOrderBizId(string deliveryOrderBizId) { DARABONBA_PTR_SET_VALUE(deliveryOrderBizId_, deliveryOrderBizId) };


    // intentionAssignBizId Field Functions 
    bool hasIntentionAssignBizId() const { return this->intentionAssignBizId_ != nullptr;};
    void deleteIntentionAssignBizId() { this->intentionAssignBizId_ = nullptr;};
    inline string intentionAssignBizId() const { DARABONBA_PTR_GET_DEFAULT(intentionAssignBizId_, "") };
    inline ListUserSolutionsResponseBodyData& setIntentionAssignBizId(string intentionAssignBizId) { DARABONBA_PTR_SET_VALUE(intentionAssignBizId_, intentionAssignBizId) };


    // intentionBizId Field Functions 
    bool hasIntentionBizId() const { return this->intentionBizId_ != nullptr;};
    void deleteIntentionBizId() { this->intentionBizId_ = nullptr;};
    inline string intentionBizId() const { DARABONBA_PTR_GET_DEFAULT(intentionBizId_, "") };
    inline ListUserSolutionsResponseBodyData& setIntentionBizId(string intentionBizId) { DARABONBA_PTR_SET_VALUE(intentionBizId_, intentionBizId) };


    // partnerCode Field Functions 
    bool hasPartnerCode() const { return this->partnerCode_ != nullptr;};
    void deletePartnerCode() { this->partnerCode_ = nullptr;};
    inline string partnerCode() const { DARABONBA_PTR_GET_DEFAULT(partnerCode_, "") };
    inline ListUserSolutionsResponseBodyData& setPartnerCode(string partnerCode) { DARABONBA_PTR_SET_VALUE(partnerCode_, partnerCode) };


    // reason Field Functions 
    bool hasReason() const { return this->reason_ != nullptr;};
    void deleteReason() { this->reason_ = nullptr;};
    inline string reason() const { DARABONBA_PTR_GET_DEFAULT(reason_, "") };
    inline ListUserSolutionsResponseBodyData& setReason(string reason) { DARABONBA_PTR_SET_VALUE(reason_, reason) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t status() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline ListUserSolutionsResponseBodyData& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // updateTime Field Functions 
    bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
    void deleteUpdateTime() { this->updateTime_ = nullptr;};
    inline int64_t updateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, 0L) };
    inline ListUserSolutionsResponseBodyData& setUpdateTime(int64_t updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline ListUserSolutionsResponseBodyData& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


  protected:
    std::shared_ptr<string> bizId_ = nullptr;
    std::shared_ptr<string> bizType_ = nullptr;
    std::shared_ptr<int64_t> createTime_ = nullptr;
    std::shared_ptr<string> deliveryOrderBizId_ = nullptr;
    std::shared_ptr<string> intentionAssignBizId_ = nullptr;
    std::shared_ptr<string> intentionBizId_ = nullptr;
    std::shared_ptr<string> partnerCode_ = nullptr;
    std::shared_ptr<string> reason_ = nullptr;
    std::shared_ptr<int32_t> status_ = nullptr;
    std::shared_ptr<int64_t> updateTime_ = nullptr;
    std::shared_ptr<string> userId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Companyreg20200306
#endif
