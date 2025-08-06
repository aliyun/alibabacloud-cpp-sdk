// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINSTANCESRESPONSEBODYINSTANCESINSTANCEDEDICATEDHOSTATTRIBUTE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINSTANCESRESPONSEBODYINSTANCESINSTANCEDEDICATEDHOSTATTRIBUTE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribeInstancesResponseBodyInstancesInstanceDedicatedHostAttribute : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInstancesResponseBodyInstancesInstanceDedicatedHostAttribute& obj) { 
      DARABONBA_PTR_TO_JSON(DedicatedHostClusterId, dedicatedHostClusterId_);
      DARABONBA_PTR_TO_JSON(DedicatedHostId, dedicatedHostId_);
      DARABONBA_PTR_TO_JSON(DedicatedHostName, dedicatedHostName_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInstancesResponseBodyInstancesInstanceDedicatedHostAttribute& obj) { 
      DARABONBA_PTR_FROM_JSON(DedicatedHostClusterId, dedicatedHostClusterId_);
      DARABONBA_PTR_FROM_JSON(DedicatedHostId, dedicatedHostId_);
      DARABONBA_PTR_FROM_JSON(DedicatedHostName, dedicatedHostName_);
    };
    DescribeInstancesResponseBodyInstancesInstanceDedicatedHostAttribute() = default ;
    DescribeInstancesResponseBodyInstancesInstanceDedicatedHostAttribute(const DescribeInstancesResponseBodyInstancesInstanceDedicatedHostAttribute &) = default ;
    DescribeInstancesResponseBodyInstancesInstanceDedicatedHostAttribute(DescribeInstancesResponseBodyInstancesInstanceDedicatedHostAttribute &&) = default ;
    DescribeInstancesResponseBodyInstancesInstanceDedicatedHostAttribute(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeInstancesResponseBodyInstancesInstanceDedicatedHostAttribute() = default ;
    DescribeInstancesResponseBodyInstancesInstanceDedicatedHostAttribute& operator=(const DescribeInstancesResponseBodyInstancesInstanceDedicatedHostAttribute &) = default ;
    DescribeInstancesResponseBodyInstancesInstanceDedicatedHostAttribute& operator=(DescribeInstancesResponseBodyInstancesInstanceDedicatedHostAttribute &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->dedicatedHostClusterId_ != nullptr
        && this->dedicatedHostId_ != nullptr && this->dedicatedHostName_ != nullptr; };
    // dedicatedHostClusterId Field Functions 
    bool hasDedicatedHostClusterId() const { return this->dedicatedHostClusterId_ != nullptr;};
    void deleteDedicatedHostClusterId() { this->dedicatedHostClusterId_ = nullptr;};
    inline string dedicatedHostClusterId() const { DARABONBA_PTR_GET_DEFAULT(dedicatedHostClusterId_, "") };
    inline DescribeInstancesResponseBodyInstancesInstanceDedicatedHostAttribute& setDedicatedHostClusterId(string dedicatedHostClusterId) { DARABONBA_PTR_SET_VALUE(dedicatedHostClusterId_, dedicatedHostClusterId) };


    // dedicatedHostId Field Functions 
    bool hasDedicatedHostId() const { return this->dedicatedHostId_ != nullptr;};
    void deleteDedicatedHostId() { this->dedicatedHostId_ = nullptr;};
    inline string dedicatedHostId() const { DARABONBA_PTR_GET_DEFAULT(dedicatedHostId_, "") };
    inline DescribeInstancesResponseBodyInstancesInstanceDedicatedHostAttribute& setDedicatedHostId(string dedicatedHostId) { DARABONBA_PTR_SET_VALUE(dedicatedHostId_, dedicatedHostId) };


    // dedicatedHostName Field Functions 
    bool hasDedicatedHostName() const { return this->dedicatedHostName_ != nullptr;};
    void deleteDedicatedHostName() { this->dedicatedHostName_ = nullptr;};
    inline string dedicatedHostName() const { DARABONBA_PTR_GET_DEFAULT(dedicatedHostName_, "") };
    inline DescribeInstancesResponseBodyInstancesInstanceDedicatedHostAttribute& setDedicatedHostName(string dedicatedHostName) { DARABONBA_PTR_SET_VALUE(dedicatedHostName_, dedicatedHostName) };


  protected:
    // The ID of the dedicated host cluster.
    std::shared_ptr<string> dedicatedHostClusterId_ = nullptr;
    // The ID of the dedicated host.
    std::shared_ptr<string> dedicatedHostId_ = nullptr;
    // The name of the dedicated host.
    std::shared_ptr<string> dedicatedHostName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
