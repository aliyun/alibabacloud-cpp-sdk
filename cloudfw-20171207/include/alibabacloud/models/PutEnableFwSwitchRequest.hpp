// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PUTENABLEFWSWITCHREQUEST_HPP_
#define ALIBABACLOUD_MODELS_PUTENABLEFWSWITCHREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class PutEnableFwSwitchRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PutEnableFwSwitchRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(DryRun, dryRun_);
      DARABONBA_PTR_TO_JSON(IpVersion, ipVersion_);
      DARABONBA_PTR_TO_JSON(IpaddrList, ipaddrList_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(MemberUid, memberUid_);
      DARABONBA_PTR_TO_JSON(RegionList, regionList_);
      DARABONBA_PTR_TO_JSON(ResourceTypeList, resourceTypeList_);
      DARABONBA_PTR_TO_JSON(SourceIp, sourceIp_);
    };
    friend void from_json(const Darabonba::Json& j, PutEnableFwSwitchRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(DryRun, dryRun_);
      DARABONBA_PTR_FROM_JSON(IpVersion, ipVersion_);
      DARABONBA_PTR_FROM_JSON(IpaddrList, ipaddrList_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(MemberUid, memberUid_);
      DARABONBA_PTR_FROM_JSON(RegionList, regionList_);
      DARABONBA_PTR_FROM_JSON(ResourceTypeList, resourceTypeList_);
      DARABONBA_PTR_FROM_JSON(SourceIp, sourceIp_);
    };
    PutEnableFwSwitchRequest() = default ;
    PutEnableFwSwitchRequest(const PutEnableFwSwitchRequest &) = default ;
    PutEnableFwSwitchRequest(PutEnableFwSwitchRequest &&) = default ;
    PutEnableFwSwitchRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PutEnableFwSwitchRequest() = default ;
    PutEnableFwSwitchRequest& operator=(const PutEnableFwSwitchRequest &) = default ;
    PutEnableFwSwitchRequest& operator=(PutEnableFwSwitchRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clientToken_ == nullptr
        && this->dryRun_ == nullptr && this->ipVersion_ == nullptr && this->ipaddrList_ == nullptr && this->lang_ == nullptr && this->memberUid_ == nullptr
        && this->regionList_ == nullptr && this->resourceTypeList_ == nullptr && this->sourceIp_ == nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline PutEnableFwSwitchRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline bool getDryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, false) };
    inline PutEnableFwSwitchRequest& setDryRun(bool dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


    // ipVersion Field Functions 
    bool hasIpVersion() const { return this->ipVersion_ != nullptr;};
    void deleteIpVersion() { this->ipVersion_ = nullptr;};
    inline string getIpVersion() const { DARABONBA_PTR_GET_DEFAULT(ipVersion_, "") };
    inline PutEnableFwSwitchRequest& setIpVersion(string ipVersion) { DARABONBA_PTR_SET_VALUE(ipVersion_, ipVersion) };


    // ipaddrList Field Functions 
    bool hasIpaddrList() const { return this->ipaddrList_ != nullptr;};
    void deleteIpaddrList() { this->ipaddrList_ = nullptr;};
    inline const vector<string> & getIpaddrList() const { DARABONBA_PTR_GET_CONST(ipaddrList_, vector<string>) };
    inline vector<string> getIpaddrList() { DARABONBA_PTR_GET(ipaddrList_, vector<string>) };
    inline PutEnableFwSwitchRequest& setIpaddrList(const vector<string> & ipaddrList) { DARABONBA_PTR_SET_VALUE(ipaddrList_, ipaddrList) };
    inline PutEnableFwSwitchRequest& setIpaddrList(vector<string> && ipaddrList) { DARABONBA_PTR_SET_RVALUE(ipaddrList_, ipaddrList) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline PutEnableFwSwitchRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // memberUid Field Functions 
    bool hasMemberUid() const { return this->memberUid_ != nullptr;};
    void deleteMemberUid() { this->memberUid_ = nullptr;};
    inline string getMemberUid() const { DARABONBA_PTR_GET_DEFAULT(memberUid_, "") };
    inline PutEnableFwSwitchRequest& setMemberUid(string memberUid) { DARABONBA_PTR_SET_VALUE(memberUid_, memberUid) };


    // regionList Field Functions 
    bool hasRegionList() const { return this->regionList_ != nullptr;};
    void deleteRegionList() { this->regionList_ = nullptr;};
    inline const vector<string> & getRegionList() const { DARABONBA_PTR_GET_CONST(regionList_, vector<string>) };
    inline vector<string> getRegionList() { DARABONBA_PTR_GET(regionList_, vector<string>) };
    inline PutEnableFwSwitchRequest& setRegionList(const vector<string> & regionList) { DARABONBA_PTR_SET_VALUE(regionList_, regionList) };
    inline PutEnableFwSwitchRequest& setRegionList(vector<string> && regionList) { DARABONBA_PTR_SET_RVALUE(regionList_, regionList) };


    // resourceTypeList Field Functions 
    bool hasResourceTypeList() const { return this->resourceTypeList_ != nullptr;};
    void deleteResourceTypeList() { this->resourceTypeList_ = nullptr;};
    inline const vector<string> & getResourceTypeList() const { DARABONBA_PTR_GET_CONST(resourceTypeList_, vector<string>) };
    inline vector<string> getResourceTypeList() { DARABONBA_PTR_GET(resourceTypeList_, vector<string>) };
    inline PutEnableFwSwitchRequest& setResourceTypeList(const vector<string> & resourceTypeList) { DARABONBA_PTR_SET_VALUE(resourceTypeList_, resourceTypeList) };
    inline PutEnableFwSwitchRequest& setResourceTypeList(vector<string> && resourceTypeList) { DARABONBA_PTR_SET_RVALUE(resourceTypeList_, resourceTypeList) };


    // sourceIp Field Functions 
    bool hasSourceIp() const { return this->sourceIp_ != nullptr;};
    void deleteSourceIp() { this->sourceIp_ = nullptr;};
    inline string getSourceIp() const { DARABONBA_PTR_GET_DEFAULT(sourceIp_, "") };
    inline PutEnableFwSwitchRequest& setSourceIp(string sourceIp) { DARABONBA_PTR_SET_VALUE(sourceIp_, sourceIp) };


  protected:
    // The client token that ensures the idempotency of the request. Generated by the client, the token must be unique across different requests. The value is a string of type String that is case-sensitive and in the format of [0-9a-zA-Z-_]{1,64}. We recommend that you use a UUID. The server guarantees idempotency within the validity period (600 seconds): repeated requests with the same ClientToken and the same business parameters return the same result as the first request. If the ClientToken is the same but the business parameters are different, an HTTP 400 error with the IdempotentParameterMismatch error code is returned.
    shared_ptr<string> clientToken_ {};
    // Specifies whether to perform only a dry run of the request. If set to true, the system performs pre-checks such as parameter validity, identity permissions, resource existence, quota limits, and dependency relationships without creating, updating, or deleting actual resources, triggering real asynchronous traffic diversion tasks, or producing downstream side effects such as billing, notifications, or callbacks. If the dry run succeeds, the response contains DryRun=true, which distinguishes it from a real call response. If the dry run fails, a machine-readable error code is returned (such as ErrorParamsInvalid for parameter errors, ErrorAuthentication for insufficient permissions, or ErrorInstanceOpenIpNumExceed for insufficient quota). If set to false (default), the request is submitted and the enable operation is performed.
    shared_ptr<bool> dryRun_ {};
    // The IP version.
    shared_ptr<string> ipVersion_ {};
    // The IP address list.
    // 
    // > The IpaddrList, RegionList, and ResourceTypeList parameters cannot all be empty. You must specify a value for at least one of these parameters.
    shared_ptr<vector<string>> ipaddrList_ {};
    // The language type of the received message.
    // 
    // - **zh**: Chinese
    // - **en**: English
    shared_ptr<string> lang_ {};
    // The unique identifier of the member.
    shared_ptr<string> memberUid_ {};
    // The region list.
    // 
    // > The IpaddrList, RegionList, and ResourceTypeList parameters cannot all be empty. You must specify a value for at least one of these parameters.
    shared_ptr<vector<string>> regionList_ {};
    // The asset type list.
    // 
    // Valid values:
    // - **BastionHostEgressIP**: bastion host egress IP address.
    // - **BastionHostIngressIP**: bastion host ingress IP address.
    // - **EcsEIP**: ECS EIP.
    // - **EcsPublicIP**: public IP addresses of Elastic Compute Service (ECS) instances.
    // - **EIP**: elastic IP address.
    // - **EniEIP**: network interface controller (NIC) EIP.
    // - **NatEIP**: NAT EIP.
    // - **SlbEIP**: SLB EIP (CLB EIP).
    // - **SlbPublicIP**: SLB public IP address (CLB public IP address).
    // - **NatPublicIP**: NAT public IP address.
    // - **HAVIP**: high active virtual IP address.
    // - **NlbEIP**: NLB EIP.
    // - **ApiGatewayEIP**: API Gateway public IP address.
    // - **AlbEIP**: ALB EIP.
    // - **AiGatewayEIP**: AI Gateway public IP address.
    // - **GaEIP**: GA EIP.
    // - **SwasEIP**: simple application server public IP address.
    // - **EcdEIP**: Elastic Desktop Service public IP address.
    // - **BastionHostIP**: bastion host IP address.
    // 
    // > The IpaddrList, RegionList, and ResourceTypeList parameters cannot all be empty. You must set a value for at least one of these parameters. Settings take effect only after a value is specified.
    shared_ptr<vector<string>> resourceTypeList_ {};
    // The source IP address of the request.
    shared_ptr<string> sourceIp_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
