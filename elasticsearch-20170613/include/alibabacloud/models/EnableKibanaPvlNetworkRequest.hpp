// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ENABLEKIBANAPVLNETWORKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ENABLEKIBANAPVLNETWORKREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Elasticsearch20170613
{
namespace Models
{
  class EnableKibanaPvlNetworkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const EnableKibanaPvlNetworkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(endpointName, endpointName_);
      DARABONBA_PTR_TO_JSON(securityGroups, securityGroups_);
      DARABONBA_PTR_TO_JSON(vSwitchIdsZone, vSwitchIdsZone_);
      DARABONBA_PTR_TO_JSON(vpcId, vpcId_);
      DARABONBA_PTR_TO_JSON(clientToken, clientToken_);
    };
    friend void from_json(const Darabonba::Json& j, EnableKibanaPvlNetworkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(endpointName, endpointName_);
      DARABONBA_PTR_FROM_JSON(securityGroups, securityGroups_);
      DARABONBA_PTR_FROM_JSON(vSwitchIdsZone, vSwitchIdsZone_);
      DARABONBA_PTR_FROM_JSON(vpcId, vpcId_);
      DARABONBA_PTR_FROM_JSON(clientToken, clientToken_);
    };
    EnableKibanaPvlNetworkRequest() = default ;
    EnableKibanaPvlNetworkRequest(const EnableKibanaPvlNetworkRequest &) = default ;
    EnableKibanaPvlNetworkRequest(EnableKibanaPvlNetworkRequest &&) = default ;
    EnableKibanaPvlNetworkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~EnableKibanaPvlNetworkRequest() = default ;
    EnableKibanaPvlNetworkRequest& operator=(const EnableKibanaPvlNetworkRequest &) = default ;
    EnableKibanaPvlNetworkRequest& operator=(EnableKibanaPvlNetworkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class VSwitchIdsZone : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const VSwitchIdsZone& obj) { 
        DARABONBA_PTR_TO_JSON(vswitchId, vswitchId_);
        DARABONBA_PTR_TO_JSON(zoneId, zoneId_);
      };
      friend void from_json(const Darabonba::Json& j, VSwitchIdsZone& obj) { 
        DARABONBA_PTR_FROM_JSON(vswitchId, vswitchId_);
        DARABONBA_PTR_FROM_JSON(zoneId, zoneId_);
      };
      VSwitchIdsZone() = default ;
      VSwitchIdsZone(const VSwitchIdsZone &) = default ;
      VSwitchIdsZone(VSwitchIdsZone &&) = default ;
      VSwitchIdsZone(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~VSwitchIdsZone() = default ;
      VSwitchIdsZone& operator=(const VSwitchIdsZone &) = default ;
      VSwitchIdsZone& operator=(VSwitchIdsZone &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->vswitchId_ == nullptr
        && this->zoneId_ == nullptr; };
      // vswitchId Field Functions 
      bool hasVswitchId() const { return this->vswitchId_ != nullptr;};
      void deleteVswitchId() { this->vswitchId_ = nullptr;};
      inline string getVswitchId() const { DARABONBA_PTR_GET_DEFAULT(vswitchId_, "") };
      inline VSwitchIdsZone& setVswitchId(string vswitchId) { DARABONBA_PTR_SET_VALUE(vswitchId_, vswitchId) };


      // zoneId Field Functions 
      bool hasZoneId() const { return this->zoneId_ != nullptr;};
      void deleteZoneId() { this->zoneId_ = nullptr;};
      inline string getZoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
      inline VSwitchIdsZone& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


    protected:
      shared_ptr<string> vswitchId_ {};
      shared_ptr<string> zoneId_ {};
    };

    virtual bool empty() const override { return this->endpointName_ == nullptr
        && this->securityGroups_ == nullptr && this->vSwitchIdsZone_ == nullptr && this->vpcId_ == nullptr && this->clientToken_ == nullptr; };
    // endpointName Field Functions 
    bool hasEndpointName() const { return this->endpointName_ != nullptr;};
    void deleteEndpointName() { this->endpointName_ = nullptr;};
    inline string getEndpointName() const { DARABONBA_PTR_GET_DEFAULT(endpointName_, "") };
    inline EnableKibanaPvlNetworkRequest& setEndpointName(string endpointName) { DARABONBA_PTR_SET_VALUE(endpointName_, endpointName) };


    // securityGroups Field Functions 
    bool hasSecurityGroups() const { return this->securityGroups_ != nullptr;};
    void deleteSecurityGroups() { this->securityGroups_ = nullptr;};
    inline const vector<string> & getSecurityGroups() const { DARABONBA_PTR_GET_CONST(securityGroups_, vector<string>) };
    inline vector<string> getSecurityGroups() { DARABONBA_PTR_GET(securityGroups_, vector<string>) };
    inline EnableKibanaPvlNetworkRequest& setSecurityGroups(const vector<string> & securityGroups) { DARABONBA_PTR_SET_VALUE(securityGroups_, securityGroups) };
    inline EnableKibanaPvlNetworkRequest& setSecurityGroups(vector<string> && securityGroups) { DARABONBA_PTR_SET_RVALUE(securityGroups_, securityGroups) };


    // vSwitchIdsZone Field Functions 
    bool hasVSwitchIdsZone() const { return this->vSwitchIdsZone_ != nullptr;};
    void deleteVSwitchIdsZone() { this->vSwitchIdsZone_ = nullptr;};
    inline const vector<EnableKibanaPvlNetworkRequest::VSwitchIdsZone> & getVSwitchIdsZone() const { DARABONBA_PTR_GET_CONST(vSwitchIdsZone_, vector<EnableKibanaPvlNetworkRequest::VSwitchIdsZone>) };
    inline vector<EnableKibanaPvlNetworkRequest::VSwitchIdsZone> getVSwitchIdsZone() { DARABONBA_PTR_GET(vSwitchIdsZone_, vector<EnableKibanaPvlNetworkRequest::VSwitchIdsZone>) };
    inline EnableKibanaPvlNetworkRequest& setVSwitchIdsZone(const vector<EnableKibanaPvlNetworkRequest::VSwitchIdsZone> & vSwitchIdsZone) { DARABONBA_PTR_SET_VALUE(vSwitchIdsZone_, vSwitchIdsZone) };
    inline EnableKibanaPvlNetworkRequest& setVSwitchIdsZone(vector<EnableKibanaPvlNetworkRequest::VSwitchIdsZone> && vSwitchIdsZone) { DARABONBA_PTR_SET_RVALUE(vSwitchIdsZone_, vSwitchIdsZone) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline EnableKibanaPvlNetworkRequest& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline EnableKibanaPvlNetworkRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


  protected:
    shared_ptr<string> endpointName_ {};
    // This parameter is required.
    shared_ptr<vector<string>> securityGroups_ {};
    shared_ptr<vector<EnableKibanaPvlNetworkRequest::VSwitchIdsZone>> vSwitchIdsZone_ {};
    shared_ptr<string> vpcId_ {};
    shared_ptr<string> clientToken_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Elasticsearch20170613
#endif
