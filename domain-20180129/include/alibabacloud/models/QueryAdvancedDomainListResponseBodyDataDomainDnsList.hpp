// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYADVANCEDDOMAINLISTRESPONSEBODYDATADOMAINDNSLIST_HPP_
#define ALIBABACLOUD_MODELS_QUERYADVANCEDDOMAINLISTRESPONSEBODYDATADOMAINDNSLIST_HPP_
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
  class QueryAdvancedDomainListResponseBodyDataDomainDnsList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryAdvancedDomainListResponseBodyDataDomainDnsList& obj) { 
      DARABONBA_PTR_TO_JSON(Dns, dns_);
    };
    friend void from_json(const Darabonba::Json& j, QueryAdvancedDomainListResponseBodyDataDomainDnsList& obj) { 
      DARABONBA_PTR_FROM_JSON(Dns, dns_);
    };
    QueryAdvancedDomainListResponseBodyDataDomainDnsList() = default ;
    QueryAdvancedDomainListResponseBodyDataDomainDnsList(const QueryAdvancedDomainListResponseBodyDataDomainDnsList &) = default ;
    QueryAdvancedDomainListResponseBodyDataDomainDnsList(QueryAdvancedDomainListResponseBodyDataDomainDnsList &&) = default ;
    QueryAdvancedDomainListResponseBodyDataDomainDnsList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryAdvancedDomainListResponseBodyDataDomainDnsList() = default ;
    QueryAdvancedDomainListResponseBodyDataDomainDnsList& operator=(const QueryAdvancedDomainListResponseBodyDataDomainDnsList &) = default ;
    QueryAdvancedDomainListResponseBodyDataDomainDnsList& operator=(QueryAdvancedDomainListResponseBodyDataDomainDnsList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dns_ == nullptr; };
    // dns Field Functions 
    bool hasDns() const { return this->dns_ != nullptr;};
    void deleteDns() { this->dns_ = nullptr;};
    inline const vector<string> & dns() const { DARABONBA_PTR_GET_CONST(dns_, vector<string>) };
    inline vector<string> dns() { DARABONBA_PTR_GET(dns_, vector<string>) };
    inline QueryAdvancedDomainListResponseBodyDataDomainDnsList& setDns(const vector<string> & dns) { DARABONBA_PTR_SET_VALUE(dns_, dns) };
    inline QueryAdvancedDomainListResponseBodyDataDomainDnsList& setDns(vector<string> && dns) { DARABONBA_PTR_SET_RVALUE(dns_, dns) };


  protected:
    std::shared_ptr<vector<string>> dns_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Domain20180129
#endif
