// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTGATEWAYSRESPONSEBODYDATAITEMSLOADBALANCERSPORTS_HPP_
#define ALIBABACLOUD_MODELS_LISTGATEWAYSRESPONSEBODYDATAITEMSLOADBALANCERSPORTS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class ListGatewaysResponseBodyDataItemsLoadBalancersPorts : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListGatewaysResponseBodyDataItemsLoadBalancersPorts& obj) { 
      DARABONBA_PTR_TO_JSON(port, port_);
      DARABONBA_PTR_TO_JSON(protocol, protocol_);
    };
    friend void from_json(const Darabonba::Json& j, ListGatewaysResponseBodyDataItemsLoadBalancersPorts& obj) { 
      DARABONBA_PTR_FROM_JSON(port, port_);
      DARABONBA_PTR_FROM_JSON(protocol, protocol_);
    };
    ListGatewaysResponseBodyDataItemsLoadBalancersPorts() = default ;
    ListGatewaysResponseBodyDataItemsLoadBalancersPorts(const ListGatewaysResponseBodyDataItemsLoadBalancersPorts &) = default ;
    ListGatewaysResponseBodyDataItemsLoadBalancersPorts(ListGatewaysResponseBodyDataItemsLoadBalancersPorts &&) = default ;
    ListGatewaysResponseBodyDataItemsLoadBalancersPorts(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListGatewaysResponseBodyDataItemsLoadBalancersPorts() = default ;
    ListGatewaysResponseBodyDataItemsLoadBalancersPorts& operator=(const ListGatewaysResponseBodyDataItemsLoadBalancersPorts &) = default ;
    ListGatewaysResponseBodyDataItemsLoadBalancersPorts& operator=(ListGatewaysResponseBodyDataItemsLoadBalancersPorts &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->port_ == nullptr
        && return this->protocol_ == nullptr; };
    // port Field Functions 
    bool hasPort() const { return this->port_ != nullptr;};
    void deletePort() { this->port_ = nullptr;};
    inline int32_t port() const { DARABONBA_PTR_GET_DEFAULT(port_, 0) };
    inline ListGatewaysResponseBodyDataItemsLoadBalancersPorts& setPort(int32_t port) { DARABONBA_PTR_SET_VALUE(port_, port) };


    // protocol Field Functions 
    bool hasProtocol() const { return this->protocol_ != nullptr;};
    void deleteProtocol() { this->protocol_ = nullptr;};
    inline string protocol() const { DARABONBA_PTR_GET_DEFAULT(protocol_, "") };
    inline ListGatewaysResponseBodyDataItemsLoadBalancersPorts& setProtocol(string protocol) { DARABONBA_PTR_SET_VALUE(protocol_, protocol) };


  protected:
    // The port number.
    std::shared_ptr<int32_t> port_ = nullptr;
    // The protocol. Valid values:
    // 
    // *   TCP
    // *   UDP
    std::shared_ptr<string> protocol_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
