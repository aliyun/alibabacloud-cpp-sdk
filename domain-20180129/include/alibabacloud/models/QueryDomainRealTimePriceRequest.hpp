// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYDOMAINREALTIMEPRICEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYDOMAINREALTIMEPRICEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/QueryDomainRealTimePriceRequestDomainItem.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Domain20180129
{
namespace Models
{
  class QueryDomainRealTimePriceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryDomainRealTimePriceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Currency, currency_);
      DARABONBA_PTR_TO_JSON(DomainItem, domainItem_);
    };
    friend void from_json(const Darabonba::Json& j, QueryDomainRealTimePriceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Currency, currency_);
      DARABONBA_PTR_FROM_JSON(DomainItem, domainItem_);
    };
    QueryDomainRealTimePriceRequest() = default ;
    QueryDomainRealTimePriceRequest(const QueryDomainRealTimePriceRequest &) = default ;
    QueryDomainRealTimePriceRequest(QueryDomainRealTimePriceRequest &&) = default ;
    QueryDomainRealTimePriceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryDomainRealTimePriceRequest() = default ;
    QueryDomainRealTimePriceRequest& operator=(const QueryDomainRealTimePriceRequest &) = default ;
    QueryDomainRealTimePriceRequest& operator=(QueryDomainRealTimePriceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->currency_ == nullptr
        && return this->domainItem_ == nullptr; };
    // currency Field Functions 
    bool hasCurrency() const { return this->currency_ != nullptr;};
    void deleteCurrency() { this->currency_ = nullptr;};
    inline string currency() const { DARABONBA_PTR_GET_DEFAULT(currency_, "") };
    inline QueryDomainRealTimePriceRequest& setCurrency(string currency) { DARABONBA_PTR_SET_VALUE(currency_, currency) };


    // domainItem Field Functions 
    bool hasDomainItem() const { return this->domainItem_ != nullptr;};
    void deleteDomainItem() { this->domainItem_ = nullptr;};
    inline const vector<QueryDomainRealTimePriceRequestDomainItem> & domainItem() const { DARABONBA_PTR_GET_CONST(domainItem_, vector<QueryDomainRealTimePriceRequestDomainItem>) };
    inline vector<QueryDomainRealTimePriceRequestDomainItem> domainItem() { DARABONBA_PTR_GET(domainItem_, vector<QueryDomainRealTimePriceRequestDomainItem>) };
    inline QueryDomainRealTimePriceRequest& setDomainItem(const vector<QueryDomainRealTimePriceRequestDomainItem> & domainItem) { DARABONBA_PTR_SET_VALUE(domainItem_, domainItem) };
    inline QueryDomainRealTimePriceRequest& setDomainItem(vector<QueryDomainRealTimePriceRequestDomainItem> && domainItem) { DARABONBA_PTR_SET_RVALUE(domainItem_, domainItem) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> currency_ = nullptr;
    // This parameter is required.
    std::shared_ptr<vector<QueryDomainRealTimePriceRequestDomainItem>> domainItem_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Domain20180129
#endif
