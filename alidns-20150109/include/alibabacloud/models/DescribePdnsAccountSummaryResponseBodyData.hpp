// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPDNSACCOUNTSUMMARYRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPDNSACCOUNTSUMMARYRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class DescribePdnsAccountSummaryResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePdnsAccountSummaryResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(DomainCount, domainCount_);
      DARABONBA_PTR_TO_JSON(HttpCount, httpCount_);
      DARABONBA_PTR_TO_JSON(HttpsCount, httpsCount_);
      DARABONBA_PTR_TO_JSON(SubDomainCount, subDomainCount_);
      DARABONBA_PTR_TO_JSON(ThreatCount, threatCount_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePdnsAccountSummaryResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(DomainCount, domainCount_);
      DARABONBA_PTR_FROM_JSON(HttpCount, httpCount_);
      DARABONBA_PTR_FROM_JSON(HttpsCount, httpsCount_);
      DARABONBA_PTR_FROM_JSON(SubDomainCount, subDomainCount_);
      DARABONBA_PTR_FROM_JSON(ThreatCount, threatCount_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
    };
    DescribePdnsAccountSummaryResponseBodyData() = default ;
    DescribePdnsAccountSummaryResponseBodyData(const DescribePdnsAccountSummaryResponseBodyData &) = default ;
    DescribePdnsAccountSummaryResponseBodyData(DescribePdnsAccountSummaryResponseBodyData &&) = default ;
    DescribePdnsAccountSummaryResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePdnsAccountSummaryResponseBodyData() = default ;
    DescribePdnsAccountSummaryResponseBodyData& operator=(const DescribePdnsAccountSummaryResponseBodyData &) = default ;
    DescribePdnsAccountSummaryResponseBodyData& operator=(DescribePdnsAccountSummaryResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->domainCount_ == nullptr
        && return this->httpCount_ == nullptr && return this->httpsCount_ == nullptr && return this->subDomainCount_ == nullptr && return this->threatCount_ == nullptr && return this->totalCount_ == nullptr
        && return this->userId_ == nullptr; };
    // domainCount Field Functions 
    bool hasDomainCount() const { return this->domainCount_ != nullptr;};
    void deleteDomainCount() { this->domainCount_ = nullptr;};
    inline int64_t domainCount() const { DARABONBA_PTR_GET_DEFAULT(domainCount_, 0L) };
    inline DescribePdnsAccountSummaryResponseBodyData& setDomainCount(int64_t domainCount) { DARABONBA_PTR_SET_VALUE(domainCount_, domainCount) };


    // httpCount Field Functions 
    bool hasHttpCount() const { return this->httpCount_ != nullptr;};
    void deleteHttpCount() { this->httpCount_ = nullptr;};
    inline int64_t httpCount() const { DARABONBA_PTR_GET_DEFAULT(httpCount_, 0L) };
    inline DescribePdnsAccountSummaryResponseBodyData& setHttpCount(int64_t httpCount) { DARABONBA_PTR_SET_VALUE(httpCount_, httpCount) };


    // httpsCount Field Functions 
    bool hasHttpsCount() const { return this->httpsCount_ != nullptr;};
    void deleteHttpsCount() { this->httpsCount_ = nullptr;};
    inline int64_t httpsCount() const { DARABONBA_PTR_GET_DEFAULT(httpsCount_, 0L) };
    inline DescribePdnsAccountSummaryResponseBodyData& setHttpsCount(int64_t httpsCount) { DARABONBA_PTR_SET_VALUE(httpsCount_, httpsCount) };


    // subDomainCount Field Functions 
    bool hasSubDomainCount() const { return this->subDomainCount_ != nullptr;};
    void deleteSubDomainCount() { this->subDomainCount_ = nullptr;};
    inline int64_t subDomainCount() const { DARABONBA_PTR_GET_DEFAULT(subDomainCount_, 0L) };
    inline DescribePdnsAccountSummaryResponseBodyData& setSubDomainCount(int64_t subDomainCount) { DARABONBA_PTR_SET_VALUE(subDomainCount_, subDomainCount) };


    // threatCount Field Functions 
    bool hasThreatCount() const { return this->threatCount_ != nullptr;};
    void deleteThreatCount() { this->threatCount_ = nullptr;};
    inline int64_t threatCount() const { DARABONBA_PTR_GET_DEFAULT(threatCount_, 0L) };
    inline DescribePdnsAccountSummaryResponseBodyData& setThreatCount(int64_t threatCount) { DARABONBA_PTR_SET_VALUE(threatCount_, threatCount) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline DescribePdnsAccountSummaryResponseBodyData& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline int64_t userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, 0L) };
    inline DescribePdnsAccountSummaryResponseBodyData& setUserId(int64_t userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


  protected:
    std::shared_ptr<int64_t> domainCount_ = nullptr;
    std::shared_ptr<int64_t> httpCount_ = nullptr;
    std::shared_ptr<int64_t> httpsCount_ = nullptr;
    std::shared_ptr<int64_t> subDomainCount_ = nullptr;
    std::shared_ptr<int64_t> threatCount_ = nullptr;
    std::shared_ptr<int64_t> totalCount_ = nullptr;
    std::shared_ptr<int64_t> userId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
