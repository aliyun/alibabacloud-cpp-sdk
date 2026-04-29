// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPOLARCLAWPLUGINSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPOLARCLAWPLUGINSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class DescribePolarClawPluginsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePolarClawPluginsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ApplicationId, applicationId_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Diagnostics, diagnostics_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(Plugins, plugins_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePolarClawPluginsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ApplicationId, applicationId_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Diagnostics, diagnostics_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(Plugins, plugins_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribePolarClawPluginsResponseBody() = default ;
    DescribePolarClawPluginsResponseBody(const DescribePolarClawPluginsResponseBody &) = default ;
    DescribePolarClawPluginsResponseBody(DescribePolarClawPluginsResponseBody &&) = default ;
    DescribePolarClawPluginsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePolarClawPluginsResponseBody() = default ;
    DescribePolarClawPluginsResponseBody& operator=(const DescribePolarClawPluginsResponseBody &) = default ;
    DescribePolarClawPluginsResponseBody& operator=(DescribePolarClawPluginsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Plugins : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Plugins& obj) { 
        DARABONBA_PTR_TO_JSON(ChannelIds, channelIds_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(Error, error_);
        DARABONBA_PTR_TO_JSON(Format, format_);
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(Origin, origin_);
        DARABONBA_PTR_TO_JSON(ProviderIds, providerIds_);
        DARABONBA_PTR_TO_JSON(Source, source_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(Version, version_);
      };
      friend void from_json(const Darabonba::Json& j, Plugins& obj) { 
        DARABONBA_PTR_FROM_JSON(ChannelIds, channelIds_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(Error, error_);
        DARABONBA_PTR_FROM_JSON(Format, format_);
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(Origin, origin_);
        DARABONBA_PTR_FROM_JSON(ProviderIds, providerIds_);
        DARABONBA_PTR_FROM_JSON(Source, source_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(Version, version_);
      };
      Plugins() = default ;
      Plugins(const Plugins &) = default ;
      Plugins(Plugins &&) = default ;
      Plugins(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Plugins() = default ;
      Plugins& operator=(const Plugins &) = default ;
      Plugins& operator=(Plugins &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->channelIds_ == nullptr
        && this->description_ == nullptr && this->error_ == nullptr && this->format_ == nullptr && this->id_ == nullptr && this->name_ == nullptr
        && this->origin_ == nullptr && this->providerIds_ == nullptr && this->source_ == nullptr && this->status_ == nullptr && this->version_ == nullptr; };
      // channelIds Field Functions 
      bool hasChannelIds() const { return this->channelIds_ != nullptr;};
      void deleteChannelIds() { this->channelIds_ = nullptr;};
      inline const vector<string> & getChannelIds() const { DARABONBA_PTR_GET_CONST(channelIds_, vector<string>) };
      inline vector<string> getChannelIds() { DARABONBA_PTR_GET(channelIds_, vector<string>) };
      inline Plugins& setChannelIds(const vector<string> & channelIds) { DARABONBA_PTR_SET_VALUE(channelIds_, channelIds) };
      inline Plugins& setChannelIds(vector<string> && channelIds) { DARABONBA_PTR_SET_RVALUE(channelIds_, channelIds) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline Plugins& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // error Field Functions 
      bool hasError() const { return this->error_ != nullptr;};
      void deleteError() { this->error_ = nullptr;};
      inline string getError() const { DARABONBA_PTR_GET_DEFAULT(error_, "") };
      inline Plugins& setError(string error) { DARABONBA_PTR_SET_VALUE(error_, error) };


      // format Field Functions 
      bool hasFormat() const { return this->format_ != nullptr;};
      void deleteFormat() { this->format_ = nullptr;};
      inline string getFormat() const { DARABONBA_PTR_GET_DEFAULT(format_, "") };
      inline Plugins& setFormat(string format) { DARABONBA_PTR_SET_VALUE(format_, format) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
      inline Plugins& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Plugins& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // origin Field Functions 
      bool hasOrigin() const { return this->origin_ != nullptr;};
      void deleteOrigin() { this->origin_ = nullptr;};
      inline string getOrigin() const { DARABONBA_PTR_GET_DEFAULT(origin_, "") };
      inline Plugins& setOrigin(string origin) { DARABONBA_PTR_SET_VALUE(origin_, origin) };


      // providerIds Field Functions 
      bool hasProviderIds() const { return this->providerIds_ != nullptr;};
      void deleteProviderIds() { this->providerIds_ = nullptr;};
      inline const vector<string> & getProviderIds() const { DARABONBA_PTR_GET_CONST(providerIds_, vector<string>) };
      inline vector<string> getProviderIds() { DARABONBA_PTR_GET(providerIds_, vector<string>) };
      inline Plugins& setProviderIds(const vector<string> & providerIds) { DARABONBA_PTR_SET_VALUE(providerIds_, providerIds) };
      inline Plugins& setProviderIds(vector<string> && providerIds) { DARABONBA_PTR_SET_RVALUE(providerIds_, providerIds) };


      // source Field Functions 
      bool hasSource() const { return this->source_ != nullptr;};
      void deleteSource() { this->source_ = nullptr;};
      inline string getSource() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
      inline Plugins& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Plugins& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // version Field Functions 
      bool hasVersion() const { return this->version_ != nullptr;};
      void deleteVersion() { this->version_ = nullptr;};
      inline string getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
      inline Plugins& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


    protected:
      shared_ptr<vector<string>> channelIds_ {};
      shared_ptr<string> description_ {};
      shared_ptr<string> error_ {};
      shared_ptr<string> format_ {};
      shared_ptr<string> id_ {};
      shared_ptr<string> name_ {};
      shared_ptr<string> origin_ {};
      shared_ptr<vector<string>> providerIds_ {};
      shared_ptr<string> source_ {};
      shared_ptr<string> status_ {};
      shared_ptr<string> version_ {};
    };

    class Diagnostics : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Diagnostics& obj) { 
        DARABONBA_PTR_TO_JSON(Level, level_);
        DARABONBA_PTR_TO_JSON(Message, message_);
        DARABONBA_PTR_TO_JSON(PluginId, pluginId_);
        DARABONBA_PTR_TO_JSON(Source, source_);
      };
      friend void from_json(const Darabonba::Json& j, Diagnostics& obj) { 
        DARABONBA_PTR_FROM_JSON(Level, level_);
        DARABONBA_PTR_FROM_JSON(Message, message_);
        DARABONBA_PTR_FROM_JSON(PluginId, pluginId_);
        DARABONBA_PTR_FROM_JSON(Source, source_);
      };
      Diagnostics() = default ;
      Diagnostics(const Diagnostics &) = default ;
      Diagnostics(Diagnostics &&) = default ;
      Diagnostics(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Diagnostics() = default ;
      Diagnostics& operator=(const Diagnostics &) = default ;
      Diagnostics& operator=(Diagnostics &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->level_ == nullptr
        && this->message_ == nullptr && this->pluginId_ == nullptr && this->source_ == nullptr; };
      // level Field Functions 
      bool hasLevel() const { return this->level_ != nullptr;};
      void deleteLevel() { this->level_ = nullptr;};
      inline string getLevel() const { DARABONBA_PTR_GET_DEFAULT(level_, "") };
      inline Diagnostics& setLevel(string level) { DARABONBA_PTR_SET_VALUE(level_, level) };


      // message Field Functions 
      bool hasMessage() const { return this->message_ != nullptr;};
      void deleteMessage() { this->message_ = nullptr;};
      inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
      inline Diagnostics& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


      // pluginId Field Functions 
      bool hasPluginId() const { return this->pluginId_ != nullptr;};
      void deletePluginId() { this->pluginId_ = nullptr;};
      inline string getPluginId() const { DARABONBA_PTR_GET_DEFAULT(pluginId_, "") };
      inline Diagnostics& setPluginId(string pluginId) { DARABONBA_PTR_SET_VALUE(pluginId_, pluginId) };


      // source Field Functions 
      bool hasSource() const { return this->source_ != nullptr;};
      void deleteSource() { this->source_ = nullptr;};
      inline string getSource() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
      inline Diagnostics& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


    protected:
      shared_ptr<string> level_ {};
      shared_ptr<string> message_ {};
      shared_ptr<string> pluginId_ {};
      shared_ptr<string> source_ {};
    };

    virtual bool empty() const override { return this->applicationId_ == nullptr
        && this->code_ == nullptr && this->diagnostics_ == nullptr && this->message_ == nullptr && this->plugins_ == nullptr && this->requestId_ == nullptr; };
    // applicationId Field Functions 
    bool hasApplicationId() const { return this->applicationId_ != nullptr;};
    void deleteApplicationId() { this->applicationId_ = nullptr;};
    inline string getApplicationId() const { DARABONBA_PTR_GET_DEFAULT(applicationId_, "") };
    inline DescribePolarClawPluginsResponseBody& setApplicationId(string applicationId) { DARABONBA_PTR_SET_VALUE(applicationId_, applicationId) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline DescribePolarClawPluginsResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // diagnostics Field Functions 
    bool hasDiagnostics() const { return this->diagnostics_ != nullptr;};
    void deleteDiagnostics() { this->diagnostics_ = nullptr;};
    inline const vector<DescribePolarClawPluginsResponseBody::Diagnostics> & getDiagnostics() const { DARABONBA_PTR_GET_CONST(diagnostics_, vector<DescribePolarClawPluginsResponseBody::Diagnostics>) };
    inline vector<DescribePolarClawPluginsResponseBody::Diagnostics> getDiagnostics() { DARABONBA_PTR_GET(diagnostics_, vector<DescribePolarClawPluginsResponseBody::Diagnostics>) };
    inline DescribePolarClawPluginsResponseBody& setDiagnostics(const vector<DescribePolarClawPluginsResponseBody::Diagnostics> & diagnostics) { DARABONBA_PTR_SET_VALUE(diagnostics_, diagnostics) };
    inline DescribePolarClawPluginsResponseBody& setDiagnostics(vector<DescribePolarClawPluginsResponseBody::Diagnostics> && diagnostics) { DARABONBA_PTR_SET_RVALUE(diagnostics_, diagnostics) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DescribePolarClawPluginsResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // plugins Field Functions 
    bool hasPlugins() const { return this->plugins_ != nullptr;};
    void deletePlugins() { this->plugins_ = nullptr;};
    inline const vector<DescribePolarClawPluginsResponseBody::Plugins> & getPlugins() const { DARABONBA_PTR_GET_CONST(plugins_, vector<DescribePolarClawPluginsResponseBody::Plugins>) };
    inline vector<DescribePolarClawPluginsResponseBody::Plugins> getPlugins() { DARABONBA_PTR_GET(plugins_, vector<DescribePolarClawPluginsResponseBody::Plugins>) };
    inline DescribePolarClawPluginsResponseBody& setPlugins(const vector<DescribePolarClawPluginsResponseBody::Plugins> & plugins) { DARABONBA_PTR_SET_VALUE(plugins_, plugins) };
    inline DescribePolarClawPluginsResponseBody& setPlugins(vector<DescribePolarClawPluginsResponseBody::Plugins> && plugins) { DARABONBA_PTR_SET_RVALUE(plugins_, plugins) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribePolarClawPluginsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<string> applicationId_ {};
    shared_ptr<int32_t> code_ {};
    shared_ptr<vector<DescribePolarClawPluginsResponseBody::Diagnostics>> diagnostics_ {};
    shared_ptr<string> message_ {};
    shared_ptr<vector<DescribePolarClawPluginsResponseBody::Plugins>> plugins_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
