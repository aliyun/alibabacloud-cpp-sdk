// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSKILLSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTSKILLSREQUEST_HPP_
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
  class ListSkillsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSkillsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Filter, filter_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NeedDownloadUrl, needDownloadUrl_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
    };
    friend void from_json(const Darabonba::Json& j, ListSkillsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Filter, filter_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NeedDownloadUrl, needDownloadUrl_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
    };
    ListSkillsRequest() = default ;
    ListSkillsRequest(const ListSkillsRequest &) = default ;
    ListSkillsRequest(ListSkillsRequest &&) = default ;
    ListSkillsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSkillsRequest() = default ;
    ListSkillsRequest& operator=(const ListSkillsRequest &) = default ;
    ListSkillsRequest& operator=(ListSkillsRequest &&) = default ;
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
      // The filter name. You can specify one or more names for the query. Valid values:
      // 
      // - SkillId: the skill ID. Exact match.
      // 
      // - SkillSpaceId: the SkillSpace ID. Exact match.
      // 
      // - SkillName: the skill name.
      // 
      // - MatchType: the match type that controls how SkillName is matched. Valid values: exact, prefix, and fuzzy.
      // 
      // - SkillType: the skill type. Valid values: official and custom.
      // 
      // - Keyword: keyword match for the skill name or skill description. Fuzzy match.
      // 
      // - SkillLabels: the skill labels. Fuzzy match.
      shared_ptr<string> name_ {};
      // The list of filter values. Valid values of N: 1 to 10.
      shared_ptr<vector<string>> value_ {};
    };

    virtual bool empty() const override { return this->filter_ == nullptr
        && this->maxResults_ == nullptr && this->needDownloadUrl_ == nullptr && this->nextToken_ == nullptr; };
    // filter Field Functions 
    bool hasFilter() const { return this->filter_ != nullptr;};
    void deleteFilter() { this->filter_ = nullptr;};
    inline const vector<ListSkillsRequest::Filter> & getFilter() const { DARABONBA_PTR_GET_CONST(filter_, vector<ListSkillsRequest::Filter>) };
    inline vector<ListSkillsRequest::Filter> getFilter() { DARABONBA_PTR_GET(filter_, vector<ListSkillsRequest::Filter>) };
    inline ListSkillsRequest& setFilter(const vector<ListSkillsRequest::Filter> & filter) { DARABONBA_PTR_SET_VALUE(filter_, filter) };
    inline ListSkillsRequest& setFilter(vector<ListSkillsRequest::Filter> && filter) { DARABONBA_PTR_SET_RVALUE(filter_, filter) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListSkillsRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // needDownloadUrl Field Functions 
    bool hasNeedDownloadUrl() const { return this->needDownloadUrl_ != nullptr;};
    void deleteNeedDownloadUrl() { this->needDownloadUrl_ = nullptr;};
    inline bool getNeedDownloadUrl() const { DARABONBA_PTR_GET_DEFAULT(needDownloadUrl_, false) };
    inline ListSkillsRequest& setNeedDownloadUrl(bool needDownloadUrl) { DARABONBA_PTR_SET_VALUE(needDownloadUrl_, needDownloadUrl) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListSkillsRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


  protected:
    // The filter.
    shared_ptr<vector<ListSkillsRequest::Filter>> filter_ {};
    // The maximum number of entries to return in this request.
    shared_ptr<int32_t> maxResults_ {};
    // Specifies whether to include the download URL of the skill package.
    shared_ptr<bool> needDownloadUrl_ {};
    // NextToken
    shared_ptr<string> nextToken_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ComputeNest20210601
#endif
