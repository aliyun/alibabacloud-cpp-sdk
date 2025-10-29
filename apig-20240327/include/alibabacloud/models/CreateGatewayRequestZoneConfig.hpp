// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEGATEWAYREQUESTZONECONFIG_HPP_
#define ALIBABACLOUD_MODELS_CREATEGATEWAYREQUESTZONECONFIG_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreateGatewayRequestZoneConfigZones.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class CreateGatewayRequestZoneConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateGatewayRequestZoneConfig& obj) { 
      DARABONBA_PTR_TO_JSON(selectOption, selectOption_);
      DARABONBA_PTR_TO_JSON(vSwitchId, vSwitchId_);
      DARABONBA_PTR_TO_JSON(zones, zones_);
    };
    friend void from_json(const Darabonba::Json& j, CreateGatewayRequestZoneConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(selectOption, selectOption_);
      DARABONBA_PTR_FROM_JSON(vSwitchId, vSwitchId_);
      DARABONBA_PTR_FROM_JSON(zones, zones_);
    };
    CreateGatewayRequestZoneConfig() = default ;
    CreateGatewayRequestZoneConfig(const CreateGatewayRequestZoneConfig &) = default ;
    CreateGatewayRequestZoneConfig(CreateGatewayRequestZoneConfig &&) = default ;
    CreateGatewayRequestZoneConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateGatewayRequestZoneConfig() = default ;
    CreateGatewayRequestZoneConfig& operator=(const CreateGatewayRequestZoneConfig &) = default ;
    CreateGatewayRequestZoneConfig& operator=(CreateGatewayRequestZoneConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->selectOption_ == nullptr
        && return this->vSwitchId_ == nullptr && return this->zones_ == nullptr; };
    // selectOption Field Functions 
    bool hasSelectOption() const { return this->selectOption_ != nullptr;};
    void deleteSelectOption() { this->selectOption_ = nullptr;};
    inline string selectOption() const { DARABONBA_PTR_GET_DEFAULT(selectOption_, "") };
    inline CreateGatewayRequestZoneConfig& setSelectOption(string selectOption) { DARABONBA_PTR_SET_VALUE(selectOption_, selectOption) };


    // vSwitchId Field Functions 
    bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
    void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
    inline string vSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
    inline CreateGatewayRequestZoneConfig& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


    // zones Field Functions 
    bool hasZones() const { return this->zones_ != nullptr;};
    void deleteZones() { this->zones_ = nullptr;};
    inline const vector<Models::CreateGatewayRequestZoneConfigZones> & zones() const { DARABONBA_PTR_GET_CONST(zones_, vector<Models::CreateGatewayRequestZoneConfigZones>) };
    inline vector<Models::CreateGatewayRequestZoneConfigZones> zones() { DARABONBA_PTR_GET(zones_, vector<Models::CreateGatewayRequestZoneConfigZones>) };
    inline CreateGatewayRequestZoneConfig& setZones(const vector<Models::CreateGatewayRequestZoneConfigZones> & zones) { DARABONBA_PTR_SET_VALUE(zones_, zones) };
    inline CreateGatewayRequestZoneConfig& setZones(vector<Models::CreateGatewayRequestZoneConfigZones> && zones) { DARABONBA_PTR_SET_RVALUE(zones_, zones) };


  protected:
    std::shared_ptr<string> selectOption_ = nullptr;
    std::shared_ptr<string> vSwitchId_ = nullptr;
    std::shared_ptr<vector<Models::CreateGatewayRequestZoneConfigZones>> zones_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
