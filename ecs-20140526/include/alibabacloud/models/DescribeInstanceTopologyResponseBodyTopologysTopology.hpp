// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINSTANCETOPOLOGYRESPONSEBODYTOPOLOGYSTOPOLOGY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINSTANCETOPOLOGYRESPONSEBODYTOPOLOGYSTOPOLOGY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribeInstanceTopologyResponseBodyTopologysTopology : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInstanceTopologyResponseBodyTopologysTopology& obj) { 
      DARABONBA_PTR_TO_JSON(HostId, hostId_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInstanceTopologyResponseBodyTopologysTopology& obj) { 
      DARABONBA_PTR_FROM_JSON(HostId, hostId_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
    };
    DescribeInstanceTopologyResponseBodyTopologysTopology() = default ;
    DescribeInstanceTopologyResponseBodyTopologysTopology(const DescribeInstanceTopologyResponseBodyTopologysTopology &) = default ;
    DescribeInstanceTopologyResponseBodyTopologysTopology(DescribeInstanceTopologyResponseBodyTopologysTopology &&) = default ;
    DescribeInstanceTopologyResponseBodyTopologysTopology(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeInstanceTopologyResponseBodyTopologysTopology() = default ;
    DescribeInstanceTopologyResponseBodyTopologysTopology& operator=(const DescribeInstanceTopologyResponseBodyTopologysTopology &) = default ;
    DescribeInstanceTopologyResponseBodyTopologysTopology& operator=(DescribeInstanceTopologyResponseBodyTopologysTopology &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->hostId_ == nullptr
        && return this->instanceId_ == nullptr; };
    // hostId Field Functions 
    bool hasHostId() const { return this->hostId_ != nullptr;};
    void deleteHostId() { this->hostId_ = nullptr;};
    inline string hostId() const { DARABONBA_PTR_GET_DEFAULT(hostId_, "") };
    inline DescribeInstanceTopologyResponseBodyTopologysTopology& setHostId(string hostId) { DARABONBA_PTR_SET_VALUE(hostId_, hostId) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DescribeInstanceTopologyResponseBodyTopologysTopology& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


  protected:
    // The ID of the host where the ECS instance resides. This parameter is encrypted and cannot match the ID of the ECS instance. However, if the values of this parameter for different ECS instances are the same, the ECS instances reside on the same host.
    std::shared_ptr<string> hostId_ = nullptr;
    // The instance ID.
    std::shared_ptr<string> instanceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
