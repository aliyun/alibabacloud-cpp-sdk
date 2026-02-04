// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEAPPDOMAINCERTIFICATERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DELETEAPPDOMAINCERTIFICATERESPONSEBODY_HPP_
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
  class DeleteAppDomainCertificateResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteAppDomainCertificateResponseBody& obj) { 
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
    friend void from_json(const Darabonba::Json& j, DeleteAppDomainCertificateResponseBody& obj) { 
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
    DeleteAppDomainCertificateResponseBody() = default ;
    DeleteAppDomainCertificateResponseBody(const DeleteAppDomainCertificateResponseBody &) = default ;
    DeleteAppDomainCertificateResponseBody(DeleteAppDomainCertificateResponseBody &&) = default ;
    DeleteAppDomainCertificateResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteAppDomainCertificateResponseBody() = default ;
    DeleteAppDomainCertificateResponseBody& operator=(const DeleteAppDomainCertificateResponseBody &) = default ;
    DeleteAppDomainCertificateResponseBody& operator=(DeleteAppDomainCertificateResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Module : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Module& obj) { 
        DARABONBA_PTR_TO_JSON(Success, success_);
      };
      friend void from_json(const Darabonba::Json& j, Module& obj) { 
        DARABONBA_PTR_FROM_JSON(Success, success_);
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
      virtual bool empty() const override { return this->success_ == nullptr; };
      // success Field Functions 
      bool hasSuccess() const { return this->success_ != nullptr;};
      void deleteSuccess() { this->success_ = nullptr;};
      inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
      inline Module& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    protected:
      // Whether it was successful
      shared_ptr<bool> success_ {};
    };

    virtual bool empty() const override { return this->accessDeniedDetail_ == nullptr
        && this->allowRetry_ == nullptr && this->appName_ == nullptr && this->dynamicCode_ == nullptr && this->dynamicMessage_ == nullptr && this->errorArgs_ == nullptr
        && this->module_ == nullptr && this->requestId_ == nullptr && this->rootErrorCode_ == nullptr && this->rootErrorMsg_ == nullptr && this->synchro_ == nullptr; };
    // accessDeniedDetail Field Functions 
    bool hasAccessDeniedDetail() const { return this->accessDeniedDetail_ != nullptr;};
    void deleteAccessDeniedDetail() { this->accessDeniedDetail_ = nullptr;};
    inline string getAccessDeniedDetail() const { DARABONBA_PTR_GET_DEFAULT(accessDeniedDetail_, "") };
    inline DeleteAppDomainCertificateResponseBody& setAccessDeniedDetail(string accessDeniedDetail) { DARABONBA_PTR_SET_VALUE(accessDeniedDetail_, accessDeniedDetail) };


    // allowRetry Field Functions 
    bool hasAllowRetry() const { return this->allowRetry_ != nullptr;};
    void deleteAllowRetry() { this->allowRetry_ = nullptr;};
    inline bool getAllowRetry() const { DARABONBA_PTR_GET_DEFAULT(allowRetry_, false) };
    inline DeleteAppDomainCertificateResponseBody& setAllowRetry(bool allowRetry) { DARABONBA_PTR_SET_VALUE(allowRetry_, allowRetry) };


    // appName Field Functions 
    bool hasAppName() const { return this->appName_ != nullptr;};
    void deleteAppName() { this->appName_ = nullptr;};
    inline string getAppName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
    inline DeleteAppDomainCertificateResponseBody& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


    // dynamicCode Field Functions 
    bool hasDynamicCode() const { return this->dynamicCode_ != nullptr;};
    void deleteDynamicCode() { this->dynamicCode_ = nullptr;};
    inline string getDynamicCode() const { DARABONBA_PTR_GET_DEFAULT(dynamicCode_, "") };
    inline DeleteAppDomainCertificateResponseBody& setDynamicCode(string dynamicCode) { DARABONBA_PTR_SET_VALUE(dynamicCode_, dynamicCode) };


    // dynamicMessage Field Functions 
    bool hasDynamicMessage() const { return this->dynamicMessage_ != nullptr;};
    void deleteDynamicMessage() { this->dynamicMessage_ = nullptr;};
    inline string getDynamicMessage() const { DARABONBA_PTR_GET_DEFAULT(dynamicMessage_, "") };
    inline DeleteAppDomainCertificateResponseBody& setDynamicMessage(string dynamicMessage) { DARABONBA_PTR_SET_VALUE(dynamicMessage_, dynamicMessage) };


    // errorArgs Field Functions 
    bool hasErrorArgs() const { return this->errorArgs_ != nullptr;};
    void deleteErrorArgs() { this->errorArgs_ = nullptr;};
    inline const vector<Darabonba::Json> & getErrorArgs() const { DARABONBA_PTR_GET_CONST(errorArgs_, vector<Darabonba::Json>) };
    inline vector<Darabonba::Json> getErrorArgs() { DARABONBA_PTR_GET(errorArgs_, vector<Darabonba::Json>) };
    inline DeleteAppDomainCertificateResponseBody& setErrorArgs(const vector<Darabonba::Json> & errorArgs) { DARABONBA_PTR_SET_VALUE(errorArgs_, errorArgs) };
    inline DeleteAppDomainCertificateResponseBody& setErrorArgs(vector<Darabonba::Json> && errorArgs) { DARABONBA_PTR_SET_RVALUE(errorArgs_, errorArgs) };


    // module Field Functions 
    bool hasModule() const { return this->module_ != nullptr;};
    void deleteModule() { this->module_ = nullptr;};
    inline const DeleteAppDomainCertificateResponseBody::Module & getModule() const { DARABONBA_PTR_GET_CONST(module_, DeleteAppDomainCertificateResponseBody::Module) };
    inline DeleteAppDomainCertificateResponseBody::Module getModule() { DARABONBA_PTR_GET(module_, DeleteAppDomainCertificateResponseBody::Module) };
    inline DeleteAppDomainCertificateResponseBody& setModule(const DeleteAppDomainCertificateResponseBody::Module & module) { DARABONBA_PTR_SET_VALUE(module_, module) };
    inline DeleteAppDomainCertificateResponseBody& setModule(DeleteAppDomainCertificateResponseBody::Module && module) { DARABONBA_PTR_SET_RVALUE(module_, module) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DeleteAppDomainCertificateResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // rootErrorCode Field Functions 
    bool hasRootErrorCode() const { return this->rootErrorCode_ != nullptr;};
    void deleteRootErrorCode() { this->rootErrorCode_ = nullptr;};
    inline string getRootErrorCode() const { DARABONBA_PTR_GET_DEFAULT(rootErrorCode_, "") };
    inline DeleteAppDomainCertificateResponseBody& setRootErrorCode(string rootErrorCode) { DARABONBA_PTR_SET_VALUE(rootErrorCode_, rootErrorCode) };


    // rootErrorMsg Field Functions 
    bool hasRootErrorMsg() const { return this->rootErrorMsg_ != nullptr;};
    void deleteRootErrorMsg() { this->rootErrorMsg_ = nullptr;};
    inline string getRootErrorMsg() const { DARABONBA_PTR_GET_DEFAULT(rootErrorMsg_, "") };
    inline DeleteAppDomainCertificateResponseBody& setRootErrorMsg(string rootErrorMsg) { DARABONBA_PTR_SET_VALUE(rootErrorMsg_, rootErrorMsg) };


    // synchro Field Functions 
    bool hasSynchro() const { return this->synchro_ != nullptr;};
    void deleteSynchro() { this->synchro_ = nullptr;};
    inline bool getSynchro() const { DARABONBA_PTR_GET_DEFAULT(synchro_, false) };
    inline DeleteAppDomainCertificateResponseBody& setSynchro(bool synchro) { DARABONBA_PTR_SET_VALUE(synchro_, synchro) };


  protected:
    // Details of permission check failure
    shared_ptr<string> accessDeniedDetail_ {};
    // Whether retry is allowed. Values:
    // - false: Not allowed to retry.
    // - true: Allowed to retry.
    shared_ptr<bool> allowRetry_ {};
    // Application name. Allows a combination of numbers, letters, and hyphens (-). Must start with a letter, cannot end with a hyphen (-), and must not exceed 36 characters.
    shared_ptr<string> appName_ {};
    // Dynamic code, not in use, please ignore
    shared_ptr<string> dynamicCode_ {};
    // Dynamic message.
    shared_ptr<string> dynamicMessage_ {};
    // Returned error parameters
    shared_ptr<vector<Darabonba::Json>> errorArgs_ {};
    // Response data
    shared_ptr<DeleteAppDomainCertificateResponseBody::Module> module_ {};
    // ID of the request
    shared_ptr<string> requestId_ {};
    // Error code
    shared_ptr<string> rootErrorCode_ {};
    // Exception message
    shared_ptr<string> rootErrorMsg_ {};
    // Whether it is processed synchronously
    shared_ptr<bool> synchro_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WebsiteBuild20250429
#endif
