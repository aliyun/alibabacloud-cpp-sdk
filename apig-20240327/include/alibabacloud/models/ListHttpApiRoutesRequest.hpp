// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTHTTPAPIROUTESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTHTTPAPIROUTESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class ListHttpApiRoutesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListHttpApiRoutesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(consumerAuthorizationRuleId, consumerAuthorizationRuleId_);
      DARABONBA_PTR_TO_JSON(deployStatuses, deployStatuses_);
      DARABONBA_PTR_TO_JSON(domainId, domainId_);
      DARABONBA_PTR_TO_JSON(environmentId, environmentId_);
      DARABONBA_PTR_TO_JSON(forDeploy, forDeploy_);
      DARABONBA_PTR_TO_JSON(gatewayId, gatewayId_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(nameLike, nameLike_);
      DARABONBA_PTR_TO_JSON(pageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(pageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(pathLike, pathLike_);
      DARABONBA_PTR_TO_JSON(withAuthPolicyInfo, withAuthPolicyInfo_);
      DARABONBA_PTR_TO_JSON(withConsumerInfoById, withConsumerInfoById_);
      DARABONBA_PTR_TO_JSON(withPluginAttachmentByPluginId, withPluginAttachmentByPluginId_);
    };
    friend void from_json(const Darabonba::Json& j, ListHttpApiRoutesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(consumerAuthorizationRuleId, consumerAuthorizationRuleId_);
      DARABONBA_PTR_FROM_JSON(deployStatuses, deployStatuses_);
      DARABONBA_PTR_FROM_JSON(domainId, domainId_);
      DARABONBA_PTR_FROM_JSON(environmentId, environmentId_);
      DARABONBA_PTR_FROM_JSON(forDeploy, forDeploy_);
      DARABONBA_PTR_FROM_JSON(gatewayId, gatewayId_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(nameLike, nameLike_);
      DARABONBA_PTR_FROM_JSON(pageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(pageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(pathLike, pathLike_);
      DARABONBA_PTR_FROM_JSON(withAuthPolicyInfo, withAuthPolicyInfo_);
      DARABONBA_PTR_FROM_JSON(withConsumerInfoById, withConsumerInfoById_);
      DARABONBA_PTR_FROM_JSON(withPluginAttachmentByPluginId, withPluginAttachmentByPluginId_);
    };
    ListHttpApiRoutesRequest() = default ;
    ListHttpApiRoutesRequest(const ListHttpApiRoutesRequest &) = default ;
    ListHttpApiRoutesRequest(ListHttpApiRoutesRequest &&) = default ;
    ListHttpApiRoutesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListHttpApiRoutesRequest() = default ;
    ListHttpApiRoutesRequest& operator=(const ListHttpApiRoutesRequest &) = default ;
    ListHttpApiRoutesRequest& operator=(ListHttpApiRoutesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->consumerAuthorizationRuleId_ == nullptr
        && return this->deployStatuses_ == nullptr && return this->domainId_ == nullptr && return this->environmentId_ == nullptr && return this->forDeploy_ == nullptr && return this->gatewayId_ == nullptr
        && return this->name_ == nullptr && return this->nameLike_ == nullptr && return this->pageNumber_ == nullptr && return this->pageSize_ == nullptr && return this->pathLike_ == nullptr
        && return this->withAuthPolicyInfo_ == nullptr && return this->withConsumerInfoById_ == nullptr && return this->withPluginAttachmentByPluginId_ == nullptr; };
    // consumerAuthorizationRuleId Field Functions 
    bool hasConsumerAuthorizationRuleId() const { return this->consumerAuthorizationRuleId_ != nullptr;};
    void deleteConsumerAuthorizationRuleId() { this->consumerAuthorizationRuleId_ = nullptr;};
    inline string consumerAuthorizationRuleId() const { DARABONBA_PTR_GET_DEFAULT(consumerAuthorizationRuleId_, "") };
    inline ListHttpApiRoutesRequest& setConsumerAuthorizationRuleId(string consumerAuthorizationRuleId) { DARABONBA_PTR_SET_VALUE(consumerAuthorizationRuleId_, consumerAuthorizationRuleId) };


    // deployStatuses Field Functions 
    bool hasDeployStatuses() const { return this->deployStatuses_ != nullptr;};
    void deleteDeployStatuses() { this->deployStatuses_ = nullptr;};
    inline string deployStatuses() const { DARABONBA_PTR_GET_DEFAULT(deployStatuses_, "") };
    inline ListHttpApiRoutesRequest& setDeployStatuses(string deployStatuses) { DARABONBA_PTR_SET_VALUE(deployStatuses_, deployStatuses) };


    // domainId Field Functions 
    bool hasDomainId() const { return this->domainId_ != nullptr;};
    void deleteDomainId() { this->domainId_ = nullptr;};
    inline string domainId() const { DARABONBA_PTR_GET_DEFAULT(domainId_, "") };
    inline ListHttpApiRoutesRequest& setDomainId(string domainId) { DARABONBA_PTR_SET_VALUE(domainId_, domainId) };


    // environmentId Field Functions 
    bool hasEnvironmentId() const { return this->environmentId_ != nullptr;};
    void deleteEnvironmentId() { this->environmentId_ = nullptr;};
    inline string environmentId() const { DARABONBA_PTR_GET_DEFAULT(environmentId_, "") };
    inline ListHttpApiRoutesRequest& setEnvironmentId(string environmentId) { DARABONBA_PTR_SET_VALUE(environmentId_, environmentId) };


    // forDeploy Field Functions 
    bool hasForDeploy() const { return this->forDeploy_ != nullptr;};
    void deleteForDeploy() { this->forDeploy_ = nullptr;};
    inline bool forDeploy() const { DARABONBA_PTR_GET_DEFAULT(forDeploy_, false) };
    inline ListHttpApiRoutesRequest& setForDeploy(bool forDeploy) { DARABONBA_PTR_SET_VALUE(forDeploy_, forDeploy) };


    // gatewayId Field Functions 
    bool hasGatewayId() const { return this->gatewayId_ != nullptr;};
    void deleteGatewayId() { this->gatewayId_ = nullptr;};
    inline string gatewayId() const { DARABONBA_PTR_GET_DEFAULT(gatewayId_, "") };
    inline ListHttpApiRoutesRequest& setGatewayId(string gatewayId) { DARABONBA_PTR_SET_VALUE(gatewayId_, gatewayId) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListHttpApiRoutesRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // nameLike Field Functions 
    bool hasNameLike() const { return this->nameLike_ != nullptr;};
    void deleteNameLike() { this->nameLike_ = nullptr;};
    inline string nameLike() const { DARABONBA_PTR_GET_DEFAULT(nameLike_, "") };
    inline ListHttpApiRoutesRequest& setNameLike(string nameLike) { DARABONBA_PTR_SET_VALUE(nameLike_, nameLike) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListHttpApiRoutesRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListHttpApiRoutesRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // pathLike Field Functions 
    bool hasPathLike() const { return this->pathLike_ != nullptr;};
    void deletePathLike() { this->pathLike_ = nullptr;};
    inline string pathLike() const { DARABONBA_PTR_GET_DEFAULT(pathLike_, "") };
    inline ListHttpApiRoutesRequest& setPathLike(string pathLike) { DARABONBA_PTR_SET_VALUE(pathLike_, pathLike) };


    // withAuthPolicyInfo Field Functions 
    bool hasWithAuthPolicyInfo() const { return this->withAuthPolicyInfo_ != nullptr;};
    void deleteWithAuthPolicyInfo() { this->withAuthPolicyInfo_ = nullptr;};
    inline bool withAuthPolicyInfo() const { DARABONBA_PTR_GET_DEFAULT(withAuthPolicyInfo_, false) };
    inline ListHttpApiRoutesRequest& setWithAuthPolicyInfo(bool withAuthPolicyInfo) { DARABONBA_PTR_SET_VALUE(withAuthPolicyInfo_, withAuthPolicyInfo) };


    // withConsumerInfoById Field Functions 
    bool hasWithConsumerInfoById() const { return this->withConsumerInfoById_ != nullptr;};
    void deleteWithConsumerInfoById() { this->withConsumerInfoById_ = nullptr;};
    inline string withConsumerInfoById() const { DARABONBA_PTR_GET_DEFAULT(withConsumerInfoById_, "") };
    inline ListHttpApiRoutesRequest& setWithConsumerInfoById(string withConsumerInfoById) { DARABONBA_PTR_SET_VALUE(withConsumerInfoById_, withConsumerInfoById) };


    // withPluginAttachmentByPluginId Field Functions 
    bool hasWithPluginAttachmentByPluginId() const { return this->withPluginAttachmentByPluginId_ != nullptr;};
    void deleteWithPluginAttachmentByPluginId() { this->withPluginAttachmentByPluginId_ = nullptr;};
    inline string withPluginAttachmentByPluginId() const { DARABONBA_PTR_GET_DEFAULT(withPluginAttachmentByPluginId_, "") };
    inline ListHttpApiRoutesRequest& setWithPluginAttachmentByPluginId(string withPluginAttachmentByPluginId) { DARABONBA_PTR_SET_VALUE(withPluginAttachmentByPluginId_, withPluginAttachmentByPluginId) };


  protected:
    // The string that is used to filter routes based on consumer authentication rules. Only authorized APIs are returned.
    std::shared_ptr<string> consumerAuthorizationRuleId_ = nullptr;
    // The deployment state of the route.
    // 
    // Enumerated values:
    // 
    // *   Deploying: The route is being deployed.
    // *   DeployedWithChanges: The route is deployed and modified.
    // *   Undeploying: The route is being undeployed.
    // *   NotDeployed: The route is not deployed.
    // *   Deployed: The route is deployed.
    // *   UndeployFailed: The route failed to be undeployed.
    // *   DeployFailed: The route failed to be deployed.
    std::shared_ptr<string> deployStatuses_ = nullptr;
    // Specifies to filter routes by domain ID.
    std::shared_ptr<string> domainId_ = nullptr;
    // The environment ID.
    std::shared_ptr<string> environmentId_ = nullptr;
    std::shared_ptr<bool> forDeploy_ = nullptr;
    // The ID of the Cloud-native API Gateway instance.
    std::shared_ptr<string> gatewayId_ = nullptr;
    // The route name.
    std::shared_ptr<string> name_ = nullptr;
    // The route name keyword for a fuzzy search.
    std::shared_ptr<string> nameLike_ = nullptr;
    // The page number of the page to return. Pages start from page 1. Default value: 1.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The number of entries per page. Valid values: 1 to 100. Default value: 10.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The route path keyword for a fuzzy search.
    std::shared_ptr<string> pathLike_ = nullptr;
    // The consumer authorization information in the response.
    std::shared_ptr<bool> withAuthPolicyInfo_ = nullptr;
    // The authentication rules of the specified consumer in each route returned.
    std::shared_ptr<string> withConsumerInfoById_ = nullptr;
    // The mounting information of the specified plug-in in each route returned.
    std::shared_ptr<string> withPluginAttachmentByPluginId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
