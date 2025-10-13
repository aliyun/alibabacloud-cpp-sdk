// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PROBEPROBEHANDLER_HPP_
#define ALIBABACLOUD_MODELS_PROBEPROBEHANDLER_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ProbeProbeHandlerHttpGet.hpp>
#include <alibabacloud/models/ProbeProbeHandlerTcpSocket.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sae20190506
{
namespace Models
{
  class ProbeProbeHandler : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ProbeProbeHandler& obj) { 
      DARABONBA_PTR_TO_JSON(httpGet, httpGet_);
      DARABONBA_PTR_TO_JSON(tcpSocket, tcpSocket_);
    };
    friend void from_json(const Darabonba::Json& j, ProbeProbeHandler& obj) { 
      DARABONBA_PTR_FROM_JSON(httpGet, httpGet_);
      DARABONBA_PTR_FROM_JSON(tcpSocket, tcpSocket_);
    };
    ProbeProbeHandler() = default ;
    ProbeProbeHandler(const ProbeProbeHandler &) = default ;
    ProbeProbeHandler(ProbeProbeHandler &&) = default ;
    ProbeProbeHandler(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ProbeProbeHandler() = default ;
    ProbeProbeHandler& operator=(const ProbeProbeHandler &) = default ;
    ProbeProbeHandler& operator=(ProbeProbeHandler &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->httpGet_ == nullptr
        && return this->tcpSocket_ == nullptr; };
    // httpGet Field Functions 
    bool hasHttpGet() const { return this->httpGet_ != nullptr;};
    void deleteHttpGet() { this->httpGet_ = nullptr;};
    inline const Models::ProbeProbeHandlerHttpGet & httpGet() const { DARABONBA_PTR_GET_CONST(httpGet_, Models::ProbeProbeHandlerHttpGet) };
    inline Models::ProbeProbeHandlerHttpGet httpGet() { DARABONBA_PTR_GET(httpGet_, Models::ProbeProbeHandlerHttpGet) };
    inline ProbeProbeHandler& setHttpGet(const Models::ProbeProbeHandlerHttpGet & httpGet) { DARABONBA_PTR_SET_VALUE(httpGet_, httpGet) };
    inline ProbeProbeHandler& setHttpGet(Models::ProbeProbeHandlerHttpGet && httpGet) { DARABONBA_PTR_SET_RVALUE(httpGet_, httpGet) };


    // tcpSocket Field Functions 
    bool hasTcpSocket() const { return this->tcpSocket_ != nullptr;};
    void deleteTcpSocket() { this->tcpSocket_ = nullptr;};
    inline const Models::ProbeProbeHandlerTcpSocket & tcpSocket() const { DARABONBA_PTR_GET_CONST(tcpSocket_, Models::ProbeProbeHandlerTcpSocket) };
    inline Models::ProbeProbeHandlerTcpSocket tcpSocket() { DARABONBA_PTR_GET(tcpSocket_, Models::ProbeProbeHandlerTcpSocket) };
    inline ProbeProbeHandler& setTcpSocket(const Models::ProbeProbeHandlerTcpSocket & tcpSocket) { DARABONBA_PTR_SET_VALUE(tcpSocket_, tcpSocket) };
    inline ProbeProbeHandler& setTcpSocket(Models::ProbeProbeHandlerTcpSocket && tcpSocket) { DARABONBA_PTR_SET_RVALUE(tcpSocket_, tcpSocket) };


  protected:
    std::shared_ptr<Models::ProbeProbeHandlerHttpGet> httpGet_ = nullptr;
    std::shared_ptr<Models::ProbeProbeHandlerTcpSocket> tcpSocket_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif
