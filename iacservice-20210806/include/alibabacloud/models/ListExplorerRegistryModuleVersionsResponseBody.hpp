// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTEXPLORERREGISTRYMODULEVERSIONSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTEXPLORERREGISTRYMODULEVERSIONSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListExplorerRegistryModuleVersionsResponseBodyExplorerRegistryModuleVersions.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IaCService20210806
{
namespace Models
{
  class ListExplorerRegistryModuleVersionsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListExplorerRegistryModuleVersionsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(explorerRegistryModuleVersions, explorerRegistryModuleVersions_);
      DARABONBA_PTR_TO_JSON(maxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(nextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(totalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListExplorerRegistryModuleVersionsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(explorerRegistryModuleVersions, explorerRegistryModuleVersions_);
      DARABONBA_PTR_FROM_JSON(maxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(nextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(totalCount, totalCount_);
    };
    ListExplorerRegistryModuleVersionsResponseBody() = default ;
    ListExplorerRegistryModuleVersionsResponseBody(const ListExplorerRegistryModuleVersionsResponseBody &) = default ;
    ListExplorerRegistryModuleVersionsResponseBody(ListExplorerRegistryModuleVersionsResponseBody &&) = default ;
    ListExplorerRegistryModuleVersionsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListExplorerRegistryModuleVersionsResponseBody() = default ;
    ListExplorerRegistryModuleVersionsResponseBody& operator=(const ListExplorerRegistryModuleVersionsResponseBody &) = default ;
    ListExplorerRegistryModuleVersionsResponseBody& operator=(ListExplorerRegistryModuleVersionsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->explorerRegistryModuleVersions_ == nullptr
        && return this->maxResults_ == nullptr && return this->nextToken_ == nullptr && return this->requestId_ == nullptr && return this->totalCount_ == nullptr; };
    // explorerRegistryModuleVersions Field Functions 
    bool hasExplorerRegistryModuleVersions() const { return this->explorerRegistryModuleVersions_ != nullptr;};
    void deleteExplorerRegistryModuleVersions() { this->explorerRegistryModuleVersions_ = nullptr;};
    inline const vector<ListExplorerRegistryModuleVersionsResponseBodyExplorerRegistryModuleVersions> & explorerRegistryModuleVersions() const { DARABONBA_PTR_GET_CONST(explorerRegistryModuleVersions_, vector<ListExplorerRegistryModuleVersionsResponseBodyExplorerRegistryModuleVersions>) };
    inline vector<ListExplorerRegistryModuleVersionsResponseBodyExplorerRegistryModuleVersions> explorerRegistryModuleVersions() { DARABONBA_PTR_GET(explorerRegistryModuleVersions_, vector<ListExplorerRegistryModuleVersionsResponseBodyExplorerRegistryModuleVersions>) };
    inline ListExplorerRegistryModuleVersionsResponseBody& setExplorerRegistryModuleVersions(const vector<ListExplorerRegistryModuleVersionsResponseBodyExplorerRegistryModuleVersions> & explorerRegistryModuleVersions) { DARABONBA_PTR_SET_VALUE(explorerRegistryModuleVersions_, explorerRegistryModuleVersions) };
    inline ListExplorerRegistryModuleVersionsResponseBody& setExplorerRegistryModuleVersions(vector<ListExplorerRegistryModuleVersionsResponseBodyExplorerRegistryModuleVersions> && explorerRegistryModuleVersions) { DARABONBA_PTR_SET_RVALUE(explorerRegistryModuleVersions_, explorerRegistryModuleVersions) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListExplorerRegistryModuleVersionsResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListExplorerRegistryModuleVersionsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListExplorerRegistryModuleVersionsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ListExplorerRegistryModuleVersionsResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    std::shared_ptr<vector<ListExplorerRegistryModuleVersionsResponseBodyExplorerRegistryModuleVersions>> explorerRegistryModuleVersions_ = nullptr;
    std::shared_ptr<int32_t> maxResults_ = nullptr;
    std::shared_ptr<string> nextToken_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<int64_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IaCService20210806
#endif
