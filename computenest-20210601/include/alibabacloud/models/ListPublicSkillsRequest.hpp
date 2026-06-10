// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPUBLICSKILLSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTPUBLICSKILLSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ComputeNest20210601
{
namespace Models
{
  class ListPublicSkillsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListPublicSkillsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Filter, filter_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NeedDownloadUrl, needDownloadUrl_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
    };
    friend void from_json(const Darabonba::Json& j, ListPublicSkillsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Filter, filter_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NeedDownloadUrl, needDownloadUrl_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
    };
    ListPublicSkillsRequest() = default ;
    ListPublicSkillsRequest(const ListPublicSkillsRequest &) = default ;
    ListPublicSkillsRequest(ListPublicSkillsRequest &&) = default ;
    ListPublicSkillsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListPublicSkillsRequest() = default ;
    ListPublicSkillsRequest& operator=(const ListPublicSkillsRequest &) = default ;
    ListPublicSkillsRequest& operator=(ListPublicSkillsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Filter : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Filter& obj) { 
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(Value, value_);
      };
      friend void from_json(const Darabonba::Json& j, Filter& obj) { 
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(Value, value_);
      };
      Filter() = default ;
      Filter(const Filter &) = default ;
      Filter(Filter &&) = default ;
      Filter(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Filter() = default ;
      Filter& operator=(const Filter &) = default ;
      Filter& operator=(Filter &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->name_ == nullptr
        && this->value_ == nullptr; };
      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Filter& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // value Field Functions 
      bool hasValue() const { return this->value_ != nullptr;};
      void deleteValue() { this->value_ = nullptr;};
      inline const vector<string> & getValue() const { DARABONBA_PTR_GET_CONST(value_, vector<string>) };
      inline vector<string> getValue() { DARABONBA_PTR_GET(value_, vector<string>) };
      inline Filter& setValue(const vector<string> & value) { DARABONBA_PTR_SET_VALUE(value_, value) };
      inline Filter& setValue(vector<string> && value) { DARABONBA_PTR_SET_RVALUE(value_, value) };


    protected:
      shared_ptr<string> name_ {};
      shared_ptr<vector<string>> value_ {};
    };

    virtual bool empty() const override { return this->filter_ == nullptr
        && this->maxResults_ == nullptr && this->needDownloadUrl_ == nullptr && this->nextToken_ == nullptr; };
    // filter Field Functions 
    bool hasFilter() const { return this->filter_ != nullptr;};
    void deleteFilter() { this->filter_ = nullptr;};
    inline const vector<ListPublicSkillsRequest::Filter> & getFilter() const { DARABONBA_PTR_GET_CONST(filter_, vector<ListPublicSkillsRequest::Filter>) };
    inline vector<ListPublicSkillsRequest::Filter> getFilter() { DARABONBA_PTR_GET(filter_, vector<ListPublicSkillsRequest::Filter>) };
    inline ListPublicSkillsRequest& setFilter(const vector<ListPublicSkillsRequest::Filter> & filter) { DARABONBA_PTR_SET_VALUE(filter_, filter) };
    inline ListPublicSkillsRequest& setFilter(vector<ListPublicSkillsRequest::Filter> && filter) { DARABONBA_PTR_SET_RVALUE(filter_, filter) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListPublicSkillsRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // needDownloadUrl Field Functions 
    bool hasNeedDownloadUrl() const { return this->needDownloadUrl_ != nullptr;};
    void deleteNeedDownloadUrl() { this->needDownloadUrl_ = nullptr;};
    inline bool getNeedDownloadUrl() const { DARABONBA_PTR_GET_DEFAULT(needDownloadUrl_, false) };
    inline ListPublicSkillsRequest& setNeedDownloadUrl(bool needDownloadUrl) { DARABONBA_PTR_SET_VALUE(needDownloadUrl_, needDownloadUrl) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListPublicSkillsRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


  protected:
    shared_ptr<vector<ListPublicSkillsRequest::Filter>> filter_ {};
    shared_ptr<int32_t> maxResults_ {};
    shared_ptr<bool> needDownloadUrl_ {};
    shared_ptr<string> nextToken_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ComputeNest20210601
#endif
