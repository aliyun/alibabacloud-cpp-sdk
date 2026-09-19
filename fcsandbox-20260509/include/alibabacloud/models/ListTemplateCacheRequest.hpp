// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTEMPLATECACHEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTTEMPLATECACHEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace FCSandbox20260509
{
namespace Models
{
  class ListTemplateCacheRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTemplateCacheRequest& obj) { 
      DARABONBA_PTR_TO_JSON(maxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(nextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(status, status_);
      DARABONBA_PTR_TO_JSON(teamID, teamID_);
      DARABONBA_PTR_TO_JSON(templateID, templateID_);
    };
    friend void from_json(const Darabonba::Json& j, ListTemplateCacheRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(maxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(nextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(status, status_);
      DARABONBA_PTR_FROM_JSON(teamID, teamID_);
      DARABONBA_PTR_FROM_JSON(templateID, templateID_);
    };
    ListTemplateCacheRequest() = default ;
    ListTemplateCacheRequest(const ListTemplateCacheRequest &) = default ;
    ListTemplateCacheRequest(ListTemplateCacheRequest &&) = default ;
    ListTemplateCacheRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTemplateCacheRequest() = default ;
    ListTemplateCacheRequest& operator=(const ListTemplateCacheRequest &) = default ;
    ListTemplateCacheRequest& operator=(ListTemplateCacheRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->maxResults_ == nullptr
        && this->nextToken_ == nullptr && this->status_ == nullptr && this->teamID_ == nullptr && this->templateID_ == nullptr; };
    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListTemplateCacheRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListTemplateCacheRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListTemplateCacheRequest& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // teamID Field Functions 
    bool hasTeamID() const { return this->teamID_ != nullptr;};
    void deleteTeamID() { this->teamID_ = nullptr;};
    inline string getTeamID() const { DARABONBA_PTR_GET_DEFAULT(teamID_, "") };
    inline ListTemplateCacheRequest& setTeamID(string teamID) { DARABONBA_PTR_SET_VALUE(teamID_, teamID) };


    // templateID Field Functions 
    bool hasTemplateID() const { return this->templateID_ != nullptr;};
    void deleteTemplateID() { this->templateID_ = nullptr;};
    inline string getTemplateID() const { DARABONBA_PTR_GET_DEFAULT(templateID_, "") };
    inline ListTemplateCacheRequest& setTemplateID(string templateID) { DARABONBA_PTR_SET_VALUE(templateID_, templateID) };


  protected:
    // The maximum number of entries per page. Default value: 20. Maximum value: 100.
    shared_ptr<int32_t> maxResults_ {};
    // The pagination token returned from the previous response.
    shared_ptr<string> nextToken_ {};
    // Filters by cache status. Valid values:
    // 
    // - InProgress
    // - Success
    // - Failed
    // - Deleting
    // - Evicted
    shared_ptr<string> status_ {};
    // The team ID.
    shared_ptr<string> teamID_ {};
    // The unique identifier of the template.
    shared_ptr<string> templateID_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace FCSandbox20260509
#endif
