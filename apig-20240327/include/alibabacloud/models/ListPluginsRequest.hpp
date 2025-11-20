// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPLUGINSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTPLUGINSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class ListPluginsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListPluginsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(attachResourceId, attachResourceId_);
      DARABONBA_PTR_TO_JSON(attachResourceType, attachResourceType_);
      DARABONBA_PTR_TO_JSON(gatewayId, gatewayId_);
      DARABONBA_PTR_TO_JSON(gatewayType, gatewayType_);
      DARABONBA_PTR_TO_JSON(includeBuiltinAiGateway, includeBuiltinAiGateway_);
      DARABONBA_PTR_TO_JSON(pageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(pageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(pluginClassId, pluginClassId_);
      DARABONBA_PTR_TO_JSON(pluginClassName, pluginClassName_);
      DARABONBA_PTR_TO_JSON(withAttachmentInfo, withAttachmentInfo_);
    };
    friend void from_json(const Darabonba::Json& j, ListPluginsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(attachResourceId, attachResourceId_);
      DARABONBA_PTR_FROM_JSON(attachResourceType, attachResourceType_);
      DARABONBA_PTR_FROM_JSON(gatewayId, gatewayId_);
      DARABONBA_PTR_FROM_JSON(gatewayType, gatewayType_);
      DARABONBA_PTR_FROM_JSON(includeBuiltinAiGateway, includeBuiltinAiGateway_);
      DARABONBA_PTR_FROM_JSON(pageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(pageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(pluginClassId, pluginClassId_);
      DARABONBA_PTR_FROM_JSON(pluginClassName, pluginClassName_);
      DARABONBA_PTR_FROM_JSON(withAttachmentInfo, withAttachmentInfo_);
    };
    ListPluginsRequest() = default ;
    ListPluginsRequest(const ListPluginsRequest &) = default ;
    ListPluginsRequest(ListPluginsRequest &&) = default ;
    ListPluginsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListPluginsRequest() = default ;
    ListPluginsRequest& operator=(const ListPluginsRequest &) = default ;
    ListPluginsRequest& operator=(ListPluginsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->attachResourceId_ == nullptr
        && return this->attachResourceType_ == nullptr && return this->gatewayId_ == nullptr && return this->gatewayType_ == nullptr && return this->includeBuiltinAiGateway_ == nullptr && return this->pageNumber_ == nullptr
        && return this->pageSize_ == nullptr && return this->pluginClassId_ == nullptr && return this->pluginClassName_ == nullptr && return this->withAttachmentInfo_ == nullptr; };
    // attachResourceId Field Functions 
    bool hasAttachResourceId() const { return this->attachResourceId_ != nullptr;};
    void deleteAttachResourceId() { this->attachResourceId_ = nullptr;};
    inline string attachResourceId() const { DARABONBA_PTR_GET_DEFAULT(attachResourceId_, "") };
    inline ListPluginsRequest& setAttachResourceId(string attachResourceId) { DARABONBA_PTR_SET_VALUE(attachResourceId_, attachResourceId) };


    // attachResourceType Field Functions 
    bool hasAttachResourceType() const { return this->attachResourceType_ != nullptr;};
    void deleteAttachResourceType() { this->attachResourceType_ = nullptr;};
    inline string attachResourceType() const { DARABONBA_PTR_GET_DEFAULT(attachResourceType_, "") };
    inline ListPluginsRequest& setAttachResourceType(string attachResourceType) { DARABONBA_PTR_SET_VALUE(attachResourceType_, attachResourceType) };


    // gatewayId Field Functions 
    bool hasGatewayId() const { return this->gatewayId_ != nullptr;};
    void deleteGatewayId() { this->gatewayId_ = nullptr;};
    inline string gatewayId() const { DARABONBA_PTR_GET_DEFAULT(gatewayId_, "") };
    inline ListPluginsRequest& setGatewayId(string gatewayId) { DARABONBA_PTR_SET_VALUE(gatewayId_, gatewayId) };


    // gatewayType Field Functions 
    bool hasGatewayType() const { return this->gatewayType_ != nullptr;};
    void deleteGatewayType() { this->gatewayType_ = nullptr;};
    inline string gatewayType() const { DARABONBA_PTR_GET_DEFAULT(gatewayType_, "") };
    inline ListPluginsRequest& setGatewayType(string gatewayType) { DARABONBA_PTR_SET_VALUE(gatewayType_, gatewayType) };


    // includeBuiltinAiGateway Field Functions 
    bool hasIncludeBuiltinAiGateway() const { return this->includeBuiltinAiGateway_ != nullptr;};
    void deleteIncludeBuiltinAiGateway() { this->includeBuiltinAiGateway_ = nullptr;};
    inline bool includeBuiltinAiGateway() const { DARABONBA_PTR_GET_DEFAULT(includeBuiltinAiGateway_, false) };
    inline ListPluginsRequest& setIncludeBuiltinAiGateway(bool includeBuiltinAiGateway) { DARABONBA_PTR_SET_VALUE(includeBuiltinAiGateway_, includeBuiltinAiGateway) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListPluginsRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListPluginsRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // pluginClassId Field Functions 
    bool hasPluginClassId() const { return this->pluginClassId_ != nullptr;};
    void deletePluginClassId() { this->pluginClassId_ = nullptr;};
    inline string pluginClassId() const { DARABONBA_PTR_GET_DEFAULT(pluginClassId_, "") };
    inline ListPluginsRequest& setPluginClassId(string pluginClassId) { DARABONBA_PTR_SET_VALUE(pluginClassId_, pluginClassId) };


    // pluginClassName Field Functions 
    bool hasPluginClassName() const { return this->pluginClassName_ != nullptr;};
    void deletePluginClassName() { this->pluginClassName_ = nullptr;};
    inline string pluginClassName() const { DARABONBA_PTR_GET_DEFAULT(pluginClassName_, "") };
    inline ListPluginsRequest& setPluginClassName(string pluginClassName) { DARABONBA_PTR_SET_VALUE(pluginClassName_, pluginClassName) };


    // withAttachmentInfo Field Functions 
    bool hasWithAttachmentInfo() const { return this->withAttachmentInfo_ != nullptr;};
    void deleteWithAttachmentInfo() { this->withAttachmentInfo_ = nullptr;};
    inline bool withAttachmentInfo() const { DARABONBA_PTR_GET_DEFAULT(withAttachmentInfo_, false) };
    inline ListPluginsRequest& setWithAttachmentInfo(bool withAttachmentInfo) { DARABONBA_PTR_SET_VALUE(withAttachmentInfo_, withAttachmentInfo) };


  protected:
    // The resource attachment ID.
    std::shared_ptr<string> attachResourceId_ = nullptr;
    // The resource attachment type.
    // 
    // - HttpApi: HttpApi.
    // - Operation: Operation of HttpApi.
    // - GatewayRoute: Gateway route.
    // - GatewayService: Gateway service.
    // - GatewayServicePort: Gateway service port.
    // - Domain: Gateway domain.
    // - Gateway: Gateway.
    std::shared_ptr<string> attachResourceType_ = nullptr;
    // The gateway instance ID for filtering.
    std::shared_ptr<string> gatewayId_ = nullptr;
    // The instance type. Valid values: **AI** and **API**.
    std::shared_ptr<string> gatewayType_ = nullptr;
    // Specifies whether to include built-in AI plug-ins in the returned results. Default: false.
    std::shared_ptr<bool> includeBuiltinAiGateway_ = nullptr;
    // The page number to return. Pages start from 1. Default value: 1.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The number of entries per page. Default value: 10.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The plug-in type ID for filtering.
    std::shared_ptr<string> pluginClassId_ = nullptr;
    // The plug-in type name for filtering.
    std::shared_ptr<string> pluginClassName_ = nullptr;
    // Specifies whether the returned results should include plug-in attachment information corresponding to the attachResourceId.
    std::shared_ptr<bool> withAttachmentInfo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
