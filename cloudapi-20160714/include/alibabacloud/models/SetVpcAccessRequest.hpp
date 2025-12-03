// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SETVPCACCESSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SETVPCACCESSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/SetVpcAccessRequestTag.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class SetVpcAccessRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SetVpcAccessRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Port, port_);
      DARABONBA_PTR_TO_JSON(SecurityToken, securityToken_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
      DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
      DARABONBA_PTR_TO_JSON(VpcTargetHostName, vpcTargetHostName_);
    };
    friend void from_json(const Darabonba::Json& j, SetVpcAccessRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Port, port_);
      DARABONBA_PTR_FROM_JSON(SecurityToken, securityToken_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
      DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
      DARABONBA_PTR_FROM_JSON(VpcTargetHostName, vpcTargetHostName_);
    };
    SetVpcAccessRequest() = default ;
    SetVpcAccessRequest(const SetVpcAccessRequest &) = default ;
    SetVpcAccessRequest(SetVpcAccessRequest &&) = default ;
    SetVpcAccessRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SetVpcAccessRequest() = default ;
    SetVpcAccessRequest& operator=(const SetVpcAccessRequest &) = default ;
    SetVpcAccessRequest& operator=(SetVpcAccessRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->description_ == nullptr
        && return this->instanceId_ == nullptr && return this->name_ == nullptr && return this->port_ == nullptr && return this->securityToken_ == nullptr && return this->tag_ == nullptr
        && return this->vpcId_ == nullptr && return this->vpcTargetHostName_ == nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline SetVpcAccessRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline SetVpcAccessRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline SetVpcAccessRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // port Field Functions 
    bool hasPort() const { return this->port_ != nullptr;};
    void deletePort() { this->port_ = nullptr;};
    inline int32_t port() const { DARABONBA_PTR_GET_DEFAULT(port_, 0) };
    inline SetVpcAccessRequest& setPort(int32_t port) { DARABONBA_PTR_SET_VALUE(port_, port) };


    // securityToken Field Functions 
    bool hasSecurityToken() const { return this->securityToken_ != nullptr;};
    void deleteSecurityToken() { this->securityToken_ = nullptr;};
    inline string securityToken() const { DARABONBA_PTR_GET_DEFAULT(securityToken_, "") };
    inline SetVpcAccessRequest& setSecurityToken(string securityToken) { DARABONBA_PTR_SET_VALUE(securityToken_, securityToken) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<SetVpcAccessRequestTag> & tag() const { DARABONBA_PTR_GET_CONST(tag_, vector<SetVpcAccessRequestTag>) };
    inline vector<SetVpcAccessRequestTag> tag() { DARABONBA_PTR_GET(tag_, vector<SetVpcAccessRequestTag>) };
    inline SetVpcAccessRequest& setTag(const vector<SetVpcAccessRequestTag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline SetVpcAccessRequest& setTag(vector<SetVpcAccessRequestTag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string vpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline SetVpcAccessRequest& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


    // vpcTargetHostName Field Functions 
    bool hasVpcTargetHostName() const { return this->vpcTargetHostName_ != nullptr;};
    void deleteVpcTargetHostName() { this->vpcTargetHostName_ = nullptr;};
    inline string vpcTargetHostName() const { DARABONBA_PTR_GET_DEFAULT(vpcTargetHostName_, "") };
    inline SetVpcAccessRequest& setVpcTargetHostName(string vpcTargetHostName) { DARABONBA_PTR_SET_VALUE(vpcTargetHostName_, vpcTargetHostName) };


  protected:
    // The description of the VPC.
    std::shared_ptr<string> description_ = nullptr;
    // The ID of an ECS or SLB instance in the VPC.
    // 
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The name of the authorization. The name must be unique.
    // 
    // This parameter is required.
    std::shared_ptr<string> name_ = nullptr;
    // The port number that corresponds to the instance.
    // 
    // This parameter is required.
    std::shared_ptr<int32_t> port_ = nullptr;
    std::shared_ptr<string> securityToken_ = nullptr;
    // The tag of objects that match the rule. You can specify multiple tags.
    std::shared_ptr<vector<SetVpcAccessRequestTag>> tag_ = nullptr;
    // The ID of the VPC. The VPC must be an available one that belongs to the same account as the API.
    // 
    // This parameter is required.
    std::shared_ptr<string> vpcId_ = nullptr;
    // The host of the backend service.
    std::shared_ptr<string> vpcTargetHostName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
