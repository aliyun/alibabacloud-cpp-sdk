// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAGENTSPACESSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTAGENTSPACESSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentLoop20260520
{
namespace Models
{
  class ListAgentSpacesShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAgentSpacesShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(agentSpace, agentSpace_);
      DARABONBA_PTR_TO_JSON(maxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(nextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(regionId, regionId_);
      DARABONBA_PTR_TO_JSON(tag, tagShrink_);
    };
    friend void from_json(const Darabonba::Json& j, ListAgentSpacesShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(agentSpace, agentSpace_);
      DARABONBA_PTR_FROM_JSON(maxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(nextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(regionId, regionId_);
      DARABONBA_PTR_FROM_JSON(tag, tagShrink_);
    };
    ListAgentSpacesShrinkRequest() = default ;
    ListAgentSpacesShrinkRequest(const ListAgentSpacesShrinkRequest &) = default ;
    ListAgentSpacesShrinkRequest(ListAgentSpacesShrinkRequest &&) = default ;
    ListAgentSpacesShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAgentSpacesShrinkRequest() = default ;
    ListAgentSpacesShrinkRequest& operator=(const ListAgentSpacesShrinkRequest &) = default ;
    ListAgentSpacesShrinkRequest& operator=(ListAgentSpacesShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->agentSpace_ == nullptr
        && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->regionId_ == nullptr && this->tagShrink_ == nullptr; };
    // agentSpace Field Functions 
    bool hasAgentSpace() const { return this->agentSpace_ != nullptr;};
    void deleteAgentSpace() { this->agentSpace_ = nullptr;};
    inline string getAgentSpace() const { DARABONBA_PTR_GET_DEFAULT(agentSpace_, "") };
    inline ListAgentSpacesShrinkRequest& setAgentSpace(string agentSpace) { DARABONBA_PTR_SET_VALUE(agentSpace_, agentSpace) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListAgentSpacesShrinkRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListAgentSpacesShrinkRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListAgentSpacesShrinkRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // tagShrink Field Functions 
    bool hasTagShrink() const { return this->tagShrink_ != nullptr;};
    void deleteTagShrink() { this->tagShrink_ = nullptr;};
    inline string getTagShrink() const { DARABONBA_PTR_GET_DEFAULT(tagShrink_, "") };
    inline ListAgentSpacesShrinkRequest& setTagShrink(string tagShrink) { DARABONBA_PTR_SET_VALUE(tagShrink_, tagShrink) };


  protected:
    // The name of the AgentSpace.
    shared_ptr<string> agentSpace_ {};
    // The maximum number of results.
    shared_ptr<int32_t> maxResults_ {};
    // The pagination token.
    shared_ptr<string> nextToken_ {};
    // The region ID.
    shared_ptr<string> regionId_ {};
    // Filters only active AgentSpaces in the current region. Multiple conditions use the AND operator, and keys must be unique. Omitting the value matches the existence of the key, and an empty character string is an exact match for an empty value. An empty array is equivalent to not using label filtering and retains the original cross-region resources.
    shared_ptr<string> tagShrink_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentLoop20260520
#endif
