// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTMACHINENETWORKINFOSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTMACHINENETWORKINFOSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EfloController20221215
{
namespace Models
{
  class ListMachineNetworkInfoShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListMachineNetworkInfoShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(MachineHpnInfo, machineHpnInfoShrink_);
    };
    friend void from_json(const Darabonba::Json& j, ListMachineNetworkInfoShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(MachineHpnInfo, machineHpnInfoShrink_);
    };
    ListMachineNetworkInfoShrinkRequest() = default ;
    ListMachineNetworkInfoShrinkRequest(const ListMachineNetworkInfoShrinkRequest &) = default ;
    ListMachineNetworkInfoShrinkRequest(ListMachineNetworkInfoShrinkRequest &&) = default ;
    ListMachineNetworkInfoShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListMachineNetworkInfoShrinkRequest() = default ;
    ListMachineNetworkInfoShrinkRequest& operator=(const ListMachineNetworkInfoShrinkRequest &) = default ;
    ListMachineNetworkInfoShrinkRequest& operator=(ListMachineNetworkInfoShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->machineHpnInfoShrink_ == nullptr; };
    // machineHpnInfoShrink Field Functions 
    bool hasMachineHpnInfoShrink() const { return this->machineHpnInfoShrink_ != nullptr;};
    void deleteMachineHpnInfoShrink() { this->machineHpnInfoShrink_ = nullptr;};
    inline string machineHpnInfoShrink() const { DARABONBA_PTR_GET_DEFAULT(machineHpnInfoShrink_, "") };
    inline ListMachineNetworkInfoShrinkRequest& setMachineHpnInfoShrink(string machineHpnInfoShrink) { DARABONBA_PTR_SET_VALUE(machineHpnInfoShrink_, machineHpnInfoShrink) };


  protected:
    // hpn information of machine
    std::shared_ptr<string> machineHpnInfoShrink_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EfloController20221215
#endif
