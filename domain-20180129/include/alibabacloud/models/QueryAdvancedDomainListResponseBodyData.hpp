// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYADVANCEDDOMAINLISTRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_QUERYADVANCEDDOMAINLISTRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/QueryAdvancedDomainListResponseBodyDataDomain.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Domain20180129
{
namespace Models
{
  class QueryAdvancedDomainListResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryAdvancedDomainListResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(Domain, domain_);
    };
    friend void from_json(const Darabonba::Json& j, QueryAdvancedDomainListResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(Domain, domain_);
    };
    QueryAdvancedDomainListResponseBodyData() = default ;
    QueryAdvancedDomainListResponseBodyData(const QueryAdvancedDomainListResponseBodyData &) = default ;
    QueryAdvancedDomainListResponseBodyData(QueryAdvancedDomainListResponseBodyData &&) = default ;
    QueryAdvancedDomainListResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryAdvancedDomainListResponseBodyData() = default ;
    QueryAdvancedDomainListResponseBodyData& operator=(const QueryAdvancedDomainListResponseBodyData &) = default ;
    QueryAdvancedDomainListResponseBodyData& operator=(QueryAdvancedDomainListResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->domain_ == nullptr; };
    // domain Field Functions 
    bool hasDomain() const { return this->domain_ != nullptr;};
    void deleteDomain() { this->domain_ = nullptr;};
    inline const vector<Models::QueryAdvancedDomainListResponseBodyDataDomain> & domain() const { DARABONBA_PTR_GET_CONST(domain_, vector<Models::QueryAdvancedDomainListResponseBodyDataDomain>) };
    inline vector<Models::QueryAdvancedDomainListResponseBodyDataDomain> domain() { DARABONBA_PTR_GET(domain_, vector<Models::QueryAdvancedDomainListResponseBodyDataDomain>) };
    inline QueryAdvancedDomainListResponseBodyData& setDomain(const vector<Models::QueryAdvancedDomainListResponseBodyDataDomain> & domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };
    inline QueryAdvancedDomainListResponseBodyData& setDomain(vector<Models::QueryAdvancedDomainListResponseBodyDataDomain> && domain) { DARABONBA_PTR_SET_RVALUE(domain_, domain) };


  protected:
    std::shared_ptr<vector<Models::QueryAdvancedDomainListResponseBodyDataDomain>> domain_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Domain20180129
#endif
