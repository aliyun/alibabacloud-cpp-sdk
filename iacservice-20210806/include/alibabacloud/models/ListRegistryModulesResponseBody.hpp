// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTREGISTRYMODULESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTREGISTRYMODULESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListRegistryModulesResponseBodyRegistryModules.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IaCService20210806
{
namespace Models
{
  class ListRegistryModulesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListRegistryModulesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(count, count_);
      DARABONBA_PTR_TO_JSON(maxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(nextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(registryModules, registryModules_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListRegistryModulesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(count, count_);
      DARABONBA_PTR_FROM_JSON(maxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(nextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(registryModules, registryModules_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    ListRegistryModulesResponseBody() = default ;
    ListRegistryModulesResponseBody(const ListRegistryModulesResponseBody &) = default ;
    ListRegistryModulesResponseBody(ListRegistryModulesResponseBody &&) = default ;
    ListRegistryModulesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListRegistryModulesResponseBody() = default ;
    ListRegistryModulesResponseBody& operator=(const ListRegistryModulesResponseBody &) = default ;
    ListRegistryModulesResponseBody& operator=(ListRegistryModulesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->count_ == nullptr
        && return this->maxResults_ == nullptr && return this->nextToken_ == nullptr && return this->registryModules_ == nullptr && return this->requestId_ == nullptr; };
    // count Field Functions 
    bool hasCount() const { return this->count_ != nullptr;};
    void deleteCount() { this->count_ = nullptr;};
    inline int64_t count() const { DARABONBA_PTR_GET_DEFAULT(count_, 0L) };
    inline ListRegistryModulesResponseBody& setCount(int64_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListRegistryModulesResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListRegistryModulesResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // registryModules Field Functions 
    bool hasRegistryModules() const { return this->registryModules_ != nullptr;};
    void deleteRegistryModules() { this->registryModules_ = nullptr;};
    inline const vector<ListRegistryModulesResponseBodyRegistryModules> & registryModules() const { DARABONBA_PTR_GET_CONST(registryModules_, vector<ListRegistryModulesResponseBodyRegistryModules>) };
    inline vector<ListRegistryModulesResponseBodyRegistryModules> registryModules() { DARABONBA_PTR_GET(registryModules_, vector<ListRegistryModulesResponseBodyRegistryModules>) };
    inline ListRegistryModulesResponseBody& setRegistryModules(const vector<ListRegistryModulesResponseBodyRegistryModules> & registryModules) { DARABONBA_PTR_SET_VALUE(registryModules_, registryModules) };
    inline ListRegistryModulesResponseBody& setRegistryModules(vector<ListRegistryModulesResponseBodyRegistryModules> && registryModules) { DARABONBA_PTR_SET_RVALUE(registryModules_, registryModules) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListRegistryModulesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<int64_t> count_ = nullptr;
    std::shared_ptr<int32_t> maxResults_ = nullptr;
    std::shared_ptr<string> nextToken_ = nullptr;
    std::shared_ptr<vector<ListRegistryModulesResponseBodyRegistryModules>> registryModules_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IaCService20210806
#endif
