// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEAPPINSTANCETICKETRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEAPPINSTANCETICKETRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WebsiteBuild20250429
{
namespace Models
{
  class CreateAppInstanceTicketResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateAppInstanceTicketResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_TO_JSON(AllowRetry, allowRetry_);
      DARABONBA_PTR_TO_JSON(AppName, appName_);
      DARABONBA_PTR_TO_JSON(DynamicCode, dynamicCode_);
      DARABONBA_PTR_TO_JSON(DynamicMessage, dynamicMessage_);
      DARABONBA_PTR_TO_JSON(ErrorArgs, errorArgs_);
      DARABONBA_PTR_TO_JSON(Module, module_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(RootErrorCode, rootErrorCode_);
      DARABONBA_PTR_TO_JSON(RootErrorMsg, rootErrorMsg_);
      DARABONBA_PTR_TO_JSON(Synchro, synchro_);
    };
    friend void from_json(const Darabonba::Json& j, CreateAppInstanceTicketResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_FROM_JSON(AllowRetry, allowRetry_);
      DARABONBA_PTR_FROM_JSON(AppName, appName_);
      DARABONBA_PTR_FROM_JSON(DynamicCode, dynamicCode_);
      DARABONBA_PTR_FROM_JSON(DynamicMessage, dynamicMessage_);
      DARABONBA_PTR_FROM_JSON(ErrorArgs, errorArgs_);
      DARABONBA_PTR_FROM_JSON(Module, module_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(RootErrorCode, rootErrorCode_);
      DARABONBA_PTR_FROM_JSON(RootErrorMsg, rootErrorMsg_);
      DARABONBA_PTR_FROM_JSON(Synchro, synchro_);
    };
    CreateAppInstanceTicketResponseBody() = default ;
    CreateAppInstanceTicketResponseBody(const CreateAppInstanceTicketResponseBody &) = default ;
    CreateAppInstanceTicketResponseBody(CreateAppInstanceTicketResponseBody &&) = default ;
    CreateAppInstanceTicketResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateAppInstanceTicketResponseBody() = default ;
    CreateAppInstanceTicketResponseBody& operator=(const CreateAppInstanceTicketResponseBody &) = default ;
    CreateAppInstanceTicketResponseBody& operator=(CreateAppInstanceTicketResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Module : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Module& obj) { 
        DARABONBA_PTR_TO_JSON(AccessTokenExpiresAt, accessTokenExpiresAt_);
        DARABONBA_PTR_TO_JSON(AccessTokenIssuedAt, accessTokenIssuedAt_);
        DARABONBA_PTR_TO_JSON(AccessTokenValue, accessTokenValue_);
        DARABONBA_PTR_TO_JSON(AliyunPk, aliyunPk_);
        DARABONBA_PTR_TO_JSON(Attributes, attributes_);
        DARABONBA_PTR_TO_JSON(AuthorizationGrantType, authorizationGrantType_);
        DARABONBA_PTR_TO_JSON(Bid, bid_);
        DARABONBA_PTR_TO_JSON(ParentPk, parentPk_);
        DARABONBA_PTR_TO_JSON(RefreshTokenExpiresAt, refreshTokenExpiresAt_);
        DARABONBA_PTR_TO_JSON(RefreshTokenIssuedAt, refreshTokenIssuedAt_);
        DARABONBA_PTR_TO_JSON(RefreshTokenValue, refreshTokenValue_);
        DARABONBA_PTR_TO_JSON(Uuid, uuid_);
      };
      friend void from_json(const Darabonba::Json& j, Module& obj) { 
        DARABONBA_PTR_FROM_JSON(AccessTokenExpiresAt, accessTokenExpiresAt_);
        DARABONBA_PTR_FROM_JSON(AccessTokenIssuedAt, accessTokenIssuedAt_);
        DARABONBA_PTR_FROM_JSON(AccessTokenValue, accessTokenValue_);
        DARABONBA_PTR_FROM_JSON(AliyunPk, aliyunPk_);
        DARABONBA_PTR_FROM_JSON(Attributes, attributes_);
        DARABONBA_PTR_FROM_JSON(AuthorizationGrantType, authorizationGrantType_);
        DARABONBA_PTR_FROM_JSON(Bid, bid_);
        DARABONBA_PTR_FROM_JSON(ParentPk, parentPk_);
        DARABONBA_PTR_FROM_JSON(RefreshTokenExpiresAt, refreshTokenExpiresAt_);
        DARABONBA_PTR_FROM_JSON(RefreshTokenIssuedAt, refreshTokenIssuedAt_);
        DARABONBA_PTR_FROM_JSON(RefreshTokenValue, refreshTokenValue_);
        DARABONBA_PTR_FROM_JSON(Uuid, uuid_);
      };
      Module() = default ;
      Module(const Module &) = default ;
      Module(Module &&) = default ;
      Module(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Module() = default ;
      Module& operator=(const Module &) = default ;
      Module& operator=(Module &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->accessTokenExpiresAt_ == nullptr
        && this->accessTokenIssuedAt_ == nullptr && this->accessTokenValue_ == nullptr && this->aliyunPk_ == nullptr && this->attributes_ == nullptr && this->authorizationGrantType_ == nullptr
        && this->bid_ == nullptr && this->parentPk_ == nullptr && this->refreshTokenExpiresAt_ == nullptr && this->refreshTokenIssuedAt_ == nullptr && this->refreshTokenValue_ == nullptr
        && this->uuid_ == nullptr; };
      // accessTokenExpiresAt Field Functions 
      bool hasAccessTokenExpiresAt() const { return this->accessTokenExpiresAt_ != nullptr;};
      void deleteAccessTokenExpiresAt() { this->accessTokenExpiresAt_ = nullptr;};
      inline string getAccessTokenExpiresAt() const { DARABONBA_PTR_GET_DEFAULT(accessTokenExpiresAt_, "") };
      inline Module& setAccessTokenExpiresAt(string accessTokenExpiresAt) { DARABONBA_PTR_SET_VALUE(accessTokenExpiresAt_, accessTokenExpiresAt) };


      // accessTokenIssuedAt Field Functions 
      bool hasAccessTokenIssuedAt() const { return this->accessTokenIssuedAt_ != nullptr;};
      void deleteAccessTokenIssuedAt() { this->accessTokenIssuedAt_ = nullptr;};
      inline string getAccessTokenIssuedAt() const { DARABONBA_PTR_GET_DEFAULT(accessTokenIssuedAt_, "") };
      inline Module& setAccessTokenIssuedAt(string accessTokenIssuedAt) { DARABONBA_PTR_SET_VALUE(accessTokenIssuedAt_, accessTokenIssuedAt) };


      // accessTokenValue Field Functions 
      bool hasAccessTokenValue() const { return this->accessTokenValue_ != nullptr;};
      void deleteAccessTokenValue() { this->accessTokenValue_ = nullptr;};
      inline string getAccessTokenValue() const { DARABONBA_PTR_GET_DEFAULT(accessTokenValue_, "") };
      inline Module& setAccessTokenValue(string accessTokenValue) { DARABONBA_PTR_SET_VALUE(accessTokenValue_, accessTokenValue) };


      // aliyunPk Field Functions 
      bool hasAliyunPk() const { return this->aliyunPk_ != nullptr;};
      void deleteAliyunPk() { this->aliyunPk_ = nullptr;};
      inline string getAliyunPk() const { DARABONBA_PTR_GET_DEFAULT(aliyunPk_, "") };
      inline Module& setAliyunPk(string aliyunPk) { DARABONBA_PTR_SET_VALUE(aliyunPk_, aliyunPk) };


      // attributes Field Functions 
      bool hasAttributes() const { return this->attributes_ != nullptr;};
      void deleteAttributes() { this->attributes_ = nullptr;};
      inline string getAttributes() const { DARABONBA_PTR_GET_DEFAULT(attributes_, "") };
      inline Module& setAttributes(string attributes) { DARABONBA_PTR_SET_VALUE(attributes_, attributes) };


      // authorizationGrantType Field Functions 
      bool hasAuthorizationGrantType() const { return this->authorizationGrantType_ != nullptr;};
      void deleteAuthorizationGrantType() { this->authorizationGrantType_ = nullptr;};
      inline string getAuthorizationGrantType() const { DARABONBA_PTR_GET_DEFAULT(authorizationGrantType_, "") };
      inline Module& setAuthorizationGrantType(string authorizationGrantType) { DARABONBA_PTR_SET_VALUE(authorizationGrantType_, authorizationGrantType) };


      // bid Field Functions 
      bool hasBid() const { return this->bid_ != nullptr;};
      void deleteBid() { this->bid_ = nullptr;};
      inline string getBid() const { DARABONBA_PTR_GET_DEFAULT(bid_, "") };
      inline Module& setBid(string bid) { DARABONBA_PTR_SET_VALUE(bid_, bid) };


      // parentPk Field Functions 
      bool hasParentPk() const { return this->parentPk_ != nullptr;};
      void deleteParentPk() { this->parentPk_ = nullptr;};
      inline string getParentPk() const { DARABONBA_PTR_GET_DEFAULT(parentPk_, "") };
      inline Module& setParentPk(string parentPk) { DARABONBA_PTR_SET_VALUE(parentPk_, parentPk) };


      // refreshTokenExpiresAt Field Functions 
      bool hasRefreshTokenExpiresAt() const { return this->refreshTokenExpiresAt_ != nullptr;};
      void deleteRefreshTokenExpiresAt() { this->refreshTokenExpiresAt_ = nullptr;};
      inline string getRefreshTokenExpiresAt() const { DARABONBA_PTR_GET_DEFAULT(refreshTokenExpiresAt_, "") };
      inline Module& setRefreshTokenExpiresAt(string refreshTokenExpiresAt) { DARABONBA_PTR_SET_VALUE(refreshTokenExpiresAt_, refreshTokenExpiresAt) };


      // refreshTokenIssuedAt Field Functions 
      bool hasRefreshTokenIssuedAt() const { return this->refreshTokenIssuedAt_ != nullptr;};
      void deleteRefreshTokenIssuedAt() { this->refreshTokenIssuedAt_ = nullptr;};
      inline string getRefreshTokenIssuedAt() const { DARABONBA_PTR_GET_DEFAULT(refreshTokenIssuedAt_, "") };
      inline Module& setRefreshTokenIssuedAt(string refreshTokenIssuedAt) { DARABONBA_PTR_SET_VALUE(refreshTokenIssuedAt_, refreshTokenIssuedAt) };


      // refreshTokenValue Field Functions 
      bool hasRefreshTokenValue() const { return this->refreshTokenValue_ != nullptr;};
      void deleteRefreshTokenValue() { this->refreshTokenValue_ = nullptr;};
      inline string getRefreshTokenValue() const { DARABONBA_PTR_GET_DEFAULT(refreshTokenValue_, "") };
      inline Module& setRefreshTokenValue(string refreshTokenValue) { DARABONBA_PTR_SET_VALUE(refreshTokenValue_, refreshTokenValue) };


      // uuid Field Functions 
      bool hasUuid() const { return this->uuid_ != nullptr;};
      void deleteUuid() { this->uuid_ = nullptr;};
      inline string getUuid() const { DARABONBA_PTR_GET_DEFAULT(uuid_, "") };
      inline Module& setUuid(string uuid) { DARABONBA_PTR_SET_VALUE(uuid_, uuid) };


    protected:
      // Access token expiration time
      shared_ptr<string> accessTokenExpiresAt_ {};
      // Access token issuance time
      shared_ptr<string> accessTokenIssuedAt_ {};
      // Access token value
      shared_ptr<string> accessTokenValue_ {};
      // User ID
      shared_ptr<string> aliyunPk_ {};
      // Extended attributes
      shared_ptr<string> attributes_ {};
      // Authorization grant type
      shared_ptr<string> authorizationGrantType_ {};
      // bid
      shared_ptr<string> bid_ {};
      // User ID
      shared_ptr<string> parentPk_ {};
      // Refresh token expiration time
      shared_ptr<string> refreshTokenExpiresAt_ {};
      // Refresh token issuance time
      shared_ptr<string> refreshTokenIssuedAt_ {};
      // Refresh token value
      shared_ptr<string> refreshTokenValue_ {};
      // Unique identifier externally
      shared_ptr<string> uuid_ {};
    };

    virtual bool empty() const override { return this->accessDeniedDetail_ == nullptr
        && this->allowRetry_ == nullptr && this->appName_ == nullptr && this->dynamicCode_ == nullptr && this->dynamicMessage_ == nullptr && this->errorArgs_ == nullptr
        && this->module_ == nullptr && this->requestId_ == nullptr && this->rootErrorCode_ == nullptr && this->rootErrorMsg_ == nullptr && this->synchro_ == nullptr; };
    // accessDeniedDetail Field Functions 
    bool hasAccessDeniedDetail() const { return this->accessDeniedDetail_ != nullptr;};
    void deleteAccessDeniedDetail() { this->accessDeniedDetail_ = nullptr;};
    inline string getAccessDeniedDetail() const { DARABONBA_PTR_GET_DEFAULT(accessDeniedDetail_, "") };
    inline CreateAppInstanceTicketResponseBody& setAccessDeniedDetail(string accessDeniedDetail) { DARABONBA_PTR_SET_VALUE(accessDeniedDetail_, accessDeniedDetail) };


    // allowRetry Field Functions 
    bool hasAllowRetry() const { return this->allowRetry_ != nullptr;};
    void deleteAllowRetry() { this->allowRetry_ = nullptr;};
    inline bool getAllowRetry() const { DARABONBA_PTR_GET_DEFAULT(allowRetry_, false) };
    inline CreateAppInstanceTicketResponseBody& setAllowRetry(bool allowRetry) { DARABONBA_PTR_SET_VALUE(allowRetry_, allowRetry) };


    // appName Field Functions 
    bool hasAppName() const { return this->appName_ != nullptr;};
    void deleteAppName() { this->appName_ = nullptr;};
    inline string getAppName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
    inline CreateAppInstanceTicketResponseBody& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


    // dynamicCode Field Functions 
    bool hasDynamicCode() const { return this->dynamicCode_ != nullptr;};
    void deleteDynamicCode() { this->dynamicCode_ = nullptr;};
    inline string getDynamicCode() const { DARABONBA_PTR_GET_DEFAULT(dynamicCode_, "") };
    inline CreateAppInstanceTicketResponseBody& setDynamicCode(string dynamicCode) { DARABONBA_PTR_SET_VALUE(dynamicCode_, dynamicCode) };


    // dynamicMessage Field Functions 
    bool hasDynamicMessage() const { return this->dynamicMessage_ != nullptr;};
    void deleteDynamicMessage() { this->dynamicMessage_ = nullptr;};
    inline string getDynamicMessage() const { DARABONBA_PTR_GET_DEFAULT(dynamicMessage_, "") };
    inline CreateAppInstanceTicketResponseBody& setDynamicMessage(string dynamicMessage) { DARABONBA_PTR_SET_VALUE(dynamicMessage_, dynamicMessage) };


    // errorArgs Field Functions 
    bool hasErrorArgs() const { return this->errorArgs_ != nullptr;};
    void deleteErrorArgs() { this->errorArgs_ = nullptr;};
    inline const vector<Darabonba::Json> & getErrorArgs() const { DARABONBA_PTR_GET_CONST(errorArgs_, vector<Darabonba::Json>) };
    inline vector<Darabonba::Json> getErrorArgs() { DARABONBA_PTR_GET(errorArgs_, vector<Darabonba::Json>) };
    inline CreateAppInstanceTicketResponseBody& setErrorArgs(const vector<Darabonba::Json> & errorArgs) { DARABONBA_PTR_SET_VALUE(errorArgs_, errorArgs) };
    inline CreateAppInstanceTicketResponseBody& setErrorArgs(vector<Darabonba::Json> && errorArgs) { DARABONBA_PTR_SET_RVALUE(errorArgs_, errorArgs) };


    // module Field Functions 
    bool hasModule() const { return this->module_ != nullptr;};
    void deleteModule() { this->module_ = nullptr;};
    inline const CreateAppInstanceTicketResponseBody::Module & getModule() const { DARABONBA_PTR_GET_CONST(module_, CreateAppInstanceTicketResponseBody::Module) };
    inline CreateAppInstanceTicketResponseBody::Module getModule() { DARABONBA_PTR_GET(module_, CreateAppInstanceTicketResponseBody::Module) };
    inline CreateAppInstanceTicketResponseBody& setModule(const CreateAppInstanceTicketResponseBody::Module & module) { DARABONBA_PTR_SET_VALUE(module_, module) };
    inline CreateAppInstanceTicketResponseBody& setModule(CreateAppInstanceTicketResponseBody::Module && module) { DARABONBA_PTR_SET_RVALUE(module_, module) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateAppInstanceTicketResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // rootErrorCode Field Functions 
    bool hasRootErrorCode() const { return this->rootErrorCode_ != nullptr;};
    void deleteRootErrorCode() { this->rootErrorCode_ = nullptr;};
    inline string getRootErrorCode() const { DARABONBA_PTR_GET_DEFAULT(rootErrorCode_, "") };
    inline CreateAppInstanceTicketResponseBody& setRootErrorCode(string rootErrorCode) { DARABONBA_PTR_SET_VALUE(rootErrorCode_, rootErrorCode) };


    // rootErrorMsg Field Functions 
    bool hasRootErrorMsg() const { return this->rootErrorMsg_ != nullptr;};
    void deleteRootErrorMsg() { this->rootErrorMsg_ = nullptr;};
    inline string getRootErrorMsg() const { DARABONBA_PTR_GET_DEFAULT(rootErrorMsg_, "") };
    inline CreateAppInstanceTicketResponseBody& setRootErrorMsg(string rootErrorMsg) { DARABONBA_PTR_SET_VALUE(rootErrorMsg_, rootErrorMsg) };


    // synchro Field Functions 
    bool hasSynchro() const { return this->synchro_ != nullptr;};
    void deleteSynchro() { this->synchro_ = nullptr;};
    inline bool getSynchro() const { DARABONBA_PTR_GET_DEFAULT(synchro_, false) };
    inline CreateAppInstanceTicketResponseBody& setSynchro(bool synchro) { DARABONBA_PTR_SET_VALUE(synchro_, synchro) };


  protected:
    // Detailed reason for access denial.
    shared_ptr<string> accessDeniedDetail_ {};
    // Whether to allow retry
    shared_ptr<bool> allowRetry_ {};
    // App name.
    shared_ptr<string> appName_ {};
    // Dynamic error code.
    shared_ptr<string> dynamicCode_ {};
    // Dynamic error message, used to replace the `%s` in the **ErrMessage** error message.
    // > If **ErrMessage** returns **The Value of Input Parameter %s is not valid**, and **DynamicMessage** returns **DtsJobId**, it means that the input request parameter **DtsJobId** is invalid.
    shared_ptr<string> dynamicMessage_ {};
    // Returned error parameters
    shared_ptr<vector<Darabonba::Json>> errorArgs_ {};
    // Response data
    shared_ptr<CreateAppInstanceTicketResponseBody::Module> module_ {};
    // ID of the request
    shared_ptr<string> requestId_ {};
    // Error code
    shared_ptr<string> rootErrorCode_ {};
    // Exception message
    shared_ptr<string> rootErrorMsg_ {};
    // Reserved parameter.
    shared_ptr<bool> synchro_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WebsiteBuild20250429
#endif
