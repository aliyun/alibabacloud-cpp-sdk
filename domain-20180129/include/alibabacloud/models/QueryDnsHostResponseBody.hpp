// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYDNSHOSTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYDNSHOSTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/QueryDnsHostResponseBodyDnsHostList.hpp>
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
    virtual bool empty() const override { return this->dnsHostList_ == nullptr
        && return this->requestId_ == nullptr; };
    // dnsHostList Field Functions 
    bool hasDnsHostList() const { return this->dnsHostList_ != nullptr;};
    void deleteDnsHostList() { this->dnsHostList_ = nullptr;};
    inline const vector<QueryDnsHostResponseBodyDnsHostList> & dnsHostList() const { DARABONBA_PTR_GET_CONST(dnsHostList_, vector<QueryDnsHostResponseBodyDnsHostList>) };
    inline vector<QueryDnsHostResponseBodyDnsHostList> dnsHostList() { DARABONBA_PTR_GET(dnsHostList_, vector<QueryDnsHostResponseBodyDnsHostList>) };
    inline QueryDnsHostResponseBody& setDnsHostList(const vector<QueryDnsHostResponseBodyDnsHostList> & dnsHostList) { DARABONBA_PTR_SET_VALUE(dnsHostList_, dnsHostList) };
    inline QueryDnsHostResponseBody& setDnsHostList(vector<QueryDnsHostResponseBodyDnsHostList> && dnsHostList) { DARABONBA_PTR_SET_RVALUE(dnsHostList_, dnsHostList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryDnsHostResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<vector<QueryDnsHostResponseBodyDnsHostList>> dnsHostList_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Domain20180129
#endif
