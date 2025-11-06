// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SCROLLDOMAINLISTRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_SCROLLDOMAINLISTRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ScrollDomainListResponseBodyDataDomain.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Domain20180129
{
namespace Models
{
  class ScrollDomainListResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ScrollDomainListResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(Domain, domain_);
    };
    friend void from_json(const Darabonba::Json& j, ScrollDomainListResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(Domain, domain_);
    };
    ScrollDomainListResponseBodyData() = default ;
    ScrollDomainListResponseBodyData(const ScrollDomainListResponseBodyData &) = default ;
    ScrollDomainListResponseBodyData(ScrollDomainListResponseBodyData &&) = default ;
    ScrollDomainListResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ScrollDomainListResponseBodyData() = default ;
    ScrollDomainListResponseBodyData& operator=(const ScrollDomainListResponseBodyData &) = default ;
    ScrollDomainListResponseBodyData& operator=(ScrollDomainListResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->domain_ == nullptr; };
    // domain Field Functions 
    bool hasDomain() const { return this->domain_ != nullptr;};
    void deleteDomain() { this->domain_ = nullptr;};
    inline const vector<Models::ScrollDomainListResponseBodyDataDomain> & domain() const { DARABONBA_PTR_GET_CONST(domain_, vector<Models::ScrollDomainListResponseBodyDataDomain>) };
    inline vector<Models::ScrollDomainListResponseBodyDataDomain> domain() { DARABONBA_PTR_GET(domain_, vector<Models::ScrollDomainListResponseBodyDataDomain>) };
    inline ScrollDomainListResponseBodyData& setDomain(const vector<Models::ScrollDomainListResponseBodyDataDomain> & domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };
    inline ScrollDomainListResponseBodyData& setDomain(vector<Models::ScrollDomainListResponseBodyDataDomain> && domain) { DARABONBA_PTR_SET_RVALUE(domain_, domain) };


  protected:
    std::shared_ptr<vector<Models::ScrollDomainListResponseBodyDataDomain>> domain_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Domain20180129
#endif
