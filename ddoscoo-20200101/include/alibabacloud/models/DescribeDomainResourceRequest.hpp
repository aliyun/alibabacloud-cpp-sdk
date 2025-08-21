// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDOMAINRESOURCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDOMAINRESOURCEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddoscoo20200101
{
namespace Models
{
  class DescribeDomainResourceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDomainResourceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Domain, domain_);
      DARABONBA_PTR_TO_JSON(InstanceIds, instanceIds_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(QueryDomainPattern, queryDomainPattern_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDomainResourceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Domain, domain_);
      DARABONBA_PTR_FROM_JSON(InstanceIds, instanceIds_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(QueryDomainPattern, queryDomainPattern_);
    };
    DescribeDomainResourceRequest() = default ;
    DescribeDomainResourceRequest(const DescribeDomainResourceRequest &) = default ;
    DescribeDomainResourceRequest(DescribeDomainResourceRequest &&) = default ;
    DescribeDomainResourceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDomainResourceRequest() = default ;
    DescribeDomainResourceRequest& operator=(const DescribeDomainResourceRequest &) = default ;
    DescribeDomainResourceRequest& operator=(DescribeDomainResourceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->domain_ != nullptr
        && this->instanceIds_ != nullptr && this->pageNumber_ != nullptr && this->pageSize_ != nullptr && this->queryDomainPattern_ != nullptr; };
    // domain Field Functions 
    bool hasDomain() const { return this->domain_ != nullptr;};
    void deleteDomain() { this->domain_ = nullptr;};
    inline string domain() const { DARABONBA_PTR_GET_DEFAULT(domain_, "") };
    inline DescribeDomainResourceRequest& setDomain(string domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };


    // instanceIds Field Functions 
    bool hasInstanceIds() const { return this->instanceIds_ != nullptr;};
    void deleteInstanceIds() { this->instanceIds_ = nullptr;};
    inline const vector<string> & instanceIds() const { DARABONBA_PTR_GET_CONST(instanceIds_, vector<string>) };
    inline vector<string> instanceIds() { DARABONBA_PTR_GET(instanceIds_, vector<string>) };
    inline DescribeDomainResourceRequest& setInstanceIds(const vector<string> & instanceIds) { DARABONBA_PTR_SET_VALUE(instanceIds_, instanceIds) };
    inline DescribeDomainResourceRequest& setInstanceIds(vector<string> && instanceIds) { DARABONBA_PTR_SET_RVALUE(instanceIds_, instanceIds) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeDomainResourceRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeDomainResourceRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // queryDomainPattern Field Functions 
    bool hasQueryDomainPattern() const { return this->queryDomainPattern_ != nullptr;};
    void deleteQueryDomainPattern() { this->queryDomainPattern_ = nullptr;};
    inline string queryDomainPattern() const { DARABONBA_PTR_GET_DEFAULT(queryDomainPattern_, "") };
    inline DescribeDomainResourceRequest& setQueryDomainPattern(string queryDomainPattern) { DARABONBA_PTR_SET_VALUE(queryDomainPattern_, queryDomainPattern) };


  protected:
    // The domain name of the website that you want to query.
    std::shared_ptr<string> domain_ = nullptr;
    // An array that consists of the IDs of instances to query.
    std::shared_ptr<vector<string>> instanceIds_ = nullptr;
    // The page number. Default value: **1**.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The number of entries per page.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The match mode. Valid values:
    // 
    // *   **fuzzy**: fuzzy match. This is the default value.
    // *   **exact**: exact match.
    std::shared_ptr<string> queryDomainPattern_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20200101
#endif
