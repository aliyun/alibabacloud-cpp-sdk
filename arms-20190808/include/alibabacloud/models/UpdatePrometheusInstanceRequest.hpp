// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEPROMETHEUSINSTANCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEPROMETHEUSINSTANCEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class UpdatePrometheusInstanceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdatePrometheusInstanceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ArchiveDuration, archiveDuration_);
      DARABONBA_PTR_TO_JSON(AuthFreeReadPolicy, authFreeReadPolicy_);
      DARABONBA_PTR_TO_JSON(AuthFreeWritePolicy, authFreeWritePolicy_);
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(EnableAuthFreeRead, enableAuthFreeRead_);
      DARABONBA_PTR_TO_JSON(EnableAuthFreeWrite, enableAuthFreeWrite_);
      DARABONBA_PTR_TO_JSON(EnableAuthToken, enableAuthToken_);
      DARABONBA_PTR_TO_JSON(PaymentType, paymentType_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(StorageDuration, storageDuration_);
    };
    friend void from_json(const Darabonba::Json& j, UpdatePrometheusInstanceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ArchiveDuration, archiveDuration_);
      DARABONBA_PTR_FROM_JSON(AuthFreeReadPolicy, authFreeReadPolicy_);
      DARABONBA_PTR_FROM_JSON(AuthFreeWritePolicy, authFreeWritePolicy_);
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(EnableAuthFreeRead, enableAuthFreeRead_);
      DARABONBA_PTR_FROM_JSON(EnableAuthFreeWrite, enableAuthFreeWrite_);
      DARABONBA_PTR_FROM_JSON(EnableAuthToken, enableAuthToken_);
      DARABONBA_PTR_FROM_JSON(PaymentType, paymentType_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(StorageDuration, storageDuration_);
    };
    UpdatePrometheusInstanceRequest() = default ;
    UpdatePrometheusInstanceRequest(const UpdatePrometheusInstanceRequest &) = default ;
    UpdatePrometheusInstanceRequest(UpdatePrometheusInstanceRequest &&) = default ;
    UpdatePrometheusInstanceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdatePrometheusInstanceRequest() = default ;
    UpdatePrometheusInstanceRequest& operator=(const UpdatePrometheusInstanceRequest &) = default ;
    UpdatePrometheusInstanceRequest& operator=(UpdatePrometheusInstanceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->archiveDuration_ != nullptr
        && this->authFreeReadPolicy_ != nullptr && this->authFreeWritePolicy_ != nullptr && this->clusterId_ != nullptr && this->enableAuthFreeRead_ != nullptr && this->enableAuthFreeWrite_ != nullptr
        && this->enableAuthToken_ != nullptr && this->paymentType_ != nullptr && this->regionId_ != nullptr && this->resourceGroupId_ != nullptr && this->storageDuration_ != nullptr; };
    // archiveDuration Field Functions 
    bool hasArchiveDuration() const { return this->archiveDuration_ != nullptr;};
    void deleteArchiveDuration() { this->archiveDuration_ = nullptr;};
    inline int32_t archiveDuration() const { DARABONBA_PTR_GET_DEFAULT(archiveDuration_, 0) };
    inline UpdatePrometheusInstanceRequest& setArchiveDuration(int32_t archiveDuration) { DARABONBA_PTR_SET_VALUE(archiveDuration_, archiveDuration) };


    // authFreeReadPolicy Field Functions 
    bool hasAuthFreeReadPolicy() const { return this->authFreeReadPolicy_ != nullptr;};
    void deleteAuthFreeReadPolicy() { this->authFreeReadPolicy_ = nullptr;};
    inline string authFreeReadPolicy() const { DARABONBA_PTR_GET_DEFAULT(authFreeReadPolicy_, "") };
    inline UpdatePrometheusInstanceRequest& setAuthFreeReadPolicy(string authFreeReadPolicy) { DARABONBA_PTR_SET_VALUE(authFreeReadPolicy_, authFreeReadPolicy) };


    // authFreeWritePolicy Field Functions 
    bool hasAuthFreeWritePolicy() const { return this->authFreeWritePolicy_ != nullptr;};
    void deleteAuthFreeWritePolicy() { this->authFreeWritePolicy_ = nullptr;};
    inline string authFreeWritePolicy() const { DARABONBA_PTR_GET_DEFAULT(authFreeWritePolicy_, "") };
    inline UpdatePrometheusInstanceRequest& setAuthFreeWritePolicy(string authFreeWritePolicy) { DARABONBA_PTR_SET_VALUE(authFreeWritePolicy_, authFreeWritePolicy) };


    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string clusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline UpdatePrometheusInstanceRequest& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // enableAuthFreeRead Field Functions 
    bool hasEnableAuthFreeRead() const { return this->enableAuthFreeRead_ != nullptr;};
    void deleteEnableAuthFreeRead() { this->enableAuthFreeRead_ = nullptr;};
    inline bool enableAuthFreeRead() const { DARABONBA_PTR_GET_DEFAULT(enableAuthFreeRead_, false) };
    inline UpdatePrometheusInstanceRequest& setEnableAuthFreeRead(bool enableAuthFreeRead) { DARABONBA_PTR_SET_VALUE(enableAuthFreeRead_, enableAuthFreeRead) };


    // enableAuthFreeWrite Field Functions 
    bool hasEnableAuthFreeWrite() const { return this->enableAuthFreeWrite_ != nullptr;};
    void deleteEnableAuthFreeWrite() { this->enableAuthFreeWrite_ = nullptr;};
    inline bool enableAuthFreeWrite() const { DARABONBA_PTR_GET_DEFAULT(enableAuthFreeWrite_, false) };
    inline UpdatePrometheusInstanceRequest& setEnableAuthFreeWrite(bool enableAuthFreeWrite) { DARABONBA_PTR_SET_VALUE(enableAuthFreeWrite_, enableAuthFreeWrite) };


    // enableAuthToken Field Functions 
    bool hasEnableAuthToken() const { return this->enableAuthToken_ != nullptr;};
    void deleteEnableAuthToken() { this->enableAuthToken_ = nullptr;};
    inline bool enableAuthToken() const { DARABONBA_PTR_GET_DEFAULT(enableAuthToken_, false) };
    inline UpdatePrometheusInstanceRequest& setEnableAuthToken(bool enableAuthToken) { DARABONBA_PTR_SET_VALUE(enableAuthToken_, enableAuthToken) };


    // paymentType Field Functions 
    bool hasPaymentType() const { return this->paymentType_ != nullptr;};
    void deletePaymentType() { this->paymentType_ = nullptr;};
    inline string paymentType() const { DARABONBA_PTR_GET_DEFAULT(paymentType_, "") };
    inline UpdatePrometheusInstanceRequest& setPaymentType(string paymentType) { DARABONBA_PTR_SET_VALUE(paymentType_, paymentType) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline UpdatePrometheusInstanceRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline UpdatePrometheusInstanceRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // storageDuration Field Functions 
    bool hasStorageDuration() const { return this->storageDuration_ != nullptr;};
    void deleteStorageDuration() { this->storageDuration_ = nullptr;};
    inline int32_t storageDuration() const { DARABONBA_PTR_GET_DEFAULT(storageDuration_, 0) };
    inline UpdatePrometheusInstanceRequest& setStorageDuration(int32_t storageDuration) { DARABONBA_PTR_SET_VALUE(storageDuration_, storageDuration) };


  protected:
    // The number of days for which data is automatically archived after the storage expires. Valid values: 60, 90, 180, and 365. 0 indicates that the data is not archived.
    std::shared_ptr<int32_t> archiveDuration_ = nullptr;
    // The IP addresses or CIDR blocks for which password-free read is enabled. Separate multiple IP addresses with line breaks.
    std::shared_ptr<string> authFreeReadPolicy_ = nullptr;
    // The IP addresses or CIDR blocks for which password-free write is enabled. Separate multiple IP addresses with line breaks.
    std::shared_ptr<string> authFreeWritePolicy_ = nullptr;
    // The ID of the Prometheus instance.
    // 
    // This parameter is required.
    std::shared_ptr<string> clusterId_ = nullptr;
    // Specifies whether to enable password-free read.
    std::shared_ptr<bool> enableAuthFreeRead_ = nullptr;
    // Specifies whether to enable password-free write.
    std::shared_ptr<bool> enableAuthFreeWrite_ = nullptr;
    // Specifies whether to enable access token authentication.
    std::shared_ptr<bool> enableAuthToken_ = nullptr;
    // The billing mode. Valid values: POSTPAY: charges fees based on the amount of reported metric data. POSTPAY_GB: charges fees based on the amount of written metric data.
    std::shared_ptr<string> paymentType_ = nullptr;
    // The region ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    // The ID of the Prometheus resource group.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    // The data storage duration. Unit: days.
    std::shared_ptr<int32_t> storageDuration_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
