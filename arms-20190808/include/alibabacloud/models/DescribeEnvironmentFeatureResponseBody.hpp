// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEENVIRONMENTFEATURERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEENVIRONMENTFEATURERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <map>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class DescribeEnvironmentFeatureResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeEnvironmentFeatureResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeEnvironmentFeatureResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    DescribeEnvironmentFeatureResponseBody() = default ;
    DescribeEnvironmentFeatureResponseBody(const DescribeEnvironmentFeatureResponseBody &) = default ;
    DescribeEnvironmentFeatureResponseBody(DescribeEnvironmentFeatureResponseBody &&) = default ;
    DescribeEnvironmentFeatureResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeEnvironmentFeatureResponseBody() = default ;
    DescribeEnvironmentFeatureResponseBody& operator=(const DescribeEnvironmentFeatureResponseBody &) = default ;
    DescribeEnvironmentFeatureResponseBody& operator=(DescribeEnvironmentFeatureResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(Feature, feature_);
        DARABONBA_PTR_TO_JSON(FeatureStatus, featureStatus_);
        DARABONBA_PTR_TO_JSON(config, config_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(Feature, feature_);
        DARABONBA_PTR_FROM_JSON(FeatureStatus, featureStatus_);
        DARABONBA_PTR_FROM_JSON(config, config_);
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
      class FeatureStatus : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const FeatureStatus& obj) { 
          DARABONBA_PTR_TO_JSON(BindResourceId, bindResourceId_);
          DARABONBA_PTR_TO_JSON(FeatureContainers, featureContainers_);
          DARABONBA_PTR_TO_JSON(Ips, ips_);
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(Namespace, namespace_);
          DARABONBA_PTR_TO_JSON(SecurityGroupId, securityGroupId_);
          DARABONBA_PTR_TO_JSON(Status, status_);
          DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
        };
        friend void from_json(const Darabonba::Json& j, FeatureStatus& obj) { 
          DARABONBA_PTR_FROM_JSON(BindResourceId, bindResourceId_);
          DARABONBA_PTR_FROM_JSON(FeatureContainers, featureContainers_);
          DARABONBA_PTR_FROM_JSON(Ips, ips_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(Namespace, namespace_);
          DARABONBA_PTR_FROM_JSON(SecurityGroupId, securityGroupId_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
          DARABONBA_PTR_FROM_JSON(VSwitchId, vSwitchId_);
        };
        FeatureStatus() = default ;
        FeatureStatus(const FeatureStatus &) = default ;
        FeatureStatus(FeatureStatus &&) = default ;
        FeatureStatus(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~FeatureStatus() = default ;
        FeatureStatus& operator=(const FeatureStatus &) = default ;
        FeatureStatus& operator=(FeatureStatus &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class FeatureContainers : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const FeatureContainers& obj) { 
            DARABONBA_PTR_TO_JSON(Args, args_);
            DARABONBA_PTR_TO_JSON(Image, image_);
            DARABONBA_PTR_TO_JSON(Name, name_);
          };
          friend void from_json(const Darabonba::Json& j, FeatureContainers& obj) { 
            DARABONBA_PTR_FROM_JSON(Args, args_);
            DARABONBA_PTR_FROM_JSON(Image, image_);
            DARABONBA_PTR_FROM_JSON(Name, name_);
          };
          FeatureContainers() = default ;
          FeatureContainers(const FeatureContainers &) = default ;
          FeatureContainers(FeatureContainers &&) = default ;
          FeatureContainers(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~FeatureContainers() = default ;
          FeatureContainers& operator=(const FeatureContainers &) = default ;
          FeatureContainers& operator=(FeatureContainers &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->args_ == nullptr
        && this->image_ == nullptr && this->name_ == nullptr; };
          // args Field Functions 
          bool hasArgs() const { return this->args_ != nullptr;};
          void deleteArgs() { this->args_ = nullptr;};
          inline const vector<string> & getArgs() const { DARABONBA_PTR_GET_CONST(args_, vector<string>) };
          inline vector<string> getArgs() { DARABONBA_PTR_GET(args_, vector<string>) };
          inline FeatureContainers& setArgs(const vector<string> & args) { DARABONBA_PTR_SET_VALUE(args_, args) };
          inline FeatureContainers& setArgs(vector<string> && args) { DARABONBA_PTR_SET_RVALUE(args_, args) };


          // image Field Functions 
          bool hasImage() const { return this->image_ != nullptr;};
          void deleteImage() { this->image_ = nullptr;};
          inline string getImage() const { DARABONBA_PTR_GET_DEFAULT(image_, "") };
          inline FeatureContainers& setImage(string image) { DARABONBA_PTR_SET_VALUE(image_, image) };


          // name Field Functions 
          bool hasName() const { return this->name_ != nullptr;};
          void deleteName() { this->name_ = nullptr;};
          inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
          inline FeatureContainers& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        protected:
          // The container parameters.
          shared_ptr<vector<string>> args_ {};
          // The container image.
          shared_ptr<string> image_ {};
          // The container name.
          shared_ptr<string> name_ {};
        };

        virtual bool empty() const override { return this->bindResourceId_ == nullptr
        && this->featureContainers_ == nullptr && this->ips_ == nullptr && this->name_ == nullptr && this->namespace_ == nullptr && this->securityGroupId_ == nullptr
        && this->status_ == nullptr && this->vSwitchId_ == nullptr; };
        // bindResourceId Field Functions 
        bool hasBindResourceId() const { return this->bindResourceId_ != nullptr;};
        void deleteBindResourceId() { this->bindResourceId_ = nullptr;};
        inline string getBindResourceId() const { DARABONBA_PTR_GET_DEFAULT(bindResourceId_, "") };
        inline FeatureStatus& setBindResourceId(string bindResourceId) { DARABONBA_PTR_SET_VALUE(bindResourceId_, bindResourceId) };


        // featureContainers Field Functions 
        bool hasFeatureContainers() const { return this->featureContainers_ != nullptr;};
        void deleteFeatureContainers() { this->featureContainers_ = nullptr;};
        inline const vector<FeatureStatus::FeatureContainers> & getFeatureContainers() const { DARABONBA_PTR_GET_CONST(featureContainers_, vector<FeatureStatus::FeatureContainers>) };
        inline vector<FeatureStatus::FeatureContainers> getFeatureContainers() { DARABONBA_PTR_GET(featureContainers_, vector<FeatureStatus::FeatureContainers>) };
        inline FeatureStatus& setFeatureContainers(const vector<FeatureStatus::FeatureContainers> & featureContainers) { DARABONBA_PTR_SET_VALUE(featureContainers_, featureContainers) };
        inline FeatureStatus& setFeatureContainers(vector<FeatureStatus::FeatureContainers> && featureContainers) { DARABONBA_PTR_SET_RVALUE(featureContainers_, featureContainers) };


        // ips Field Functions 
        bool hasIps() const { return this->ips_ != nullptr;};
        void deleteIps() { this->ips_ = nullptr;};
        inline const vector<string> & getIps() const { DARABONBA_PTR_GET_CONST(ips_, vector<string>) };
        inline vector<string> getIps() { DARABONBA_PTR_GET(ips_, vector<string>) };
        inline FeatureStatus& setIps(const vector<string> & ips) { DARABONBA_PTR_SET_VALUE(ips_, ips) };
        inline FeatureStatus& setIps(vector<string> && ips) { DARABONBA_PTR_SET_RVALUE(ips_, ips) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline FeatureStatus& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // namespace Field Functions 
        bool hasNamespace() const { return this->namespace_ != nullptr;};
        void deleteNamespace() { this->namespace_ = nullptr;};
        inline string getNamespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
        inline FeatureStatus& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


        // securityGroupId Field Functions 
        bool hasSecurityGroupId() const { return this->securityGroupId_ != nullptr;};
        void deleteSecurityGroupId() { this->securityGroupId_ = nullptr;};
        inline string getSecurityGroupId() const { DARABONBA_PTR_GET_DEFAULT(securityGroupId_, "") };
        inline FeatureStatus& setSecurityGroupId(string securityGroupId) { DARABONBA_PTR_SET_VALUE(securityGroupId_, securityGroupId) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline FeatureStatus& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // vSwitchId Field Functions 
        bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
        void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
        inline string getVSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
        inline FeatureStatus& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


      protected:
        // The ID of the resource.
        shared_ptr<string> bindResourceId_ {};
        // The containers of the feature.
        shared_ptr<vector<FeatureStatus::FeatureContainers>> featureContainers_ {};
        // The IP address of the pod.
        shared_ptr<vector<string>> ips_ {};
        // The Kubernetes resource name of the feature.
        shared_ptr<string> name_ {};
        // The namespace.
        shared_ptr<string> namespace_ {};
        // The ID of the security group.
        shared_ptr<string> securityGroupId_ {};
        // The status of the agent. Valid values:
        // 
        // *   Success: The agent is running.
        // *   Failed: The agent failed to run.
        // *   Not Found: The agent is not installed.
        shared_ptr<string> status_ {};
        // The ID of the vSwitch.
        shared_ptr<string> vSwitchId_ {};
      };

      class Feature : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Feature& obj) { 
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
        friend void from_json(const Darabonba::Json& j, Feature& obj) { 
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
        Feature() = default ;
        Feature(const Feature &) = default ;
        Feature(Feature &&) = default ;
        Feature(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Feature() = default ;
        Feature& operator=(const Feature &) = default ;
        Feature& operator=(Feature &&) = default ;
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
        inline Feature& setAlias(string alias) { DARABONBA_PTR_SET_VALUE(alias_, alias) };


        // config Field Functions 
        bool hasConfig() const { return this->config_ != nullptr;};
        void deleteConfig() { this->config_ = nullptr;};
        inline const map<string, string> & getConfig() const { DARABONBA_PTR_GET_CONST(config_, map<string, string>) };
        inline map<string, string> getConfig() { DARABONBA_PTR_GET(config_, map<string, string>) };
        inline Feature& setConfig(const map<string, string> & config) { DARABONBA_PTR_SET_VALUE(config_, config) };
        inline Feature& setConfig(map<string, string> && config) { DARABONBA_PTR_SET_RVALUE(config_, config) };


        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline Feature& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // environmentId Field Functions 
        bool hasEnvironmentId() const { return this->environmentId_ != nullptr;};
        void deleteEnvironmentId() { this->environmentId_ = nullptr;};
        inline string getEnvironmentId() const { DARABONBA_PTR_GET_DEFAULT(environmentId_, "") };
        inline Feature& setEnvironmentId(string environmentId) { DARABONBA_PTR_SET_VALUE(environmentId_, environmentId) };


        // icon Field Functions 
        bool hasIcon() const { return this->icon_ != nullptr;};
        void deleteIcon() { this->icon_ = nullptr;};
        inline string getIcon() const { DARABONBA_PTR_GET_DEFAULT(icon_, "") };
        inline Feature& setIcon(string icon) { DARABONBA_PTR_SET_VALUE(icon_, icon) };


        // language Field Functions 
        bool hasLanguage() const { return this->language_ != nullptr;};
        void deleteLanguage() { this->language_ = nullptr;};
        inline string getLanguage() const { DARABONBA_PTR_GET_DEFAULT(language_, "") };
        inline Feature& setLanguage(string language) { DARABONBA_PTR_SET_VALUE(language_, language) };


        // latestVersion Field Functions 
        bool hasLatestVersion() const { return this->latestVersion_ != nullptr;};
        void deleteLatestVersion() { this->latestVersion_ = nullptr;};
        inline string getLatestVersion() const { DARABONBA_PTR_GET_DEFAULT(latestVersion_, "") };
        inline Feature& setLatestVersion(string latestVersion) { DARABONBA_PTR_SET_VALUE(latestVersion_, latestVersion) };


        // managed Field Functions 
        bool hasManaged() const { return this->managed_ != nullptr;};
        void deleteManaged() { this->managed_ = nullptr;};
        inline bool getManaged() const { DARABONBA_PTR_GET_DEFAULT(managed_, false) };
        inline Feature& setManaged(bool managed) { DARABONBA_PTR_SET_VALUE(managed_, managed) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline Feature& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline Feature& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // version Field Functions 
        bool hasVersion() const { return this->version_ != nullptr;};
        void deleteVersion() { this->version_ = nullptr;};
        inline string getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
        inline Feature& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


      protected:
        // The alias of the feature.
        shared_ptr<string> alias_ {};
        // The configuration of the feature.
        shared_ptr<map<string, string>> config_ {};
        // The description of the feature.
        shared_ptr<string> description_ {};
        // The environment ID.
        shared_ptr<string> environmentId_ {};
        // The URL of the icon.
        shared_ptr<string> icon_ {};
        // The language.
        shared_ptr<string> language_ {};
        // The latest version number.
        shared_ptr<string> latestVersion_ {};
        // Indicates whether the component is fully managed.
        shared_ptr<bool> managed_ {};
        // The name of the feature.
        shared_ptr<string> name_ {};
        // The installation status of the agent.
        // 
        // *   Installing: The agent is being installed.
        // *   Success: The agent is installed.
        // *   Failed: The agent failed to be installed.
        // *   UnInstall: The agent is uninstalled or has not been installed.
        // *   Uninstalling: The agent is being uninstalled.
        // *   UnInstallFailed: The agent failed to be uninstalled.
        shared_ptr<string> status_ {};
        // The version number.
        shared_ptr<string> version_ {};
      };

      virtual bool empty() const override { return this->feature_ == nullptr
        && this->featureStatus_ == nullptr && this->config_ == nullptr; };
      // feature Field Functions 
      bool hasFeature() const { return this->feature_ != nullptr;};
      void deleteFeature() { this->feature_ = nullptr;};
      inline const Data::Feature & getFeature() const { DARABONBA_PTR_GET_CONST(feature_, Data::Feature) };
      inline Data::Feature getFeature() { DARABONBA_PTR_GET(feature_, Data::Feature) };
      inline Data& setFeature(const Data::Feature & feature) { DARABONBA_PTR_SET_VALUE(feature_, feature) };
      inline Data& setFeature(Data::Feature && feature) { DARABONBA_PTR_SET_RVALUE(feature_, feature) };


      // featureStatus Field Functions 
      bool hasFeatureStatus() const { return this->featureStatus_ != nullptr;};
      void deleteFeatureStatus() { this->featureStatus_ = nullptr;};
      inline const Data::FeatureStatus & getFeatureStatus() const { DARABONBA_PTR_GET_CONST(featureStatus_, Data::FeatureStatus) };
      inline Data::FeatureStatus getFeatureStatus() { DARABONBA_PTR_GET(featureStatus_, Data::FeatureStatus) };
      inline Data& setFeatureStatus(const Data::FeatureStatus & featureStatus) { DARABONBA_PTR_SET_VALUE(featureStatus_, featureStatus) };
      inline Data& setFeatureStatus(Data::FeatureStatus && featureStatus) { DARABONBA_PTR_SET_RVALUE(featureStatus_, featureStatus) };


      // config Field Functions 
      bool hasConfig() const { return this->config_ != nullptr;};
      void deleteConfig() { this->config_ = nullptr;};
      inline string getConfig() const { DARABONBA_PTR_GET_DEFAULT(config_, "") };
      inline Data& setConfig(string config) { DARABONBA_PTR_SET_VALUE(config_, config) };


    protected:
      // The installation information about the feature.
      shared_ptr<Data::Feature> feature_ {};
      // The status of the feature.
      shared_ptr<Data::FeatureStatus> featureStatus_ {};
      // The feature configurations.
      shared_ptr<string> config_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline DescribeEnvironmentFeatureResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const DescribeEnvironmentFeatureResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, DescribeEnvironmentFeatureResponseBody::Data) };
    inline DescribeEnvironmentFeatureResponseBody::Data getData() { DARABONBA_PTR_GET(data_, DescribeEnvironmentFeatureResponseBody::Data) };
    inline DescribeEnvironmentFeatureResponseBody& setData(const DescribeEnvironmentFeatureResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DescribeEnvironmentFeatureResponseBody& setData(DescribeEnvironmentFeatureResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DescribeEnvironmentFeatureResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeEnvironmentFeatureResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline DescribeEnvironmentFeatureResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The HTTP status code. The status code 200 indicates that the request was successful.
    shared_ptr<int32_t> code_ {};
    // The struct returned.
    shared_ptr<DescribeEnvironmentFeatureResponseBody::Data> data_ {};
    // The returned message.
    shared_ptr<string> message_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful. Valid values: true and false.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
