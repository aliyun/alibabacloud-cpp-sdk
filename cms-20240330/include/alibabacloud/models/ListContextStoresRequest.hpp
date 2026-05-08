// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCONTEXTSTORESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTCONTEXTSTORESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class ListContextStoresRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListContextStoresRequest& obj) { 
      DARABONBA_PTR_TO_JSON(contextStoreName, contextStoreName_);
      DARABONBA_PTR_TO_JSON(contextType, contextType_);
      DARABONBA_PTR_TO_JSON(maxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(nextToken, nextToken_);
    };
    friend void from_json(const Darabonba::Json& j, ListContextStoresRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(contextStoreName, contextStoreName_);
      DARABONBA_PTR_FROM_JSON(contextType, contextType_);
      DARABONBA_PTR_FROM_JSON(maxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(nextToken, nextToken_);
    };
    ListContextStoresRequest() = default ;
    ListContextStoresRequest(const ListContextStoresRequest &) = default ;
    ListContextStoresRequest(ListContextStoresRequest &&) = default ;
    ListContextStoresRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListContextStoresRequest() = default ;
    ListContextStoresRequest& operator=(const ListContextStoresRequest &) = default ;
    ListContextStoresRequest& operator=(ListContextStoresRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->contextStoreName_ == nullptr
        && this->contextType_ == nullptr && this->maxResults_ == nullptr && this->nextToken_ == nullptr; };
    // contextStoreName Field Functions 
    bool hasContextStoreName() const { return this->contextStoreName_ != nullptr;};
    void deleteContextStoreName() { this->contextStoreName_ = nullptr;};
    inline string getContextStoreName() const { DARABONBA_PTR_GET_DEFAULT(contextStoreName_, "") };
    inline ListContextStoresRequest& setContextStoreName(string contextStoreName) { DARABONBA_PTR_SET_VALUE(contextStoreName_, contextStoreName) };


    // contextType Field Functions 
    bool hasContextType() const { return this->contextType_ != nullptr;};
    void deleteContextType() { this->contextType_ = nullptr;};
    inline string getContextType() const { DARABONBA_PTR_GET_DEFAULT(contextType_, "") };
    inline ListContextStoresRequest& setContextType(string contextType) { DARABONBA_PTR_SET_VALUE(contextType_, contextType) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListContextStoresRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListContextStoresRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


  protected:
    shared_ptr<string> contextStoreName_ {};
    shared_ptr<string> contextType_ {};
    shared_ptr<int32_t> maxResults_ {};
    shared_ptr<string> nextToken_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
