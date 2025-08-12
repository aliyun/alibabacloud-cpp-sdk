// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEPROMETHEUSINSTANCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEPROMETHEUSINSTANCEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreatePrometheusInstanceRequestTags.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class CreatePrometheusInstanceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreatePrometheusInstanceRequest& obj) { 
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
      DARABONBA_PTR_TO_JSON(tags, tags_);
      DARABONBA_PTR_TO_JSON(workspace, workspace_);
    };
    friend void from_json(const Darabonba::Json& j, CreatePrometheusInstanceRequest& obj) { 
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
      DARABONBA_PTR_FROM_JSON(tags, tags_);
      DARABONBA_PTR_FROM_JSON(workspace, workspace_);
    };
    CreatePrometheusInstanceRequest() = default ;
    CreatePrometheusInstanceRequest(const CreatePrometheusInstanceRequest &) = default ;
    CreatePrometheusInstanceRequest(CreatePrometheusInstanceRequest &&) = default ;
    CreatePrometheusInstanceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreatePrometheusInstanceRequest() = default ;
    CreatePrometheusInstanceRequest& operator=(const CreatePrometheusInstanceRequest &) = default ;
    CreatePrometheusInstanceRequest& operator=(CreatePrometheusInstanceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->archiveDuration_ != nullptr
        && this->authFreeReadPolicy_ != nullptr && this->authFreeWritePolicy_ != nullptr && this->enableAuthFreeRead_ != nullptr && this->enableAuthFreeWrite_ != nullptr && this->enableAuthToken_ != nullptr
        && this->paymentType_ != nullptr && this->prometheusInstanceName_ != nullptr && this->status_ != nullptr && this->storageDuration_ != nullptr && this->tags_ != nullptr
        && this->workspace_ != nullptr; };
    // archiveDuration Field Functions 
    bool hasArchiveDuration() const { return this->archiveDuration_ != nullptr;};
    void deleteArchiveDuration() { this->archiveDuration_ = nullptr;};
    inline int32_t archiveDuration() const { DARABONBA_PTR_GET_DEFAULT(archiveDuration_, 0) };
    inline CreatePrometheusInstanceRequest& setArchiveDuration(int32_t archiveDuration) { DARABONBA_PTR_SET_VALUE(archiveDuration_, archiveDuration) };


    // authFreeReadPolicy Field Functions 
    bool hasAuthFreeReadPolicy() const { return this->authFreeReadPolicy_ != nullptr;};
    void deleteAuthFreeReadPolicy() { this->authFreeReadPolicy_ = nullptr;};
    inline string authFreeReadPolicy() const { DARABONBA_PTR_GET_DEFAULT(authFreeReadPolicy_, "") };
    inline CreatePrometheusInstanceRequest& setAuthFreeReadPolicy(string authFreeReadPolicy) { DARABONBA_PTR_SET_VALUE(authFreeReadPolicy_, authFreeReadPolicy) };


    // authFreeWritePolicy Field Functions 
    bool hasAuthFreeWritePolicy() const { return this->authFreeWritePolicy_ != nullptr;};
    void deleteAuthFreeWritePolicy() { this->authFreeWritePolicy_ = nullptr;};
    inline string authFreeWritePolicy() const { DARABONBA_PTR_GET_DEFAULT(authFreeWritePolicy_, "") };
    inline CreatePrometheusInstanceRequest& setAuthFreeWritePolicy(string authFreeWritePolicy) { DARABONBA_PTR_SET_VALUE(authFreeWritePolicy_, authFreeWritePolicy) };


    // enableAuthFreeRead Field Functions 
    bool hasEnableAuthFreeRead() const { return this->enableAuthFreeRead_ != nullptr;};
    void deleteEnableAuthFreeRead() { this->enableAuthFreeRead_ = nullptr;};
    inline bool enableAuthFreeRead() const { DARABONBA_PTR_GET_DEFAULT(enableAuthFreeRead_, false) };
    inline CreatePrometheusInstanceRequest& setEnableAuthFreeRead(bool enableAuthFreeRead) { DARABONBA_PTR_SET_VALUE(enableAuthFreeRead_, enableAuthFreeRead) };


    // enableAuthFreeWrite Field Functions 
    bool hasEnableAuthFreeWrite() const { return this->enableAuthFreeWrite_ != nullptr;};
    void deleteEnableAuthFreeWrite() { this->enableAuthFreeWrite_ = nullptr;};
    inline bool enableAuthFreeWrite() const { DARABONBA_PTR_GET_DEFAULT(enableAuthFreeWrite_, false) };
    inline CreatePrometheusInstanceRequest& setEnableAuthFreeWrite(bool enableAuthFreeWrite) { DARABONBA_PTR_SET_VALUE(enableAuthFreeWrite_, enableAuthFreeWrite) };


    // enableAuthToken Field Functions 
    bool hasEnableAuthToken() const { return this->enableAuthToken_ != nullptr;};
    void deleteEnableAuthToken() { this->enableAuthToken_ = nullptr;};
    inline bool enableAuthToken() const { DARABONBA_PTR_GET_DEFAULT(enableAuthToken_, false) };
    inline CreatePrometheusInstanceRequest& setEnableAuthToken(bool enableAuthToken) { DARABONBA_PTR_SET_VALUE(enableAuthToken_, enableAuthToken) };


    // paymentType Field Functions 
    bool hasPaymentType() const { return this->paymentType_ != nullptr;};
    void deletePaymentType() { this->paymentType_ = nullptr;};
    inline string paymentType() const { DARABONBA_PTR_GET_DEFAULT(paymentType_, "") };
    inline CreatePrometheusInstanceRequest& setPaymentType(string paymentType) { DARABONBA_PTR_SET_VALUE(paymentType_, paymentType) };


    // prometheusInstanceName Field Functions 
    bool hasPrometheusInstanceName() const { return this->prometheusInstanceName_ != nullptr;};
    void deletePrometheusInstanceName() { this->prometheusInstanceName_ = nullptr;};
    inline string prometheusInstanceName() const { DARABONBA_PTR_GET_DEFAULT(prometheusInstanceName_, "") };
    inline CreatePrometheusInstanceRequest& setPrometheusInstanceName(string prometheusInstanceName) { DARABONBA_PTR_SET_VALUE(prometheusInstanceName_, prometheusInstanceName) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline CreatePrometheusInstanceRequest& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // storageDuration Field Functions 
    bool hasStorageDuration() const { return this->storageDuration_ != nullptr;};
    void deleteStorageDuration() { this->storageDuration_ = nullptr;};
    inline int32_t storageDuration() const { DARABONBA_PTR_GET_DEFAULT(storageDuration_, 0) };
    inline CreatePrometheusInstanceRequest& setStorageDuration(int32_t storageDuration) { DARABONBA_PTR_SET_VALUE(storageDuration_, storageDuration) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<CreatePrometheusInstanceRequestTags> & tags() const { DARABONBA_PTR_GET_CONST(tags_, vector<CreatePrometheusInstanceRequestTags>) };
    inline vector<CreatePrometheusInstanceRequestTags> tags() { DARABONBA_PTR_GET(tags_, vector<CreatePrometheusInstanceRequestTags>) };
    inline CreatePrometheusInstanceRequest& setTags(const vector<CreatePrometheusInstanceRequestTags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline CreatePrometheusInstanceRequest& setTags(vector<CreatePrometheusInstanceRequestTags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // workspace Field Functions 
    bool hasWorkspace() const { return this->workspace_ != nullptr;};
    void deleteWorkspace() { this->workspace_ = nullptr;};
    inline string workspace() const { DARABONBA_PTR_GET_DEFAULT(workspace_, "") };
    inline CreatePrometheusInstanceRequest& setWorkspace(string workspace) { DARABONBA_PTR_SET_VALUE(workspace_, workspace) };


  protected:
    std::shared_ptr<int32_t> archiveDuration_ = nullptr;
    std::shared_ptr<string> authFreeReadPolicy_ = nullptr;
    std::shared_ptr<string> authFreeWritePolicy_ = nullptr;
    std::shared_ptr<bool> enableAuthFreeRead_ = nullptr;
    std::shared_ptr<bool> enableAuthFreeWrite_ = nullptr;
    std::shared_ptr<bool> enableAuthToken_ = nullptr;
    std::shared_ptr<string> paymentType_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> prometheusInstanceName_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
    std::shared_ptr<int32_t> storageDuration_ = nullptr;
    std::shared_ptr<vector<CreatePrometheusInstanceRequestTags>> tags_ = nullptr;
    std::shared_ptr<string> workspace_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
