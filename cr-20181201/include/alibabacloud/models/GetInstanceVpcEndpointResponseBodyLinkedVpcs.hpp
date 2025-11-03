// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETINSTANCEVPCENDPOINTRESPONSEBODYLINKEDVPCS_HPP_
#define ALIBABACLOUD_MODELS_GETINSTANCEVPCENDPOINTRESPONSEBODYLINKEDVPCS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cr20181201
{
namespace Models
{
  class GetInstanceVpcEndpointResponseBodyLinkedVpcs : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetInstanceVpcEndpointResponseBodyLinkedVpcs& obj) { 
      DARABONBA_PTR_TO_JSON(DefaultAccess, defaultAccess_);
      DARABONBA_PTR_TO_JSON(Ip, ip_);
      DARABONBA_PTR_TO_JSON(Issue, issue_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
      DARABONBA_PTR_TO_JSON(VswitchId, vswitchId_);
    };
    friend void from_json(const Darabonba::Json& j, GetInstanceVpcEndpointResponseBodyLinkedVpcs& obj) { 
      DARABONBA_PTR_FROM_JSON(DefaultAccess, defaultAccess_);
      DARABONBA_PTR_FROM_JSON(Ip, ip_);
      DARABONBA_PTR_FROM_JSON(Issue, issue_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
      DARABONBA_PTR_FROM_JSON(VswitchId, vswitchId_);
    };
    GetInstanceVpcEndpointResponseBodyLinkedVpcs() = default ;
    GetInstanceVpcEndpointResponseBodyLinkedVpcs(const GetInstanceVpcEndpointResponseBodyLinkedVpcs &) = default ;
    GetInstanceVpcEndpointResponseBodyLinkedVpcs(GetInstanceVpcEndpointResponseBodyLinkedVpcs &&) = default ;
    GetInstanceVpcEndpointResponseBodyLinkedVpcs(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetInstanceVpcEndpointResponseBodyLinkedVpcs() = default ;
    GetInstanceVpcEndpointResponseBodyLinkedVpcs& operator=(const GetInstanceVpcEndpointResponseBodyLinkedVpcs &) = default ;
    GetInstanceVpcEndpointResponseBodyLinkedVpcs& operator=(GetInstanceVpcEndpointResponseBodyLinkedVpcs &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->defaultAccess_ == nullptr
        && return this->ip_ == nullptr && return this->issue_ == nullptr && return this->status_ == nullptr && return this->vpcId_ == nullptr && return this->vswitchId_ == nullptr; };
    // defaultAccess Field Functions 
    bool hasDefaultAccess() const { return this->defaultAccess_ != nullptr;};
    void deleteDefaultAccess() { this->defaultAccess_ = nullptr;};
    inline bool defaultAccess() const { DARABONBA_PTR_GET_DEFAULT(defaultAccess_, false) };
    inline GetInstanceVpcEndpointResponseBodyLinkedVpcs& setDefaultAccess(bool defaultAccess) { DARABONBA_PTR_SET_VALUE(defaultAccess_, defaultAccess) };


    // ip Field Functions 
    bool hasIp() const { return this->ip_ != nullptr;};
    void deleteIp() { this->ip_ = nullptr;};
    inline string ip() const { DARABONBA_PTR_GET_DEFAULT(ip_, "") };
    inline GetInstanceVpcEndpointResponseBodyLinkedVpcs& setIp(string ip) { DARABONBA_PTR_SET_VALUE(ip_, ip) };


    // issue Field Functions 
    bool hasIssue() const { return this->issue_ != nullptr;};
    void deleteIssue() { this->issue_ = nullptr;};
    inline string issue() const { DARABONBA_PTR_GET_DEFAULT(issue_, "") };
    inline GetInstanceVpcEndpointResponseBodyLinkedVpcs& setIssue(string issue) { DARABONBA_PTR_SET_VALUE(issue_, issue) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetInstanceVpcEndpointResponseBodyLinkedVpcs& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string vpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline GetInstanceVpcEndpointResponseBodyLinkedVpcs& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


    // vswitchId Field Functions 
    bool hasVswitchId() const { return this->vswitchId_ != nullptr;};
    void deleteVswitchId() { this->vswitchId_ = nullptr;};
    inline string vswitchId() const { DARABONBA_PTR_GET_DEFAULT(vswitchId_, "") };
    inline GetInstanceVpcEndpointResponseBodyLinkedVpcs& setVswitchId(string vswitchId) { DARABONBA_PTR_SET_VALUE(vswitchId_, vswitchId) };


  protected:
    // Indicates whether the VPC is the default VPC over which the Container Registry instance is accessed.
    std::shared_ptr<bool> defaultAccess_ = nullptr;
    // IP address.
    std::shared_ptr<string> ip_ = nullptr;
    // The error message detected in the linked VPC access control.
    std::shared_ptr<string> issue_ = nullptr;
    // The status of the VPC. Valid values:
    // 
    // *   `CREATING`
    // *   `RUNNING`
    std::shared_ptr<string> status_ = nullptr;
    // VPC ID
    std::shared_ptr<string> vpcId_ = nullptr;
    // The ID of the vSwitch.
    std::shared_ptr<string> vswitchId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cr20181201
#endif
