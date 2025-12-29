// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PROBEHANDLER_HPP_
#define ALIBABACLOUD_MODELS_PROBEHANDLER_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/HTTPGetAction.hpp>
#include <alibabacloud/models/TCPSocketAction.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sae20190506
{
namespace Models
{
  class ProbeHandler : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ProbeHandler& obj) { 
      DARABONBA_PTR_TO_JSON(HttpGet, httpGet_);
      DARABONBA_PTR_TO_JSON(TcpSocket, tcpSocket_);
    };
    friend void from_json(const Darabonba::Json& j, ProbeHandler& obj) { 
      DARABONBA_PTR_FROM_JSON(HttpGet, httpGet_);
      DARABONBA_PTR_FROM_JSON(TcpSocket, tcpSocket_);
    };
    ProbeHandler() = default ;
    ProbeHandler(const ProbeHandler &) = default ;
    ProbeHandler(ProbeHandler &&) = default ;
    ProbeHandler(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ProbeHandler() = default ;
    ProbeHandler& operator=(const ProbeHandler &) = default ;
    ProbeHandler& operator=(ProbeHandler &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->httpGet_ == nullptr
        && this->tcpSocket_ == nullptr; };
    // httpGet Field Functions 
    bool hasHttpGet() const { return this->httpGet_ != nullptr;};
    void deleteHttpGet() { this->httpGet_ = nullptr;};
    inline const HTTPGetAction & getHttpGet() const { DARABONBA_PTR_GET_CONST(httpGet_, HTTPGetAction) };
    inline HTTPGetAction getHttpGet() { DARABONBA_PTR_GET(httpGet_, HTTPGetAction) };
    inline ProbeHandler& setHttpGet(const HTTPGetAction & httpGet) { DARABONBA_PTR_SET_VALUE(httpGet_, httpGet) };
    inline ProbeHandler& setHttpGet(HTTPGetAction && httpGet) { DARABONBA_PTR_SET_RVALUE(httpGet_, httpGet) };


    // tcpSocket Field Functions 
    bool hasTcpSocket() const { return this->tcpSocket_ != nullptr;};
    void deleteTcpSocket() { this->tcpSocket_ = nullptr;};
    inline const TCPSocketAction & getTcpSocket() const { DARABONBA_PTR_GET_CONST(tcpSocket_, TCPSocketAction) };
    inline TCPSocketAction getTcpSocket() { DARABONBA_PTR_GET(tcpSocket_, TCPSocketAction) };
    inline ProbeHandler& setTcpSocket(const TCPSocketAction & tcpSocket) { DARABONBA_PTR_SET_VALUE(tcpSocket_, tcpSocket) };
    inline ProbeHandler& setTcpSocket(TCPSocketAction && tcpSocket) { DARABONBA_PTR_SET_RVALUE(tcpSocket_, tcpSocket) };


  protected:
    shared_ptr<HTTPGetAction> httpGet_ {};
    shared_ptr<TCPSocketAction> tcpSocket_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif
