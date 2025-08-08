// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_EXPORTMAPPCENTERAPPCONFIGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_EXPORTMAPPCENTERAPPCONFIGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MPaaS20201028
{
namespace Models
{
  class ExportMappCenterAppConfigRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ExportMappCenterAppConfigRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ApkFileUrl, apkFileUrl_);
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(CertRsaBase64, certRsaBase64_);
      DARABONBA_PTR_TO_JSON(Identifier, identifier_);
      DARABONBA_PTR_TO_JSON(OnexFlag, onexFlag_);
      DARABONBA_PTR_TO_JSON(SystemType, systemType_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, ExportMappCenterAppConfigRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ApkFileUrl, apkFileUrl_);
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(CertRsaBase64, certRsaBase64_);
      DARABONBA_PTR_FROM_JSON(Identifier, identifier_);
      DARABONBA_PTR_FROM_JSON(OnexFlag, onexFlag_);
      DARABONBA_PTR_FROM_JSON(SystemType, systemType_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    ExportMappCenterAppConfigRequest() = default ;
    ExportMappCenterAppConfigRequest(const ExportMappCenterAppConfigRequest &) = default ;
    ExportMappCenterAppConfigRequest(ExportMappCenterAppConfigRequest &&) = default ;
    ExportMappCenterAppConfigRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ExportMappCenterAppConfigRequest() = default ;
    ExportMappCenterAppConfigRequest& operator=(const ExportMappCenterAppConfigRequest &) = default ;
    ExportMappCenterAppConfigRequest& operator=(ExportMappCenterAppConfigRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->apkFileUrl_ != nullptr
        && this->appId_ != nullptr && this->certRsaBase64_ != nullptr && this->identifier_ != nullptr && this->onexFlag_ != nullptr && this->systemType_ != nullptr
        && this->workspaceId_ != nullptr; };
    // apkFileUrl Field Functions 
    bool hasApkFileUrl() const { return this->apkFileUrl_ != nullptr;};
    void deleteApkFileUrl() { this->apkFileUrl_ = nullptr;};
    inline string apkFileUrl() const { DARABONBA_PTR_GET_DEFAULT(apkFileUrl_, "") };
    inline ExportMappCenterAppConfigRequest& setApkFileUrl(string apkFileUrl) { DARABONBA_PTR_SET_VALUE(apkFileUrl_, apkFileUrl) };


    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline ExportMappCenterAppConfigRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // certRsaBase64 Field Functions 
    bool hasCertRsaBase64() const { return this->certRsaBase64_ != nullptr;};
    void deleteCertRsaBase64() { this->certRsaBase64_ = nullptr;};
    inline string certRsaBase64() const { DARABONBA_PTR_GET_DEFAULT(certRsaBase64_, "") };
    inline ExportMappCenterAppConfigRequest& setCertRsaBase64(string certRsaBase64) { DARABONBA_PTR_SET_VALUE(certRsaBase64_, certRsaBase64) };


    // identifier Field Functions 
    bool hasIdentifier() const { return this->identifier_ != nullptr;};
    void deleteIdentifier() { this->identifier_ = nullptr;};
    inline string identifier() const { DARABONBA_PTR_GET_DEFAULT(identifier_, "") };
    inline ExportMappCenterAppConfigRequest& setIdentifier(string identifier) { DARABONBA_PTR_SET_VALUE(identifier_, identifier) };


    // onexFlag Field Functions 
    bool hasOnexFlag() const { return this->onexFlag_ != nullptr;};
    void deleteOnexFlag() { this->onexFlag_ = nullptr;};
    inline bool onexFlag() const { DARABONBA_PTR_GET_DEFAULT(onexFlag_, false) };
    inline ExportMappCenterAppConfigRequest& setOnexFlag(bool onexFlag) { DARABONBA_PTR_SET_VALUE(onexFlag_, onexFlag) };


    // systemType Field Functions 
    bool hasSystemType() const { return this->systemType_ != nullptr;};
    void deleteSystemType() { this->systemType_ = nullptr;};
    inline string systemType() const { DARABONBA_PTR_GET_DEFAULT(systemType_, "") };
    inline ExportMappCenterAppConfigRequest& setSystemType(string systemType) { DARABONBA_PTR_SET_VALUE(systemType_, systemType) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string workspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline ExportMappCenterAppConfigRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    std::shared_ptr<string> apkFileUrl_ = nullptr;
    std::shared_ptr<string> appId_ = nullptr;
    std::shared_ptr<string> certRsaBase64_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> identifier_ = nullptr;
    // This parameter is required.
    std::shared_ptr<bool> onexFlag_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> systemType_ = nullptr;
    std::shared_ptr<string> workspaceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MPaaS20201028
#endif
