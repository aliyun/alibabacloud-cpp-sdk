// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ENABLEKIBANAPVLNETWORKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ENABLEKIBANAPVLNETWORKREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/EnableKibanaPvlNetworkRequestVSwitchIdsZone.hpp>
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
    };
    friend void from_json(const Darabonba::Json& j, EnableKibanaPvlNetworkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(endpointName, endpointName_);
      DARABONBA_PTR_FROM_JSON(securityGroups, securityGroups_);
      DARABONBA_PTR_FROM_JSON(vSwitchIdsZone, vSwitchIdsZone_);
      DARABONBA_PTR_FROM_JSON(vpcId, vpcId_);
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
    virtual bool empty() const override { this->endpointName_ != nullptr
        && this->securityGroups_ != nullptr && this->vSwitchIdsZone_ != nullptr && this->vpcId_ != nullptr; };
    // endpointName Field Functions 
    bool hasEndpointName() const { return this->endpointName_ != nullptr;};
    void deleteEndpointName() { this->endpointName_ = nullptr;};
    inline string endpointName() const { DARABONBA_PTR_GET_DEFAULT(endpointName_, "") };
    inline EnableKibanaPvlNetworkRequest& setEndpointName(string endpointName) { DARABONBA_PTR_SET_VALUE(endpointName_, endpointName) };


    // securityGroups Field Functions 
    bool hasSecurityGroups() const { return this->securityGroups_ != nullptr;};
    void deleteSecurityGroups() { this->securityGroups_ = nullptr;};
    inline const vector<string> & securityGroups() const { DARABONBA_PTR_GET_CONST(securityGroups_, vector<string>) };
    inline vector<string> securityGroups() { DARABONBA_PTR_GET(securityGroups_, vector<string>) };
    inline EnableKibanaPvlNetworkRequest& setSecurityGroups(const vector<string> & securityGroups) { DARABONBA_PTR_SET_VALUE(securityGroups_, securityGroups) };
    inline EnableKibanaPvlNetworkRequest& setSecurityGroups(vector<string> && securityGroups) { DARABONBA_PTR_SET_RVALUE(securityGroups_, securityGroups) };


    // vSwitchIdsZone Field Functions 
    bool hasVSwitchIdsZone() const { return this->vSwitchIdsZone_ != nullptr;};
    void deleteVSwitchIdsZone() { this->vSwitchIdsZone_ = nullptr;};
    inline const vector<EnableKibanaPvlNetworkRequestVSwitchIdsZone> & vSwitchIdsZone() const { DARABONBA_PTR_GET_CONST(vSwitchIdsZone_, vector<EnableKibanaPvlNetworkRequestVSwitchIdsZone>) };
    inline vector<EnableKibanaPvlNetworkRequestVSwitchIdsZone> vSwitchIdsZone() { DARABONBA_PTR_GET(vSwitchIdsZone_, vector<EnableKibanaPvlNetworkRequestVSwitchIdsZone>) };
    inline EnableKibanaPvlNetworkRequest& setVSwitchIdsZone(const vector<EnableKibanaPvlNetworkRequestVSwitchIdsZone> & vSwitchIdsZone) { DARABONBA_PTR_SET_VALUE(vSwitchIdsZone_, vSwitchIdsZone) };
    inline EnableKibanaPvlNetworkRequest& setVSwitchIdsZone(vector<EnableKibanaPvlNetworkRequestVSwitchIdsZone> && vSwitchIdsZone) { DARABONBA_PTR_SET_RVALUE(vSwitchIdsZone_, vSwitchIdsZone) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string vpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline EnableKibanaPvlNetworkRequest& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> endpointName_ = nullptr;
    // This parameter is required.
    std::shared_ptr<vector<string>> securityGroups_ = nullptr;
    // This parameter is required.
    std::shared_ptr<vector<EnableKibanaPvlNetworkRequestVSwitchIdsZone>> vSwitchIdsZone_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> vpcId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Elasticsearch20170613
#endif
