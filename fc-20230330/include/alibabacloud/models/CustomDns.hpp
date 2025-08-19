// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CUSTOMDNS_HPP_
#define ALIBABACLOUD_MODELS_CUSTOMDNS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DNSOption.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace FC20230330
{
namespace Models
{
  class CustomDNS : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CustomDNS& obj) { 
      DARABONBA_PTR_TO_JSON(dnsOptions, dnsOptions_);
      DARABONBA_PTR_TO_JSON(nameServers, nameServers_);
      DARABONBA_PTR_TO_JSON(searches, searches_);
    };
    friend void from_json(const Darabonba::Json& j, CustomDNS& obj) { 
      DARABONBA_PTR_FROM_JSON(dnsOptions, dnsOptions_);
      DARABONBA_PTR_FROM_JSON(nameServers, nameServers_);
      DARABONBA_PTR_FROM_JSON(searches, searches_);
    };
    CustomDNS() = default ;
    CustomDNS(const CustomDNS &) = default ;
    CustomDNS(CustomDNS &&) = default ;
    CustomDNS(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CustomDNS() = default ;
    CustomDNS& operator=(const CustomDNS &) = default ;
    CustomDNS& operator=(CustomDNS &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->dnsOptions_ != nullptr
        && this->nameServers_ != nullptr && this->searches_ != nullptr; };
    // dnsOptions Field Functions 
    bool hasDnsOptions() const { return this->dnsOptions_ != nullptr;};
    void deleteDnsOptions() { this->dnsOptions_ = nullptr;};
    inline const vector<DNSOption> & dnsOptions() const { DARABONBA_PTR_GET_CONST(dnsOptions_, vector<DNSOption>) };
    inline vector<DNSOption> dnsOptions() { DARABONBA_PTR_GET(dnsOptions_, vector<DNSOption>) };
    inline CustomDNS& setDnsOptions(const vector<DNSOption> & dnsOptions) { DARABONBA_PTR_SET_VALUE(dnsOptions_, dnsOptions) };
    inline CustomDNS& setDnsOptions(vector<DNSOption> && dnsOptions) { DARABONBA_PTR_SET_RVALUE(dnsOptions_, dnsOptions) };


    // nameServers Field Functions 
    bool hasNameServers() const { return this->nameServers_ != nullptr;};
    void deleteNameServers() { this->nameServers_ = nullptr;};
    inline const vector<string> & nameServers() const { DARABONBA_PTR_GET_CONST(nameServers_, vector<string>) };
    inline vector<string> nameServers() { DARABONBA_PTR_GET(nameServers_, vector<string>) };
    inline CustomDNS& setNameServers(const vector<string> & nameServers) { DARABONBA_PTR_SET_VALUE(nameServers_, nameServers) };
    inline CustomDNS& setNameServers(vector<string> && nameServers) { DARABONBA_PTR_SET_RVALUE(nameServers_, nameServers) };


    // searches Field Functions 
    bool hasSearches() const { return this->searches_ != nullptr;};
    void deleteSearches() { this->searches_ = nullptr;};
    inline const vector<string> & searches() const { DARABONBA_PTR_GET_CONST(searches_, vector<string>) };
    inline vector<string> searches() { DARABONBA_PTR_GET(searches_, vector<string>) };
    inline CustomDNS& setSearches(const vector<string> & searches) { DARABONBA_PTR_SET_VALUE(searches_, searches) };
    inline CustomDNS& setSearches(vector<string> && searches) { DARABONBA_PTR_SET_RVALUE(searches_, searches) };


  protected:
    std::shared_ptr<vector<DNSOption>> dnsOptions_ = nullptr;
    std::shared_ptr<vector<string>> nameServers_ = nullptr;
    std::shared_ptr<vector<string>> searches_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace FC20230330
#endif
