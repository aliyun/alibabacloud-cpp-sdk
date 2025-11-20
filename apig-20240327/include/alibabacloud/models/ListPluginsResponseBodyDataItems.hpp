// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPLUGINSRESPONSEBODYDATAITEMS_HPP_
#define ALIBABACLOUD_MODELS_LISTPLUGINSRESPONSEBODYDATAITEMS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListPluginsResponseBodyDataItemsAttachmentInfo.hpp>
#include <alibabacloud/models/ListPluginsResponseBodyDataItemsGatewayInfo.hpp>
#include <alibabacloud/models/ListPluginsResponseBodyDataItemsPluginClassInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class ListPluginsResponseBodyDataItems : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListPluginsResponseBodyDataItems& obj) { 
      DARABONBA_PTR_TO_JSON(attachmentInfo, attachmentInfo_);
      DARABONBA_PTR_TO_JSON(gatewayInfo, gatewayInfo_);
      DARABONBA_PTR_TO_JSON(pluginClassInfo, pluginClassInfo_);
      DARABONBA_PTR_TO_JSON(pluginId, pluginId_);
    };
    friend void from_json(const Darabonba::Json& j, ListPluginsResponseBodyDataItems& obj) { 
      DARABONBA_PTR_FROM_JSON(attachmentInfo, attachmentInfo_);
      DARABONBA_PTR_FROM_JSON(gatewayInfo, gatewayInfo_);
      DARABONBA_PTR_FROM_JSON(pluginClassInfo, pluginClassInfo_);
      DARABONBA_PTR_FROM_JSON(pluginId, pluginId_);
    };
    ListPluginsResponseBodyDataItems() = default ;
    ListPluginsResponseBodyDataItems(const ListPluginsResponseBodyDataItems &) = default ;
    ListPluginsResponseBodyDataItems(ListPluginsResponseBodyDataItems &&) = default ;
    ListPluginsResponseBodyDataItems(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListPluginsResponseBodyDataItems() = default ;
    ListPluginsResponseBodyDataItems& operator=(const ListPluginsResponseBodyDataItems &) = default ;
    ListPluginsResponseBodyDataItems& operator=(ListPluginsResponseBodyDataItems &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->attachmentInfo_ == nullptr
        && return this->gatewayInfo_ == nullptr && return this->pluginClassInfo_ == nullptr && return this->pluginId_ == nullptr; };
    // attachmentInfo Field Functions 
    bool hasAttachmentInfo() const { return this->attachmentInfo_ != nullptr;};
    void deleteAttachmentInfo() { this->attachmentInfo_ = nullptr;};
    inline const Models::ListPluginsResponseBodyDataItemsAttachmentInfo & attachmentInfo() const { DARABONBA_PTR_GET_CONST(attachmentInfo_, Models::ListPluginsResponseBodyDataItemsAttachmentInfo) };
    inline Models::ListPluginsResponseBodyDataItemsAttachmentInfo attachmentInfo() { DARABONBA_PTR_GET(attachmentInfo_, Models::ListPluginsResponseBodyDataItemsAttachmentInfo) };
    inline ListPluginsResponseBodyDataItems& setAttachmentInfo(const Models::ListPluginsResponseBodyDataItemsAttachmentInfo & attachmentInfo) { DARABONBA_PTR_SET_VALUE(attachmentInfo_, attachmentInfo) };
    inline ListPluginsResponseBodyDataItems& setAttachmentInfo(Models::ListPluginsResponseBodyDataItemsAttachmentInfo && attachmentInfo) { DARABONBA_PTR_SET_RVALUE(attachmentInfo_, attachmentInfo) };


    // gatewayInfo Field Functions 
    bool hasGatewayInfo() const { return this->gatewayInfo_ != nullptr;};
    void deleteGatewayInfo() { this->gatewayInfo_ = nullptr;};
    inline const Models::ListPluginsResponseBodyDataItemsGatewayInfo & gatewayInfo() const { DARABONBA_PTR_GET_CONST(gatewayInfo_, Models::ListPluginsResponseBodyDataItemsGatewayInfo) };
    inline Models::ListPluginsResponseBodyDataItemsGatewayInfo gatewayInfo() { DARABONBA_PTR_GET(gatewayInfo_, Models::ListPluginsResponseBodyDataItemsGatewayInfo) };
    inline ListPluginsResponseBodyDataItems& setGatewayInfo(const Models::ListPluginsResponseBodyDataItemsGatewayInfo & gatewayInfo) { DARABONBA_PTR_SET_VALUE(gatewayInfo_, gatewayInfo) };
    inline ListPluginsResponseBodyDataItems& setGatewayInfo(Models::ListPluginsResponseBodyDataItemsGatewayInfo && gatewayInfo) { DARABONBA_PTR_SET_RVALUE(gatewayInfo_, gatewayInfo) };


    // pluginClassInfo Field Functions 
    bool hasPluginClassInfo() const { return this->pluginClassInfo_ != nullptr;};
    void deletePluginClassInfo() { this->pluginClassInfo_ = nullptr;};
    inline const Models::ListPluginsResponseBodyDataItemsPluginClassInfo & pluginClassInfo() const { DARABONBA_PTR_GET_CONST(pluginClassInfo_, Models::ListPluginsResponseBodyDataItemsPluginClassInfo) };
    inline Models::ListPluginsResponseBodyDataItemsPluginClassInfo pluginClassInfo() { DARABONBA_PTR_GET(pluginClassInfo_, Models::ListPluginsResponseBodyDataItemsPluginClassInfo) };
    inline ListPluginsResponseBodyDataItems& setPluginClassInfo(const Models::ListPluginsResponseBodyDataItemsPluginClassInfo & pluginClassInfo) { DARABONBA_PTR_SET_VALUE(pluginClassInfo_, pluginClassInfo) };
    inline ListPluginsResponseBodyDataItems& setPluginClassInfo(Models::ListPluginsResponseBodyDataItemsPluginClassInfo && pluginClassInfo) { DARABONBA_PTR_SET_RVALUE(pluginClassInfo_, pluginClassInfo) };


    // pluginId Field Functions 
    bool hasPluginId() const { return this->pluginId_ != nullptr;};
    void deletePluginId() { this->pluginId_ = nullptr;};
    inline string pluginId() const { DARABONBA_PTR_GET_DEFAULT(pluginId_, "") };
    inline ListPluginsResponseBodyDataItems& setPluginId(string pluginId) { DARABONBA_PTR_SET_VALUE(pluginId_, pluginId) };


  protected:
    // The attachment information.
    std::shared_ptr<Models::ListPluginsResponseBodyDataItemsAttachmentInfo> attachmentInfo_ = nullptr;
    // The gateway instance information.
    std::shared_ptr<Models::ListPluginsResponseBodyDataItemsGatewayInfo> gatewayInfo_ = nullptr;
    // The plug-in type information.
    std::shared_ptr<Models::ListPluginsResponseBodyDataItemsPluginClassInfo> pluginClassInfo_ = nullptr;
    // The plug-in ID.
    std::shared_ptr<string> pluginId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
