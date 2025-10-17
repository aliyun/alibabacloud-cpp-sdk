// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEACCOUNTATTRIBUTESRESPONSEBODYACCOUNTATTRIBUTEITEMSACCOUNTATTRIBUTEITEM_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEACCOUNTATTRIBUTESRESPONSEBODYACCOUNTATTRIBUTEITEMSACCOUNTATTRIBUTEITEM_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeAccountAttributesResponseBodyAccountAttributeItemsAccountAttributeItemAttributeValues.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribeAccountAttributesResponseBodyAccountAttributeItemsAccountAttributeItem : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAccountAttributesResponseBodyAccountAttributeItemsAccountAttributeItem& obj) { 
      DARABONBA_PTR_TO_JSON(AttributeName, attributeName_);
      DARABONBA_PTR_TO_JSON(AttributeValues, attributeValues_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAccountAttributesResponseBodyAccountAttributeItemsAccountAttributeItem& obj) { 
      DARABONBA_PTR_FROM_JSON(AttributeName, attributeName_);
      DARABONBA_PTR_FROM_JSON(AttributeValues, attributeValues_);
    };
    DescribeAccountAttributesResponseBodyAccountAttributeItemsAccountAttributeItem() = default ;
    DescribeAccountAttributesResponseBodyAccountAttributeItemsAccountAttributeItem(const DescribeAccountAttributesResponseBodyAccountAttributeItemsAccountAttributeItem &) = default ;
    DescribeAccountAttributesResponseBodyAccountAttributeItemsAccountAttributeItem(DescribeAccountAttributesResponseBodyAccountAttributeItemsAccountAttributeItem &&) = default ;
    DescribeAccountAttributesResponseBodyAccountAttributeItemsAccountAttributeItem(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAccountAttributesResponseBodyAccountAttributeItemsAccountAttributeItem() = default ;
    DescribeAccountAttributesResponseBodyAccountAttributeItemsAccountAttributeItem& operator=(const DescribeAccountAttributesResponseBodyAccountAttributeItemsAccountAttributeItem &) = default ;
    DescribeAccountAttributesResponseBodyAccountAttributeItemsAccountAttributeItem& operator=(DescribeAccountAttributesResponseBodyAccountAttributeItemsAccountAttributeItem &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->attributeName_ == nullptr
        && return this->attributeValues_ == nullptr; };
    // attributeName Field Functions 
    bool hasAttributeName() const { return this->attributeName_ != nullptr;};
    void deleteAttributeName() { this->attributeName_ = nullptr;};
    inline string attributeName() const { DARABONBA_PTR_GET_DEFAULT(attributeName_, "") };
    inline DescribeAccountAttributesResponseBodyAccountAttributeItemsAccountAttributeItem& setAttributeName(string attributeName) { DARABONBA_PTR_SET_VALUE(attributeName_, attributeName) };


    // attributeValues Field Functions 
    bool hasAttributeValues() const { return this->attributeValues_ != nullptr;};
    void deleteAttributeValues() { this->attributeValues_ = nullptr;};
    inline const Models::DescribeAccountAttributesResponseBodyAccountAttributeItemsAccountAttributeItemAttributeValues & attributeValues() const { DARABONBA_PTR_GET_CONST(attributeValues_, Models::DescribeAccountAttributesResponseBodyAccountAttributeItemsAccountAttributeItemAttributeValues) };
    inline Models::DescribeAccountAttributesResponseBodyAccountAttributeItemsAccountAttributeItemAttributeValues attributeValues() { DARABONBA_PTR_GET(attributeValues_, Models::DescribeAccountAttributesResponseBodyAccountAttributeItemsAccountAttributeItemAttributeValues) };
    inline DescribeAccountAttributesResponseBodyAccountAttributeItemsAccountAttributeItem& setAttributeValues(const Models::DescribeAccountAttributesResponseBodyAccountAttributeItemsAccountAttributeItemAttributeValues & attributeValues) { DARABONBA_PTR_SET_VALUE(attributeValues_, attributeValues) };
    inline DescribeAccountAttributesResponseBodyAccountAttributeItemsAccountAttributeItem& setAttributeValues(Models::DescribeAccountAttributesResponseBodyAccountAttributeItemsAccountAttributeItemAttributeValues && attributeValues) { DARABONBA_PTR_SET_RVALUE(attributeValues_, attributeValues) };


  protected:
    // The type of the resource quota in the specified region. Valid values:
    // 
    // *   instance-network-type: the available network types.
    // *   max-security-groups: the maximum number of security groups.
    // *   max-elastic-network-interfaces: the maximum number of ENIs.
    // *   max-postpaid-instance-vcpu-count: the maximum number of vCPUs for pay-as-you-go instances.
    // *   max-spot-instance-vcpu-count: the maximum number of vCPUs for spot instances.
    // *   used-postpaid-instance-vcpu-count: the number of vCPUs that were allocated to pay-as-you-go instances.
    // *   used-spot-instance-vcpu-count: the number of vCPUs that were allocated to spot instances.
    // *   max-postpaid-yundisk-capacity: the maximum capacity of pay-as-you-go data disks. (The value is deprecated.)
    // *   used-postpaid-yundisk-capacity: the capacity of pay-as-you-go data disks that were created. (The value is deprecated.)
    // *   max-dedicated-hosts: the maximum number of dedicated hosts.
    // *   supported-postpaid-instance-types: the instance types of pay-as-you-go I/O optimized instances.
    // *   max-axt-command-count: the maximum number of Cloud Assistant commands.
    // *   max-axt-invocation-daily: the maximum number of Cloud Assistant command executions per day.
    // *   real-name-authentication: whether the account completed the real-name verification.
    // *   max-cloud-assistant-activation-count: the maximum number of activation codes that can be created to use to register managed instances.
    std::shared_ptr<string> attributeName_ = nullptr;
    // The values of resource quotas.
    std::shared_ptr<Models::DescribeAccountAttributesResponseBodyAccountAttributeItemsAccountAttributeItemAttributeValues> attributeValues_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
