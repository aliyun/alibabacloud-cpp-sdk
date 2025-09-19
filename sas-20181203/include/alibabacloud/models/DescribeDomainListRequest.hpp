// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDOMAINLISTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDOMAINLISTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeDomainListRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDomainListRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(DomainType, domainType_);
      DARABONBA_PTR_TO_JSON(FuzzyDomain, fuzzyDomain_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(SourceIp, sourceIp_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDomainListRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(DomainType, domainType_);
      DARABONBA_PTR_FROM_JSON(FuzzyDomain, fuzzyDomain_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(SourceIp, sourceIp_);
    };
    DescribeDomainListRequest() = default ;
    DescribeDomainListRequest(const DescribeDomainListRequest &) = default ;
    DescribeDomainListRequest(DescribeDomainListRequest &&) = default ;
    DescribeDomainListRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDomainListRequest() = default ;
    DescribeDomainListRequest& operator=(const DescribeDomainListRequest &) = default ;
    DescribeDomainListRequest& operator=(DescribeDomainListRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->currentPage_ != nullptr
        && this->domainType_ != nullptr && this->fuzzyDomain_ != nullptr && this->pageSize_ != nullptr && this->sourceIp_ != nullptr; };
    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t currentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline DescribeDomainListRequest& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // domainType Field Functions 
    bool hasDomainType() const { return this->domainType_ != nullptr;};
    void deleteDomainType() { this->domainType_ = nullptr;};
    inline string domainType() const { DARABONBA_PTR_GET_DEFAULT(domainType_, "") };
    inline DescribeDomainListRequest& setDomainType(string domainType) { DARABONBA_PTR_SET_VALUE(domainType_, domainType) };


    // fuzzyDomain Field Functions 
    bool hasFuzzyDomain() const { return this->fuzzyDomain_ != nullptr;};
    void deleteFuzzyDomain() { this->fuzzyDomain_ = nullptr;};
    inline string fuzzyDomain() const { DARABONBA_PTR_GET_DEFAULT(fuzzyDomain_, "") };
    inline DescribeDomainListRequest& setFuzzyDomain(string fuzzyDomain) { DARABONBA_PTR_SET_VALUE(fuzzyDomain_, fuzzyDomain) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeDomainListRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // sourceIp Field Functions 
    bool hasSourceIp() const { return this->sourceIp_ != nullptr;};
    void deleteSourceIp() { this->sourceIp_ = nullptr;};
    inline string sourceIp() const { DARABONBA_PTR_GET_DEFAULT(sourceIp_, "") };
    inline DescribeDomainListRequest& setSourceIp(string sourceIp) { DARABONBA_PTR_SET_VALUE(sourceIp_, sourceIp) };


  protected:
    // The number of the page to return. Default value: **1**.
    std::shared_ptr<int32_t> currentPage_ = nullptr;
    // The type of the domain name that you want to query. Valid values:
    // 
    // *   **root**: root domain name
    // *   **sub**: subdomain name
    std::shared_ptr<string> domainType_ = nullptr;
    // The keyword that is used to query domain names. Fuzzy match is supported.
    std::shared_ptr<string> fuzzyDomain_ = nullptr;
    // The number of entries to return on each page. Default value: **10**.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The source IP address of the request.
    std::shared_ptr<string> sourceIp_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
