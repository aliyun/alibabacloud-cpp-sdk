// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETIMAGECACHERESPONSEBODYNETWORKCONFIG_HPP_
#define ALIBABACLOUD_MODELS_GETIMAGECACHERESPONSEBODYNETWORKCONFIG_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetImageCacheResponseBodyNetworkConfigEipInstance.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Acc20240402
{
namespace Models
{
  class GetImageCacheResponseBodyNetworkConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetImageCacheResponseBodyNetworkConfig& obj) { 
      DARABONBA_PTR_TO_JSON(EipInstance, eipInstance_);
      DARABONBA_PTR_TO_JSON(SecurityGroupId, securityGroupId_);
      DARABONBA_PTR_TO_JSON(VSwitchIds, vSwitchIds_);
    };
    friend void from_json(const Darabonba::Json& j, GetImageCacheResponseBodyNetworkConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(EipInstance, eipInstance_);
      DARABONBA_PTR_FROM_JSON(SecurityGroupId, securityGroupId_);
      DARABONBA_PTR_FROM_JSON(VSwitchIds, vSwitchIds_);
    };
    GetImageCacheResponseBodyNetworkConfig() = default ;
    GetImageCacheResponseBodyNetworkConfig(const GetImageCacheResponseBodyNetworkConfig &) = default ;
    GetImageCacheResponseBodyNetworkConfig(GetImageCacheResponseBodyNetworkConfig &&) = default ;
    GetImageCacheResponseBodyNetworkConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetImageCacheResponseBodyNetworkConfig() = default ;
    GetImageCacheResponseBodyNetworkConfig& operator=(const GetImageCacheResponseBodyNetworkConfig &) = default ;
    GetImageCacheResponseBodyNetworkConfig& operator=(GetImageCacheResponseBodyNetworkConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->eipInstance_ != nullptr
        && this->securityGroupId_ != nullptr && this->vSwitchIds_ != nullptr; };
    // eipInstance Field Functions 
    bool hasEipInstance() const { return this->eipInstance_ != nullptr;};
    void deleteEipInstance() { this->eipInstance_ = nullptr;};
    inline const Models::GetImageCacheResponseBodyNetworkConfigEipInstance & eipInstance() const { DARABONBA_PTR_GET_CONST(eipInstance_, Models::GetImageCacheResponseBodyNetworkConfigEipInstance) };
    inline Models::GetImageCacheResponseBodyNetworkConfigEipInstance eipInstance() { DARABONBA_PTR_GET(eipInstance_, Models::GetImageCacheResponseBodyNetworkConfigEipInstance) };
    inline GetImageCacheResponseBodyNetworkConfig& setEipInstance(const Models::GetImageCacheResponseBodyNetworkConfigEipInstance & eipInstance) { DARABONBA_PTR_SET_VALUE(eipInstance_, eipInstance) };
    inline GetImageCacheResponseBodyNetworkConfig& setEipInstance(Models::GetImageCacheResponseBodyNetworkConfigEipInstance && eipInstance) { DARABONBA_PTR_SET_RVALUE(eipInstance_, eipInstance) };


    // securityGroupId Field Functions 
    bool hasSecurityGroupId() const { return this->securityGroupId_ != nullptr;};
    void deleteSecurityGroupId() { this->securityGroupId_ = nullptr;};
    inline string securityGroupId() const { DARABONBA_PTR_GET_DEFAULT(securityGroupId_, "") };
    inline GetImageCacheResponseBodyNetworkConfig& setSecurityGroupId(string securityGroupId) { DARABONBA_PTR_SET_VALUE(securityGroupId_, securityGroupId) };


    // vSwitchIds Field Functions 
    bool hasVSwitchIds() const { return this->vSwitchIds_ != nullptr;};
    void deleteVSwitchIds() { this->vSwitchIds_ = nullptr;};
    inline const vector<string> & vSwitchIds() const { DARABONBA_PTR_GET_CONST(vSwitchIds_, vector<string>) };
    inline vector<string> vSwitchIds() { DARABONBA_PTR_GET(vSwitchIds_, vector<string>) };
    inline GetImageCacheResponseBodyNetworkConfig& setVSwitchIds(const vector<string> & vSwitchIds) { DARABONBA_PTR_SET_VALUE(vSwitchIds_, vSwitchIds) };
    inline GetImageCacheResponseBodyNetworkConfig& setVSwitchIds(vector<string> && vSwitchIds) { DARABONBA_PTR_SET_RVALUE(vSwitchIds_, vSwitchIds) };


  protected:
    std::shared_ptr<Models::GetImageCacheResponseBodyNetworkConfigEipInstance> eipInstance_ = nullptr;
    std::shared_ptr<string> securityGroupId_ = nullptr;
    std::shared_ptr<vector<string>> vSwitchIds_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Acc20240402
#endif
