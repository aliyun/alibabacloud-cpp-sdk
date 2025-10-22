// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYEXCHANGERATEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYEXCHANGERATEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Domain20180208
{
namespace Models
{
  class QueryExchangeRateRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryExchangeRateRequest& obj) { 
      DARABONBA_PTR_TO_JSON(FromCurrency, fromCurrency_);
      DARABONBA_PTR_TO_JSON(ToCurrency, toCurrency_);
    };
    friend void from_json(const Darabonba::Json& j, QueryExchangeRateRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(FromCurrency, fromCurrency_);
      DARABONBA_PTR_FROM_JSON(ToCurrency, toCurrency_);
    };
    QueryExchangeRateRequest() = default ;
    QueryExchangeRateRequest(const QueryExchangeRateRequest &) = default ;
    QueryExchangeRateRequest(QueryExchangeRateRequest &&) = default ;
    QueryExchangeRateRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryExchangeRateRequest() = default ;
    QueryExchangeRateRequest& operator=(const QueryExchangeRateRequest &) = default ;
    QueryExchangeRateRequest& operator=(QueryExchangeRateRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->fromCurrency_ == nullptr
        && return this->toCurrency_ == nullptr; };
    // fromCurrency Field Functions 
    bool hasFromCurrency() const { return this->fromCurrency_ != nullptr;};
    void deleteFromCurrency() { this->fromCurrency_ = nullptr;};
    inline string fromCurrency() const { DARABONBA_PTR_GET_DEFAULT(fromCurrency_, "") };
    inline QueryExchangeRateRequest& setFromCurrency(string fromCurrency) { DARABONBA_PTR_SET_VALUE(fromCurrency_, fromCurrency) };


    // toCurrency Field Functions 
    bool hasToCurrency() const { return this->toCurrency_ != nullptr;};
    void deleteToCurrency() { this->toCurrency_ = nullptr;};
    inline string toCurrency() const { DARABONBA_PTR_GET_DEFAULT(toCurrency_, "") };
    inline QueryExchangeRateRequest& setToCurrency(string toCurrency) { DARABONBA_PTR_SET_VALUE(toCurrency_, toCurrency) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> fromCurrency_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> toCurrency_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Domain20180208
#endif
