// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PAL7CONFIGDNSCONFIG_HPP_
#define ALIBABACLOUD_MODELS_PAL7CONFIGDNSCONFIG_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Csas20230120
{
namespace Models
{
  class PAL7ConfigDnsConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PAL7ConfigDnsConfig& obj) { 
      DARABONBA_PTR_TO_JSON(DnsServers, dnsServers_);
    };
    friend void from_json(const Darabonba::Json& j, PAL7ConfigDnsConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(DnsServers, dnsServers_);
    };
    PAL7ConfigDnsConfig() = default ;
    PAL7ConfigDnsConfig(const PAL7ConfigDnsConfig &) = default ;
    PAL7ConfigDnsConfig(PAL7ConfigDnsConfig &&) = default ;
    PAL7ConfigDnsConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PAL7ConfigDnsConfig() = default ;
    PAL7ConfigDnsConfig& operator=(const PAL7ConfigDnsConfig &) = default ;
    PAL7ConfigDnsConfig& operator=(PAL7ConfigDnsConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dnsServers_ == nullptr; };
    // dnsServers Field Functions 
    bool hasDnsServers() const { return this->dnsServers_ != nullptr;};
    void deleteDnsServers() { this->dnsServers_ = nullptr;};
    inline const vector<string> & dnsServers() const { DARABONBA_PTR_GET_CONST(dnsServers_, vector<string>) };
    inline vector<string> dnsServers() { DARABONBA_PTR_GET(dnsServers_, vector<string>) };
    inline PAL7ConfigDnsConfig& setDnsServers(const vector<string> & dnsServers) { DARABONBA_PTR_SET_VALUE(dnsServers_, dnsServers) };
    inline PAL7ConfigDnsConfig& setDnsServers(vector<string> && dnsServers) { DARABONBA_PTR_SET_RVALUE(dnsServers_, dnsServers) };


  protected:
    std::shared_ptr<vector<string>> dnsServers_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
