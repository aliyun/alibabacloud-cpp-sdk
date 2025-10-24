// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECHARGERESULTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECHARGERESULTREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeChargeResultRequestChargeModules.hpp>
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
    virtual bool empty() const override { return this->chargeCycle_ == nullptr
        && return this->chargeModules_ == nullptr && return this->payType_ == nullptr && return this->regionId_ == nullptr && return this->resourceManagerResourceGroupId_ == nullptr; };
    // chargeCycle Field Functions 
    bool hasChargeCycle() const { return this->chargeCycle_ != nullptr;};
    void deleteChargeCycle() { this->chargeCycle_ = nullptr;};
    inline string chargeCycle() const { DARABONBA_PTR_GET_DEFAULT(chargeCycle_, "") };
    inline DescribeChargeResultRequest& setChargeCycle(string chargeCycle) { DARABONBA_PTR_SET_VALUE(chargeCycle_, chargeCycle) };


    // chargeModules Field Functions 
    bool hasChargeModules() const { return this->chargeModules_ != nullptr;};
    void deleteChargeModules() { this->chargeModules_ = nullptr;};
    inline const vector<DescribeChargeResultRequestChargeModules> & chargeModules() const { DARABONBA_PTR_GET_CONST(chargeModules_, vector<DescribeChargeResultRequestChargeModules>) };
    inline vector<DescribeChargeResultRequestChargeModules> chargeModules() { DARABONBA_PTR_GET(chargeModules_, vector<DescribeChargeResultRequestChargeModules>) };
    inline DescribeChargeResultRequest& setChargeModules(const vector<DescribeChargeResultRequestChargeModules> & chargeModules) { DARABONBA_PTR_SET_VALUE(chargeModules_, chargeModules) };
    inline DescribeChargeResultRequest& setChargeModules(vector<DescribeChargeResultRequestChargeModules> && chargeModules) { DARABONBA_PTR_SET_RVALUE(chargeModules_, chargeModules) };


    // payType Field Functions 
    bool hasPayType() const { return this->payType_ != nullptr;};
    void deletePayType() { this->payType_ = nullptr;};
    inline string payType() const { DARABONBA_PTR_GET_DEFAULT(payType_, "") };
    inline DescribeChargeResultRequest& setPayType(string payType) { DARABONBA_PTR_SET_VALUE(payType_, payType) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeChargeResultRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceManagerResourceGroupId Field Functions 
    bool hasResourceManagerResourceGroupId() const { return this->resourceManagerResourceGroupId_ != nullptr;};
    void deleteResourceManagerResourceGroupId() { this->resourceManagerResourceGroupId_ = nullptr;};
    inline string resourceManagerResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceManagerResourceGroupId_, "") };
    inline DescribeChargeResultRequest& setResourceManagerResourceGroupId(string resourceManagerResourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceManagerResourceGroupId_, resourceManagerResourceGroupId) };


  protected:
    std::shared_ptr<string> chargeCycle_ = nullptr;
    // This parameter is required.
    std::shared_ptr<vector<DescribeChargeResultRequestChargeModules>> chargeModules_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> payType_ = nullptr;
    std::shared_ptr<string> regionId_ = nullptr;
    std::shared_ptr<string> resourceManagerResourceGroupId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
