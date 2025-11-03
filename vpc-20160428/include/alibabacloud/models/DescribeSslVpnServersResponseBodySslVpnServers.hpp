// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESSLVPNSERVERSRESPONSEBODYSSLVPNSERVERS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESSLVPNSERVERSRESPONSEBODYSSLVPNSERVERS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeSslVpnServersResponseBodySslVpnServersSslVpnServer.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class DescribeSslVpnServersResponseBodySslVpnServers : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSslVpnServersResponseBodySslVpnServers& obj) { 
      DARABONBA_PTR_TO_JSON(SslVpnServer, sslVpnServer_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSslVpnServersResponseBodySslVpnServers& obj) { 
      DARABONBA_PTR_FROM_JSON(SslVpnServer, sslVpnServer_);
    };
    DescribeSslVpnServersResponseBodySslVpnServers() = default ;
    DescribeSslVpnServersResponseBodySslVpnServers(const DescribeSslVpnServersResponseBodySslVpnServers &) = default ;
    DescribeSslVpnServersResponseBodySslVpnServers(DescribeSslVpnServersResponseBodySslVpnServers &&) = default ;
    DescribeSslVpnServersResponseBodySslVpnServers(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSslVpnServersResponseBodySslVpnServers() = default ;
    DescribeSslVpnServersResponseBodySslVpnServers& operator=(const DescribeSslVpnServersResponseBodySslVpnServers &) = default ;
    DescribeSslVpnServersResponseBodySslVpnServers& operator=(DescribeSslVpnServersResponseBodySslVpnServers &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->sslVpnServer_ == nullptr; };
    // sslVpnServer Field Functions 
    bool hasSslVpnServer() const { return this->sslVpnServer_ != nullptr;};
    void deleteSslVpnServer() { this->sslVpnServer_ = nullptr;};
    inline const vector<Models::DescribeSslVpnServersResponseBodySslVpnServersSslVpnServer> & sslVpnServer() const { DARABONBA_PTR_GET_CONST(sslVpnServer_, vector<Models::DescribeSslVpnServersResponseBodySslVpnServersSslVpnServer>) };
    inline vector<Models::DescribeSslVpnServersResponseBodySslVpnServersSslVpnServer> sslVpnServer() { DARABONBA_PTR_GET(sslVpnServer_, vector<Models::DescribeSslVpnServersResponseBodySslVpnServersSslVpnServer>) };
    inline DescribeSslVpnServersResponseBodySslVpnServers& setSslVpnServer(const vector<Models::DescribeSslVpnServersResponseBodySslVpnServersSslVpnServer> & sslVpnServer) { DARABONBA_PTR_SET_VALUE(sslVpnServer_, sslVpnServer) };
    inline DescribeSslVpnServersResponseBodySslVpnServers& setSslVpnServer(vector<Models::DescribeSslVpnServersResponseBodySslVpnServersSslVpnServer> && sslVpnServer) { DARABONBA_PTR_SET_RVALUE(sslVpnServer_, sslVpnServer) };


  protected:
    std::shared_ptr<vector<Models::DescribeSslVpnServersResponseBodySslVpnServersSslVpnServer>> sslVpnServer_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
