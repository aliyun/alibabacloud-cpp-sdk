// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVPCATTRIBUTERESPONSEBODYCLOUDRESOURCESCLOUDRESOURCESETTYPE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVPCATTRIBUTERESPONSEBODYCLOUDRESOURCESCLOUDRESOURCESETTYPE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class DescribeVpcAttributeResponseBodyCloudResourcesCloudResourceSetType : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVpcAttributeResponseBodyCloudResourcesCloudResourceSetType& obj) { 
      DARABONBA_PTR_TO_JSON(ResourceCount, resourceCount_);
      DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVpcAttributeResponseBodyCloudResourcesCloudResourceSetType& obj) { 
      DARABONBA_PTR_FROM_JSON(ResourceCount, resourceCount_);
      DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
    };
    DescribeVpcAttributeResponseBodyCloudResourcesCloudResourceSetType() = default ;
    DescribeVpcAttributeResponseBodyCloudResourcesCloudResourceSetType(const DescribeVpcAttributeResponseBodyCloudResourcesCloudResourceSetType &) = default ;
    DescribeVpcAttributeResponseBodyCloudResourcesCloudResourceSetType(DescribeVpcAttributeResponseBodyCloudResourcesCloudResourceSetType &&) = default ;
    DescribeVpcAttributeResponseBodyCloudResourcesCloudResourceSetType(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVpcAttributeResponseBodyCloudResourcesCloudResourceSetType() = default ;
    DescribeVpcAttributeResponseBodyCloudResourcesCloudResourceSetType& operator=(const DescribeVpcAttributeResponseBodyCloudResourcesCloudResourceSetType &) = default ;
    DescribeVpcAttributeResponseBodyCloudResourcesCloudResourceSetType& operator=(DescribeVpcAttributeResponseBodyCloudResourcesCloudResourceSetType &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->resourceCount_ == nullptr
        && return this->resourceType_ == nullptr; };
    // resourceCount Field Functions 
    bool hasResourceCount() const { return this->resourceCount_ != nullptr;};
    void deleteResourceCount() { this->resourceCount_ = nullptr;};
    inline int32_t resourceCount() const { DARABONBA_PTR_GET_DEFAULT(resourceCount_, 0) };
    inline DescribeVpcAttributeResponseBodyCloudResourcesCloudResourceSetType& setResourceCount(int32_t resourceCount) { DARABONBA_PTR_SET_VALUE(resourceCount_, resourceCount) };


    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline string resourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
    inline DescribeVpcAttributeResponseBodyCloudResourcesCloudResourceSetType& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


  protected:
    // The number of resources in the VPC.
    std::shared_ptr<int32_t> resourceCount_ = nullptr;
    // The type of resource deployed in the VPC. Valid values: Valid values:
    // 
    // *   **VSwitch**
    // *   **VRouter**
    // *   **RouteTable**
    std::shared_ptr<string> resourceType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
