// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYLIVEMESSAGEAPPAUDITREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYLIVEMESSAGEAPPAUDITREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class ModifyLiveMessageAppAuditRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyLiveMessageAppAuditRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(AuditType, auditType_);
      DARABONBA_PTR_TO_JSON(AuditUrl, auditUrl_);
      DARABONBA_PTR_TO_JSON(DataCenter, dataCenter_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyLiveMessageAppAuditRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(AuditType, auditType_);
      DARABONBA_PTR_FROM_JSON(AuditUrl, auditUrl_);
      DARABONBA_PTR_FROM_JSON(DataCenter, dataCenter_);
    };
    ModifyLiveMessageAppAuditRequest() = default ;
    ModifyLiveMessageAppAuditRequest(const ModifyLiveMessageAppAuditRequest &) = default ;
    ModifyLiveMessageAppAuditRequest(ModifyLiveMessageAppAuditRequest &&) = default ;
    ModifyLiveMessageAppAuditRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyLiveMessageAppAuditRequest() = default ;
    ModifyLiveMessageAppAuditRequest& operator=(const ModifyLiveMessageAppAuditRequest &) = default ;
    ModifyLiveMessageAppAuditRequest& operator=(ModifyLiveMessageAppAuditRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appId_ == nullptr
        && this->auditType_ == nullptr && this->auditUrl_ == nullptr && this->dataCenter_ == nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline ModifyLiveMessageAppAuditRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // auditType Field Functions 
    bool hasAuditType() const { return this->auditType_ != nullptr;};
    void deleteAuditType() { this->auditType_ = nullptr;};
    inline int32_t getAuditType() const { DARABONBA_PTR_GET_DEFAULT(auditType_, 0) };
    inline ModifyLiveMessageAppAuditRequest& setAuditType(int32_t auditType) { DARABONBA_PTR_SET_VALUE(auditType_, auditType) };


    // auditUrl Field Functions 
    bool hasAuditUrl() const { return this->auditUrl_ != nullptr;};
    void deleteAuditUrl() { this->auditUrl_ = nullptr;};
    inline string getAuditUrl() const { DARABONBA_PTR_GET_DEFAULT(auditUrl_, "") };
    inline ModifyLiveMessageAppAuditRequest& setAuditUrl(string auditUrl) { DARABONBA_PTR_SET_VALUE(auditUrl_, auditUrl) };


    // dataCenter Field Functions 
    bool hasDataCenter() const { return this->dataCenter_ != nullptr;};
    void deleteDataCenter() { this->dataCenter_ = nullptr;};
    inline string getDataCenter() const { DARABONBA_PTR_GET_DEFAULT(dataCenter_, "") };
    inline ModifyLiveMessageAppAuditRequest& setDataCenter(string dataCenter) { DARABONBA_PTR_SET_VALUE(dataCenter_, dataCenter) };


  protected:
    // The ID of the interactive messaging application to modify.
    // 
    // This parameter is required.
    shared_ptr<string> appId_ {};
    // The security audit method. Valid values:
    // - 0: No security audit.
    // - 1: Built-in security audit.
    // - 2: Custom security audit.
    shared_ptr<int32_t> auditType_ {};
    // The security audit URL required when custom security audit is used (AuditType=2). The URL must start with http:// or https://, must not contain private IP addresses, and must not include port numbers.
    shared_ptr<string> auditUrl_ {};
    // The data center. This value must be the same as the data center specified in [CreateLiveMessageApp](https://help.aliyun.com/document_detail/2848162.html). Valid values: cn-shanghai (Shanghai) and ap-southeast-1 (Singapore).
    shared_ptr<string> dataCenter_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
