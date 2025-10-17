// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPORTRANGELISTASSOCIATIONSRESPONSEBODYPORTRANGELISTASSOCIATIONS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPORTRANGELISTASSOCIATIONSRESPONSEBODYPORTRANGELISTASSOCIATIONS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribePortRangeListAssociationsResponseBodyPortRangeListAssociations : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePortRangeListAssociationsResponseBodyPortRangeListAssociations& obj) { 
      DARABONBA_PTR_TO_JSON(ResourceId, resourceId_);
      DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePortRangeListAssociationsResponseBodyPortRangeListAssociations& obj) { 
      DARABONBA_PTR_FROM_JSON(ResourceId, resourceId_);
      DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
    };
    DescribePortRangeListAssociationsResponseBodyPortRangeListAssociations() = default ;
    DescribePortRangeListAssociationsResponseBodyPortRangeListAssociations(const DescribePortRangeListAssociationsResponseBodyPortRangeListAssociations &) = default ;
    DescribePortRangeListAssociationsResponseBodyPortRangeListAssociations(DescribePortRangeListAssociationsResponseBodyPortRangeListAssociations &&) = default ;
    DescribePortRangeListAssociationsResponseBodyPortRangeListAssociations(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePortRangeListAssociationsResponseBodyPortRangeListAssociations() = default ;
    DescribePortRangeListAssociationsResponseBodyPortRangeListAssociations& operator=(const DescribePortRangeListAssociationsResponseBodyPortRangeListAssociations &) = default ;
    DescribePortRangeListAssociationsResponseBodyPortRangeListAssociations& operator=(DescribePortRangeListAssociationsResponseBodyPortRangeListAssociations &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->resourceId_ == nullptr
        && return this->resourceType_ == nullptr; };
    // resourceId Field Functions 
    bool hasResourceId() const { return this->resourceId_ != nullptr;};
    void deleteResourceId() { this->resourceId_ = nullptr;};
    inline string resourceId() const { DARABONBA_PTR_GET_DEFAULT(resourceId_, "") };
    inline DescribePortRangeListAssociationsResponseBodyPortRangeListAssociations& setResourceId(string resourceId) { DARABONBA_PTR_SET_VALUE(resourceId_, resourceId) };


    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline string resourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
    inline DescribePortRangeListAssociationsResponseBodyPortRangeListAssociations& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


  protected:
    // The ID of the resource.
    std::shared_ptr<string> resourceId_ = nullptr;
    // The type of the resource. Valid value: SecurityGroup.
    std::shared_ptr<string> resourceType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
