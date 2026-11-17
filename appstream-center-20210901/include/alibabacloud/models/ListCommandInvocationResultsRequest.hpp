// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCOMMANDINVOCATIONRESULTSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTCOMMANDINVOCATIONRESULTSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AppstreamCenter20210901
{
namespace Models
{
  class ListCommandInvocationResultsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListCommandInvocationResultsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppInstanceGroupId, appInstanceGroupId_);
      DARABONBA_PTR_TO_JSON(AppInstanceGroupIds, appInstanceGroupIds_);
      DARABONBA_PTR_TO_JSON(AppInstancePersistentIds, appInstancePersistentIds_);
      DARABONBA_PTR_TO_JSON(InvocationId, invocationId_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(ProductType, productType_);
    };
    friend void from_json(const Darabonba::Json& j, ListCommandInvocationResultsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppInstanceGroupId, appInstanceGroupId_);
      DARABONBA_PTR_FROM_JSON(AppInstanceGroupIds, appInstanceGroupIds_);
      DARABONBA_PTR_FROM_JSON(AppInstancePersistentIds, appInstancePersistentIds_);
      DARABONBA_PTR_FROM_JSON(InvocationId, invocationId_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(ProductType, productType_);
    };
    ListCommandInvocationResultsRequest() = default ;
    ListCommandInvocationResultsRequest(const ListCommandInvocationResultsRequest &) = default ;
    ListCommandInvocationResultsRequest(ListCommandInvocationResultsRequest &&) = default ;
    ListCommandInvocationResultsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListCommandInvocationResultsRequest() = default ;
    ListCommandInvocationResultsRequest& operator=(const ListCommandInvocationResultsRequest &) = default ;
    ListCommandInvocationResultsRequest& operator=(ListCommandInvocationResultsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appInstanceGroupId_ == nullptr
        && this->appInstanceGroupIds_ == nullptr && this->appInstancePersistentIds_ == nullptr && this->invocationId_ == nullptr && this->maxResults_ == nullptr && this->nextToken_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->productType_ == nullptr; };
    // appInstanceGroupId Field Functions 
    bool hasAppInstanceGroupId() const { return this->appInstanceGroupId_ != nullptr;};
    void deleteAppInstanceGroupId() { this->appInstanceGroupId_ = nullptr;};
    inline string getAppInstanceGroupId() const { DARABONBA_PTR_GET_DEFAULT(appInstanceGroupId_, "") };
    inline ListCommandInvocationResultsRequest& setAppInstanceGroupId(string appInstanceGroupId) { DARABONBA_PTR_SET_VALUE(appInstanceGroupId_, appInstanceGroupId) };


    // appInstanceGroupIds Field Functions 
    bool hasAppInstanceGroupIds() const { return this->appInstanceGroupIds_ != nullptr;};
    void deleteAppInstanceGroupIds() { this->appInstanceGroupIds_ = nullptr;};
    inline const vector<string> & getAppInstanceGroupIds() const { DARABONBA_PTR_GET_CONST(appInstanceGroupIds_, vector<string>) };
    inline vector<string> getAppInstanceGroupIds() { DARABONBA_PTR_GET(appInstanceGroupIds_, vector<string>) };
    inline ListCommandInvocationResultsRequest& setAppInstanceGroupIds(const vector<string> & appInstanceGroupIds) { DARABONBA_PTR_SET_VALUE(appInstanceGroupIds_, appInstanceGroupIds) };
    inline ListCommandInvocationResultsRequest& setAppInstanceGroupIds(vector<string> && appInstanceGroupIds) { DARABONBA_PTR_SET_RVALUE(appInstanceGroupIds_, appInstanceGroupIds) };


    // appInstancePersistentIds Field Functions 
    bool hasAppInstancePersistentIds() const { return this->appInstancePersistentIds_ != nullptr;};
    void deleteAppInstancePersistentIds() { this->appInstancePersistentIds_ = nullptr;};
    inline const vector<string> & getAppInstancePersistentIds() const { DARABONBA_PTR_GET_CONST(appInstancePersistentIds_, vector<string>) };
    inline vector<string> getAppInstancePersistentIds() { DARABONBA_PTR_GET(appInstancePersistentIds_, vector<string>) };
    inline ListCommandInvocationResultsRequest& setAppInstancePersistentIds(const vector<string> & appInstancePersistentIds) { DARABONBA_PTR_SET_VALUE(appInstancePersistentIds_, appInstancePersistentIds) };
    inline ListCommandInvocationResultsRequest& setAppInstancePersistentIds(vector<string> && appInstancePersistentIds) { DARABONBA_PTR_SET_RVALUE(appInstancePersistentIds_, appInstancePersistentIds) };


    // invocationId Field Functions 
    bool hasInvocationId() const { return this->invocationId_ != nullptr;};
    void deleteInvocationId() { this->invocationId_ = nullptr;};
    inline string getInvocationId() const { DARABONBA_PTR_GET_DEFAULT(invocationId_, "") };
    inline ListCommandInvocationResultsRequest& setInvocationId(string invocationId) { DARABONBA_PTR_SET_VALUE(invocationId_, invocationId) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListCommandInvocationResultsRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListCommandInvocationResultsRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListCommandInvocationResultsRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListCommandInvocationResultsRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // productType Field Functions 
    bool hasProductType() const { return this->productType_ != nullptr;};
    void deleteProductType() { this->productType_ = nullptr;};
    inline string getProductType() const { DARABONBA_PTR_GET_DEFAULT(productType_, "") };
    inline ListCommandInvocationResultsRequest& setProductType(string productType) { DARABONBA_PTR_SET_VALUE(productType_, productType) };


  protected:
    // The ID of the delivery group. Queries the command execution results under this delivery group. This parameter must be specified when AppInstanceGroupIds is not specified. If both are specified, AppInstanceGroupIds takes precedence and this parameter does not take effect.
    shared_ptr<string> appInstanceGroupId_ {};
    // The list of delivery group IDs. A maximum of 200 IDs can be specified, and all delivery groups must be in the same region. When specified, it takes precedence over AppInstanceGroupId and queries the command execution results of all persistent sessions under these delivery groups. The list cannot contain null values.
    shared_ptr<vector<string>> appInstanceGroupIds_ {};
    // The list of persistent session IDs. A maximum of 100 IDs can be specified. It is used to query only the command execution results of the specified persistent sessions. When AppInstanceGroupIds is specified, only persistent sessions belonging to these delivery groups are retained. If no matching persistent sessions are found, an empty list is returned.
    shared_ptr<vector<string>> appInstancePersistentIds_ {};
    // The command execution ID, which is the InvocationId returned when you call RunAppInstanceCommand to deliver a command.
    // 
    // This parameter is required.
    shared_ptr<string> invocationId_ {};
    // This parameter does not take effect in the current version and does not affect the query results if passed. Use PageNumber and PageSize for pagination.
    shared_ptr<int32_t> maxResults_ {};
    // This parameter does not take effect in the current version and does not affect the query results if passed. Use PageNumber and PageSize for pagination.
    shared_ptr<string> nextToken_ {};
    // The page number of the query results to display. It is used together with PageSize for paging in a paged query. If not specified, the default value is 0, which indicates the first page.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of query results per page. Default value: 200.
    shared_ptr<int32_t> pageSize_ {};
    // The product type. Currently, only WuyingServer is supported. If you specify other values, a parameter error is returned.
    // 
    // This parameter is required.
    shared_ptr<string> productType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AppstreamCenter20210901
#endif
