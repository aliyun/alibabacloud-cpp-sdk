// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEPROMETHEUSINSTANCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEPROMETHEUSINSTANCEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
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
    class Tags : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Tags& obj) { 
        DARABONBA_PTR_TO_JSON(key, key_);
        DARABONBA_PTR_TO_JSON(value, value_);
      };
      friend void from_json(const Darabonba::Json& j, Tags& obj) { 
        DARABONBA_PTR_FROM_JSON(key, key_);
        DARABONBA_PTR_FROM_JSON(value, value_);
      };
      Tags() = default ;
      Tags(const Tags &) = default ;
      Tags(Tags &&) = default ;
      Tags(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Tags() = default ;
      Tags& operator=(const Tags &) = default ;
      Tags& operator=(Tags &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->key_ == nullptr
        && this->value_ == nullptr; };
      // key Field Functions 
      bool hasKey() const { return this->key_ != nullptr;};
      void deleteKey() { this->key_ = nullptr;};
      inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
      inline Tags& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


      // value Field Functions 
      bool hasValue() const { return this->value_ != nullptr;};
      void deleteValue() { this->value_ = nullptr;};
      inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
      inline Tags& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


    protected:
      // The tag key.
      shared_ptr<string> key_ {};
      // The tag value.
      shared_ptr<string> value_ {};
    };

    virtual bool empty() const override { return this->archiveDuration_ == nullptr
        && this->authFreeReadPolicy_ == nullptr && this->authFreeWritePolicy_ == nullptr && this->enableAuthFreeRead_ == nullptr && this->enableAuthFreeWrite_ == nullptr && this->enableAuthToken_ == nullptr
        && this->paymentType_ == nullptr && this->prometheusInstanceName_ == nullptr && this->status_ == nullptr && this->storageDuration_ == nullptr && this->tags_ == nullptr
        && this->workspace_ == nullptr; };
    // archiveDuration Field Functions 
    bool hasArchiveDuration() const { return this->archiveDuration_ != nullptr;};
    void deleteArchiveDuration() { this->archiveDuration_ = nullptr;};
    inline int32_t getArchiveDuration() const { DARABONBA_PTR_GET_DEFAULT(archiveDuration_, 0) };
    inline CreatePrometheusInstanceRequest& setArchiveDuration(int32_t archiveDuration) { DARABONBA_PTR_SET_VALUE(archiveDuration_, archiveDuration) };


    // authFreeReadPolicy Field Functions 
    bool hasAuthFreeReadPolicy() const { return this->authFreeReadPolicy_ != nullptr;};
    void deleteAuthFreeReadPolicy() { this->authFreeReadPolicy_ = nullptr;};
    inline string getAuthFreeReadPolicy() const { DARABONBA_PTR_GET_DEFAULT(authFreeReadPolicy_, "") };
    inline CreatePrometheusInstanceRequest& setAuthFreeReadPolicy(string authFreeReadPolicy) { DARABONBA_PTR_SET_VALUE(authFreeReadPolicy_, authFreeReadPolicy) };


    // authFreeWritePolicy Field Functions 
    bool hasAuthFreeWritePolicy() const { return this->authFreeWritePolicy_ != nullptr;};
    void deleteAuthFreeWritePolicy() { this->authFreeWritePolicy_ = nullptr;};
    inline string getAuthFreeWritePolicy() const { DARABONBA_PTR_GET_DEFAULT(authFreeWritePolicy_, "") };
    inline CreatePrometheusInstanceRequest& setAuthFreeWritePolicy(string authFreeWritePolicy) { DARABONBA_PTR_SET_VALUE(authFreeWritePolicy_, authFreeWritePolicy) };


    // enableAuthFreeRead Field Functions 
    bool hasEnableAuthFreeRead() const { return this->enableAuthFreeRead_ != nullptr;};
    void deleteEnableAuthFreeRead() { this->enableAuthFreeRead_ = nullptr;};
    inline bool getEnableAuthFreeRead() const { DARABONBA_PTR_GET_DEFAULT(enableAuthFreeRead_, false) };
    inline CreatePrometheusInstanceRequest& setEnableAuthFreeRead(bool enableAuthFreeRead) { DARABONBA_PTR_SET_VALUE(enableAuthFreeRead_, enableAuthFreeRead) };


    // enableAuthFreeWrite Field Functions 
    bool hasEnableAuthFreeWrite() const { return this->enableAuthFreeWrite_ != nullptr;};
    void deleteEnableAuthFreeWrite() { this->enableAuthFreeWrite_ = nullptr;};
    inline bool getEnableAuthFreeWrite() const { DARABONBA_PTR_GET_DEFAULT(enableAuthFreeWrite_, false) };
    inline CreatePrometheusInstanceRequest& setEnableAuthFreeWrite(bool enableAuthFreeWrite) { DARABONBA_PTR_SET_VALUE(enableAuthFreeWrite_, enableAuthFreeWrite) };


    // enableAuthToken Field Functions 
    bool hasEnableAuthToken() const { return this->enableAuthToken_ != nullptr;};
    void deleteEnableAuthToken() { this->enableAuthToken_ = nullptr;};
    inline bool getEnableAuthToken() const { DARABONBA_PTR_GET_DEFAULT(enableAuthToken_, false) };
    inline CreatePrometheusInstanceRequest& setEnableAuthToken(bool enableAuthToken) { DARABONBA_PTR_SET_VALUE(enableAuthToken_, enableAuthToken) };


    // paymentType Field Functions 
    bool hasPaymentType() const { return this->paymentType_ != nullptr;};
    void deletePaymentType() { this->paymentType_ = nullptr;};
    inline string getPaymentType() const { DARABONBA_PTR_GET_DEFAULT(paymentType_, "") };
    inline CreatePrometheusInstanceRequest& setPaymentType(string paymentType) { DARABONBA_PTR_SET_VALUE(paymentType_, paymentType) };


    // prometheusInstanceName Field Functions 
    bool hasPrometheusInstanceName() const { return this->prometheusInstanceName_ != nullptr;};
    void deletePrometheusInstanceName() { this->prometheusInstanceName_ = nullptr;};
    inline string getPrometheusInstanceName() const { DARABONBA_PTR_GET_DEFAULT(prometheusInstanceName_, "") };
    inline CreatePrometheusInstanceRequest& setPrometheusInstanceName(string prometheusInstanceName) { DARABONBA_PTR_SET_VALUE(prometheusInstanceName_, prometheusInstanceName) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline CreatePrometheusInstanceRequest& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // storageDuration Field Functions 
    bool hasStorageDuration() const { return this->storageDuration_ != nullptr;};
    void deleteStorageDuration() { this->storageDuration_ = nullptr;};
    inline int32_t getStorageDuration() const { DARABONBA_PTR_GET_DEFAULT(storageDuration_, 0) };
    inline CreatePrometheusInstanceRequest& setStorageDuration(int32_t storageDuration) { DARABONBA_PTR_SET_VALUE(storageDuration_, storageDuration) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<CreatePrometheusInstanceRequest::Tags> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, vector<CreatePrometheusInstanceRequest::Tags>) };
    inline vector<CreatePrometheusInstanceRequest::Tags> getTags() { DARABONBA_PTR_GET(tags_, vector<CreatePrometheusInstanceRequest::Tags>) };
    inline CreatePrometheusInstanceRequest& setTags(const vector<CreatePrometheusInstanceRequest::Tags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline CreatePrometheusInstanceRequest& setTags(vector<CreatePrometheusInstanceRequest::Tags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // workspace Field Functions 
    bool hasWorkspace() const { return this->workspace_ != nullptr;};
    void deleteWorkspace() { this->workspace_ = nullptr;};
    inline string getWorkspace() const { DARABONBA_PTR_GET_DEFAULT(workspace_, "") };
    inline CreatePrometheusInstanceRequest& setWorkspace(string workspace) { DARABONBA_PTR_SET_VALUE(workspace_, workspace) };


  protected:
    // The number of days that data is automatically archived after the storage duration expires. A value of 0 indicates that data is not archived. Valid values:
    // 
    // - V1 instances: 60 to 365.
    // 
    // - V2 instances: 60 to 3650. A value of 3650 indicates that the data is permanently stored.
    shared_ptr<int32_t> archiveDuration_ {};
    // The policy for password-free read access. IP address ranges and VPC IDs are supported.
    shared_ptr<string> authFreeReadPolicy_ {};
    // The policy for password-free write access.
    shared_ptr<string> authFreeWritePolicy_ {};
    // Specifies whether to enable password-free read access. This feature is supported only for V2 instances.
    shared_ptr<bool> enableAuthFreeRead_ {};
    // Specifies whether to enable password-free write access. This feature is supported only for V2 instances.
    shared_ptr<bool> enableAuthFreeWrite_ {};
    // Specifies whether to enable an authorization token. This feature is supported only for V1 instances.
    shared_ptr<bool> enableAuthToken_ {};
    // The billing method.
    // 
    // - POSTPAY: pay-as-you-go based on the volume of reported metrics.
    // 
    // - Note: If you leave this parameter empty, the default billing method is used. If a default billing method is not configured, POSTPAY is used.
    shared_ptr<string> paymentType_ {};
    // The name of the instance.
    // 
    // This parameter is required.
    shared_ptr<string> prometheusInstanceName_ {};
    // The instance status.
    shared_ptr<string> status_ {};
    // The storage duration of the instance in days. The valid values depend on the billing method:
    // 
    // - For instances billed based on data written: 90 and 180.
    // 
    // - For instances billed based on reported metrics: 15, 30, 60, 90, and 180.
    shared_ptr<int32_t> storageDuration_ {};
    // The tags.
    shared_ptr<vector<CreatePrometheusInstanceRequest::Tags>> tags_ {};
    // The workspace to which the instance belongs. The default value is default-cms-{userId}-{regionId}.
    shared_ptr<string> workspace_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
