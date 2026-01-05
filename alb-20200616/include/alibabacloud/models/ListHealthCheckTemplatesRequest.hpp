// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTHEALTHCHECKTEMPLATESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTHEALTHCHECKTEMPLATESREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alb20200616
{
namespace Models
{
  class ListHealthCheckTemplatesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListHealthCheckTemplatesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(HealthCheckTemplateIds, healthCheckTemplateIds_);
      DARABONBA_PTR_TO_JSON(HealthCheckTemplateNames, healthCheckTemplateNames_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
    };
    friend void from_json(const Darabonba::Json& j, ListHealthCheckTemplatesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(HealthCheckTemplateIds, healthCheckTemplateIds_);
      DARABONBA_PTR_FROM_JSON(HealthCheckTemplateNames, healthCheckTemplateNames_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
    };
    ListHealthCheckTemplatesRequest() = default ;
    ListHealthCheckTemplatesRequest(const ListHealthCheckTemplatesRequest &) = default ;
    ListHealthCheckTemplatesRequest(ListHealthCheckTemplatesRequest &&) = default ;
    ListHealthCheckTemplatesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListHealthCheckTemplatesRequest() = default ;
    ListHealthCheckTemplatesRequest& operator=(const ListHealthCheckTemplatesRequest &) = default ;
    ListHealthCheckTemplatesRequest& operator=(ListHealthCheckTemplatesRequest &&) = default ;
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
      // The tag key. The tag key can be up to 128 characters in length and cannot start with `acs:` or `aliyun`. It cannot contain `http://` or `https://`.
      shared_ptr<string> key_ {};
      // The tag value. The tag value can be up to 128 characters in length and cannot start with `acs:` or `aliyun`. It cannot contain `http://` or `https://`.
      shared_ptr<string> value_ {};
    };

    virtual bool empty() const override { return this->healthCheckTemplateIds_ == nullptr
        && this->healthCheckTemplateNames_ == nullptr && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->resourceGroupId_ == nullptr && this->tag_ == nullptr; };
    // healthCheckTemplateIds Field Functions 
    bool hasHealthCheckTemplateIds() const { return this->healthCheckTemplateIds_ != nullptr;};
    void deleteHealthCheckTemplateIds() { this->healthCheckTemplateIds_ = nullptr;};
    inline const vector<string> & getHealthCheckTemplateIds() const { DARABONBA_PTR_GET_CONST(healthCheckTemplateIds_, vector<string>) };
    inline vector<string> getHealthCheckTemplateIds() { DARABONBA_PTR_GET(healthCheckTemplateIds_, vector<string>) };
    inline ListHealthCheckTemplatesRequest& setHealthCheckTemplateIds(const vector<string> & healthCheckTemplateIds) { DARABONBA_PTR_SET_VALUE(healthCheckTemplateIds_, healthCheckTemplateIds) };
    inline ListHealthCheckTemplatesRequest& setHealthCheckTemplateIds(vector<string> && healthCheckTemplateIds) { DARABONBA_PTR_SET_RVALUE(healthCheckTemplateIds_, healthCheckTemplateIds) };


    // healthCheckTemplateNames Field Functions 
    bool hasHealthCheckTemplateNames() const { return this->healthCheckTemplateNames_ != nullptr;};
    void deleteHealthCheckTemplateNames() { this->healthCheckTemplateNames_ = nullptr;};
    inline const vector<string> & getHealthCheckTemplateNames() const { DARABONBA_PTR_GET_CONST(healthCheckTemplateNames_, vector<string>) };
    inline vector<string> getHealthCheckTemplateNames() { DARABONBA_PTR_GET(healthCheckTemplateNames_, vector<string>) };
    inline ListHealthCheckTemplatesRequest& setHealthCheckTemplateNames(const vector<string> & healthCheckTemplateNames) { DARABONBA_PTR_SET_VALUE(healthCheckTemplateNames_, healthCheckTemplateNames) };
    inline ListHealthCheckTemplatesRequest& setHealthCheckTemplateNames(vector<string> && healthCheckTemplateNames) { DARABONBA_PTR_SET_RVALUE(healthCheckTemplateNames_, healthCheckTemplateNames) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListHealthCheckTemplatesRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListHealthCheckTemplatesRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline ListHealthCheckTemplatesRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<ListHealthCheckTemplatesRequest::Tag> & getTag() const { DARABONBA_PTR_GET_CONST(tag_, vector<ListHealthCheckTemplatesRequest::Tag>) };
    inline vector<ListHealthCheckTemplatesRequest::Tag> getTag() { DARABONBA_PTR_GET(tag_, vector<ListHealthCheckTemplatesRequest::Tag>) };
    inline ListHealthCheckTemplatesRequest& setTag(const vector<ListHealthCheckTemplatesRequest::Tag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline ListHealthCheckTemplatesRequest& setTag(vector<ListHealthCheckTemplatesRequest::Tag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


  protected:
    // The IDs of health check templates.
    shared_ptr<vector<string>> healthCheckTemplateIds_ {};
    // The health check templates.
    shared_ptr<vector<string>> healthCheckTemplateNames_ {};
    // The number of entries to return in each call. Valid values: **1** to **100**. Default value: **20**
    shared_ptr<int32_t> maxResults_ {};
    // The pagination token that is used in the next request to retrieve a new page of results. Valid values:
    // 
    // *   You do not need to specify this parameter for the first request.
    // *   You must specify the token that is obtained from the previous query as the value of **NextToken**.
    shared_ptr<string> nextToken_ {};
    // The resource group ID. You can filter the query results based on the specified ID.
    shared_ptr<string> resourceGroupId_ {};
    // The tags.
    shared_ptr<vector<ListHealthCheckTemplatesRequest::Tag>> tag_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alb20200616
#endif
