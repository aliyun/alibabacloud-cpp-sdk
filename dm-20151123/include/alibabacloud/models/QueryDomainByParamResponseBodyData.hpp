// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYDOMAINBYPARAMRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_QUERYDOMAINBYPARAMRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/QueryDomainByParamResponseBodyDataDomain.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dm20151123
{
namespace Models
{
  class QueryDomainByParamResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryDomainByParamResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(domain, domain_);
    };
    friend void from_json(const Darabonba::Json& j, QueryDomainByParamResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(domain, domain_);
    };
    QueryDomainByParamResponseBodyData() = default ;
    QueryDomainByParamResponseBodyData(const QueryDomainByParamResponseBodyData &) = default ;
    QueryDomainByParamResponseBodyData(QueryDomainByParamResponseBodyData &&) = default ;
    QueryDomainByParamResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryDomainByParamResponseBodyData() = default ;
    QueryDomainByParamResponseBodyData& operator=(const QueryDomainByParamResponseBodyData &) = default ;
    QueryDomainByParamResponseBodyData& operator=(QueryDomainByParamResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->domain_ == nullptr; };
    // domain Field Functions 
    bool hasDomain() const { return this->domain_ != nullptr;};
    void deleteDomain() { this->domain_ = nullptr;};
    inline const vector<Models::QueryDomainByParamResponseBodyDataDomain> & domain() const { DARABONBA_PTR_GET_CONST(domain_, vector<Models::QueryDomainByParamResponseBodyDataDomain>) };
    inline vector<Models::QueryDomainByParamResponseBodyDataDomain> domain() { DARABONBA_PTR_GET(domain_, vector<Models::QueryDomainByParamResponseBodyDataDomain>) };
    inline QueryDomainByParamResponseBodyData& setDomain(const vector<Models::QueryDomainByParamResponseBodyDataDomain> & domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };
    inline QueryDomainByParamResponseBodyData& setDomain(vector<Models::QueryDomainByParamResponseBodyDataDomain> && domain) { DARABONBA_PTR_SET_RVALUE(domain_, domain) };


  protected:
    std::shared_ptr<vector<Models::QueryDomainByParamResponseBodyDataDomain>> domain_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dm20151123
#endif
