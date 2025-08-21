// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEWEBRULESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEWEBRULESREQUEST_HPP_
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
  class DescribeWebRulesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeWebRulesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Cname, cname_);
      DARABONBA_PTR_TO_JSON(Domain, domain_);
      DARABONBA_PTR_TO_JSON(InstanceIds, instanceIds_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(QueryDomainPattern, queryDomainPattern_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeWebRulesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Cname, cname_);
      DARABONBA_PTR_FROM_JSON(Domain, domain_);
      DARABONBA_PTR_FROM_JSON(InstanceIds, instanceIds_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(QueryDomainPattern, queryDomainPattern_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
    };
    DescribeWebRulesRequest() = default ;
    DescribeWebRulesRequest(const DescribeWebRulesRequest &) = default ;
    DescribeWebRulesRequest(DescribeWebRulesRequest &&) = default ;
    DescribeWebRulesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeWebRulesRequest() = default ;
    DescribeWebRulesRequest& operator=(const DescribeWebRulesRequest &) = default ;
    DescribeWebRulesRequest& operator=(DescribeWebRulesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->cname_ != nullptr
        && this->domain_ != nullptr && this->instanceIds_ != nullptr && this->pageNumber_ != nullptr && this->pageSize_ != nullptr && this->queryDomainPattern_ != nullptr
        && this->resourceGroupId_ != nullptr; };
    // cname Field Functions 
    bool hasCname() const { return this->cname_ != nullptr;};
    void deleteCname() { this->cname_ = nullptr;};
    inline string cname() const { DARABONBA_PTR_GET_DEFAULT(cname_, "") };
    inline DescribeWebRulesRequest& setCname(string cname) { DARABONBA_PTR_SET_VALUE(cname_, cname) };


    // domain Field Functions 
    bool hasDomain() const { return this->domain_ != nullptr;};
    void deleteDomain() { this->domain_ = nullptr;};
    inline string domain() const { DARABONBA_PTR_GET_DEFAULT(domain_, "") };
    inline DescribeWebRulesRequest& setDomain(string domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };


    // instanceIds Field Functions 
    bool hasInstanceIds() const { return this->instanceIds_ != nullptr;};
    void deleteInstanceIds() { this->instanceIds_ = nullptr;};
    inline const vector<string> & instanceIds() const { DARABONBA_PTR_GET_CONST(instanceIds_, vector<string>) };
    inline vector<string> instanceIds() { DARABONBA_PTR_GET(instanceIds_, vector<string>) };
    inline DescribeWebRulesRequest& setInstanceIds(const vector<string> & instanceIds) { DARABONBA_PTR_SET_VALUE(instanceIds_, instanceIds) };
    inline DescribeWebRulesRequest& setInstanceIds(vector<string> && instanceIds) { DARABONBA_PTR_SET_RVALUE(instanceIds_, instanceIds) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeWebRulesRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeWebRulesRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // queryDomainPattern Field Functions 
    bool hasQueryDomainPattern() const { return this->queryDomainPattern_ != nullptr;};
    void deleteQueryDomainPattern() { this->queryDomainPattern_ = nullptr;};
    inline string queryDomainPattern() const { DARABONBA_PTR_GET_DEFAULT(queryDomainPattern_, "") };
    inline DescribeWebRulesRequest& setQueryDomainPattern(string queryDomainPattern) { DARABONBA_PTR_SET_VALUE(queryDomainPattern_, queryDomainPattern) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline DescribeWebRulesRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


  protected:
    // The CNAME address to query.
    std::shared_ptr<string> cname_ = nullptr;
    // The domain name of the website to query.
    // 
    // > The domain must have been configured with website business forwarding rules. You can call [DescribeDomains](~~DescribeDomains~~) to query all domains that have been configured with website business forwarding rules.
    std::shared_ptr<string> domain_ = nullptr;
    // The list of DDoS protection instance IDs to query.
    std::shared_ptr<vector<string>> instanceIds_ = nullptr;
    // The page number. Default value: **1**.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The number of entries per page. Valid values: **1** to **10**.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The query matching pattern. Values:
    // - **fuzzy** (default): Indicates fuzzy query.
    // - **exact**: Indicates exact query.
    std::shared_ptr<string> queryDomainPattern_ = nullptr;
    // The resource group ID of the DDoS protection instance in the resource management service.
    // 
    // Not setting this parameter indicates the default resource group.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20200101
#endif
