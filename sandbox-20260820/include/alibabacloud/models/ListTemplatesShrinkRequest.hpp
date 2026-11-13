// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTEMPLATESSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTTEMPLATESSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sandbox20260820
{
namespace Models
{
  class ListTemplatesShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTemplatesShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(maxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(nextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(resourceTags, resourceTagsShrink_);
      DARABONBA_PTR_TO_JSON(teamID, teamID_);
    };
    friend void from_json(const Darabonba::Json& j, ListTemplatesShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(maxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(nextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(resourceTags, resourceTagsShrink_);
      DARABONBA_PTR_FROM_JSON(teamID, teamID_);
    };
    ListTemplatesShrinkRequest() = default ;
    ListTemplatesShrinkRequest(const ListTemplatesShrinkRequest &) = default ;
    ListTemplatesShrinkRequest(ListTemplatesShrinkRequest &&) = default ;
    ListTemplatesShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTemplatesShrinkRequest() = default ;
    ListTemplatesShrinkRequest& operator=(const ListTemplatesShrinkRequest &) = default ;
    ListTemplatesShrinkRequest& operator=(ListTemplatesShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->maxResults_ == nullptr
        && this->nextToken_ == nullptr && this->resourceTagsShrink_ == nullptr && this->teamID_ == nullptr; };
    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListTemplatesShrinkRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListTemplatesShrinkRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // resourceTagsShrink Field Functions 
    bool hasResourceTagsShrink() const { return this->resourceTagsShrink_ != nullptr;};
    void deleteResourceTagsShrink() { this->resourceTagsShrink_ = nullptr;};
    inline string getResourceTagsShrink() const { DARABONBA_PTR_GET_DEFAULT(resourceTagsShrink_, "") };
    inline ListTemplatesShrinkRequest& setResourceTagsShrink(string resourceTagsShrink) { DARABONBA_PTR_SET_VALUE(resourceTagsShrink_, resourceTagsShrink) };


    // teamID Field Functions 
    bool hasTeamID() const { return this->teamID_ != nullptr;};
    void deleteTeamID() { this->teamID_ = nullptr;};
    inline string getTeamID() const { DARABONBA_PTR_GET_DEFAULT(teamID_, "") };
    inline ListTemplatesShrinkRequest& setTeamID(string teamID) { DARABONBA_PTR_SET_VALUE(teamID_, teamID) };


  protected:
    // The maximum number of entries to return per page. Default value: 20. Maximum value: 100.
    shared_ptr<int32_t> maxResults_ {};
    // The pagination token. Use the nextToken value returned in the previous response.
    shared_ptr<string> nextToken_ {};
    // The resource tags.
    shared_ptr<string> resourceTagsShrink_ {};
    // The team ID.
    shared_ptr<string> teamID_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sandbox20260820
#endif
