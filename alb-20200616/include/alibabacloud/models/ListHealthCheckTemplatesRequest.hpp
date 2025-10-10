// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTHEALTHCHECKTEMPLATESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTHEALTHCHECKTEMPLATESREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListHealthCheckTemplatesRequestTag.hpp>
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
    virtual bool empty() const override { this->healthCheckTemplateIds_ != nullptr
        && this->healthCheckTemplateNames_ != nullptr && this->maxResults_ != nullptr && this->nextToken_ != nullptr && this->resourceGroupId_ != nullptr && this->tag_ != nullptr; };
    // healthCheckTemplateIds Field Functions 
    bool hasHealthCheckTemplateIds() const { return this->healthCheckTemplateIds_ != nullptr;};
    void deleteHealthCheckTemplateIds() { this->healthCheckTemplateIds_ = nullptr;};
    inline const vector<string> & healthCheckTemplateIds() const { DARABONBA_PTR_GET_CONST(healthCheckTemplateIds_, vector<string>) };
    inline vector<string> healthCheckTemplateIds() { DARABONBA_PTR_GET(healthCheckTemplateIds_, vector<string>) };
    inline ListHealthCheckTemplatesRequest& setHealthCheckTemplateIds(const vector<string> & healthCheckTemplateIds) { DARABONBA_PTR_SET_VALUE(healthCheckTemplateIds_, healthCheckTemplateIds) };
    inline ListHealthCheckTemplatesRequest& setHealthCheckTemplateIds(vector<string> && healthCheckTemplateIds) { DARABONBA_PTR_SET_RVALUE(healthCheckTemplateIds_, healthCheckTemplateIds) };


    // healthCheckTemplateNames Field Functions 
    bool hasHealthCheckTemplateNames() const { return this->healthCheckTemplateNames_ != nullptr;};
    void deleteHealthCheckTemplateNames() { this->healthCheckTemplateNames_ = nullptr;};
    inline const vector<string> & healthCheckTemplateNames() const { DARABONBA_PTR_GET_CONST(healthCheckTemplateNames_, vector<string>) };
    inline vector<string> healthCheckTemplateNames() { DARABONBA_PTR_GET(healthCheckTemplateNames_, vector<string>) };
    inline ListHealthCheckTemplatesRequest& setHealthCheckTemplateNames(const vector<string> & healthCheckTemplateNames) { DARABONBA_PTR_SET_VALUE(healthCheckTemplateNames_, healthCheckTemplateNames) };
    inline ListHealthCheckTemplatesRequest& setHealthCheckTemplateNames(vector<string> && healthCheckTemplateNames) { DARABONBA_PTR_SET_RVALUE(healthCheckTemplateNames_, healthCheckTemplateNames) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListHealthCheckTemplatesRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListHealthCheckTemplatesRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline ListHealthCheckTemplatesRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<ListHealthCheckTemplatesRequestTag> & tag() const { DARABONBA_PTR_GET_CONST(tag_, vector<ListHealthCheckTemplatesRequestTag>) };
    inline vector<ListHealthCheckTemplatesRequestTag> tag() { DARABONBA_PTR_GET(tag_, vector<ListHealthCheckTemplatesRequestTag>) };
    inline ListHealthCheckTemplatesRequest& setTag(const vector<ListHealthCheckTemplatesRequestTag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline ListHealthCheckTemplatesRequest& setTag(vector<ListHealthCheckTemplatesRequestTag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


  protected:
    // The IDs of health check templates.
    std::shared_ptr<vector<string>> healthCheckTemplateIds_ = nullptr;
    // The health check templates.
    std::shared_ptr<vector<string>> healthCheckTemplateNames_ = nullptr;
    // The number of entries to return in each call. Valid values: **1** to **100**. Default value: **20**
    std::shared_ptr<int32_t> maxResults_ = nullptr;
    // The pagination token that is used in the next request to retrieve a new page of results. Valid values:
    // 
    // *   You do not need to specify this parameter for the first request.
    // *   You must specify the token that is obtained from the previous query as the value of **NextToken**.
    std::shared_ptr<string> nextToken_ = nullptr;
    // The resource group ID. You can filter the query results based on the specified ID.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    // The tags.
    std::shared_ptr<vector<ListHealthCheckTemplatesRequestTag>> tag_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alb20200616
#endif
