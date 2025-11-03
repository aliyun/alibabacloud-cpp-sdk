// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESSLVPNCLIENTCERTSRESPONSEBODYSSLVPNCLIENTCERTKEYS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESSLVPNCLIENTCERTSRESPONSEBODYSSLVPNCLIENTCERTKEYS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeSslVpnClientCertsResponseBodySslVpnClientCertKeysSslVpnClientCertKey.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class DescribeSslVpnClientCertsResponseBodySslVpnClientCertKeys : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSslVpnClientCertsResponseBodySslVpnClientCertKeys& obj) { 
      DARABONBA_PTR_TO_JSON(SslVpnClientCertKey, sslVpnClientCertKey_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSslVpnClientCertsResponseBodySslVpnClientCertKeys& obj) { 
      DARABONBA_PTR_FROM_JSON(SslVpnClientCertKey, sslVpnClientCertKey_);
    };
    DescribeSslVpnClientCertsResponseBodySslVpnClientCertKeys() = default ;
    DescribeSslVpnClientCertsResponseBodySslVpnClientCertKeys(const DescribeSslVpnClientCertsResponseBodySslVpnClientCertKeys &) = default ;
    DescribeSslVpnClientCertsResponseBodySslVpnClientCertKeys(DescribeSslVpnClientCertsResponseBodySslVpnClientCertKeys &&) = default ;
    DescribeSslVpnClientCertsResponseBodySslVpnClientCertKeys(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSslVpnClientCertsResponseBodySslVpnClientCertKeys() = default ;
    DescribeSslVpnClientCertsResponseBodySslVpnClientCertKeys& operator=(const DescribeSslVpnClientCertsResponseBodySslVpnClientCertKeys &) = default ;
    DescribeSslVpnClientCertsResponseBodySslVpnClientCertKeys& operator=(DescribeSslVpnClientCertsResponseBodySslVpnClientCertKeys &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->sslVpnClientCertKey_ == nullptr; };
    // sslVpnClientCertKey Field Functions 
    bool hasSslVpnClientCertKey() const { return this->sslVpnClientCertKey_ != nullptr;};
    void deleteSslVpnClientCertKey() { this->sslVpnClientCertKey_ = nullptr;};
    inline const vector<Models::DescribeSslVpnClientCertsResponseBodySslVpnClientCertKeysSslVpnClientCertKey> & sslVpnClientCertKey() const { DARABONBA_PTR_GET_CONST(sslVpnClientCertKey_, vector<Models::DescribeSslVpnClientCertsResponseBodySslVpnClientCertKeysSslVpnClientCertKey>) };
    inline vector<Models::DescribeSslVpnClientCertsResponseBodySslVpnClientCertKeysSslVpnClientCertKey> sslVpnClientCertKey() { DARABONBA_PTR_GET(sslVpnClientCertKey_, vector<Models::DescribeSslVpnClientCertsResponseBodySslVpnClientCertKeysSslVpnClientCertKey>) };
    inline DescribeSslVpnClientCertsResponseBodySslVpnClientCertKeys& setSslVpnClientCertKey(const vector<Models::DescribeSslVpnClientCertsResponseBodySslVpnClientCertKeysSslVpnClientCertKey> & sslVpnClientCertKey) { DARABONBA_PTR_SET_VALUE(sslVpnClientCertKey_, sslVpnClientCertKey) };
    inline DescribeSslVpnClientCertsResponseBodySslVpnClientCertKeys& setSslVpnClientCertKey(vector<Models::DescribeSslVpnClientCertsResponseBodySslVpnClientCertKeysSslVpnClientCertKey> && sslVpnClientCertKey) { DARABONBA_PTR_SET_RVALUE(sslVpnClientCertKey_, sslVpnClientCertKey) };


  protected:
    std::shared_ptr<vector<Models::DescribeSslVpnClientCertsResponseBodySslVpnClientCertKeysSslVpnClientCertKey>> sslVpnClientCertKey_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
