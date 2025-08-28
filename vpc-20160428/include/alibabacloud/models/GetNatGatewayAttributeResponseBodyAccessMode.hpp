// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETNATGATEWAYATTRIBUTERESPONSEBODYACCESSMODE_HPP_
#define ALIBABACLOUD_MODELS_GETNATGATEWAYATTRIBUTERESPONSEBODYACCESSMODE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class GetNatGatewayAttributeResponseBodyAccessMode : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetNatGatewayAttributeResponseBodyAccessMode& obj) { 
      DARABONBA_PTR_TO_JSON(ModeValue, modeValue_);
      DARABONBA_PTR_TO_JSON(TunnelType, tunnelType_);
    };
    friend void from_json(const Darabonba::Json& j, GetNatGatewayAttributeResponseBodyAccessMode& obj) { 
      DARABONBA_PTR_FROM_JSON(ModeValue, modeValue_);
      DARABONBA_PTR_FROM_JSON(TunnelType, tunnelType_);
    };
    GetNatGatewayAttributeResponseBodyAccessMode() = default ;
    GetNatGatewayAttributeResponseBodyAccessMode(const GetNatGatewayAttributeResponseBodyAccessMode &) = default ;
    GetNatGatewayAttributeResponseBodyAccessMode(GetNatGatewayAttributeResponseBodyAccessMode &&) = default ;
    GetNatGatewayAttributeResponseBodyAccessMode(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetNatGatewayAttributeResponseBodyAccessMode() = default ;
    GetNatGatewayAttributeResponseBodyAccessMode& operator=(const GetNatGatewayAttributeResponseBodyAccessMode &) = default ;
    GetNatGatewayAttributeResponseBodyAccessMode& operator=(GetNatGatewayAttributeResponseBodyAccessMode &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->modeValue_ != nullptr
        && this->tunnelType_ != nullptr; };
    // modeValue Field Functions 
    bool hasModeValue() const { return this->modeValue_ != nullptr;};
    void deleteModeValue() { this->modeValue_ = nullptr;};
    inline string modeValue() const { DARABONBA_PTR_GET_DEFAULT(modeValue_, "") };
    inline GetNatGatewayAttributeResponseBodyAccessMode& setModeValue(string modeValue) { DARABONBA_PTR_SET_VALUE(modeValue_, modeValue) };


    // tunnelType Field Functions 
    bool hasTunnelType() const { return this->tunnelType_ != nullptr;};
    void deleteTunnelType() { this->tunnelType_ = nullptr;};
    inline string tunnelType() const { DARABONBA_PTR_GET_DEFAULT(tunnelType_, "") };
    inline GetNatGatewayAttributeResponseBodyAccessMode& setTunnelType(string tunnelType) { DARABONBA_PTR_SET_VALUE(tunnelType_, tunnelType) };


  protected:
    std::shared_ptr<string> modeValue_ = nullptr;
    std::shared_ptr<string> tunnelType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
