// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTREGISTRYMODULEVERSIONSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTREGISTRYMODULEVERSIONSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListRegistryModuleVersionsResponseBodyModuleVersions.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IaCService20210806
{
namespace Models
{
  class ListRegistryModuleVersionsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListRegistryModuleVersionsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(count, count_);
      DARABONBA_PTR_TO_JSON(maxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(moduleVersions, moduleVersions_);
      DARABONBA_PTR_TO_JSON(nextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListRegistryModuleVersionsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(count, count_);
      DARABONBA_PTR_FROM_JSON(maxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(moduleVersions, moduleVersions_);
      DARABONBA_PTR_FROM_JSON(nextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    ListRegistryModuleVersionsResponseBody() = default ;
    ListRegistryModuleVersionsResponseBody(const ListRegistryModuleVersionsResponseBody &) = default ;
    ListRegistryModuleVersionsResponseBody(ListRegistryModuleVersionsResponseBody &&) = default ;
    ListRegistryModuleVersionsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListRegistryModuleVersionsResponseBody() = default ;
    ListRegistryModuleVersionsResponseBody& operator=(const ListRegistryModuleVersionsResponseBody &) = default ;
    ListRegistryModuleVersionsResponseBody& operator=(ListRegistryModuleVersionsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->count_ != nullptr
        && this->maxResults_ != nullptr && this->moduleVersions_ != nullptr && this->nextToken_ != nullptr && this->requestId_ != nullptr; };
    // count Field Functions 
    bool hasCount() const { return this->count_ != nullptr;};
    void deleteCount() { this->count_ = nullptr;};
    inline int64_t count() const { DARABONBA_PTR_GET_DEFAULT(count_, 0L) };
    inline ListRegistryModuleVersionsResponseBody& setCount(int64_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListRegistryModuleVersionsResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // moduleVersions Field Functions 
    bool hasModuleVersions() const { return this->moduleVersions_ != nullptr;};
    void deleteModuleVersions() { this->moduleVersions_ = nullptr;};
    inline const vector<ListRegistryModuleVersionsResponseBodyModuleVersions> & moduleVersions() const { DARABONBA_PTR_GET_CONST(moduleVersions_, vector<ListRegistryModuleVersionsResponseBodyModuleVersions>) };
    inline vector<ListRegistryModuleVersionsResponseBodyModuleVersions> moduleVersions() { DARABONBA_PTR_GET(moduleVersions_, vector<ListRegistryModuleVersionsResponseBodyModuleVersions>) };
    inline ListRegistryModuleVersionsResponseBody& setModuleVersions(const vector<ListRegistryModuleVersionsResponseBodyModuleVersions> & moduleVersions) { DARABONBA_PTR_SET_VALUE(moduleVersions_, moduleVersions) };
    inline ListRegistryModuleVersionsResponseBody& setModuleVersions(vector<ListRegistryModuleVersionsResponseBodyModuleVersions> && moduleVersions) { DARABONBA_PTR_SET_RVALUE(moduleVersions_, moduleVersions) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListRegistryModuleVersionsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListRegistryModuleVersionsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<int64_t> count_ = nullptr;
    std::shared_ptr<int32_t> maxResults_ = nullptr;
    std::shared_ptr<vector<ListRegistryModuleVersionsResponseBodyModuleVersions>> moduleVersions_ = nullptr;
    std::shared_ptr<string> nextToken_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IaCService20210806
#endif
