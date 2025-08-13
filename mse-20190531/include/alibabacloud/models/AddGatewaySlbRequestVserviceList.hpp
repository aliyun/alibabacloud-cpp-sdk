// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDGATEWAYSLBREQUESTVSERVICELIST_HPP_
#define ALIBABACLOUD_MODELS_ADDGATEWAYSLBREQUESTVSERVICELIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class AddGatewaySlbRequestVServiceList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddGatewaySlbRequestVServiceList& obj) { 
      DARABONBA_PTR_TO_JSON(Port, port_);
      DARABONBA_PTR_TO_JSON(Protocol, protocol_);
      DARABONBA_PTR_TO_JSON(VServerGroupId, VServerGroupId_);
      DARABONBA_PTR_TO_JSON(VServerGroupName, VServerGroupName_);
    };
    friend void from_json(const Darabonba::Json& j, AddGatewaySlbRequestVServiceList& obj) { 
      DARABONBA_PTR_FROM_JSON(Port, port_);
      DARABONBA_PTR_FROM_JSON(Protocol, protocol_);
      DARABONBA_PTR_FROM_JSON(VServerGroupId, VServerGroupId_);
      DARABONBA_PTR_FROM_JSON(VServerGroupName, VServerGroupName_);
    };
    AddGatewaySlbRequestVServiceList() = default ;
    AddGatewaySlbRequestVServiceList(const AddGatewaySlbRequestVServiceList &) = default ;
    AddGatewaySlbRequestVServiceList(AddGatewaySlbRequestVServiceList &&) = default ;
    AddGatewaySlbRequestVServiceList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddGatewaySlbRequestVServiceList() = default ;
    AddGatewaySlbRequestVServiceList& operator=(const AddGatewaySlbRequestVServiceList &) = default ;
    AddGatewaySlbRequestVServiceList& operator=(AddGatewaySlbRequestVServiceList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->port_ != nullptr
        && this->protocol_ != nullptr && this->VServerGroupId_ != nullptr && this->VServerGroupName_ != nullptr; };
    // port Field Functions 
    bool hasPort() const { return this->port_ != nullptr;};
    void deletePort() { this->port_ = nullptr;};
    inline int32_t port() const { DARABONBA_PTR_GET_DEFAULT(port_, 0) };
    inline AddGatewaySlbRequestVServiceList& setPort(int32_t port) { DARABONBA_PTR_SET_VALUE(port_, port) };


    // protocol Field Functions 
    bool hasProtocol() const { return this->protocol_ != nullptr;};
    void deleteProtocol() { this->protocol_ = nullptr;};
    inline string protocol() const { DARABONBA_PTR_GET_DEFAULT(protocol_, "") };
    inline AddGatewaySlbRequestVServiceList& setProtocol(string protocol) { DARABONBA_PTR_SET_VALUE(protocol_, protocol) };


    // VServerGroupId Field Functions 
    bool hasVServerGroupId() const { return this->VServerGroupId_ != nullptr;};
    void deleteVServerGroupId() { this->VServerGroupId_ = nullptr;};
    inline string VServerGroupId() const { DARABONBA_PTR_GET_DEFAULT(VServerGroupId_, "") };
    inline AddGatewaySlbRequestVServiceList& setVServerGroupId(string VServerGroupId) { DARABONBA_PTR_SET_VALUE(VServerGroupId_, VServerGroupId) };


    // VServerGroupName Field Functions 
    bool hasVServerGroupName() const { return this->VServerGroupName_ != nullptr;};
    void deleteVServerGroupName() { this->VServerGroupName_ = nullptr;};
    inline string VServerGroupName() const { DARABONBA_PTR_GET_DEFAULT(VServerGroupName_, "") };
    inline AddGatewaySlbRequestVServiceList& setVServerGroupName(string VServerGroupName) { DARABONBA_PTR_SET_VALUE(VServerGroupName_, VServerGroupName) };


  protected:
    // The port number.
    std::shared_ptr<int32_t> port_ = nullptr;
    // The protocol type. Valid values:
    // 
    // *   HTTP
    // *   HTTPS
    std::shared_ptr<string> protocol_ = nullptr;
    // The ID of the virtual server group.
    std::shared_ptr<string> VServerGroupId_ = nullptr;
    // The name of the virtual server group.
    std::shared_ptr<string> VServerGroupName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
