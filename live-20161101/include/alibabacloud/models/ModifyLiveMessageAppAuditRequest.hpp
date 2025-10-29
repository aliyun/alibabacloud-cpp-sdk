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
        && return this->auditType_ == nullptr && return this->auditUrl_ == nullptr && return this->dataCenter_ == nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline ModifyLiveMessageAppAuditRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // auditType Field Functions 
    bool hasAuditType() const { return this->auditType_ != nullptr;};
    void deleteAuditType() { this->auditType_ = nullptr;};
    inline int32_t auditType() const { DARABONBA_PTR_GET_DEFAULT(auditType_, 0) };
    inline ModifyLiveMessageAppAuditRequest& setAuditType(int32_t auditType) { DARABONBA_PTR_SET_VALUE(auditType_, auditType) };


    // auditUrl Field Functions 
    bool hasAuditUrl() const { return this->auditUrl_ != nullptr;};
    void deleteAuditUrl() { this->auditUrl_ = nullptr;};
    inline string auditUrl() const { DARABONBA_PTR_GET_DEFAULT(auditUrl_, "") };
    inline ModifyLiveMessageAppAuditRequest& setAuditUrl(string auditUrl) { DARABONBA_PTR_SET_VALUE(auditUrl_, auditUrl) };


    // dataCenter Field Functions 
    bool hasDataCenter() const { return this->dataCenter_ != nullptr;};
    void deleteDataCenter() { this->dataCenter_ = nullptr;};
    inline string dataCenter() const { DARABONBA_PTR_GET_DEFAULT(dataCenter_, "") };
    inline ModifyLiveMessageAppAuditRequest& setDataCenter(string dataCenter) { DARABONBA_PTR_SET_VALUE(dataCenter_, dataCenter) };


  protected:
    // The ID of the interactive messaging application whose content moderation settings you want to modify.
    // 
    // This parameter is required.
    std::shared_ptr<string> appId_ = nullptr;
    // The content moderation method. Valid values:
    // 
    // *   0: disables content moderation.
    // *   1: uses built-in content moderation.
    // *   2: uses custom content moderation.
    std::shared_ptr<int32_t> auditType_ = nullptr;
    // The URL for content moderation. This parameter is required if you set AuditType to 2. The URL must start with http:// or https:// and cannot contain a private IP address or a port number.
    std::shared_ptr<string> auditUrl_ = nullptr;
    // The data center. It must be the same as the data center that was specified when you called the [CreateLiveMessageApp](https://help.aliyun.com/document_detail/2848162.html) operation to create the interactive messaging application. Valid values: cn-shanghai and ap-southeast-1 (Singapore).
    std::shared_ptr<string> dataCenter_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
