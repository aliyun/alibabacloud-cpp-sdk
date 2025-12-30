// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BINDZONEVPCREQUEST_HPP_
#define ALIBABACLOUD_MODELS_BINDZONEVPCREQUEST_HPP_
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
  class BindZoneVpcRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BindZoneVpcRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(UserClientIp, userClientIp_);
      DARABONBA_PTR_TO_JSON(Vpcs, vpcs_);
      DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
    };
    friend void from_json(const Darabonba::Json& j, BindZoneVpcRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(UserClientIp, userClientIp_);
      DARABONBA_PTR_FROM_JSON(Vpcs, vpcs_);
      DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
    };
    BindZoneVpcRequest() = default ;
    BindZoneVpcRequest(const BindZoneVpcRequest &) = default ;
    BindZoneVpcRequest(BindZoneVpcRequest &&) = default ;
    BindZoneVpcRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BindZoneVpcRequest() = default ;
    BindZoneVpcRequest& operator=(const BindZoneVpcRequest &) = default ;
    BindZoneVpcRequest& operator=(BindZoneVpcRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Vpcs : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Vpcs& obj) { 
        DARABONBA_PTR_TO_JSON(RegionId, regionId_);
        DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
        DARABONBA_PTR_TO_JSON(VpcType, vpcType_);
      };
      friend void from_json(const Darabonba::Json& j, Vpcs& obj) { 
        DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
        DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
        DARABONBA_PTR_FROM_JSON(VpcType, vpcType_);
      };
      Vpcs() = default ;
      Vpcs(const Vpcs &) = default ;
      Vpcs(Vpcs &&) = default ;
      Vpcs(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Vpcs() = default ;
      Vpcs& operator=(const Vpcs &) = default ;
      Vpcs& operator=(Vpcs &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->regionId_ == nullptr
        && this->vpcId_ == nullptr && this->vpcType_ == nullptr; };
      // regionId Field Functions 
      bool hasRegionId() const { return this->regionId_ != nullptr;};
      void deleteRegionId() { this->regionId_ = nullptr;};
      inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
      inline Vpcs& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


      // vpcId Field Functions 
      bool hasVpcId() const { return this->vpcId_ != nullptr;};
      void deleteVpcId() { this->vpcId_ = nullptr;};
      inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
      inline Vpcs& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


      // vpcType Field Functions 
      bool hasVpcType() const { return this->vpcType_ != nullptr;};
      void deleteVpcType() { this->vpcType_ = nullptr;};
      inline string getVpcType() const { DARABONBA_PTR_GET_DEFAULT(vpcType_, "") };
      inline Vpcs& setVpcType(string vpcType) { DARABONBA_PTR_SET_VALUE(vpcType_, vpcType) };


    protected:
      // The region ID of the VPC.
      shared_ptr<string> regionId_ {};
      // The VPC ID. If the zone is already associated with VPCs and you do not specify this parameter, the associated VPCs are disassociated from the zone.
      shared_ptr<string> vpcId_ {};
      // The VPC type. Valid values:
      // 
      // *   **STANDARD**: standard VPC
      // *   **EDS**: Elastic Desktop Service (EDS) workspace VPC
      shared_ptr<string> vpcType_ {};
    };

    virtual bool empty() const override { return this->clientToken_ == nullptr
        && this->lang_ == nullptr && this->userClientIp_ == nullptr && this->vpcs_ == nullptr && this->zoneId_ == nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline BindZoneVpcRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline BindZoneVpcRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // userClientIp Field Functions 
    bool hasUserClientIp() const { return this->userClientIp_ != nullptr;};
    void deleteUserClientIp() { this->userClientIp_ = nullptr;};
    inline string getUserClientIp() const { DARABONBA_PTR_GET_DEFAULT(userClientIp_, "") };
    inline BindZoneVpcRequest& setUserClientIp(string userClientIp) { DARABONBA_PTR_SET_VALUE(userClientIp_, userClientIp) };


    // vpcs Field Functions 
    bool hasVpcs() const { return this->vpcs_ != nullptr;};
    void deleteVpcs() { this->vpcs_ = nullptr;};
    inline const vector<BindZoneVpcRequest::Vpcs> & getVpcs() const { DARABONBA_PTR_GET_CONST(vpcs_, vector<BindZoneVpcRequest::Vpcs>) };
    inline vector<BindZoneVpcRequest::Vpcs> getVpcs() { DARABONBA_PTR_GET(vpcs_, vector<BindZoneVpcRequest::Vpcs>) };
    inline BindZoneVpcRequest& setVpcs(const vector<BindZoneVpcRequest::Vpcs> & vpcs) { DARABONBA_PTR_SET_VALUE(vpcs_, vpcs) };
    inline BindZoneVpcRequest& setVpcs(vector<BindZoneVpcRequest::Vpcs> && vpcs) { DARABONBA_PTR_SET_RVALUE(vpcs_, vpcs) };


    // zoneId Field Functions 
    bool hasZoneId() const { return this->zoneId_ != nullptr;};
    void deleteZoneId() { this->zoneId_ = nullptr;};
    inline string getZoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
    inline BindZoneVpcRequest& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


  protected:
    // The client token that is used to ensure the idempotence of the request. You can use the client to generate the token, but you must make sure that the token is unique among different requests. The token can contain only ASCII characters and cannot exceed 64 characters in length.
    shared_ptr<string> clientToken_ {};
    // The language of the response. Valid values:
    // 
    // *   zh: Chinese
    // *   en: English
    // 
    // Default value: en.
    shared_ptr<string> lang_ {};
    // The IP address of the client.
    shared_ptr<string> userClientIp_ {};
    // The VPCs.
    // 
    // >  If Vpcs is left empty, all VPCs that are associated with the zone are disassociated from the zone.
    shared_ptr<vector<BindZoneVpcRequest::Vpcs>> vpcs_ {};
    // The zone ID. This ID uniquely identifies the zone.
    // 
    // This parameter is required.
    shared_ptr<string> zoneId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Pvtz20180101
#endif
