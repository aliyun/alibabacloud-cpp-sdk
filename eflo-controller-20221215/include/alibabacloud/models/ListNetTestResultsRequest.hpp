// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTNETTESTRESULTSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTNETTESTRESULTSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EfloController20221215
{
namespace Models
{
  class ListNetTestResultsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListNetTestResultsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NetTestType, netTestType_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
    };
    friend void from_json(const Darabonba::Json& j, ListNetTestResultsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NetTestType, netTestType_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
    };
    ListNetTestResultsRequest() = default ;
    ListNetTestResultsRequest(const ListNetTestResultsRequest &) = default ;
    ListNetTestResultsRequest(ListNetTestResultsRequest &&) = default ;
    ListNetTestResultsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListNetTestResultsRequest() = default ;
    ListNetTestResultsRequest& operator=(const ListNetTestResultsRequest &) = default ;
    ListNetTestResultsRequest& operator=(ListNetTestResultsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->maxResults_ == nullptr
        && this->netTestType_ == nullptr && this->nextToken_ == nullptr && this->resourceGroupId_ == nullptr; };
    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int64_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0L) };
    inline ListNetTestResultsRequest& setMaxResults(int64_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // netTestType Field Functions 
    bool hasNetTestType() const { return this->netTestType_ != nullptr;};
    void deleteNetTestType() { this->netTestType_ = nullptr;};
    inline string getNetTestType() const { DARABONBA_PTR_GET_DEFAULT(netTestType_, "") };
    inline ListNetTestResultsRequest& setNetTestType(string netTestType) { DARABONBA_PTR_SET_VALUE(netTestType_, netTestType) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListNetTestResultsRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline ListNetTestResultsRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


  protected:
    // The number of entries to return on each page. Maximum value: 100.
    // 
    // Default value:
    // 
    // *   If you do not configure this parameter or if you set this parameter to a value less than 20, the default value is 20.
    // *   If you set this parameter to a value that is greater than 100, the default value is 100.
    shared_ptr<int64_t> maxResults_ {};
    // The type of the network test.
    shared_ptr<string> netTestType_ {};
    // The token that determines the start position of the query. Set this parameter to the value of the NextToken parameter that is returned from the last call.
    shared_ptr<string> nextToken_ {};
    // The resource group ID.
    shared_ptr<string> resourceGroupId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EfloController20221215
#endif
