// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYDNSHOSTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYDNSHOSTRESPONSEBODY_HPP_
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
  class QueryDnsHostResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryDnsHostResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DnsHostList, dnsHostList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, QueryDnsHostResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DnsHostList, dnsHostList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    QueryDnsHostResponseBody() = default ;
    QueryDnsHostResponseBody(const QueryDnsHostResponseBody &) = default ;
    QueryDnsHostResponseBody(QueryDnsHostResponseBody &&) = default ;
    QueryDnsHostResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryDnsHostResponseBody() = default ;
    QueryDnsHostResponseBody& operator=(const QueryDnsHostResponseBody &) = default ;
    QueryDnsHostResponseBody& operator=(QueryDnsHostResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class DnsHostList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DnsHostList& obj) { 
        DARABONBA_PTR_TO_JSON(DnsName, dnsName_);
        DARABONBA_PTR_TO_JSON(IpList, ipList_);
      };
      friend void from_json(const Darabonba::Json& j, DnsHostList& obj) { 
        DARABONBA_PTR_FROM_JSON(DnsName, dnsName_);
        DARABONBA_PTR_FROM_JSON(IpList, ipList_);
      };
      DnsHostList() = default ;
      DnsHostList(const DnsHostList &) = default ;
      DnsHostList(DnsHostList &&) = default ;
      DnsHostList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DnsHostList() = default ;
      DnsHostList& operator=(const DnsHostList &) = default ;
      DnsHostList& operator=(DnsHostList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->dnsName_ == nullptr
        && this->ipList_ == nullptr; };
      // dnsName Field Functions 
      bool hasDnsName() const { return this->dnsName_ != nullptr;};
      void deleteDnsName() { this->dnsName_ = nullptr;};
      inline string getDnsName() const { DARABONBA_PTR_GET_DEFAULT(dnsName_, "") };
      inline DnsHostList& setDnsName(string dnsName) { DARABONBA_PTR_SET_VALUE(dnsName_, dnsName) };


      // ipList Field Functions 
      bool hasIpList() const { return this->ipList_ != nullptr;};
      void deleteIpList() { this->ipList_ = nullptr;};
      inline const vector<string> & getIpList() const { DARABONBA_PTR_GET_CONST(ipList_, vector<string>) };
      inline vector<string> getIpList() { DARABONBA_PTR_GET(ipList_, vector<string>) };
      inline DnsHostList& setIpList(const vector<string> & ipList) { DARABONBA_PTR_SET_VALUE(ipList_, ipList) };
      inline DnsHostList& setIpList(vector<string> && ipList) { DARABONBA_PTR_SET_RVALUE(ipList_, ipList) };


    protected:
      shared_ptr<string> dnsName_ {};
      shared_ptr<vector<string>> ipList_ {};
    };

    virtual bool empty() const override { return this->dnsHostList_ == nullptr
        && this->requestId_ == nullptr; };
    // dnsHostList Field Functions 
    bool hasDnsHostList() const { return this->dnsHostList_ != nullptr;};
    void deleteDnsHostList() { this->dnsHostList_ = nullptr;};
    inline const vector<QueryDnsHostResponseBody::DnsHostList> & getDnsHostList() const { DARABONBA_PTR_GET_CONST(dnsHostList_, vector<QueryDnsHostResponseBody::DnsHostList>) };
    inline vector<QueryDnsHostResponseBody::DnsHostList> getDnsHostList() { DARABONBA_PTR_GET(dnsHostList_, vector<QueryDnsHostResponseBody::DnsHostList>) };
    inline QueryDnsHostResponseBody& setDnsHostList(const vector<QueryDnsHostResponseBody::DnsHostList> & dnsHostList) { DARABONBA_PTR_SET_VALUE(dnsHostList_, dnsHostList) };
    inline QueryDnsHostResponseBody& setDnsHostList(vector<QueryDnsHostResponseBody::DnsHostList> && dnsHostList) { DARABONBA_PTR_SET_RVALUE(dnsHostList_, dnsHostList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryDnsHostResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<vector<QueryDnsHostResponseBody::DnsHostList>> dnsHostList_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Domain20180129
#endif
