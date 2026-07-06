// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAGENTSTORAGESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTAGENTSTORAGESREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Tablestore20201209
{
namespace Models
{
  class ListAgentStoragesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAgentStoragesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AgentStorageName, agentStorageName_);
      DARABONBA_PTR_TO_JSON(AgentStorageNameList, agentStorageNameList_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
    };
    friend void from_json(const Darabonba::Json& j, ListAgentStoragesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AgentStorageName, agentStorageName_);
      DARABONBA_PTR_FROM_JSON(AgentStorageNameList, agentStorageNameList_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
    };
    ListAgentStoragesRequest() = default ;
    ListAgentStoragesRequest(const ListAgentStoragesRequest &) = default ;
    ListAgentStoragesRequest(ListAgentStoragesRequest &&) = default ;
    ListAgentStoragesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAgentStoragesRequest() = default ;
    ListAgentStoragesRequest& operator=(const ListAgentStoragesRequest &) = default ;
    ListAgentStoragesRequest& operator=(ListAgentStoragesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Tag : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Tag& obj) { 
        DARABONBA_PTR_TO_JSON(Key, key_);
        DARABONBA_PTR_TO_JSON(Value, value_);
      };
      friend void from_json(const Darabonba::Json& j, Tag& obj) { 
        DARABONBA_PTR_FROM_JSON(Key, key_);
        DARABONBA_PTR_FROM_JSON(Value, value_);
      };
      Tag() = default ;
      Tag(const Tag &) = default ;
      Tag(Tag &&) = default ;
      Tag(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Tag() = default ;
      Tag& operator=(const Tag &) = default ;
      Tag& operator=(Tag &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->key_ == nullptr
        && this->value_ == nullptr; };
      // key Field Functions 
      bool hasKey() const { return this->key_ != nullptr;};
      void deleteKey() { this->key_ = nullptr;};
      inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
      inline Tag& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


      // value Field Functions 
      bool hasValue() const { return this->value_ != nullptr;};
      void deleteValue() { this->value_ = nullptr;};
      inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
      inline Tag& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


    protected:
      // The tag key.
      shared_ptr<string> key_ {};
      // The tag value.
      shared_ptr<string> value_ {};
    };

    virtual bool empty() const override { return this->agentStorageName_ == nullptr
        && this->agentStorageNameList_ == nullptr && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->resourceGroupId_ == nullptr && this->status_ == nullptr
        && this->tag_ == nullptr; };
    // agentStorageName Field Functions 
    bool hasAgentStorageName() const { return this->agentStorageName_ != nullptr;};
    void deleteAgentStorageName() { this->agentStorageName_ = nullptr;};
    inline string getAgentStorageName() const { DARABONBA_PTR_GET_DEFAULT(agentStorageName_, "") };
    inline ListAgentStoragesRequest& setAgentStorageName(string agentStorageName) { DARABONBA_PTR_SET_VALUE(agentStorageName_, agentStorageName) };


    // agentStorageNameList Field Functions 
    bool hasAgentStorageNameList() const { return this->agentStorageNameList_ != nullptr;};
    void deleteAgentStorageNameList() { this->agentStorageNameList_ = nullptr;};
    inline const vector<string> & getAgentStorageNameList() const { DARABONBA_PTR_GET_CONST(agentStorageNameList_, vector<string>) };
    inline vector<string> getAgentStorageNameList() { DARABONBA_PTR_GET(agentStorageNameList_, vector<string>) };
    inline ListAgentStoragesRequest& setAgentStorageNameList(const vector<string> & agentStorageNameList) { DARABONBA_PTR_SET_VALUE(agentStorageNameList_, agentStorageNameList) };
    inline ListAgentStoragesRequest& setAgentStorageNameList(vector<string> && agentStorageNameList) { DARABONBA_PTR_SET_RVALUE(agentStorageNameList_, agentStorageNameList) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListAgentStoragesRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListAgentStoragesRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline ListAgentStoragesRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListAgentStoragesRequest& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<ListAgentStoragesRequest::Tag> & getTag() const { DARABONBA_PTR_GET_CONST(tag_, vector<ListAgentStoragesRequest::Tag>) };
    inline vector<ListAgentStoragesRequest::Tag> getTag() { DARABONBA_PTR_GET(tag_, vector<ListAgentStoragesRequest::Tag>) };
    inline ListAgentStoragesRequest& setTag(const vector<ListAgentStoragesRequest::Tag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline ListAgentStoragesRequest& setTag(vector<ListAgentStoragesRequest::Tag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


  protected:
    // The name of the agent storage.
    shared_ptr<string> agentStorageName_ {};
    // The list of agent storage names. Use this parameter to query multiple specified agent storages in a batch.
    shared_ptr<vector<string>> agentStorageNameList_ {};
    // The maximum number of tag resources to return in this request.
    shared_ptr<int32_t> maxResults_ {};
    // The pagination token for querying subsequent pages. This parameter has a value only when not all tag resources are returned. If the total number of expected tag resources exceeds the MaxResults value, use this token to retrieve the next page.
    shared_ptr<string> nextToken_ {};
    // The ID of the resource group. You can query the ID in the Resource Group console.
    shared_ptr<string> resourceGroupId_ {};
    // The status of the agent storage.
    shared_ptr<string> status_ {};
    // The list of tags.
    shared_ptr<vector<ListAgentStoragesRequest::Tag>> tag_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Tablestore20201209
#endif
