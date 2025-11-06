// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYPUSHSCHEDULERLISTRESPONSEBODYRESULTCONTENTDATALIST_HPP_
#define ALIBABACLOUD_MODELS_QUERYPUSHSCHEDULERLISTRESPONSEBODYRESULTCONTENTDATALIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MPaaS20201028
{
namespace Models
{
  class QueryPushSchedulerListResponseBodyResultContentDataList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryPushSchedulerListResponseBodyResultContentDataList& obj) { 
      DARABONBA_PTR_TO_JSON(CreateType, createType_);
      DARABONBA_PTR_TO_JSON(DeliveryType, deliveryType_);
      DARABONBA_PTR_TO_JSON(ExecutedStatus, executedStatus_);
      DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_TO_JSON(ParentId, parentId_);
      DARABONBA_PTR_TO_JSON(PushContent, pushContent_);
      DARABONBA_PTR_TO_JSON(PushTime, pushTime_);
      DARABONBA_PTR_TO_JSON(PushTitle, pushTitle_);
      DARABONBA_PTR_TO_JSON(StrategyType, strategyType_);
      DARABONBA_PTR_TO_JSON(Type, type_);
      DARABONBA_PTR_TO_JSON(UniqueId, uniqueId_);
    };
    friend void from_json(const Darabonba::Json& j, QueryPushSchedulerListResponseBodyResultContentDataList& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateType, createType_);
      DARABONBA_PTR_FROM_JSON(DeliveryType, deliveryType_);
      DARABONBA_PTR_FROM_JSON(ExecutedStatus, executedStatus_);
      DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_FROM_JSON(ParentId, parentId_);
      DARABONBA_PTR_FROM_JSON(PushContent, pushContent_);
      DARABONBA_PTR_FROM_JSON(PushTime, pushTime_);
      DARABONBA_PTR_FROM_JSON(PushTitle, pushTitle_);
      DARABONBA_PTR_FROM_JSON(StrategyType, strategyType_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
      DARABONBA_PTR_FROM_JSON(UniqueId, uniqueId_);
    };
    QueryPushSchedulerListResponseBodyResultContentDataList() = default ;
    QueryPushSchedulerListResponseBodyResultContentDataList(const QueryPushSchedulerListResponseBodyResultContentDataList &) = default ;
    QueryPushSchedulerListResponseBodyResultContentDataList(QueryPushSchedulerListResponseBodyResultContentDataList &&) = default ;
    QueryPushSchedulerListResponseBodyResultContentDataList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryPushSchedulerListResponseBodyResultContentDataList() = default ;
    QueryPushSchedulerListResponseBodyResultContentDataList& operator=(const QueryPushSchedulerListResponseBodyResultContentDataList &) = default ;
    QueryPushSchedulerListResponseBodyResultContentDataList& operator=(QueryPushSchedulerListResponseBodyResultContentDataList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->createType_ == nullptr
        && return this->deliveryType_ == nullptr && return this->executedStatus_ == nullptr && return this->gmtCreate_ == nullptr && return this->parentId_ == nullptr && return this->pushContent_ == nullptr
        && return this->pushTime_ == nullptr && return this->pushTitle_ == nullptr && return this->strategyType_ == nullptr && return this->type_ == nullptr && return this->uniqueId_ == nullptr; };
    // createType Field Functions 
    bool hasCreateType() const { return this->createType_ != nullptr;};
    void deleteCreateType() { this->createType_ = nullptr;};
    inline int32_t createType() const { DARABONBA_PTR_GET_DEFAULT(createType_, 0) };
    inline QueryPushSchedulerListResponseBodyResultContentDataList& setCreateType(int32_t createType) { DARABONBA_PTR_SET_VALUE(createType_, createType) };


    // deliveryType Field Functions 
    bool hasDeliveryType() const { return this->deliveryType_ != nullptr;};
    void deleteDeliveryType() { this->deliveryType_ = nullptr;};
    inline int32_t deliveryType() const { DARABONBA_PTR_GET_DEFAULT(deliveryType_, 0) };
    inline QueryPushSchedulerListResponseBodyResultContentDataList& setDeliveryType(int32_t deliveryType) { DARABONBA_PTR_SET_VALUE(deliveryType_, deliveryType) };


    // executedStatus Field Functions 
    bool hasExecutedStatus() const { return this->executedStatus_ != nullptr;};
    void deleteExecutedStatus() { this->executedStatus_ = nullptr;};
    inline string executedStatus() const { DARABONBA_PTR_GET_DEFAULT(executedStatus_, "") };
    inline QueryPushSchedulerListResponseBodyResultContentDataList& setExecutedStatus(string executedStatus) { DARABONBA_PTR_SET_VALUE(executedStatus_, executedStatus) };


    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline int64_t gmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, 0L) };
    inline QueryPushSchedulerListResponseBodyResultContentDataList& setGmtCreate(int64_t gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    // parentId Field Functions 
    bool hasParentId() const { return this->parentId_ != nullptr;};
    void deleteParentId() { this->parentId_ = nullptr;};
    inline string parentId() const { DARABONBA_PTR_GET_DEFAULT(parentId_, "") };
    inline QueryPushSchedulerListResponseBodyResultContentDataList& setParentId(string parentId) { DARABONBA_PTR_SET_VALUE(parentId_, parentId) };


    // pushContent Field Functions 
    bool hasPushContent() const { return this->pushContent_ != nullptr;};
    void deletePushContent() { this->pushContent_ = nullptr;};
    inline string pushContent() const { DARABONBA_PTR_GET_DEFAULT(pushContent_, "") };
    inline QueryPushSchedulerListResponseBodyResultContentDataList& setPushContent(string pushContent) { DARABONBA_PTR_SET_VALUE(pushContent_, pushContent) };


    // pushTime Field Functions 
    bool hasPushTime() const { return this->pushTime_ != nullptr;};
    void deletePushTime() { this->pushTime_ = nullptr;};
    inline int64_t pushTime() const { DARABONBA_PTR_GET_DEFAULT(pushTime_, 0L) };
    inline QueryPushSchedulerListResponseBodyResultContentDataList& setPushTime(int64_t pushTime) { DARABONBA_PTR_SET_VALUE(pushTime_, pushTime) };


    // pushTitle Field Functions 
    bool hasPushTitle() const { return this->pushTitle_ != nullptr;};
    void deletePushTitle() { this->pushTitle_ = nullptr;};
    inline string pushTitle() const { DARABONBA_PTR_GET_DEFAULT(pushTitle_, "") };
    inline QueryPushSchedulerListResponseBodyResultContentDataList& setPushTitle(string pushTitle) { DARABONBA_PTR_SET_VALUE(pushTitle_, pushTitle) };


    // strategyType Field Functions 
    bool hasStrategyType() const { return this->strategyType_ != nullptr;};
    void deleteStrategyType() { this->strategyType_ = nullptr;};
    inline int32_t strategyType() const { DARABONBA_PTR_GET_DEFAULT(strategyType_, 0) };
    inline QueryPushSchedulerListResponseBodyResultContentDataList& setStrategyType(int32_t strategyType) { DARABONBA_PTR_SET_VALUE(strategyType_, strategyType) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline int32_t type() const { DARABONBA_PTR_GET_DEFAULT(type_, 0) };
    inline QueryPushSchedulerListResponseBodyResultContentDataList& setType(int32_t type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // uniqueId Field Functions 
    bool hasUniqueId() const { return this->uniqueId_ != nullptr;};
    void deleteUniqueId() { this->uniqueId_ = nullptr;};
    inline string uniqueId() const { DARABONBA_PTR_GET_DEFAULT(uniqueId_, "") };
    inline QueryPushSchedulerListResponseBodyResultContentDataList& setUniqueId(string uniqueId) { DARABONBA_PTR_SET_VALUE(uniqueId_, uniqueId) };


  protected:
    std::shared_ptr<int32_t> createType_ = nullptr;
    std::shared_ptr<int32_t> deliveryType_ = nullptr;
    std::shared_ptr<string> executedStatus_ = nullptr;
    std::shared_ptr<int64_t> gmtCreate_ = nullptr;
    std::shared_ptr<string> parentId_ = nullptr;
    std::shared_ptr<string> pushContent_ = nullptr;
    std::shared_ptr<int64_t> pushTime_ = nullptr;
    std::shared_ptr<string> pushTitle_ = nullptr;
    std::shared_ptr<int32_t> strategyType_ = nullptr;
    std::shared_ptr<int32_t> type_ = nullptr;
    std::shared_ptr<string> uniqueId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MPaaS20201028
#endif
