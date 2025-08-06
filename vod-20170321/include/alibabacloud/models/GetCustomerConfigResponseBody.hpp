// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCUSTOMERCONFIGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETCUSTOMERCONFIGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class GetCustomerConfigResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetCustomerConfigResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(AuditConfig, auditConfig_);
      DARABONBA_PTR_TO_JSON(DownloadSwitch, downloadSwitch_);
      DARABONBA_PTR_TO_JSON(MetricConfig, metricConfig_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetCustomerConfigResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(AuditConfig, auditConfig_);
      DARABONBA_PTR_FROM_JSON(DownloadSwitch, downloadSwitch_);
      DARABONBA_PTR_FROM_JSON(MetricConfig, metricConfig_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetCustomerConfigResponseBody() = default ;
    GetCustomerConfigResponseBody(const GetCustomerConfigResponseBody &) = default ;
    GetCustomerConfigResponseBody(GetCustomerConfigResponseBody &&) = default ;
    GetCustomerConfigResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetCustomerConfigResponseBody() = default ;
    GetCustomerConfigResponseBody& operator=(const GetCustomerConfigResponseBody &) = default ;
    GetCustomerConfigResponseBody& operator=(GetCustomerConfigResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->appId_ != nullptr
        && this->auditConfig_ != nullptr && this->downloadSwitch_ != nullptr && this->metricConfig_ != nullptr && this->requestId_ != nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline GetCustomerConfigResponseBody& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // auditConfig Field Functions 
    bool hasAuditConfig() const { return this->auditConfig_ != nullptr;};
    void deleteAuditConfig() { this->auditConfig_ = nullptr;};
    inline string auditConfig() const { DARABONBA_PTR_GET_DEFAULT(auditConfig_, "") };
    inline GetCustomerConfigResponseBody& setAuditConfig(string auditConfig) { DARABONBA_PTR_SET_VALUE(auditConfig_, auditConfig) };


    // downloadSwitch Field Functions 
    bool hasDownloadSwitch() const { return this->downloadSwitch_ != nullptr;};
    void deleteDownloadSwitch() { this->downloadSwitch_ = nullptr;};
    inline string downloadSwitch() const { DARABONBA_PTR_GET_DEFAULT(downloadSwitch_, "") };
    inline GetCustomerConfigResponseBody& setDownloadSwitch(string downloadSwitch) { DARABONBA_PTR_SET_VALUE(downloadSwitch_, downloadSwitch) };


    // metricConfig Field Functions 
    bool hasMetricConfig() const { return this->metricConfig_ != nullptr;};
    void deleteMetricConfig() { this->metricConfig_ = nullptr;};
    inline string metricConfig() const { DARABONBA_PTR_GET_DEFAULT(metricConfig_, "") };
    inline GetCustomerConfigResponseBody& setMetricConfig(string metricConfig) { DARABONBA_PTR_SET_VALUE(metricConfig_, metricConfig) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetCustomerConfigResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<string> appId_ = nullptr;
    std::shared_ptr<string> auditConfig_ = nullptr;
    std::shared_ptr<string> downloadSwitch_ = nullptr;
    std::shared_ptr<string> metricConfig_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
