// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTMEMORYSTORESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTMEMORYSTORESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class ListMemoryStoresRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListMemoryStoresRequest& obj) { 
      DARABONBA_PTR_TO_JSON(maxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(memoryStoreName, memoryStoreName_);
      DARABONBA_PTR_TO_JSON(nextToken, nextToken_);
    };
    friend void from_json(const Darabonba::Json& j, ListMemoryStoresRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(maxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(memoryStoreName, memoryStoreName_);
      DARABONBA_PTR_FROM_JSON(nextToken, nextToken_);
    };
    ListMemoryStoresRequest() = default ;
    ListMemoryStoresRequest(const ListMemoryStoresRequest &) = default ;
    ListMemoryStoresRequest(ListMemoryStoresRequest &&) = default ;
    ListMemoryStoresRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListMemoryStoresRequest() = default ;
    ListMemoryStoresRequest& operator=(const ListMemoryStoresRequest &) = default ;
    ListMemoryStoresRequest& operator=(ListMemoryStoresRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->maxResults_ == nullptr
        && this->memoryStoreName_ == nullptr && this->nextToken_ == nullptr; };
    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListMemoryStoresRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // memoryStoreName Field Functions 
    bool hasMemoryStoreName() const { return this->memoryStoreName_ != nullptr;};
    void deleteMemoryStoreName() { this->memoryStoreName_ = nullptr;};
    inline string getMemoryStoreName() const { DARABONBA_PTR_GET_DEFAULT(memoryStoreName_, "") };
    inline ListMemoryStoresRequest& setMemoryStoreName(string memoryStoreName) { DARABONBA_PTR_SET_VALUE(memoryStoreName_, memoryStoreName) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListMemoryStoresRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


  protected:
    // The maximum number of results to return. The maximum value is 200.
    shared_ptr<int32_t> maxResults_ {};
    // The name of the memory store.
    shared_ptr<string> memoryStoreName_ {};
    // The token for the next page of results.
    shared_ptr<string> nextToken_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
