// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYDOMAINREALTIMEPRICEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYDOMAINREALTIMEPRICEREQUEST_HPP_
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
    class DomainItem : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DomainItem& obj) { 
        DARABONBA_PTR_TO_JSON(Action, action_);
        DARABONBA_PTR_TO_JSON(DomainName, domainName_);
        DARABONBA_PTR_TO_JSON(Period, period_);
        DARABONBA_PTR_TO_JSON(Suffix, suffix_);
      };
      friend void from_json(const Darabonba::Json& j, DomainItem& obj) { 
        DARABONBA_PTR_FROM_JSON(Action, action_);
        DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
        DARABONBA_PTR_FROM_JSON(Period, period_);
        DARABONBA_PTR_FROM_JSON(Suffix, suffix_);
      };
      DomainItem() = default ;
      DomainItem(const DomainItem &) = default ;
      DomainItem(DomainItem &&) = default ;
      DomainItem(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DomainItem() = default ;
      DomainItem& operator=(const DomainItem &) = default ;
      DomainItem& operator=(DomainItem &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->action_ == nullptr
        && this->domainName_ == nullptr && this->period_ == nullptr && this->suffix_ == nullptr; };
      // action Field Functions 
      bool hasAction() const { return this->action_ != nullptr;};
      void deleteAction() { this->action_ = nullptr;};
      inline string getAction() const { DARABONBA_PTR_GET_DEFAULT(action_, "") };
      inline DomainItem& setAction(string action) { DARABONBA_PTR_SET_VALUE(action_, action) };


      // domainName Field Functions 
      bool hasDomainName() const { return this->domainName_ != nullptr;};
      void deleteDomainName() { this->domainName_ = nullptr;};
      inline string getDomainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
      inline DomainItem& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


      // period Field Functions 
      bool hasPeriod() const { return this->period_ != nullptr;};
      void deletePeriod() { this->period_ = nullptr;};
      inline int32_t getPeriod() const { DARABONBA_PTR_GET_DEFAULT(period_, 0) };
      inline DomainItem& setPeriod(int32_t period) { DARABONBA_PTR_SET_VALUE(period_, period) };


      // suffix Field Functions 
      bool hasSuffix() const { return this->suffix_ != nullptr;};
      void deleteSuffix() { this->suffix_ = nullptr;};
      inline string getSuffix() const { DARABONBA_PTR_GET_DEFAULT(suffix_, "") };
      inline DomainItem& setSuffix(string suffix) { DARABONBA_PTR_SET_VALUE(suffix_, suffix) };


    protected:
      // This parameter is required.
      shared_ptr<string> action_ {};
      // This parameter is required.
      shared_ptr<string> domainName_ {};
      shared_ptr<int32_t> period_ {};
      shared_ptr<string> suffix_ {};
    };

    virtual bool empty() const override { return this->currency_ == nullptr
        && this->domainItem_ == nullptr; };
    // currency Field Functions 
    bool hasCurrency() const { return this->currency_ != nullptr;};
    void deleteCurrency() { this->currency_ = nullptr;};
    inline string getCurrency() const { DARABONBA_PTR_GET_DEFAULT(currency_, "") };
    inline QueryDomainRealTimePriceRequest& setCurrency(string currency) { DARABONBA_PTR_SET_VALUE(currency_, currency) };


    // domainItem Field Functions 
    bool hasDomainItem() const { return this->domainItem_ != nullptr;};
    void deleteDomainItem() { this->domainItem_ = nullptr;};
    inline const vector<QueryDomainRealTimePriceRequest::DomainItem> & getDomainItem() const { DARABONBA_PTR_GET_CONST(domainItem_, vector<QueryDomainRealTimePriceRequest::DomainItem>) };
    inline vector<QueryDomainRealTimePriceRequest::DomainItem> getDomainItem() { DARABONBA_PTR_GET(domainItem_, vector<QueryDomainRealTimePriceRequest::DomainItem>) };
    inline QueryDomainRealTimePriceRequest& setDomainItem(const vector<QueryDomainRealTimePriceRequest::DomainItem> & domainItem) { DARABONBA_PTR_SET_VALUE(domainItem_, domainItem) };
    inline QueryDomainRealTimePriceRequest& setDomainItem(vector<QueryDomainRealTimePriceRequest::DomainItem> && domainItem) { DARABONBA_PTR_SET_RVALUE(domainItem_, domainItem) };


  protected:
    // This parameter is required.
    shared_ptr<string> currency_ {};
    // This parameter is required.
    shared_ptr<vector<QueryDomainRealTimePriceRequest::DomainItem>> domainItem_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Domain20180129
#endif
