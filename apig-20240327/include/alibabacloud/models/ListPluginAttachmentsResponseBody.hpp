// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPLUGINATTACHMENTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTPLUGINATTACHMENTSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/EnvironmentInfo.hpp>
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
  class ListPluginAttachmentsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListPluginAttachmentsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListPluginAttachmentsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    ListPluginAttachmentsResponseBody() = default ;
    ListPluginAttachmentsResponseBody(const ListPluginAttachmentsResponseBody &) = default ;
    ListPluginAttachmentsResponseBody(ListPluginAttachmentsResponseBody &&) = default ;
    ListPluginAttachmentsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListPluginAttachmentsResponseBody() = default ;
    ListPluginAttachmentsResponseBody& operator=(const ListPluginAttachmentsResponseBody &) = default ;
    ListPluginAttachmentsResponseBody& operator=(ListPluginAttachmentsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(items, items_);
        DARABONBA_PTR_TO_JSON(pageNumber, pageNumber_);
        DARABONBA_PTR_TO_JSON(pageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(totalSize, totalSize_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(items, items_);
        DARABONBA_PTR_FROM_JSON(pageNumber, pageNumber_);
        DARABONBA_PTR_FROM_JSON(pageSize, pageSize_);
        DARABONBA_PTR_FROM_JSON(totalSize, totalSize_);
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
      class Items : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Items& obj) { 
          DARABONBA_PTR_TO_JSON(attachResourceType, attachResourceType_);
          DARABONBA_PTR_TO_JSON(enable, enable_);
          DARABONBA_PTR_TO_JSON(environmentInfo, environmentInfo_);
          DARABONBA_PTR_TO_JSON(parentResourceInfo, parentResourceInfo_);
          DARABONBA_PTR_TO_JSON(pluginAttachmentId, pluginAttachmentId_);
          DARABONBA_PTR_TO_JSON(pluginClassInfo, pluginClassInfo_);
          DARABONBA_PTR_TO_JSON(pluginConfig, pluginConfig_);
          DARABONBA_PTR_TO_JSON(pluginId, pluginId_);
          DARABONBA_PTR_TO_JSON(resourceInfos, resourceInfos_);
        };
        friend void from_json(const Darabonba::Json& j, Items& obj) { 
          DARABONBA_PTR_FROM_JSON(attachResourceType, attachResourceType_);
          DARABONBA_PTR_FROM_JSON(enable, enable_);
          DARABONBA_PTR_FROM_JSON(environmentInfo, environmentInfo_);
          DARABONBA_PTR_FROM_JSON(parentResourceInfo, parentResourceInfo_);
          DARABONBA_PTR_FROM_JSON(pluginAttachmentId, pluginAttachmentId_);
          DARABONBA_PTR_FROM_JSON(pluginClassInfo, pluginClassInfo_);
          DARABONBA_PTR_FROM_JSON(pluginConfig, pluginConfig_);
          DARABONBA_PTR_FROM_JSON(pluginId, pluginId_);
          DARABONBA_PTR_FROM_JSON(resourceInfos, resourceInfos_);
        };
        Items() = default ;
        Items(const Items &) = default ;
        Items(Items &&) = default ;
        Items(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Items() = default ;
        Items& operator=(const Items &) = default ;
        Items& operator=(Items &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->attachResourceType_ == nullptr
        && this->enable_ == nullptr && this->environmentInfo_ == nullptr && this->parentResourceInfo_ == nullptr && this->pluginAttachmentId_ == nullptr && this->pluginClassInfo_ == nullptr
        && this->pluginConfig_ == nullptr && this->pluginId_ == nullptr && this->resourceInfos_ == nullptr; };
        // attachResourceType Field Functions 
        bool hasAttachResourceType() const { return this->attachResourceType_ != nullptr;};
        void deleteAttachResourceType() { this->attachResourceType_ = nullptr;};
        inline string getAttachResourceType() const { DARABONBA_PTR_GET_DEFAULT(attachResourceType_, "") };
        inline Items& setAttachResourceType(string attachResourceType) { DARABONBA_PTR_SET_VALUE(attachResourceType_, attachResourceType) };


        // enable Field Functions 
        bool hasEnable() const { return this->enable_ != nullptr;};
        void deleteEnable() { this->enable_ = nullptr;};
        inline bool getEnable() const { DARABONBA_PTR_GET_DEFAULT(enable_, false) };
        inline Items& setEnable(bool enable) { DARABONBA_PTR_SET_VALUE(enable_, enable) };


        // environmentInfo Field Functions 
        bool hasEnvironmentInfo() const { return this->environmentInfo_ != nullptr;};
        void deleteEnvironmentInfo() { this->environmentInfo_ = nullptr;};
        inline const EnvironmentInfo & getEnvironmentInfo() const { DARABONBA_PTR_GET_CONST(environmentInfo_, EnvironmentInfo) };
        inline EnvironmentInfo getEnvironmentInfo() { DARABONBA_PTR_GET(environmentInfo_, EnvironmentInfo) };
        inline Items& setEnvironmentInfo(const EnvironmentInfo & environmentInfo) { DARABONBA_PTR_SET_VALUE(environmentInfo_, environmentInfo) };
        inline Items& setEnvironmentInfo(EnvironmentInfo && environmentInfo) { DARABONBA_PTR_SET_RVALUE(environmentInfo_, environmentInfo) };


        // parentResourceInfo Field Functions 
        bool hasParentResourceInfo() const { return this->parentResourceInfo_ != nullptr;};
        void deleteParentResourceInfo() { this->parentResourceInfo_ = nullptr;};
        inline const ParentResourceInfo & getParentResourceInfo() const { DARABONBA_PTR_GET_CONST(parentResourceInfo_, ParentResourceInfo) };
        inline ParentResourceInfo getParentResourceInfo() { DARABONBA_PTR_GET(parentResourceInfo_, ParentResourceInfo) };
        inline Items& setParentResourceInfo(const ParentResourceInfo & parentResourceInfo) { DARABONBA_PTR_SET_VALUE(parentResourceInfo_, parentResourceInfo) };
        inline Items& setParentResourceInfo(ParentResourceInfo && parentResourceInfo) { DARABONBA_PTR_SET_RVALUE(parentResourceInfo_, parentResourceInfo) };


        // pluginAttachmentId Field Functions 
        bool hasPluginAttachmentId() const { return this->pluginAttachmentId_ != nullptr;};
        void deletePluginAttachmentId() { this->pluginAttachmentId_ = nullptr;};
        inline string getPluginAttachmentId() const { DARABONBA_PTR_GET_DEFAULT(pluginAttachmentId_, "") };
        inline Items& setPluginAttachmentId(string pluginAttachmentId) { DARABONBA_PTR_SET_VALUE(pluginAttachmentId_, pluginAttachmentId) };


        // pluginClassInfo Field Functions 
        bool hasPluginClassInfo() const { return this->pluginClassInfo_ != nullptr;};
        void deletePluginClassInfo() { this->pluginClassInfo_ = nullptr;};
        inline const PluginClassInfo & getPluginClassInfo() const { DARABONBA_PTR_GET_CONST(pluginClassInfo_, PluginClassInfo) };
        inline PluginClassInfo getPluginClassInfo() { DARABONBA_PTR_GET(pluginClassInfo_, PluginClassInfo) };
        inline Items& setPluginClassInfo(const PluginClassInfo & pluginClassInfo) { DARABONBA_PTR_SET_VALUE(pluginClassInfo_, pluginClassInfo) };
        inline Items& setPluginClassInfo(PluginClassInfo && pluginClassInfo) { DARABONBA_PTR_SET_RVALUE(pluginClassInfo_, pluginClassInfo) };


        // pluginConfig Field Functions 
        bool hasPluginConfig() const { return this->pluginConfig_ != nullptr;};
        void deletePluginConfig() { this->pluginConfig_ = nullptr;};
        inline string getPluginConfig() const { DARABONBA_PTR_GET_DEFAULT(pluginConfig_, "") };
        inline Items& setPluginConfig(string pluginConfig) { DARABONBA_PTR_SET_VALUE(pluginConfig_, pluginConfig) };


        // pluginId Field Functions 
        bool hasPluginId() const { return this->pluginId_ != nullptr;};
        void deletePluginId() { this->pluginId_ = nullptr;};
        inline string getPluginId() const { DARABONBA_PTR_GET_DEFAULT(pluginId_, "") };
        inline Items& setPluginId(string pluginId) { DARABONBA_PTR_SET_VALUE(pluginId_, pluginId) };


        // resourceInfos Field Functions 
        bool hasResourceInfos() const { return this->resourceInfos_ != nullptr;};
        void deleteResourceInfos() { this->resourceInfos_ = nullptr;};
        inline const vector<ResourceInfo> & getResourceInfos() const { DARABONBA_PTR_GET_CONST(resourceInfos_, vector<ResourceInfo>) };
        inline vector<ResourceInfo> getResourceInfos() { DARABONBA_PTR_GET(resourceInfos_, vector<ResourceInfo>) };
        inline Items& setResourceInfos(const vector<ResourceInfo> & resourceInfos) { DARABONBA_PTR_SET_VALUE(resourceInfos_, resourceInfos) };
        inline Items& setResourceInfos(vector<ResourceInfo> && resourceInfos) { DARABONBA_PTR_SET_RVALUE(resourceInfos_, resourceInfos) };


      protected:
        // The types of resource attachments.
        // - HttpApi
        // - Operation
        // - GatewayRoute
        // - GatewayDomain
        // - Gateway
        shared_ptr<string> attachResourceType_ {};
        // Indicates if enabled.
        shared_ptr<bool> enable_ {};
        // The environment metadata.
        shared_ptr<EnvironmentInfo> environmentInfo_ {};
        // The parent resource metadata.
        shared_ptr<ParentResourceInfo> parentResourceInfo_ {};
        // The ID of the resource attachment.
        shared_ptr<string> pluginAttachmentId_ {};
        // The plug-in type metadata.
        shared_ptr<PluginClassInfo> pluginClassInfo_ {};
        // The plug-in configurations (Base64-encoded).
        shared_ptr<string> pluginConfig_ {};
        // The plug-in ID.
        shared_ptr<string> pluginId_ {};
        // The information of resource attachments.
        shared_ptr<vector<ResourceInfo>> resourceInfos_ {};
      };

      virtual bool empty() const override { return this->items_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->totalSize_ == nullptr; };
      // items Field Functions 
      bool hasItems() const { return this->items_ != nullptr;};
      void deleteItems() { this->items_ = nullptr;};
      inline const vector<Data::Items> & getItems() const { DARABONBA_PTR_GET_CONST(items_, vector<Data::Items>) };
      inline vector<Data::Items> getItems() { DARABONBA_PTR_GET(items_, vector<Data::Items>) };
      inline Data& setItems(const vector<Data::Items> & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
      inline Data& setItems(vector<Data::Items> && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


      // pageNumber Field Functions 
      bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
      void deletePageNumber() { this->pageNumber_ = nullptr;};
      inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
      inline Data& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
      inline Data& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


      // totalSize Field Functions 
      bool hasTotalSize() const { return this->totalSize_ != nullptr;};
      void deleteTotalSize() { this->totalSize_ = nullptr;};
      inline int32_t getTotalSize() const { DARABONBA_PTR_GET_DEFAULT(totalSize_, 0) };
      inline Data& setTotalSize(int32_t totalSize) { DARABONBA_PTR_SET_VALUE(totalSize_, totalSize) };


    protected:
      // The details of resource attachments.
      shared_ptr<vector<Data::Items>> items_ {};
      // The page number.
      shared_ptr<int32_t> pageNumber_ {};
      // The page size.
      shared_ptr<int32_t> pageSize_ {};
      // The total number of entries returned.
      shared_ptr<int32_t> totalSize_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListPluginAttachmentsResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ListPluginAttachmentsResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, ListPluginAttachmentsResponseBody::Data) };
    inline ListPluginAttachmentsResponseBody::Data getData() { DARABONBA_PTR_GET(data_, ListPluginAttachmentsResponseBody::Data) };
    inline ListPluginAttachmentsResponseBody& setData(const ListPluginAttachmentsResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListPluginAttachmentsResponseBody& setData(ListPluginAttachmentsResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListPluginAttachmentsResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListPluginAttachmentsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The status code.
    shared_ptr<string> code_ {};
    // The response payload.
    shared_ptr<ListPluginAttachmentsResponseBody::Data> data_ {};
    // The status message.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
