// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPLUGINSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTPLUGINSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class ListPluginsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListPluginsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListPluginsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    ListPluginsResponseBody() = default ;
    ListPluginsResponseBody(const ListPluginsResponseBody &) = default ;
    ListPluginsResponseBody(ListPluginsResponseBody &&) = default ;
    ListPluginsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListPluginsResponseBody() = default ;
    ListPluginsResponseBody& operator=(const ListPluginsResponseBody &) = default ;
    ListPluginsResponseBody& operator=(ListPluginsResponseBody &&) = default ;
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
          DARABONBA_PTR_TO_JSON(attachmentInfo, attachmentInfo_);
          DARABONBA_PTR_TO_JSON(gatewayInfo, gatewayInfo_);
          DARABONBA_PTR_TO_JSON(pluginClassInfo, pluginClassInfo_);
          DARABONBA_PTR_TO_JSON(pluginId, pluginId_);
        };
        friend void from_json(const Darabonba::Json& j, Items& obj) { 
          DARABONBA_PTR_FROM_JSON(attachmentInfo, attachmentInfo_);
          DARABONBA_PTR_FROM_JSON(gatewayInfo, gatewayInfo_);
          DARABONBA_PTR_FROM_JSON(pluginClassInfo, pluginClassInfo_);
          DARABONBA_PTR_FROM_JSON(pluginId, pluginId_);
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
        class PluginClassInfo : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const PluginClassInfo& obj) { 
            DARABONBA_PTR_TO_JSON(alias, alias_);
            DARABONBA_PTR_TO_JSON(executePriority, executePriority_);
            DARABONBA_PTR_TO_JSON(executeStage, executeStage_);
            DARABONBA_PTR_TO_JSON(name, name_);
            DARABONBA_PTR_TO_JSON(pluginClassId, pluginClassId_);
            DARABONBA_PTR_TO_JSON(source, source_);
            DARABONBA_PTR_TO_JSON(version, version_);
            DARABONBA_PTR_TO_JSON(versionDescription, versionDescription_);
          };
          friend void from_json(const Darabonba::Json& j, PluginClassInfo& obj) { 
            DARABONBA_PTR_FROM_JSON(alias, alias_);
            DARABONBA_PTR_FROM_JSON(executePriority, executePriority_);
            DARABONBA_PTR_FROM_JSON(executeStage, executeStage_);
            DARABONBA_PTR_FROM_JSON(name, name_);
            DARABONBA_PTR_FROM_JSON(pluginClassId, pluginClassId_);
            DARABONBA_PTR_FROM_JSON(source, source_);
            DARABONBA_PTR_FROM_JSON(version, version_);
            DARABONBA_PTR_FROM_JSON(versionDescription, versionDescription_);
          };
          PluginClassInfo() = default ;
          PluginClassInfo(const PluginClassInfo &) = default ;
          PluginClassInfo(PluginClassInfo &&) = default ;
          PluginClassInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~PluginClassInfo() = default ;
          PluginClassInfo& operator=(const PluginClassInfo &) = default ;
          PluginClassInfo& operator=(PluginClassInfo &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->alias_ == nullptr
        && this->executePriority_ == nullptr && this->executeStage_ == nullptr && this->name_ == nullptr && this->pluginClassId_ == nullptr && this->source_ == nullptr
        && this->version_ == nullptr && this->versionDescription_ == nullptr; };
          // alias Field Functions 
          bool hasAlias() const { return this->alias_ != nullptr;};
          void deleteAlias() { this->alias_ = nullptr;};
          inline string getAlias() const { DARABONBA_PTR_GET_DEFAULT(alias_, "") };
          inline PluginClassInfo& setAlias(string alias) { DARABONBA_PTR_SET_VALUE(alias_, alias) };


          // executePriority Field Functions 
          bool hasExecutePriority() const { return this->executePriority_ != nullptr;};
          void deleteExecutePriority() { this->executePriority_ = nullptr;};
          inline string getExecutePriority() const { DARABONBA_PTR_GET_DEFAULT(executePriority_, "") };
          inline PluginClassInfo& setExecutePriority(string executePriority) { DARABONBA_PTR_SET_VALUE(executePriority_, executePriority) };


          // executeStage Field Functions 
          bool hasExecuteStage() const { return this->executeStage_ != nullptr;};
          void deleteExecuteStage() { this->executeStage_ = nullptr;};
          inline string getExecuteStage() const { DARABONBA_PTR_GET_DEFAULT(executeStage_, "") };
          inline PluginClassInfo& setExecuteStage(string executeStage) { DARABONBA_PTR_SET_VALUE(executeStage_, executeStage) };


          // name Field Functions 
          bool hasName() const { return this->name_ != nullptr;};
          void deleteName() { this->name_ = nullptr;};
          inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
          inline PluginClassInfo& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


          // pluginClassId Field Functions 
          bool hasPluginClassId() const { return this->pluginClassId_ != nullptr;};
          void deletePluginClassId() { this->pluginClassId_ = nullptr;};
          inline string getPluginClassId() const { DARABONBA_PTR_GET_DEFAULT(pluginClassId_, "") };
          inline PluginClassInfo& setPluginClassId(string pluginClassId) { DARABONBA_PTR_SET_VALUE(pluginClassId_, pluginClassId) };


          // source Field Functions 
          bool hasSource() const { return this->source_ != nullptr;};
          void deleteSource() { this->source_ = nullptr;};
          inline string getSource() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
          inline PluginClassInfo& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


          // version Field Functions 
          bool hasVersion() const { return this->version_ != nullptr;};
          void deleteVersion() { this->version_ = nullptr;};
          inline string getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
          inline PluginClassInfo& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


          // versionDescription Field Functions 
          bool hasVersionDescription() const { return this->versionDescription_ != nullptr;};
          void deleteVersionDescription() { this->versionDescription_ = nullptr;};
          inline string getVersionDescription() const { DARABONBA_PTR_GET_DEFAULT(versionDescription_, "") };
          inline PluginClassInfo& setVersionDescription(string versionDescription) { DARABONBA_PTR_SET_VALUE(versionDescription_, versionDescription) };


        protected:
          // The alias.
          shared_ptr<string> alias_ {};
          // The execution priority.
          shared_ptr<string> executePriority_ {};
          // The execution stage.
          shared_ptr<string> executeStage_ {};
          // The name of the plug-in.
          shared_ptr<string> name_ {};
          // The plug-in type ID.
          shared_ptr<string> pluginClassId_ {};
          // The source of the plug-in.
          shared_ptr<string> source_ {};
          // The version.
          shared_ptr<string> version_ {};
          // The description of the version.
          shared_ptr<string> versionDescription_ {};
        };

        class GatewayInfo : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const GatewayInfo& obj) { 
            DARABONBA_PTR_TO_JSON(gatewayId, gatewayId_);
            DARABONBA_PTR_TO_JSON(name, name_);
          };
          friend void from_json(const Darabonba::Json& j, GatewayInfo& obj) { 
            DARABONBA_PTR_FROM_JSON(gatewayId, gatewayId_);
            DARABONBA_PTR_FROM_JSON(name, name_);
          };
          GatewayInfo() = default ;
          GatewayInfo(const GatewayInfo &) = default ;
          GatewayInfo(GatewayInfo &&) = default ;
          GatewayInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~GatewayInfo() = default ;
          GatewayInfo& operator=(const GatewayInfo &) = default ;
          GatewayInfo& operator=(GatewayInfo &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->gatewayId_ == nullptr
        && this->name_ == nullptr; };
          // gatewayId Field Functions 
          bool hasGatewayId() const { return this->gatewayId_ != nullptr;};
          void deleteGatewayId() { this->gatewayId_ = nullptr;};
          inline string getGatewayId() const { DARABONBA_PTR_GET_DEFAULT(gatewayId_, "") };
          inline GatewayInfo& setGatewayId(string gatewayId) { DARABONBA_PTR_SET_VALUE(gatewayId_, gatewayId) };


          // name Field Functions 
          bool hasName() const { return this->name_ != nullptr;};
          void deleteName() { this->name_ = nullptr;};
          inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
          inline GatewayInfo& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        protected:
          // The instance ID.
          shared_ptr<string> gatewayId_ {};
          // The instance name.
          shared_ptr<string> name_ {};
        };

        class AttachmentInfo : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const AttachmentInfo& obj) { 
            DARABONBA_PTR_TO_JSON(enable, enable_);
            DARABONBA_PTR_TO_JSON(pluginAttachmentId, pluginAttachmentId_);
          };
          friend void from_json(const Darabonba::Json& j, AttachmentInfo& obj) { 
            DARABONBA_PTR_FROM_JSON(enable, enable_);
            DARABONBA_PTR_FROM_JSON(pluginAttachmentId, pluginAttachmentId_);
          };
          AttachmentInfo() = default ;
          AttachmentInfo(const AttachmentInfo &) = default ;
          AttachmentInfo(AttachmentInfo &&) = default ;
          AttachmentInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~AttachmentInfo() = default ;
          AttachmentInfo& operator=(const AttachmentInfo &) = default ;
          AttachmentInfo& operator=(AttachmentInfo &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->enable_ == nullptr
        && this->pluginAttachmentId_ == nullptr; };
          // enable Field Functions 
          bool hasEnable() const { return this->enable_ != nullptr;};
          void deleteEnable() { this->enable_ = nullptr;};
          inline string getEnable() const { DARABONBA_PTR_GET_DEFAULT(enable_, "") };
          inline AttachmentInfo& setEnable(string enable) { DARABONBA_PTR_SET_VALUE(enable_, enable) };


          // pluginAttachmentId Field Functions 
          bool hasPluginAttachmentId() const { return this->pluginAttachmentId_ != nullptr;};
          void deletePluginAttachmentId() { this->pluginAttachmentId_ = nullptr;};
          inline string getPluginAttachmentId() const { DARABONBA_PTR_GET_DEFAULT(pluginAttachmentId_, "") };
          inline AttachmentInfo& setPluginAttachmentId(string pluginAttachmentId) { DARABONBA_PTR_SET_VALUE(pluginAttachmentId_, pluginAttachmentId) };


        protected:
          // Indicates if enabled.
          shared_ptr<string> enable_ {};
          // The attachment ID.
          shared_ptr<string> pluginAttachmentId_ {};
        };

        virtual bool empty() const override { return this->attachmentInfo_ == nullptr
        && this->gatewayInfo_ == nullptr && this->pluginClassInfo_ == nullptr && this->pluginId_ == nullptr; };
        // attachmentInfo Field Functions 
        bool hasAttachmentInfo() const { return this->attachmentInfo_ != nullptr;};
        void deleteAttachmentInfo() { this->attachmentInfo_ = nullptr;};
        inline const Items::AttachmentInfo & getAttachmentInfo() const { DARABONBA_PTR_GET_CONST(attachmentInfo_, Items::AttachmentInfo) };
        inline Items::AttachmentInfo getAttachmentInfo() { DARABONBA_PTR_GET(attachmentInfo_, Items::AttachmentInfo) };
        inline Items& setAttachmentInfo(const Items::AttachmentInfo & attachmentInfo) { DARABONBA_PTR_SET_VALUE(attachmentInfo_, attachmentInfo) };
        inline Items& setAttachmentInfo(Items::AttachmentInfo && attachmentInfo) { DARABONBA_PTR_SET_RVALUE(attachmentInfo_, attachmentInfo) };


        // gatewayInfo Field Functions 
        bool hasGatewayInfo() const { return this->gatewayInfo_ != nullptr;};
        void deleteGatewayInfo() { this->gatewayInfo_ = nullptr;};
        inline const Items::GatewayInfo & getGatewayInfo() const { DARABONBA_PTR_GET_CONST(gatewayInfo_, Items::GatewayInfo) };
        inline Items::GatewayInfo getGatewayInfo() { DARABONBA_PTR_GET(gatewayInfo_, Items::GatewayInfo) };
        inline Items& setGatewayInfo(const Items::GatewayInfo & gatewayInfo) { DARABONBA_PTR_SET_VALUE(gatewayInfo_, gatewayInfo) };
        inline Items& setGatewayInfo(Items::GatewayInfo && gatewayInfo) { DARABONBA_PTR_SET_RVALUE(gatewayInfo_, gatewayInfo) };


        // pluginClassInfo Field Functions 
        bool hasPluginClassInfo() const { return this->pluginClassInfo_ != nullptr;};
        void deletePluginClassInfo() { this->pluginClassInfo_ = nullptr;};
        inline const Items::PluginClassInfo & getPluginClassInfo() const { DARABONBA_PTR_GET_CONST(pluginClassInfo_, Items::PluginClassInfo) };
        inline Items::PluginClassInfo getPluginClassInfo() { DARABONBA_PTR_GET(pluginClassInfo_, Items::PluginClassInfo) };
        inline Items& setPluginClassInfo(const Items::PluginClassInfo & pluginClassInfo) { DARABONBA_PTR_SET_VALUE(pluginClassInfo_, pluginClassInfo) };
        inline Items& setPluginClassInfo(Items::PluginClassInfo && pluginClassInfo) { DARABONBA_PTR_SET_RVALUE(pluginClassInfo_, pluginClassInfo) };


        // pluginId Field Functions 
        bool hasPluginId() const { return this->pluginId_ != nullptr;};
        void deletePluginId() { this->pluginId_ = nullptr;};
        inline string getPluginId() const { DARABONBA_PTR_GET_DEFAULT(pluginId_, "") };
        inline Items& setPluginId(string pluginId) { DARABONBA_PTR_SET_VALUE(pluginId_, pluginId) };


      protected:
        // The attachment information.
        shared_ptr<Items::AttachmentInfo> attachmentInfo_ {};
        // The gateway instance information.
        shared_ptr<Items::GatewayInfo> gatewayInfo_ {};
        // The plug-in type information.
        shared_ptr<Items::PluginClassInfo> pluginClassInfo_ {};
        // The plug-in ID.
        shared_ptr<string> pluginId_ {};
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
      // The list of plug-in information.
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
    inline ListPluginsResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ListPluginsResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, ListPluginsResponseBody::Data) };
    inline ListPluginsResponseBody::Data getData() { DARABONBA_PTR_GET(data_, ListPluginsResponseBody::Data) };
    inline ListPluginsResponseBody& setData(const ListPluginsResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListPluginsResponseBody& setData(ListPluginsResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListPluginsResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListPluginsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The status code.
    shared_ptr<string> code_ {};
    // The response payload.
    shared_ptr<ListPluginsResponseBody::Data> data_ {};
    // The status message.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
