// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSAVEDQUERIESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTSAVEDQUERIESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ResourceCenter20221201
{
namespace Models
{
  class ListSavedQueriesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSavedQueriesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SavedQueries, savedQueries_);
    };
    friend void from_json(const Darabonba::Json& j, ListSavedQueriesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SavedQueries, savedQueries_);
    };
    ListSavedQueriesResponseBody() = default ;
    ListSavedQueriesResponseBody(const ListSavedQueriesResponseBody &) = default ;
    ListSavedQueriesResponseBody(ListSavedQueriesResponseBody &&) = default ;
    ListSavedQueriesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSavedQueriesResponseBody() = default ;
    ListSavedQueriesResponseBody& operator=(const ListSavedQueriesResponseBody &) = default ;
    ListSavedQueriesResponseBody& operator=(ListSavedQueriesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class SavedQueries : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SavedQueries& obj) { 
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(QueryId, queryId_);
        DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
      };
      friend void from_json(const Darabonba::Json& j, SavedQueries& obj) { 
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(QueryId, queryId_);
        DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
      };
      SavedQueries() = default ;
      SavedQueries(const SavedQueries &) = default ;
      SavedQueries(SavedQueries &&) = default ;
      SavedQueries(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SavedQueries() = default ;
      SavedQueries& operator=(const SavedQueries &) = default ;
      SavedQueries& operator=(SavedQueries &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->createTime_ == nullptr
        && this->description_ == nullptr && this->name_ == nullptr && this->queryId_ == nullptr && this->updateTime_ == nullptr; };
      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline SavedQueries& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline SavedQueries& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline SavedQueries& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // queryId Field Functions 
      bool hasQueryId() const { return this->queryId_ != nullptr;};
      void deleteQueryId() { this->queryId_ = nullptr;};
      inline string getQueryId() const { DARABONBA_PTR_GET_DEFAULT(queryId_, "") };
      inline SavedQueries& setQueryId(string queryId) { DARABONBA_PTR_SET_VALUE(queryId_, queryId) };


      // updateTime Field Functions 
      bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
      void deleteUpdateTime() { this->updateTime_ = nullptr;};
      inline string getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
      inline SavedQueries& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


    protected:
      // The time when the template was created. The time is displayed in UTC.
      shared_ptr<string> createTime_ {};
      // The description of the template.
      shared_ptr<string> description_ {};
      // The template name.
      shared_ptr<string> name_ {};
      // The template ID.
      shared_ptr<string> queryId_ {};
      // The time when the template was updated. The time is displayed in UTC.
      shared_ptr<string> updateTime_ {};
    };

    virtual bool empty() const override { return this->maxResults_ == nullptr
        && this->nextToken_ == nullptr && this->requestId_ == nullptr && this->savedQueries_ == nullptr; };
    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline string getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, "") };
    inline ListSavedQueriesResponseBody& setMaxResults(string maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListSavedQueriesResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListSavedQueriesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // savedQueries Field Functions 
    bool hasSavedQueries() const { return this->savedQueries_ != nullptr;};
    void deleteSavedQueries() { this->savedQueries_ = nullptr;};
    inline const vector<ListSavedQueriesResponseBody::SavedQueries> & getSavedQueries() const { DARABONBA_PTR_GET_CONST(savedQueries_, vector<ListSavedQueriesResponseBody::SavedQueries>) };
    inline vector<ListSavedQueriesResponseBody::SavedQueries> getSavedQueries() { DARABONBA_PTR_GET(savedQueries_, vector<ListSavedQueriesResponseBody::SavedQueries>) };
    inline ListSavedQueriesResponseBody& setSavedQueries(const vector<ListSavedQueriesResponseBody::SavedQueries> & savedQueries) { DARABONBA_PTR_SET_VALUE(savedQueries_, savedQueries) };
    inline ListSavedQueriesResponseBody& setSavedQueries(vector<ListSavedQueriesResponseBody::SavedQueries> && savedQueries) { DARABONBA_PTR_SET_RVALUE(savedQueries_, savedQueries) };


  protected:
    // The maximum number of entries per page.
    shared_ptr<string> maxResults_ {};
    // The pagination token that is used in the next request to retrieve a new page of results.
    shared_ptr<string> nextToken_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The information about the custom query templates.
    shared_ptr<vector<ListSavedQueriesResponseBody::SavedQueries>> savedQueries_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ResourceCenter20221201
#endif
