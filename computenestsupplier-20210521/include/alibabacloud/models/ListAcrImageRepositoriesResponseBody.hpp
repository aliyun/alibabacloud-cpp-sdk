// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTACRIMAGEREPOSITORIESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTACRIMAGEREPOSITORIESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListAcrImageRepositoriesResponseBodyRepositories.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ComputeNestSupplier20210521
{
namespace Models
{
  class ListAcrImageRepositoriesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAcrImageRepositoriesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(Repositories, repositories_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListAcrImageRepositoriesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(Repositories, repositories_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListAcrImageRepositoriesResponseBody() = default ;
    ListAcrImageRepositoriesResponseBody(const ListAcrImageRepositoriesResponseBody &) = default ;
    ListAcrImageRepositoriesResponseBody(ListAcrImageRepositoriesResponseBody &&) = default ;
    ListAcrImageRepositoriesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAcrImageRepositoriesResponseBody() = default ;
    ListAcrImageRepositoriesResponseBody& operator=(const ListAcrImageRepositoriesResponseBody &) = default ;
    ListAcrImageRepositoriesResponseBody& operator=(ListAcrImageRepositoriesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->maxResults_ != nullptr
        && this->nextToken_ != nullptr && this->repositories_ != nullptr && this->requestId_ != nullptr && this->totalCount_ != nullptr; };
    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListAcrImageRepositoriesResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListAcrImageRepositoriesResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // repositories Field Functions 
    bool hasRepositories() const { return this->repositories_ != nullptr;};
    void deleteRepositories() { this->repositories_ = nullptr;};
    inline const vector<ListAcrImageRepositoriesResponseBodyRepositories> & repositories() const { DARABONBA_PTR_GET_CONST(repositories_, vector<ListAcrImageRepositoriesResponseBodyRepositories>) };
    inline vector<ListAcrImageRepositoriesResponseBodyRepositories> repositories() { DARABONBA_PTR_GET(repositories_, vector<ListAcrImageRepositoriesResponseBodyRepositories>) };
    inline ListAcrImageRepositoriesResponseBody& setRepositories(const vector<ListAcrImageRepositoriesResponseBodyRepositories> & repositories) { DARABONBA_PTR_SET_VALUE(repositories_, repositories) };
    inline ListAcrImageRepositoriesResponseBody& setRepositories(vector<ListAcrImageRepositoriesResponseBodyRepositories> && repositories) { DARABONBA_PTR_SET_RVALUE(repositories_, repositories) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListAcrImageRepositoriesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListAcrImageRepositoriesResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The number of entries per page. Valid values: 1 to 100. Default value: 20.
    std::shared_ptr<int32_t> maxResults_ = nullptr;
    // A pagination token.
    std::shared_ptr<string> nextToken_ = nullptr;
    // The images.
    std::shared_ptr<vector<ListAcrImageRepositoriesResponseBodyRepositories>> repositories_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The total number of entries returned.
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ComputeNestSupplier20210521
#endif
