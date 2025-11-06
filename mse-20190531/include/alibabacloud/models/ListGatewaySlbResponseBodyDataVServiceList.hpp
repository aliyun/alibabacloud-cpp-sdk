// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTGATEWAYSLBRESPONSEBODYDATAVSERVICELIST_HPP_
#define ALIBABACLOUD_MODELS_LISTGATEWAYSLBRESPONSEBODYDATAVSERVICELIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class ListGatewaySlbResponseBodyDataVServiceList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListGatewaySlbResponseBodyDataVServiceList& obj) { 
      DARABONBA_PTR_TO_JSON(Port, port_);
      DARABONBA_PTR_TO_JSON(Protocol, protocol_);
      DARABONBA_PTR_TO_JSON(VServerGroupId, VServerGroupId_);
      DARABONBA_PTR_TO_JSON(VServerGroupName, VServerGroupName_);
    };
    friend void from_json(const Darabonba::Json& j, ListGatewaySlbResponseBodyDataVServiceList& obj) { 
      DARABONBA_PTR_FROM_JSON(Port, port_);
      DARABONBA_PTR_FROM_JSON(Protocol, protocol_);
      DARABONBA_PTR_FROM_JSON(VServerGroupId, VServerGroupId_);
      DARABONBA_PTR_FROM_JSON(VServerGroupName, VServerGroupName_);
    };
    ListGatewaySlbResponseBodyDataVServiceList() = default ;
    ListGatewaySlbResponseBodyDataVServiceList(const ListGatewaySlbResponseBodyDataVServiceList &) = default ;
    ListGatewaySlbResponseBodyDataVServiceList(ListGatewaySlbResponseBodyDataVServiceList &&) = default ;
    ListGatewaySlbResponseBodyDataVServiceList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListGatewaySlbResponseBodyDataVServiceList() = default ;
    ListGatewaySlbResponseBodyDataVServiceList& operator=(const ListGatewaySlbResponseBodyDataVServiceList &) = default ;
    ListGatewaySlbResponseBodyDataVServiceList& operator=(ListGatewaySlbResponseBodyDataVServiceList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->port_ == nullptr
        && return this->protocol_ == nullptr && return this->VServerGroupId_ == nullptr && return this->VServerGroupName_ == nullptr; };
    // port Field Functions 
    bool hasPort() const { return this->port_ != nullptr;};
    void deletePort() { this->port_ = nullptr;};
    inline string port() const { DARABONBA_PTR_GET_DEFAULT(port_, "") };
    inline ListGatewaySlbResponseBodyDataVServiceList& setPort(string port) { DARABONBA_PTR_SET_VALUE(port_, port) };


    // protocol Field Functions 
    bool hasProtocol() const { return this->protocol_ != nullptr;};
    void deleteProtocol() { this->protocol_ = nullptr;};
    inline string protocol() const { DARABONBA_PTR_GET_DEFAULT(protocol_, "") };
    inline ListGatewaySlbResponseBodyDataVServiceList& setProtocol(string protocol) { DARABONBA_PTR_SET_VALUE(protocol_, protocol) };


    // VServerGroupId Field Functions 
    bool hasVServerGroupId() const { return this->VServerGroupId_ != nullptr;};
    void deleteVServerGroupId() { this->VServerGroupId_ = nullptr;};
    inline string VServerGroupId() const { DARABONBA_PTR_GET_DEFAULT(VServerGroupId_, "") };
    inline ListGatewaySlbResponseBodyDataVServiceList& setVServerGroupId(string VServerGroupId) { DARABONBA_PTR_SET_VALUE(VServerGroupId_, VServerGroupId) };


    // VServerGroupName Field Functions 
    bool hasVServerGroupName() const { return this->VServerGroupName_ != nullptr;};
    void deleteVServerGroupName() { this->VServerGroupName_ = nullptr;};
    inline string VServerGroupName() const { DARABONBA_PTR_GET_DEFAULT(VServerGroupName_, "") };
    inline ListGatewaySlbResponseBodyDataVServiceList& setVServerGroupName(string VServerGroupName) { DARABONBA_PTR_SET_VALUE(VServerGroupName_, VServerGroupName) };


  protected:
    std::shared_ptr<string> port_ = nullptr;
    std::shared_ptr<string> protocol_ = nullptr;
    std::shared_ptr<string> VServerGroupId_ = nullptr;
    std::shared_ptr<string> VServerGroupName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
