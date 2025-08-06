// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINSTANCEATTACHMENTATTRIBUTESRESPONSEBODYINSTANCESINSTANCE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINSTANCEATTACHMENTATTRIBUTESRESPONSEBODYINSTANCESINSTANCE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribeInstanceAttachmentAttributesResponseBodyInstancesInstance : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInstanceAttachmentAttributesResponseBodyInstancesInstance& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(PrivatePoolOptionsId, privatePoolOptionsId_);
      DARABONBA_PTR_TO_JSON(PrivatePoolOptionsMatchCriteria, privatePoolOptionsMatchCriteria_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInstanceAttachmentAttributesResponseBodyInstancesInstance& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(PrivatePoolOptionsId, privatePoolOptionsId_);
      DARABONBA_PTR_FROM_JSON(PrivatePoolOptionsMatchCriteria, privatePoolOptionsMatchCriteria_);
    };
    DescribeInstanceAttachmentAttributesResponseBodyInstancesInstance() = default ;
    DescribeInstanceAttachmentAttributesResponseBodyInstancesInstance(const DescribeInstanceAttachmentAttributesResponseBodyInstancesInstance &) = default ;
    DescribeInstanceAttachmentAttributesResponseBodyInstancesInstance(DescribeInstanceAttachmentAttributesResponseBodyInstancesInstance &&) = default ;
    DescribeInstanceAttachmentAttributesResponseBodyInstancesInstance(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeInstanceAttachmentAttributesResponseBodyInstancesInstance() = default ;
    DescribeInstanceAttachmentAttributesResponseBodyInstancesInstance& operator=(const DescribeInstanceAttachmentAttributesResponseBodyInstancesInstance &) = default ;
    DescribeInstanceAttachmentAttributesResponseBodyInstancesInstance& operator=(DescribeInstanceAttachmentAttributesResponseBodyInstancesInstance &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->instanceId_ != nullptr
        && this->privatePoolOptionsId_ != nullptr && this->privatePoolOptionsMatchCriteria_ != nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DescribeInstanceAttachmentAttributesResponseBodyInstancesInstance& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // privatePoolOptionsId Field Functions 
    bool hasPrivatePoolOptionsId() const { return this->privatePoolOptionsId_ != nullptr;};
    void deletePrivatePoolOptionsId() { this->privatePoolOptionsId_ = nullptr;};
    inline string privatePoolOptionsId() const { DARABONBA_PTR_GET_DEFAULT(privatePoolOptionsId_, "") };
    inline DescribeInstanceAttachmentAttributesResponseBodyInstancesInstance& setPrivatePoolOptionsId(string privatePoolOptionsId) { DARABONBA_PTR_SET_VALUE(privatePoolOptionsId_, privatePoolOptionsId) };


    // privatePoolOptionsMatchCriteria Field Functions 
    bool hasPrivatePoolOptionsMatchCriteria() const { return this->privatePoolOptionsMatchCriteria_ != nullptr;};
    void deletePrivatePoolOptionsMatchCriteria() { this->privatePoolOptionsMatchCriteria_ = nullptr;};
    inline string privatePoolOptionsMatchCriteria() const { DARABONBA_PTR_GET_DEFAULT(privatePoolOptionsMatchCriteria_, "") };
    inline DescribeInstanceAttachmentAttributesResponseBodyInstancesInstance& setPrivatePoolOptionsMatchCriteria(string privatePoolOptionsMatchCriteria) { DARABONBA_PTR_SET_VALUE(privatePoolOptionsMatchCriteria_, privatePoolOptionsMatchCriteria) };


  protected:
    // The ID of the instance.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The ID of the private pool. If the value of `PrivatePoolOptionsMatchCriteria` is `Open`, the value of PrivatePoolOptionsId is the ID of the private pool that is automatically matched to the instance.
    std::shared_ptr<string> privatePoolOptionsId_ = nullptr;
    // The match mode of the private pool. Valid values:
    // 
    // *   Open: open private pool. Instances automatically match an open private pool.
    // *   Target: specified private pool. Instances match a specified private pool.
    // *   None: no private pool. Instances do not use private pools.
    std::shared_ptr<string> privatePoolOptionsMatchCriteria_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
