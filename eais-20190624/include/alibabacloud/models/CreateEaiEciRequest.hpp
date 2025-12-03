// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEEAIECIREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEEAIECIREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateEaiEciRequestEci.hpp>
#include <vector>
#include <alibabacloud/models/CreateEaiEciRequestTag.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eais20190624
{
namespace Models
{
  class CreateEaiEciRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateEaiEciRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(EaisName, eaisName_);
      DARABONBA_PTR_TO_JSON(EaisType, eaisType_);
      DARABONBA_PTR_TO_JSON(Eci, eci_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(SecurityGroupId, securityGroupId_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
      DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateEaiEciRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(EaisName, eaisName_);
      DARABONBA_PTR_FROM_JSON(EaisType, eaisType_);
      DARABONBA_PTR_FROM_JSON(Eci, eci_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(SecurityGroupId, securityGroupId_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
      DARABONBA_PTR_FROM_JSON(VSwitchId, vSwitchId_);
    };
    CreateEaiEciRequest() = default ;
    CreateEaiEciRequest(const CreateEaiEciRequest &) = default ;
    CreateEaiEciRequest(CreateEaiEciRequest &&) = default ;
    CreateEaiEciRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateEaiEciRequest() = default ;
    CreateEaiEciRequest& operator=(const CreateEaiEciRequest &) = default ;
    CreateEaiEciRequest& operator=(CreateEaiEciRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clientToken_ == nullptr
        && return this->eaisName_ == nullptr && return this->eaisType_ == nullptr && return this->eci_ == nullptr && return this->regionId_ == nullptr && return this->resourceGroupId_ == nullptr
        && return this->securityGroupId_ == nullptr && return this->tag_ == nullptr && return this->vSwitchId_ == nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string clientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreateEaiEciRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // eaisName Field Functions 
    bool hasEaisName() const { return this->eaisName_ != nullptr;};
    void deleteEaisName() { this->eaisName_ = nullptr;};
    inline string eaisName() const { DARABONBA_PTR_GET_DEFAULT(eaisName_, "") };
    inline CreateEaiEciRequest& setEaisName(string eaisName) { DARABONBA_PTR_SET_VALUE(eaisName_, eaisName) };


    // eaisType Field Functions 
    bool hasEaisType() const { return this->eaisType_ != nullptr;};
    void deleteEaisType() { this->eaisType_ = nullptr;};
    inline string eaisType() const { DARABONBA_PTR_GET_DEFAULT(eaisType_, "") };
    inline CreateEaiEciRequest& setEaisType(string eaisType) { DARABONBA_PTR_SET_VALUE(eaisType_, eaisType) };


    // eci Field Functions 
    bool hasEci() const { return this->eci_ != nullptr;};
    void deleteEci() { this->eci_ = nullptr;};
    inline const CreateEaiEciRequestEci & eci() const { DARABONBA_PTR_GET_CONST(eci_, CreateEaiEciRequestEci) };
    inline CreateEaiEciRequestEci eci() { DARABONBA_PTR_GET(eci_, CreateEaiEciRequestEci) };
    inline CreateEaiEciRequest& setEci(const CreateEaiEciRequestEci & eci) { DARABONBA_PTR_SET_VALUE(eci_, eci) };
    inline CreateEaiEciRequest& setEci(CreateEaiEciRequestEci && eci) { DARABONBA_PTR_SET_RVALUE(eci_, eci) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateEaiEciRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline CreateEaiEciRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // securityGroupId Field Functions 
    bool hasSecurityGroupId() const { return this->securityGroupId_ != nullptr;};
    void deleteSecurityGroupId() { this->securityGroupId_ = nullptr;};
    inline string securityGroupId() const { DARABONBA_PTR_GET_DEFAULT(securityGroupId_, "") };
    inline CreateEaiEciRequest& setSecurityGroupId(string securityGroupId) { DARABONBA_PTR_SET_VALUE(securityGroupId_, securityGroupId) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<CreateEaiEciRequestTag> & tag() const { DARABONBA_PTR_GET_CONST(tag_, vector<CreateEaiEciRequestTag>) };
    inline vector<CreateEaiEciRequestTag> tag() { DARABONBA_PTR_GET(tag_, vector<CreateEaiEciRequestTag>) };
    inline CreateEaiEciRequest& setTag(const vector<CreateEaiEciRequestTag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline CreateEaiEciRequest& setTag(vector<CreateEaiEciRequestTag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


    // vSwitchId Field Functions 
    bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
    void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
    inline string vSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
    inline CreateEaiEciRequest& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


  protected:
    std::shared_ptr<string> clientToken_ = nullptr;
    std::shared_ptr<string> eaisName_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> eaisType_ = nullptr;
    std::shared_ptr<CreateEaiEciRequestEci> eci_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> securityGroupId_ = nullptr;
    std::shared_ptr<vector<CreateEaiEciRequestTag>> tag_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> vSwitchId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eais20190624
#endif
