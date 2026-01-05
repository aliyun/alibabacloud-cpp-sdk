// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATELISTENERLOGCONFIGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATELISTENERLOGCONFIGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alb20200616
{
namespace Models
{
  class UpdateListenerLogConfigRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateListenerLogConfigRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AccessLogRecordCustomizedHeadersEnabled, accessLogRecordCustomizedHeadersEnabled_);
      DARABONBA_PTR_TO_JSON(AccessLogTracingConfig, accessLogTracingConfig_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(DryRun, dryRun_);
      DARABONBA_PTR_TO_JSON(ListenerId, listenerId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateListenerLogConfigRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessLogRecordCustomizedHeadersEnabled, accessLogRecordCustomizedHeadersEnabled_);
      DARABONBA_PTR_FROM_JSON(AccessLogTracingConfig, accessLogTracingConfig_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(DryRun, dryRun_);
      DARABONBA_PTR_FROM_JSON(ListenerId, listenerId_);
    };
    UpdateListenerLogConfigRequest() = default ;
    UpdateListenerLogConfigRequest(const UpdateListenerLogConfigRequest &) = default ;
    UpdateListenerLogConfigRequest(UpdateListenerLogConfigRequest &&) = default ;
    UpdateListenerLogConfigRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateListenerLogConfigRequest() = default ;
    UpdateListenerLogConfigRequest& operator=(const UpdateListenerLogConfigRequest &) = default ;
    UpdateListenerLogConfigRequest& operator=(UpdateListenerLogConfigRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class AccessLogTracingConfig : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AccessLogTracingConfig& obj) { 
        DARABONBA_PTR_TO_JSON(TracingEnabled, tracingEnabled_);
        DARABONBA_PTR_TO_JSON(TracingSample, tracingSample_);
        DARABONBA_PTR_TO_JSON(TracingType, tracingType_);
      };
      friend void from_json(const Darabonba::Json& j, AccessLogTracingConfig& obj) { 
        DARABONBA_PTR_FROM_JSON(TracingEnabled, tracingEnabled_);
        DARABONBA_PTR_FROM_JSON(TracingSample, tracingSample_);
        DARABONBA_PTR_FROM_JSON(TracingType, tracingType_);
      };
      AccessLogTracingConfig() = default ;
      AccessLogTracingConfig(const AccessLogTracingConfig &) = default ;
      AccessLogTracingConfig(AccessLogTracingConfig &&) = default ;
      AccessLogTracingConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AccessLogTracingConfig() = default ;
      AccessLogTracingConfig& operator=(const AccessLogTracingConfig &) = default ;
      AccessLogTracingConfig& operator=(AccessLogTracingConfig &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->tracingEnabled_ == nullptr
        && this->tracingSample_ == nullptr && this->tracingType_ == nullptr; };
      // tracingEnabled Field Functions 
      bool hasTracingEnabled() const { return this->tracingEnabled_ != nullptr;};
      void deleteTracingEnabled() { this->tracingEnabled_ = nullptr;};
      inline bool getTracingEnabled() const { DARABONBA_PTR_GET_DEFAULT(tracingEnabled_, false) };
      inline AccessLogTracingConfig& setTracingEnabled(bool tracingEnabled) { DARABONBA_PTR_SET_VALUE(tracingEnabled_, tracingEnabled) };


      // tracingSample Field Functions 
      bool hasTracingSample() const { return this->tracingSample_ != nullptr;};
      void deleteTracingSample() { this->tracingSample_ = nullptr;};
      inline int32_t getTracingSample() const { DARABONBA_PTR_GET_DEFAULT(tracingSample_, 0) };
      inline AccessLogTracingConfig& setTracingSample(int32_t tracingSample) { DARABONBA_PTR_SET_VALUE(tracingSample_, tracingSample) };


      // tracingType Field Functions 
      bool hasTracingType() const { return this->tracingType_ != nullptr;};
      void deleteTracingType() { this->tracingType_ = nullptr;};
      inline string getTracingType() const { DARABONBA_PTR_GET_DEFAULT(tracingType_, "") };
      inline AccessLogTracingConfig& setTracingType(string tracingType) { DARABONBA_PTR_SET_VALUE(tracingType_, tracingType) };


    protected:
      // Specifies whether to enable the Xtrace feature. Valid values:
      // 
      // *   **true**
      // *   **false** (default)
      // 
      // > You can set this parameter to **true** only if the access log feature is enabled by specifying **AccessLogEnabled**.
      // 
      // This parameter is required.
      shared_ptr<bool> tracingEnabled_ {};
      // The sampling rate of the Xtrace feature.
      // 
      // Valid values: **1 to 10000**.
      // 
      // > This parameter takes effect only if you set **TracingEnabled** to **true**.
      shared_ptr<int32_t> tracingSample_ {};
      // The type of Xtrace. Set the value to **Zipkin**.
      // 
      // > This parameter takes effect only if you set **TracingEnabled** to **true**.
      shared_ptr<string> tracingType_ {};
    };

    virtual bool empty() const override { return this->accessLogRecordCustomizedHeadersEnabled_ == nullptr
        && this->accessLogTracingConfig_ == nullptr && this->clientToken_ == nullptr && this->dryRun_ == nullptr && this->listenerId_ == nullptr; };
    // accessLogRecordCustomizedHeadersEnabled Field Functions 
    bool hasAccessLogRecordCustomizedHeadersEnabled() const { return this->accessLogRecordCustomizedHeadersEnabled_ != nullptr;};
    void deleteAccessLogRecordCustomizedHeadersEnabled() { this->accessLogRecordCustomizedHeadersEnabled_ = nullptr;};
    inline bool getAccessLogRecordCustomizedHeadersEnabled() const { DARABONBA_PTR_GET_DEFAULT(accessLogRecordCustomizedHeadersEnabled_, false) };
    inline UpdateListenerLogConfigRequest& setAccessLogRecordCustomizedHeadersEnabled(bool accessLogRecordCustomizedHeadersEnabled) { DARABONBA_PTR_SET_VALUE(accessLogRecordCustomizedHeadersEnabled_, accessLogRecordCustomizedHeadersEnabled) };


    // accessLogTracingConfig Field Functions 
    bool hasAccessLogTracingConfig() const { return this->accessLogTracingConfig_ != nullptr;};
    void deleteAccessLogTracingConfig() { this->accessLogTracingConfig_ = nullptr;};
    inline const UpdateListenerLogConfigRequest::AccessLogTracingConfig & getAccessLogTracingConfig() const { DARABONBA_PTR_GET_CONST(accessLogTracingConfig_, UpdateListenerLogConfigRequest::AccessLogTracingConfig) };
    inline UpdateListenerLogConfigRequest::AccessLogTracingConfig getAccessLogTracingConfig() { DARABONBA_PTR_GET(accessLogTracingConfig_, UpdateListenerLogConfigRequest::AccessLogTracingConfig) };
    inline UpdateListenerLogConfigRequest& setAccessLogTracingConfig(const UpdateListenerLogConfigRequest::AccessLogTracingConfig & accessLogTracingConfig) { DARABONBA_PTR_SET_VALUE(accessLogTracingConfig_, accessLogTracingConfig) };
    inline UpdateListenerLogConfigRequest& setAccessLogTracingConfig(UpdateListenerLogConfigRequest::AccessLogTracingConfig && accessLogTracingConfig) { DARABONBA_PTR_SET_RVALUE(accessLogTracingConfig_, accessLogTracingConfig) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline UpdateListenerLogConfigRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline bool getDryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, false) };
    inline UpdateListenerLogConfigRequest& setDryRun(bool dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


    // listenerId Field Functions 
    bool hasListenerId() const { return this->listenerId_ != nullptr;};
    void deleteListenerId() { this->listenerId_ = nullptr;};
    inline string getListenerId() const { DARABONBA_PTR_GET_DEFAULT(listenerId_, "") };
    inline UpdateListenerLogConfigRequest& setListenerId(string listenerId) { DARABONBA_PTR_SET_VALUE(listenerId_, listenerId) };


  protected:
    // Specifies whether to record custom headers in the access log. Valid values:
    // 
    // *   **true**
    // *   **false** (default)
    // 
    // > You can set this parameter to **true** only if the access log feature is enabled by specifying **AccessLogEnabled**.
    shared_ptr<bool> accessLogRecordCustomizedHeadersEnabled_ {};
    // The configuration information about the Xtrace feature.
    shared_ptr<UpdateListenerLogConfigRequest::AccessLogTracingConfig> accessLogTracingConfig_ {};
    // The client token that is used to ensure the idempotence of the request.
    // 
    // You can use the client to generate the token, but you must make sure that the token is unique among different requests. The token can contain only ASCII characters.
    // 
    // > If you do not specify this parameter, the system automatically uses the **request ID** as the **client token**. The **request ID** may be different for each request.
    shared_ptr<string> clientToken_ {};
    // Specifies whether to perform only a dry run, without performing the actual request. Valid values:
    // 
    // *   **true**: performs only a dry run. The system checks the request for potential issues, including missing parameter values, incorrect request syntax, and service limits. If the request fails the dry run, an error message is returned. If the request passes the dry run, the `DryRunOperation` error code is returned.
    // *   **false**: (default): performs a dry run and performs the actual request. If the request passes the dry run, a **2xx HTTP** status code is returned and the operation is performed.
    shared_ptr<bool> dryRun_ {};
    // The ID of the Application Load Balancer (ALB) listener.
    // 
    // This parameter is required.
    shared_ptr<string> listenerId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alb20200616
#endif
