// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTENVIRONMENTFEATURESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTENVIRONMENTFEATURESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class ListEnvironmentFeaturesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListEnvironmentFeaturesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ListEnvironmentFeaturesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    ListEnvironmentFeaturesResponseBody() = default ;
    ListEnvironmentFeaturesResponseBody(const ListEnvironmentFeaturesResponseBody &) = default ;
    ListEnvironmentFeaturesResponseBody(ListEnvironmentFeaturesResponseBody &&) = default ;
    ListEnvironmentFeaturesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListEnvironmentFeaturesResponseBody() = default ;
    ListEnvironmentFeaturesResponseBody& operator=(const ListEnvironmentFeaturesResponseBody &) = default ;
    ListEnvironmentFeaturesResponseBody& operator=(ListEnvironmentFeaturesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(Alias, alias_);
        DARABONBA_PTR_TO_JSON(Config, config_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(EnvironmentId, environmentId_);
        DARABONBA_PTR_TO_JSON(Icon, icon_);
        DARABONBA_PTR_TO_JSON(Language, language_);
        DARABONBA_PTR_TO_JSON(LatestVersion, latestVersion_);
        DARABONBA_PTR_TO_JSON(Managed, managed_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(Version, version_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(Alias, alias_);
        DARABONBA_PTR_FROM_JSON(Config, config_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(EnvironmentId, environmentId_);
        DARABONBA_PTR_FROM_JSON(Icon, icon_);
        DARABONBA_PTR_FROM_JSON(Language, language_);
        DARABONBA_PTR_FROM_JSON(LatestVersion, latestVersion_);
        DARABONBA_PTR_FROM_JSON(Managed, managed_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(Version, version_);
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
      virtual bool empty() const override { return this->alias_ == nullptr
        && this->config_ == nullptr && this->description_ == nullptr && this->environmentId_ == nullptr && this->icon_ == nullptr && this->language_ == nullptr
        && this->latestVersion_ == nullptr && this->managed_ == nullptr && this->name_ == nullptr && this->status_ == nullptr && this->version_ == nullptr; };
      // alias Field Functions 
      bool hasAlias() const { return this->alias_ != nullptr;};
      void deleteAlias() { this->alias_ = nullptr;};
      inline string getAlias() const { DARABONBA_PTR_GET_DEFAULT(alias_, "") };
      inline Data& setAlias(string alias) { DARABONBA_PTR_SET_VALUE(alias_, alias) };


      // config Field Functions 
      bool hasConfig() const { return this->config_ != nullptr;};
      void deleteConfig() { this->config_ = nullptr;};
      inline const map<string, string> & getConfig() const { DARABONBA_PTR_GET_CONST(config_, map<string, string>) };
      inline map<string, string> getConfig() { DARABONBA_PTR_GET(config_, map<string, string>) };
      inline Data& setConfig(const map<string, string> & config) { DARABONBA_PTR_SET_VALUE(config_, config) };
      inline Data& setConfig(map<string, string> && config) { DARABONBA_PTR_SET_RVALUE(config_, config) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline Data& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // environmentId Field Functions 
      bool hasEnvironmentId() const { return this->environmentId_ != nullptr;};
      void deleteEnvironmentId() { this->environmentId_ = nullptr;};
      inline string getEnvironmentId() const { DARABONBA_PTR_GET_DEFAULT(environmentId_, "") };
      inline Data& setEnvironmentId(string environmentId) { DARABONBA_PTR_SET_VALUE(environmentId_, environmentId) };


      // icon Field Functions 
      bool hasIcon() const { return this->icon_ != nullptr;};
      void deleteIcon() { this->icon_ = nullptr;};
      inline string getIcon() const { DARABONBA_PTR_GET_DEFAULT(icon_, "") };
      inline Data& setIcon(string icon) { DARABONBA_PTR_SET_VALUE(icon_, icon) };


      // language Field Functions 
      bool hasLanguage() const { return this->language_ != nullptr;};
      void deleteLanguage() { this->language_ = nullptr;};
      inline string getLanguage() const { DARABONBA_PTR_GET_DEFAULT(language_, "") };
      inline Data& setLanguage(string language) { DARABONBA_PTR_SET_VALUE(language_, language) };


      // latestVersion Field Functions 
      bool hasLatestVersion() const { return this->latestVersion_ != nullptr;};
      void deleteLatestVersion() { this->latestVersion_ = nullptr;};
      inline string getLatestVersion() const { DARABONBA_PTR_GET_DEFAULT(latestVersion_, "") };
      inline Data& setLatestVersion(string latestVersion) { DARABONBA_PTR_SET_VALUE(latestVersion_, latestVersion) };


      // managed Field Functions 
      bool hasManaged() const { return this->managed_ != nullptr;};
      void deleteManaged() { this->managed_ = nullptr;};
      inline bool getManaged() const { DARABONBA_PTR_GET_DEFAULT(managed_, false) };
      inline Data& setManaged(bool managed) { DARABONBA_PTR_SET_VALUE(managed_, managed) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Data& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Data& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // version Field Functions 
      bool hasVersion() const { return this->version_ != nullptr;};
      void deleteVersion() { this->version_ = nullptr;};
      inline string getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
      inline Data& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


    protected:
      // The alias of the feature.
      shared_ptr<string> alias_ {};
      // The feature configuration.
      shared_ptr<map<string, string>> config_ {};
      // The description of the feature.
      shared_ptr<string> description_ {};
      // The ID of the environment instance.
      shared_ptr<string> environmentId_ {};
      // The URL of the icon.
      shared_ptr<string> icon_ {};
      // The language. Valid values:
      // 
      // *   zh: Chinese
      // *   en: English
      shared_ptr<string> language_ {};
      // The latest version number.
      shared_ptr<string> latestVersion_ {};
      // Indicates whether the component is fully managed.
      shared_ptr<bool> managed_ {};
      // The name of the feature.
      shared_ptr<string> name_ {};
      // The status of the feature. Valid values:
      // 
      // *   Installing: The agent is being installed.
      // *   Success: The agent is installed.
      // *   Failed: The agent failed to be installed.
      // *   UnInstall: The agent is uninstalled.
      // *   Uninstalling: The agent is being uninstalled.
      // *   UnInstallFailed: The agent failed to be uninstalled.
      shared_ptr<string> status_ {};
      // The version of the feature.
      shared_ptr<string> version_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline ListEnvironmentFeaturesResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<ListEnvironmentFeaturesResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<ListEnvironmentFeaturesResponseBody::Data>) };
    inline vector<ListEnvironmentFeaturesResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<ListEnvironmentFeaturesResponseBody::Data>) };
    inline ListEnvironmentFeaturesResponseBody& setData(const vector<ListEnvironmentFeaturesResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListEnvironmentFeaturesResponseBody& setData(vector<ListEnvironmentFeaturesResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListEnvironmentFeaturesResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListEnvironmentFeaturesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListEnvironmentFeaturesResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // Status Code. Description 200 indicates success.
    shared_ptr<int32_t> code_ {};
    // The returned struct.
    shared_ptr<vector<ListEnvironmentFeaturesResponseBody::Data>> data_ {};
    // The returned message.
    shared_ptr<string> message_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
    // Indicates whether the alert rule was deleted. Valid values:
    // 
    // *   `true`: The alert rule was deleted.
    // *   `false`: The alert rule failed to be deleted.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
