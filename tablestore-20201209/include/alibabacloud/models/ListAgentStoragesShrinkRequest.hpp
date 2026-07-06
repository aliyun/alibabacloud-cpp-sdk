// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAGENTSTORAGESSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTAGENTSTORAGESSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Tablestore20201209
{
namespace Models
{
  class ListAgentStoragesShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAgentStoragesShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AgentStorageName, agentStorageName_);
      DARABONBA_PTR_TO_JSON(AgentStorageNameList, agentStorageNameListShrink_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Tag, tagShrink_);
    };
    friend void from_json(const Darabonba::Json& j, ListAgentStoragesShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AgentStorageName, agentStorageName_);
      DARABONBA_PTR_FROM_JSON(AgentStorageNameList, agentStorageNameListShrink_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Tag, tagShrink_);
    };
    ListAgentStoragesShrinkRequest() = default ;
    ListAgentStoragesShrinkRequest(const ListAgentStoragesShrinkRequest &) = default ;
    ListAgentStoragesShrinkRequest(ListAgentStoragesShrinkRequest &&) = default ;
    ListAgentStoragesShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAgentStoragesShrinkRequest() = default ;
    ListAgentStoragesShrinkRequest& operator=(const ListAgentStoragesShrinkRequest &) = default ;
    ListAgentStoragesShrinkRequest& operator=(ListAgentStoragesShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->agentStorageName_ == nullptr
        && this->agentStorageNameListShrink_ == nullptr && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->resourceGroupId_ == nullptr && this->status_ == nullptr
        && this->tagShrink_ == nullptr; };
    // agentStorageName Field Functions 
    bool hasAgentStorageName() const { return this->agentStorageName_ != nullptr;};
    void deleteAgentStorageName() { this->agentStorageName_ = nullptr;};
    inline string getAgentStorageName() const { DARABONBA_PTR_GET_DEFAULT(agentStorageName_, "") };
    inline ListAgentStoragesShrinkRequest& setAgentStorageName(string agentStorageName) { DARABONBA_PTR_SET_VALUE(agentStorageName_, agentStorageName) };


    // agentStorageNameListShrink Field Functions 
    bool hasAgentStorageNameListShrink() const { return this->agentStorageNameListShrink_ != nullptr;};
    void deleteAgentStorageNameListShrink() { this->agentStorageNameListShrink_ = nullptr;};
    inline string getAgentStorageNameListShrink() const { DARABONBA_PTR_GET_DEFAULT(agentStorageNameListShrink_, "") };
    inline ListAgentStoragesShrinkRequest& setAgentStorageNameListShrink(string agentStorageNameListShrink) { DARABONBA_PTR_SET_VALUE(agentStorageNameListShrink_, agentStorageNameListShrink) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListAgentStoragesShrinkRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListAgentStoragesShrinkRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline ListAgentStoragesShrinkRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListAgentStoragesShrinkRequest& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // tagShrink Field Functions 
    bool hasTagShrink() const { return this->tagShrink_ != nullptr;};
    void deleteTagShrink() { this->tagShrink_ = nullptr;};
    inline string getTagShrink() const { DARABONBA_PTR_GET_DEFAULT(tagShrink_, "") };
    inline ListAgentStoragesShrinkRequest& setTagShrink(string tagShrink) { DARABONBA_PTR_SET_VALUE(tagShrink_, tagShrink) };


  protected:
    // The name of the agent storage.
    shared_ptr<string> agentStorageName_ {};
    // The list of agent storage names. Use this parameter to query multiple specified agent storages in a batch.
    shared_ptr<string> agentStorageNameListShrink_ {};
    // The maximum number of tag resources to return in this request.
    shared_ptr<int32_t> maxResults_ {};
    // The pagination token for querying subsequent pages. This parameter has a value only when not all tag resources are returned. If the total number of expected tag resources exceeds the MaxResults value, use this token to retrieve the next page.
    shared_ptr<string> nextToken_ {};
    // The ID of the resource group. You can query the ID in the Resource Group console.
    shared_ptr<string> resourceGroupId_ {};
    // The status of the agent storage.
    shared_ptr<string> status_ {};
    // The list of tags.
    shared_ptr<string> tagShrink_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Tablestore20201209
#endif
