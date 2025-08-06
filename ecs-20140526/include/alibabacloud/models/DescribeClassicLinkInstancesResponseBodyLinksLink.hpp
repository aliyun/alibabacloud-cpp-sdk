// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECLASSICLINKINSTANCESRESPONSEBODYLINKSLINK_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECLASSICLINKINSTANCESRESPONSEBODYLINKSLINK_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribeClassicLinkInstancesResponseBodyLinksLink : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeClassicLinkInstancesResponseBodyLinksLink& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeClassicLinkInstancesResponseBodyLinksLink& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
    };
    DescribeClassicLinkInstancesResponseBodyLinksLink() = default ;
    DescribeClassicLinkInstancesResponseBodyLinksLink(const DescribeClassicLinkInstancesResponseBodyLinksLink &) = default ;
    DescribeClassicLinkInstancesResponseBodyLinksLink(DescribeClassicLinkInstancesResponseBodyLinksLink &&) = default ;
    DescribeClassicLinkInstancesResponseBodyLinksLink(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeClassicLinkInstancesResponseBodyLinksLink() = default ;
    DescribeClassicLinkInstancesResponseBodyLinksLink& operator=(const DescribeClassicLinkInstancesResponseBodyLinksLink &) = default ;
    DescribeClassicLinkInstancesResponseBodyLinksLink& operator=(DescribeClassicLinkInstancesResponseBodyLinksLink &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->instanceId_ != nullptr
        && this->vpcId_ != nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DescribeClassicLinkInstancesResponseBodyLinksLink& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string vpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline DescribeClassicLinkInstancesResponseBodyLinksLink& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


  protected:
    // The instance ID.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The VPC ID.
    std::shared_ptr<string> vpcId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
