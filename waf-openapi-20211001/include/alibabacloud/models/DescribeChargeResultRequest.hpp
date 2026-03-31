// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECHARGERESULTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECHARGERESULTREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WafOpenapi20211001
{
namespace Models
{
  class DescribeChargeResultRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeChargeResultRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ChargeCycle, chargeCycle_);
      DARABONBA_PTR_TO_JSON(ChargeModules, chargeModules_);
      DARABONBA_PTR_TO_JSON(PayType, payType_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceManagerResourceGroupId, resourceManagerResourceGroupId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeChargeResultRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ChargeCycle, chargeCycle_);
      DARABONBA_PTR_FROM_JSON(ChargeModules, chargeModules_);
      DARABONBA_PTR_FROM_JSON(PayType, payType_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceManagerResourceGroupId, resourceManagerResourceGroupId_);
    };
    DescribeChargeResultRequest() = default ;
    DescribeChargeResultRequest(const DescribeChargeResultRequest &) = default ;
    DescribeChargeResultRequest(DescribeChargeResultRequest &&) = default ;
    DescribeChargeResultRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeChargeResultRequest() = default ;
    DescribeChargeResultRequest& operator=(const DescribeChargeResultRequest &) = default ;
    DescribeChargeResultRequest& operator=(DescribeChargeResultRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ChargeModules : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ChargeModules& obj) { 
        DARABONBA_PTR_TO_JSON(ModuleCode, moduleCode_);
        DARABONBA_PTR_TO_JSON(Usage, usage_);
      };
      friend void from_json(const Darabonba::Json& j, ChargeModules& obj) { 
        DARABONBA_PTR_FROM_JSON(ModuleCode, moduleCode_);
        DARABONBA_PTR_FROM_JSON(Usage, usage_);
      };
      ChargeModules() = default ;
      ChargeModules(const ChargeModules &) = default ;
      ChargeModules(ChargeModules &&) = default ;
      ChargeModules(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ChargeModules() = default ;
      ChargeModules& operator=(const ChargeModules &) = default ;
      ChargeModules& operator=(ChargeModules &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->moduleCode_ == nullptr
        && this->usage_ == nullptr; };
      // moduleCode Field Functions 
      bool hasModuleCode() const { return this->moduleCode_ != nullptr;};
      void deleteModuleCode() { this->moduleCode_ = nullptr;};
      inline string getModuleCode() const { DARABONBA_PTR_GET_DEFAULT(moduleCode_, "") };
      inline ChargeModules& setModuleCode(string moduleCode) { DARABONBA_PTR_SET_VALUE(moduleCode_, moduleCode) };


      // usage Field Functions 
      bool hasUsage() const { return this->usage_ != nullptr;};
      void deleteUsage() { this->usage_ = nullptr;};
      inline int64_t getUsage() const { DARABONBA_PTR_GET_DEFAULT(usage_, 0L) };
      inline ChargeModules& setUsage(int64_t usage) { DARABONBA_PTR_SET_VALUE(usage_, usage) };


    protected:
      shared_ptr<string> moduleCode_ {};
      shared_ptr<int64_t> usage_ {};
    };

    virtual bool empty() const override { return this->chargeCycle_ == nullptr
        && this->chargeModules_ == nullptr && this->payType_ == nullptr && this->regionId_ == nullptr && this->resourceManagerResourceGroupId_ == nullptr; };
    // chargeCycle Field Functions 
    bool hasChargeCycle() const { return this->chargeCycle_ != nullptr;};
    void deleteChargeCycle() { this->chargeCycle_ = nullptr;};
    inline string getChargeCycle() const { DARABONBA_PTR_GET_DEFAULT(chargeCycle_, "") };
    inline DescribeChargeResultRequest& setChargeCycle(string chargeCycle) { DARABONBA_PTR_SET_VALUE(chargeCycle_, chargeCycle) };


    // chargeModules Field Functions 
    bool hasChargeModules() const { return this->chargeModules_ != nullptr;};
    void deleteChargeModules() { this->chargeModules_ = nullptr;};
    inline const vector<DescribeChargeResultRequest::ChargeModules> & getChargeModules() const { DARABONBA_PTR_GET_CONST(chargeModules_, vector<DescribeChargeResultRequest::ChargeModules>) };
    inline vector<DescribeChargeResultRequest::ChargeModules> getChargeModules() { DARABONBA_PTR_GET(chargeModules_, vector<DescribeChargeResultRequest::ChargeModules>) };
    inline DescribeChargeResultRequest& setChargeModules(const vector<DescribeChargeResultRequest::ChargeModules> & chargeModules) { DARABONBA_PTR_SET_VALUE(chargeModules_, chargeModules) };
    inline DescribeChargeResultRequest& setChargeModules(vector<DescribeChargeResultRequest::ChargeModules> && chargeModules) { DARABONBA_PTR_SET_RVALUE(chargeModules_, chargeModules) };


    // payType Field Functions 
    bool hasPayType() const { return this->payType_ != nullptr;};
    void deletePayType() { this->payType_ = nullptr;};
    inline string getPayType() const { DARABONBA_PTR_GET_DEFAULT(payType_, "") };
    inline DescribeChargeResultRequest& setPayType(string payType) { DARABONBA_PTR_SET_VALUE(payType_, payType) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeChargeResultRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceManagerResourceGroupId Field Functions 
    bool hasResourceManagerResourceGroupId() const { return this->resourceManagerResourceGroupId_ != nullptr;};
    void deleteResourceManagerResourceGroupId() { this->resourceManagerResourceGroupId_ = nullptr;};
    inline string getResourceManagerResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceManagerResourceGroupId_, "") };
    inline DescribeChargeResultRequest& setResourceManagerResourceGroupId(string resourceManagerResourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceManagerResourceGroupId_, resourceManagerResourceGroupId) };


  protected:
    shared_ptr<string> chargeCycle_ {};
    // This parameter is required.
    shared_ptr<vector<DescribeChargeResultRequest::ChargeModules>> chargeModules_ {};
    // This parameter is required.
    shared_ptr<string> payType_ {};
    shared_ptr<string> regionId_ {};
    shared_ptr<string> resourceManagerResourceGroupId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
