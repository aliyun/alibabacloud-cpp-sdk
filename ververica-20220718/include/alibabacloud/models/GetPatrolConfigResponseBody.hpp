// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPATROLCONFIGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETPATROLCONFIGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <map>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ververica20220718
{
namespace Models
{
  class GetPatrolConfigResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetPatrolConfigResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(errorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(errorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(httpCode, httpCode_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetPatrolConfigResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(errorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(errorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(httpCode, httpCode_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(success, success_);
    };
    GetPatrolConfigResponseBody() = default ;
    GetPatrolConfigResponseBody(const GetPatrolConfigResponseBody &) = default ;
    GetPatrolConfigResponseBody(GetPatrolConfigResponseBody &&) = default ;
    GetPatrolConfigResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetPatrolConfigResponseBody() = default ;
    GetPatrolConfigResponseBody& operator=(const GetPatrolConfigResponseBody &) = default ;
    GetPatrolConfigResponseBody& operator=(GetPatrolConfigResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(configCreatedAt, configCreatedAt_);
        DARABONBA_PTR_TO_JSON(configUpdatedAt, configUpdatedAt_);
        DARABONBA_PTR_TO_JSON(cron, cron_);
        DARABONBA_PTR_TO_JSON(enabled, enabled_);
        DARABONBA_PTR_TO_JSON(namespace, namespace_);
        DARABONBA_PTR_TO_JSON(nextPatrolAt, nextPatrolAt_);
        DARABONBA_PTR_TO_JSON(scopeConfig, scopeConfig_);
        DARABONBA_PTR_TO_JSON(scopeType, scopeType_);
        DARABONBA_PTR_TO_JSON(timezone, timezone_);
        DARABONBA_PTR_TO_JSON(workspace, workspace_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(configCreatedAt, configCreatedAt_);
        DARABONBA_PTR_FROM_JSON(configUpdatedAt, configUpdatedAt_);
        DARABONBA_PTR_FROM_JSON(cron, cron_);
        DARABONBA_PTR_FROM_JSON(enabled, enabled_);
        DARABONBA_PTR_FROM_JSON(namespace, namespace_);
        DARABONBA_PTR_FROM_JSON(nextPatrolAt, nextPatrolAt_);
        DARABONBA_PTR_FROM_JSON(scopeConfig, scopeConfig_);
        DARABONBA_PTR_FROM_JSON(scopeType, scopeType_);
        DARABONBA_PTR_FROM_JSON(timezone, timezone_);
        DARABONBA_PTR_FROM_JSON(workspace, workspace_);
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
      class ScopeConfig : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ScopeConfig& obj) { 
          DARABONBA_PTR_TO_JSON(deploymentIds, deploymentIds_);
          DARABONBA_PTR_TO_JSON(tags, tags_);
        };
        friend void from_json(const Darabonba::Json& j, ScopeConfig& obj) { 
          DARABONBA_PTR_FROM_JSON(deploymentIds, deploymentIds_);
          DARABONBA_PTR_FROM_JSON(tags, tags_);
        };
        ScopeConfig() = default ;
        ScopeConfig(const ScopeConfig &) = default ;
        ScopeConfig(ScopeConfig &&) = default ;
        ScopeConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ScopeConfig() = default ;
        ScopeConfig& operator=(const ScopeConfig &) = default ;
        ScopeConfig& operator=(ScopeConfig &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->deploymentIds_ == nullptr
        && this->tags_ == nullptr; };
        // deploymentIds Field Functions 
        bool hasDeploymentIds() const { return this->deploymentIds_ != nullptr;};
        void deleteDeploymentIds() { this->deploymentIds_ = nullptr;};
        inline const vector<string> & getDeploymentIds() const { DARABONBA_PTR_GET_CONST(deploymentIds_, vector<string>) };
        inline vector<string> getDeploymentIds() { DARABONBA_PTR_GET(deploymentIds_, vector<string>) };
        inline ScopeConfig& setDeploymentIds(const vector<string> & deploymentIds) { DARABONBA_PTR_SET_VALUE(deploymentIds_, deploymentIds) };
        inline ScopeConfig& setDeploymentIds(vector<string> && deploymentIds) { DARABONBA_PTR_SET_RVALUE(deploymentIds_, deploymentIds) };


        // tags Field Functions 
        bool hasTags() const { return this->tags_ != nullptr;};
        void deleteTags() { this->tags_ = nullptr;};
        inline const map<string, vector<string>> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, map<string, vector<string>>) };
        inline map<string, vector<string>> getTags() { DARABONBA_PTR_GET(tags_, map<string, vector<string>>) };
        inline ScopeConfig& setTags(const map<string, vector<string>> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
        inline ScopeConfig& setTags(map<string, vector<string>> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


      protected:
        // The list of deployment IDs. This field is valid only when scopeType is set to DEPLOYMENTS.
        shared_ptr<vector<string>> deploymentIds_ {};
        // The tag mapping. This field is valid only when scopeType is set to TAGS. The key is the tag name, and the value is the list of tag values.
        shared_ptr<map<string, vector<string>>> tags_ {};
      };

      virtual bool empty() const override { return this->configCreatedAt_ == nullptr
        && this->configUpdatedAt_ == nullptr && this->cron_ == nullptr && this->enabled_ == nullptr && this->namespace_ == nullptr && this->nextPatrolAt_ == nullptr
        && this->scopeConfig_ == nullptr && this->scopeType_ == nullptr && this->timezone_ == nullptr && this->workspace_ == nullptr; };
      // configCreatedAt Field Functions 
      bool hasConfigCreatedAt() const { return this->configCreatedAt_ != nullptr;};
      void deleteConfigCreatedAt() { this->configCreatedAt_ = nullptr;};
      inline int64_t getConfigCreatedAt() const { DARABONBA_PTR_GET_DEFAULT(configCreatedAt_, 0L) };
      inline Data& setConfigCreatedAt(int64_t configCreatedAt) { DARABONBA_PTR_SET_VALUE(configCreatedAt_, configCreatedAt) };


      // configUpdatedAt Field Functions 
      bool hasConfigUpdatedAt() const { return this->configUpdatedAt_ != nullptr;};
      void deleteConfigUpdatedAt() { this->configUpdatedAt_ = nullptr;};
      inline int64_t getConfigUpdatedAt() const { DARABONBA_PTR_GET_DEFAULT(configUpdatedAt_, 0L) };
      inline Data& setConfigUpdatedAt(int64_t configUpdatedAt) { DARABONBA_PTR_SET_VALUE(configUpdatedAt_, configUpdatedAt) };


      // cron Field Functions 
      bool hasCron() const { return this->cron_ != nullptr;};
      void deleteCron() { this->cron_ = nullptr;};
      inline string getCron() const { DARABONBA_PTR_GET_DEFAULT(cron_, "") };
      inline Data& setCron(string cron) { DARABONBA_PTR_SET_VALUE(cron_, cron) };


      // enabled Field Functions 
      bool hasEnabled() const { return this->enabled_ != nullptr;};
      void deleteEnabled() { this->enabled_ = nullptr;};
      inline bool getEnabled() const { DARABONBA_PTR_GET_DEFAULT(enabled_, false) };
      inline Data& setEnabled(bool enabled) { DARABONBA_PTR_SET_VALUE(enabled_, enabled) };


      // namespace Field Functions 
      bool hasNamespace() const { return this->namespace_ != nullptr;};
      void deleteNamespace() { this->namespace_ = nullptr;};
      inline string getNamespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
      inline Data& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


      // nextPatrolAt Field Functions 
      bool hasNextPatrolAt() const { return this->nextPatrolAt_ != nullptr;};
      void deleteNextPatrolAt() { this->nextPatrolAt_ = nullptr;};
      inline int64_t getNextPatrolAt() const { DARABONBA_PTR_GET_DEFAULT(nextPatrolAt_, 0L) };
      inline Data& setNextPatrolAt(int64_t nextPatrolAt) { DARABONBA_PTR_SET_VALUE(nextPatrolAt_, nextPatrolAt) };


      // scopeConfig Field Functions 
      bool hasScopeConfig() const { return this->scopeConfig_ != nullptr;};
      void deleteScopeConfig() { this->scopeConfig_ = nullptr;};
      inline const Data::ScopeConfig & getScopeConfig() const { DARABONBA_PTR_GET_CONST(scopeConfig_, Data::ScopeConfig) };
      inline Data::ScopeConfig getScopeConfig() { DARABONBA_PTR_GET(scopeConfig_, Data::ScopeConfig) };
      inline Data& setScopeConfig(const Data::ScopeConfig & scopeConfig) { DARABONBA_PTR_SET_VALUE(scopeConfig_, scopeConfig) };
      inline Data& setScopeConfig(Data::ScopeConfig && scopeConfig) { DARABONBA_PTR_SET_RVALUE(scopeConfig_, scopeConfig) };


      // scopeType Field Functions 
      bool hasScopeType() const { return this->scopeType_ != nullptr;};
      void deleteScopeType() { this->scopeType_ = nullptr;};
      inline string getScopeType() const { DARABONBA_PTR_GET_DEFAULT(scopeType_, "") };
      inline Data& setScopeType(string scopeType) { DARABONBA_PTR_SET_VALUE(scopeType_, scopeType) };


      // timezone Field Functions 
      bool hasTimezone() const { return this->timezone_ != nullptr;};
      void deleteTimezone() { this->timezone_ = nullptr;};
      inline string getTimezone() const { DARABONBA_PTR_GET_DEFAULT(timezone_, "") };
      inline Data& setTimezone(string timezone) { DARABONBA_PTR_SET_VALUE(timezone_, timezone) };


      // workspace Field Functions 
      bool hasWorkspace() const { return this->workspace_ != nullptr;};
      void deleteWorkspace() { this->workspace_ = nullptr;};
      inline string getWorkspace() const { DARABONBA_PTR_GET_DEFAULT(workspace_, "") };
      inline Data& setWorkspace(string workspace) { DARABONBA_PTR_SET_VALUE(workspace_, workspace) };


    protected:
      // The configuration creation time, in milliseconds (UNIX timestamp).
      shared_ptr<int64_t> configCreatedAt_ {};
      // The configuration update time, in milliseconds (UNIX timestamp).
      shared_ptr<int64_t> configUpdatedAt_ {};
      // The cron expression that defines the inspection scheduling time.
      shared_ptr<string> cron_ {};
      // Indicates whether inspection is enabled.
      shared_ptr<bool> enabled_ {};
      // The namespace.
      shared_ptr<string> namespace_ {};
      // The next inspection time, in milliseconds (UNIX timestamp).
      shared_ptr<int64_t> nextPatrolAt_ {};
      // The inspection scope configuration.
      shared_ptr<Data::ScopeConfig> scopeConfig_ {};
      // The inspection scope type. Valid values:
      // - ALL: inspects all deployments.
      // - TAGS: filters deployments by tag.
      // - DEPLOYMENTS: inspects specified deployments.
      shared_ptr<string> scopeType_ {};
      // The time zone.
      shared_ptr<string> timezone_ {};
      // The workspace ID.
      shared_ptr<string> workspace_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->errorCode_ == nullptr && this->errorMessage_ == nullptr && this->httpCode_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetPatrolConfigResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetPatrolConfigResponseBody::Data) };
    inline GetPatrolConfigResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetPatrolConfigResponseBody::Data) };
    inline GetPatrolConfigResponseBody& setData(const GetPatrolConfigResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetPatrolConfigResponseBody& setData(GetPatrolConfigResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline GetPatrolConfigResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline GetPatrolConfigResponseBody& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // httpCode Field Functions 
    bool hasHttpCode() const { return this->httpCode_ != nullptr;};
    void deleteHttpCode() { this->httpCode_ = nullptr;};
    inline int32_t getHttpCode() const { DARABONBA_PTR_GET_DEFAULT(httpCode_, 0) };
    inline GetPatrolConfigResponseBody& setHttpCode(int32_t httpCode) { DARABONBA_PTR_SET_VALUE(httpCode_, httpCode) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetPatrolConfigResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetPatrolConfigResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The inspection configuration response data.
    shared_ptr<GetPatrolConfigResponseBody::Data> data_ {};
    // The error code. This field is not empty when success is false. This field is empty when success is true.
    shared_ptr<string> errorCode_ {};
    // The error message. This field is not empty when success is false. This field is empty when success is true.
    shared_ptr<string> errorMessage_ {};
    // The HTTP status code. The value is always 200. Use the success field to determine whether the request was successful.
    shared_ptr<int32_t> httpCode_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ververica20220718
#endif
