// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTEGRESSPROXYCONFIGURATIONSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTEGRESSPROXYCONFIGURATIONSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EPG20260715
{
namespace Models
{
  class ListEgressProxyConfigurationsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListEgressProxyConfigurationsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EgressProxyConfigurationIds, egressProxyConfigurationIds_);
      DARABONBA_PTR_TO_JSON(EgressProxyConfigurationNames, egressProxyConfigurationNames_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(Skip, skip_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
    };
    friend void from_json(const Darabonba::Json& j, ListEgressProxyConfigurationsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EgressProxyConfigurationIds, egressProxyConfigurationIds_);
      DARABONBA_PTR_FROM_JSON(EgressProxyConfigurationNames, egressProxyConfigurationNames_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(Skip, skip_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
    };
    ListEgressProxyConfigurationsRequest() = default ;
    ListEgressProxyConfigurationsRequest(const ListEgressProxyConfigurationsRequest &) = default ;
    ListEgressProxyConfigurationsRequest(ListEgressProxyConfigurationsRequest &&) = default ;
    ListEgressProxyConfigurationsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListEgressProxyConfigurationsRequest() = default ;
    ListEgressProxyConfigurationsRequest& operator=(const ListEgressProxyConfigurationsRequest &) = default ;
    ListEgressProxyConfigurationsRequest& operator=(ListEgressProxyConfigurationsRequest &&) = default ;
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
      // The tag key. The key can be up to 128 characters in length. It cannot start with `aliyun` or `acs:`, and cannot contain `http://` or `https://`.
      shared_ptr<string> key_ {};
      // The tag value. The value can be up to 256 characters in length and cannot contain `http://` or `https://`.
      shared_ptr<string> value_ {};
    };

    virtual bool empty() const override { return this->egressProxyConfigurationIds_ == nullptr
        && this->egressProxyConfigurationNames_ == nullptr && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->resourceGroupId_ == nullptr && this->skip_ == nullptr
        && this->status_ == nullptr && this->tag_ == nullptr; };
    // egressProxyConfigurationIds Field Functions 
    bool hasEgressProxyConfigurationIds() const { return this->egressProxyConfigurationIds_ != nullptr;};
    void deleteEgressProxyConfigurationIds() { this->egressProxyConfigurationIds_ = nullptr;};
    inline const vector<string> & getEgressProxyConfigurationIds() const { DARABONBA_PTR_GET_CONST(egressProxyConfigurationIds_, vector<string>) };
    inline vector<string> getEgressProxyConfigurationIds() { DARABONBA_PTR_GET(egressProxyConfigurationIds_, vector<string>) };
    inline ListEgressProxyConfigurationsRequest& setEgressProxyConfigurationIds(const vector<string> & egressProxyConfigurationIds) { DARABONBA_PTR_SET_VALUE(egressProxyConfigurationIds_, egressProxyConfigurationIds) };
    inline ListEgressProxyConfigurationsRequest& setEgressProxyConfigurationIds(vector<string> && egressProxyConfigurationIds) { DARABONBA_PTR_SET_RVALUE(egressProxyConfigurationIds_, egressProxyConfigurationIds) };


    // egressProxyConfigurationNames Field Functions 
    bool hasEgressProxyConfigurationNames() const { return this->egressProxyConfigurationNames_ != nullptr;};
    void deleteEgressProxyConfigurationNames() { this->egressProxyConfigurationNames_ = nullptr;};
    inline const vector<string> & getEgressProxyConfigurationNames() const { DARABONBA_PTR_GET_CONST(egressProxyConfigurationNames_, vector<string>) };
    inline vector<string> getEgressProxyConfigurationNames() { DARABONBA_PTR_GET(egressProxyConfigurationNames_, vector<string>) };
    inline ListEgressProxyConfigurationsRequest& setEgressProxyConfigurationNames(const vector<string> & egressProxyConfigurationNames) { DARABONBA_PTR_SET_VALUE(egressProxyConfigurationNames_, egressProxyConfigurationNames) };
    inline ListEgressProxyConfigurationsRequest& setEgressProxyConfigurationNames(vector<string> && egressProxyConfigurationNames) { DARABONBA_PTR_SET_RVALUE(egressProxyConfigurationNames_, egressProxyConfigurationNames) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListEgressProxyConfigurationsRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListEgressProxyConfigurationsRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline ListEgressProxyConfigurationsRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // skip Field Functions 
    bool hasSkip() const { return this->skip_ != nullptr;};
    void deleteSkip() { this->skip_ = nullptr;};
    inline int32_t getSkip() const { DARABONBA_PTR_GET_DEFAULT(skip_, 0) };
    inline ListEgressProxyConfigurationsRequest& setSkip(int32_t skip) { DARABONBA_PTR_SET_VALUE(skip_, skip) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListEgressProxyConfigurationsRequest& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<ListEgressProxyConfigurationsRequest::Tag> & getTag() const { DARABONBA_PTR_GET_CONST(tag_, vector<ListEgressProxyConfigurationsRequest::Tag>) };
    inline vector<ListEgressProxyConfigurationsRequest::Tag> getTag() { DARABONBA_PTR_GET(tag_, vector<ListEgressProxyConfigurationsRequest::Tag>) };
    inline ListEgressProxyConfigurationsRequest& setTag(const vector<ListEgressProxyConfigurationsRequest::Tag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline ListEgressProxyConfigurationsRequest& setTag(vector<ListEgressProxyConfigurationsRequest::Tag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


  protected:
    // The list of egress proxy configuration IDs.
    shared_ptr<vector<string>> egressProxyConfigurationIds_ {};
    // The list of egress proxy configuration names.
    shared_ptr<vector<string>> egressProxyConfigurationNames_ {};
    // The maximum number of entries to return per page during paging in a paged query. Valid values: 0 to 1000. Default value: 20.
    shared_ptr<int32_t> maxResults_ {};
    // The token for the next query. Valid values:
    // 
    // - Leave this parameter empty for the first query or when no next query is required.
    // - If a next query is required, set this parameter to the value of NextToken returned from the previous API call.
    shared_ptr<string> nextToken_ {};
    // The ID of the resource group.
    shared_ptr<string> resourceGroupId_ {};
    // The number of entries to skip during paging in a paged query. The value must be greater than or equal to 0. Default value: 0.
    shared_ptr<int32_t> skip_ {};
    // Filters egress proxy configurations by status. Valid values:
    // 
    // - **Provisioning**: The egress proxy configuration is being created.
    // 
    // - **Available**: The egress proxy configuration is available.
    // 
    // - **Configuring**: The specifications of the egress proxy configuration are being changed.
    shared_ptr<string> status_ {};
    // The list of tags.
    shared_ptr<vector<ListEgressProxyConfigurationsRequest::Tag>> tag_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EPG20260715
#endif
