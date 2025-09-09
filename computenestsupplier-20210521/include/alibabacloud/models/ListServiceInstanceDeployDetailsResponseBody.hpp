// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSERVICEINSTANCEDEPLOYDETAILSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTSERVICEINSTANCEDEPLOYDETAILSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListServiceInstanceDeployDetailsResponseBodyDeployDetails.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ComputeNestSupplier20210521
{
namespace Models
{
  class ListServiceInstanceDeployDetailsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListServiceInstanceDeployDetailsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DeployDetails, deployDetails_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListServiceInstanceDeployDetailsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DeployDetails, deployDetails_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListServiceInstanceDeployDetailsResponseBody() = default ;
    ListServiceInstanceDeployDetailsResponseBody(const ListServiceInstanceDeployDetailsResponseBody &) = default ;
    ListServiceInstanceDeployDetailsResponseBody(ListServiceInstanceDeployDetailsResponseBody &&) = default ;
    ListServiceInstanceDeployDetailsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListServiceInstanceDeployDetailsResponseBody() = default ;
    ListServiceInstanceDeployDetailsResponseBody& operator=(const ListServiceInstanceDeployDetailsResponseBody &) = default ;
    ListServiceInstanceDeployDetailsResponseBody& operator=(ListServiceInstanceDeployDetailsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->deployDetails_ != nullptr
        && this->maxResults_ != nullptr && this->nextToken_ != nullptr && this->requestId_ != nullptr && this->totalCount_ != nullptr; };
    // deployDetails Field Functions 
    bool hasDeployDetails() const { return this->deployDetails_ != nullptr;};
    void deleteDeployDetails() { this->deployDetails_ = nullptr;};
    inline const vector<ListServiceInstanceDeployDetailsResponseBodyDeployDetails> & deployDetails() const { DARABONBA_PTR_GET_CONST(deployDetails_, vector<ListServiceInstanceDeployDetailsResponseBodyDeployDetails>) };
    inline vector<ListServiceInstanceDeployDetailsResponseBodyDeployDetails> deployDetails() { DARABONBA_PTR_GET(deployDetails_, vector<ListServiceInstanceDeployDetailsResponseBodyDeployDetails>) };
    inline ListServiceInstanceDeployDetailsResponseBody& setDeployDetails(const vector<ListServiceInstanceDeployDetailsResponseBodyDeployDetails> & deployDetails) { DARABONBA_PTR_SET_VALUE(deployDetails_, deployDetails) };
    inline ListServiceInstanceDeployDetailsResponseBody& setDeployDetails(vector<ListServiceInstanceDeployDetailsResponseBodyDeployDetails> && deployDetails) { DARABONBA_PTR_SET_RVALUE(deployDetails_, deployDetails) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListServiceInstanceDeployDetailsResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListServiceInstanceDeployDetailsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListServiceInstanceDeployDetailsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListServiceInstanceDeployDetailsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The details of the service instance deployment.
    std::shared_ptr<vector<ListServiceInstanceDeployDetailsResponseBodyDeployDetails>> deployDetails_ = nullptr;
    // The number of entries per page. Valid values: 1 to 100. Default value: 20.
    std::shared_ptr<int32_t> maxResults_ = nullptr;
    // A pagination token. It can be used in the next request to retrieve a new page of results. If NextToken is empty, no next page exists.
    std::shared_ptr<string> nextToken_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The total number of entries returned.
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ComputeNestSupplier20210521
#endif
