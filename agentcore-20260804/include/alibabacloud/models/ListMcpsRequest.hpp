// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTMCPSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTMCPSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentCore20260804
{
namespace Models
{
  class ListMcpsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListMcpsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(maxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(nextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(searchType, searchType_);
    };
    friend void from_json(const Darabonba::Json& j, ListMcpsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(maxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(nextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(searchType, searchType_);
    };
    ListMcpsRequest() = default ;
    ListMcpsRequest(const ListMcpsRequest &) = default ;
    ListMcpsRequest(ListMcpsRequest &&) = default ;
    ListMcpsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListMcpsRequest() = default ;
    ListMcpsRequest& operator=(const ListMcpsRequest &) = default ;
    ListMcpsRequest& operator=(ListMcpsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->maxResults_ == nullptr
        && this->name_ == nullptr && this->nextToken_ == nullptr && this->searchType_ == nullptr; };
    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListMcpsRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListMcpsRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListMcpsRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // searchType Field Functions 
    bool hasSearchType() const { return this->searchType_ != nullptr;};
    void deleteSearchType() { this->searchType_ = nullptr;};
    inline string getSearchType() const { DARABONBA_PTR_GET_DEFAULT(searchType_, "") };
    inline ListMcpsRequest& setSearchType(string searchType) { DARABONBA_PTR_SET_VALUE(searchType_, searchType) };


  protected:
    // The maximum number of entries to return per page.
    shared_ptr<int32_t> maxResults_ {};
    shared_ptr<string> name_ {};
    // The pagination token for the next page.
    shared_ptr<string> nextToken_ {};
    shared_ptr<string> searchType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentCore20260804
#endif
