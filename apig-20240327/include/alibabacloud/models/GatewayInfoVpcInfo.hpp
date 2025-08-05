// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GATEWAYINFOVPCINFO_HPP_
#define ALIBABACLOUD_MODELS_GATEWAYINFOVPCINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class GatewayInfoVpcInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GatewayInfoVpcInfo& obj) { 
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(vpcId, vpcId_);
    };
    friend void from_json(const Darabonba::Json& j, GatewayInfoVpcInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(vpcId, vpcId_);
    };
    GatewayInfoVpcInfo() = default ;
    GatewayInfoVpcInfo(const GatewayInfoVpcInfo &) = default ;
    GatewayInfoVpcInfo(GatewayInfoVpcInfo &&) = default ;
    GatewayInfoVpcInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GatewayInfoVpcInfo() = default ;
    GatewayInfoVpcInfo& operator=(const GatewayInfoVpcInfo &) = default ;
    GatewayInfoVpcInfo& operator=(GatewayInfoVpcInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->name_ != nullptr
        && this->vpcId_ != nullptr; };
    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline GatewayInfoVpcInfo& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string vpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline GatewayInfoVpcInfo& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


  protected:
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> vpcId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
