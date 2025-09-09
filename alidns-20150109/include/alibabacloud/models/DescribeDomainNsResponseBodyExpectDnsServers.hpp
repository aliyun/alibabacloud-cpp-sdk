// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDOMAINNSRESPONSEBODYEXPECTDNSSERVERS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDOMAINNSRESPONSEBODYEXPECTDNSSERVERS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class DescribeDomainNsResponseBodyExpectDnsServers : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDomainNsResponseBodyExpectDnsServers& obj) { 
      DARABONBA_PTR_TO_JSON(ExpectDnsServer, expectDnsServer_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDomainNsResponseBodyExpectDnsServers& obj) { 
      DARABONBA_PTR_FROM_JSON(ExpectDnsServer, expectDnsServer_);
    };
    DescribeDomainNsResponseBodyExpectDnsServers() = default ;
    DescribeDomainNsResponseBodyExpectDnsServers(const DescribeDomainNsResponseBodyExpectDnsServers &) = default ;
    DescribeDomainNsResponseBodyExpectDnsServers(DescribeDomainNsResponseBodyExpectDnsServers &&) = default ;
    DescribeDomainNsResponseBodyExpectDnsServers(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDomainNsResponseBodyExpectDnsServers() = default ;
    DescribeDomainNsResponseBodyExpectDnsServers& operator=(const DescribeDomainNsResponseBodyExpectDnsServers &) = default ;
    DescribeDomainNsResponseBodyExpectDnsServers& operator=(DescribeDomainNsResponseBodyExpectDnsServers &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->expectDnsServer_ != nullptr; };
    // expectDnsServer Field Functions 
    bool hasExpectDnsServer() const { return this->expectDnsServer_ != nullptr;};
    void deleteExpectDnsServer() { this->expectDnsServer_ = nullptr;};
    inline const vector<string> & expectDnsServer() const { DARABONBA_PTR_GET_CONST(expectDnsServer_, vector<string>) };
    inline vector<string> expectDnsServer() { DARABONBA_PTR_GET(expectDnsServer_, vector<string>) };
    inline DescribeDomainNsResponseBodyExpectDnsServers& setExpectDnsServer(const vector<string> & expectDnsServer) { DARABONBA_PTR_SET_VALUE(expectDnsServer_, expectDnsServer) };
    inline DescribeDomainNsResponseBodyExpectDnsServers& setExpectDnsServer(vector<string> && expectDnsServer) { DARABONBA_PTR_SET_RVALUE(expectDnsServer_, expectDnsServer) };


  protected:
    std::shared_ptr<vector<string>> expectDnsServer_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
