// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERCELASTICSCALINGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERCELASTICSCALINGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class DescribeRCElasticScalingRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRCElasticScalingRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceChargeType, instanceChargeType_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(InstanceType, instanceType_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(SupportCase, supportCase_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRCElasticScalingRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceChargeType, instanceChargeType_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(InstanceType, instanceType_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(SupportCase, supportCase_);
    };
    DescribeRCElasticScalingRequest() = default ;
    DescribeRCElasticScalingRequest(const DescribeRCElasticScalingRequest &) = default ;
    DescribeRCElasticScalingRequest(DescribeRCElasticScalingRequest &&) = default ;
    DescribeRCElasticScalingRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRCElasticScalingRequest() = default ;
    DescribeRCElasticScalingRequest& operator=(const DescribeRCElasticScalingRequest &) = default ;
    DescribeRCElasticScalingRequest& operator=(DescribeRCElasticScalingRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceChargeType_ == nullptr
        && return this->instanceId_ == nullptr && return this->instanceType_ == nullptr && return this->regionId_ == nullptr && return this->supportCase_ == nullptr; };
    // instanceChargeType Field Functions 
    bool hasInstanceChargeType() const { return this->instanceChargeType_ != nullptr;};
    void deleteInstanceChargeType() { this->instanceChargeType_ = nullptr;};
    inline string instanceChargeType() const { DARABONBA_PTR_GET_DEFAULT(instanceChargeType_, "") };
    inline DescribeRCElasticScalingRequest& setInstanceChargeType(string instanceChargeType) { DARABONBA_PTR_SET_VALUE(instanceChargeType_, instanceChargeType) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DescribeRCElasticScalingRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // instanceType Field Functions 
    bool hasInstanceType() const { return this->instanceType_ != nullptr;};
    void deleteInstanceType() { this->instanceType_ = nullptr;};
    inline string instanceType() const { DARABONBA_PTR_GET_DEFAULT(instanceType_, "") };
    inline DescribeRCElasticScalingRequest& setInstanceType(string instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeRCElasticScalingRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // supportCase Field Functions 
    bool hasSupportCase() const { return this->supportCase_ != nullptr;};
    void deleteSupportCase() { this->supportCase_ = nullptr;};
    inline string supportCase() const { DARABONBA_PTR_GET_DEFAULT(supportCase_, "") };
    inline DescribeRCElasticScalingRequest& setSupportCase(string supportCase) { DARABONBA_PTR_SET_VALUE(supportCase_, supportCase) };


  protected:
    std::shared_ptr<string> instanceChargeType_ = nullptr;
    std::shared_ptr<string> instanceId_ = nullptr;
    std::shared_ptr<string> instanceType_ = nullptr;
    std::shared_ptr<string> regionId_ = nullptr;
    std::shared_ptr<string> supportCase_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
