// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYDOMAINREALTIMEPRICESHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYDOMAINREALTIMEPRICESHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Domain20180129
{
namespace Models
{
  class QueryDomainRealTimePriceShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryDomainRealTimePriceShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Currency, currency_);
      DARABONBA_PTR_TO_JSON(DomainItem, domainItemShrink_);
    };
    friend void from_json(const Darabonba::Json& j, QueryDomainRealTimePriceShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Currency, currency_);
      DARABONBA_PTR_FROM_JSON(DomainItem, domainItemShrink_);
    };
    QueryDomainRealTimePriceShrinkRequest() = default ;
    QueryDomainRealTimePriceShrinkRequest(const QueryDomainRealTimePriceShrinkRequest &) = default ;
    QueryDomainRealTimePriceShrinkRequest(QueryDomainRealTimePriceShrinkRequest &&) = default ;
    QueryDomainRealTimePriceShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryDomainRealTimePriceShrinkRequest() = default ;
    QueryDomainRealTimePriceShrinkRequest& operator=(const QueryDomainRealTimePriceShrinkRequest &) = default ;
    QueryDomainRealTimePriceShrinkRequest& operator=(QueryDomainRealTimePriceShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->currency_ == nullptr
        && return this->domainItemShrink_ == nullptr; };
    // currency Field Functions 
    bool hasCurrency() const { return this->currency_ != nullptr;};
    void deleteCurrency() { this->currency_ = nullptr;};
    inline string currency() const { DARABONBA_PTR_GET_DEFAULT(currency_, "") };
    inline QueryDomainRealTimePriceShrinkRequest& setCurrency(string currency) { DARABONBA_PTR_SET_VALUE(currency_, currency) };


    // domainItemShrink Field Functions 
    bool hasDomainItemShrink() const { return this->domainItemShrink_ != nullptr;};
    void deleteDomainItemShrink() { this->domainItemShrink_ = nullptr;};
    inline string domainItemShrink() const { DARABONBA_PTR_GET_DEFAULT(domainItemShrink_, "") };
    inline QueryDomainRealTimePriceShrinkRequest& setDomainItemShrink(string domainItemShrink) { DARABONBA_PTR_SET_VALUE(domainItemShrink_, domainItemShrink) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> currency_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> domainItemShrink_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Domain20180129
#endif
