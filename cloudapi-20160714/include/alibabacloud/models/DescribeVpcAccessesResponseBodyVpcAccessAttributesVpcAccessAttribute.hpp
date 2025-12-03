// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVPCACCESSESRESPONSEBODYVPCACCESSATTRIBUTESVPCACCESSATTRIBUTE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVPCACCESSESRESPONSEBODYVPCACCESSATTRIBUTESVPCACCESSATTRIBUTE_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeVpcAccessesResponseBodyVpcAccessAttributesVpcAccessAttributeTags.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class DescribeVpcAccessesResponseBodyVpcAccessAttributesVpcAccessAttribute : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVpcAccessesResponseBodyVpcAccessAttributesVpcAccessAttribute& obj) { 
      DARABONBA_PTR_TO_JSON(CreatedTime, createdTime_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Port, port_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
      DARABONBA_PTR_TO_JSON(VpcAccessId, vpcAccessId_);
      DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
      DARABONBA_PTR_TO_JSON(VpcTargetHostName, vpcTargetHostName_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVpcAccessesResponseBodyVpcAccessAttributesVpcAccessAttribute& obj) { 
      DARABONBA_PTR_FROM_JSON(CreatedTime, createdTime_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Port, port_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
      DARABONBA_PTR_FROM_JSON(VpcAccessId, vpcAccessId_);
      DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
      DARABONBA_PTR_FROM_JSON(VpcTargetHostName, vpcTargetHostName_);
    };
    DescribeVpcAccessesResponseBodyVpcAccessAttributesVpcAccessAttribute() = default ;
    DescribeVpcAccessesResponseBodyVpcAccessAttributesVpcAccessAttribute(const DescribeVpcAccessesResponseBodyVpcAccessAttributesVpcAccessAttribute &) = default ;
    DescribeVpcAccessesResponseBodyVpcAccessAttributesVpcAccessAttribute(DescribeVpcAccessesResponseBodyVpcAccessAttributesVpcAccessAttribute &&) = default ;
    DescribeVpcAccessesResponseBodyVpcAccessAttributesVpcAccessAttribute(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVpcAccessesResponseBodyVpcAccessAttributesVpcAccessAttribute() = default ;
    DescribeVpcAccessesResponseBodyVpcAccessAttributesVpcAccessAttribute& operator=(const DescribeVpcAccessesResponseBodyVpcAccessAttributesVpcAccessAttribute &) = default ;
    DescribeVpcAccessesResponseBodyVpcAccessAttributesVpcAccessAttribute& operator=(DescribeVpcAccessesResponseBodyVpcAccessAttributesVpcAccessAttribute &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->createdTime_ == nullptr
        && return this->description_ == nullptr && return this->instanceId_ == nullptr && return this->name_ == nullptr && return this->port_ == nullptr && return this->regionId_ == nullptr
        && return this->tags_ == nullptr && return this->vpcAccessId_ == nullptr && return this->vpcId_ == nullptr && return this->vpcTargetHostName_ == nullptr; };
    // createdTime Field Functions 
    bool hasCreatedTime() const { return this->createdTime_ != nullptr;};
    void deleteCreatedTime() { this->createdTime_ = nullptr;};
    inline string createdTime() const { DARABONBA_PTR_GET_DEFAULT(createdTime_, "") };
    inline DescribeVpcAccessesResponseBodyVpcAccessAttributesVpcAccessAttribute& setCreatedTime(string createdTime) { DARABONBA_PTR_SET_VALUE(createdTime_, createdTime) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribeVpcAccessesResponseBodyVpcAccessAttributesVpcAccessAttribute& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DescribeVpcAccessesResponseBodyVpcAccessAttributesVpcAccessAttribute& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeVpcAccessesResponseBodyVpcAccessAttributesVpcAccessAttribute& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // port Field Functions 
    bool hasPort() const { return this->port_ != nullptr;};
    void deletePort() { this->port_ = nullptr;};
    inline int32_t port() const { DARABONBA_PTR_GET_DEFAULT(port_, 0) };
    inline DescribeVpcAccessesResponseBodyVpcAccessAttributesVpcAccessAttribute& setPort(int32_t port) { DARABONBA_PTR_SET_VALUE(port_, port) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeVpcAccessesResponseBodyVpcAccessAttributesVpcAccessAttribute& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const Models::DescribeVpcAccessesResponseBodyVpcAccessAttributesVpcAccessAttributeTags & tags() const { DARABONBA_PTR_GET_CONST(tags_, Models::DescribeVpcAccessesResponseBodyVpcAccessAttributesVpcAccessAttributeTags) };
    inline Models::DescribeVpcAccessesResponseBodyVpcAccessAttributesVpcAccessAttributeTags tags() { DARABONBA_PTR_GET(tags_, Models::DescribeVpcAccessesResponseBodyVpcAccessAttributesVpcAccessAttributeTags) };
    inline DescribeVpcAccessesResponseBodyVpcAccessAttributesVpcAccessAttribute& setTags(const Models::DescribeVpcAccessesResponseBodyVpcAccessAttributesVpcAccessAttributeTags & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline DescribeVpcAccessesResponseBodyVpcAccessAttributesVpcAccessAttribute& setTags(Models::DescribeVpcAccessesResponseBodyVpcAccessAttributesVpcAccessAttributeTags && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // vpcAccessId Field Functions 
    bool hasVpcAccessId() const { return this->vpcAccessId_ != nullptr;};
    void deleteVpcAccessId() { this->vpcAccessId_ = nullptr;};
    inline string vpcAccessId() const { DARABONBA_PTR_GET_DEFAULT(vpcAccessId_, "") };
    inline DescribeVpcAccessesResponseBodyVpcAccessAttributesVpcAccessAttribute& setVpcAccessId(string vpcAccessId) { DARABONBA_PTR_SET_VALUE(vpcAccessId_, vpcAccessId) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string vpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline DescribeVpcAccessesResponseBodyVpcAccessAttributesVpcAccessAttribute& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


    // vpcTargetHostName Field Functions 
    bool hasVpcTargetHostName() const { return this->vpcTargetHostName_ != nullptr;};
    void deleteVpcTargetHostName() { this->vpcTargetHostName_ = nullptr;};
    inline string vpcTargetHostName() const { DARABONBA_PTR_GET_DEFAULT(vpcTargetHostName_, "") };
    inline DescribeVpcAccessesResponseBodyVpcAccessAttributesVpcAccessAttribute& setVpcTargetHostName(string vpcTargetHostName) { DARABONBA_PTR_SET_VALUE(vpcTargetHostName_, vpcTargetHostName) };


  protected:
    // The time when the authorization was created.
    std::shared_ptr<string> createdTime_ = nullptr;
    // The description of the VPC access authorization.
    std::shared_ptr<string> description_ = nullptr;
    // The ID of an Elastic Compute Service (ECS) or Server Load Balancer (SLB) instance in the VPC.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The name of the authorization.
    std::shared_ptr<string> name_ = nullptr;
    // The port number that corresponds to the instance.
    std::shared_ptr<int32_t> port_ = nullptr;
    // The region ID.
    std::shared_ptr<string> regionId_ = nullptr;
    // The tags.
    std::shared_ptr<Models::DescribeVpcAccessesResponseBodyVpcAccessAttributesVpcAccessAttributeTags> tags_ = nullptr;
    // The ID of the VPC access authorization.
    std::shared_ptr<string> vpcAccessId_ = nullptr;
    // The VPC ID.
    std::shared_ptr<string> vpcId_ = nullptr;
    // The host of the backend service.
    std::shared_ptr<string> vpcTargetHostName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
