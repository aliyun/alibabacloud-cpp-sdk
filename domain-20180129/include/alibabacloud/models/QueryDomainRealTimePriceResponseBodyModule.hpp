// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYDOMAINREALTIMEPRICERESPONSEBODYMODULE_HPP_
#define ALIBABACLOUD_MODELS_QUERYDOMAINREALTIMEPRICERESPONSEBODYMODULE_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/QueryDomainRealTimePriceResponseBodyModuleDomainPrices.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Domain20180129
{
namespace Models
{
  class QueryDomainRealTimePriceResponseBodyModule : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryDomainRealTimePriceResponseBodyModule& obj) { 
      DARABONBA_PTR_TO_JSON(DomainPrices, domainPrices_);
    };
    friend void from_json(const Darabonba::Json& j, QueryDomainRealTimePriceResponseBodyModule& obj) { 
      DARABONBA_PTR_FROM_JSON(DomainPrices, domainPrices_);
    };
    QueryDomainRealTimePriceResponseBodyModule() = default ;
    QueryDomainRealTimePriceResponseBodyModule(const QueryDomainRealTimePriceResponseBodyModule &) = default ;
    QueryDomainRealTimePriceResponseBodyModule(QueryDomainRealTimePriceResponseBodyModule &&) = default ;
    QueryDomainRealTimePriceResponseBodyModule(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryDomainRealTimePriceResponseBodyModule() = default ;
    QueryDomainRealTimePriceResponseBodyModule& operator=(const QueryDomainRealTimePriceResponseBodyModule &) = default ;
    QueryDomainRealTimePriceResponseBodyModule& operator=(QueryDomainRealTimePriceResponseBodyModule &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->domainPrices_ == nullptr; };
    // domainPrices Field Functions 
    bool hasDomainPrices() const { return this->domainPrices_ != nullptr;};
    void deleteDomainPrices() { this->domainPrices_ = nullptr;};
    inline const vector<Models::QueryDomainRealTimePriceResponseBodyModuleDomainPrices> & domainPrices() const { DARABONBA_PTR_GET_CONST(domainPrices_, vector<Models::QueryDomainRealTimePriceResponseBodyModuleDomainPrices>) };
    inline vector<Models::QueryDomainRealTimePriceResponseBodyModuleDomainPrices> domainPrices() { DARABONBA_PTR_GET(domainPrices_, vector<Models::QueryDomainRealTimePriceResponseBodyModuleDomainPrices>) };
    inline QueryDomainRealTimePriceResponseBodyModule& setDomainPrices(const vector<Models::QueryDomainRealTimePriceResponseBodyModuleDomainPrices> & domainPrices) { DARABONBA_PTR_SET_VALUE(domainPrices_, domainPrices) };
    inline QueryDomainRealTimePriceResponseBodyModule& setDomainPrices(vector<Models::QueryDomainRealTimePriceResponseBodyModuleDomainPrices> && domainPrices) { DARABONBA_PTR_SET_RVALUE(domainPrices_, domainPrices) };


  protected:
    std::shared_ptr<vector<Models::QueryDomainRealTimePriceResponseBodyModuleDomainPrices>> domainPrices_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Domain20180129
#endif
