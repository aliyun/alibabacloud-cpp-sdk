// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETNACOSCONFIGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETNACOSCONFIGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class GetNacosConfigResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetNacosConfigResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Configuration, configuration_);
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetNacosConfigResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Configuration, configuration_);
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetNacosConfigResponseBody() = default ;
    GetNacosConfigResponseBody(const GetNacosConfigResponseBody &) = default ;
    GetNacosConfigResponseBody(GetNacosConfigResponseBody &&) = default ;
    GetNacosConfigResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetNacosConfigResponseBody() = default ;
    GetNacosConfigResponseBody& operator=(const GetNacosConfigResponseBody &) = default ;
    GetNacosConfigResponseBody& operator=(GetNacosConfigResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Configuration : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Configuration& obj) { 
        DARABONBA_PTR_TO_JSON(AppName, appName_);
        DARABONBA_PTR_TO_JSON(BetaIps, betaIps_);
        DARABONBA_PTR_TO_JSON(Content, content_);
        DARABONBA_PTR_TO_JSON(DataId, dataId_);
        DARABONBA_PTR_TO_JSON(Desc, desc_);
        DARABONBA_PTR_TO_JSON(EncryptedDataKey, encryptedDataKey_);
        DARABONBA_PTR_TO_JSON(GrayVersions, grayVersions_);
        DARABONBA_PTR_TO_JSON(Group, group_);
        DARABONBA_PTR_TO_JSON(Md5, md5_);
        DARABONBA_PTR_TO_JSON(Tags, tags_);
        DARABONBA_PTR_TO_JSON(Type, type_);
      };
      friend void from_json(const Darabonba::Json& j, Configuration& obj) { 
        DARABONBA_PTR_FROM_JSON(AppName, appName_);
        DARABONBA_PTR_FROM_JSON(BetaIps, betaIps_);
        DARABONBA_PTR_FROM_JSON(Content, content_);
        DARABONBA_PTR_FROM_JSON(DataId, dataId_);
        DARABONBA_PTR_FROM_JSON(Desc, desc_);
        DARABONBA_PTR_FROM_JSON(EncryptedDataKey, encryptedDataKey_);
        DARABONBA_PTR_FROM_JSON(GrayVersions, grayVersions_);
        DARABONBA_PTR_FROM_JSON(Group, group_);
        DARABONBA_PTR_FROM_JSON(Md5, md5_);
        DARABONBA_PTR_FROM_JSON(Tags, tags_);
        DARABONBA_PTR_FROM_JSON(Type, type_);
      };
      Configuration() = default ;
      Configuration(const Configuration &) = default ;
      Configuration(Configuration &&) = default ;
      Configuration(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Configuration() = default ;
      Configuration& operator=(const Configuration &) = default ;
      Configuration& operator=(Configuration &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class GrayVersions : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const GrayVersions& obj) { 
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(Priority, priority_);
          DARABONBA_PTR_TO_JSON(Rule, rule_);
          DARABONBA_PTR_TO_JSON(Type, type_);
        };
        friend void from_json(const Darabonba::Json& j, GrayVersions& obj) { 
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(Priority, priority_);
          DARABONBA_PTR_FROM_JSON(Rule, rule_);
          DARABONBA_PTR_FROM_JSON(Type, type_);
        };
        GrayVersions() = default ;
        GrayVersions(const GrayVersions &) = default ;
        GrayVersions(GrayVersions &&) = default ;
        GrayVersions(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~GrayVersions() = default ;
        GrayVersions& operator=(const GrayVersions &) = default ;
        GrayVersions& operator=(GrayVersions &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->name_ == nullptr
        && this->priority_ == nullptr && this->rule_ == nullptr && this->type_ == nullptr; };
        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline GrayVersions& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // priority Field Functions 
        bool hasPriority() const { return this->priority_ != nullptr;};
        void deletePriority() { this->priority_ = nullptr;};
        inline int32_t getPriority() const { DARABONBA_PTR_GET_DEFAULT(priority_, 0) };
        inline GrayVersions& setPriority(int32_t priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


        // rule Field Functions 
        bool hasRule() const { return this->rule_ != nullptr;};
        void deleteRule() { this->rule_ = nullptr;};
        inline string getRule() const { DARABONBA_PTR_GET_DEFAULT(rule_, "") };
        inline GrayVersions& setRule(string rule) { DARABONBA_PTR_SET_VALUE(rule_, rule) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline GrayVersions& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      protected:
        // Gray version name
        shared_ptr<string> name_ {};
        // The priority of the current gray rule.
        shared_ptr<int32_t> priority_ {};
        // Rules of the current gray version
        shared_ptr<string> rule_ {};
        // Gray type
        shared_ptr<string> type_ {};
      };

      virtual bool empty() const override { return this->appName_ == nullptr
        && this->betaIps_ == nullptr && this->content_ == nullptr && this->dataId_ == nullptr && this->desc_ == nullptr && this->encryptedDataKey_ == nullptr
        && this->grayVersions_ == nullptr && this->group_ == nullptr && this->md5_ == nullptr && this->tags_ == nullptr && this->type_ == nullptr; };
      // appName Field Functions 
      bool hasAppName() const { return this->appName_ != nullptr;};
      void deleteAppName() { this->appName_ = nullptr;};
      inline string getAppName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
      inline Configuration& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


      // betaIps Field Functions 
      bool hasBetaIps() const { return this->betaIps_ != nullptr;};
      void deleteBetaIps() { this->betaIps_ = nullptr;};
      inline string getBetaIps() const { DARABONBA_PTR_GET_DEFAULT(betaIps_, "") };
      inline Configuration& setBetaIps(string betaIps) { DARABONBA_PTR_SET_VALUE(betaIps_, betaIps) };


      // content Field Functions 
      bool hasContent() const { return this->content_ != nullptr;};
      void deleteContent() { this->content_ = nullptr;};
      inline string getContent() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
      inline Configuration& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


      // dataId Field Functions 
      bool hasDataId() const { return this->dataId_ != nullptr;};
      void deleteDataId() { this->dataId_ = nullptr;};
      inline string getDataId() const { DARABONBA_PTR_GET_DEFAULT(dataId_, "") };
      inline Configuration& setDataId(string dataId) { DARABONBA_PTR_SET_VALUE(dataId_, dataId) };


      // desc Field Functions 
      bool hasDesc() const { return this->desc_ != nullptr;};
      void deleteDesc() { this->desc_ = nullptr;};
      inline string getDesc() const { DARABONBA_PTR_GET_DEFAULT(desc_, "") };
      inline Configuration& setDesc(string desc) { DARABONBA_PTR_SET_VALUE(desc_, desc) };


      // encryptedDataKey Field Functions 
      bool hasEncryptedDataKey() const { return this->encryptedDataKey_ != nullptr;};
      void deleteEncryptedDataKey() { this->encryptedDataKey_ = nullptr;};
      inline string getEncryptedDataKey() const { DARABONBA_PTR_GET_DEFAULT(encryptedDataKey_, "") };
      inline Configuration& setEncryptedDataKey(string encryptedDataKey) { DARABONBA_PTR_SET_VALUE(encryptedDataKey_, encryptedDataKey) };


      // grayVersions Field Functions 
      bool hasGrayVersions() const { return this->grayVersions_ != nullptr;};
      void deleteGrayVersions() { this->grayVersions_ = nullptr;};
      inline const vector<Configuration::GrayVersions> & getGrayVersions() const { DARABONBA_PTR_GET_CONST(grayVersions_, vector<Configuration::GrayVersions>) };
      inline vector<Configuration::GrayVersions> getGrayVersions() { DARABONBA_PTR_GET(grayVersions_, vector<Configuration::GrayVersions>) };
      inline Configuration& setGrayVersions(const vector<Configuration::GrayVersions> & grayVersions) { DARABONBA_PTR_SET_VALUE(grayVersions_, grayVersions) };
      inline Configuration& setGrayVersions(vector<Configuration::GrayVersions> && grayVersions) { DARABONBA_PTR_SET_RVALUE(grayVersions_, grayVersions) };


      // group Field Functions 
      bool hasGroup() const { return this->group_ != nullptr;};
      void deleteGroup() { this->group_ = nullptr;};
      inline string getGroup() const { DARABONBA_PTR_GET_DEFAULT(group_, "") };
      inline Configuration& setGroup(string group) { DARABONBA_PTR_SET_VALUE(group_, group) };


      // md5 Field Functions 
      bool hasMd5() const { return this->md5_ != nullptr;};
      void deleteMd5() { this->md5_ = nullptr;};
      inline string getMd5() const { DARABONBA_PTR_GET_DEFAULT(md5_, "") };
      inline Configuration& setMd5(string md5) { DARABONBA_PTR_SET_VALUE(md5_, md5) };


      // tags Field Functions 
      bool hasTags() const { return this->tags_ != nullptr;};
      void deleteTags() { this->tags_ = nullptr;};
      inline string getTags() const { DARABONBA_PTR_GET_DEFAULT(tags_, "") };
      inline Configuration& setTags(string tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline Configuration& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    protected:
      // Application name.
      shared_ptr<string> appName_ {};
      // List of IPs for Beta release.
      shared_ptr<string> betaIps_ {};
      // Configuration content.
      shared_ptr<string> content_ {};
      // Configuration ID.
      shared_ptr<string> dataId_ {};
      // Configuration description.
      shared_ptr<string> desc_ {};
      // Encrypted key.
      shared_ptr<string> encryptedDataKey_ {};
      // Current gray version information
      shared_ptr<vector<Configuration::GrayVersions>> grayVersions_ {};
      // Configuration group name.
      shared_ptr<string> group_ {};
      // Message digest of the configuration.
      shared_ptr<string> md5_ {};
      // Tags of the configuration.
      shared_ptr<string> tags_ {};
      // Format of the configuration content.
      shared_ptr<string> type_ {};
    };

    virtual bool empty() const override { return this->configuration_ == nullptr
        && this->errorCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // configuration Field Functions 
    bool hasConfiguration() const { return this->configuration_ != nullptr;};
    void deleteConfiguration() { this->configuration_ = nullptr;};
    inline const GetNacosConfigResponseBody::Configuration & getConfiguration() const { DARABONBA_PTR_GET_CONST(configuration_, GetNacosConfigResponseBody::Configuration) };
    inline GetNacosConfigResponseBody::Configuration getConfiguration() { DARABONBA_PTR_GET(configuration_, GetNacosConfigResponseBody::Configuration) };
    inline GetNacosConfigResponseBody& setConfiguration(const GetNacosConfigResponseBody::Configuration & configuration) { DARABONBA_PTR_SET_VALUE(configuration_, configuration) };
    inline GetNacosConfigResponseBody& setConfiguration(GetNacosConfigResponseBody::Configuration && configuration) { DARABONBA_PTR_SET_RVALUE(configuration_, configuration) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline GetNacosConfigResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetNacosConfigResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetNacosConfigResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetNacosConfigResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // Configuration information.
    shared_ptr<GetNacosConfigResponseBody::Configuration> configuration_ {};
    // Error code.
    shared_ptr<string> errorCode_ {};
    // Message.
    shared_ptr<string> message_ {};
    // Request ID.
    shared_ptr<string> requestId_ {};
    // The result of the request, with values as follows:
    // - `true`: The request was successful.
    // - `false`: The request failed.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
