// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTHTTPAPIOPERATIONSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTHTTPAPIOPERATIONSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class ListHttpApiOperationsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListHttpApiOperationsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(consumerAuthorizationRuleId, consumerAuthorizationRuleId_);
      DARABONBA_PTR_TO_JSON(enableAuth, enableAuth_);
      DARABONBA_PTR_TO_JSON(forDeploy, forDeploy_);
      DARABONBA_PTR_TO_JSON(gatewayId, gatewayId_);
      DARABONBA_PTR_TO_JSON(method, method_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(nameLike, nameLike_);
      DARABONBA_PTR_TO_JSON(pageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(pageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(pathLike, pathLike_);
      DARABONBA_PTR_TO_JSON(withConsumerInEnvironmentId, withConsumerInEnvironmentId_);
      DARABONBA_PTR_TO_JSON(withConsumerInfoById, withConsumerInfoById_);
      DARABONBA_PTR_TO_JSON(withPluginAttachmentByPluginId, withPluginAttachmentByPluginId_);
    };
    friend void from_json(const Darabonba::Json& j, ListHttpApiOperationsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(consumerAuthorizationRuleId, consumerAuthorizationRuleId_);
      DARABONBA_PTR_FROM_JSON(enableAuth, enableAuth_);
      DARABONBA_PTR_FROM_JSON(forDeploy, forDeploy_);
      DARABONBA_PTR_FROM_JSON(gatewayId, gatewayId_);
      DARABONBA_PTR_FROM_JSON(method, method_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(nameLike, nameLike_);
      DARABONBA_PTR_FROM_JSON(pageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(pageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(pathLike, pathLike_);
      DARABONBA_PTR_FROM_JSON(withConsumerInEnvironmentId, withConsumerInEnvironmentId_);
      DARABONBA_PTR_FROM_JSON(withConsumerInfoById, withConsumerInfoById_);
      DARABONBA_PTR_FROM_JSON(withPluginAttachmentByPluginId, withPluginAttachmentByPluginId_);
    };
    ListHttpApiOperationsRequest() = default ;
    ListHttpApiOperationsRequest(const ListHttpApiOperationsRequest &) = default ;
    ListHttpApiOperationsRequest(ListHttpApiOperationsRequest &&) = default ;
    ListHttpApiOperationsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListHttpApiOperationsRequest() = default ;
    ListHttpApiOperationsRequest& operator=(const ListHttpApiOperationsRequest &) = default ;
    ListHttpApiOperationsRequest& operator=(ListHttpApiOperationsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->consumerAuthorizationRuleId_ == nullptr
        && this->enableAuth_ == nullptr && this->forDeploy_ == nullptr && this->gatewayId_ == nullptr && this->method_ == nullptr && this->name_ == nullptr
        && this->nameLike_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->pathLike_ == nullptr && this->withConsumerInEnvironmentId_ == nullptr
        && this->withConsumerInfoById_ == nullptr && this->withPluginAttachmentByPluginId_ == nullptr; };
    // consumerAuthorizationRuleId Field Functions 
    bool hasConsumerAuthorizationRuleId() const { return this->consumerAuthorizationRuleId_ != nullptr;};
    void deleteConsumerAuthorizationRuleId() { this->consumerAuthorizationRuleId_ = nullptr;};
    inline string getConsumerAuthorizationRuleId() const { DARABONBA_PTR_GET_DEFAULT(consumerAuthorizationRuleId_, "") };
    inline ListHttpApiOperationsRequest& setConsumerAuthorizationRuleId(string consumerAuthorizationRuleId) { DARABONBA_PTR_SET_VALUE(consumerAuthorizationRuleId_, consumerAuthorizationRuleId) };


    // enableAuth Field Functions 
    bool hasEnableAuth() const { return this->enableAuth_ != nullptr;};
    void deleteEnableAuth() { this->enableAuth_ = nullptr;};
    inline bool getEnableAuth() const { DARABONBA_PTR_GET_DEFAULT(enableAuth_, false) };
    inline ListHttpApiOperationsRequest& setEnableAuth(bool enableAuth) { DARABONBA_PTR_SET_VALUE(enableAuth_, enableAuth) };


    // forDeploy Field Functions 
    bool hasForDeploy() const { return this->forDeploy_ != nullptr;};
    void deleteForDeploy() { this->forDeploy_ = nullptr;};
    inline bool getForDeploy() const { DARABONBA_PTR_GET_DEFAULT(forDeploy_, false) };
    inline ListHttpApiOperationsRequest& setForDeploy(bool forDeploy) { DARABONBA_PTR_SET_VALUE(forDeploy_, forDeploy) };


    // gatewayId Field Functions 
    bool hasGatewayId() const { return this->gatewayId_ != nullptr;};
    void deleteGatewayId() { this->gatewayId_ = nullptr;};
    inline string getGatewayId() const { DARABONBA_PTR_GET_DEFAULT(gatewayId_, "") };
    inline ListHttpApiOperationsRequest& setGatewayId(string gatewayId) { DARABONBA_PTR_SET_VALUE(gatewayId_, gatewayId) };


    // method Field Functions 
    bool hasMethod() const { return this->method_ != nullptr;};
    void deleteMethod() { this->method_ = nullptr;};
    inline string getMethod() const { DARABONBA_PTR_GET_DEFAULT(method_, "") };
    inline ListHttpApiOperationsRequest& setMethod(string method) { DARABONBA_PTR_SET_VALUE(method_, method) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListHttpApiOperationsRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // nameLike Field Functions 
    bool hasNameLike() const { return this->nameLike_ != nullptr;};
    void deleteNameLike() { this->nameLike_ = nullptr;};
    inline string getNameLike() const { DARABONBA_PTR_GET_DEFAULT(nameLike_, "") };
    inline ListHttpApiOperationsRequest& setNameLike(string nameLike) { DARABONBA_PTR_SET_VALUE(nameLike_, nameLike) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListHttpApiOperationsRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListHttpApiOperationsRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // pathLike Field Functions 
    bool hasPathLike() const { return this->pathLike_ != nullptr;};
    void deletePathLike() { this->pathLike_ = nullptr;};
    inline string getPathLike() const { DARABONBA_PTR_GET_DEFAULT(pathLike_, "") };
    inline ListHttpApiOperationsRequest& setPathLike(string pathLike) { DARABONBA_PTR_SET_VALUE(pathLike_, pathLike) };


    // withConsumerInEnvironmentId Field Functions 
    bool hasWithConsumerInEnvironmentId() const { return this->withConsumerInEnvironmentId_ != nullptr;};
    void deleteWithConsumerInEnvironmentId() { this->withConsumerInEnvironmentId_ = nullptr;};
    inline string getWithConsumerInEnvironmentId() const { DARABONBA_PTR_GET_DEFAULT(withConsumerInEnvironmentId_, "") };
    inline ListHttpApiOperationsRequest& setWithConsumerInEnvironmentId(string withConsumerInEnvironmentId) { DARABONBA_PTR_SET_VALUE(withConsumerInEnvironmentId_, withConsumerInEnvironmentId) };


    // withConsumerInfoById Field Functions 
    bool hasWithConsumerInfoById() const { return this->withConsumerInfoById_ != nullptr;};
    void deleteWithConsumerInfoById() { this->withConsumerInfoById_ = nullptr;};
    inline string getWithConsumerInfoById() const { DARABONBA_PTR_GET_DEFAULT(withConsumerInfoById_, "") };
    inline ListHttpApiOperationsRequest& setWithConsumerInfoById(string withConsumerInfoById) { DARABONBA_PTR_SET_VALUE(withConsumerInfoById_, withConsumerInfoById) };


    // withPluginAttachmentByPluginId Field Functions 
    bool hasWithPluginAttachmentByPluginId() const { return this->withPluginAttachmentByPluginId_ != nullptr;};
    void deleteWithPluginAttachmentByPluginId() { this->withPluginAttachmentByPluginId_ = nullptr;};
    inline string getWithPluginAttachmentByPluginId() const { DARABONBA_PTR_GET_DEFAULT(withPluginAttachmentByPluginId_, "") };
    inline ListHttpApiOperationsRequest& setWithPluginAttachmentByPluginId(string withPluginAttachmentByPluginId) { DARABONBA_PTR_SET_VALUE(withPluginAttachmentByPluginId_, withPluginAttachmentByPluginId) };


  protected:
    // The consumer authorization rule ID used to filter the API operation list. The response includes only authorized API operations.
    shared_ptr<string> consumerAuthorizationRuleId_ {};
    // Specifies whether to filter by authentication enablement status.
    shared_ptr<bool> enableAuth_ {};
    // Specifies whether the request is for a deployment scenario.
    shared_ptr<bool> forDeploy_ {};
    // The gateway ID used to filter results.
    shared_ptr<string> gatewayId_ {};
    // Lists API operations by HTTP method.
    shared_ptr<string> method_ {};
    // Searches for API operations by exact name match.
    shared_ptr<string> name_ {};
    // Searches for API operations by name prefix.
    shared_ptr<string> nameLike_ {};
    // The page number to return. Pages start from 1. Default value: 1.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries per page. Valid values: 1 to 100. Default value: 10.
    shared_ptr<int32_t> pageSize_ {};
    // Searches for API operations by path prefix match.
    shared_ptr<string> pathLike_ {};
    // The environment ID. When specified, the response includes the authorization rule list of the specified consumer under the specified environment for each API operation. You must also specify the withConsumerInfoById parameter.
    shared_ptr<string> withConsumerInEnvironmentId_ {};
    // The consumer ID. When specified, the response includes the authorization rule list of the specified consumer under the specified environment for each API operation. You must also specify the withConsumerInEnvironmentId parameter.
    shared_ptr<string> withConsumerInfoById_ {};
    // The plug-in ID used to retrieve plug-in publishing information.
    shared_ptr<string> withPluginAttachmentByPluginId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
