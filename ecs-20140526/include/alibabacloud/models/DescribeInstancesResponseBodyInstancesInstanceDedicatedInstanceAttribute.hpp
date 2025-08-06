// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINSTANCESRESPONSEBODYINSTANCESINSTANCEDEDICATEDINSTANCEATTRIBUTE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINSTANCESRESPONSEBODYINSTANCESINSTANCEDEDICATEDINSTANCEATTRIBUTE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribeInstancesResponseBodyInstancesInstanceDedicatedInstanceAttribute : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInstancesResponseBodyInstancesInstanceDedicatedInstanceAttribute& obj) { 
      DARABONBA_PTR_TO_JSON(Affinity, affinity_);
      DARABONBA_PTR_TO_JSON(Tenancy, tenancy_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInstancesResponseBodyInstancesInstanceDedicatedInstanceAttribute& obj) { 
      DARABONBA_PTR_FROM_JSON(Affinity, affinity_);
      DARABONBA_PTR_FROM_JSON(Tenancy, tenancy_);
    };
    DescribeInstancesResponseBodyInstancesInstanceDedicatedInstanceAttribute() = default ;
    DescribeInstancesResponseBodyInstancesInstanceDedicatedInstanceAttribute(const DescribeInstancesResponseBodyInstancesInstanceDedicatedInstanceAttribute &) = default ;
    DescribeInstancesResponseBodyInstancesInstanceDedicatedInstanceAttribute(DescribeInstancesResponseBodyInstancesInstanceDedicatedInstanceAttribute &&) = default ;
    DescribeInstancesResponseBodyInstancesInstanceDedicatedInstanceAttribute(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeInstancesResponseBodyInstancesInstanceDedicatedInstanceAttribute() = default ;
    DescribeInstancesResponseBodyInstancesInstanceDedicatedInstanceAttribute& operator=(const DescribeInstancesResponseBodyInstancesInstanceDedicatedInstanceAttribute &) = default ;
    DescribeInstancesResponseBodyInstancesInstanceDedicatedInstanceAttribute& operator=(DescribeInstancesResponseBodyInstancesInstanceDedicatedInstanceAttribute &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->affinity_ != nullptr
        && this->tenancy_ != nullptr; };
    // affinity Field Functions 
    bool hasAffinity() const { return this->affinity_ != nullptr;};
    void deleteAffinity() { this->affinity_ = nullptr;};
    inline string affinity() const { DARABONBA_PTR_GET_DEFAULT(affinity_, "") };
    inline DescribeInstancesResponseBodyInstancesInstanceDedicatedInstanceAttribute& setAffinity(string affinity) { DARABONBA_PTR_SET_VALUE(affinity_, affinity) };


    // tenancy Field Functions 
    bool hasTenancy() const { return this->tenancy_ != nullptr;};
    void deleteTenancy() { this->tenancy_ = nullptr;};
    inline string tenancy() const { DARABONBA_PTR_GET_DEFAULT(tenancy_, "") };
    inline DescribeInstancesResponseBodyInstancesInstanceDedicatedInstanceAttribute& setTenancy(string tenancy) { DARABONBA_PTR_SET_VALUE(tenancy_, tenancy) };


  protected:
    // Indicates whether the instance on the dedicated host is associated with the dedicated host. Valid values:
    // 
    // *   default: The instance is not associated with the dedicated host. When the instance is restarted from economical mode, the instance may be automatically deployed on another dedicated host in the automatic deployment resource pool.
    // *   host: The instance is associated with the dedicated host. When the instance is restarted from economical mode, the instance is still deployed on the original dedicated host.
    std::shared_ptr<string> affinity_ = nullptr;
    // Indicates whether the instance is hosted on a dedicated host. Valid values:
    // 
    // *   default: The instance is not hosted on a dedicated host.
    // *   host: The instance is hosted on a dedicated host.
    std::shared_ptr<string> tenancy_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
