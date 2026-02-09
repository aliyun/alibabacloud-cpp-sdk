// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GATEWAYINFO_HPP_
#define ALIBABACLOUD_MODELS_GATEWAYINFO_HPP_
#include <darabonba/Core.hpp>
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
    class VpcInfo : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const VpcInfo& obj) { 
        DARABONBA_PTR_TO_JSON(name, name_);
        DARABONBA_PTR_TO_JSON(vpcId, vpcId_);
      };
      friend void from_json(const Darabonba::Json& j, VpcInfo& obj) { 
        DARABONBA_PTR_FROM_JSON(name, name_);
        DARABONBA_PTR_FROM_JSON(vpcId, vpcId_);
      };
      VpcInfo() = default ;
      VpcInfo(const VpcInfo &) = default ;
      VpcInfo(VpcInfo &&) = default ;
      VpcInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~VpcInfo() = default ;
      VpcInfo& operator=(const VpcInfo &) = default ;
      VpcInfo& operator=(VpcInfo &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->name_ == nullptr
        && this->vpcId_ == nullptr; };
      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline VpcInfo& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // vpcId Field Functions 
      bool hasVpcId() const { return this->vpcId_ != nullptr;};
      void deleteVpcId() { this->vpcId_ = nullptr;};
      inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
      inline VpcInfo& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


    protected:
      // The VPC name.
      shared_ptr<string> name_ {};
      // The VPC ID.
      shared_ptr<string> vpcId_ {};
    };

    virtual bool empty() const override { return this->engineVersion_ == nullptr
        && this->gatewayId_ == nullptr && this->name_ == nullptr && this->vpcInfo_ == nullptr; };
    // engineVersion Field Functions 
    bool hasEngineVersion() const { return this->engineVersion_ != nullptr;};
    void deleteEngineVersion() { this->engineVersion_ = nullptr;};
    inline string getEngineVersion() const { DARABONBA_PTR_GET_DEFAULT(engineVersion_, "") };
    inline GatewayInfo& setEngineVersion(string engineVersion) { DARABONBA_PTR_SET_VALUE(engineVersion_, engineVersion) };


    // gatewayId Field Functions 
    bool hasGatewayId() const { return this->gatewayId_ != nullptr;};
    void deleteGatewayId() { this->gatewayId_ = nullptr;};
    inline string getGatewayId() const { DARABONBA_PTR_GET_DEFAULT(gatewayId_, "") };
    inline GatewayInfo& setGatewayId(string gatewayId) { DARABONBA_PTR_SET_VALUE(gatewayId_, gatewayId) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline GatewayInfo& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // vpcInfo Field Functions 
    bool hasVpcInfo() const { return this->vpcInfo_ != nullptr;};
    void deleteVpcInfo() { this->vpcInfo_ = nullptr;};
    inline const GatewayInfo::VpcInfo & getVpcInfo() const { DARABONBA_PTR_GET_CONST(vpcInfo_, GatewayInfo::VpcInfo) };
    inline GatewayInfo::VpcInfo getVpcInfo() { DARABONBA_PTR_GET(vpcInfo_, GatewayInfo::VpcInfo) };
    inline GatewayInfo& setVpcInfo(const GatewayInfo::VpcInfo & vpcInfo) { DARABONBA_PTR_SET_VALUE(vpcInfo_, vpcInfo) };
    inline GatewayInfo& setVpcInfo(GatewayInfo::VpcInfo && vpcInfo) { DARABONBA_PTR_SET_RVALUE(vpcInfo_, vpcInfo) };


  protected:
    // The instance engine version.
    shared_ptr<string> engineVersion_ {};
    // The instance ID.
    shared_ptr<string> gatewayId_ {};
    // The instance name.
    shared_ptr<string> name_ {};
    // The virtual private cloud (VPC) information.
    shared_ptr<GatewayInfo::VpcInfo> vpcInfo_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
