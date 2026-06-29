// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RESETDATASERVICEAPPSECRETREQUEST_HPP_
#define ALIBABACLOUD_MODELS_RESETDATASERVICEAPPSECRETREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class ResetDataServiceAppSecretRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ResetDataServiceAppSecretRequest& obj) { 
      DARABONBA_PTR_TO_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_TO_JSON(UpdateCommand, updateCommand_);
    };
    friend void from_json(const Darabonba::Json& j, ResetDataServiceAppSecretRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_FROM_JSON(UpdateCommand, updateCommand_);
    };
    ResetDataServiceAppSecretRequest() = default ;
    ResetDataServiceAppSecretRequest(const ResetDataServiceAppSecretRequest &) = default ;
    ResetDataServiceAppSecretRequest(ResetDataServiceAppSecretRequest &&) = default ;
    ResetDataServiceAppSecretRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ResetDataServiceAppSecretRequest() = default ;
    ResetDataServiceAppSecretRequest& operator=(const ResetDataServiceAppSecretRequest &) = default ;
    ResetDataServiceAppSecretRequest& operator=(ResetDataServiceAppSecretRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class UpdateCommand : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const UpdateCommand& obj) { 
        DARABONBA_PTR_TO_JSON(AppId, appId_);
        DARABONBA_PTR_TO_JSON(AppKey, appKey_);
        DARABONBA_PTR_TO_JSON(AppSecret, appSecret_);
      };
      friend void from_json(const Darabonba::Json& j, UpdateCommand& obj) { 
        DARABONBA_PTR_FROM_JSON(AppId, appId_);
        DARABONBA_PTR_FROM_JSON(AppKey, appKey_);
        DARABONBA_PTR_FROM_JSON(AppSecret, appSecret_);
      };
      UpdateCommand() = default ;
      UpdateCommand(const UpdateCommand &) = default ;
      UpdateCommand(UpdateCommand &&) = default ;
      UpdateCommand(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~UpdateCommand() = default ;
      UpdateCommand& operator=(const UpdateCommand &) = default ;
      UpdateCommand& operator=(UpdateCommand &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->appId_ == nullptr
        && this->appKey_ == nullptr && this->appSecret_ == nullptr; };
      // appId Field Functions 
      bool hasAppId() const { return this->appId_ != nullptr;};
      void deleteAppId() { this->appId_ = nullptr;};
      inline int32_t getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, 0) };
      inline UpdateCommand& setAppId(int32_t appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


      // appKey Field Functions 
      bool hasAppKey() const { return this->appKey_ != nullptr;};
      void deleteAppKey() { this->appKey_ = nullptr;};
      inline string getAppKey() const { DARABONBA_PTR_GET_DEFAULT(appKey_, "") };
      inline UpdateCommand& setAppKey(string appKey) { DARABONBA_PTR_SET_VALUE(appKey_, appKey) };


      // appSecret Field Functions 
      bool hasAppSecret() const { return this->appSecret_ != nullptr;};
      void deleteAppSecret() { this->appSecret_ = nullptr;};
      inline string getAppSecret() const { DARABONBA_PTR_GET_DEFAULT(appSecret_, "") };
      inline UpdateCommand& setAppSecret(string appSecret) { DARABONBA_PTR_SET_VALUE(appSecret_, appSecret) };


    protected:
      // Application ID
      // 
      // This parameter is required.
      shared_ptr<int32_t> appId_ {};
      // The new application key, which must be globally unique and is used when calling APIs.
      // The length is 8 to 128 English characters, and can contain digits, underscores (_), and hyphens (-).
      // Customization is supported only when using Alibaba Cloud API Gateway or the built-in gateway. This configuration is ignored when using a dedicated cloud gateway.
      shared_ptr<string> appKey_ {};
      // The new application secret.
      // If this parameter is left empty, the system automatically generates a new AppSecret value.
      // The length is 8 to 127 English characters, and can contain digits, underscores (_), and hyphens (-).
      // Customization is supported only when using Alibaba Cloud API Gateway or the built-in gateway. This configuration is ignored when using a dedicated cloud gateway.
      shared_ptr<string> appSecret_ {};
    };

    virtual bool empty() const override { return this->opTenantId_ == nullptr
        && this->updateCommand_ == nullptr; };
    // opTenantId Field Functions 
    bool hasOpTenantId() const { return this->opTenantId_ != nullptr;};
    void deleteOpTenantId() { this->opTenantId_ = nullptr;};
    inline int64_t getOpTenantId() const { DARABONBA_PTR_GET_DEFAULT(opTenantId_, 0L) };
    inline ResetDataServiceAppSecretRequest& setOpTenantId(int64_t opTenantId) { DARABONBA_PTR_SET_VALUE(opTenantId_, opTenantId) };


    // updateCommand Field Functions 
    bool hasUpdateCommand() const { return this->updateCommand_ != nullptr;};
    void deleteUpdateCommand() { this->updateCommand_ = nullptr;};
    inline const ResetDataServiceAppSecretRequest::UpdateCommand & getUpdateCommand() const { DARABONBA_PTR_GET_CONST(updateCommand_, ResetDataServiceAppSecretRequest::UpdateCommand) };
    inline ResetDataServiceAppSecretRequest::UpdateCommand getUpdateCommand() { DARABONBA_PTR_GET(updateCommand_, ResetDataServiceAppSecretRequest::UpdateCommand) };
    inline ResetDataServiceAppSecretRequest& setUpdateCommand(const ResetDataServiceAppSecretRequest::UpdateCommand & updateCommand) { DARABONBA_PTR_SET_VALUE(updateCommand_, updateCommand) };
    inline ResetDataServiceAppSecretRequest& setUpdateCommand(ResetDataServiceAppSecretRequest::UpdateCommand && updateCommand) { DARABONBA_PTR_SET_RVALUE(updateCommand_, updateCommand) };


  protected:
    // Tenant ID
    // 
    // This parameter is required.
    shared_ptr<int64_t> opTenantId_ {};
    // Reset Data Service Application Key
    // 
    // This parameter is required.
    shared_ptr<ResetDataServiceAppSecretRequest::UpdateCommand> updateCommand_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
