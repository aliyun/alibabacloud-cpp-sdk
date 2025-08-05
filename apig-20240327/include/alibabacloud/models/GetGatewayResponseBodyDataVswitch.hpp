// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETGATEWAYRESPONSEBODYDATAVSWITCH_HPP_
#define ALIBABACLOUD_MODELS_GETGATEWAYRESPONSEBODYDATAVSWITCH_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class GetGatewayResponseBodyDataVSwitch : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetGatewayResponseBodyDataVSwitch& obj) { 
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(vSwitchId, vSwitchId_);
    };
    friend void from_json(const Darabonba::Json& j, GetGatewayResponseBodyDataVSwitch& obj) { 
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(vSwitchId, vSwitchId_);
    };
    GetGatewayResponseBodyDataVSwitch() = default ;
    GetGatewayResponseBodyDataVSwitch(const GetGatewayResponseBodyDataVSwitch &) = default ;
    GetGatewayResponseBodyDataVSwitch(GetGatewayResponseBodyDataVSwitch &&) = default ;
    GetGatewayResponseBodyDataVSwitch(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetGatewayResponseBodyDataVSwitch() = default ;
    GetGatewayResponseBodyDataVSwitch& operator=(const GetGatewayResponseBodyDataVSwitch &) = default ;
    GetGatewayResponseBodyDataVSwitch& operator=(GetGatewayResponseBodyDataVSwitch &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->name_ != nullptr
        && this->vSwitchId_ != nullptr; };
    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline GetGatewayResponseBodyDataVSwitch& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // vSwitchId Field Functions 
    bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
    void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
    inline string vSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
    inline GetGatewayResponseBodyDataVSwitch& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


  protected:
    // The vSwitch name.
    std::shared_ptr<string> name_ = nullptr;
    // The vSwitch ID.
    std::shared_ptr<string> vSwitchId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
