// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SETSERVICESETTINGSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_SETSERVICESETTINGSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Oos20190601
{
namespace Models
{
  class SetServiceSettingsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SetServiceSettingsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ServiceSettings, serviceSettings_);
    };
    friend void from_json(const Darabonba::Json& j, SetServiceSettingsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ServiceSettings, serviceSettings_);
    };
    SetServiceSettingsResponseBody() = default ;
    SetServiceSettingsResponseBody(const SetServiceSettingsResponseBody &) = default ;
    SetServiceSettingsResponseBody(SetServiceSettingsResponseBody &&) = default ;
    SetServiceSettingsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SetServiceSettingsResponseBody() = default ;
    SetServiceSettingsResponseBody& operator=(const SetServiceSettingsResponseBody &) = default ;
    SetServiceSettingsResponseBody& operator=(SetServiceSettingsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ServiceSettings : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ServiceSettings& obj) { 
        DARABONBA_PTR_TO_JSON(DeliveryOssBucketName, deliveryOssBucketName_);
        DARABONBA_PTR_TO_JSON(DeliveryOssEnabled, deliveryOssEnabled_);
        DARABONBA_PTR_TO_JSON(DeliveryOssKeyPrefix, deliveryOssKeyPrefix_);
        DARABONBA_PTR_TO_JSON(DeliverySlsEnabled, deliverySlsEnabled_);
        DARABONBA_PTR_TO_JSON(DeliverySlsProjectName, deliverySlsProjectName_);
        DARABONBA_PTR_TO_JSON(RdcEnterpriseId, rdcEnterpriseId_);
        DARABONBA_PTR_TO_JSON(ServiceAccessRdEnabled, serviceAccessRdEnabled_);
      };
      friend void from_json(const Darabonba::Json& j, ServiceSettings& obj) { 
        DARABONBA_PTR_FROM_JSON(DeliveryOssBucketName, deliveryOssBucketName_);
        DARABONBA_PTR_FROM_JSON(DeliveryOssEnabled, deliveryOssEnabled_);
        DARABONBA_PTR_FROM_JSON(DeliveryOssKeyPrefix, deliveryOssKeyPrefix_);
        DARABONBA_PTR_FROM_JSON(DeliverySlsEnabled, deliverySlsEnabled_);
        DARABONBA_PTR_FROM_JSON(DeliverySlsProjectName, deliverySlsProjectName_);
        DARABONBA_PTR_FROM_JSON(RdcEnterpriseId, rdcEnterpriseId_);
        DARABONBA_PTR_FROM_JSON(ServiceAccessRdEnabled, serviceAccessRdEnabled_);
      };
      ServiceSettings() = default ;
      ServiceSettings(const ServiceSettings &) = default ;
      ServiceSettings(ServiceSettings &&) = default ;
      ServiceSettings(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ServiceSettings() = default ;
      ServiceSettings& operator=(const ServiceSettings &) = default ;
      ServiceSettings& operator=(ServiceSettings &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->deliveryOssBucketName_ == nullptr
        && this->deliveryOssEnabled_ == nullptr && this->deliveryOssKeyPrefix_ == nullptr && this->deliverySlsEnabled_ == nullptr && this->deliverySlsProjectName_ == nullptr && this->rdcEnterpriseId_ == nullptr
        && this->serviceAccessRdEnabled_ == nullptr; };
      // deliveryOssBucketName Field Functions 
      bool hasDeliveryOssBucketName() const { return this->deliveryOssBucketName_ != nullptr;};
      void deleteDeliveryOssBucketName() { this->deliveryOssBucketName_ = nullptr;};
      inline string getDeliveryOssBucketName() const { DARABONBA_PTR_GET_DEFAULT(deliveryOssBucketName_, "") };
      inline ServiceSettings& setDeliveryOssBucketName(string deliveryOssBucketName) { DARABONBA_PTR_SET_VALUE(deliveryOssBucketName_, deliveryOssBucketName) };


      // deliveryOssEnabled Field Functions 
      bool hasDeliveryOssEnabled() const { return this->deliveryOssEnabled_ != nullptr;};
      void deleteDeliveryOssEnabled() { this->deliveryOssEnabled_ = nullptr;};
      inline bool getDeliveryOssEnabled() const { DARABONBA_PTR_GET_DEFAULT(deliveryOssEnabled_, false) };
      inline ServiceSettings& setDeliveryOssEnabled(bool deliveryOssEnabled) { DARABONBA_PTR_SET_VALUE(deliveryOssEnabled_, deliveryOssEnabled) };


      // deliveryOssKeyPrefix Field Functions 
      bool hasDeliveryOssKeyPrefix() const { return this->deliveryOssKeyPrefix_ != nullptr;};
      void deleteDeliveryOssKeyPrefix() { this->deliveryOssKeyPrefix_ = nullptr;};
      inline string getDeliveryOssKeyPrefix() const { DARABONBA_PTR_GET_DEFAULT(deliveryOssKeyPrefix_, "") };
      inline ServiceSettings& setDeliveryOssKeyPrefix(string deliveryOssKeyPrefix) { DARABONBA_PTR_SET_VALUE(deliveryOssKeyPrefix_, deliveryOssKeyPrefix) };


      // deliverySlsEnabled Field Functions 
      bool hasDeliverySlsEnabled() const { return this->deliverySlsEnabled_ != nullptr;};
      void deleteDeliverySlsEnabled() { this->deliverySlsEnabled_ = nullptr;};
      inline bool getDeliverySlsEnabled() const { DARABONBA_PTR_GET_DEFAULT(deliverySlsEnabled_, false) };
      inline ServiceSettings& setDeliverySlsEnabled(bool deliverySlsEnabled) { DARABONBA_PTR_SET_VALUE(deliverySlsEnabled_, deliverySlsEnabled) };


      // deliverySlsProjectName Field Functions 
      bool hasDeliverySlsProjectName() const { return this->deliverySlsProjectName_ != nullptr;};
      void deleteDeliverySlsProjectName() { this->deliverySlsProjectName_ = nullptr;};
      inline string getDeliverySlsProjectName() const { DARABONBA_PTR_GET_DEFAULT(deliverySlsProjectName_, "") };
      inline ServiceSettings& setDeliverySlsProjectName(string deliverySlsProjectName) { DARABONBA_PTR_SET_VALUE(deliverySlsProjectName_, deliverySlsProjectName) };


      // rdcEnterpriseId Field Functions 
      bool hasRdcEnterpriseId() const { return this->rdcEnterpriseId_ != nullptr;};
      void deleteRdcEnterpriseId() { this->rdcEnterpriseId_ = nullptr;};
      inline string getRdcEnterpriseId() const { DARABONBA_PTR_GET_DEFAULT(rdcEnterpriseId_, "") };
      inline ServiceSettings& setRdcEnterpriseId(string rdcEnterpriseId) { DARABONBA_PTR_SET_VALUE(rdcEnterpriseId_, rdcEnterpriseId) };


      // serviceAccessRdEnabled Field Functions 
      bool hasServiceAccessRdEnabled() const { return this->serviceAccessRdEnabled_ != nullptr;};
      void deleteServiceAccessRdEnabled() { this->serviceAccessRdEnabled_ = nullptr;};
      inline bool getServiceAccessRdEnabled() const { DARABONBA_PTR_GET_DEFAULT(serviceAccessRdEnabled_, false) };
      inline ServiceSettings& setServiceAccessRdEnabled(bool serviceAccessRdEnabled) { DARABONBA_PTR_SET_VALUE(serviceAccessRdEnabled_, serviceAccessRdEnabled) };


    protected:
      // The name of OSS bucket to deliver.
      shared_ptr<string> deliveryOssBucketName_ {};
      // Whether to enable OSS delivery.
      shared_ptr<bool> deliveryOssEnabled_ {};
      // The key prefix of OSS to deliver.
      shared_ptr<string> deliveryOssKeyPrefix_ {};
      // Whether to enable SLS delivery.
      shared_ptr<bool> deliverySlsEnabled_ {};
      // The name of SLS project to deliver.
      shared_ptr<string> deliverySlsProjectName_ {};
      // The id of RDC Enterprise.
      shared_ptr<string> rdcEnterpriseId_ {};
      shared_ptr<bool> serviceAccessRdEnabled_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->serviceSettings_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline SetServiceSettingsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // serviceSettings Field Functions 
    bool hasServiceSettings() const { return this->serviceSettings_ != nullptr;};
    void deleteServiceSettings() { this->serviceSettings_ = nullptr;};
    inline const vector<SetServiceSettingsResponseBody::ServiceSettings> & getServiceSettings() const { DARABONBA_PTR_GET_CONST(serviceSettings_, vector<SetServiceSettingsResponseBody::ServiceSettings>) };
    inline vector<SetServiceSettingsResponseBody::ServiceSettings> getServiceSettings() { DARABONBA_PTR_GET(serviceSettings_, vector<SetServiceSettingsResponseBody::ServiceSettings>) };
    inline SetServiceSettingsResponseBody& setServiceSettings(const vector<SetServiceSettingsResponseBody::ServiceSettings> & serviceSettings) { DARABONBA_PTR_SET_VALUE(serviceSettings_, serviceSettings) };
    inline SetServiceSettingsResponseBody& setServiceSettings(vector<SetServiceSettingsResponseBody::ServiceSettings> && serviceSettings) { DARABONBA_PTR_SET_RVALUE(serviceSettings_, serviceSettings) };


  protected:
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The information of service settings.
    shared_ptr<vector<SetServiceSettingsResponseBody::ServiceSettings>> serviceSettings_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Oos20190601
#endif
