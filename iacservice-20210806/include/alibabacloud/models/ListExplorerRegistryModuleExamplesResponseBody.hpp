// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTEXPLORERREGISTRYMODULEEXAMPLESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTEXPLORERREGISTRYMODULEEXAMPLESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListExplorerRegistryModuleExamplesResponseBodyExplorerRegistryModuleExamples.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IaCService20210806
{
namespace Models
{
  class ListExplorerRegistryModuleExamplesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListExplorerRegistryModuleExamplesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(explorerRegistryModuleExamples, explorerRegistryModuleExamples_);
      DARABONBA_PTR_TO_JSON(maxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(nextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(totalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListExplorerRegistryModuleExamplesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(explorerRegistryModuleExamples, explorerRegistryModuleExamples_);
      DARABONBA_PTR_FROM_JSON(maxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(nextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(totalCount, totalCount_);
    };
    ListExplorerRegistryModuleExamplesResponseBody() = default ;
    ListExplorerRegistryModuleExamplesResponseBody(const ListExplorerRegistryModuleExamplesResponseBody &) = default ;
    ListExplorerRegistryModuleExamplesResponseBody(ListExplorerRegistryModuleExamplesResponseBody &&) = default ;
    ListExplorerRegistryModuleExamplesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListExplorerRegistryModuleExamplesResponseBody() = default ;
    ListExplorerRegistryModuleExamplesResponseBody& operator=(const ListExplorerRegistryModuleExamplesResponseBody &) = default ;
    ListExplorerRegistryModuleExamplesResponseBody& operator=(ListExplorerRegistryModuleExamplesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->explorerRegistryModuleExamples_ != nullptr
        && this->maxResults_ != nullptr && this->nextToken_ != nullptr && this->requestId_ != nullptr && this->totalCount_ != nullptr; };
    // explorerRegistryModuleExamples Field Functions 
    bool hasExplorerRegistryModuleExamples() const { return this->explorerRegistryModuleExamples_ != nullptr;};
    void deleteExplorerRegistryModuleExamples() { this->explorerRegistryModuleExamples_ = nullptr;};
    inline const vector<ListExplorerRegistryModuleExamplesResponseBodyExplorerRegistryModuleExamples> & explorerRegistryModuleExamples() const { DARABONBA_PTR_GET_CONST(explorerRegistryModuleExamples_, vector<ListExplorerRegistryModuleExamplesResponseBodyExplorerRegistryModuleExamples>) };
    inline vector<ListExplorerRegistryModuleExamplesResponseBodyExplorerRegistryModuleExamples> explorerRegistryModuleExamples() { DARABONBA_PTR_GET(explorerRegistryModuleExamples_, vector<ListExplorerRegistryModuleExamplesResponseBodyExplorerRegistryModuleExamples>) };
    inline ListExplorerRegistryModuleExamplesResponseBody& setExplorerRegistryModuleExamples(const vector<ListExplorerRegistryModuleExamplesResponseBodyExplorerRegistryModuleExamples> & explorerRegistryModuleExamples) { DARABONBA_PTR_SET_VALUE(explorerRegistryModuleExamples_, explorerRegistryModuleExamples) };
    inline ListExplorerRegistryModuleExamplesResponseBody& setExplorerRegistryModuleExamples(vector<ListExplorerRegistryModuleExamplesResponseBodyExplorerRegistryModuleExamples> && explorerRegistryModuleExamples) { DARABONBA_PTR_SET_RVALUE(explorerRegistryModuleExamples_, explorerRegistryModuleExamples) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListExplorerRegistryModuleExamplesResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListExplorerRegistryModuleExamplesResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListExplorerRegistryModuleExamplesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ListExplorerRegistryModuleExamplesResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    std::shared_ptr<vector<ListExplorerRegistryModuleExamplesResponseBodyExplorerRegistryModuleExamples>> explorerRegistryModuleExamples_ = nullptr;
    std::shared_ptr<int32_t> maxResults_ = nullptr;
    std::shared_ptr<string> nextToken_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<int64_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IaCService20210806
#endif
