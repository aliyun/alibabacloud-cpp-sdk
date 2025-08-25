// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEIMAGECACHEREQUESTNETWORKCONFIG_HPP_
#define ALIBABACLOUD_MODELS_CREATEIMAGECACHEREQUESTNETWORKCONFIG_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateImageCacheRequestNetworkConfigEipInstance.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Acc20240402
{
namespace Models
{
  class CreateImageCacheRequestNetworkConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateImageCacheRequestNetworkConfig& obj) { 
      DARABONBA_PTR_TO_JSON(EipInstance, eipInstance_);
      DARABONBA_PTR_TO_JSON(SecurityGroupId, securityGroupId_);
      DARABONBA_PTR_TO_JSON(VSwitchIds, vSwitchIds_);
    };
    friend void from_json(const Darabonba::Json& j, CreateImageCacheRequestNetworkConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(EipInstance, eipInstance_);
      DARABONBA_PTR_FROM_JSON(SecurityGroupId, securityGroupId_);
      DARABONBA_PTR_FROM_JSON(VSwitchIds, vSwitchIds_);
    };
    CreateImageCacheRequestNetworkConfig() = default ;
    CreateImageCacheRequestNetworkConfig(const CreateImageCacheRequestNetworkConfig &) = default ;
    CreateImageCacheRequestNetworkConfig(CreateImageCacheRequestNetworkConfig &&) = default ;
    CreateImageCacheRequestNetworkConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateImageCacheRequestNetworkConfig() = default ;
    CreateImageCacheRequestNetworkConfig& operator=(const CreateImageCacheRequestNetworkConfig &) = default ;
    CreateImageCacheRequestNetworkConfig& operator=(CreateImageCacheRequestNetworkConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->eipInstance_ != nullptr
        && this->securityGroupId_ != nullptr && this->vSwitchIds_ != nullptr; };
    // eipInstance Field Functions 
    bool hasEipInstance() const { return this->eipInstance_ != nullptr;};
    void deleteEipInstance() { this->eipInstance_ = nullptr;};
    inline const Models::CreateImageCacheRequestNetworkConfigEipInstance & eipInstance() const { DARABONBA_PTR_GET_CONST(eipInstance_, Models::CreateImageCacheRequestNetworkConfigEipInstance) };
    inline Models::CreateImageCacheRequestNetworkConfigEipInstance eipInstance() { DARABONBA_PTR_GET(eipInstance_, Models::CreateImageCacheRequestNetworkConfigEipInstance) };
    inline CreateImageCacheRequestNetworkConfig& setEipInstance(const Models::CreateImageCacheRequestNetworkConfigEipInstance & eipInstance) { DARABONBA_PTR_SET_VALUE(eipInstance_, eipInstance) };
    inline CreateImageCacheRequestNetworkConfig& setEipInstance(Models::CreateImageCacheRequestNetworkConfigEipInstance && eipInstance) { DARABONBA_PTR_SET_RVALUE(eipInstance_, eipInstance) };


    // securityGroupId Field Functions 
    bool hasSecurityGroupId() const { return this->securityGroupId_ != nullptr;};
    void deleteSecurityGroupId() { this->securityGroupId_ = nullptr;};
    inline string securityGroupId() const { DARABONBA_PTR_GET_DEFAULT(securityGroupId_, "") };
    inline CreateImageCacheRequestNetworkConfig& setSecurityGroupId(string securityGroupId) { DARABONBA_PTR_SET_VALUE(securityGroupId_, securityGroupId) };


    // vSwitchIds Field Functions 
    bool hasVSwitchIds() const { return this->vSwitchIds_ != nullptr;};
    void deleteVSwitchIds() { this->vSwitchIds_ = nullptr;};
    inline const vector<string> & vSwitchIds() const { DARABONBA_PTR_GET_CONST(vSwitchIds_, vector<string>) };
    inline vector<string> vSwitchIds() { DARABONBA_PTR_GET(vSwitchIds_, vector<string>) };
    inline CreateImageCacheRequestNetworkConfig& setVSwitchIds(const vector<string> & vSwitchIds) { DARABONBA_PTR_SET_VALUE(vSwitchIds_, vSwitchIds) };
    inline CreateImageCacheRequestNetworkConfig& setVSwitchIds(vector<string> && vSwitchIds) { DARABONBA_PTR_SET_RVALUE(vSwitchIds_, vSwitchIds) };


  protected:
    std::shared_ptr<Models::CreateImageCacheRequestNetworkConfigEipInstance> eipInstance_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> securityGroupId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<vector<string>> vSwitchIds_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Acc20240402
#endif
