// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GATEWAYINFO_HPP_
#define ALIBABACLOUD_MODELS_GATEWAYINFO_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GatewayInfoVpcInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class GatewayInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GatewayInfo& obj) { 
      DARABONBA_PTR_TO_JSON(engineVersion, engineVersion_);
      DARABONBA_PTR_TO_JSON(gatewayId, gatewayId_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(vpcInfo, vpcInfo_);
    };
    friend void from_json(const Darabonba::Json& j, GatewayInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(engineVersion, engineVersion_);
      DARABONBA_PTR_FROM_JSON(gatewayId, gatewayId_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(vpcInfo, vpcInfo_);
    };
    GatewayInfo() = default ;
    GatewayInfo(const GatewayInfo &) = default ;
    GatewayInfo(GatewayInfo &&) = default ;
    GatewayInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GatewayInfo() = default ;
    GatewayInfo& operator=(const GatewayInfo &) = default ;
    GatewayInfo& operator=(GatewayInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->engineVersion_ == nullptr
        && return this->gatewayId_ == nullptr && return this->name_ == nullptr && return this->vpcInfo_ == nullptr; };
    // engineVersion Field Functions 
    bool hasEngineVersion() const { return this->engineVersion_ != nullptr;};
    void deleteEngineVersion() { this->engineVersion_ = nullptr;};
    inline string engineVersion() const { DARABONBA_PTR_GET_DEFAULT(engineVersion_, "") };
    inline GatewayInfo& setEngineVersion(string engineVersion) { DARABONBA_PTR_SET_VALUE(engineVersion_, engineVersion) };


    // gatewayId Field Functions 
    bool hasGatewayId() const { return this->gatewayId_ != nullptr;};
    void deleteGatewayId() { this->gatewayId_ = nullptr;};
    inline string gatewayId() const { DARABONBA_PTR_GET_DEFAULT(gatewayId_, "") };
    inline GatewayInfo& setGatewayId(string gatewayId) { DARABONBA_PTR_SET_VALUE(gatewayId_, gatewayId) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline GatewayInfo& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // vpcInfo Field Functions 
    bool hasVpcInfo() const { return this->vpcInfo_ != nullptr;};
    void deleteVpcInfo() { this->vpcInfo_ = nullptr;};
    inline const GatewayInfoVpcInfo & vpcInfo() const { DARABONBA_PTR_GET_CONST(vpcInfo_, GatewayInfoVpcInfo) };
    inline GatewayInfoVpcInfo vpcInfo() { DARABONBA_PTR_GET(vpcInfo_, GatewayInfoVpcInfo) };
    inline GatewayInfo& setVpcInfo(const GatewayInfoVpcInfo & vpcInfo) { DARABONBA_PTR_SET_VALUE(vpcInfo_, vpcInfo) };
    inline GatewayInfo& setVpcInfo(GatewayInfoVpcInfo && vpcInfo) { DARABONBA_PTR_SET_RVALUE(vpcInfo_, vpcInfo) };


  protected:
    std::shared_ptr<string> engineVersion_ = nullptr;
    std::shared_ptr<string> gatewayId_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<GatewayInfoVpcInfo> vpcInfo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
