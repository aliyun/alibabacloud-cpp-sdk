// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESUSPICIOUSOVERALLCONFIGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESUSPICIOUSOVERALLCONFIGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeSuspiciousOverallConfigResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSuspiciousOverallConfigResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(OverallConfig, overallConfig_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSuspiciousOverallConfigResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(OverallConfig, overallConfig_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeSuspiciousOverallConfigResponseBody() = default ;
    DescribeSuspiciousOverallConfigResponseBody(const DescribeSuspiciousOverallConfigResponseBody &) = default ;
    DescribeSuspiciousOverallConfigResponseBody(DescribeSuspiciousOverallConfigResponseBody &&) = default ;
    DescribeSuspiciousOverallConfigResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSuspiciousOverallConfigResponseBody() = default ;
    DescribeSuspiciousOverallConfigResponseBody& operator=(const DescribeSuspiciousOverallConfigResponseBody &) = default ;
    DescribeSuspiciousOverallConfigResponseBody& operator=(DescribeSuspiciousOverallConfigResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class OverallConfig : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const OverallConfig& obj) { 
        DARABONBA_PTR_TO_JSON(Config, config_);
        DARABONBA_PTR_TO_JSON(Type, type_);
      };
      friend void from_json(const Darabonba::Json& j, OverallConfig& obj) { 
        DARABONBA_PTR_FROM_JSON(Config, config_);
        DARABONBA_PTR_FROM_JSON(Type, type_);
      };
      OverallConfig() = default ;
      OverallConfig(const OverallConfig &) = default ;
      OverallConfig(OverallConfig &&) = default ;
      OverallConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~OverallConfig() = default ;
      OverallConfig& operator=(const OverallConfig &) = default ;
      OverallConfig& operator=(OverallConfig &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->config_ == nullptr
        && this->type_ == nullptr; };
      // config Field Functions 
      bool hasConfig() const { return this->config_ != nullptr;};
      void deleteConfig() { this->config_ = nullptr;};
      inline string getConfig() const { DARABONBA_PTR_GET_DEFAULT(config_, "") };
      inline OverallConfig& setConfig(string config) { DARABONBA_PTR_SET_VALUE(config_, config) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline OverallConfig& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    protected:
      // The status of the feature. Valid values:
      // 
      // *   **off**: disabled
      // *   **on**: enabled
      shared_ptr<string> config_ {};
      // The type of the feature. Valid values:
      // 
      // *   **auto_breaking**: Anti-Virus
      // *   **ransomware_breaking**: Anti-ransomware (Bait Capture)
      // *   **webshell_cloud_breaking**: Webshell Protection
      // *   **alinet**: Behavior prevention
      // *   **k8s_log_analysis**: K8s Threat Detection
      // *   **alisecguard**: Defense mode for Client Protection
      shared_ptr<string> type_ {};
    };

    virtual bool empty() const override { return this->overallConfig_ == nullptr
        && this->requestId_ == nullptr; };
    // overallConfig Field Functions 
    bool hasOverallConfig() const { return this->overallConfig_ != nullptr;};
    void deleteOverallConfig() { this->overallConfig_ = nullptr;};
    inline const DescribeSuspiciousOverallConfigResponseBody::OverallConfig & getOverallConfig() const { DARABONBA_PTR_GET_CONST(overallConfig_, DescribeSuspiciousOverallConfigResponseBody::OverallConfig) };
    inline DescribeSuspiciousOverallConfigResponseBody::OverallConfig getOverallConfig() { DARABONBA_PTR_GET(overallConfig_, DescribeSuspiciousOverallConfigResponseBody::OverallConfig) };
    inline DescribeSuspiciousOverallConfigResponseBody& setOverallConfig(const DescribeSuspiciousOverallConfigResponseBody::OverallConfig & overallConfig) { DARABONBA_PTR_SET_VALUE(overallConfig_, overallConfig) };
    inline DescribeSuspiciousOverallConfigResponseBody& setOverallConfig(DescribeSuspiciousOverallConfigResponseBody::OverallConfig && overallConfig) { DARABONBA_PTR_SET_RVALUE(overallConfig_, overallConfig) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeSuspiciousOverallConfigResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The configuration.
    shared_ptr<DescribeSuspiciousOverallConfigResponseBody::OverallConfig> overallConfig_ {};
    // The ID of the request, which is used to locate and troubleshoot issues.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
