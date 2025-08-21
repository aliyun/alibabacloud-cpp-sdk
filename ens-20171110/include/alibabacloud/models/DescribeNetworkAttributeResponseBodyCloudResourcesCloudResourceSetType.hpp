// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBENETWORKATTRIBUTERESPONSEBODYCLOUDRESOURCESCLOUDRESOURCESETTYPE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBENETWORKATTRIBUTERESPONSEBODYCLOUDRESOURCESCLOUDRESOURCESETTYPE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class DescribeNetworkAttributeResponseBodyCloudResourcesCloudResourceSetType : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeNetworkAttributeResponseBodyCloudResourcesCloudResourceSetType& obj) { 
      DARABONBA_PTR_TO_JSON(ResourceCount, resourceCount_);
      DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeNetworkAttributeResponseBodyCloudResourcesCloudResourceSetType& obj) { 
      DARABONBA_PTR_FROM_JSON(ResourceCount, resourceCount_);
      DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
    };
    DescribeNetworkAttributeResponseBodyCloudResourcesCloudResourceSetType() = default ;
    DescribeNetworkAttributeResponseBodyCloudResourcesCloudResourceSetType(const DescribeNetworkAttributeResponseBodyCloudResourcesCloudResourceSetType &) = default ;
    DescribeNetworkAttributeResponseBodyCloudResourcesCloudResourceSetType(DescribeNetworkAttributeResponseBodyCloudResourcesCloudResourceSetType &&) = default ;
    DescribeNetworkAttributeResponseBodyCloudResourcesCloudResourceSetType(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeNetworkAttributeResponseBodyCloudResourcesCloudResourceSetType() = default ;
    DescribeNetworkAttributeResponseBodyCloudResourcesCloudResourceSetType& operator=(const DescribeNetworkAttributeResponseBodyCloudResourcesCloudResourceSetType &) = default ;
    DescribeNetworkAttributeResponseBodyCloudResourcesCloudResourceSetType& operator=(DescribeNetworkAttributeResponseBodyCloudResourcesCloudResourceSetType &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->resourceCount_ != nullptr
        && this->resourceType_ != nullptr; };
    // resourceCount Field Functions 
    bool hasResourceCount() const { return this->resourceCount_ != nullptr;};
    void deleteResourceCount() { this->resourceCount_ = nullptr;};
    inline int32_t resourceCount() const { DARABONBA_PTR_GET_DEFAULT(resourceCount_, 0) };
    inline DescribeNetworkAttributeResponseBodyCloudResourcesCloudResourceSetType& setResourceCount(int32_t resourceCount) { DARABONBA_PTR_SET_VALUE(resourceCount_, resourceCount) };


    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline string resourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
    inline DescribeNetworkAttributeResponseBodyCloudResourcesCloudResourceSetType& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


  protected:
    // The number of resources in the network.
    std::shared_ptr<int32_t> resourceCount_ = nullptr;
    // The resource type. VSwitch.
    std::shared_ptr<string> resourceType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
