// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CATALOGVPCCONNECTIONINPUT_HPP_
#define ALIBABACLOUD_MODELS_CATALOGVPCCONNECTIONINPUT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CatalogVpcConnectionInputZones.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataLake20200710
{
namespace Models
{
  class CatalogVpcConnectionInput : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CatalogVpcConnectionInput& obj) { 
      DARABONBA_PTR_TO_JSON(ConnectionName, connectionName_);
      DARABONBA_PTR_TO_JSON(SecurityGroupIds, securityGroupIds_);
      DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
      DARABONBA_PTR_TO_JSON(Zones, zones_);
    };
    friend void from_json(const Darabonba::Json& j, CatalogVpcConnectionInput& obj) { 
      DARABONBA_PTR_FROM_JSON(ConnectionName, connectionName_);
      DARABONBA_PTR_FROM_JSON(SecurityGroupIds, securityGroupIds_);
      DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
      DARABONBA_PTR_FROM_JSON(Zones, zones_);
    };
    CatalogVpcConnectionInput() = default ;
    CatalogVpcConnectionInput(const CatalogVpcConnectionInput &) = default ;
    CatalogVpcConnectionInput(CatalogVpcConnectionInput &&) = default ;
    CatalogVpcConnectionInput(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CatalogVpcConnectionInput() = default ;
    CatalogVpcConnectionInput& operator=(const CatalogVpcConnectionInput &) = default ;
    CatalogVpcConnectionInput& operator=(CatalogVpcConnectionInput &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->connectionName_ == nullptr
        && return this->securityGroupIds_ == nullptr && return this->vpcId_ == nullptr && return this->zones_ == nullptr; };
    // connectionName Field Functions 
    bool hasConnectionName() const { return this->connectionName_ != nullptr;};
    void deleteConnectionName() { this->connectionName_ = nullptr;};
    inline string connectionName() const { DARABONBA_PTR_GET_DEFAULT(connectionName_, "") };
    inline CatalogVpcConnectionInput& setConnectionName(string connectionName) { DARABONBA_PTR_SET_VALUE(connectionName_, connectionName) };


    // securityGroupIds Field Functions 
    bool hasSecurityGroupIds() const { return this->securityGroupIds_ != nullptr;};
    void deleteSecurityGroupIds() { this->securityGroupIds_ = nullptr;};
    inline const vector<string> & securityGroupIds() const { DARABONBA_PTR_GET_CONST(securityGroupIds_, vector<string>) };
    inline vector<string> securityGroupIds() { DARABONBA_PTR_GET(securityGroupIds_, vector<string>) };
    inline CatalogVpcConnectionInput& setSecurityGroupIds(const vector<string> & securityGroupIds) { DARABONBA_PTR_SET_VALUE(securityGroupIds_, securityGroupIds) };
    inline CatalogVpcConnectionInput& setSecurityGroupIds(vector<string> && securityGroupIds) { DARABONBA_PTR_SET_RVALUE(securityGroupIds_, securityGroupIds) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string vpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline CatalogVpcConnectionInput& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


    // zones Field Functions 
    bool hasZones() const { return this->zones_ != nullptr;};
    void deleteZones() { this->zones_ = nullptr;};
    inline const vector<CatalogVpcConnectionInputZones> & zones() const { DARABONBA_PTR_GET_CONST(zones_, vector<CatalogVpcConnectionInputZones>) };
    inline vector<CatalogVpcConnectionInputZones> zones() { DARABONBA_PTR_GET(zones_, vector<CatalogVpcConnectionInputZones>) };
    inline CatalogVpcConnectionInput& setZones(const vector<CatalogVpcConnectionInputZones> & zones) { DARABONBA_PTR_SET_VALUE(zones_, zones) };
    inline CatalogVpcConnectionInput& setZones(vector<CatalogVpcConnectionInputZones> && zones) { DARABONBA_PTR_SET_RVALUE(zones_, zones) };


  protected:
    std::shared_ptr<string> connectionName_ = nullptr;
    std::shared_ptr<vector<string>> securityGroupIds_ = nullptr;
    std::shared_ptr<string> vpcId_ = nullptr;
    std::shared_ptr<vector<CatalogVpcConnectionInputZones>> zones_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataLake20200710
#endif
