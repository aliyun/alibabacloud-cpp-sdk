// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPLUGINATTACHMENTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETPLUGINATTACHMENTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/EnvironmentInfo.hpp>
#include <alibabacloud/models/GatewayInfo.hpp>
#include <alibabacloud/models/ParentResourceInfo.hpp>
#include <alibabacloud/models/PluginClassInfo.hpp>
#include <vector>
#include <alibabacloud/models/ResourceInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class GetPluginAttachmentResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetPluginAttachmentResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetPluginAttachmentResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    GetPluginAttachmentResponseBody() = default ;
    GetPluginAttachmentResponseBody(const GetPluginAttachmentResponseBody &) = default ;
    GetPluginAttachmentResponseBody(GetPluginAttachmentResponseBody &&) = default ;
    GetPluginAttachmentResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetPluginAttachmentResponseBody() = default ;
    GetPluginAttachmentResponseBody& operator=(const GetPluginAttachmentResponseBody &) = default ;
    GetPluginAttachmentResponseBody& operator=(GetPluginAttachmentResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(enable, enable_);
        DARABONBA_PTR_TO_JSON(environmentInfo, environmentInfo_);
        DARABONBA_PTR_TO_JSON(gatewayInfo, gatewayInfo_);
        DARABONBA_PTR_TO_JSON(parentResourceInfo, parentResourceInfo_);
        DARABONBA_PTR_TO_JSON(pluginAttachmentId, pluginAttachmentId_);
        DARABONBA_PTR_TO_JSON(pluginClassInfo, pluginClassInfo_);
        DARABONBA_PTR_TO_JSON(pluginConfig, pluginConfig_);
        DARABONBA_PTR_TO_JSON(pluginId, pluginId_);
        DARABONBA_PTR_TO_JSON(resourceInfos, resourceInfos_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(enable, enable_);
        DARABONBA_PTR_FROM_JSON(environmentInfo, environmentInfo_);
        DARABONBA_PTR_FROM_JSON(gatewayInfo, gatewayInfo_);
        DARABONBA_PTR_FROM_JSON(parentResourceInfo, parentResourceInfo_);
        DARABONBA_PTR_FROM_JSON(pluginAttachmentId, pluginAttachmentId_);
        DARABONBA_PTR_FROM_JSON(pluginClassInfo, pluginClassInfo_);
        DARABONBA_PTR_FROM_JSON(pluginConfig, pluginConfig_);
        DARABONBA_PTR_FROM_JSON(pluginId, pluginId_);
        DARABONBA_PTR_FROM_JSON(resourceInfos, resourceInfos_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->enable_ == nullptr
        && this->environmentInfo_ == nullptr && this->gatewayInfo_ == nullptr && this->parentResourceInfo_ == nullptr && this->pluginAttachmentId_ == nullptr && this->pluginClassInfo_ == nullptr
        && this->pluginConfig_ == nullptr && this->pluginId_ == nullptr && this->resourceInfos_ == nullptr; };
      // enable Field Functions 
      bool hasEnable() const { return this->enable_ != nullptr;};
      void deleteEnable() { this->enable_ = nullptr;};
      inline bool getEnable() const { DARABONBA_PTR_GET_DEFAULT(enable_, false) };
      inline Data& setEnable(bool enable) { DARABONBA_PTR_SET_VALUE(enable_, enable) };


      // environmentInfo Field Functions 
      bool hasEnvironmentInfo() const { return this->environmentInfo_ != nullptr;};
      void deleteEnvironmentInfo() { this->environmentInfo_ = nullptr;};
      inline const EnvironmentInfo & getEnvironmentInfo() const { DARABONBA_PTR_GET_CONST(environmentInfo_, EnvironmentInfo) };
      inline EnvironmentInfo getEnvironmentInfo() { DARABONBA_PTR_GET(environmentInfo_, EnvironmentInfo) };
      inline Data& setEnvironmentInfo(const EnvironmentInfo & environmentInfo) { DARABONBA_PTR_SET_VALUE(environmentInfo_, environmentInfo) };
      inline Data& setEnvironmentInfo(EnvironmentInfo && environmentInfo) { DARABONBA_PTR_SET_RVALUE(environmentInfo_, environmentInfo) };


      // gatewayInfo Field Functions 
      bool hasGatewayInfo() const { return this->gatewayInfo_ != nullptr;};
      void deleteGatewayInfo() { this->gatewayInfo_ = nullptr;};
      inline const GatewayInfo & getGatewayInfo() const { DARABONBA_PTR_GET_CONST(gatewayInfo_, GatewayInfo) };
      inline GatewayInfo getGatewayInfo() { DARABONBA_PTR_GET(gatewayInfo_, GatewayInfo) };
      inline Data& setGatewayInfo(const GatewayInfo & gatewayInfo) { DARABONBA_PTR_SET_VALUE(gatewayInfo_, gatewayInfo) };
      inline Data& setGatewayInfo(GatewayInfo && gatewayInfo) { DARABONBA_PTR_SET_RVALUE(gatewayInfo_, gatewayInfo) };


      // parentResourceInfo Field Functions 
      bool hasParentResourceInfo() const { return this->parentResourceInfo_ != nullptr;};
      void deleteParentResourceInfo() { this->parentResourceInfo_ = nullptr;};
      inline const ParentResourceInfo & getParentResourceInfo() const { DARABONBA_PTR_GET_CONST(parentResourceInfo_, ParentResourceInfo) };
      inline ParentResourceInfo getParentResourceInfo() { DARABONBA_PTR_GET(parentResourceInfo_, ParentResourceInfo) };
      inline Data& setParentResourceInfo(const ParentResourceInfo & parentResourceInfo) { DARABONBA_PTR_SET_VALUE(parentResourceInfo_, parentResourceInfo) };
      inline Data& setParentResourceInfo(ParentResourceInfo && parentResourceInfo) { DARABONBA_PTR_SET_RVALUE(parentResourceInfo_, parentResourceInfo) };


      // pluginAttachmentId Field Functions 
      bool hasPluginAttachmentId() const { return this->pluginAttachmentId_ != nullptr;};
      void deletePluginAttachmentId() { this->pluginAttachmentId_ = nullptr;};
      inline string getPluginAttachmentId() const { DARABONBA_PTR_GET_DEFAULT(pluginAttachmentId_, "") };
      inline Data& setPluginAttachmentId(string pluginAttachmentId) { DARABONBA_PTR_SET_VALUE(pluginAttachmentId_, pluginAttachmentId) };


      // pluginClassInfo Field Functions 
      bool hasPluginClassInfo() const { return this->pluginClassInfo_ != nullptr;};
      void deletePluginClassInfo() { this->pluginClassInfo_ = nullptr;};
      inline const PluginClassInfo & getPluginClassInfo() const { DARABONBA_PTR_GET_CONST(pluginClassInfo_, PluginClassInfo) };
      inline PluginClassInfo getPluginClassInfo() { DARABONBA_PTR_GET(pluginClassInfo_, PluginClassInfo) };
      inline Data& setPluginClassInfo(const PluginClassInfo & pluginClassInfo) { DARABONBA_PTR_SET_VALUE(pluginClassInfo_, pluginClassInfo) };
      inline Data& setPluginClassInfo(PluginClassInfo && pluginClassInfo) { DARABONBA_PTR_SET_RVALUE(pluginClassInfo_, pluginClassInfo) };


      // pluginConfig Field Functions 
      bool hasPluginConfig() const { return this->pluginConfig_ != nullptr;};
      void deletePluginConfig() { this->pluginConfig_ = nullptr;};
      inline string getPluginConfig() const { DARABONBA_PTR_GET_DEFAULT(pluginConfig_, "") };
      inline Data& setPluginConfig(string pluginConfig) { DARABONBA_PTR_SET_VALUE(pluginConfig_, pluginConfig) };


      // pluginId Field Functions 
      bool hasPluginId() const { return this->pluginId_ != nullptr;};
      void deletePluginId() { this->pluginId_ = nullptr;};
      inline string getPluginId() const { DARABONBA_PTR_GET_DEFAULT(pluginId_, "") };
      inline Data& setPluginId(string pluginId) { DARABONBA_PTR_SET_VALUE(pluginId_, pluginId) };


      // resourceInfos Field Functions 
      bool hasResourceInfos() const { return this->resourceInfos_ != nullptr;};
      void deleteResourceInfos() { this->resourceInfos_ = nullptr;};
      inline const vector<ResourceInfo> & getResourceInfos() const { DARABONBA_PTR_GET_CONST(resourceInfos_, vector<ResourceInfo>) };
      inline vector<ResourceInfo> getResourceInfos() { DARABONBA_PTR_GET(resourceInfos_, vector<ResourceInfo>) };
      inline Data& setResourceInfos(const vector<ResourceInfo> & resourceInfos) { DARABONBA_PTR_SET_VALUE(resourceInfos_, resourceInfos) };
      inline Data& setResourceInfos(vector<ResourceInfo> && resourceInfos) { DARABONBA_PTR_SET_RVALUE(resourceInfos_, resourceInfos) };


    protected:
      // Indicates whether the plug-in is enabled.
      shared_ptr<bool> enable_ {};
      // The environment information.
      shared_ptr<EnvironmentInfo> environmentInfo_ {};
      // The instance information.
      shared_ptr<GatewayInfo> gatewayInfo_ {};
      // The information about the parent resource to which the plug-in is attached.
      shared_ptr<ParentResourceInfo> parentResourceInfo_ {};
      // The attachment ID.
      shared_ptr<string> pluginAttachmentId_ {};
      // The plug-in type information.
      shared_ptr<PluginClassInfo> pluginClassInfo_ {};
      // The Base64-encoded configurations of the plug-in.
      shared_ptr<string> pluginConfig_ {};
      // The plug-in ID.
      shared_ptr<string> pluginId_ {};
      // The resource information.
      shared_ptr<vector<ResourceInfo>> resourceInfos_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetPluginAttachmentResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetPluginAttachmentResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetPluginAttachmentResponseBody::Data) };
    inline GetPluginAttachmentResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetPluginAttachmentResponseBody::Data) };
    inline GetPluginAttachmentResponseBody& setData(const GetPluginAttachmentResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetPluginAttachmentResponseBody& setData(GetPluginAttachmentResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetPluginAttachmentResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetPluginAttachmentResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The status code.
    shared_ptr<string> code_ {};
    // The response payload.
    shared_ptr<GetPluginAttachmentResponseBody::Data> data_ {};
    // The status message.
    shared_ptr<string> message_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
