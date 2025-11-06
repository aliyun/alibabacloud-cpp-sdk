// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYDNSHOSTRESPONSEBODYDNSHOSTLIST_HPP_
#define ALIBABACLOUD_MODELS_QUERYDNSHOSTRESPONSEBODYDNSHOSTLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Domain20180129
{
namespace Models
{
  class QueryDnsHostResponseBodyDnsHostList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryDnsHostResponseBodyDnsHostList& obj) { 
      DARABONBA_PTR_TO_JSON(DnsName, dnsName_);
      DARABONBA_PTR_TO_JSON(IpList, ipList_);
    };
    friend void from_json(const Darabonba::Json& j, QueryDnsHostResponseBodyDnsHostList& obj) { 
      DARABONBA_PTR_FROM_JSON(DnsName, dnsName_);
      DARABONBA_PTR_FROM_JSON(IpList, ipList_);
    };
    QueryDnsHostResponseBodyDnsHostList() = default ;
    QueryDnsHostResponseBodyDnsHostList(const QueryDnsHostResponseBodyDnsHostList &) = default ;
    QueryDnsHostResponseBodyDnsHostList(QueryDnsHostResponseBodyDnsHostList &&) = default ;
    QueryDnsHostResponseBodyDnsHostList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryDnsHostResponseBodyDnsHostList() = default ;
    QueryDnsHostResponseBodyDnsHostList& operator=(const QueryDnsHostResponseBodyDnsHostList &) = default ;
    QueryDnsHostResponseBodyDnsHostList& operator=(QueryDnsHostResponseBodyDnsHostList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dnsName_ == nullptr
        && return this->ipList_ == nullptr; };
    // dnsName Field Functions 
    bool hasDnsName() const { return this->dnsName_ != nullptr;};
    void deleteDnsName() { this->dnsName_ = nullptr;};
    inline string dnsName() const { DARABONBA_PTR_GET_DEFAULT(dnsName_, "") };
    inline QueryDnsHostResponseBodyDnsHostList& setDnsName(string dnsName) { DARABONBA_PTR_SET_VALUE(dnsName_, dnsName) };


    // ipList Field Functions 
    bool hasIpList() const { return this->ipList_ != nullptr;};
    void deleteIpList() { this->ipList_ = nullptr;};
    inline const vector<string> & ipList() const { DARABONBA_PTR_GET_CONST(ipList_, vector<string>) };
    inline vector<string> ipList() { DARABONBA_PTR_GET(ipList_, vector<string>) };
    inline QueryDnsHostResponseBodyDnsHostList& setIpList(const vector<string> & ipList) { DARABONBA_PTR_SET_VALUE(ipList_, ipList) };
    inline QueryDnsHostResponseBodyDnsHostList& setIpList(vector<string> && ipList) { DARABONBA_PTR_SET_RVALUE(ipList_, ipList) };


  protected:
    std::shared_ptr<string> dnsName_ = nullptr;
    std::shared_ptr<vector<string>> ipList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Domain20180129
#endif
