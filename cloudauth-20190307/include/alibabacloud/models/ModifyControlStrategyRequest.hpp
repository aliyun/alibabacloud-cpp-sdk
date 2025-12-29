// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYCONTROLSTRATEGYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYCONTROLSTRATEGYREQUEST_HPP_
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
  class ModifyControlStrategyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyControlStrategyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ControlStrategyList, controlStrategyList_);
      DARABONBA_PTR_TO_JSON(ProductType, productType_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyControlStrategyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ControlStrategyList, controlStrategyList_);
      DARABONBA_PTR_FROM_JSON(ProductType, productType_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    ModifyControlStrategyRequest() = default ;
    ModifyControlStrategyRequest(const ModifyControlStrategyRequest &) = default ;
    ModifyControlStrategyRequest(ModifyControlStrategyRequest &&) = default ;
    ModifyControlStrategyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyControlStrategyRequest() = default ;
    ModifyControlStrategyRequest& operator=(const ModifyControlStrategyRequest &) = default ;
    ModifyControlStrategyRequest& operator=(ModifyControlStrategyRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ControlStrategyList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ControlStrategyList& obj) { 
        DARABONBA_PTR_TO_JSON(ApiName, apiName_);
        DARABONBA_PTR_TO_JSON(BizType, bizType_);
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(Threshold, threshold_);
      };
      friend void from_json(const Darabonba::Json& j, ControlStrategyList& obj) { 
        DARABONBA_PTR_FROM_JSON(ApiName, apiName_);
        DARABONBA_PTR_FROM_JSON(BizType, bizType_);
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(Threshold, threshold_);
      };
      ControlStrategyList() = default ;
      ControlStrategyList(const ControlStrategyList &) = default ;
      ControlStrategyList(ControlStrategyList &&) = default ;
      ControlStrategyList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ControlStrategyList() = default ;
      ControlStrategyList& operator=(const ControlStrategyList &) = default ;
      ControlStrategyList& operator=(ControlStrategyList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->apiName_ == nullptr
        && this->bizType_ == nullptr && this->id_ == nullptr && this->status_ == nullptr && this->threshold_ == nullptr; };
      // apiName Field Functions 
      bool hasApiName() const { return this->apiName_ != nullptr;};
      void deleteApiName() { this->apiName_ = nullptr;};
      inline string getApiName() const { DARABONBA_PTR_GET_DEFAULT(apiName_, "") };
      inline ControlStrategyList& setApiName(string apiName) { DARABONBA_PTR_SET_VALUE(apiName_, apiName) };


      // bizType Field Functions 
      bool hasBizType() const { return this->bizType_ != nullptr;};
      void deleteBizType() { this->bizType_ = nullptr;};
      inline string getBizType() const { DARABONBA_PTR_GET_DEFAULT(bizType_, "") };
      inline ControlStrategyList& setBizType(string bizType) { DARABONBA_PTR_SET_VALUE(bizType_, bizType) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
      inline ControlStrategyList& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline ControlStrategyList& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // threshold Field Functions 
      bool hasThreshold() const { return this->threshold_ != nullptr;};
      void deleteThreshold() { this->threshold_ = nullptr;};
      inline double getThreshold() const { DARABONBA_PTR_GET_DEFAULT(threshold_, 0.0) };
      inline ControlStrategyList& setThreshold(double threshold) { DARABONBA_PTR_SET_VALUE(threshold_, threshold) };


    protected:
      // API name, same as **ProductCode**.
      shared_ptr<string> apiName_ {};
      // Rule configuration type:
      // - **QPS**: QPS greater than
      // - **SUCCESS_RATE_5_MIN**: Success rate in the last 5 minutes less than
      // - **RESP_TIME_5_MIN**: Average response time in the last 5 minutes greater than
      // - **AMOUNT_RISE**: Call volume growth ratio greater than
      // - **AMOUNT_FALL**: Call volume decline ratio less than
      // - **PASSED_RATE_1_HOUR**: Verification consistency rate in the last hour less than
      // - **PARAM_ERROR_RATE_1_HOUR**: Parameter error rate in the last hour greater than
      shared_ptr<string> bizType_ {};
      // Rule ID.
      shared_ptr<int64_t> id_ {};
      // Status:
      // - **disabled**: Disabled
      // - **normal**: Enabled
      shared_ptr<string> status_ {};
      // Alarm threshold for the rule.
      shared_ptr<double> threshold_ {};
    };

    virtual bool empty() const override { return this->controlStrategyList_ == nullptr
        && this->productType_ == nullptr && this->regionId_ == nullptr; };
    // controlStrategyList Field Functions 
    bool hasControlStrategyList() const { return this->controlStrategyList_ != nullptr;};
    void deleteControlStrategyList() { this->controlStrategyList_ = nullptr;};
    inline const vector<ModifyControlStrategyRequest::ControlStrategyList> & getControlStrategyList() const { DARABONBA_PTR_GET_CONST(controlStrategyList_, vector<ModifyControlStrategyRequest::ControlStrategyList>) };
    inline vector<ModifyControlStrategyRequest::ControlStrategyList> getControlStrategyList() { DARABONBA_PTR_GET(controlStrategyList_, vector<ModifyControlStrategyRequest::ControlStrategyList>) };
    inline ModifyControlStrategyRequest& setControlStrategyList(const vector<ModifyControlStrategyRequest::ControlStrategyList> & controlStrategyList) { DARABONBA_PTR_SET_VALUE(controlStrategyList_, controlStrategyList) };
    inline ModifyControlStrategyRequest& setControlStrategyList(vector<ModifyControlStrategyRequest::ControlStrategyList> && controlStrategyList) { DARABONBA_PTR_SET_RVALUE(controlStrategyList_, controlStrategyList) };


    // productType Field Functions 
    bool hasProductType() const { return this->productType_ != nullptr;};
    void deleteProductType() { this->productType_ = nullptr;};
    inline string getProductType() const { DARABONBA_PTR_GET_DEFAULT(productType_, "") };
    inline ModifyControlStrategyRequest& setProductType(string productType) { DARABONBA_PTR_SET_VALUE(productType_, productType) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ModifyControlStrategyRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // List of security alarm rules.
    shared_ptr<vector<ModifyControlStrategyRequest::ControlStrategyList>> controlStrategyList_ {};
    // Product type, currently only supports **ANT_CLOUD_AUTH** (Financial-grade Real Person), all others are phased out.
    shared_ptr<string> productType_ {};
    // Region ID of the intelligent access gateway instance.
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudauth20190307
#endif
