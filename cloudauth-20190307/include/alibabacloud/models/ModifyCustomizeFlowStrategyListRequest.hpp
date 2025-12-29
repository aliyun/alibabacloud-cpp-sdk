// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYCUSTOMIZEFLOWSTRATEGYLISTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYCUSTOMIZEFLOWSTRATEGYLISTREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudauth20190307
{
namespace Models
{
  class ModifyCustomizeFlowStrategyListRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyCustomizeFlowStrategyListRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ProductType, productType_);
      DARABONBA_PTR_TO_JSON(StrategyObject, strategyObject_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyCustomizeFlowStrategyListRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ProductType, productType_);
      DARABONBA_PTR_FROM_JSON(StrategyObject, strategyObject_);
    };
    ModifyCustomizeFlowStrategyListRequest() = default ;
    ModifyCustomizeFlowStrategyListRequest(const ModifyCustomizeFlowStrategyListRequest &) = default ;
    ModifyCustomizeFlowStrategyListRequest(ModifyCustomizeFlowStrategyListRequest &&) = default ;
    ModifyCustomizeFlowStrategyListRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyCustomizeFlowStrategyListRequest() = default ;
    ModifyCustomizeFlowStrategyListRequest& operator=(const ModifyCustomizeFlowStrategyListRequest &) = default ;
    ModifyCustomizeFlowStrategyListRequest& operator=(ModifyCustomizeFlowStrategyListRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class StrategyObject : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const StrategyObject& obj) { 
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
      friend void from_json(const Darabonba::Json& j, StrategyObject& obj) { 
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
      StrategyObject() = default ;
      StrategyObject(const StrategyObject &) = default ;
      StrategyObject(StrategyObject &&) = default ;
      StrategyObject(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~StrategyObject() = default ;
      StrategyObject& operator=(const StrategyObject &) = default ;
      StrategyObject& operator=(StrategyObject &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->accumulateKey_ == nullptr
        && this->accumulateWindow_ == nullptr && this->apiName_ == nullptr && this->flowType_ == nullptr && this->id_ == nullptr && this->operation_ == nullptr
        && this->status_ == nullptr && this->threshold_ == nullptr && this->userId_ == nullptr; };
      // accumulateKey Field Functions 
      bool hasAccumulateKey() const { return this->accumulateKey_ != nullptr;};
      void deleteAccumulateKey() { this->accumulateKey_ = nullptr;};
      inline string getAccumulateKey() const { DARABONBA_PTR_GET_DEFAULT(accumulateKey_, "") };
      inline StrategyObject& setAccumulateKey(string accumulateKey) { DARABONBA_PTR_SET_VALUE(accumulateKey_, accumulateKey) };


      // accumulateWindow Field Functions 
      bool hasAccumulateWindow() const { return this->accumulateWindow_ != nullptr;};
      void deleteAccumulateWindow() { this->accumulateWindow_ = nullptr;};
      inline int64_t getAccumulateWindow() const { DARABONBA_PTR_GET_DEFAULT(accumulateWindow_, 0L) };
      inline StrategyObject& setAccumulateWindow(int64_t accumulateWindow) { DARABONBA_PTR_SET_VALUE(accumulateWindow_, accumulateWindow) };


      // apiName Field Functions 
      bool hasApiName() const { return this->apiName_ != nullptr;};
      void deleteApiName() { this->apiName_ = nullptr;};
      inline string getApiName() const { DARABONBA_PTR_GET_DEFAULT(apiName_, "") };
      inline StrategyObject& setApiName(string apiName) { DARABONBA_PTR_SET_VALUE(apiName_, apiName) };


      // flowType Field Functions 
      bool hasFlowType() const { return this->flowType_ != nullptr;};
      void deleteFlowType() { this->flowType_ = nullptr;};
      inline string getFlowType() const { DARABONBA_PTR_GET_DEFAULT(flowType_, "") };
      inline StrategyObject& setFlowType(string flowType) { DARABONBA_PTR_SET_VALUE(flowType_, flowType) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
      inline StrategyObject& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // operation Field Functions 
      bool hasOperation() const { return this->operation_ != nullptr;};
      void deleteOperation() { this->operation_ = nullptr;};
      inline string getOperation() const { DARABONBA_PTR_GET_DEFAULT(operation_, "") };
      inline StrategyObject& setOperation(string operation) { DARABONBA_PTR_SET_VALUE(operation_, operation) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline StrategyObject& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // threshold Field Functions 
      bool hasThreshold() const { return this->threshold_ != nullptr;};
      void deleteThreshold() { this->threshold_ = nullptr;};
      inline int32_t getThreshold() const { DARABONBA_PTR_GET_DEFAULT(threshold_, 0) };
      inline StrategyObject& setThreshold(int32_t threshold) { DARABONBA_PTR_SET_VALUE(threshold_, threshold) };


      // userId Field Functions 
      bool hasUserId() const { return this->userId_ != nullptr;};
      void deleteUserId() { this->userId_ = nullptr;};
      inline int64_t getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, 0L) };
      inline StrategyObject& setUserId(int64_t userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


    protected:
      // AccumulateKey
      shared_ptr<string> accumulateKey_ {};
      // Flow control statistical window size, in minutes.
      shared_ptr<int64_t> accumulateWindow_ {};
      // API name, same as **ProductCode**.
      // 
      // This parameter is required.
      shared_ptr<string> apiName_ {};
      // Flow type:
      // - **ACCUMULATE**: Repeated appearance of ID card
      // - **PASSED_RATE**: Pass rate less than
      // - **SUB_CODE_205**: Authentication failed and liveness attack 205 ratio greater than
      // - **SUB_CODE_206**: Authentication failed and liveness attack 206 ratio greater than
      shared_ptr<string> flowType_ {};
      // Rule ID.
      shared_ptr<int64_t> id_ {};
      // Operation.
      shared_ptr<string> operation_ {};
      // Status:
      // - **disabled**: Disabled
      // - **normal**: Enabled
      // 
      // This parameter is required.
      shared_ptr<string> status_ {};
      // Flow control threshold.
      // 
      // This parameter is required.
      shared_ptr<int32_t> threshold_ {};
      // User ID.
      shared_ptr<int64_t> userId_ {};
    };

    virtual bool empty() const override { return this->productType_ == nullptr
        && this->strategyObject_ == nullptr; };
    // productType Field Functions 
    bool hasProductType() const { return this->productType_ != nullptr;};
    void deleteProductType() { this->productType_ = nullptr;};
    inline string getProductType() const { DARABONBA_PTR_GET_DEFAULT(productType_, "") };
    inline ModifyCustomizeFlowStrategyListRequest& setProductType(string productType) { DARABONBA_PTR_SET_VALUE(productType_, productType) };


    // strategyObject Field Functions 
    bool hasStrategyObject() const { return this->strategyObject_ != nullptr;};
    void deleteStrategyObject() { this->strategyObject_ = nullptr;};
    inline const vector<ModifyCustomizeFlowStrategyListRequest::StrategyObject> & getStrategyObject() const { DARABONBA_PTR_GET_CONST(strategyObject_, vector<ModifyCustomizeFlowStrategyListRequest::StrategyObject>) };
    inline vector<ModifyCustomizeFlowStrategyListRequest::StrategyObject> getStrategyObject() { DARABONBA_PTR_GET(strategyObject_, vector<ModifyCustomizeFlowStrategyListRequest::StrategyObject>) };
    inline ModifyCustomizeFlowStrategyListRequest& setStrategyObject(const vector<ModifyCustomizeFlowStrategyListRequest::StrategyObject> & strategyObject) { DARABONBA_PTR_SET_VALUE(strategyObject_, strategyObject) };
    inline ModifyCustomizeFlowStrategyListRequest& setStrategyObject(vector<ModifyCustomizeFlowStrategyListRequest::StrategyObject> && strategyObject) { DARABONBA_PTR_SET_RVALUE(strategyObject_, strategyObject) };


  protected:
    // Product type, currently only supports **ANT_CLOUD_AUTH** (Financial-grade real person), all others have been phased out.
    shared_ptr<string> productType_ {};
    // Strategy list.
    shared_ptr<vector<ModifyCustomizeFlowStrategyListRequest::StrategyObject>> strategyObject_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudauth20190307
#endif
