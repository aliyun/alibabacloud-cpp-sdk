// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETORIGINPOOLRESPONSEBODYREFERENCES_HPP_
#define ALIBABACLOUD_MODELS_GETORIGINPOOLRESPONSEBODYREFERENCES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetOriginPoolResponseBodyReferencesDnsRecords.hpp>
#include <alibabacloud/models/GetOriginPoolResponseBodyReferencesIPARecords.hpp>
#include <alibabacloud/models/GetOriginPoolResponseBodyReferencesLoadBalancers.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class GetOriginPoolResponseBodyReferences : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetOriginPoolResponseBodyReferences& obj) { 
      DARABONBA_PTR_TO_JSON(DnsRecords, dnsRecords_);
      DARABONBA_PTR_TO_JSON(IPARecords, IPARecords_);
      DARABONBA_PTR_TO_JSON(LoadBalancers, loadBalancers_);
    };
    friend void from_json(const Darabonba::Json& j, GetOriginPoolResponseBodyReferences& obj) { 
      DARABONBA_PTR_FROM_JSON(DnsRecords, dnsRecords_);
      DARABONBA_PTR_FROM_JSON(IPARecords, IPARecords_);
      DARABONBA_PTR_FROM_JSON(LoadBalancers, loadBalancers_);
    };
    GetOriginPoolResponseBodyReferences() = default ;
    GetOriginPoolResponseBodyReferences(const GetOriginPoolResponseBodyReferences &) = default ;
    GetOriginPoolResponseBodyReferences(GetOriginPoolResponseBodyReferences &&) = default ;
    GetOriginPoolResponseBodyReferences(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetOriginPoolResponseBodyReferences() = default ;
    GetOriginPoolResponseBodyReferences& operator=(const GetOriginPoolResponseBodyReferences &) = default ;
    GetOriginPoolResponseBodyReferences& operator=(GetOriginPoolResponseBodyReferences &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->dnsRecords_ != nullptr
        && this->IPARecords_ != nullptr && this->loadBalancers_ != nullptr; };
    // dnsRecords Field Functions 
    bool hasDnsRecords() const { return this->dnsRecords_ != nullptr;};
    void deleteDnsRecords() { this->dnsRecords_ = nullptr;};
    inline const vector<Models::GetOriginPoolResponseBodyReferencesDnsRecords> & dnsRecords() const { DARABONBA_PTR_GET_CONST(dnsRecords_, vector<Models::GetOriginPoolResponseBodyReferencesDnsRecords>) };
    inline vector<Models::GetOriginPoolResponseBodyReferencesDnsRecords> dnsRecords() { DARABONBA_PTR_GET(dnsRecords_, vector<Models::GetOriginPoolResponseBodyReferencesDnsRecords>) };
    inline GetOriginPoolResponseBodyReferences& setDnsRecords(const vector<Models::GetOriginPoolResponseBodyReferencesDnsRecords> & dnsRecords) { DARABONBA_PTR_SET_VALUE(dnsRecords_, dnsRecords) };
    inline GetOriginPoolResponseBodyReferences& setDnsRecords(vector<Models::GetOriginPoolResponseBodyReferencesDnsRecords> && dnsRecords) { DARABONBA_PTR_SET_RVALUE(dnsRecords_, dnsRecords) };


    // IPARecords Field Functions 
    bool hasIPARecords() const { return this->IPARecords_ != nullptr;};
    void deleteIPARecords() { this->IPARecords_ = nullptr;};
    inline const vector<Models::GetOriginPoolResponseBodyReferencesIPARecords> & IPARecords() const { DARABONBA_PTR_GET_CONST(IPARecords_, vector<Models::GetOriginPoolResponseBodyReferencesIPARecords>) };
    inline vector<Models::GetOriginPoolResponseBodyReferencesIPARecords> IPARecords() { DARABONBA_PTR_GET(IPARecords_, vector<Models::GetOriginPoolResponseBodyReferencesIPARecords>) };
    inline GetOriginPoolResponseBodyReferences& setIPARecords(const vector<Models::GetOriginPoolResponseBodyReferencesIPARecords> & IPARecords) { DARABONBA_PTR_SET_VALUE(IPARecords_, IPARecords) };
    inline GetOriginPoolResponseBodyReferences& setIPARecords(vector<Models::GetOriginPoolResponseBodyReferencesIPARecords> && IPARecords) { DARABONBA_PTR_SET_RVALUE(IPARecords_, IPARecords) };


    // loadBalancers Field Functions 
    bool hasLoadBalancers() const { return this->loadBalancers_ != nullptr;};
    void deleteLoadBalancers() { this->loadBalancers_ = nullptr;};
    inline const vector<Models::GetOriginPoolResponseBodyReferencesLoadBalancers> & loadBalancers() const { DARABONBA_PTR_GET_CONST(loadBalancers_, vector<Models::GetOriginPoolResponseBodyReferencesLoadBalancers>) };
    inline vector<Models::GetOriginPoolResponseBodyReferencesLoadBalancers> loadBalancers() { DARABONBA_PTR_GET(loadBalancers_, vector<Models::GetOriginPoolResponseBodyReferencesLoadBalancers>) };
    inline GetOriginPoolResponseBodyReferences& setLoadBalancers(const vector<Models::GetOriginPoolResponseBodyReferencesLoadBalancers> & loadBalancers) { DARABONBA_PTR_SET_VALUE(loadBalancers_, loadBalancers) };
    inline GetOriginPoolResponseBodyReferences& setLoadBalancers(vector<Models::GetOriginPoolResponseBodyReferencesLoadBalancers> && loadBalancers) { DARABONBA_PTR_SET_RVALUE(loadBalancers_, loadBalancers) };


  protected:
    // List of layer 7 records using this origin pool as the origin.
    std::shared_ptr<vector<Models::GetOriginPoolResponseBodyReferencesDnsRecords>> dnsRecords_ = nullptr;
    // List of layer 4 records using this origin pool as the origin.
    std::shared_ptr<vector<Models::GetOriginPoolResponseBodyReferencesIPARecords>> IPARecords_ = nullptr;
    // List of load balancers using this origin pool.
    std::shared_ptr<vector<Models::GetOriginPoolResponseBodyReferencesLoadBalancers>> loadBalancers_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
