// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYDOMAINLISTRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_QUERYDOMAINLISTRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/QueryDomainListResponseBodyDataDomain.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Domain20180129
{
namespace Models
{
  class QueryDomainListResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryDomainListResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(Domain, domain_);
    };
    friend void from_json(const Darabonba::Json& j, QueryDomainListResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(Domain, domain_);
    };
    QueryDomainListResponseBodyData() = default ;
    QueryDomainListResponseBodyData(const QueryDomainListResponseBodyData &) = default ;
    QueryDomainListResponseBodyData(QueryDomainListResponseBodyData &&) = default ;
    QueryDomainListResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryDomainListResponseBodyData() = default ;
    QueryDomainListResponseBodyData& operator=(const QueryDomainListResponseBodyData &) = default ;
    QueryDomainListResponseBodyData& operator=(QueryDomainListResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->domain_ == nullptr; };
    // domain Field Functions 
    bool hasDomain() const { return this->domain_ != nullptr;};
    void deleteDomain() { this->domain_ = nullptr;};
    inline const vector<Models::QueryDomainListResponseBodyDataDomain> & domain() const { DARABONBA_PTR_GET_CONST(domain_, vector<Models::QueryDomainListResponseBodyDataDomain>) };
    inline vector<Models::QueryDomainListResponseBodyDataDomain> domain() { DARABONBA_PTR_GET(domain_, vector<Models::QueryDomainListResponseBodyDataDomain>) };
    inline QueryDomainListResponseBodyData& setDomain(const vector<Models::QueryDomainListResponseBodyDataDomain> & domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };
    inline QueryDomainListResponseBodyData& setDomain(vector<Models::QueryDomainListResponseBodyDataDomain> && domain) { DARABONBA_PTR_SET_RVALUE(domain_, domain) };


  protected:
    std::shared_ptr<vector<Models::QueryDomainListResponseBodyDataDomain>> domain_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Domain20180129
#endif
