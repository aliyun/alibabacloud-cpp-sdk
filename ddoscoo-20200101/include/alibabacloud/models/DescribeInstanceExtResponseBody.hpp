// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINSTANCEEXTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINSTANCEEXTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddoscoo20200101
{
namespace Models
{
  class DescribeInstanceExtResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInstanceExtResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceExtSpecs, instanceExtSpecs_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInstanceExtResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceExtSpecs, instanceExtSpecs_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeInstanceExtResponseBody() = default ;
    DescribeInstanceExtResponseBody(const DescribeInstanceExtResponseBody &) = default ;
    DescribeInstanceExtResponseBody(DescribeInstanceExtResponseBody &&) = default ;
    DescribeInstanceExtResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeInstanceExtResponseBody() = default ;
    DescribeInstanceExtResponseBody& operator=(const DescribeInstanceExtResponseBody &) = default ;
    DescribeInstanceExtResponseBody& operator=(DescribeInstanceExtResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class InstanceExtSpecs : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const InstanceExtSpecs& obj) { 
        DARABONBA_PTR_TO_JSON(FunctionVersion, functionVersion_);
        DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_TO_JSON(NormalBandwidth, normalBandwidth_);
        DARABONBA_PTR_TO_JSON(ProductPlan, productPlan_);
        DARABONBA_PTR_TO_JSON(ServicePartner, servicePartner_);
      };
      friend void from_json(const Darabonba::Json& j, InstanceExtSpecs& obj) { 
        DARABONBA_PTR_FROM_JSON(FunctionVersion, functionVersion_);
        DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_FROM_JSON(NormalBandwidth, normalBandwidth_);
        DARABONBA_PTR_FROM_JSON(ProductPlan, productPlan_);
        DARABONBA_PTR_FROM_JSON(ServicePartner, servicePartner_);
      };
      InstanceExtSpecs() = default ;
      InstanceExtSpecs(const InstanceExtSpecs &) = default ;
      InstanceExtSpecs(InstanceExtSpecs &&) = default ;
      InstanceExtSpecs(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~InstanceExtSpecs() = default ;
      InstanceExtSpecs& operator=(const InstanceExtSpecs &) = default ;
      InstanceExtSpecs& operator=(InstanceExtSpecs &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->functionVersion_ == nullptr
        && this->instanceId_ == nullptr && this->normalBandwidth_ == nullptr && this->productPlan_ == nullptr && this->servicePartner_ == nullptr; };
      // functionVersion Field Functions 
      bool hasFunctionVersion() const { return this->functionVersion_ != nullptr;};
      void deleteFunctionVersion() { this->functionVersion_ = nullptr;};
      inline int64_t getFunctionVersion() const { DARABONBA_PTR_GET_DEFAULT(functionVersion_, 0L) };
      inline InstanceExtSpecs& setFunctionVersion(int64_t functionVersion) { DARABONBA_PTR_SET_VALUE(functionVersion_, functionVersion) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline InstanceExtSpecs& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // normalBandwidth Field Functions 
      bool hasNormalBandwidth() const { return this->normalBandwidth_ != nullptr;};
      void deleteNormalBandwidth() { this->normalBandwidth_ = nullptr;};
      inline int64_t getNormalBandwidth() const { DARABONBA_PTR_GET_DEFAULT(normalBandwidth_, 0L) };
      inline InstanceExtSpecs& setNormalBandwidth(int64_t normalBandwidth) { DARABONBA_PTR_SET_VALUE(normalBandwidth_, normalBandwidth) };


      // productPlan Field Functions 
      bool hasProductPlan() const { return this->productPlan_ != nullptr;};
      void deleteProductPlan() { this->productPlan_ = nullptr;};
      inline int64_t getProductPlan() const { DARABONBA_PTR_GET_DEFAULT(productPlan_, 0L) };
      inline InstanceExtSpecs& setProductPlan(int64_t productPlan) { DARABONBA_PTR_SET_VALUE(productPlan_, productPlan) };


      // servicePartner Field Functions 
      bool hasServicePartner() const { return this->servicePartner_ != nullptr;};
      void deleteServicePartner() { this->servicePartner_ = nullptr;};
      inline string getServicePartner() const { DARABONBA_PTR_GET_DEFAULT(servicePartner_, "") };
      inline InstanceExtSpecs& setServicePartner(string servicePartner) { DARABONBA_PTR_SET_VALUE(servicePartner_, servicePartner) };


    protected:
      // The function plan. Valid values:
      // 
      // *   **0**: Standard
      // *   **1**: Enhanced
      shared_ptr<int64_t> functionVersion_ {};
      // The ID of the instance.
      shared_ptr<string> instanceId_ {};
      // The clean bandwidth. Unit: Mbit/s.
      shared_ptr<int64_t> normalBandwidth_ {};
      // The type of the instance. Valid values:
      // 
      // *   **0**: Anti-DDoS Proxy (Outside Chinese Mainland) instance of the Insurance mitigation plan
      // *   **1**: Anti-DDoS Proxy (Outside Chinese Mainland) instance of the Unlimited mitigation plan
      // *   **2**: Anti-DDoS Proxy (Outside Chinese Mainland) instance of the Chinese Mainland Acceleration (CMA) mitigation plan
      // *   **3**: Anti-DDoS Proxy (Outside Chinese Mainland) instance of the Secure Chinese Mainland Acceleration (Sec-CMA) mitigation plan
      // *   **9**: Anti-DDoS Proxy (Chinese Mainland) instance of the Profession mitigation plan
      shared_ptr<int64_t> productPlan_ {};
      // The Internet service provider (ISP) line of the Anti-DDoS Proxy (Chinese Mainland) instance.
      shared_ptr<string> servicePartner_ {};
    };

    virtual bool empty() const override { return this->instanceExtSpecs_ == nullptr
        && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // instanceExtSpecs Field Functions 
    bool hasInstanceExtSpecs() const { return this->instanceExtSpecs_ != nullptr;};
    void deleteInstanceExtSpecs() { this->instanceExtSpecs_ = nullptr;};
    inline const vector<DescribeInstanceExtResponseBody::InstanceExtSpecs> & getInstanceExtSpecs() const { DARABONBA_PTR_GET_CONST(instanceExtSpecs_, vector<DescribeInstanceExtResponseBody::InstanceExtSpecs>) };
    inline vector<DescribeInstanceExtResponseBody::InstanceExtSpecs> getInstanceExtSpecs() { DARABONBA_PTR_GET(instanceExtSpecs_, vector<DescribeInstanceExtResponseBody::InstanceExtSpecs>) };
    inline DescribeInstanceExtResponseBody& setInstanceExtSpecs(const vector<DescribeInstanceExtResponseBody::InstanceExtSpecs> & instanceExtSpecs) { DARABONBA_PTR_SET_VALUE(instanceExtSpecs_, instanceExtSpecs) };
    inline DescribeInstanceExtResponseBody& setInstanceExtSpecs(vector<DescribeInstanceExtResponseBody::InstanceExtSpecs> && instanceExtSpecs) { DARABONBA_PTR_SET_RVALUE(instanceExtSpecs_, instanceExtSpecs) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeInstanceExtResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline DescribeInstanceExtResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The extended information about the Anti-DDoS Proxy instance.
    shared_ptr<vector<DescribeInstanceExtResponseBody::InstanceExtSpecs>> instanceExtSpecs_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of queried instances.
    shared_ptr<int64_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20200101
#endif
