// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTHTTPAPISREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTHTTPAPISREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class ListHttpApisRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListHttpApisRequest& obj) { 
      DARABONBA_PTR_TO_JSON(gatewayId, gatewayId_);
      DARABONBA_PTR_TO_JSON(gatewayType, gatewayType_);
      DARABONBA_PTR_TO_JSON(keyword, keyword_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(pageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(pageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(resourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(types, types_);
      DARABONBA_PTR_TO_JSON(withAPIsPublishedToEnvironment, withAPIsPublishedToEnvironment_);
      DARABONBA_PTR_TO_JSON(withAuthPolicyInEnvironmentId, withAuthPolicyInEnvironmentId_);
      DARABONBA_PTR_TO_JSON(withAuthPolicyList, withAuthPolicyList_);
      DARABONBA_PTR_TO_JSON(withConsumerInfoById, withConsumerInfoById_);
      DARABONBA_PTR_TO_JSON(withEnvironmentInfo, withEnvironmentInfo_);
      DARABONBA_PTR_TO_JSON(withEnvironmentInfoById, withEnvironmentInfoById_);
      DARABONBA_PTR_TO_JSON(withIngressInfo, withIngressInfo_);
      DARABONBA_PTR_TO_JSON(withPluginAttachmentByPluginId, withPluginAttachmentByPluginId_);
      DARABONBA_PTR_TO_JSON(withPolicyConfigs, withPolicyConfigs_);
    };
    friend void from_json(const Darabonba::Json& j, ListHttpApisRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(gatewayId, gatewayId_);
      DARABONBA_PTR_FROM_JSON(gatewayType, gatewayType_);
      DARABONBA_PTR_FROM_JSON(keyword, keyword_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(pageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(pageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(resourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(types, types_);
      DARABONBA_PTR_FROM_JSON(withAPIsPublishedToEnvironment, withAPIsPublishedToEnvironment_);
      DARABONBA_PTR_FROM_JSON(withAuthPolicyInEnvironmentId, withAuthPolicyInEnvironmentId_);
      DARABONBA_PTR_FROM_JSON(withAuthPolicyList, withAuthPolicyList_);
      DARABONBA_PTR_FROM_JSON(withConsumerInfoById, withConsumerInfoById_);
      DARABONBA_PTR_FROM_JSON(withEnvironmentInfo, withEnvironmentInfo_);
      DARABONBA_PTR_FROM_JSON(withEnvironmentInfoById, withEnvironmentInfoById_);
      DARABONBA_PTR_FROM_JSON(withIngressInfo, withIngressInfo_);
      DARABONBA_PTR_FROM_JSON(withPluginAttachmentByPluginId, withPluginAttachmentByPluginId_);
      DARABONBA_PTR_FROM_JSON(withPolicyConfigs, withPolicyConfigs_);
    };
    ListHttpApisRequest() = default ;
    ListHttpApisRequest(const ListHttpApisRequest &) = default ;
    ListHttpApisRequest(ListHttpApisRequest &&) = default ;
    ListHttpApisRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListHttpApisRequest() = default ;
    ListHttpApisRequest& operator=(const ListHttpApisRequest &) = default ;
    ListHttpApisRequest& operator=(ListHttpApisRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->gatewayId_ == nullptr
        && this->gatewayType_ == nullptr && this->keyword_ == nullptr && this->name_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr
        && this->resourceGroupId_ == nullptr && this->types_ == nullptr && this->withAPIsPublishedToEnvironment_ == nullptr && this->withAuthPolicyInEnvironmentId_ == nullptr && this->withAuthPolicyList_ == nullptr
        && this->withConsumerInfoById_ == nullptr && this->withEnvironmentInfo_ == nullptr && this->withEnvironmentInfoById_ == nullptr && this->withIngressInfo_ == nullptr && this->withPluginAttachmentByPluginId_ == nullptr
        && this->withPolicyConfigs_ == nullptr; };
    // gatewayId Field Functions 
    bool hasGatewayId() const { return this->gatewayId_ != nullptr;};
    void deleteGatewayId() { this->gatewayId_ = nullptr;};
    inline string getGatewayId() const { DARABONBA_PTR_GET_DEFAULT(gatewayId_, "") };
    inline ListHttpApisRequest& setGatewayId(string gatewayId) { DARABONBA_PTR_SET_VALUE(gatewayId_, gatewayId) };


    // gatewayType Field Functions 
    bool hasGatewayType() const { return this->gatewayType_ != nullptr;};
    void deleteGatewayType() { this->gatewayType_ = nullptr;};
    inline string getGatewayType() const { DARABONBA_PTR_GET_DEFAULT(gatewayType_, "") };
    inline ListHttpApisRequest& setGatewayType(string gatewayType) { DARABONBA_PTR_SET_VALUE(gatewayType_, gatewayType) };


    // keyword Field Functions 
    bool hasKeyword() const { return this->keyword_ != nullptr;};
    void deleteKeyword() { this->keyword_ = nullptr;};
    inline string getKeyword() const { DARABONBA_PTR_GET_DEFAULT(keyword_, "") };
    inline ListHttpApisRequest& setKeyword(string keyword) { DARABONBA_PTR_SET_VALUE(keyword_, keyword) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListHttpApisRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListHttpApisRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListHttpApisRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline ListHttpApisRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // types Field Functions 
    bool hasTypes() const { return this->types_ != nullptr;};
    void deleteTypes() { this->types_ = nullptr;};
    inline string getTypes() const { DARABONBA_PTR_GET_DEFAULT(types_, "") };
    inline ListHttpApisRequest& setTypes(string types) { DARABONBA_PTR_SET_VALUE(types_, types) };


    // withAPIsPublishedToEnvironment Field Functions 
    bool hasWithAPIsPublishedToEnvironment() const { return this->withAPIsPublishedToEnvironment_ != nullptr;};
    void deleteWithAPIsPublishedToEnvironment() { this->withAPIsPublishedToEnvironment_ = nullptr;};
    inline bool getWithAPIsPublishedToEnvironment() const { DARABONBA_PTR_GET_DEFAULT(withAPIsPublishedToEnvironment_, false) };
    inline ListHttpApisRequest& setWithAPIsPublishedToEnvironment(bool withAPIsPublishedToEnvironment) { DARABONBA_PTR_SET_VALUE(withAPIsPublishedToEnvironment_, withAPIsPublishedToEnvironment) };


    // withAuthPolicyInEnvironmentId Field Functions 
    bool hasWithAuthPolicyInEnvironmentId() const { return this->withAuthPolicyInEnvironmentId_ != nullptr;};
    void deleteWithAuthPolicyInEnvironmentId() { this->withAuthPolicyInEnvironmentId_ = nullptr;};
    inline string getWithAuthPolicyInEnvironmentId() const { DARABONBA_PTR_GET_DEFAULT(withAuthPolicyInEnvironmentId_, "") };
    inline ListHttpApisRequest& setWithAuthPolicyInEnvironmentId(string withAuthPolicyInEnvironmentId) { DARABONBA_PTR_SET_VALUE(withAuthPolicyInEnvironmentId_, withAuthPolicyInEnvironmentId) };


    // withAuthPolicyList Field Functions 
    bool hasWithAuthPolicyList() const { return this->withAuthPolicyList_ != nullptr;};
    void deleteWithAuthPolicyList() { this->withAuthPolicyList_ = nullptr;};
    inline bool getWithAuthPolicyList() const { DARABONBA_PTR_GET_DEFAULT(withAuthPolicyList_, false) };
    inline ListHttpApisRequest& setWithAuthPolicyList(bool withAuthPolicyList) { DARABONBA_PTR_SET_VALUE(withAuthPolicyList_, withAuthPolicyList) };


    // withConsumerInfoById Field Functions 
    bool hasWithConsumerInfoById() const { return this->withConsumerInfoById_ != nullptr;};
    void deleteWithConsumerInfoById() { this->withConsumerInfoById_ = nullptr;};
    inline string getWithConsumerInfoById() const { DARABONBA_PTR_GET_DEFAULT(withConsumerInfoById_, "") };
    inline ListHttpApisRequest& setWithConsumerInfoById(string withConsumerInfoById) { DARABONBA_PTR_SET_VALUE(withConsumerInfoById_, withConsumerInfoById) };


    // withEnvironmentInfo Field Functions 
    bool hasWithEnvironmentInfo() const { return this->withEnvironmentInfo_ != nullptr;};
    void deleteWithEnvironmentInfo() { this->withEnvironmentInfo_ = nullptr;};
    inline bool getWithEnvironmentInfo() const { DARABONBA_PTR_GET_DEFAULT(withEnvironmentInfo_, false) };
    inline ListHttpApisRequest& setWithEnvironmentInfo(bool withEnvironmentInfo) { DARABONBA_PTR_SET_VALUE(withEnvironmentInfo_, withEnvironmentInfo) };


    // withEnvironmentInfoById Field Functions 
    bool hasWithEnvironmentInfoById() const { return this->withEnvironmentInfoById_ != nullptr;};
    void deleteWithEnvironmentInfoById() { this->withEnvironmentInfoById_ = nullptr;};
    inline string getWithEnvironmentInfoById() const { DARABONBA_PTR_GET_DEFAULT(withEnvironmentInfoById_, "") };
    inline ListHttpApisRequest& setWithEnvironmentInfoById(string withEnvironmentInfoById) { DARABONBA_PTR_SET_VALUE(withEnvironmentInfoById_, withEnvironmentInfoById) };


    // withIngressInfo Field Functions 
    bool hasWithIngressInfo() const { return this->withIngressInfo_ != nullptr;};
    void deleteWithIngressInfo() { this->withIngressInfo_ = nullptr;};
    inline bool getWithIngressInfo() const { DARABONBA_PTR_GET_DEFAULT(withIngressInfo_, false) };
    inline ListHttpApisRequest& setWithIngressInfo(bool withIngressInfo) { DARABONBA_PTR_SET_VALUE(withIngressInfo_, withIngressInfo) };


    // withPluginAttachmentByPluginId Field Functions 
    bool hasWithPluginAttachmentByPluginId() const { return this->withPluginAttachmentByPluginId_ != nullptr;};
    void deleteWithPluginAttachmentByPluginId() { this->withPluginAttachmentByPluginId_ = nullptr;};
    inline string getWithPluginAttachmentByPluginId() const { DARABONBA_PTR_GET_DEFAULT(withPluginAttachmentByPluginId_, "") };
    inline ListHttpApisRequest& setWithPluginAttachmentByPluginId(string withPluginAttachmentByPluginId) { DARABONBA_PTR_SET_VALUE(withPluginAttachmentByPluginId_, withPluginAttachmentByPluginId) };


    // withPolicyConfigs Field Functions 
    bool hasWithPolicyConfigs() const { return this->withPolicyConfigs_ != nullptr;};
    void deleteWithPolicyConfigs() { this->withPolicyConfigs_ = nullptr;};
    inline bool getWithPolicyConfigs() const { DARABONBA_PTR_GET_DEFAULT(withPolicyConfigs_, false) };
    inline ListHttpApisRequest& setWithPolicyConfigs(bool withPolicyConfigs) { DARABONBA_PTR_SET_VALUE(withPolicyConfigs_, withPolicyConfigs) };


  protected:
    // Specifies whether to include policy configurations.
    shared_ptr<string> gatewayId_ {};
    // The API information.
    shared_ptr<string> gatewayType_ {};
    // The consumer authentication policy in the specified environment in each returned API.
    shared_ptr<string> keyword_ {};
    // Specifies whether authentication is enabled.
    shared_ptr<string> name_ {};
    // The environment information.
    shared_ptr<int32_t> pageNumber_ {};
    // The resource group ID.
    shared_ptr<int32_t> pageSize_ {};
    // The returned message.
    shared_ptr<string> resourceGroupId_ {};
    // The Ingress information.
    shared_ptr<string> types_ {};
    // Whether to return all APIs published to a specific environment
    shared_ptr<bool> withAPIsPublishedToEnvironment_ {};
    // The gateway type to filter. Valid values: **AI** and **API**.
    shared_ptr<string> withAuthPolicyInEnvironmentId_ {};
    // The page number of the returned page.
    shared_ptr<bool> withAuthPolicyList_ {};
    // The response body.
    shared_ptr<string> withConsumerInfoById_ {};
    // The request ID.
    shared_ptr<bool> withEnvironmentInfo_ {};
    // The APIs.
    shared_ptr<string> withEnvironmentInfoById_ {};
    // The number of entries per page.
    shared_ptr<bool> withIngressInfo_ {};
    // The status code.
    shared_ptr<string> withPluginAttachmentByPluginId_ {};
    // The total number of entries returned.
    shared_ptr<bool> withPolicyConfigs_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
