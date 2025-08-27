// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTMACHINENETWORKINFOREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTMACHINENETWORKINFOREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListMachineNetworkInfoRequestMachineHpnInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EfloController20221215
{
namespace Models
{
  class ListMachineNetworkInfoRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListMachineNetworkInfoRequest& obj) { 
      DARABONBA_PTR_TO_JSON(MachineHpnInfo, machineHpnInfo_);
    };
    friend void from_json(const Darabonba::Json& j, ListMachineNetworkInfoRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(MachineHpnInfo, machineHpnInfo_);
    };
    ListMachineNetworkInfoRequest() = default ;
    ListMachineNetworkInfoRequest(const ListMachineNetworkInfoRequest &) = default ;
    ListMachineNetworkInfoRequest(ListMachineNetworkInfoRequest &&) = default ;
    ListMachineNetworkInfoRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListMachineNetworkInfoRequest() = default ;
    ListMachineNetworkInfoRequest& operator=(const ListMachineNetworkInfoRequest &) = default ;
    ListMachineNetworkInfoRequest& operator=(ListMachineNetworkInfoRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->machineHpnInfo_ != nullptr; };
    // machineHpnInfo Field Functions 
    bool hasMachineHpnInfo() const { return this->machineHpnInfo_ != nullptr;};
    void deleteMachineHpnInfo() { this->machineHpnInfo_ = nullptr;};
    inline const vector<ListMachineNetworkInfoRequestMachineHpnInfo> & machineHpnInfo() const { DARABONBA_PTR_GET_CONST(machineHpnInfo_, vector<ListMachineNetworkInfoRequestMachineHpnInfo>) };
    inline vector<ListMachineNetworkInfoRequestMachineHpnInfo> machineHpnInfo() { DARABONBA_PTR_GET(machineHpnInfo_, vector<ListMachineNetworkInfoRequestMachineHpnInfo>) };
    inline ListMachineNetworkInfoRequest& setMachineHpnInfo(const vector<ListMachineNetworkInfoRequestMachineHpnInfo> & machineHpnInfo) { DARABONBA_PTR_SET_VALUE(machineHpnInfo_, machineHpnInfo) };
    inline ListMachineNetworkInfoRequest& setMachineHpnInfo(vector<ListMachineNetworkInfoRequestMachineHpnInfo> && machineHpnInfo) { DARABONBA_PTR_SET_RVALUE(machineHpnInfo_, machineHpnInfo) };


  protected:
    // hpn information of machine
    std::shared_ptr<vector<ListMachineNetworkInfoRequestMachineHpnInfo>> machineHpnInfo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EfloController20221215
#endif
