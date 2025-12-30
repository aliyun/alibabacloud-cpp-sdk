// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATERESOLVERENDPOINTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATERESOLVERENDPOINTREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Pvtz20180101
{
namespace Models
{
  class UpdateResolverEndpointRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateResolverEndpointRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EndpointId, endpointId_);
      DARABONBA_PTR_TO_JSON(IpConfig, ipConfig_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(Name, name_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateResolverEndpointRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EndpointId, endpointId_);
      DARABONBA_PTR_FROM_JSON(IpConfig, ipConfig_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
    };
    UpdateResolverEndpointRequest() = default ;
    UpdateResolverEndpointRequest(const UpdateResolverEndpointRequest &) = default ;
    UpdateResolverEndpointRequest(UpdateResolverEndpointRequest &&) = default ;
    UpdateResolverEndpointRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateResolverEndpointRequest() = default ;
    UpdateResolverEndpointRequest& operator=(const UpdateResolverEndpointRequest &) = default ;
    UpdateResolverEndpointRequest& operator=(UpdateResolverEndpointRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class IpConfig : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const IpConfig& obj) { 
        DARABONBA_PTR_TO_JSON(AzId, azId_);
        DARABONBA_PTR_TO_JSON(CidrBlock, cidrBlock_);
        DARABONBA_PTR_TO_JSON(Ip, ip_);
        DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
      };
      friend void from_json(const Darabonba::Json& j, IpConfig& obj) { 
        DARABONBA_PTR_FROM_JSON(AzId, azId_);
        DARABONBA_PTR_FROM_JSON(CidrBlock, cidrBlock_);
        DARABONBA_PTR_FROM_JSON(Ip, ip_);
        DARABONBA_PTR_FROM_JSON(VSwitchId, vSwitchId_);
      };
      IpConfig() = default ;
      IpConfig(const IpConfig &) = default ;
      IpConfig(IpConfig &&) = default ;
      IpConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~IpConfig() = default ;
      IpConfig& operator=(const IpConfig &) = default ;
      IpConfig& operator=(IpConfig &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->azId_ == nullptr
        && this->cidrBlock_ == nullptr && this->ip_ == nullptr && this->vSwitchId_ == nullptr; };
      // azId Field Functions 
      bool hasAzId() const { return this->azId_ != nullptr;};
      void deleteAzId() { this->azId_ = nullptr;};
      inline string getAzId() const { DARABONBA_PTR_GET_DEFAULT(azId_, "") };
      inline IpConfig& setAzId(string azId) { DARABONBA_PTR_SET_VALUE(azId_, azId) };


      // cidrBlock Field Functions 
      bool hasCidrBlock() const { return this->cidrBlock_ != nullptr;};
      void deleteCidrBlock() { this->cidrBlock_ = nullptr;};
      inline string getCidrBlock() const { DARABONBA_PTR_GET_DEFAULT(cidrBlock_, "") };
      inline IpConfig& setCidrBlock(string cidrBlock) { DARABONBA_PTR_SET_VALUE(cidrBlock_, cidrBlock) };


      // ip Field Functions 
      bool hasIp() const { return this->ip_ != nullptr;};
      void deleteIp() { this->ip_ = nullptr;};
      inline string getIp() const { DARABONBA_PTR_GET_DEFAULT(ip_, "") };
      inline IpConfig& setIp(string ip) { DARABONBA_PTR_SET_VALUE(ip_, ip) };


      // vSwitchId Field Functions 
      bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
      void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
      inline string getVSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
      inline IpConfig& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


    protected:
      // The ID of the zone to which the vSwitch belongs.
      shared_ptr<string> azId_ {};
      // The IPv4 CIDR block of the vSwitch.
      shared_ptr<string> cidrBlock_ {};
      // The source IP address of outbound traffic. The IP address must be within the specified CIDR block. If you leave this parameter empty, the system automatically allocates an IP address.
      shared_ptr<string> ip_ {};
      // The vSwitch ID.
      shared_ptr<string> vSwitchId_ {};
    };

    virtual bool empty() const override { return this->endpointId_ == nullptr
        && this->ipConfig_ == nullptr && this->lang_ == nullptr && this->name_ == nullptr; };
    // endpointId Field Functions 
    bool hasEndpointId() const { return this->endpointId_ != nullptr;};
    void deleteEndpointId() { this->endpointId_ = nullptr;};
    inline string getEndpointId() const { DARABONBA_PTR_GET_DEFAULT(endpointId_, "") };
    inline UpdateResolverEndpointRequest& setEndpointId(string endpointId) { DARABONBA_PTR_SET_VALUE(endpointId_, endpointId) };


    // ipConfig Field Functions 
    bool hasIpConfig() const { return this->ipConfig_ != nullptr;};
    void deleteIpConfig() { this->ipConfig_ = nullptr;};
    inline const vector<UpdateResolverEndpointRequest::IpConfig> & getIpConfig() const { DARABONBA_PTR_GET_CONST(ipConfig_, vector<UpdateResolverEndpointRequest::IpConfig>) };
    inline vector<UpdateResolverEndpointRequest::IpConfig> getIpConfig() { DARABONBA_PTR_GET(ipConfig_, vector<UpdateResolverEndpointRequest::IpConfig>) };
    inline UpdateResolverEndpointRequest& setIpConfig(const vector<UpdateResolverEndpointRequest::IpConfig> & ipConfig) { DARABONBA_PTR_SET_VALUE(ipConfig_, ipConfig) };
    inline UpdateResolverEndpointRequest& setIpConfig(vector<UpdateResolverEndpointRequest::IpConfig> && ipConfig) { DARABONBA_PTR_SET_RVALUE(ipConfig_, ipConfig) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline UpdateResolverEndpointRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline UpdateResolverEndpointRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


  protected:
    // The endpoint ID.
    // 
    // This parameter is required.
    shared_ptr<string> endpointId_ {};
    // The source IP addresses of outbound traffic. You can add two to six IP addresses.
    // 
    // >  You must add at least two source IP addresses for outbound traffic to ensure high availability. We recommend that you add two IP addresses that reside in different zones. You can add up to six source IP addresses.
    shared_ptr<vector<UpdateResolverEndpointRequest::IpConfig>> ipConfig_ {};
    // The language of the response. Valid values:
    // 
    // *   zh: Chinese
    // *   en: English
    // 
    // Default value: en.
    shared_ptr<string> lang_ {};
    // The endpoint name.
    shared_ptr<string> name_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Pvtz20180101
#endif
