// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETLINDORMV2INSTANCERESPONSEBODYENGINELISTCONNECTADDRESSLIST_HPP_
#define ALIBABACLOUD_MODELS_GETLINDORMV2INSTANCERESPONSEBODYENGINELISTCONNECTADDRESSLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Hitsdb20200615
{
namespace Models
{
  class GetLindormV2InstanceResponseBodyEngineListConnectAddressList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetLindormV2InstanceResponseBodyEngineListConnectAddressList& obj) { 
      DARABONBA_PTR_TO_JSON(Address, address_);
      DARABONBA_PTR_TO_JSON(Port, port_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, GetLindormV2InstanceResponseBodyEngineListConnectAddressList& obj) { 
      DARABONBA_PTR_FROM_JSON(Address, address_);
      DARABONBA_PTR_FROM_JSON(Port, port_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    GetLindormV2InstanceResponseBodyEngineListConnectAddressList() = default ;
    GetLindormV2InstanceResponseBodyEngineListConnectAddressList(const GetLindormV2InstanceResponseBodyEngineListConnectAddressList &) = default ;
    GetLindormV2InstanceResponseBodyEngineListConnectAddressList(GetLindormV2InstanceResponseBodyEngineListConnectAddressList &&) = default ;
    GetLindormV2InstanceResponseBodyEngineListConnectAddressList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetLindormV2InstanceResponseBodyEngineListConnectAddressList() = default ;
    GetLindormV2InstanceResponseBodyEngineListConnectAddressList& operator=(const GetLindormV2InstanceResponseBodyEngineListConnectAddressList &) = default ;
    GetLindormV2InstanceResponseBodyEngineListConnectAddressList& operator=(GetLindormV2InstanceResponseBodyEngineListConnectAddressList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->address_ != nullptr
        && this->port_ != nullptr && this->type_ != nullptr; };
    // address Field Functions 
    bool hasAddress() const { return this->address_ != nullptr;};
    void deleteAddress() { this->address_ = nullptr;};
    inline string address() const { DARABONBA_PTR_GET_DEFAULT(address_, "") };
    inline GetLindormV2InstanceResponseBodyEngineListConnectAddressList& setAddress(string address) { DARABONBA_PTR_SET_VALUE(address_, address) };


    // port Field Functions 
    bool hasPort() const { return this->port_ != nullptr;};
    void deletePort() { this->port_ = nullptr;};
    inline string port() const { DARABONBA_PTR_GET_DEFAULT(port_, "") };
    inline GetLindormV2InstanceResponseBodyEngineListConnectAddressList& setPort(string port) { DARABONBA_PTR_SET_VALUE(port_, port) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline GetLindormV2InstanceResponseBodyEngineListConnectAddressList& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    std::shared_ptr<string> address_ = nullptr;
    std::shared_ptr<string> port_ = nullptr;
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Hitsdb20200615
#endif
