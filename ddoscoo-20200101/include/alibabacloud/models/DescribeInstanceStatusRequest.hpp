// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINSTANCESTATUSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINSTANCESTATUSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddoscoo20200101
{
namespace Models
{
  class DescribeInstanceStatusRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInstanceStatusRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(ProductType, productType_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInstanceStatusRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(ProductType, productType_);
    };
    DescribeInstanceStatusRequest() = default ;
    DescribeInstanceStatusRequest(const DescribeInstanceStatusRequest &) = default ;
    DescribeInstanceStatusRequest(DescribeInstanceStatusRequest &&) = default ;
    DescribeInstanceStatusRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeInstanceStatusRequest() = default ;
    DescribeInstanceStatusRequest& operator=(const DescribeInstanceStatusRequest &) = default ;
    DescribeInstanceStatusRequest& operator=(DescribeInstanceStatusRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceId_ == nullptr
        && this->productType_ == nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DescribeInstanceStatusRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // productType Field Functions 
    bool hasProductType() const { return this->productType_ != nullptr;};
    void deleteProductType() { this->productType_ = nullptr;};
    inline int32_t getProductType() const { DARABONBA_PTR_GET_DEFAULT(productType_, 0) };
    inline DescribeInstanceStatusRequest& setProductType(int32_t productType) { DARABONBA_PTR_SET_VALUE(productType_, productType) };


  protected:
    // The ID of the Anti-DDoS Proxy instance to query.
    // 
    // >  You can call the [DescribeInstanceIds](https://help.aliyun.com/document_detail/157459.html) operation to query the IDs of all Anti-DDoS Proxy (Chinese Mainland) or Anti-DDoS Proxy (Outside Chinese Mainland) instances.
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // The type of the Anti-DDoS Proxy instance to query. Valid values:
    // 
    // *   **1**: an Anti-DDoS Proxy (Chinese Mainland) instance
    // *   **2**: an Anti-DDoS Proxy (Outside Chinese Mainland) instance
    // 
    // This parameter is required.
    shared_ptr<int32_t> productType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20200101
#endif
