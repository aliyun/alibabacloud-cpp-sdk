// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEPROMETHEUSINSTANCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEPROMETHEUSINSTANCEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class UpdatePrometheusInstanceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdatePrometheusInstanceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(archiveDuration, archiveDuration_);
      DARABONBA_PTR_TO_JSON(authFreeReadPolicy, authFreeReadPolicy_);
      DARABONBA_PTR_TO_JSON(authFreeWritePolicy, authFreeWritePolicy_);
      DARABONBA_PTR_TO_JSON(enableAuthFreeRead, enableAuthFreeRead_);
      DARABONBA_PTR_TO_JSON(enableAuthFreeWrite, enableAuthFreeWrite_);
      DARABONBA_PTR_TO_JSON(enableAuthToken, enableAuthToken_);
      DARABONBA_PTR_TO_JSON(paymentType, paymentType_);
      DARABONBA_PTR_TO_JSON(prometheusInstanceName, prometheusInstanceName_);
      DARABONBA_PTR_TO_JSON(status, status_);
      DARABONBA_PTR_TO_JSON(storageDuration, storageDuration_);
      DARABONBA_PTR_TO_JSON(workspace, workspace_);
    };
    friend void from_json(const Darabonba::Json& j, UpdatePrometheusInstanceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(archiveDuration, archiveDuration_);
      DARABONBA_PTR_FROM_JSON(authFreeReadPolicy, authFreeReadPolicy_);
      DARABONBA_PTR_FROM_JSON(authFreeWritePolicy, authFreeWritePolicy_);
      DARABONBA_PTR_FROM_JSON(enableAuthFreeRead, enableAuthFreeRead_);
      DARABONBA_PTR_FROM_JSON(enableAuthFreeWrite, enableAuthFreeWrite_);
      DARABONBA_PTR_FROM_JSON(enableAuthToken, enableAuthToken_);
      DARABONBA_PTR_FROM_JSON(paymentType, paymentType_);
      DARABONBA_PTR_FROM_JSON(prometheusInstanceName, prometheusInstanceName_);
      DARABONBA_PTR_FROM_JSON(status, status_);
      DARABONBA_PTR_FROM_JSON(storageDuration, storageDuration_);
      DARABONBA_PTR_FROM_JSON(workspace, workspace_);
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
    virtual bool empty() const override { return this->archiveDuration_ == nullptr
        && return this->authFreeReadPolicy_ == nullptr && return this->authFreeWritePolicy_ == nullptr && return this->enableAuthFreeRead_ == nullptr && return this->enableAuthFreeWrite_ == nullptr && return this->enableAuthToken_ == nullptr
        && return this->paymentType_ == nullptr && return this->prometheusInstanceName_ == nullptr && return this->status_ == nullptr && return this->storageDuration_ == nullptr && return this->workspace_ == nullptr; };
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


    // prometheusInstanceName Field Functions 
    bool hasPrometheusInstanceName() const { return this->prometheusInstanceName_ != nullptr;};
    void deletePrometheusInstanceName() { this->prometheusInstanceName_ = nullptr;};
    inline string prometheusInstanceName() const { DARABONBA_PTR_GET_DEFAULT(prometheusInstanceName_, "") };
    inline UpdatePrometheusInstanceRequest& setPrometheusInstanceName(string prometheusInstanceName) { DARABONBA_PTR_SET_VALUE(prometheusInstanceName_, prometheusInstanceName) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline UpdatePrometheusInstanceRequest& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // storageDuration Field Functions 
    bool hasStorageDuration() const { return this->storageDuration_ != nullptr;};
    void deleteStorageDuration() { this->storageDuration_ = nullptr;};
    inline int32_t storageDuration() const { DARABONBA_PTR_GET_DEFAULT(storageDuration_, 0) };
    inline UpdatePrometheusInstanceRequest& setStorageDuration(int32_t storageDuration) { DARABONBA_PTR_SET_VALUE(storageDuration_, storageDuration) };


    // workspace Field Functions 
    bool hasWorkspace() const { return this->workspace_ != nullptr;};
    void deleteWorkspace() { this->workspace_ = nullptr;};
    inline string workspace() const { DARABONBA_PTR_GET_DEFAULT(workspace_, "") };
    inline UpdatePrometheusInstanceRequest& setWorkspace(string workspace) { DARABONBA_PTR_SET_VALUE(workspace_, workspace) };


  protected:
    // The number of days to automatically archive and save after the storage expires, 0 means no archiving. The range of archiving days:
    // V1: 1~365 days. Only supported for metric write volume.
    // V2: 1~3650 days (3650 indicates permanent storage).
    std::shared_ptr<int32_t> archiveDuration_ = nullptr;
    // Password-free read policy (supports IP segments and VpcId).
    std::shared_ptr<string> authFreeReadPolicy_ = nullptr;
    // Password-free write policy (supports IP segments and VpcId).
    std::shared_ptr<string> authFreeWritePolicy_ = nullptr;
    // Whether to enable password-free read.
    std::shared_ptr<bool> enableAuthFreeRead_ = nullptr;
    // Whether to enable password-free write.
    std::shared_ptr<bool> enableAuthFreeWrite_ = nullptr;
    // Whether to enable access token authentication.
    std::shared_ptr<bool> enableAuthToken_ = nullptr;
    // Billing method (can only be modified once during the instance\\"s lifecycle):
    // POSTPAY: Postpaid by metric reporting volume.
    // POSTPAY_GB: Postpaid by metric write volume.
    std::shared_ptr<string> paymentType_ = nullptr;
    // Instance name.
    std::shared_ptr<string> prometheusInstanceName_ = nullptr;
    // Instance storage DB status (only supports RUNNING). If empty, the storage DB status will not be changed.
    std::shared_ptr<string> status_ = nullptr;
    // Storage duration (days):
    // By write volume: 90, 180.
    // By metric reporting volume: 15, 30, 60, 90, 180.
    std::shared_ptr<int32_t> storageDuration_ = nullptr;
    // Belonging workspace.
    std::shared_ptr<string> workspace_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
