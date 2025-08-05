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
      DARABONBA_PTR_TO_JSON(IpaddrList, ipaddrList_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(RegionList, regionList_);
      DARABONBA_PTR_TO_JSON(ResourceTypeList, resourceTypeList_);
      DARABONBA_PTR_TO_JSON(SourceIp, sourceIp_);
    };
    friend void from_json(const Darabonba::Json& j, PutEnableFwSwitchRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(IpaddrList, ipaddrList_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
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
    virtual bool empty() const override { this->ipaddrList_ != nullptr
        && this->lang_ != nullptr && this->regionList_ != nullptr && this->resourceTypeList_ != nullptr && this->sourceIp_ != nullptr; };
    // ipaddrList Field Functions 
    bool hasIpaddrList() const { return this->ipaddrList_ != nullptr;};
    void deleteIpaddrList() { this->ipaddrList_ = nullptr;};
    inline const vector<string> & ipaddrList() const { DARABONBA_PTR_GET_CONST(ipaddrList_, vector<string>) };
    inline vector<string> ipaddrList() { DARABONBA_PTR_GET(ipaddrList_, vector<string>) };
    inline PutEnableFwSwitchRequest& setIpaddrList(const vector<string> & ipaddrList) { DARABONBA_PTR_SET_VALUE(ipaddrList_, ipaddrList) };
    inline PutEnableFwSwitchRequest& setIpaddrList(vector<string> && ipaddrList) { DARABONBA_PTR_SET_RVALUE(ipaddrList_, ipaddrList) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string lang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline PutEnableFwSwitchRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // regionList Field Functions 
    bool hasRegionList() const { return this->regionList_ != nullptr;};
    void deleteRegionList() { this->regionList_ = nullptr;};
    inline const vector<string> & regionList() const { DARABONBA_PTR_GET_CONST(regionList_, vector<string>) };
    inline vector<string> regionList() { DARABONBA_PTR_GET(regionList_, vector<string>) };
    inline PutEnableFwSwitchRequest& setRegionList(const vector<string> & regionList) { DARABONBA_PTR_SET_VALUE(regionList_, regionList) };
    inline PutEnableFwSwitchRequest& setRegionList(vector<string> && regionList) { DARABONBA_PTR_SET_RVALUE(regionList_, regionList) };


    // resourceTypeList Field Functions 
    bool hasResourceTypeList() const { return this->resourceTypeList_ != nullptr;};
    void deleteResourceTypeList() { this->resourceTypeList_ = nullptr;};
    inline const vector<string> & resourceTypeList() const { DARABONBA_PTR_GET_CONST(resourceTypeList_, vector<string>) };
    inline vector<string> resourceTypeList() { DARABONBA_PTR_GET(resourceTypeList_, vector<string>) };
    inline PutEnableFwSwitchRequest& setResourceTypeList(const vector<string> & resourceTypeList) { DARABONBA_PTR_SET_VALUE(resourceTypeList_, resourceTypeList) };
    inline PutEnableFwSwitchRequest& setResourceTypeList(vector<string> && resourceTypeList) { DARABONBA_PTR_SET_RVALUE(resourceTypeList_, resourceTypeList) };


    // sourceIp Field Functions 
    bool hasSourceIp() const { return this->sourceIp_ != nullptr;};
    void deleteSourceIp() { this->sourceIp_ = nullptr;};
    inline string sourceIp() const { DARABONBA_PTR_GET_DEFAULT(sourceIp_, "") };
    inline PutEnableFwSwitchRequest& setSourceIp(string sourceIp) { DARABONBA_PTR_SET_VALUE(sourceIp_, sourceIp) };


  protected:
    // The IP addresses.
    // 
    // > You must specify at least one of the IpaddrList, RegionList, and ResourceTypeList parameters.
    std::shared_ptr<vector<string>> ipaddrList_ = nullptr;
    // The language of the content within the response.
    // 
    // *   **zh**: Chinese
    // *   **en**: English
    std::shared_ptr<string> lang_ = nullptr;
    // The regions.
    // 
    // > You must specify at least one of the IpaddrList, RegionList, and ResourceTypeList parameters.
    std::shared_ptr<vector<string>> regionList_ = nullptr;
    // The types of the assets.
    // 
    // Valid values:
    // 
    // *   BastionHostIP: the egress IP address of a bastion host
    // *   BastionHostIngressIP: the ingress IP address of a bastion host
    // *   EcsEIP: the elastic IP address (EIP) of an Elastic Compute Service (ECS) instance
    // *   EcsPublicIP: the public IP address of an ECS instance
    // *   EIP: the EIP
    // *   EniEIP: the EIP of an elastic network interface (ENI)
    // *   NatEIP: the EIP of a NAT gateway
    // *   SlbEIP: the EIP of a Server Load Balancer (SLB) instance
    // *   SlbPublicIP: the public IP address of an SLB instance
    // *   NatPublicIP: the public IP address of a NAT gateway
    // *   HAVIP: the high-availability virtual IP address (HAVIP)
    // 
    // > You must specify at least one of the IpaddrList, RegionList, and ResourceTypeList parameters.
    std::shared_ptr<vector<string>> resourceTypeList_ = nullptr;
    // The source IP address of the request.
    std::shared_ptr<string> sourceIp_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
