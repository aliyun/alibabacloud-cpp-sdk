// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_IMPORTOASREQUEST_HPP_
#define ALIBABACLOUD_MODELS_IMPORTOASREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class ImportOASRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ImportOASRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AuthType, authType_);
      DARABONBA_PTR_TO_JSON(BackendName, backendName_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(GroupId, groupId_);
      DARABONBA_PTR_TO_JSON(IgnoreWarning, ignoreWarning_);
      DARABONBA_PTR_TO_JSON(OASVersion, OASVersion_);
      DARABONBA_PTR_TO_JSON(Overwrite, overwrite_);
      DARABONBA_PTR_TO_JSON(RequestMode, requestMode_);
      DARABONBA_PTR_TO_JSON(SecurityToken, securityToken_);
      DARABONBA_PTR_TO_JSON(SkipDryRun, skipDryRun_);
    };
    friend void from_json(const Darabonba::Json& j, ImportOASRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AuthType, authType_);
      DARABONBA_PTR_FROM_JSON(BackendName, backendName_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
      DARABONBA_PTR_FROM_JSON(IgnoreWarning, ignoreWarning_);
      DARABONBA_PTR_FROM_JSON(OASVersion, OASVersion_);
      DARABONBA_PTR_FROM_JSON(Overwrite, overwrite_);
      DARABONBA_PTR_FROM_JSON(RequestMode, requestMode_);
      DARABONBA_PTR_FROM_JSON(SecurityToken, securityToken_);
      DARABONBA_PTR_FROM_JSON(SkipDryRun, skipDryRun_);
    };
    ImportOASRequest() = default ;
    ImportOASRequest(const ImportOASRequest &) = default ;
    ImportOASRequest(ImportOASRequest &&) = default ;
    ImportOASRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ImportOASRequest() = default ;
    ImportOASRequest& operator=(const ImportOASRequest &) = default ;
    ImportOASRequest& operator=(ImportOASRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->authType_ == nullptr
        && return this->backendName_ == nullptr && return this->data_ == nullptr && return this->groupId_ == nullptr && return this->ignoreWarning_ == nullptr && return this->OASVersion_ == nullptr
        && return this->overwrite_ == nullptr && return this->requestMode_ == nullptr && return this->securityToken_ == nullptr && return this->skipDryRun_ == nullptr; };
    // authType Field Functions 
    bool hasAuthType() const { return this->authType_ != nullptr;};
    void deleteAuthType() { this->authType_ = nullptr;};
    inline string authType() const { DARABONBA_PTR_GET_DEFAULT(authType_, "") };
    inline ImportOASRequest& setAuthType(string authType) { DARABONBA_PTR_SET_VALUE(authType_, authType) };


    // backendName Field Functions 
    bool hasBackendName() const { return this->backendName_ != nullptr;};
    void deleteBackendName() { this->backendName_ = nullptr;};
    inline string backendName() const { DARABONBA_PTR_GET_DEFAULT(backendName_, "") };
    inline ImportOASRequest& setBackendName(string backendName) { DARABONBA_PTR_SET_VALUE(backendName_, backendName) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline string data() const { DARABONBA_PTR_GET_DEFAULT(data_, "") };
    inline ImportOASRequest& setData(string data) { DARABONBA_PTR_SET_VALUE(data_, data) };


    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline string groupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
    inline ImportOASRequest& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // ignoreWarning Field Functions 
    bool hasIgnoreWarning() const { return this->ignoreWarning_ != nullptr;};
    void deleteIgnoreWarning() { this->ignoreWarning_ = nullptr;};
    inline bool ignoreWarning() const { DARABONBA_PTR_GET_DEFAULT(ignoreWarning_, false) };
    inline ImportOASRequest& setIgnoreWarning(bool ignoreWarning) { DARABONBA_PTR_SET_VALUE(ignoreWarning_, ignoreWarning) };


    // OASVersion Field Functions 
    bool hasOASVersion() const { return this->OASVersion_ != nullptr;};
    void deleteOASVersion() { this->OASVersion_ = nullptr;};
    inline string OASVersion() const { DARABONBA_PTR_GET_DEFAULT(OASVersion_, "") };
    inline ImportOASRequest& setOASVersion(string OASVersion) { DARABONBA_PTR_SET_VALUE(OASVersion_, OASVersion) };


    // overwrite Field Functions 
    bool hasOverwrite() const { return this->overwrite_ != nullptr;};
    void deleteOverwrite() { this->overwrite_ = nullptr;};
    inline bool overwrite() const { DARABONBA_PTR_GET_DEFAULT(overwrite_, false) };
    inline ImportOASRequest& setOverwrite(bool overwrite) { DARABONBA_PTR_SET_VALUE(overwrite_, overwrite) };


    // requestMode Field Functions 
    bool hasRequestMode() const { return this->requestMode_ != nullptr;};
    void deleteRequestMode() { this->requestMode_ = nullptr;};
    inline string requestMode() const { DARABONBA_PTR_GET_DEFAULT(requestMode_, "") };
    inline ImportOASRequest& setRequestMode(string requestMode) { DARABONBA_PTR_SET_VALUE(requestMode_, requestMode) };


    // securityToken Field Functions 
    bool hasSecurityToken() const { return this->securityToken_ != nullptr;};
    void deleteSecurityToken() { this->securityToken_ = nullptr;};
    inline string securityToken() const { DARABONBA_PTR_GET_DEFAULT(securityToken_, "") };
    inline ImportOASRequest& setSecurityToken(string securityToken) { DARABONBA_PTR_SET_VALUE(securityToken_, securityToken) };


    // skipDryRun Field Functions 
    bool hasSkipDryRun() const { return this->skipDryRun_ != nullptr;};
    void deleteSkipDryRun() { this->skipDryRun_ = nullptr;};
    inline bool skipDryRun() const { DARABONBA_PTR_GET_DEFAULT(skipDryRun_, false) };
    inline ImportOASRequest& setSkipDryRun(bool skipDryRun) { DARABONBA_PTR_SET_VALUE(skipDryRun_, skipDryRun) };


  protected:
    // The security authentication method of the API. Valid values:
    // 
    // *   **APP: Only authorized applications can call the API.**
    // 
    // *   **ANONYMOUS: The API can be anonymously called. In this mode, you must take note of the following rules:**
    // 
    //     *   All users who have obtained the API service information can call this API. API Gateway does not authenticate callers and cannot set user-specific throttling policies. If you make this API public, set API-specific throttling policies.
    std::shared_ptr<string> authType_ = nullptr;
    // The name of the backend service.
    std::shared_ptr<string> backendName_ = nullptr;
    // The OAS-compliant text file or OSS object URL.
    // 
    // This parameter is required.
    std::shared_ptr<string> data_ = nullptr;
    // The ID of the API group.
    // 
    // This parameter is required.
    std::shared_ptr<string> groupId_ = nullptr;
    // Specifies whether to ignore alerts.
    std::shared_ptr<bool> ignoreWarning_ = nullptr;
    // The OAS version.
    std::shared_ptr<string> OASVersion_ = nullptr;
    // Specifies whether to overwrite an existing API.
    // 
    // If an existing API has the same HTTP request type and backend request path as the API to be imported, the existing API is overwritten.
    // 
    // This parameter is required.
    std::shared_ptr<bool> overwrite_ = nullptr;
    // The request mode. Valid values:
    // 
    // *   MAPPING: Parameters are mapped. Unknown parameters are filtered out.
    // *   PASSTHROUGH: Parameters are passed through.
    std::shared_ptr<string> requestMode_ = nullptr;
    std::shared_ptr<string> securityToken_ = nullptr;
    // Specifies whether to directly import the API without performing a precheck.
    std::shared_ptr<bool> skipDryRun_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
