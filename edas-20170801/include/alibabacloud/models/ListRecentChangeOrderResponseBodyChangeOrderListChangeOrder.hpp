// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTRECENTCHANGEORDERRESPONSEBODYCHANGEORDERLISTCHANGEORDER_HPP_
#define ALIBABACLOUD_MODELS_LISTRECENTCHANGEORDERRESPONSEBODYCHANGEORDERLISTCHANGEORDER_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Edas20170801
{
namespace Models
{
  class ListRecentChangeOrderResponseBodyChangeOrderListChangeOrder : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListRecentChangeOrderResponseBodyChangeOrderListChangeOrder& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(BatchCount, batchCount_);
      DARABONBA_PTR_TO_JSON(BatchType, batchType_);
      DARABONBA_PTR_TO_JSON(ChangeOrderDescription, changeOrderDescription_);
      DARABONBA_PTR_TO_JSON(ChangeOrderId, changeOrderId_);
      DARABONBA_PTR_TO_JSON(CoType, coType_);
      DARABONBA_PTR_TO_JSON(CoTypeCode, coTypeCode_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(CreateUserId, createUserId_);
      DARABONBA_PTR_TO_JSON(FinishTime, finishTime_);
      DARABONBA_PTR_TO_JSON(GroupId, groupId_);
      DARABONBA_PTR_TO_JSON(Source, source_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
    };
    friend void from_json(const Darabonba::Json& j, ListRecentChangeOrderResponseBodyChangeOrderListChangeOrder& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(BatchCount, batchCount_);
      DARABONBA_PTR_FROM_JSON(BatchType, batchType_);
      DARABONBA_PTR_FROM_JSON(ChangeOrderDescription, changeOrderDescription_);
      DARABONBA_PTR_FROM_JSON(ChangeOrderId, changeOrderId_);
      DARABONBA_PTR_FROM_JSON(CoType, coType_);
      DARABONBA_PTR_FROM_JSON(CoTypeCode, coTypeCode_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(CreateUserId, createUserId_);
      DARABONBA_PTR_FROM_JSON(FinishTime, finishTime_);
      DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
      DARABONBA_PTR_FROM_JSON(Source, source_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
    };
    ListRecentChangeOrderResponseBodyChangeOrderListChangeOrder() = default ;
    ListRecentChangeOrderResponseBodyChangeOrderListChangeOrder(const ListRecentChangeOrderResponseBodyChangeOrderListChangeOrder &) = default ;
    ListRecentChangeOrderResponseBodyChangeOrderListChangeOrder(ListRecentChangeOrderResponseBodyChangeOrderListChangeOrder &&) = default ;
    ListRecentChangeOrderResponseBodyChangeOrderListChangeOrder(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListRecentChangeOrderResponseBodyChangeOrderListChangeOrder() = default ;
    ListRecentChangeOrderResponseBodyChangeOrderListChangeOrder& operator=(const ListRecentChangeOrderResponseBodyChangeOrderListChangeOrder &) = default ;
    ListRecentChangeOrderResponseBodyChangeOrderListChangeOrder& operator=(ListRecentChangeOrderResponseBodyChangeOrderListChangeOrder &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appId_ == nullptr
        && return this->batchCount_ == nullptr && return this->batchType_ == nullptr && return this->changeOrderDescription_ == nullptr && return this->changeOrderId_ == nullptr && return this->coType_ == nullptr
        && return this->coTypeCode_ == nullptr && return this->createTime_ == nullptr && return this->createUserId_ == nullptr && return this->finishTime_ == nullptr && return this->groupId_ == nullptr
        && return this->source_ == nullptr && return this->status_ == nullptr && return this->userId_ == nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline ListRecentChangeOrderResponseBodyChangeOrderListChangeOrder& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // batchCount Field Functions 
    bool hasBatchCount() const { return this->batchCount_ != nullptr;};
    void deleteBatchCount() { this->batchCount_ = nullptr;};
    inline int32_t batchCount() const { DARABONBA_PTR_GET_DEFAULT(batchCount_, 0) };
    inline ListRecentChangeOrderResponseBodyChangeOrderListChangeOrder& setBatchCount(int32_t batchCount) { DARABONBA_PTR_SET_VALUE(batchCount_, batchCount) };


    // batchType Field Functions 
    bool hasBatchType() const { return this->batchType_ != nullptr;};
    void deleteBatchType() { this->batchType_ = nullptr;};
    inline string batchType() const { DARABONBA_PTR_GET_DEFAULT(batchType_, "") };
    inline ListRecentChangeOrderResponseBodyChangeOrderListChangeOrder& setBatchType(string batchType) { DARABONBA_PTR_SET_VALUE(batchType_, batchType) };


    // changeOrderDescription Field Functions 
    bool hasChangeOrderDescription() const { return this->changeOrderDescription_ != nullptr;};
    void deleteChangeOrderDescription() { this->changeOrderDescription_ = nullptr;};
    inline string changeOrderDescription() const { DARABONBA_PTR_GET_DEFAULT(changeOrderDescription_, "") };
    inline ListRecentChangeOrderResponseBodyChangeOrderListChangeOrder& setChangeOrderDescription(string changeOrderDescription) { DARABONBA_PTR_SET_VALUE(changeOrderDescription_, changeOrderDescription) };


    // changeOrderId Field Functions 
    bool hasChangeOrderId() const { return this->changeOrderId_ != nullptr;};
    void deleteChangeOrderId() { this->changeOrderId_ = nullptr;};
    inline string changeOrderId() const { DARABONBA_PTR_GET_DEFAULT(changeOrderId_, "") };
    inline ListRecentChangeOrderResponseBodyChangeOrderListChangeOrder& setChangeOrderId(string changeOrderId) { DARABONBA_PTR_SET_VALUE(changeOrderId_, changeOrderId) };


    // coType Field Functions 
    bool hasCoType() const { return this->coType_ != nullptr;};
    void deleteCoType() { this->coType_ = nullptr;};
    inline string coType() const { DARABONBA_PTR_GET_DEFAULT(coType_, "") };
    inline ListRecentChangeOrderResponseBodyChangeOrderListChangeOrder& setCoType(string coType) { DARABONBA_PTR_SET_VALUE(coType_, coType) };


    // coTypeCode Field Functions 
    bool hasCoTypeCode() const { return this->coTypeCode_ != nullptr;};
    void deleteCoTypeCode() { this->coTypeCode_ = nullptr;};
    inline string coTypeCode() const { DARABONBA_PTR_GET_DEFAULT(coTypeCode_, "") };
    inline ListRecentChangeOrderResponseBodyChangeOrderListChangeOrder& setCoTypeCode(string coTypeCode) { DARABONBA_PTR_SET_VALUE(coTypeCode_, coTypeCode) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline ListRecentChangeOrderResponseBodyChangeOrderListChangeOrder& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // createUserId Field Functions 
    bool hasCreateUserId() const { return this->createUserId_ != nullptr;};
    void deleteCreateUserId() { this->createUserId_ = nullptr;};
    inline string createUserId() const { DARABONBA_PTR_GET_DEFAULT(createUserId_, "") };
    inline ListRecentChangeOrderResponseBodyChangeOrderListChangeOrder& setCreateUserId(string createUserId) { DARABONBA_PTR_SET_VALUE(createUserId_, createUserId) };


    // finishTime Field Functions 
    bool hasFinishTime() const { return this->finishTime_ != nullptr;};
    void deleteFinishTime() { this->finishTime_ = nullptr;};
    inline string finishTime() const { DARABONBA_PTR_GET_DEFAULT(finishTime_, "") };
    inline ListRecentChangeOrderResponseBodyChangeOrderListChangeOrder& setFinishTime(string finishTime) { DARABONBA_PTR_SET_VALUE(finishTime_, finishTime) };


    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline string groupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
    inline ListRecentChangeOrderResponseBodyChangeOrderListChangeOrder& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // source Field Functions 
    bool hasSource() const { return this->source_ != nullptr;};
    void deleteSource() { this->source_ = nullptr;};
    inline string source() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
    inline ListRecentChangeOrderResponseBodyChangeOrderListChangeOrder& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t status() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline ListRecentChangeOrderResponseBodyChangeOrderListChangeOrder& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline ListRecentChangeOrderResponseBodyChangeOrderListChangeOrder& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


  protected:
    // The ID of the application.
    std::shared_ptr<string> appId_ = nullptr;
    // The number of batches for the change. Valid values: 1 to 5.
    std::shared_ptr<int32_t> batchCount_ = nullptr;
    // The way in which the next batch is triggered during a phased release. Valid values:
    // 
    // *   Automatic
    // *   Manual
    std::shared_ptr<string> batchType_ = nullptr;
    // The description of the change process.
    std::shared_ptr<string> changeOrderDescription_ = nullptr;
    // The unique ID of the change process.
    std::shared_ptr<string> changeOrderId_ = nullptr;
    // The type of the change process.
    std::shared_ptr<string> coType_ = nullptr;
    // The type of the change process.
    std::shared_ptr<string> coTypeCode_ = nullptr;
    // The time when the change process was created.
    std::shared_ptr<string> createTime_ = nullptr;
    // The user who created the change process.
    std::shared_ptr<string> createUserId_ = nullptr;
    // The time when the change process ended.
    std::shared_ptr<string> finishTime_ = nullptr;
    // The ID of the application instance group on which the change was performed.
    std::shared_ptr<string> groupId_ = nullptr;
    // The source of the change. Valid values:
    // 
    // *   console: the Enterprise Distributed Application Service (EDAS) console
    // *   pop: the POP API or tool
    std::shared_ptr<string> source_ = nullptr;
    // The state of the change process. Valid values:
    // 
    // *   0: ready to start execution
    // *   1: in progress
    // *   2: successful
    // *   3: failed
    // *   6: terminated
    // *   8: waiting for manual confirmation (You can see the state when you manually confirm the execution of the next batch of the change.)
    // *   9: waiting for automatic execution
    // *   10: failed due to a system error
    std::shared_ptr<int32_t> status_ = nullptr;
    // The ID of the user who created the change process.
    std::shared_ptr<string> userId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Edas20170801
#endif
