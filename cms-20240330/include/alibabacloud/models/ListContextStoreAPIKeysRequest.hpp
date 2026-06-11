// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCONTEXTSTOREAPIKEYSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTCONTEXTSTOREAPIKEYSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class ListContextStoreAPIKeysRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListContextStoreAPIKeysRequest& obj) { 
      DARABONBA_PTR_TO_JSON(maxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(nextToken, nextToken_);
    };
    friend void from_json(const Darabonba::Json& j, ListContextStoreAPIKeysRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(maxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(nextToken, nextToken_);
    };
    ListContextStoreAPIKeysRequest() = default ;
    ListContextStoreAPIKeysRequest(const ListContextStoreAPIKeysRequest &) = default ;
    ListContextStoreAPIKeysRequest(ListContextStoreAPIKeysRequest &&) = default ;
    ListContextStoreAPIKeysRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListContextStoreAPIKeysRequest() = default ;
    ListContextStoreAPIKeysRequest& operator=(const ListContextStoreAPIKeysRequest &) = default ;
    ListContextStoreAPIKeysRequest& operator=(ListContextStoreAPIKeysRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->maxResults_ == nullptr
        && this->nextToken_ == nullptr; };
    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListContextStoreAPIKeysRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListContextStoreAPIKeysRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


  protected:
    // The maximum number of entries to return in a single request. If this parameter is not specified, the service returns a default number of entries.
    shared_ptr<int32_t> maxResults_ {};
    // The pagination token used to retrieve the next page of results. Leave this parameter empty to retrieve the first page.
    shared_ptr<string> nextToken_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
