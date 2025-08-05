// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPLUGINATTACHMENTSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTPLUGINATTACHMENTSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class ListPluginAttachmentsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListPluginAttachmentsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(attachResourceId, attachResourceId_);
      DARABONBA_PTR_TO_JSON(attachResourceType, attachResourceType_);
      DARABONBA_PTR_TO_JSON(attachResourceTypes, attachResourceTypes_);
      DARABONBA_PTR_TO_JSON(environmentId, environmentId_);
      DARABONBA_PTR_TO_JSON(gatewayId, gatewayId_);
      DARABONBA_PTR_TO_JSON(pageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(pageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(pluginId, pluginId_);
      DARABONBA_PTR_TO_JSON(withParentResource, withParentResource_);
    };
    friend void from_json(const Darabonba::Json& j, ListPluginAttachmentsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(attachResourceId, attachResourceId_);
      DARABONBA_PTR_FROM_JSON(attachResourceType, attachResourceType_);
      DARABONBA_PTR_FROM_JSON(attachResourceTypes, attachResourceTypes_);
      DARABONBA_PTR_FROM_JSON(environmentId, environmentId_);
      DARABONBA_PTR_FROM_JSON(gatewayId, gatewayId_);
      DARABONBA_PTR_FROM_JSON(pageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(pageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(pluginId, pluginId_);
      DARABONBA_PTR_FROM_JSON(withParentResource, withParentResource_);
    };
    ListPluginAttachmentsRequest() = default ;
    ListPluginAttachmentsRequest(const ListPluginAttachmentsRequest &) = default ;
    ListPluginAttachmentsRequest(ListPluginAttachmentsRequest &&) = default ;
    ListPluginAttachmentsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListPluginAttachmentsRequest() = default ;
    ListPluginAttachmentsRequest& operator=(const ListPluginAttachmentsRequest &) = default ;
    ListPluginAttachmentsRequest& operator=(ListPluginAttachmentsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->attachResourceId_ != nullptr
        && this->attachResourceType_ != nullptr && this->attachResourceTypes_ != nullptr && this->environmentId_ != nullptr && this->gatewayId_ != nullptr && this->pageNumber_ != nullptr
        && this->pageSize_ != nullptr && this->pluginId_ != nullptr && this->withParentResource_ != nullptr; };
    // attachResourceId Field Functions 
    bool hasAttachResourceId() const { return this->attachResourceId_ != nullptr;};
    void deleteAttachResourceId() { this->attachResourceId_ = nullptr;};
    inline string attachResourceId() const { DARABONBA_PTR_GET_DEFAULT(attachResourceId_, "") };
    inline ListPluginAttachmentsRequest& setAttachResourceId(string attachResourceId) { DARABONBA_PTR_SET_VALUE(attachResourceId_, attachResourceId) };


    // attachResourceType Field Functions 
    bool hasAttachResourceType() const { return this->attachResourceType_ != nullptr;};
    void deleteAttachResourceType() { this->attachResourceType_ = nullptr;};
    inline string attachResourceType() const { DARABONBA_PTR_GET_DEFAULT(attachResourceType_, "") };
    inline ListPluginAttachmentsRequest& setAttachResourceType(string attachResourceType) { DARABONBA_PTR_SET_VALUE(attachResourceType_, attachResourceType) };


    // attachResourceTypes Field Functions 
    bool hasAttachResourceTypes() const { return this->attachResourceTypes_ != nullptr;};
    void deleteAttachResourceTypes() { this->attachResourceTypes_ = nullptr;};
    inline string attachResourceTypes() const { DARABONBA_PTR_GET_DEFAULT(attachResourceTypes_, "") };
    inline ListPluginAttachmentsRequest& setAttachResourceTypes(string attachResourceTypes) { DARABONBA_PTR_SET_VALUE(attachResourceTypes_, attachResourceTypes) };


    // environmentId Field Functions 
    bool hasEnvironmentId() const { return this->environmentId_ != nullptr;};
    void deleteEnvironmentId() { this->environmentId_ = nullptr;};
    inline string environmentId() const { DARABONBA_PTR_GET_DEFAULT(environmentId_, "") };
    inline ListPluginAttachmentsRequest& setEnvironmentId(string environmentId) { DARABONBA_PTR_SET_VALUE(environmentId_, environmentId) };


    // gatewayId Field Functions 
    bool hasGatewayId() const { return this->gatewayId_ != nullptr;};
    void deleteGatewayId() { this->gatewayId_ = nullptr;};
    inline string gatewayId() const { DARABONBA_PTR_GET_DEFAULT(gatewayId_, "") };
    inline ListPluginAttachmentsRequest& setGatewayId(string gatewayId) { DARABONBA_PTR_SET_VALUE(gatewayId_, gatewayId) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListPluginAttachmentsRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListPluginAttachmentsRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // pluginId Field Functions 
    bool hasPluginId() const { return this->pluginId_ != nullptr;};
    void deletePluginId() { this->pluginId_ = nullptr;};
    inline string pluginId() const { DARABONBA_PTR_GET_DEFAULT(pluginId_, "") };
    inline ListPluginAttachmentsRequest& setPluginId(string pluginId) { DARABONBA_PTR_SET_VALUE(pluginId_, pluginId) };


    // withParentResource Field Functions 
    bool hasWithParentResource() const { return this->withParentResource_ != nullptr;};
    void deleteWithParentResource() { this->withParentResource_ = nullptr;};
    inline bool withParentResource() const { DARABONBA_PTR_GET_DEFAULT(withParentResource_, false) };
    inline ListPluginAttachmentsRequest& setWithParentResource(bool withParentResource) { DARABONBA_PTR_SET_VALUE(withParentResource_, withParentResource) };


  protected:
    std::shared_ptr<string> attachResourceId_ = nullptr;
    std::shared_ptr<string> attachResourceType_ = nullptr;
    std::shared_ptr<string> attachResourceTypes_ = nullptr;
    std::shared_ptr<string> environmentId_ = nullptr;
    std::shared_ptr<string> gatewayId_ = nullptr;
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    std::shared_ptr<string> pluginId_ = nullptr;
    std::shared_ptr<bool> withParentResource_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
