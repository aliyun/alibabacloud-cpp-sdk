// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTEXPLORERREGISTRYMODULESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTEXPLORERREGISTRYMODULESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListExplorerRegistryModulesResponseBodyExplorerRegistryModules.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IaCService20210806
{
namespace Models
{
  class ListExplorerRegistryModulesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListExplorerRegistryModulesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(explorerRegistryModules, explorerRegistryModules_);
      DARABONBA_PTR_TO_JSON(maxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(nextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(totalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListExplorerRegistryModulesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(explorerRegistryModules, explorerRegistryModules_);
      DARABONBA_PTR_FROM_JSON(maxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(nextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(totalCount, totalCount_);
    };
    ListExplorerRegistryModulesResponseBody() = default ;
    ListExplorerRegistryModulesResponseBody(const ListExplorerRegistryModulesResponseBody &) = default ;
    ListExplorerRegistryModulesResponseBody(ListExplorerRegistryModulesResponseBody &&) = default ;
    ListExplorerRegistryModulesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListExplorerRegistryModulesResponseBody() = default ;
    ListExplorerRegistryModulesResponseBody& operator=(const ListExplorerRegistryModulesResponseBody &) = default ;
    ListExplorerRegistryModulesResponseBody& operator=(ListExplorerRegistryModulesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->explorerRegistryModules_ == nullptr
        && return this->maxResults_ == nullptr && return this->nextToken_ == nullptr && return this->requestId_ == nullptr && return this->totalCount_ == nullptr; };
    // explorerRegistryModules Field Functions 
    bool hasExplorerRegistryModules() const { return this->explorerRegistryModules_ != nullptr;};
    void deleteExplorerRegistryModules() { this->explorerRegistryModules_ = nullptr;};
    inline const vector<ListExplorerRegistryModulesResponseBodyExplorerRegistryModules> & explorerRegistryModules() const { DARABONBA_PTR_GET_CONST(explorerRegistryModules_, vector<ListExplorerRegistryModulesResponseBodyExplorerRegistryModules>) };
    inline vector<ListExplorerRegistryModulesResponseBodyExplorerRegistryModules> explorerRegistryModules() { DARABONBA_PTR_GET(explorerRegistryModules_, vector<ListExplorerRegistryModulesResponseBodyExplorerRegistryModules>) };
    inline ListExplorerRegistryModulesResponseBody& setExplorerRegistryModules(const vector<ListExplorerRegistryModulesResponseBodyExplorerRegistryModules> & explorerRegistryModules) { DARABONBA_PTR_SET_VALUE(explorerRegistryModules_, explorerRegistryModules) };
    inline ListExplorerRegistryModulesResponseBody& setExplorerRegistryModules(vector<ListExplorerRegistryModulesResponseBodyExplorerRegistryModules> && explorerRegistryModules) { DARABONBA_PTR_SET_RVALUE(explorerRegistryModules_, explorerRegistryModules) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListExplorerRegistryModulesResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListExplorerRegistryModulesResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListExplorerRegistryModulesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ListExplorerRegistryModulesResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    std::shared_ptr<vector<ListExplorerRegistryModulesResponseBodyExplorerRegistryModules>> explorerRegistryModules_ = nullptr;
    std::shared_ptr<int32_t> maxResults_ = nullptr;
    std::shared_ptr<string> nextToken_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<int64_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IaCService20210806
#endif
