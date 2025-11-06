// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEOPENSINGLEDATAREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEOPENSINGLEDATAREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MPaaS20201028
{
namespace Models
{
  class CreateOpenSingleDataRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateOpenSingleDataRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(AppMaxVersion, appMaxVersion_);
      DARABONBA_PTR_TO_JSON(AppMinVersion, appMinVersion_);
      DARABONBA_PTR_TO_JSON(BizType, bizType_);
      DARABONBA_PTR_TO_JSON(CheckOnline, checkOnline_);
      DARABONBA_PTR_TO_JSON(ExtAttrStr, extAttrStr_);
      DARABONBA_PTR_TO_JSON(LinkToken, linkToken_);
      DARABONBA_PTR_TO_JSON(OsType, osType_);
      DARABONBA_PTR_TO_JSON(Payload, payload_);
      DARABONBA_PTR_TO_JSON(TenantId, tenantId_);
      DARABONBA_PTR_TO_JSON(ThirdMsgId, thirdMsgId_);
      DARABONBA_PTR_TO_JSON(ValidTimeEnd, validTimeEnd_);
      DARABONBA_PTR_TO_JSON(ValidTimeStart, validTimeStart_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateOpenSingleDataRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(AppMaxVersion, appMaxVersion_);
      DARABONBA_PTR_FROM_JSON(AppMinVersion, appMinVersion_);
      DARABONBA_PTR_FROM_JSON(BizType, bizType_);
      DARABONBA_PTR_FROM_JSON(CheckOnline, checkOnline_);
      DARABONBA_PTR_FROM_JSON(ExtAttrStr, extAttrStr_);
      DARABONBA_PTR_FROM_JSON(LinkToken, linkToken_);
      DARABONBA_PTR_FROM_JSON(OsType, osType_);
      DARABONBA_PTR_FROM_JSON(Payload, payload_);
      DARABONBA_PTR_FROM_JSON(TenantId, tenantId_);
      DARABONBA_PTR_FROM_JSON(ThirdMsgId, thirdMsgId_);
      DARABONBA_PTR_FROM_JSON(ValidTimeEnd, validTimeEnd_);
      DARABONBA_PTR_FROM_JSON(ValidTimeStart, validTimeStart_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    CreateOpenSingleDataRequest() = default ;
    CreateOpenSingleDataRequest(const CreateOpenSingleDataRequest &) = default ;
    CreateOpenSingleDataRequest(CreateOpenSingleDataRequest &&) = default ;
    CreateOpenSingleDataRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateOpenSingleDataRequest() = default ;
    CreateOpenSingleDataRequest& operator=(const CreateOpenSingleDataRequest &) = default ;
    CreateOpenSingleDataRequest& operator=(CreateOpenSingleDataRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appId_ == nullptr
        && return this->appMaxVersion_ == nullptr && return this->appMinVersion_ == nullptr && return this->bizType_ == nullptr && return this->checkOnline_ == nullptr && return this->extAttrStr_ == nullptr
        && return this->linkToken_ == nullptr && return this->osType_ == nullptr && return this->payload_ == nullptr && return this->tenantId_ == nullptr && return this->thirdMsgId_ == nullptr
        && return this->validTimeEnd_ == nullptr && return this->validTimeStart_ == nullptr && return this->workspaceId_ == nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline CreateOpenSingleDataRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // appMaxVersion Field Functions 
    bool hasAppMaxVersion() const { return this->appMaxVersion_ != nullptr;};
    void deleteAppMaxVersion() { this->appMaxVersion_ = nullptr;};
    inline string appMaxVersion() const { DARABONBA_PTR_GET_DEFAULT(appMaxVersion_, "") };
    inline CreateOpenSingleDataRequest& setAppMaxVersion(string appMaxVersion) { DARABONBA_PTR_SET_VALUE(appMaxVersion_, appMaxVersion) };


    // appMinVersion Field Functions 
    bool hasAppMinVersion() const { return this->appMinVersion_ != nullptr;};
    void deleteAppMinVersion() { this->appMinVersion_ = nullptr;};
    inline string appMinVersion() const { DARABONBA_PTR_GET_DEFAULT(appMinVersion_, "") };
    inline CreateOpenSingleDataRequest& setAppMinVersion(string appMinVersion) { DARABONBA_PTR_SET_VALUE(appMinVersion_, appMinVersion) };


    // bizType Field Functions 
    bool hasBizType() const { return this->bizType_ != nullptr;};
    void deleteBizType() { this->bizType_ = nullptr;};
    inline string bizType() const { DARABONBA_PTR_GET_DEFAULT(bizType_, "") };
    inline CreateOpenSingleDataRequest& setBizType(string bizType) { DARABONBA_PTR_SET_VALUE(bizType_, bizType) };


    // checkOnline Field Functions 
    bool hasCheckOnline() const { return this->checkOnline_ != nullptr;};
    void deleteCheckOnline() { this->checkOnline_ = nullptr;};
    inline bool checkOnline() const { DARABONBA_PTR_GET_DEFAULT(checkOnline_, false) };
    inline CreateOpenSingleDataRequest& setCheckOnline(bool checkOnline) { DARABONBA_PTR_SET_VALUE(checkOnline_, checkOnline) };


    // extAttrStr Field Functions 
    bool hasExtAttrStr() const { return this->extAttrStr_ != nullptr;};
    void deleteExtAttrStr() { this->extAttrStr_ = nullptr;};
    inline string extAttrStr() const { DARABONBA_PTR_GET_DEFAULT(extAttrStr_, "") };
    inline CreateOpenSingleDataRequest& setExtAttrStr(string extAttrStr) { DARABONBA_PTR_SET_VALUE(extAttrStr_, extAttrStr) };


    // linkToken Field Functions 
    bool hasLinkToken() const { return this->linkToken_ != nullptr;};
    void deleteLinkToken() { this->linkToken_ = nullptr;};
    inline string linkToken() const { DARABONBA_PTR_GET_DEFAULT(linkToken_, "") };
    inline CreateOpenSingleDataRequest& setLinkToken(string linkToken) { DARABONBA_PTR_SET_VALUE(linkToken_, linkToken) };


    // osType Field Functions 
    bool hasOsType() const { return this->osType_ != nullptr;};
    void deleteOsType() { this->osType_ = nullptr;};
    inline string osType() const { DARABONBA_PTR_GET_DEFAULT(osType_, "") };
    inline CreateOpenSingleDataRequest& setOsType(string osType) { DARABONBA_PTR_SET_VALUE(osType_, osType) };


    // payload Field Functions 
    bool hasPayload() const { return this->payload_ != nullptr;};
    void deletePayload() { this->payload_ = nullptr;};
    inline string payload() const { DARABONBA_PTR_GET_DEFAULT(payload_, "") };
    inline CreateOpenSingleDataRequest& setPayload(string payload) { DARABONBA_PTR_SET_VALUE(payload_, payload) };


    // tenantId Field Functions 
    bool hasTenantId() const { return this->tenantId_ != nullptr;};
    void deleteTenantId() { this->tenantId_ = nullptr;};
    inline string tenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
    inline CreateOpenSingleDataRequest& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


    // thirdMsgId Field Functions 
    bool hasThirdMsgId() const { return this->thirdMsgId_ != nullptr;};
    void deleteThirdMsgId() { this->thirdMsgId_ = nullptr;};
    inline string thirdMsgId() const { DARABONBA_PTR_GET_DEFAULT(thirdMsgId_, "") };
    inline CreateOpenSingleDataRequest& setThirdMsgId(string thirdMsgId) { DARABONBA_PTR_SET_VALUE(thirdMsgId_, thirdMsgId) };


    // validTimeEnd Field Functions 
    bool hasValidTimeEnd() const { return this->validTimeEnd_ != nullptr;};
    void deleteValidTimeEnd() { this->validTimeEnd_ = nullptr;};
    inline int64_t validTimeEnd() const { DARABONBA_PTR_GET_DEFAULT(validTimeEnd_, 0L) };
    inline CreateOpenSingleDataRequest& setValidTimeEnd(int64_t validTimeEnd) { DARABONBA_PTR_SET_VALUE(validTimeEnd_, validTimeEnd) };


    // validTimeStart Field Functions 
    bool hasValidTimeStart() const { return this->validTimeStart_ != nullptr;};
    void deleteValidTimeStart() { this->validTimeStart_ = nullptr;};
    inline int64_t validTimeStart() const { DARABONBA_PTR_GET_DEFAULT(validTimeStart_, 0L) };
    inline CreateOpenSingleDataRequest& setValidTimeStart(int64_t validTimeStart) { DARABONBA_PTR_SET_VALUE(validTimeStart_, validTimeStart) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string workspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline CreateOpenSingleDataRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> appId_ = nullptr;
    std::shared_ptr<string> appMaxVersion_ = nullptr;
    std::shared_ptr<string> appMinVersion_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> bizType_ = nullptr;
    std::shared_ptr<bool> checkOnline_ = nullptr;
    std::shared_ptr<string> extAttrStr_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> linkToken_ = nullptr;
    std::shared_ptr<string> osType_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> payload_ = nullptr;
    std::shared_ptr<string> tenantId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> thirdMsgId_ = nullptr;
    std::shared_ptr<int64_t> validTimeEnd_ = nullptr;
    std::shared_ptr<int64_t> validTimeStart_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> workspaceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MPaaS20201028
#endif
