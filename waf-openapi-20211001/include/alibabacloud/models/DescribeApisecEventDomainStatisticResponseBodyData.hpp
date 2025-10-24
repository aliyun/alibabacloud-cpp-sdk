// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAPISECEVENTDOMAINSTATISTICRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAPISECEVENTDOMAINSTATISTICRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WafOpenapi20211001
{
namespace Models
{
  class DescribeApisecEventDomainStatisticResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeApisecEventDomainStatisticResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(ApiCount, apiCount_);
      DARABONBA_PTR_TO_JSON(Domain, domain_);
      DARABONBA_PTR_TO_JSON(High, high_);
      DARABONBA_PTR_TO_JSON(Low, low_);
      DARABONBA_PTR_TO_JSON(Medium, medium_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeApisecEventDomainStatisticResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(ApiCount, apiCount_);
      DARABONBA_PTR_FROM_JSON(Domain, domain_);
      DARABONBA_PTR_FROM_JSON(High, high_);
      DARABONBA_PTR_FROM_JSON(Low, low_);
      DARABONBA_PTR_FROM_JSON(Medium, medium_);
    };
    DescribeApisecEventDomainStatisticResponseBodyData() = default ;
    DescribeApisecEventDomainStatisticResponseBodyData(const DescribeApisecEventDomainStatisticResponseBodyData &) = default ;
    DescribeApisecEventDomainStatisticResponseBodyData(DescribeApisecEventDomainStatisticResponseBodyData &&) = default ;
    DescribeApisecEventDomainStatisticResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeApisecEventDomainStatisticResponseBodyData() = default ;
    DescribeApisecEventDomainStatisticResponseBodyData& operator=(const DescribeApisecEventDomainStatisticResponseBodyData &) = default ;
    DescribeApisecEventDomainStatisticResponseBodyData& operator=(DescribeApisecEventDomainStatisticResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->apiCount_ == nullptr
        && return this->domain_ == nullptr && return this->high_ == nullptr && return this->low_ == nullptr && return this->medium_ == nullptr; };
    // apiCount Field Functions 
    bool hasApiCount() const { return this->apiCount_ != nullptr;};
    void deleteApiCount() { this->apiCount_ = nullptr;};
    inline int64_t apiCount() const { DARABONBA_PTR_GET_DEFAULT(apiCount_, 0L) };
    inline DescribeApisecEventDomainStatisticResponseBodyData& setApiCount(int64_t apiCount) { DARABONBA_PTR_SET_VALUE(apiCount_, apiCount) };


    // domain Field Functions 
    bool hasDomain() const { return this->domain_ != nullptr;};
    void deleteDomain() { this->domain_ = nullptr;};
    inline string domain() const { DARABONBA_PTR_GET_DEFAULT(domain_, "") };
    inline DescribeApisecEventDomainStatisticResponseBodyData& setDomain(string domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };


    // high Field Functions 
    bool hasHigh() const { return this->high_ != nullptr;};
    void deleteHigh() { this->high_ = nullptr;};
    inline int64_t high() const { DARABONBA_PTR_GET_DEFAULT(high_, 0L) };
    inline DescribeApisecEventDomainStatisticResponseBodyData& setHigh(int64_t high) { DARABONBA_PTR_SET_VALUE(high_, high) };


    // low Field Functions 
    bool hasLow() const { return this->low_ != nullptr;};
    void deleteLow() { this->low_ = nullptr;};
    inline int64_t low() const { DARABONBA_PTR_GET_DEFAULT(low_, 0L) };
    inline DescribeApisecEventDomainStatisticResponseBodyData& setLow(int64_t low) { DARABONBA_PTR_SET_VALUE(low_, low) };


    // medium Field Functions 
    bool hasMedium() const { return this->medium_ != nullptr;};
    void deleteMedium() { this->medium_ = nullptr;};
    inline int64_t medium() const { DARABONBA_PTR_GET_DEFAULT(medium_, 0L) };
    inline DescribeApisecEventDomainStatisticResponseBodyData& setMedium(int64_t medium) { DARABONBA_PTR_SET_VALUE(medium_, medium) };


  protected:
    // The number of APIs.
    std::shared_ptr<int64_t> apiCount_ = nullptr;
    // The domain name.
    std::shared_ptr<string> domain_ = nullptr;
    // The number of high-risk security events.
    std::shared_ptr<int64_t> high_ = nullptr;
    // The number of low-risk security events.
    std::shared_ptr<int64_t> low_ = nullptr;
    // The number of medium-risk security events.
    std::shared_ptr<int64_t> medium_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
