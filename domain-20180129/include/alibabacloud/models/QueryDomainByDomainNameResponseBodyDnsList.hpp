// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYDOMAINBYDOMAINNAMERESPONSEBODYDNSLIST_HPP_
#define ALIBABACLOUD_MODELS_QUERYDOMAINBYDOMAINNAMERESPONSEBODYDNSLIST_HPP_
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
  class QueryDomainByDomainNameResponseBodyDnsList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryDomainByDomainNameResponseBodyDnsList& obj) { 
      DARABONBA_PTR_TO_JSON(Dns, dns_);
    };
    friend void from_json(const Darabonba::Json& j, QueryDomainByDomainNameResponseBodyDnsList& obj) { 
      DARABONBA_PTR_FROM_JSON(Dns, dns_);
    };
    QueryDomainByDomainNameResponseBodyDnsList() = default ;
    QueryDomainByDomainNameResponseBodyDnsList(const QueryDomainByDomainNameResponseBodyDnsList &) = default ;
    QueryDomainByDomainNameResponseBodyDnsList(QueryDomainByDomainNameResponseBodyDnsList &&) = default ;
    QueryDomainByDomainNameResponseBodyDnsList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryDomainByDomainNameResponseBodyDnsList() = default ;
    QueryDomainByDomainNameResponseBodyDnsList& operator=(const QueryDomainByDomainNameResponseBodyDnsList &) = default ;
    QueryDomainByDomainNameResponseBodyDnsList& operator=(QueryDomainByDomainNameResponseBodyDnsList &&) = default ;
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
    inline QueryDomainByDomainNameResponseBodyDnsList& setDns(const vector<string> & dns) { DARABONBA_PTR_SET_VALUE(dns_, dns) };
    inline QueryDomainByDomainNameResponseBodyDnsList& setDns(vector<string> && dns) { DARABONBA_PTR_SET_RVALUE(dns_, dns) };


  protected:
    std::shared_ptr<vector<string>> dns_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Domain20180129
#endif
