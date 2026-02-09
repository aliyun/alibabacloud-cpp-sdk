// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMDSMINICONFIGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETMDSMINICONFIGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MPaaS20201028
{
namespace Models
{
  class GetMdsMiniConfigResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetMdsMiniConfigResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResultCode, resultCode_);
      DARABONBA_PTR_TO_JSON(ResultContent, resultContent_);
      DARABONBA_PTR_TO_JSON(ResultMessage, resultMessage_);
    };
    friend void from_json(const Darabonba::Json& j, GetMdsMiniConfigResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResultCode, resultCode_);
      DARABONBA_PTR_FROM_JSON(ResultContent, resultContent_);
      DARABONBA_PTR_FROM_JSON(ResultMessage, resultMessage_);
    };
    GetMdsMiniConfigResponseBody() = default ;
    GetMdsMiniConfigResponseBody(const GetMdsMiniConfigResponseBody &) = default ;
    GetMdsMiniConfigResponseBody(GetMdsMiniConfigResponseBody &&) = default ;
    GetMdsMiniConfigResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetMdsMiniConfigResponseBody() = default ;
    GetMdsMiniConfigResponseBody& operator=(const GetMdsMiniConfigResponseBody &) = default ;
    GetMdsMiniConfigResponseBody& operator=(GetMdsMiniConfigResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ResultContent : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ResultContent& obj) { 
        DARABONBA_PTR_TO_JSON(Data, data_);
        DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      };
      friend void from_json(const Darabonba::Json& j, ResultContent& obj) { 
        DARABONBA_PTR_FROM_JSON(Data, data_);
        DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      };
      ResultContent() = default ;
      ResultContent(const ResultContent &) = default ;
      ResultContent(ResultContent &&) = default ;
      ResultContent(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ResultContent() = default ;
      ResultContent& operator=(const ResultContent &) = default ;
      ResultContent& operator=(ResultContent &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Data : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Data& obj) { 
          DARABONBA_PTR_TO_JSON(Content, content_);
          DARABONBA_PTR_TO_JSON(RequestId, requestId_);
          DARABONBA_PTR_TO_JSON(ResultMsg, resultMsg_);
          DARABONBA_PTR_TO_JSON(Success, success_);
        };
        friend void from_json(const Darabonba::Json& j, Data& obj) { 
          DARABONBA_PTR_FROM_JSON(Content, content_);
          DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
          DARABONBA_PTR_FROM_JSON(ResultMsg, resultMsg_);
          DARABONBA_PTR_FROM_JSON(Success, success_);
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
        class Content : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Content& obj) { 
            DARABONBA_PTR_TO_JSON(ApiConfigList, apiConfigList_);
            DARABONBA_PTR_TO_JSON(AppCode, appCode_);
            DARABONBA_PTR_TO_JSON(EnableServerDomainCount, enableServerDomainCount_);
            DARABONBA_PTR_TO_JSON(H5Id, h5Id_);
            DARABONBA_PTR_TO_JSON(H5Name, h5Name_);
            DARABONBA_PTR_TO_JSON(PrivilegeSwitch, privilegeSwitch_);
            DARABONBA_PTR_TO_JSON(ServerDomainConfigList, serverDomainConfigList_);
            DARABONBA_PTR_TO_JSON(WebviewDomainConfigList, webviewDomainConfigList_);
          };
          friend void from_json(const Darabonba::Json& j, Content& obj) { 
            DARABONBA_PTR_FROM_JSON(ApiConfigList, apiConfigList_);
            DARABONBA_PTR_FROM_JSON(AppCode, appCode_);
            DARABONBA_PTR_FROM_JSON(EnableServerDomainCount, enableServerDomainCount_);
            DARABONBA_PTR_FROM_JSON(H5Id, h5Id_);
            DARABONBA_PTR_FROM_JSON(H5Name, h5Name_);
            DARABONBA_PTR_FROM_JSON(PrivilegeSwitch, privilegeSwitch_);
            DARABONBA_PTR_FROM_JSON(ServerDomainConfigList, serverDomainConfigList_);
            DARABONBA_PTR_FROM_JSON(WebviewDomainConfigList, webviewDomainConfigList_);
          };
          Content() = default ;
          Content(const Content &) = default ;
          Content(Content &&) = default ;
          Content(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Content() = default ;
          Content& operator=(const Content &) = default ;
          Content& operator=(Content &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class WebviewDomainConfigList : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const WebviewDomainConfigList& obj) { 
              DARABONBA_PTR_TO_JSON(AppCode, appCode_);
              DARABONBA_PTR_TO_JSON(ConfigStatus, configStatus_);
              DARABONBA_PTR_TO_JSON(ConfigType, configType_);
              DARABONBA_PTR_TO_JSON(ConfigValue, configValue_);
              DARABONBA_PTR_TO_JSON(Description, description_);
              DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
              DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
              DARABONBA_PTR_TO_JSON(H5Id, h5Id_);
              DARABONBA_PTR_TO_JSON(H5Name, h5Name_);
              DARABONBA_PTR_TO_JSON(Id, id_);
            };
            friend void from_json(const Darabonba::Json& j, WebviewDomainConfigList& obj) { 
              DARABONBA_PTR_FROM_JSON(AppCode, appCode_);
              DARABONBA_PTR_FROM_JSON(ConfigStatus, configStatus_);
              DARABONBA_PTR_FROM_JSON(ConfigType, configType_);
              DARABONBA_PTR_FROM_JSON(ConfigValue, configValue_);
              DARABONBA_PTR_FROM_JSON(Description, description_);
              DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
              DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
              DARABONBA_PTR_FROM_JSON(H5Id, h5Id_);
              DARABONBA_PTR_FROM_JSON(H5Name, h5Name_);
              DARABONBA_PTR_FROM_JSON(Id, id_);
            };
            WebviewDomainConfigList() = default ;
            WebviewDomainConfigList(const WebviewDomainConfigList &) = default ;
            WebviewDomainConfigList(WebviewDomainConfigList &&) = default ;
            WebviewDomainConfigList(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~WebviewDomainConfigList() = default ;
            WebviewDomainConfigList& operator=(const WebviewDomainConfigList &) = default ;
            WebviewDomainConfigList& operator=(WebviewDomainConfigList &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->appCode_ == nullptr
        && this->configStatus_ == nullptr && this->configType_ == nullptr && this->configValue_ == nullptr && this->description_ == nullptr && this->gmtCreate_ == nullptr
        && this->gmtModified_ == nullptr && this->h5Id_ == nullptr && this->h5Name_ == nullptr && this->id_ == nullptr; };
            // appCode Field Functions 
            bool hasAppCode() const { return this->appCode_ != nullptr;};
            void deleteAppCode() { this->appCode_ = nullptr;};
            inline string getAppCode() const { DARABONBA_PTR_GET_DEFAULT(appCode_, "") };
            inline WebviewDomainConfigList& setAppCode(string appCode) { DARABONBA_PTR_SET_VALUE(appCode_, appCode) };


            // configStatus Field Functions 
            bool hasConfigStatus() const { return this->configStatus_ != nullptr;};
            void deleteConfigStatus() { this->configStatus_ = nullptr;};
            inline int64_t getConfigStatus() const { DARABONBA_PTR_GET_DEFAULT(configStatus_, 0L) };
            inline WebviewDomainConfigList& setConfigStatus(int64_t configStatus) { DARABONBA_PTR_SET_VALUE(configStatus_, configStatus) };


            // configType Field Functions 
            bool hasConfigType() const { return this->configType_ != nullptr;};
            void deleteConfigType() { this->configType_ = nullptr;};
            inline string getConfigType() const { DARABONBA_PTR_GET_DEFAULT(configType_, "") };
            inline WebviewDomainConfigList& setConfigType(string configType) { DARABONBA_PTR_SET_VALUE(configType_, configType) };


            // configValue Field Functions 
            bool hasConfigValue() const { return this->configValue_ != nullptr;};
            void deleteConfigValue() { this->configValue_ = nullptr;};
            inline string getConfigValue() const { DARABONBA_PTR_GET_DEFAULT(configValue_, "") };
            inline WebviewDomainConfigList& setConfigValue(string configValue) { DARABONBA_PTR_SET_VALUE(configValue_, configValue) };


            // description Field Functions 
            bool hasDescription() const { return this->description_ != nullptr;};
            void deleteDescription() { this->description_ = nullptr;};
            inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
            inline WebviewDomainConfigList& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


            // gmtCreate Field Functions 
            bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
            void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
            inline string getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
            inline WebviewDomainConfigList& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


            // gmtModified Field Functions 
            bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
            void deleteGmtModified() { this->gmtModified_ = nullptr;};
            inline string getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
            inline WebviewDomainConfigList& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


            // h5Id Field Functions 
            bool hasH5Id() const { return this->h5Id_ != nullptr;};
            void deleteH5Id() { this->h5Id_ = nullptr;};
            inline string getH5Id() const { DARABONBA_PTR_GET_DEFAULT(h5Id_, "") };
            inline WebviewDomainConfigList& setH5Id(string h5Id) { DARABONBA_PTR_SET_VALUE(h5Id_, h5Id) };


            // h5Name Field Functions 
            bool hasH5Name() const { return this->h5Name_ != nullptr;};
            void deleteH5Name() { this->h5Name_ = nullptr;};
            inline string getH5Name() const { DARABONBA_PTR_GET_DEFAULT(h5Name_, "") };
            inline WebviewDomainConfigList& setH5Name(string h5Name) { DARABONBA_PTR_SET_VALUE(h5Name_, h5Name) };


            // id Field Functions 
            bool hasId() const { return this->id_ != nullptr;};
            void deleteId() { this->id_ = nullptr;};
            inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
            inline WebviewDomainConfigList& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


          protected:
            shared_ptr<string> appCode_ {};
            shared_ptr<int64_t> configStatus_ {};
            shared_ptr<string> configType_ {};
            shared_ptr<string> configValue_ {};
            shared_ptr<string> description_ {};
            shared_ptr<string> gmtCreate_ {};
            shared_ptr<string> gmtModified_ {};
            shared_ptr<string> h5Id_ {};
            shared_ptr<string> h5Name_ {};
            shared_ptr<int64_t> id_ {};
          };

          class ServerDomainConfigList : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const ServerDomainConfigList& obj) { 
              DARABONBA_PTR_TO_JSON(AppCode, appCode_);
              DARABONBA_PTR_TO_JSON(ConfigStatus, configStatus_);
              DARABONBA_PTR_TO_JSON(ConfigType, configType_);
              DARABONBA_PTR_TO_JSON(ConfigValue, configValue_);
              DARABONBA_PTR_TO_JSON(Description, description_);
              DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
              DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
              DARABONBA_PTR_TO_JSON(H5Id, h5Id_);
              DARABONBA_PTR_TO_JSON(H5Name, h5Name_);
              DARABONBA_PTR_TO_JSON(Id, id_);
            };
            friend void from_json(const Darabonba::Json& j, ServerDomainConfigList& obj) { 
              DARABONBA_PTR_FROM_JSON(AppCode, appCode_);
              DARABONBA_PTR_FROM_JSON(ConfigStatus, configStatus_);
              DARABONBA_PTR_FROM_JSON(ConfigType, configType_);
              DARABONBA_PTR_FROM_JSON(ConfigValue, configValue_);
              DARABONBA_PTR_FROM_JSON(Description, description_);
              DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
              DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
              DARABONBA_PTR_FROM_JSON(H5Id, h5Id_);
              DARABONBA_PTR_FROM_JSON(H5Name, h5Name_);
              DARABONBA_PTR_FROM_JSON(Id, id_);
            };
            ServerDomainConfigList() = default ;
            ServerDomainConfigList(const ServerDomainConfigList &) = default ;
            ServerDomainConfigList(ServerDomainConfigList &&) = default ;
            ServerDomainConfigList(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~ServerDomainConfigList() = default ;
            ServerDomainConfigList& operator=(const ServerDomainConfigList &) = default ;
            ServerDomainConfigList& operator=(ServerDomainConfigList &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->appCode_ == nullptr
        && this->configStatus_ == nullptr && this->configType_ == nullptr && this->configValue_ == nullptr && this->description_ == nullptr && this->gmtCreate_ == nullptr
        && this->gmtModified_ == nullptr && this->h5Id_ == nullptr && this->h5Name_ == nullptr && this->id_ == nullptr; };
            // appCode Field Functions 
            bool hasAppCode() const { return this->appCode_ != nullptr;};
            void deleteAppCode() { this->appCode_ = nullptr;};
            inline string getAppCode() const { DARABONBA_PTR_GET_DEFAULT(appCode_, "") };
            inline ServerDomainConfigList& setAppCode(string appCode) { DARABONBA_PTR_SET_VALUE(appCode_, appCode) };


            // configStatus Field Functions 
            bool hasConfigStatus() const { return this->configStatus_ != nullptr;};
            void deleteConfigStatus() { this->configStatus_ = nullptr;};
            inline int64_t getConfigStatus() const { DARABONBA_PTR_GET_DEFAULT(configStatus_, 0L) };
            inline ServerDomainConfigList& setConfigStatus(int64_t configStatus) { DARABONBA_PTR_SET_VALUE(configStatus_, configStatus) };


            // configType Field Functions 
            bool hasConfigType() const { return this->configType_ != nullptr;};
            void deleteConfigType() { this->configType_ = nullptr;};
            inline string getConfigType() const { DARABONBA_PTR_GET_DEFAULT(configType_, "") };
            inline ServerDomainConfigList& setConfigType(string configType) { DARABONBA_PTR_SET_VALUE(configType_, configType) };


            // configValue Field Functions 
            bool hasConfigValue() const { return this->configValue_ != nullptr;};
            void deleteConfigValue() { this->configValue_ = nullptr;};
            inline string getConfigValue() const { DARABONBA_PTR_GET_DEFAULT(configValue_, "") };
            inline ServerDomainConfigList& setConfigValue(string configValue) { DARABONBA_PTR_SET_VALUE(configValue_, configValue) };


            // description Field Functions 
            bool hasDescription() const { return this->description_ != nullptr;};
            void deleteDescription() { this->description_ = nullptr;};
            inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
            inline ServerDomainConfigList& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


            // gmtCreate Field Functions 
            bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
            void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
            inline string getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
            inline ServerDomainConfigList& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


            // gmtModified Field Functions 
            bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
            void deleteGmtModified() { this->gmtModified_ = nullptr;};
            inline string getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
            inline ServerDomainConfigList& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


            // h5Id Field Functions 
            bool hasH5Id() const { return this->h5Id_ != nullptr;};
            void deleteH5Id() { this->h5Id_ = nullptr;};
            inline string getH5Id() const { DARABONBA_PTR_GET_DEFAULT(h5Id_, "") };
            inline ServerDomainConfigList& setH5Id(string h5Id) { DARABONBA_PTR_SET_VALUE(h5Id_, h5Id) };


            // h5Name Field Functions 
            bool hasH5Name() const { return this->h5Name_ != nullptr;};
            void deleteH5Name() { this->h5Name_ = nullptr;};
            inline string getH5Name() const { DARABONBA_PTR_GET_DEFAULT(h5Name_, "") };
            inline ServerDomainConfigList& setH5Name(string h5Name) { DARABONBA_PTR_SET_VALUE(h5Name_, h5Name) };


            // id Field Functions 
            bool hasId() const { return this->id_ != nullptr;};
            void deleteId() { this->id_ = nullptr;};
            inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
            inline ServerDomainConfigList& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


          protected:
            shared_ptr<string> appCode_ {};
            shared_ptr<int64_t> configStatus_ {};
            shared_ptr<string> configType_ {};
            shared_ptr<string> configValue_ {};
            shared_ptr<string> description_ {};
            shared_ptr<string> gmtCreate_ {};
            shared_ptr<string> gmtModified_ {};
            shared_ptr<string> h5Id_ {};
            shared_ptr<string> h5Name_ {};
            shared_ptr<int64_t> id_ {};
          };

          class PrivilegeSwitch : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const PrivilegeSwitch& obj) { 
              DARABONBA_PTR_TO_JSON(AppCode, appCode_);
              DARABONBA_PTR_TO_JSON(ConfigStatus, configStatus_);
              DARABONBA_PTR_TO_JSON(ConfigType, configType_);
              DARABONBA_PTR_TO_JSON(ConfigValue, configValue_);
              DARABONBA_PTR_TO_JSON(Description, description_);
              DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
              DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
              DARABONBA_PTR_TO_JSON(H5Id, h5Id_);
              DARABONBA_PTR_TO_JSON(H5Name, h5Name_);
              DARABONBA_PTR_TO_JSON(Id, id_);
            };
            friend void from_json(const Darabonba::Json& j, PrivilegeSwitch& obj) { 
              DARABONBA_PTR_FROM_JSON(AppCode, appCode_);
              DARABONBA_PTR_FROM_JSON(ConfigStatus, configStatus_);
              DARABONBA_PTR_FROM_JSON(ConfigType, configType_);
              DARABONBA_PTR_FROM_JSON(ConfigValue, configValue_);
              DARABONBA_PTR_FROM_JSON(Description, description_);
              DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
              DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
              DARABONBA_PTR_FROM_JSON(H5Id, h5Id_);
              DARABONBA_PTR_FROM_JSON(H5Name, h5Name_);
              DARABONBA_PTR_FROM_JSON(Id, id_);
            };
            PrivilegeSwitch() = default ;
            PrivilegeSwitch(const PrivilegeSwitch &) = default ;
            PrivilegeSwitch(PrivilegeSwitch &&) = default ;
            PrivilegeSwitch(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~PrivilegeSwitch() = default ;
            PrivilegeSwitch& operator=(const PrivilegeSwitch &) = default ;
            PrivilegeSwitch& operator=(PrivilegeSwitch &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->appCode_ == nullptr
        && this->configStatus_ == nullptr && this->configType_ == nullptr && this->configValue_ == nullptr && this->description_ == nullptr && this->gmtCreate_ == nullptr
        && this->gmtModified_ == nullptr && this->h5Id_ == nullptr && this->h5Name_ == nullptr && this->id_ == nullptr; };
            // appCode Field Functions 
            bool hasAppCode() const { return this->appCode_ != nullptr;};
            void deleteAppCode() { this->appCode_ = nullptr;};
            inline string getAppCode() const { DARABONBA_PTR_GET_DEFAULT(appCode_, "") };
            inline PrivilegeSwitch& setAppCode(string appCode) { DARABONBA_PTR_SET_VALUE(appCode_, appCode) };


            // configStatus Field Functions 
            bool hasConfigStatus() const { return this->configStatus_ != nullptr;};
            void deleteConfigStatus() { this->configStatus_ = nullptr;};
            inline int64_t getConfigStatus() const { DARABONBA_PTR_GET_DEFAULT(configStatus_, 0L) };
            inline PrivilegeSwitch& setConfigStatus(int64_t configStatus) { DARABONBA_PTR_SET_VALUE(configStatus_, configStatus) };


            // configType Field Functions 
            bool hasConfigType() const { return this->configType_ != nullptr;};
            void deleteConfigType() { this->configType_ = nullptr;};
            inline string getConfigType() const { DARABONBA_PTR_GET_DEFAULT(configType_, "") };
            inline PrivilegeSwitch& setConfigType(string configType) { DARABONBA_PTR_SET_VALUE(configType_, configType) };


            // configValue Field Functions 
            bool hasConfigValue() const { return this->configValue_ != nullptr;};
            void deleteConfigValue() { this->configValue_ = nullptr;};
            inline string getConfigValue() const { DARABONBA_PTR_GET_DEFAULT(configValue_, "") };
            inline PrivilegeSwitch& setConfigValue(string configValue) { DARABONBA_PTR_SET_VALUE(configValue_, configValue) };


            // description Field Functions 
            bool hasDescription() const { return this->description_ != nullptr;};
            void deleteDescription() { this->description_ = nullptr;};
            inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
            inline PrivilegeSwitch& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


            // gmtCreate Field Functions 
            bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
            void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
            inline string getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
            inline PrivilegeSwitch& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


            // gmtModified Field Functions 
            bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
            void deleteGmtModified() { this->gmtModified_ = nullptr;};
            inline string getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
            inline PrivilegeSwitch& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


            // h5Id Field Functions 
            bool hasH5Id() const { return this->h5Id_ != nullptr;};
            void deleteH5Id() { this->h5Id_ = nullptr;};
            inline string getH5Id() const { DARABONBA_PTR_GET_DEFAULT(h5Id_, "") };
            inline PrivilegeSwitch& setH5Id(string h5Id) { DARABONBA_PTR_SET_VALUE(h5Id_, h5Id) };


            // h5Name Field Functions 
            bool hasH5Name() const { return this->h5Name_ != nullptr;};
            void deleteH5Name() { this->h5Name_ = nullptr;};
            inline string getH5Name() const { DARABONBA_PTR_GET_DEFAULT(h5Name_, "") };
            inline PrivilegeSwitch& setH5Name(string h5Name) { DARABONBA_PTR_SET_VALUE(h5Name_, h5Name) };


            // id Field Functions 
            bool hasId() const { return this->id_ != nullptr;};
            void deleteId() { this->id_ = nullptr;};
            inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
            inline PrivilegeSwitch& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


          protected:
            shared_ptr<string> appCode_ {};
            shared_ptr<int64_t> configStatus_ {};
            shared_ptr<string> configType_ {};
            shared_ptr<string> configValue_ {};
            shared_ptr<string> description_ {};
            shared_ptr<string> gmtCreate_ {};
            shared_ptr<string> gmtModified_ {};
            shared_ptr<string> h5Id_ {};
            shared_ptr<string> h5Name_ {};
            shared_ptr<int64_t> id_ {};
          };

          class ApiConfigList : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const ApiConfigList& obj) { 
              DARABONBA_PTR_TO_JSON(AppCode, appCode_);
              DARABONBA_PTR_TO_JSON(ConfigStatus, configStatus_);
              DARABONBA_PTR_TO_JSON(ConfigType, configType_);
              DARABONBA_PTR_TO_JSON(ConfigValue, configValue_);
              DARABONBA_PTR_TO_JSON(Description, description_);
              DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
              DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
              DARABONBA_PTR_TO_JSON(H5Id, h5Id_);
              DARABONBA_PTR_TO_JSON(H5Name, h5Name_);
              DARABONBA_PTR_TO_JSON(Id, id_);
            };
            friend void from_json(const Darabonba::Json& j, ApiConfigList& obj) { 
              DARABONBA_PTR_FROM_JSON(AppCode, appCode_);
              DARABONBA_PTR_FROM_JSON(ConfigStatus, configStatus_);
              DARABONBA_PTR_FROM_JSON(ConfigType, configType_);
              DARABONBA_PTR_FROM_JSON(ConfigValue, configValue_);
              DARABONBA_PTR_FROM_JSON(Description, description_);
              DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
              DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
              DARABONBA_PTR_FROM_JSON(H5Id, h5Id_);
              DARABONBA_PTR_FROM_JSON(H5Name, h5Name_);
              DARABONBA_PTR_FROM_JSON(Id, id_);
            };
            ApiConfigList() = default ;
            ApiConfigList(const ApiConfigList &) = default ;
            ApiConfigList(ApiConfigList &&) = default ;
            ApiConfigList(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~ApiConfigList() = default ;
            ApiConfigList& operator=(const ApiConfigList &) = default ;
            ApiConfigList& operator=(ApiConfigList &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->appCode_ == nullptr
        && this->configStatus_ == nullptr && this->configType_ == nullptr && this->configValue_ == nullptr && this->description_ == nullptr && this->gmtCreate_ == nullptr
        && this->gmtModified_ == nullptr && this->h5Id_ == nullptr && this->h5Name_ == nullptr && this->id_ == nullptr; };
            // appCode Field Functions 
            bool hasAppCode() const { return this->appCode_ != nullptr;};
            void deleteAppCode() { this->appCode_ = nullptr;};
            inline string getAppCode() const { DARABONBA_PTR_GET_DEFAULT(appCode_, "") };
            inline ApiConfigList& setAppCode(string appCode) { DARABONBA_PTR_SET_VALUE(appCode_, appCode) };


            // configStatus Field Functions 
            bool hasConfigStatus() const { return this->configStatus_ != nullptr;};
            void deleteConfigStatus() { this->configStatus_ = nullptr;};
            inline int64_t getConfigStatus() const { DARABONBA_PTR_GET_DEFAULT(configStatus_, 0L) };
            inline ApiConfigList& setConfigStatus(int64_t configStatus) { DARABONBA_PTR_SET_VALUE(configStatus_, configStatus) };


            // configType Field Functions 
            bool hasConfigType() const { return this->configType_ != nullptr;};
            void deleteConfigType() { this->configType_ = nullptr;};
            inline string getConfigType() const { DARABONBA_PTR_GET_DEFAULT(configType_, "") };
            inline ApiConfigList& setConfigType(string configType) { DARABONBA_PTR_SET_VALUE(configType_, configType) };


            // configValue Field Functions 
            bool hasConfigValue() const { return this->configValue_ != nullptr;};
            void deleteConfigValue() { this->configValue_ = nullptr;};
            inline string getConfigValue() const { DARABONBA_PTR_GET_DEFAULT(configValue_, "") };
            inline ApiConfigList& setConfigValue(string configValue) { DARABONBA_PTR_SET_VALUE(configValue_, configValue) };


            // description Field Functions 
            bool hasDescription() const { return this->description_ != nullptr;};
            void deleteDescription() { this->description_ = nullptr;};
            inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
            inline ApiConfigList& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


            // gmtCreate Field Functions 
            bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
            void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
            inline string getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
            inline ApiConfigList& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


            // gmtModified Field Functions 
            bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
            void deleteGmtModified() { this->gmtModified_ = nullptr;};
            inline string getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
            inline ApiConfigList& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


            // h5Id Field Functions 
            bool hasH5Id() const { return this->h5Id_ != nullptr;};
            void deleteH5Id() { this->h5Id_ = nullptr;};
            inline string getH5Id() const { DARABONBA_PTR_GET_DEFAULT(h5Id_, "") };
            inline ApiConfigList& setH5Id(string h5Id) { DARABONBA_PTR_SET_VALUE(h5Id_, h5Id) };


            // h5Name Field Functions 
            bool hasH5Name() const { return this->h5Name_ != nullptr;};
            void deleteH5Name() { this->h5Name_ = nullptr;};
            inline string getH5Name() const { DARABONBA_PTR_GET_DEFAULT(h5Name_, "") };
            inline ApiConfigList& setH5Name(string h5Name) { DARABONBA_PTR_SET_VALUE(h5Name_, h5Name) };


            // id Field Functions 
            bool hasId() const { return this->id_ != nullptr;};
            void deleteId() { this->id_ = nullptr;};
            inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
            inline ApiConfigList& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


          protected:
            shared_ptr<string> appCode_ {};
            shared_ptr<int64_t> configStatus_ {};
            shared_ptr<string> configType_ {};
            shared_ptr<string> configValue_ {};
            shared_ptr<string> description_ {};
            shared_ptr<string> gmtCreate_ {};
            shared_ptr<string> gmtModified_ {};
            shared_ptr<string> h5Id_ {};
            shared_ptr<string> h5Name_ {};
            shared_ptr<int64_t> id_ {};
          };

          virtual bool empty() const override { return this->apiConfigList_ == nullptr
        && this->appCode_ == nullptr && this->enableServerDomainCount_ == nullptr && this->h5Id_ == nullptr && this->h5Name_ == nullptr && this->privilegeSwitch_ == nullptr
        && this->serverDomainConfigList_ == nullptr && this->webviewDomainConfigList_ == nullptr; };
          // apiConfigList Field Functions 
          bool hasApiConfigList() const { return this->apiConfigList_ != nullptr;};
          void deleteApiConfigList() { this->apiConfigList_ = nullptr;};
          inline const vector<Content::ApiConfigList> & getApiConfigList() const { DARABONBA_PTR_GET_CONST(apiConfigList_, vector<Content::ApiConfigList>) };
          inline vector<Content::ApiConfigList> getApiConfigList() { DARABONBA_PTR_GET(apiConfigList_, vector<Content::ApiConfigList>) };
          inline Content& setApiConfigList(const vector<Content::ApiConfigList> & apiConfigList) { DARABONBA_PTR_SET_VALUE(apiConfigList_, apiConfigList) };
          inline Content& setApiConfigList(vector<Content::ApiConfigList> && apiConfigList) { DARABONBA_PTR_SET_RVALUE(apiConfigList_, apiConfigList) };


          // appCode Field Functions 
          bool hasAppCode() const { return this->appCode_ != nullptr;};
          void deleteAppCode() { this->appCode_ = nullptr;};
          inline string getAppCode() const { DARABONBA_PTR_GET_DEFAULT(appCode_, "") };
          inline Content& setAppCode(string appCode) { DARABONBA_PTR_SET_VALUE(appCode_, appCode) };


          // enableServerDomainCount Field Functions 
          bool hasEnableServerDomainCount() const { return this->enableServerDomainCount_ != nullptr;};
          void deleteEnableServerDomainCount() { this->enableServerDomainCount_ = nullptr;};
          inline string getEnableServerDomainCount() const { DARABONBA_PTR_GET_DEFAULT(enableServerDomainCount_, "") };
          inline Content& setEnableServerDomainCount(string enableServerDomainCount) { DARABONBA_PTR_SET_VALUE(enableServerDomainCount_, enableServerDomainCount) };


          // h5Id Field Functions 
          bool hasH5Id() const { return this->h5Id_ != nullptr;};
          void deleteH5Id() { this->h5Id_ = nullptr;};
          inline string getH5Id() const { DARABONBA_PTR_GET_DEFAULT(h5Id_, "") };
          inline Content& setH5Id(string h5Id) { DARABONBA_PTR_SET_VALUE(h5Id_, h5Id) };


          // h5Name Field Functions 
          bool hasH5Name() const { return this->h5Name_ != nullptr;};
          void deleteH5Name() { this->h5Name_ = nullptr;};
          inline string getH5Name() const { DARABONBA_PTR_GET_DEFAULT(h5Name_, "") };
          inline Content& setH5Name(string h5Name) { DARABONBA_PTR_SET_VALUE(h5Name_, h5Name) };


          // privilegeSwitch Field Functions 
          bool hasPrivilegeSwitch() const { return this->privilegeSwitch_ != nullptr;};
          void deletePrivilegeSwitch() { this->privilegeSwitch_ = nullptr;};
          inline const Content::PrivilegeSwitch & getPrivilegeSwitch() const { DARABONBA_PTR_GET_CONST(privilegeSwitch_, Content::PrivilegeSwitch) };
          inline Content::PrivilegeSwitch getPrivilegeSwitch() { DARABONBA_PTR_GET(privilegeSwitch_, Content::PrivilegeSwitch) };
          inline Content& setPrivilegeSwitch(const Content::PrivilegeSwitch & privilegeSwitch) { DARABONBA_PTR_SET_VALUE(privilegeSwitch_, privilegeSwitch) };
          inline Content& setPrivilegeSwitch(Content::PrivilegeSwitch && privilegeSwitch) { DARABONBA_PTR_SET_RVALUE(privilegeSwitch_, privilegeSwitch) };


          // serverDomainConfigList Field Functions 
          bool hasServerDomainConfigList() const { return this->serverDomainConfigList_ != nullptr;};
          void deleteServerDomainConfigList() { this->serverDomainConfigList_ = nullptr;};
          inline const vector<Content::ServerDomainConfigList> & getServerDomainConfigList() const { DARABONBA_PTR_GET_CONST(serverDomainConfigList_, vector<Content::ServerDomainConfigList>) };
          inline vector<Content::ServerDomainConfigList> getServerDomainConfigList() { DARABONBA_PTR_GET(serverDomainConfigList_, vector<Content::ServerDomainConfigList>) };
          inline Content& setServerDomainConfigList(const vector<Content::ServerDomainConfigList> & serverDomainConfigList) { DARABONBA_PTR_SET_VALUE(serverDomainConfigList_, serverDomainConfigList) };
          inline Content& setServerDomainConfigList(vector<Content::ServerDomainConfigList> && serverDomainConfigList) { DARABONBA_PTR_SET_RVALUE(serverDomainConfigList_, serverDomainConfigList) };


          // webviewDomainConfigList Field Functions 
          bool hasWebviewDomainConfigList() const { return this->webviewDomainConfigList_ != nullptr;};
          void deleteWebviewDomainConfigList() { this->webviewDomainConfigList_ = nullptr;};
          inline const vector<Content::WebviewDomainConfigList> & getWebviewDomainConfigList() const { DARABONBA_PTR_GET_CONST(webviewDomainConfigList_, vector<Content::WebviewDomainConfigList>) };
          inline vector<Content::WebviewDomainConfigList> getWebviewDomainConfigList() { DARABONBA_PTR_GET(webviewDomainConfigList_, vector<Content::WebviewDomainConfigList>) };
          inline Content& setWebviewDomainConfigList(const vector<Content::WebviewDomainConfigList> & webviewDomainConfigList) { DARABONBA_PTR_SET_VALUE(webviewDomainConfigList_, webviewDomainConfigList) };
          inline Content& setWebviewDomainConfigList(vector<Content::WebviewDomainConfigList> && webviewDomainConfigList) { DARABONBA_PTR_SET_RVALUE(webviewDomainConfigList_, webviewDomainConfigList) };


        protected:
          shared_ptr<vector<Content::ApiConfigList>> apiConfigList_ {};
          shared_ptr<string> appCode_ {};
          shared_ptr<string> enableServerDomainCount_ {};
          shared_ptr<string> h5Id_ {};
          shared_ptr<string> h5Name_ {};
          shared_ptr<Content::PrivilegeSwitch> privilegeSwitch_ {};
          shared_ptr<vector<Content::ServerDomainConfigList>> serverDomainConfigList_ {};
          shared_ptr<vector<Content::WebviewDomainConfigList>> webviewDomainConfigList_ {};
        };

        virtual bool empty() const override { return this->content_ == nullptr
        && this->requestId_ == nullptr && this->resultMsg_ == nullptr && this->success_ == nullptr; };
        // content Field Functions 
        bool hasContent() const { return this->content_ != nullptr;};
        void deleteContent() { this->content_ = nullptr;};
        inline const Data::Content & getContent() const { DARABONBA_PTR_GET_CONST(content_, Data::Content) };
        inline Data::Content getContent() { DARABONBA_PTR_GET(content_, Data::Content) };
        inline Data& setContent(const Data::Content & content) { DARABONBA_PTR_SET_VALUE(content_, content) };
        inline Data& setContent(Data::Content && content) { DARABONBA_PTR_SET_RVALUE(content_, content) };


        // requestId Field Functions 
        bool hasRequestId() const { return this->requestId_ != nullptr;};
        void deleteRequestId() { this->requestId_ = nullptr;};
        inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
        inline Data& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


        // resultMsg Field Functions 
        bool hasResultMsg() const { return this->resultMsg_ != nullptr;};
        void deleteResultMsg() { this->resultMsg_ = nullptr;};
        inline string getResultMsg() const { DARABONBA_PTR_GET_DEFAULT(resultMsg_, "") };
        inline Data& setResultMsg(string resultMsg) { DARABONBA_PTR_SET_VALUE(resultMsg_, resultMsg) };


        // success Field Functions 
        bool hasSuccess() const { return this->success_ != nullptr;};
        void deleteSuccess() { this->success_ = nullptr;};
        inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
        inline Data& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


      protected:
        shared_ptr<Data::Content> content_ {};
        shared_ptr<string> requestId_ {};
        shared_ptr<string> resultMsg_ {};
        shared_ptr<bool> success_ {};
      };

      virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr; };
      // data Field Functions 
      bool hasData() const { return this->data_ != nullptr;};
      void deleteData() { this->data_ = nullptr;};
      inline const ResultContent::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, ResultContent::Data) };
      inline ResultContent::Data getData() { DARABONBA_PTR_GET(data_, ResultContent::Data) };
      inline ResultContent& setData(const ResultContent::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
      inline ResultContent& setData(ResultContent::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


      // requestId Field Functions 
      bool hasRequestId() const { return this->requestId_ != nullptr;};
      void deleteRequestId() { this->requestId_ = nullptr;};
      inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
      inline ResultContent& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    protected:
      shared_ptr<ResultContent::Data> data_ {};
      shared_ptr<string> requestId_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->resultCode_ == nullptr && this->resultContent_ == nullptr && this->resultMessage_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetMdsMiniConfigResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resultCode Field Functions 
    bool hasResultCode() const { return this->resultCode_ != nullptr;};
    void deleteResultCode() { this->resultCode_ = nullptr;};
    inline string getResultCode() const { DARABONBA_PTR_GET_DEFAULT(resultCode_, "") };
    inline GetMdsMiniConfigResponseBody& setResultCode(string resultCode) { DARABONBA_PTR_SET_VALUE(resultCode_, resultCode) };


    // resultContent Field Functions 
    bool hasResultContent() const { return this->resultContent_ != nullptr;};
    void deleteResultContent() { this->resultContent_ = nullptr;};
    inline const GetMdsMiniConfigResponseBody::ResultContent & getResultContent() const { DARABONBA_PTR_GET_CONST(resultContent_, GetMdsMiniConfigResponseBody::ResultContent) };
    inline GetMdsMiniConfigResponseBody::ResultContent getResultContent() { DARABONBA_PTR_GET(resultContent_, GetMdsMiniConfigResponseBody::ResultContent) };
    inline GetMdsMiniConfigResponseBody& setResultContent(const GetMdsMiniConfigResponseBody::ResultContent & resultContent) { DARABONBA_PTR_SET_VALUE(resultContent_, resultContent) };
    inline GetMdsMiniConfigResponseBody& setResultContent(GetMdsMiniConfigResponseBody::ResultContent && resultContent) { DARABONBA_PTR_SET_RVALUE(resultContent_, resultContent) };


    // resultMessage Field Functions 
    bool hasResultMessage() const { return this->resultMessage_ != nullptr;};
    void deleteResultMessage() { this->resultMessage_ = nullptr;};
    inline string getResultMessage() const { DARABONBA_PTR_GET_DEFAULT(resultMessage_, "") };
    inline GetMdsMiniConfigResponseBody& setResultMessage(string resultMessage) { DARABONBA_PTR_SET_VALUE(resultMessage_, resultMessage) };


  protected:
    shared_ptr<string> requestId_ {};
    shared_ptr<string> resultCode_ {};
    shared_ptr<GetMdsMiniConfigResponseBody::ResultContent> resultContent_ {};
    shared_ptr<string> resultMessage_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MPaaS20201028
#endif
