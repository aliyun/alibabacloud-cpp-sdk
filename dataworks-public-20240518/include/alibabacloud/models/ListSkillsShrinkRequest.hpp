// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSKILLSSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTSKILLSSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class ListSkillsShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSkillsShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(Q, q_);
      DARABONBA_PTR_TO_JSON(Visibility, visibilityShrink_);
    };
    friend void from_json(const Darabonba::Json& j, ListSkillsShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(Q, q_);
      DARABONBA_PTR_FROM_JSON(Visibility, visibilityShrink_);
    };
    ListSkillsShrinkRequest() = default ;
    ListSkillsShrinkRequest(const ListSkillsShrinkRequest &) = default ;
    ListSkillsShrinkRequest(ListSkillsShrinkRequest &&) = default ;
    ListSkillsShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSkillsShrinkRequest() = default ;
    ListSkillsShrinkRequest& operator=(const ListSkillsShrinkRequest &) = default ;
    ListSkillsShrinkRequest& operator=(ListSkillsShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->maxResults_ == nullptr
        && this->nextToken_ == nullptr && this->q_ == nullptr && this->visibilityShrink_ == nullptr; };
    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListSkillsShrinkRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListSkillsShrinkRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // q Field Functions 
    bool hasQ() const { return this->q_ != nullptr;};
    void deleteQ() { this->q_ = nullptr;};
    inline string getQ() const { DARABONBA_PTR_GET_DEFAULT(q_, "") };
    inline ListSkillsShrinkRequest& setQ(string q) { DARABONBA_PTR_SET_VALUE(q_, q) };


    // visibilityShrink Field Functions 
    bool hasVisibilityShrink() const { return this->visibilityShrink_ != nullptr;};
    void deleteVisibilityShrink() { this->visibilityShrink_ = nullptr;};
    inline string getVisibilityShrink() const { DARABONBA_PTR_GET_DEFAULT(visibilityShrink_, "") };
    inline ListSkillsShrinkRequest& setVisibilityShrink(string visibilityShrink) { DARABONBA_PTR_SET_VALUE(visibilityShrink_, visibilityShrink) };


  protected:
    // The maximum number of results to return per page.
    shared_ptr<int32_t> maxResults_ {};
    // The pagination token for the next page of results. Omit this for the first request. For subsequent requests, set this to the `NextToken` from the previous response.
    shared_ptr<string> nextToken_ {};
    // The search keyword for a fuzzy match on Skill names.
    shared_ptr<string> q_ {};
    // Filters the results by visibility level. You can specify multiple values.
    shared_ptr<string> visibilityShrink_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
