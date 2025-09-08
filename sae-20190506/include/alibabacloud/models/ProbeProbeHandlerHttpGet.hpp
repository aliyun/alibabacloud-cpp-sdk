// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PROBEPROBEHANDLERHTTPGET_HPP_
#define ALIBABACLOUD_MODELS_PROBEPROBEHANDLERHTTPGET_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ProbeProbeHandlerHttpGetHttpHeaders.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sae20190506
{
namespace Models
{
  class ProbeProbeHandlerHttpGet : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ProbeProbeHandlerHttpGet& obj) { 
      DARABONBA_PTR_TO_JSON(httpHeaders, httpHeaders_);
      DARABONBA_PTR_TO_JSON(path, path_);
      DARABONBA_PTR_TO_JSON(port, port_);
    };
    friend void from_json(const Darabonba::Json& j, ProbeProbeHandlerHttpGet& obj) { 
      DARABONBA_PTR_FROM_JSON(httpHeaders, httpHeaders_);
      DARABONBA_PTR_FROM_JSON(path, path_);
      DARABONBA_PTR_FROM_JSON(port, port_);
    };
    ProbeProbeHandlerHttpGet() = default ;
    ProbeProbeHandlerHttpGet(const ProbeProbeHandlerHttpGet &) = default ;
    ProbeProbeHandlerHttpGet(ProbeProbeHandlerHttpGet &&) = default ;
    ProbeProbeHandlerHttpGet(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ProbeProbeHandlerHttpGet() = default ;
    ProbeProbeHandlerHttpGet& operator=(const ProbeProbeHandlerHttpGet &) = default ;
    ProbeProbeHandlerHttpGet& operator=(ProbeProbeHandlerHttpGet &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->httpHeaders_ != nullptr
        && this->path_ != nullptr && this->port_ != nullptr; };
    // httpHeaders Field Functions 
    bool hasHttpHeaders() const { return this->httpHeaders_ != nullptr;};
    void deleteHttpHeaders() { this->httpHeaders_ = nullptr;};
    inline const vector<Models::ProbeProbeHandlerHttpGetHttpHeaders> & httpHeaders() const { DARABONBA_PTR_GET_CONST(httpHeaders_, vector<Models::ProbeProbeHandlerHttpGetHttpHeaders>) };
    inline vector<Models::ProbeProbeHandlerHttpGetHttpHeaders> httpHeaders() { DARABONBA_PTR_GET(httpHeaders_, vector<Models::ProbeProbeHandlerHttpGetHttpHeaders>) };
    inline ProbeProbeHandlerHttpGet& setHttpHeaders(const vector<Models::ProbeProbeHandlerHttpGetHttpHeaders> & httpHeaders) { DARABONBA_PTR_SET_VALUE(httpHeaders_, httpHeaders) };
    inline ProbeProbeHandlerHttpGet& setHttpHeaders(vector<Models::ProbeProbeHandlerHttpGetHttpHeaders> && httpHeaders) { DARABONBA_PTR_SET_RVALUE(httpHeaders_, httpHeaders) };


    // path Field Functions 
    bool hasPath() const { return this->path_ != nullptr;};
    void deletePath() { this->path_ = nullptr;};
    inline string path() const { DARABONBA_PTR_GET_DEFAULT(path_, "") };
    inline ProbeProbeHandlerHttpGet& setPath(string path) { DARABONBA_PTR_SET_VALUE(path_, path) };


    // port Field Functions 
    bool hasPort() const { return this->port_ != nullptr;};
    void deletePort() { this->port_ = nullptr;};
    inline int32_t port() const { DARABONBA_PTR_GET_DEFAULT(port_, 0) };
    inline ProbeProbeHandlerHttpGet& setPort(int32_t port) { DARABONBA_PTR_SET_VALUE(port_, port) };


  protected:
    std::shared_ptr<vector<Models::ProbeProbeHandlerHttpGetHttpHeaders>> httpHeaders_ = nullptr;
    std::shared_ptr<string> path_ = nullptr;
    std::shared_ptr<int32_t> port_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif
