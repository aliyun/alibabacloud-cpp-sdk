// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SETSERVICESETTINGSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SETSERVICESETTINGSREQUEST_HPP_
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
  class SetServiceSettingsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SetServiceSettingsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DeliveryOssBucketName, deliveryOssBucketName_);
      DARABONBA_PTR_TO_JSON(DeliveryOssEnabled, deliveryOssEnabled_);
      DARABONBA_PTR_TO_JSON(DeliveryOssKeyPrefix, deliveryOssKeyPrefix_);
      DARABONBA_PTR_TO_JSON(DeliverySlsEnabled, deliverySlsEnabled_);
      DARABONBA_PTR_TO_JSON(DeliverySlsProjectName, deliverySlsProjectName_);
      DARABONBA_PTR_TO_JSON(RdFolderIds, rdFolderIds_);
      DARABONBA_PTR_TO_JSON(RdcEnterpriseId, rdcEnterpriseId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ServiceAccessRdEnabled, serviceAccessRdEnabled_);
    };
    friend void from_json(const Darabonba::Json& j, SetServiceSettingsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DeliveryOssBucketName, deliveryOssBucketName_);
      DARABONBA_PTR_FROM_JSON(DeliveryOssEnabled, deliveryOssEnabled_);
      DARABONBA_PTR_FROM_JSON(DeliveryOssKeyPrefix, deliveryOssKeyPrefix_);
      DARABONBA_PTR_FROM_JSON(DeliverySlsEnabled, deliverySlsEnabled_);
      DARABONBA_PTR_FROM_JSON(DeliverySlsProjectName, deliverySlsProjectName_);
      DARABONBA_PTR_FROM_JSON(RdFolderIds, rdFolderIds_);
      DARABONBA_PTR_FROM_JSON(RdcEnterpriseId, rdcEnterpriseId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ServiceAccessRdEnabled, serviceAccessRdEnabled_);
    };
    SetServiceSettingsRequest() = default ;
    SetServiceSettingsRequest(const SetServiceSettingsRequest &) = default ;
    SetServiceSettingsRequest(SetServiceSettingsRequest &&) = default ;
    SetServiceSettingsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SetServiceSettingsRequest() = default ;
    SetServiceSettingsRequest& operator=(const SetServiceSettingsRequest &) = default ;
    SetServiceSettingsRequest& operator=(SetServiceSettingsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->deliveryOssBucketName_ == nullptr
        && this->deliveryOssEnabled_ == nullptr && this->deliveryOssKeyPrefix_ == nullptr && this->deliverySlsEnabled_ == nullptr && this->deliverySlsProjectName_ == nullptr && this->rdFolderIds_ == nullptr
        && this->rdcEnterpriseId_ == nullptr && this->regionId_ == nullptr && this->serviceAccessRdEnabled_ == nullptr; };
    // deliveryOssBucketName Field Functions 
    bool hasDeliveryOssBucketName() const { return this->deliveryOssBucketName_ != nullptr;};
    void deleteDeliveryOssBucketName() { this->deliveryOssBucketName_ = nullptr;};
    inline string getDeliveryOssBucketName() const { DARABONBA_PTR_GET_DEFAULT(deliveryOssBucketName_, "") };
    inline SetServiceSettingsRequest& setDeliveryOssBucketName(string deliveryOssBucketName) { DARABONBA_PTR_SET_VALUE(deliveryOssBucketName_, deliveryOssBucketName) };


    // deliveryOssEnabled Field Functions 
    bool hasDeliveryOssEnabled() const { return this->deliveryOssEnabled_ != nullptr;};
    void deleteDeliveryOssEnabled() { this->deliveryOssEnabled_ = nullptr;};
    inline bool getDeliveryOssEnabled() const { DARABONBA_PTR_GET_DEFAULT(deliveryOssEnabled_, false) };
    inline SetServiceSettingsRequest& setDeliveryOssEnabled(bool deliveryOssEnabled) { DARABONBA_PTR_SET_VALUE(deliveryOssEnabled_, deliveryOssEnabled) };


    // deliveryOssKeyPrefix Field Functions 
    bool hasDeliveryOssKeyPrefix() const { return this->deliveryOssKeyPrefix_ != nullptr;};
    void deleteDeliveryOssKeyPrefix() { this->deliveryOssKeyPrefix_ = nullptr;};
    inline string getDeliveryOssKeyPrefix() const { DARABONBA_PTR_GET_DEFAULT(deliveryOssKeyPrefix_, "") };
    inline SetServiceSettingsRequest& setDeliveryOssKeyPrefix(string deliveryOssKeyPrefix) { DARABONBA_PTR_SET_VALUE(deliveryOssKeyPrefix_, deliveryOssKeyPrefix) };


    // deliverySlsEnabled Field Functions 
    bool hasDeliverySlsEnabled() const { return this->deliverySlsEnabled_ != nullptr;};
    void deleteDeliverySlsEnabled() { this->deliverySlsEnabled_ = nullptr;};
    inline bool getDeliverySlsEnabled() const { DARABONBA_PTR_GET_DEFAULT(deliverySlsEnabled_, false) };
    inline SetServiceSettingsRequest& setDeliverySlsEnabled(bool deliverySlsEnabled) { DARABONBA_PTR_SET_VALUE(deliverySlsEnabled_, deliverySlsEnabled) };


    // deliverySlsProjectName Field Functions 
    bool hasDeliverySlsProjectName() const { return this->deliverySlsProjectName_ != nullptr;};
    void deleteDeliverySlsProjectName() { this->deliverySlsProjectName_ = nullptr;};
    inline string getDeliverySlsProjectName() const { DARABONBA_PTR_GET_DEFAULT(deliverySlsProjectName_, "") };
    inline SetServiceSettingsRequest& setDeliverySlsProjectName(string deliverySlsProjectName) { DARABONBA_PTR_SET_VALUE(deliverySlsProjectName_, deliverySlsProjectName) };


    // rdFolderIds Field Functions 
    bool hasRdFolderIds() const { return this->rdFolderIds_ != nullptr;};
    void deleteRdFolderIds() { this->rdFolderIds_ = nullptr;};
    inline const vector<string> & getRdFolderIds() const { DARABONBA_PTR_GET_CONST(rdFolderIds_, vector<string>) };
    inline vector<string> getRdFolderIds() { DARABONBA_PTR_GET(rdFolderIds_, vector<string>) };
    inline SetServiceSettingsRequest& setRdFolderIds(const vector<string> & rdFolderIds) { DARABONBA_PTR_SET_VALUE(rdFolderIds_, rdFolderIds) };
    inline SetServiceSettingsRequest& setRdFolderIds(vector<string> && rdFolderIds) { DARABONBA_PTR_SET_RVALUE(rdFolderIds_, rdFolderIds) };


    // rdcEnterpriseId Field Functions 
    bool hasRdcEnterpriseId() const { return this->rdcEnterpriseId_ != nullptr;};
    void deleteRdcEnterpriseId() { this->rdcEnterpriseId_ = nullptr;};
    inline string getRdcEnterpriseId() const { DARABONBA_PTR_GET_DEFAULT(rdcEnterpriseId_, "") };
    inline SetServiceSettingsRequest& setRdcEnterpriseId(string rdcEnterpriseId) { DARABONBA_PTR_SET_VALUE(rdcEnterpriseId_, rdcEnterpriseId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline SetServiceSettingsRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // serviceAccessRdEnabled Field Functions 
    bool hasServiceAccessRdEnabled() const { return this->serviceAccessRdEnabled_ != nullptr;};
    void deleteServiceAccessRdEnabled() { this->serviceAccessRdEnabled_ = nullptr;};
    inline bool getServiceAccessRdEnabled() const { DARABONBA_PTR_GET_DEFAULT(serviceAccessRdEnabled_, false) };
    inline SetServiceSettingsRequest& setServiceAccessRdEnabled(bool serviceAccessRdEnabled) { DARABONBA_PTR_SET_VALUE(serviceAccessRdEnabled_, serviceAccessRdEnabled) };


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
    shared_ptr<vector<string>> rdFolderIds_ {};
    // The id of RDC Enterprise.
    shared_ptr<string> rdcEnterpriseId_ {};
    // The region ID.
    shared_ptr<string> regionId_ {};
    shared_ptr<bool> serviceAccessRdEnabled_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Oos20190601
#endif
