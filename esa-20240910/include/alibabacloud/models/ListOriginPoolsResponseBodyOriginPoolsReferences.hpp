// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTORIGINPOOLSRESPONSEBODYORIGINPOOLSREFERENCES_HPP_
#define ALIBABACLOUD_MODELS_LISTORIGINPOOLSRESPONSEBODYORIGINPOOLSREFERENCES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListOriginPoolsResponseBodyOriginPoolsReferencesDnsRecords.hpp>
#include <alibabacloud/models/ListOriginPoolsResponseBodyOriginPoolsReferencesIPARecords.hpp>
#include <alibabacloud/models/ListOriginPoolsResponseBodyOriginPoolsReferencesLoadBalancers.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class ListOriginPoolsResponseBodyOriginPoolsReferences : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListOriginPoolsResponseBodyOriginPoolsReferences& obj) { 
      DARABONBA_PTR_TO_JSON(DnsRecords, dnsRecords_);
      DARABONBA_PTR_TO_JSON(IPARecords, IPARecords_);
      DARABONBA_PTR_TO_JSON(LoadBalancers, loadBalancers_);
    };
    friend void from_json(const Darabonba::Json& j, ListOriginPoolsResponseBodyOriginPoolsReferences& obj) { 
      DARABONBA_PTR_FROM_JSON(DnsRecords, dnsRecords_);
      DARABONBA_PTR_FROM_JSON(IPARecords, IPARecords_);
      DARABONBA_PTR_FROM_JSON(LoadBalancers, loadBalancers_);
    };
    ListOriginPoolsResponseBodyOriginPoolsReferences() = default ;
    ListOriginPoolsResponseBodyOriginPoolsReferences(const ListOriginPoolsResponseBodyOriginPoolsReferences &) = default ;
    ListOriginPoolsResponseBodyOriginPoolsReferences(ListOriginPoolsResponseBodyOriginPoolsReferences &&) = default ;
    ListOriginPoolsResponseBodyOriginPoolsReferences(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListOriginPoolsResponseBodyOriginPoolsReferences() = default ;
    ListOriginPoolsResponseBodyOriginPoolsReferences& operator=(const ListOriginPoolsResponseBodyOriginPoolsReferences &) = default ;
    ListOriginPoolsResponseBodyOriginPoolsReferences& operator=(ListOriginPoolsResponseBodyOriginPoolsReferences &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dnsRecords_ == nullptr
        && return this->IPARecords_ == nullptr && return this->loadBalancers_ == nullptr; };
    // dnsRecords Field Functions 
    bool hasDnsRecords() const { return this->dnsRecords_ != nullptr;};
    void deleteDnsRecords() { this->dnsRecords_ = nullptr;};
    inline const vector<Models::ListOriginPoolsResponseBodyOriginPoolsReferencesDnsRecords> & dnsRecords() const { DARABONBA_PTR_GET_CONST(dnsRecords_, vector<Models::ListOriginPoolsResponseBodyOriginPoolsReferencesDnsRecords>) };
    inline vector<Models::ListOriginPoolsResponseBodyOriginPoolsReferencesDnsRecords> dnsRecords() { DARABONBA_PTR_GET(dnsRecords_, vector<Models::ListOriginPoolsResponseBodyOriginPoolsReferencesDnsRecords>) };
    inline ListOriginPoolsResponseBodyOriginPoolsReferences& setDnsRecords(const vector<Models::ListOriginPoolsResponseBodyOriginPoolsReferencesDnsRecords> & dnsRecords) { DARABONBA_PTR_SET_VALUE(dnsRecords_, dnsRecords) };
    inline ListOriginPoolsResponseBodyOriginPoolsReferences& setDnsRecords(vector<Models::ListOriginPoolsResponseBodyOriginPoolsReferencesDnsRecords> && dnsRecords) { DARABONBA_PTR_SET_RVALUE(dnsRecords_, dnsRecords) };


    // IPARecords Field Functions 
    bool hasIPARecords() const { return this->IPARecords_ != nullptr;};
    void deleteIPARecords() { this->IPARecords_ = nullptr;};
    inline const vector<Models::ListOriginPoolsResponseBodyOriginPoolsReferencesIPARecords> & IPARecords() const { DARABONBA_PTR_GET_CONST(IPARecords_, vector<Models::ListOriginPoolsResponseBodyOriginPoolsReferencesIPARecords>) };
    inline vector<Models::ListOriginPoolsResponseBodyOriginPoolsReferencesIPARecords> IPARecords() { DARABONBA_PTR_GET(IPARecords_, vector<Models::ListOriginPoolsResponseBodyOriginPoolsReferencesIPARecords>) };
    inline ListOriginPoolsResponseBodyOriginPoolsReferences& setIPARecords(const vector<Models::ListOriginPoolsResponseBodyOriginPoolsReferencesIPARecords> & IPARecords) { DARABONBA_PTR_SET_VALUE(IPARecords_, IPARecords) };
    inline ListOriginPoolsResponseBodyOriginPoolsReferences& setIPARecords(vector<Models::ListOriginPoolsResponseBodyOriginPoolsReferencesIPARecords> && IPARecords) { DARABONBA_PTR_SET_RVALUE(IPARecords_, IPARecords) };


    // loadBalancers Field Functions 
    bool hasLoadBalancers() const { return this->loadBalancers_ != nullptr;};
    void deleteLoadBalancers() { this->loadBalancers_ = nullptr;};
    inline const vector<Models::ListOriginPoolsResponseBodyOriginPoolsReferencesLoadBalancers> & loadBalancers() const { DARABONBA_PTR_GET_CONST(loadBalancers_, vector<Models::ListOriginPoolsResponseBodyOriginPoolsReferencesLoadBalancers>) };
    inline vector<Models::ListOriginPoolsResponseBodyOriginPoolsReferencesLoadBalancers> loadBalancers() { DARABONBA_PTR_GET(loadBalancers_, vector<Models::ListOriginPoolsResponseBodyOriginPoolsReferencesLoadBalancers>) };
    inline ListOriginPoolsResponseBodyOriginPoolsReferences& setLoadBalancers(const vector<Models::ListOriginPoolsResponseBodyOriginPoolsReferencesLoadBalancers> & loadBalancers) { DARABONBA_PTR_SET_VALUE(loadBalancers_, loadBalancers) };
    inline ListOriginPoolsResponseBodyOriginPoolsReferences& setLoadBalancers(vector<Models::ListOriginPoolsResponseBodyOriginPoolsReferencesLoadBalancers> && loadBalancers) { DARABONBA_PTR_SET_RVALUE(loadBalancers_, loadBalancers) };


  protected:
    // 使用此源地址池为源站的七层记录列表。
    std::shared_ptr<vector<Models::ListOriginPoolsResponseBodyOriginPoolsReferencesDnsRecords>> dnsRecords_ = nullptr;
    // List of layer 4 records that use this origin pool as the origin.
    std::shared_ptr<vector<Models::ListOriginPoolsResponseBodyOriginPoolsReferencesIPARecords>> IPARecords_ = nullptr;
    // List of load balancers using this origin pool.
    std::shared_ptr<vector<Models::ListOriginPoolsResponseBodyOriginPoolsReferencesLoadBalancers>> loadBalancers_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
