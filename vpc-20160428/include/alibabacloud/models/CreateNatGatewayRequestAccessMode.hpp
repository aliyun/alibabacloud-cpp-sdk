// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATENATGATEWAYREQUESTACCESSMODE_HPP_
#define ALIBABACLOUD_MODELS_CREATENATGATEWAYREQUESTACCESSMODE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class CreateNatGatewayRequestAccessMode : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateNatGatewayRequestAccessMode& obj) { 
      DARABONBA_PTR_TO_JSON(ModeValue, modeValue_);
      DARABONBA_PTR_TO_JSON(TunnelType, tunnelType_);
    };
    friend void from_json(const Darabonba::Json& j, CreateNatGatewayRequestAccessMode& obj) { 
      DARABONBA_PTR_FROM_JSON(ModeValue, modeValue_);
      DARABONBA_PTR_FROM_JSON(TunnelType, tunnelType_);
    };
    CreateNatGatewayRequestAccessMode() = default ;
    CreateNatGatewayRequestAccessMode(const CreateNatGatewayRequestAccessMode &) = default ;
    CreateNatGatewayRequestAccessMode(CreateNatGatewayRequestAccessMode &&) = default ;
    CreateNatGatewayRequestAccessMode(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateNatGatewayRequestAccessMode() = default ;
    CreateNatGatewayRequestAccessMode& operator=(const CreateNatGatewayRequestAccessMode &) = default ;
    CreateNatGatewayRequestAccessMode& operator=(CreateNatGatewayRequestAccessMode &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->modeValue_ == nullptr
        && return this->tunnelType_ == nullptr; };
    // modeValue Field Functions 
    bool hasModeValue() const { return this->modeValue_ != nullptr;};
    void deleteModeValue() { this->modeValue_ = nullptr;};
    inline string modeValue() const { DARABONBA_PTR_GET_DEFAULT(modeValue_, "") };
    inline CreateNatGatewayRequestAccessMode& setModeValue(string modeValue) { DARABONBA_PTR_SET_VALUE(modeValue_, modeValue) };


    // tunnelType Field Functions 
    bool hasTunnelType() const { return this->tunnelType_ != nullptr;};
    void deleteTunnelType() { this->tunnelType_ = nullptr;};
    inline string tunnelType() const { DARABONBA_PTR_GET_DEFAULT(tunnelType_, "") };
    inline CreateNatGatewayRequestAccessMode& setTunnelType(string tunnelType) { DARABONBA_PTR_SET_VALUE(tunnelType_, tunnelType) };


  protected:
    // Access mode. Valid values:
    // 
    // - **route**: route mode
    // 
    // - **tunnel**: tunnel mode
    // 
    // > If this parameter is specified, you must set **PrivateLinkEnabled** to **true**.
    std::shared_ptr<string> modeValue_ = nullptr;
    // Tunnel mode type:
    // 
    // - **geneve**: Geneve type
    // 
    // > This value takes effect if the access mode is the tunnel mode.
    std::shared_ptr<string> tunnelType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
