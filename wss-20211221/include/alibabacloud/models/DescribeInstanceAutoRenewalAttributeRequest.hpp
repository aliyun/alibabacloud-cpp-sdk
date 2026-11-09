// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINSTANCEAUTORENEWALATTRIBUTEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINSTANCEAUTORENEWALATTRIBUTEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Wss20211221
{
namespace Models
{
  class DescribeInstanceAutoRenewalAttributeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInstanceAutoRenewalAttributeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AutoRenewal, autoRenewal_);
      DARABONBA_PTR_TO_JSON(InstanceIdList, instanceIdList_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(PageNo, pageNo_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_TO_JSON(ResourceTypeList, resourceTypeList_);
      DARABONBA_PTR_TO_JSON(SearchRegionId, searchRegionId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInstanceAutoRenewalAttributeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AutoRenewal, autoRenewal_);
      DARABONBA_PTR_FROM_JSON(InstanceIdList, instanceIdList_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(PageNo, pageNo_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_FROM_JSON(ResourceTypeList, resourceTypeList_);
      DARABONBA_PTR_FROM_JSON(SearchRegionId, searchRegionId_);
    };
    DescribeInstanceAutoRenewalAttributeRequest() = default ;
    DescribeInstanceAutoRenewalAttributeRequest(const DescribeInstanceAutoRenewalAttributeRequest &) = default ;
    DescribeInstanceAutoRenewalAttributeRequest(DescribeInstanceAutoRenewalAttributeRequest &&) = default ;
    DescribeInstanceAutoRenewalAttributeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeInstanceAutoRenewalAttributeRequest() = default ;
    DescribeInstanceAutoRenewalAttributeRequest& operator=(const DescribeInstanceAutoRenewalAttributeRequest &) = default ;
    DescribeInstanceAutoRenewalAttributeRequest& operator=(DescribeInstanceAutoRenewalAttributeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->autoRenewal_ == nullptr
        && this->instanceIdList_ == nullptr && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->pageNo_ == nullptr && this->pageSize_ == nullptr
        && this->resourceType_ == nullptr && this->resourceTypeList_ == nullptr && this->searchRegionId_ == nullptr; };
    // autoRenewal Field Functions 
    bool hasAutoRenewal() const { return this->autoRenewal_ != nullptr;};
    void deleteAutoRenewal() { this->autoRenewal_ = nullptr;};
    inline bool getAutoRenewal() const { DARABONBA_PTR_GET_DEFAULT(autoRenewal_, false) };
    inline DescribeInstanceAutoRenewalAttributeRequest& setAutoRenewal(bool autoRenewal) { DARABONBA_PTR_SET_VALUE(autoRenewal_, autoRenewal) };


    // instanceIdList Field Functions 
    bool hasInstanceIdList() const { return this->instanceIdList_ != nullptr;};
    void deleteInstanceIdList() { this->instanceIdList_ = nullptr;};
    inline const vector<string> & getInstanceIdList() const { DARABONBA_PTR_GET_CONST(instanceIdList_, vector<string>) };
    inline vector<string> getInstanceIdList() { DARABONBA_PTR_GET(instanceIdList_, vector<string>) };
    inline DescribeInstanceAutoRenewalAttributeRequest& setInstanceIdList(const vector<string> & instanceIdList) { DARABONBA_PTR_SET_VALUE(instanceIdList_, instanceIdList) };
    inline DescribeInstanceAutoRenewalAttributeRequest& setInstanceIdList(vector<string> && instanceIdList) { DARABONBA_PTR_SET_RVALUE(instanceIdList_, instanceIdList) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline DescribeInstanceAutoRenewalAttributeRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribeInstanceAutoRenewalAttributeRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // pageNo Field Functions 
    bool hasPageNo() const { return this->pageNo_ != nullptr;};
    void deletePageNo() { this->pageNo_ = nullptr;};
    inline int32_t getPageNo() const { DARABONBA_PTR_GET_DEFAULT(pageNo_, 0) };
    inline DescribeInstanceAutoRenewalAttributeRequest& setPageNo(int32_t pageNo) { DARABONBA_PTR_SET_VALUE(pageNo_, pageNo) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeInstanceAutoRenewalAttributeRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline string getResourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
    inline DescribeInstanceAutoRenewalAttributeRequest& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


    // resourceTypeList Field Functions 
    bool hasResourceTypeList() const { return this->resourceTypeList_ != nullptr;};
    void deleteResourceTypeList() { this->resourceTypeList_ = nullptr;};
    inline const vector<string> & getResourceTypeList() const { DARABONBA_PTR_GET_CONST(resourceTypeList_, vector<string>) };
    inline vector<string> getResourceTypeList() { DARABONBA_PTR_GET(resourceTypeList_, vector<string>) };
    inline DescribeInstanceAutoRenewalAttributeRequest& setResourceTypeList(const vector<string> & resourceTypeList) { DARABONBA_PTR_SET_VALUE(resourceTypeList_, resourceTypeList) };
    inline DescribeInstanceAutoRenewalAttributeRequest& setResourceTypeList(vector<string> && resourceTypeList) { DARABONBA_PTR_SET_RVALUE(resourceTypeList_, resourceTypeList) };


    // searchRegionId Field Functions 
    bool hasSearchRegionId() const { return this->searchRegionId_ != nullptr;};
    void deleteSearchRegionId() { this->searchRegionId_ = nullptr;};
    inline string getSearchRegionId() const { DARABONBA_PTR_GET_DEFAULT(searchRegionId_, "") };
    inline DescribeInstanceAutoRenewalAttributeRequest& setSearchRegionId(string searchRegionId) { DARABONBA_PTR_SET_VALUE(searchRegionId_, searchRegionId) };


  protected:
    // The auto-renewal status. Valid values:
    // - true: Auto-renewal is enabled.
    // - false: Auto-renewal is disabled.
    shared_ptr<bool> autoRenewal_ {};
    // The list of instance IDs for which to query the auto-renewal status.
    shared_ptr<vector<string>> instanceIdList_ {};
    // The maximum number of entries to return per query.
    shared_ptr<int32_t> maxResults_ {};
    // The mark for paging. Leave this parameter empty for the first query. For subsequent paging, pass the NextToken value returned in the previous response as is. Do not construct or decode the value.
    shared_ptr<string> nextToken_ {};
    // The page number. Default value: 1.
    shared_ptr<int32_t> pageNo_ {};
    // The maximum number of entries per page. Maximum value: 500. Default value: 20.
    shared_ptr<int32_t> pageSize_ {};
    // The resource type. Example: CorePackage indicates a core-hour package.
    shared_ptr<string> resourceType_ {};
    // The list of resource types.
    shared_ptr<vector<string>> resourceTypeList_ {};
    // The region ID used to filter instances.
    shared_ptr<string> searchRegionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Wss20211221
#endif
