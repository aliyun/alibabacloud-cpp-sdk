// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEEAIECSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEEAIECSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateEaiEcsRequestEcs.hpp>
#include <vector>
#include <alibabacloud/models/CreateEaiEcsRequestTag.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eais20190624
{
namespace Models
{
  class CreateEaiEcsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateEaiEcsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(EaisName, eaisName_);
      DARABONBA_PTR_TO_JSON(EaisType, eaisType_);
      DARABONBA_PTR_TO_JSON(Ecs, ecs_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(SecurityGroupId, securityGroupId_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
      DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateEaiEcsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(EaisName, eaisName_);
      DARABONBA_PTR_FROM_JSON(EaisType, eaisType_);
      DARABONBA_PTR_FROM_JSON(Ecs, ecs_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(SecurityGroupId, securityGroupId_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
      DARABONBA_PTR_FROM_JSON(VSwitchId, vSwitchId_);
    };
    CreateEaiEcsRequest() = default ;
    CreateEaiEcsRequest(const CreateEaiEcsRequest &) = default ;
    CreateEaiEcsRequest(CreateEaiEcsRequest &&) = default ;
    CreateEaiEcsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateEaiEcsRequest() = default ;
    CreateEaiEcsRequest& operator=(const CreateEaiEcsRequest &) = default ;
    CreateEaiEcsRequest& operator=(CreateEaiEcsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clientToken_ == nullptr
        && return this->eaisName_ == nullptr && return this->eaisType_ == nullptr && return this->ecs_ == nullptr && return this->regionId_ == nullptr && return this->resourceGroupId_ == nullptr
        && return this->securityGroupId_ == nullptr && return this->tag_ == nullptr && return this->vSwitchId_ == nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string clientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreateEaiEcsRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // eaisName Field Functions 
    bool hasEaisName() const { return this->eaisName_ != nullptr;};
    void deleteEaisName() { this->eaisName_ = nullptr;};
    inline string eaisName() const { DARABONBA_PTR_GET_DEFAULT(eaisName_, "") };
    inline CreateEaiEcsRequest& setEaisName(string eaisName) { DARABONBA_PTR_SET_VALUE(eaisName_, eaisName) };


    // eaisType Field Functions 
    bool hasEaisType() const { return this->eaisType_ != nullptr;};
    void deleteEaisType() { this->eaisType_ = nullptr;};
    inline string eaisType() const { DARABONBA_PTR_GET_DEFAULT(eaisType_, "") };
    inline CreateEaiEcsRequest& setEaisType(string eaisType) { DARABONBA_PTR_SET_VALUE(eaisType_, eaisType) };


    // ecs Field Functions 
    bool hasEcs() const { return this->ecs_ != nullptr;};
    void deleteEcs() { this->ecs_ = nullptr;};
    inline const CreateEaiEcsRequestEcs & ecs() const { DARABONBA_PTR_GET_CONST(ecs_, CreateEaiEcsRequestEcs) };
    inline CreateEaiEcsRequestEcs ecs() { DARABONBA_PTR_GET(ecs_, CreateEaiEcsRequestEcs) };
    inline CreateEaiEcsRequest& setEcs(const CreateEaiEcsRequestEcs & ecs) { DARABONBA_PTR_SET_VALUE(ecs_, ecs) };
    inline CreateEaiEcsRequest& setEcs(CreateEaiEcsRequestEcs && ecs) { DARABONBA_PTR_SET_RVALUE(ecs_, ecs) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateEaiEcsRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline CreateEaiEcsRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // securityGroupId Field Functions 
    bool hasSecurityGroupId() const { return this->securityGroupId_ != nullptr;};
    void deleteSecurityGroupId() { this->securityGroupId_ = nullptr;};
    inline string securityGroupId() const { DARABONBA_PTR_GET_DEFAULT(securityGroupId_, "") };
    inline CreateEaiEcsRequest& setSecurityGroupId(string securityGroupId) { DARABONBA_PTR_SET_VALUE(securityGroupId_, securityGroupId) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<CreateEaiEcsRequestTag> & tag() const { DARABONBA_PTR_GET_CONST(tag_, vector<CreateEaiEcsRequestTag>) };
    inline vector<CreateEaiEcsRequestTag> tag() { DARABONBA_PTR_GET(tag_, vector<CreateEaiEcsRequestTag>) };
    inline CreateEaiEcsRequest& setTag(const vector<CreateEaiEcsRequestTag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline CreateEaiEcsRequest& setTag(vector<CreateEaiEcsRequestTag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


    // vSwitchId Field Functions 
    bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
    void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
    inline string vSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
    inline CreateEaiEcsRequest& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


  protected:
    std::shared_ptr<string> clientToken_ = nullptr;
    std::shared_ptr<string> eaisName_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> eaisType_ = nullptr;
    std::shared_ptr<CreateEaiEcsRequestEcs> ecs_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> securityGroupId_ = nullptr;
    std::shared_ptr<vector<CreateEaiEcsRequestTag>> tag_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> vSwitchId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eais20190624
#endif
