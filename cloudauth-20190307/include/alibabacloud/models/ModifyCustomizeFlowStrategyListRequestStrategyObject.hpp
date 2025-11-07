// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYCUSTOMIZEFLOWSTRATEGYLISTREQUESTSTRATEGYOBJECT_HPP_
#define ALIBABACLOUD_MODELS_MODIFYCUSTOMIZEFLOWSTRATEGYLISTREQUESTSTRATEGYOBJECT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudauth20190307
{
namespace Models
{
  class ModifyCustomizeFlowStrategyListRequestStrategyObject : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyCustomizeFlowStrategyListRequestStrategyObject& obj) { 
      DARABONBA_PTR_TO_JSON(AccumulateKey, accumulateKey_);
      DARABONBA_PTR_TO_JSON(AccumulateWindow, accumulateWindow_);
      DARABONBA_PTR_TO_JSON(ApiName, apiName_);
      DARABONBA_PTR_TO_JSON(FlowType, flowType_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Operation, operation_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Threshold, threshold_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyCustomizeFlowStrategyListRequestStrategyObject& obj) { 
      DARABONBA_PTR_FROM_JSON(AccumulateKey, accumulateKey_);
      DARABONBA_PTR_FROM_JSON(AccumulateWindow, accumulateWindow_);
      DARABONBA_PTR_FROM_JSON(ApiName, apiName_);
      DARABONBA_PTR_FROM_JSON(FlowType, flowType_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Operation, operation_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Threshold, threshold_);
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
    };
    ModifyCustomizeFlowStrategyListRequestStrategyObject() = default ;
    ModifyCustomizeFlowStrategyListRequestStrategyObject(const ModifyCustomizeFlowStrategyListRequestStrategyObject &) = default ;
    ModifyCustomizeFlowStrategyListRequestStrategyObject(ModifyCustomizeFlowStrategyListRequestStrategyObject &&) = default ;
    ModifyCustomizeFlowStrategyListRequestStrategyObject(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyCustomizeFlowStrategyListRequestStrategyObject() = default ;
    ModifyCustomizeFlowStrategyListRequestStrategyObject& operator=(const ModifyCustomizeFlowStrategyListRequestStrategyObject &) = default ;
    ModifyCustomizeFlowStrategyListRequestStrategyObject& operator=(ModifyCustomizeFlowStrategyListRequestStrategyObject &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accumulateKey_ == nullptr
        && return this->accumulateWindow_ == nullptr && return this->apiName_ == nullptr && return this->flowType_ == nullptr && return this->id_ == nullptr && return this->operation_ == nullptr
        && return this->status_ == nullptr && return this->threshold_ == nullptr && return this->userId_ == nullptr; };
    // accumulateKey Field Functions 
    bool hasAccumulateKey() const { return this->accumulateKey_ != nullptr;};
    void deleteAccumulateKey() { this->accumulateKey_ = nullptr;};
    inline string accumulateKey() const { DARABONBA_PTR_GET_DEFAULT(accumulateKey_, "") };
    inline ModifyCustomizeFlowStrategyListRequestStrategyObject& setAccumulateKey(string accumulateKey) { DARABONBA_PTR_SET_VALUE(accumulateKey_, accumulateKey) };


    // accumulateWindow Field Functions 
    bool hasAccumulateWindow() const { return this->accumulateWindow_ != nullptr;};
    void deleteAccumulateWindow() { this->accumulateWindow_ = nullptr;};
    inline int64_t accumulateWindow() const { DARABONBA_PTR_GET_DEFAULT(accumulateWindow_, 0L) };
    inline ModifyCustomizeFlowStrategyListRequestStrategyObject& setAccumulateWindow(int64_t accumulateWindow) { DARABONBA_PTR_SET_VALUE(accumulateWindow_, accumulateWindow) };


    // apiName Field Functions 
    bool hasApiName() const { return this->apiName_ != nullptr;};
    void deleteApiName() { this->apiName_ = nullptr;};
    inline string apiName() const { DARABONBA_PTR_GET_DEFAULT(apiName_, "") };
    inline ModifyCustomizeFlowStrategyListRequestStrategyObject& setApiName(string apiName) { DARABONBA_PTR_SET_VALUE(apiName_, apiName) };


    // flowType Field Functions 
    bool hasFlowType() const { return this->flowType_ != nullptr;};
    void deleteFlowType() { this->flowType_ = nullptr;};
    inline string flowType() const { DARABONBA_PTR_GET_DEFAULT(flowType_, "") };
    inline ModifyCustomizeFlowStrategyListRequestStrategyObject& setFlowType(string flowType) { DARABONBA_PTR_SET_VALUE(flowType_, flowType) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline ModifyCustomizeFlowStrategyListRequestStrategyObject& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // operation Field Functions 
    bool hasOperation() const { return this->operation_ != nullptr;};
    void deleteOperation() { this->operation_ = nullptr;};
    inline string operation() const { DARABONBA_PTR_GET_DEFAULT(operation_, "") };
    inline ModifyCustomizeFlowStrategyListRequestStrategyObject& setOperation(string operation) { DARABONBA_PTR_SET_VALUE(operation_, operation) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ModifyCustomizeFlowStrategyListRequestStrategyObject& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // threshold Field Functions 
    bool hasThreshold() const { return this->threshold_ != nullptr;};
    void deleteThreshold() { this->threshold_ = nullptr;};
    inline int32_t threshold() const { DARABONBA_PTR_GET_DEFAULT(threshold_, 0) };
    inline ModifyCustomizeFlowStrategyListRequestStrategyObject& setThreshold(int32_t threshold) { DARABONBA_PTR_SET_VALUE(threshold_, threshold) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline int64_t userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, 0L) };
    inline ModifyCustomizeFlowStrategyListRequestStrategyObject& setUserId(int64_t userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


  protected:
    // AccumulateKey
    std::shared_ptr<string> accumulateKey_ = nullptr;
    // Flow control statistical window size, in minutes.
    std::shared_ptr<int64_t> accumulateWindow_ = nullptr;
    // API name, same as **ProductCode**.
    // 
    // This parameter is required.
    std::shared_ptr<string> apiName_ = nullptr;
    // Flow type:
    // - **ACCUMULATE**: Repeated appearance of ID card
    // - **PASSED_RATE**: Pass rate less than
    // - **SUB_CODE_205**: Authentication failed and liveness attack 205 ratio greater than
    // - **SUB_CODE_206**: Authentication failed and liveness attack 206 ratio greater than
    std::shared_ptr<string> flowType_ = nullptr;
    // Rule ID.
    std::shared_ptr<int64_t> id_ = nullptr;
    // Operation.
    std::shared_ptr<string> operation_ = nullptr;
    // Status:
    // - **disabled**: Disabled
    // - **normal**: Enabled
    // 
    // This parameter is required.
    std::shared_ptr<string> status_ = nullptr;
    // Flow control threshold.
    // 
    // This parameter is required.
    std::shared_ptr<int32_t> threshold_ = nullptr;
    // User ID.
    std::shared_ptr<int64_t> userId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudauth20190307
#endif
