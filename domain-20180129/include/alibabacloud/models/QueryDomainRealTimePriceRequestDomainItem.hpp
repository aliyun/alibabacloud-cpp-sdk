// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYDOMAINREALTIMEPRICEREQUESTDOMAINITEM_HPP_
#define ALIBABACLOUD_MODELS_QUERYDOMAINREALTIMEPRICEREQUESTDOMAINITEM_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Domain20180129
{
namespace Models
{
  class QueryDomainRealTimePriceRequestDomainItem : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryDomainRealTimePriceRequestDomainItem& obj) { 
      DARABONBA_PTR_TO_JSON(Action, action_);
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(Period, period_);
      DARABONBA_PTR_TO_JSON(Suffix, suffix_);
    };
    friend void from_json(const Darabonba::Json& j, QueryDomainRealTimePriceRequestDomainItem& obj) { 
      DARABONBA_PTR_FROM_JSON(Action, action_);
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(Period, period_);
      DARABONBA_PTR_FROM_JSON(Suffix, suffix_);
    };
    QueryDomainRealTimePriceRequestDomainItem() = default ;
    QueryDomainRealTimePriceRequestDomainItem(const QueryDomainRealTimePriceRequestDomainItem &) = default ;
    QueryDomainRealTimePriceRequestDomainItem(QueryDomainRealTimePriceRequestDomainItem &&) = default ;
    QueryDomainRealTimePriceRequestDomainItem(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryDomainRealTimePriceRequestDomainItem() = default ;
    QueryDomainRealTimePriceRequestDomainItem& operator=(const QueryDomainRealTimePriceRequestDomainItem &) = default ;
    QueryDomainRealTimePriceRequestDomainItem& operator=(QueryDomainRealTimePriceRequestDomainItem &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->action_ == nullptr
        && return this->domainName_ == nullptr && return this->period_ == nullptr && return this->suffix_ == nullptr; };
    // action Field Functions 
    bool hasAction() const { return this->action_ != nullptr;};
    void deleteAction() { this->action_ = nullptr;};
    inline string action() const { DARABONBA_PTR_GET_DEFAULT(action_, "") };
    inline QueryDomainRealTimePriceRequestDomainItem& setAction(string action) { DARABONBA_PTR_SET_VALUE(action_, action) };


    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string domainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline QueryDomainRealTimePriceRequestDomainItem& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // period Field Functions 
    bool hasPeriod() const { return this->period_ != nullptr;};
    void deletePeriod() { this->period_ = nullptr;};
    inline int32_t period() const { DARABONBA_PTR_GET_DEFAULT(period_, 0) };
    inline QueryDomainRealTimePriceRequestDomainItem& setPeriod(int32_t period) { DARABONBA_PTR_SET_VALUE(period_, period) };


    // suffix Field Functions 
    bool hasSuffix() const { return this->suffix_ != nullptr;};
    void deleteSuffix() { this->suffix_ = nullptr;};
    inline string suffix() const { DARABONBA_PTR_GET_DEFAULT(suffix_, "") };
    inline QueryDomainRealTimePriceRequestDomainItem& setSuffix(string suffix) { DARABONBA_PTR_SET_VALUE(suffix_, suffix) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> action_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> domainName_ = nullptr;
    std::shared_ptr<int32_t> period_ = nullptr;
    std::shared_ptr<string> suffix_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Domain20180129
#endif
