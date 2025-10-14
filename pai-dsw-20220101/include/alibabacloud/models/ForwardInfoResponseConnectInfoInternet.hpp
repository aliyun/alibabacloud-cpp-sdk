// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_FORWARDINFORESPONSECONNECTINFOINTERNET_HPP_
#define ALIBABACLOUD_MODELS_FORWARDINFORESPONSECONNECTINFOINTERNET_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiDsw20220101
{
namespace Models
{
  class ForwardInfoResponseConnectInfoInternet : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ForwardInfoResponseConnectInfoInternet& obj) { 
      DARABONBA_PTR_TO_JSON(Endpoint, endpoint_);
      DARABONBA_PTR_TO_JSON(Port, port_);
    };
    friend void from_json(const Darabonba::Json& j, ForwardInfoResponseConnectInfoInternet& obj) { 
      DARABONBA_PTR_FROM_JSON(Endpoint, endpoint_);
      DARABONBA_PTR_FROM_JSON(Port, port_);
    };
    ForwardInfoResponseConnectInfoInternet() = default ;
    ForwardInfoResponseConnectInfoInternet(const ForwardInfoResponseConnectInfoInternet &) = default ;
    ForwardInfoResponseConnectInfoInternet(ForwardInfoResponseConnectInfoInternet &&) = default ;
    ForwardInfoResponseConnectInfoInternet(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ForwardInfoResponseConnectInfoInternet() = default ;
    ForwardInfoResponseConnectInfoInternet& operator=(const ForwardInfoResponseConnectInfoInternet &) = default ;
    ForwardInfoResponseConnectInfoInternet& operator=(ForwardInfoResponseConnectInfoInternet &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->endpoint_ == nullptr
        && return this->port_ == nullptr; };
    // endpoint Field Functions 
    bool hasEndpoint() const { return this->endpoint_ != nullptr;};
    void deleteEndpoint() { this->endpoint_ = nullptr;};
    inline string endpoint() const { DARABONBA_PTR_GET_DEFAULT(endpoint_, "") };
    inline ForwardInfoResponseConnectInfoInternet& setEndpoint(string endpoint) { DARABONBA_PTR_SET_VALUE(endpoint_, endpoint) };


    // port Field Functions 
    bool hasPort() const { return this->port_ != nullptr;};
    void deletePort() { this->port_ = nullptr;};
    inline string port() const { DARABONBA_PTR_GET_DEFAULT(port_, "") };
    inline ForwardInfoResponseConnectInfoInternet& setPort(string port) { DARABONBA_PTR_SET_VALUE(port_, port) };


  protected:
    std::shared_ptr<string> endpoint_ = nullptr;
    std::shared_ptr<string> port_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiDsw20220101
#endif
