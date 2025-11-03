// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DOWNLOADVPNCONNECTIONCONFIGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DOWNLOADVPNCONNECTIONCONFIGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DownloadVpnConnectionConfigResponseBodyVpnConnectionConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class DownloadVpnConnectionConfigResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DownloadVpnConnectionConfigResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(VpnConnectionConfig, vpnConnectionConfig_);
    };
    friend void from_json(const Darabonba::Json& j, DownloadVpnConnectionConfigResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(VpnConnectionConfig, vpnConnectionConfig_);
    };
    DownloadVpnConnectionConfigResponseBody() = default ;
    DownloadVpnConnectionConfigResponseBody(const DownloadVpnConnectionConfigResponseBody &) = default ;
    DownloadVpnConnectionConfigResponseBody(DownloadVpnConnectionConfigResponseBody &&) = default ;
    DownloadVpnConnectionConfigResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DownloadVpnConnectionConfigResponseBody() = default ;
    DownloadVpnConnectionConfigResponseBody& operator=(const DownloadVpnConnectionConfigResponseBody &) = default ;
    DownloadVpnConnectionConfigResponseBody& operator=(DownloadVpnConnectionConfigResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && return this->vpnConnectionConfig_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DownloadVpnConnectionConfigResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // vpnConnectionConfig Field Functions 
    bool hasVpnConnectionConfig() const { return this->vpnConnectionConfig_ != nullptr;};
    void deleteVpnConnectionConfig() { this->vpnConnectionConfig_ = nullptr;};
    inline const DownloadVpnConnectionConfigResponseBodyVpnConnectionConfig & vpnConnectionConfig() const { DARABONBA_PTR_GET_CONST(vpnConnectionConfig_, DownloadVpnConnectionConfigResponseBodyVpnConnectionConfig) };
    inline DownloadVpnConnectionConfigResponseBodyVpnConnectionConfig vpnConnectionConfig() { DARABONBA_PTR_GET(vpnConnectionConfig_, DownloadVpnConnectionConfigResponseBodyVpnConnectionConfig) };
    inline DownloadVpnConnectionConfigResponseBody& setVpnConnectionConfig(const DownloadVpnConnectionConfigResponseBodyVpnConnectionConfig & vpnConnectionConfig) { DARABONBA_PTR_SET_VALUE(vpnConnectionConfig_, vpnConnectionConfig) };
    inline DownloadVpnConnectionConfigResponseBody& setVpnConnectionConfig(DownloadVpnConnectionConfigResponseBodyVpnConnectionConfig && vpnConnectionConfig) { DARABONBA_PTR_SET_RVALUE(vpnConnectionConfig_, vpnConnectionConfig) };


  protected:
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The configurations of the peer gateway device.
    std::shared_ptr<DownloadVpnConnectionConfigResponseBodyVpnConnectionConfig> vpnConnectionConfig_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
