// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYCONSUMERAUTHORIZATIONRULESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYCONSUMERAUTHORIZATIONRULESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class QueryConsumerAuthorizationRulesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryConsumerAuthorizationRulesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(apiNameLike, apiNameLike_);
      DARABONBA_PTR_TO_JSON(consumerId, consumerId_);
      DARABONBA_PTR_TO_JSON(consumerNameLike, consumerNameLike_);
      DARABONBA_PTR_TO_JSON(environmentId, environmentId_);
      DARABONBA_PTR_TO_JSON(groupByApi, groupByApi_);
      DARABONBA_PTR_TO_JSON(pageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(pageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(parentResourceId, parentResourceId_);
      DARABONBA_PTR_TO_JSON(resourceId, resourceId_);
      DARABONBA_PTR_TO_JSON(resourceType, resourceType_);
      DARABONBA_PTR_TO_JSON(resourceTypes, resourceTypes_);
    };
    friend void from_json(const Darabonba::Json& j, QueryConsumerAuthorizationRulesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(apiNameLike, apiNameLike_);
      DARABONBA_PTR_FROM_JSON(consumerId, consumerId_);
      DARABONBA_PTR_FROM_JSON(consumerNameLike, consumerNameLike_);
      DARABONBA_PTR_FROM_JSON(environmentId, environmentId_);
      DARABONBA_PTR_FROM_JSON(groupByApi, groupByApi_);
      DARABONBA_PTR_FROM_JSON(pageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(pageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(parentResourceId, parentResourceId_);
      DARABONBA_PTR_FROM_JSON(resourceId, resourceId_);
      DARABONBA_PTR_FROM_JSON(resourceType, resourceType_);
      DARABONBA_PTR_FROM_JSON(resourceTypes, resourceTypes_);
    };
    QueryConsumerAuthorizationRulesRequest() = default ;
    QueryConsumerAuthorizationRulesRequest(const QueryConsumerAuthorizationRulesRequest &) = default ;
    QueryConsumerAuthorizationRulesRequest(QueryConsumerAuthorizationRulesRequest &&) = default ;
    QueryConsumerAuthorizationRulesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryConsumerAuthorizationRulesRequest() = default ;
    QueryConsumerAuthorizationRulesRequest& operator=(const QueryConsumerAuthorizationRulesRequest &) = default ;
    QueryConsumerAuthorizationRulesRequest& operator=(QueryConsumerAuthorizationRulesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->apiNameLike_ == nullptr
        && this->consumerId_ == nullptr && this->consumerNameLike_ == nullptr && this->environmentId_ == nullptr && this->groupByApi_ == nullptr && this->pageNumber_ == nullptr
        && this->pageSize_ == nullptr && this->parentResourceId_ == nullptr && this->resourceId_ == nullptr && this->resourceType_ == nullptr && this->resourceTypes_ == nullptr; };
    // apiNameLike Field Functions 
    bool hasApiNameLike() const { return this->apiNameLike_ != nullptr;};
    void deleteApiNameLike() { this->apiNameLike_ = nullptr;};
    inline string getApiNameLike() const { DARABONBA_PTR_GET_DEFAULT(apiNameLike_, "") };
    inline QueryConsumerAuthorizationRulesRequest& setApiNameLike(string apiNameLike) { DARABONBA_PTR_SET_VALUE(apiNameLike_, apiNameLike) };


    // consumerId Field Functions 
    bool hasConsumerId() const { return this->consumerId_ != nullptr;};
    void deleteConsumerId() { this->consumerId_ = nullptr;};
    inline string getConsumerId() const { DARABONBA_PTR_GET_DEFAULT(consumerId_, "") };
    inline QueryConsumerAuthorizationRulesRequest& setConsumerId(string consumerId) { DARABONBA_PTR_SET_VALUE(consumerId_, consumerId) };


    // consumerNameLike Field Functions 
    bool hasConsumerNameLike() const { return this->consumerNameLike_ != nullptr;};
    void deleteConsumerNameLike() { this->consumerNameLike_ = nullptr;};
    inline string getConsumerNameLike() const { DARABONBA_PTR_GET_DEFAULT(consumerNameLike_, "") };
    inline QueryConsumerAuthorizationRulesRequest& setConsumerNameLike(string consumerNameLike) { DARABONBA_PTR_SET_VALUE(consumerNameLike_, consumerNameLike) };


    // environmentId Field Functions 
    bool hasEnvironmentId() const { return this->environmentId_ != nullptr;};
    void deleteEnvironmentId() { this->environmentId_ = nullptr;};
    inline string getEnvironmentId() const { DARABONBA_PTR_GET_DEFAULT(environmentId_, "") };
    inline QueryConsumerAuthorizationRulesRequest& setEnvironmentId(string environmentId) { DARABONBA_PTR_SET_VALUE(environmentId_, environmentId) };


    // groupByApi Field Functions 
    bool hasGroupByApi() const { return this->groupByApi_ != nullptr;};
    void deleteGroupByApi() { this->groupByApi_ = nullptr;};
    inline bool getGroupByApi() const { DARABONBA_PTR_GET_DEFAULT(groupByApi_, false) };
    inline QueryConsumerAuthorizationRulesRequest& setGroupByApi(bool groupByApi) { DARABONBA_PTR_SET_VALUE(groupByApi_, groupByApi) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline QueryConsumerAuthorizationRulesRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline QueryConsumerAuthorizationRulesRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // parentResourceId Field Functions 
    bool hasParentResourceId() const { return this->parentResourceId_ != nullptr;};
    void deleteParentResourceId() { this->parentResourceId_ = nullptr;};
    inline string getParentResourceId() const { DARABONBA_PTR_GET_DEFAULT(parentResourceId_, "") };
    inline QueryConsumerAuthorizationRulesRequest& setParentResourceId(string parentResourceId) { DARABONBA_PTR_SET_VALUE(parentResourceId_, parentResourceId) };


    // resourceId Field Functions 
    bool hasResourceId() const { return this->resourceId_ != nullptr;};
    void deleteResourceId() { this->resourceId_ = nullptr;};
    inline string getResourceId() const { DARABONBA_PTR_GET_DEFAULT(resourceId_, "") };
    inline QueryConsumerAuthorizationRulesRequest& setResourceId(string resourceId) { DARABONBA_PTR_SET_VALUE(resourceId_, resourceId) };


    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline string getResourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
    inline QueryConsumerAuthorizationRulesRequest& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


    // resourceTypes Field Functions 
    bool hasResourceTypes() const { return this->resourceTypes_ != nullptr;};
    void deleteResourceTypes() { this->resourceTypes_ = nullptr;};
    inline string getResourceTypes() const { DARABONBA_PTR_GET_DEFAULT(resourceTypes_, "") };
    inline QueryConsumerAuthorizationRulesRequest& setResourceTypes(string resourceTypes) { DARABONBA_PTR_SET_VALUE(resourceTypes_, resourceTypes) };


  protected:
    // The API name.
    shared_ptr<string> apiNameLike_ {};
    // The consumer ID.
    shared_ptr<string> consumerId_ {};
    // The consumer name.
    shared_ptr<string> consumerNameLike_ {};
    // The environment ID.
    shared_ptr<string> environmentId_ {};
    // Specifies whether to group the results by API.
    shared_ptr<bool> groupByApi_ {};
    // The number of the page to return.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries per page.
    shared_ptr<int32_t> pageSize_ {};
    // The parent resource ID.
    shared_ptr<string> parentResourceId_ {};
    // The resource ID.
    shared_ptr<string> resourceId_ {};
    // The resource type.
    shared_ptr<string> resourceType_ {};
    // The resource types.
    shared_ptr<string> resourceTypes_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
