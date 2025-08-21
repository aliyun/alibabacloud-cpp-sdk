// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINSTANCEEXTRESPONSEBODYINSTANCEEXTSPECS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINSTANCEEXTRESPONSEBODYINSTANCEEXTSPECS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddoscoo20200101
{
namespace Models
{
  class DescribeInstanceExtResponseBodyInstanceExtSpecs : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInstanceExtResponseBodyInstanceExtSpecs& obj) { 
      DARABONBA_PTR_TO_JSON(FunctionVersion, functionVersion_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(NormalBandwidth, normalBandwidth_);
      DARABONBA_PTR_TO_JSON(ProductPlan, productPlan_);
      DARABONBA_PTR_TO_JSON(ServicePartner, servicePartner_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInstanceExtResponseBodyInstanceExtSpecs& obj) { 
      DARABONBA_PTR_FROM_JSON(FunctionVersion, functionVersion_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(NormalBandwidth, normalBandwidth_);
      DARABONBA_PTR_FROM_JSON(ProductPlan, productPlan_);
      DARABONBA_PTR_FROM_JSON(ServicePartner, servicePartner_);
    };
    DescribeInstanceExtResponseBodyInstanceExtSpecs() = default ;
    DescribeInstanceExtResponseBodyInstanceExtSpecs(const DescribeInstanceExtResponseBodyInstanceExtSpecs &) = default ;
    DescribeInstanceExtResponseBodyInstanceExtSpecs(DescribeInstanceExtResponseBodyInstanceExtSpecs &&) = default ;
    DescribeInstanceExtResponseBodyInstanceExtSpecs(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeInstanceExtResponseBodyInstanceExtSpecs() = default ;
    DescribeInstanceExtResponseBodyInstanceExtSpecs& operator=(const DescribeInstanceExtResponseBodyInstanceExtSpecs &) = default ;
    DescribeInstanceExtResponseBodyInstanceExtSpecs& operator=(DescribeInstanceExtResponseBodyInstanceExtSpecs &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->functionVersion_ != nullptr
        && this->instanceId_ != nullptr && this->normalBandwidth_ != nullptr && this->productPlan_ != nullptr && this->servicePartner_ != nullptr; };
    // functionVersion Field Functions 
    bool hasFunctionVersion() const { return this->functionVersion_ != nullptr;};
    void deleteFunctionVersion() { this->functionVersion_ = nullptr;};
    inline int64_t functionVersion() const { DARABONBA_PTR_GET_DEFAULT(functionVersion_, 0L) };
    inline DescribeInstanceExtResponseBodyInstanceExtSpecs& setFunctionVersion(int64_t functionVersion) { DARABONBA_PTR_SET_VALUE(functionVersion_, functionVersion) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DescribeInstanceExtResponseBodyInstanceExtSpecs& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // normalBandwidth Field Functions 
    bool hasNormalBandwidth() const { return this->normalBandwidth_ != nullptr;};
    void deleteNormalBandwidth() { this->normalBandwidth_ = nullptr;};
    inline int64_t normalBandwidth() const { DARABONBA_PTR_GET_DEFAULT(normalBandwidth_, 0L) };
    inline DescribeInstanceExtResponseBodyInstanceExtSpecs& setNormalBandwidth(int64_t normalBandwidth) { DARABONBA_PTR_SET_VALUE(normalBandwidth_, normalBandwidth) };


    // productPlan Field Functions 
    bool hasProductPlan() const { return this->productPlan_ != nullptr;};
    void deleteProductPlan() { this->productPlan_ = nullptr;};
    inline int64_t productPlan() const { DARABONBA_PTR_GET_DEFAULT(productPlan_, 0L) };
    inline DescribeInstanceExtResponseBodyInstanceExtSpecs& setProductPlan(int64_t productPlan) { DARABONBA_PTR_SET_VALUE(productPlan_, productPlan) };


    // servicePartner Field Functions 
    bool hasServicePartner() const { return this->servicePartner_ != nullptr;};
    void deleteServicePartner() { this->servicePartner_ = nullptr;};
    inline string servicePartner() const { DARABONBA_PTR_GET_DEFAULT(servicePartner_, "") };
    inline DescribeInstanceExtResponseBodyInstanceExtSpecs& setServicePartner(string servicePartner) { DARABONBA_PTR_SET_VALUE(servicePartner_, servicePartner) };


  protected:
    // The function plan. Valid values:
    // 
    // *   **0**: Standard
    // *   **1**: Enhanced
    std::shared_ptr<int64_t> functionVersion_ = nullptr;
    // The ID of the instance.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The clean bandwidth. Unit: Mbit/s.
    std::shared_ptr<int64_t> normalBandwidth_ = nullptr;
    // The type of the instance. Valid values:
    // 
    // *   **0**: Anti-DDoS Proxy (Outside Chinese Mainland) instance of the Insurance mitigation plan
    // *   **1**: Anti-DDoS Proxy (Outside Chinese Mainland) instance of the Unlimited mitigation plan
    // *   **2**: Anti-DDoS Proxy (Outside Chinese Mainland) instance of the Chinese Mainland Acceleration (CMA) mitigation plan
    // *   **3**: Anti-DDoS Proxy (Outside Chinese Mainland) instance of the Secure Chinese Mainland Acceleration (Sec-CMA) mitigation plan
    // *   **9**: Anti-DDoS Proxy (Chinese Mainland) instance of the Profession mitigation plan
    std::shared_ptr<int64_t> productPlan_ = nullptr;
    // The Internet service provider (ISP) line of the Anti-DDoS Proxy (Chinese Mainland) instance.
    std::shared_ptr<string> servicePartner_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20200101
#endif
