// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATERESOURCEDLINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATERESOURCEDLINKREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eas20210701
{
namespace Models
{
  class UpdateResourceDLinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateResourceDLinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DestinationCIDRs, destinationCIDRs_);
      DARABONBA_PTR_TO_JSON(SecurityGroupId, securityGroupId_);
      DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
      DARABONBA_PTR_TO_JSON(VSwitchIdList, vSwitchIdList_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateResourceDLinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DestinationCIDRs, destinationCIDRs_);
      DARABONBA_PTR_FROM_JSON(SecurityGroupId, securityGroupId_);
      DARABONBA_PTR_FROM_JSON(VSwitchId, vSwitchId_);
      DARABONBA_PTR_FROM_JSON(VSwitchIdList, vSwitchIdList_);
    };
    UpdateResourceDLinkRequest() = default ;
    UpdateResourceDLinkRequest(const UpdateResourceDLinkRequest &) = default ;
    UpdateResourceDLinkRequest(UpdateResourceDLinkRequest &&) = default ;
    UpdateResourceDLinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateResourceDLinkRequest() = default ;
    UpdateResourceDLinkRequest& operator=(const UpdateResourceDLinkRequest &) = default ;
    UpdateResourceDLinkRequest& operator=(UpdateResourceDLinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->destinationCIDRs_ == nullptr
        && return this->securityGroupId_ == nullptr && return this->vSwitchId_ == nullptr && return this->vSwitchIdList_ == nullptr; };
    // destinationCIDRs Field Functions 
    bool hasDestinationCIDRs() const { return this->destinationCIDRs_ != nullptr;};
    void deleteDestinationCIDRs() { this->destinationCIDRs_ = nullptr;};
    inline string destinationCIDRs() const { DARABONBA_PTR_GET_DEFAULT(destinationCIDRs_, "") };
    inline UpdateResourceDLinkRequest& setDestinationCIDRs(string destinationCIDRs) { DARABONBA_PTR_SET_VALUE(destinationCIDRs_, destinationCIDRs) };


    // securityGroupId Field Functions 
    bool hasSecurityGroupId() const { return this->securityGroupId_ != nullptr;};
    void deleteSecurityGroupId() { this->securityGroupId_ = nullptr;};
    inline string securityGroupId() const { DARABONBA_PTR_GET_DEFAULT(securityGroupId_, "") };
    inline UpdateResourceDLinkRequest& setSecurityGroupId(string securityGroupId) { DARABONBA_PTR_SET_VALUE(securityGroupId_, securityGroupId) };


    // vSwitchId Field Functions 
    bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
    void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
    inline string vSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
    inline UpdateResourceDLinkRequest& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


    // vSwitchIdList Field Functions 
    bool hasVSwitchIdList() const { return this->vSwitchIdList_ != nullptr;};
    void deleteVSwitchIdList() { this->vSwitchIdList_ = nullptr;};
    inline const vector<string> & vSwitchIdList() const { DARABONBA_PTR_GET_CONST(vSwitchIdList_, vector<string>) };
    inline vector<string> vSwitchIdList() { DARABONBA_PTR_GET(vSwitchIdList_, vector<string>) };
    inline UpdateResourceDLinkRequest& setVSwitchIdList(const vector<string> & vSwitchIdList) { DARABONBA_PTR_SET_VALUE(vSwitchIdList_, vSwitchIdList) };
    inline UpdateResourceDLinkRequest& setVSwitchIdList(vector<string> && vSwitchIdList) { DARABONBA_PTR_SET_RVALUE(vSwitchIdList_, vSwitchIdList) };


  protected:
    // The CIDR blocks of the clients that you want to connect to. After this parameter is specified, the CIDR blocks are added to the back-to-origin route of the server. Either this parameter or the VSwitchIdList parameter can be used to determine CIDR blocks.
    std::shared_ptr<string> destinationCIDRs_ = nullptr;
    // The ID of the security group to which the Elastic Compute Service (ECS) instance belongs.
    // 
    // This parameter is required.
    std::shared_ptr<string> securityGroupId_ = nullptr;
    // The ID of the peer primary vSwitch. After this parameter is specified, an elastic network interface (ENI) is created in the VSwitch.
    // 
    // This parameter is required.
    std::shared_ptr<string> vSwitchId_ = nullptr;
    // The vSwitches of the clients that you want to connect to. After this parameter is specified, the CIDR blocks of these vSwitches are added to the back-to-origin route of the server.
    std::shared_ptr<vector<string>> vSwitchIdList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eas20210701
#endif
