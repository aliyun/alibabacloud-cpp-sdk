// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSERVICESETTINGSRESPONSEBODYSERVICESETTINGS_HPP_
#define ALIBABACLOUD_MODELS_GETSERVICESETTINGSRESPONSEBODYSERVICESETTINGS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Oos20190601
{
namespace Models
{
  class GetServiceSettingsResponseBodyServiceSettings : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetServiceSettingsResponseBodyServiceSettings& obj) { 
      DARABONBA_PTR_TO_JSON(DeliveryOssBucketName, deliveryOssBucketName_);
      DARABONBA_PTR_TO_JSON(DeliveryOssEnabled, deliveryOssEnabled_);
      DARABONBA_PTR_TO_JSON(DeliveryOssKeyPrefix, deliveryOssKeyPrefix_);
      DARABONBA_PTR_TO_JSON(DeliverySlsEnabled, deliverySlsEnabled_);
      DARABONBA_PTR_TO_JSON(DeliverySlsProjectName, deliverySlsProjectName_);
      DARABONBA_PTR_TO_JSON(RdcEnterpriseId, rdcEnterpriseId_);
    };
    friend void from_json(const Darabonba::Json& j, GetServiceSettingsResponseBodyServiceSettings& obj) { 
      DARABONBA_PTR_FROM_JSON(DeliveryOssBucketName, deliveryOssBucketName_);
      DARABONBA_PTR_FROM_JSON(DeliveryOssEnabled, deliveryOssEnabled_);
      DARABONBA_PTR_FROM_JSON(DeliveryOssKeyPrefix, deliveryOssKeyPrefix_);
      DARABONBA_PTR_FROM_JSON(DeliverySlsEnabled, deliverySlsEnabled_);
      DARABONBA_PTR_FROM_JSON(DeliverySlsProjectName, deliverySlsProjectName_);
      DARABONBA_PTR_FROM_JSON(RdcEnterpriseId, rdcEnterpriseId_);
    };
    GetServiceSettingsResponseBodyServiceSettings() = default ;
    GetServiceSettingsResponseBodyServiceSettings(const GetServiceSettingsResponseBodyServiceSettings &) = default ;
    GetServiceSettingsResponseBodyServiceSettings(GetServiceSettingsResponseBodyServiceSettings &&) = default ;
    GetServiceSettingsResponseBodyServiceSettings(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetServiceSettingsResponseBodyServiceSettings() = default ;
    GetServiceSettingsResponseBodyServiceSettings& operator=(const GetServiceSettingsResponseBodyServiceSettings &) = default ;
    GetServiceSettingsResponseBodyServiceSettings& operator=(GetServiceSettingsResponseBodyServiceSettings &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->deliveryOssBucketName_ == nullptr
        && return this->deliveryOssEnabled_ == nullptr && return this->deliveryOssKeyPrefix_ == nullptr && return this->deliverySlsEnabled_ == nullptr && return this->deliverySlsProjectName_ == nullptr && return this->rdcEnterpriseId_ == nullptr; };
    // deliveryOssBucketName Field Functions 
    bool hasDeliveryOssBucketName() const { return this->deliveryOssBucketName_ != nullptr;};
    void deleteDeliveryOssBucketName() { this->deliveryOssBucketName_ = nullptr;};
    inline string deliveryOssBucketName() const { DARABONBA_PTR_GET_DEFAULT(deliveryOssBucketName_, "") };
    inline GetServiceSettingsResponseBodyServiceSettings& setDeliveryOssBucketName(string deliveryOssBucketName) { DARABONBA_PTR_SET_VALUE(deliveryOssBucketName_, deliveryOssBucketName) };


    // deliveryOssEnabled Field Functions 
    bool hasDeliveryOssEnabled() const { return this->deliveryOssEnabled_ != nullptr;};
    void deleteDeliveryOssEnabled() { this->deliveryOssEnabled_ = nullptr;};
    inline bool deliveryOssEnabled() const { DARABONBA_PTR_GET_DEFAULT(deliveryOssEnabled_, false) };
    inline GetServiceSettingsResponseBodyServiceSettings& setDeliveryOssEnabled(bool deliveryOssEnabled) { DARABONBA_PTR_SET_VALUE(deliveryOssEnabled_, deliveryOssEnabled) };


    // deliveryOssKeyPrefix Field Functions 
    bool hasDeliveryOssKeyPrefix() const { return this->deliveryOssKeyPrefix_ != nullptr;};
    void deleteDeliveryOssKeyPrefix() { this->deliveryOssKeyPrefix_ = nullptr;};
    inline string deliveryOssKeyPrefix() const { DARABONBA_PTR_GET_DEFAULT(deliveryOssKeyPrefix_, "") };
    inline GetServiceSettingsResponseBodyServiceSettings& setDeliveryOssKeyPrefix(string deliveryOssKeyPrefix) { DARABONBA_PTR_SET_VALUE(deliveryOssKeyPrefix_, deliveryOssKeyPrefix) };


    // deliverySlsEnabled Field Functions 
    bool hasDeliverySlsEnabled() const { return this->deliverySlsEnabled_ != nullptr;};
    void deleteDeliverySlsEnabled() { this->deliverySlsEnabled_ = nullptr;};
    inline bool deliverySlsEnabled() const { DARABONBA_PTR_GET_DEFAULT(deliverySlsEnabled_, false) };
    inline GetServiceSettingsResponseBodyServiceSettings& setDeliverySlsEnabled(bool deliverySlsEnabled) { DARABONBA_PTR_SET_VALUE(deliverySlsEnabled_, deliverySlsEnabled) };


    // deliverySlsProjectName Field Functions 
    bool hasDeliverySlsProjectName() const { return this->deliverySlsProjectName_ != nullptr;};
    void deleteDeliverySlsProjectName() { this->deliverySlsProjectName_ = nullptr;};
    inline string deliverySlsProjectName() const { DARABONBA_PTR_GET_DEFAULT(deliverySlsProjectName_, "") };
    inline GetServiceSettingsResponseBodyServiceSettings& setDeliverySlsProjectName(string deliverySlsProjectName) { DARABONBA_PTR_SET_VALUE(deliverySlsProjectName_, deliverySlsProjectName) };


    // rdcEnterpriseId Field Functions 
    bool hasRdcEnterpriseId() const { return this->rdcEnterpriseId_ != nullptr;};
    void deleteRdcEnterpriseId() { this->rdcEnterpriseId_ = nullptr;};
    inline string rdcEnterpriseId() const { DARABONBA_PTR_GET_DEFAULT(rdcEnterpriseId_, "") };
    inline GetServiceSettingsResponseBodyServiceSettings& setRdcEnterpriseId(string rdcEnterpriseId) { DARABONBA_PTR_SET_VALUE(rdcEnterpriseId_, rdcEnterpriseId) };


  protected:
    // The name of OSS bucket to deliver.
    std::shared_ptr<string> deliveryOssBucketName_ = nullptr;
    // Whether to enable OSS delivery.
    std::shared_ptr<bool> deliveryOssEnabled_ = nullptr;
    // The key prefix of OSS to deliver.
    std::shared_ptr<string> deliveryOssKeyPrefix_ = nullptr;
    // Whether to enable SLS delivery.
    std::shared_ptr<bool> deliverySlsEnabled_ = nullptr;
    // The name of SLS project to deliver.
    std::shared_ptr<string> deliverySlsProjectName_ = nullptr;
    // The id of RDC Enterprise.
    std::shared_ptr<string> rdcEnterpriseId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Oos20190601
#endif
