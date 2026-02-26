// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETINSTANCEFEATUREGATERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETINSTANCEFEATUREGATERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Starrocks20221019
{
namespace Models
{
  class GetInstanceFeatureGateResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetInstanceFeatureGateResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(ErrCode, errCode_);
      DARABONBA_PTR_TO_JSON(ErrMessage, errMessage_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(Total, total_);
    };
    friend void from_json(const Darabonba::Json& j, GetInstanceFeatureGateResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(ErrCode, errCode_);
      DARABONBA_PTR_FROM_JSON(ErrMessage, errMessage_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(Total, total_);
    };
    GetInstanceFeatureGateResponseBody() = default ;
    GetInstanceFeatureGateResponseBody(const GetInstanceFeatureGateResponseBody &) = default ;
    GetInstanceFeatureGateResponseBody(GetInstanceFeatureGateResponseBody &&) = default ;
    GetInstanceFeatureGateResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetInstanceFeatureGateResponseBody() = default ;
    GetInstanceFeatureGateResponseBody& operator=(const GetInstanceFeatureGateResponseBody &) = default ;
    GetInstanceFeatureGateResponseBody& operator=(GetInstanceFeatureGateResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(ConsoleControlRestart, consoleControlRestart_);
        DARABONBA_PTR_TO_JSON(EnableManageMv, enableManageMv_);
        DARABONBA_PTR_TO_JSON(FullManagedSecurityGroup, fullManagedSecurityGroup_);
        DARABONBA_PTR_TO_JSON(MountDlfMetaToken, mountDlfMetaToken_);
        DARABONBA_PTR_TO_JSON(SupportAddConfigTypes, supportAddConfigTypes_);
        DARABONBA_PTR_TO_JSON(SupportBackup, supportBackup_);
        DARABONBA_PTR_TO_JSON(SupportCreateAgent, supportCreateAgent_);
        DARABONBA_PTR_TO_JSON(SupportCreateNonStandardNodeGroup, supportCreateNonStandardNodeGroup_);
        DARABONBA_PTR_TO_JSON(SupportEed, supportEed_);
        DARABONBA_PTR_TO_JSON(SupportEnableAi, supportEnableAi_);
        DARABONBA_PTR_TO_JSON(SupportEnableSSL, supportEnableSSL_);
        DARABONBA_PTR_TO_JSON(SupportFastModeModifyConfig, supportFastModeModifyConfig_);
        DARABONBA_PTR_TO_JSON(SupportFastModeModifyResource, supportFastModeModifyResource_);
        DARABONBA_PTR_TO_JSON(SupportFastRestart, supportFastRestart_);
        DARABONBA_PTR_TO_JSON(SupportFeGateway, supportFeGateway_);
        DARABONBA_PTR_TO_JSON(SupportHostAlias, supportHostAlias_);
        DARABONBA_PTR_TO_JSON(SupportModifyTimezone, supportModifyTimezone_);
        DARABONBA_PTR_TO_JSON(SupportMultiAZ, supportMultiAZ_);
        DARABONBA_PTR_TO_JSON(UseComputeNode, useComputeNode_);
        DARABONBA_PTR_TO_JSON(supportCompactionService, supportCompactionService_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(ConsoleControlRestart, consoleControlRestart_);
        DARABONBA_PTR_FROM_JSON(EnableManageMv, enableManageMv_);
        DARABONBA_PTR_FROM_JSON(FullManagedSecurityGroup, fullManagedSecurityGroup_);
        DARABONBA_PTR_FROM_JSON(MountDlfMetaToken, mountDlfMetaToken_);
        DARABONBA_PTR_FROM_JSON(SupportAddConfigTypes, supportAddConfigTypes_);
        DARABONBA_PTR_FROM_JSON(SupportBackup, supportBackup_);
        DARABONBA_PTR_FROM_JSON(SupportCreateAgent, supportCreateAgent_);
        DARABONBA_PTR_FROM_JSON(SupportCreateNonStandardNodeGroup, supportCreateNonStandardNodeGroup_);
        DARABONBA_PTR_FROM_JSON(SupportEed, supportEed_);
        DARABONBA_PTR_FROM_JSON(SupportEnableAi, supportEnableAi_);
        DARABONBA_PTR_FROM_JSON(SupportEnableSSL, supportEnableSSL_);
        DARABONBA_PTR_FROM_JSON(SupportFastModeModifyConfig, supportFastModeModifyConfig_);
        DARABONBA_PTR_FROM_JSON(SupportFastModeModifyResource, supportFastModeModifyResource_);
        DARABONBA_PTR_FROM_JSON(SupportFastRestart, supportFastRestart_);
        DARABONBA_PTR_FROM_JSON(SupportFeGateway, supportFeGateway_);
        DARABONBA_PTR_FROM_JSON(SupportHostAlias, supportHostAlias_);
        DARABONBA_PTR_FROM_JSON(SupportModifyTimezone, supportModifyTimezone_);
        DARABONBA_PTR_FROM_JSON(SupportMultiAZ, supportMultiAZ_);
        DARABONBA_PTR_FROM_JSON(UseComputeNode, useComputeNode_);
        DARABONBA_PTR_FROM_JSON(supportCompactionService, supportCompactionService_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->consoleControlRestart_ == nullptr
        && this->enableManageMv_ == nullptr && this->fullManagedSecurityGroup_ == nullptr && this->mountDlfMetaToken_ == nullptr && this->supportAddConfigTypes_ == nullptr && this->supportBackup_ == nullptr
        && this->supportCreateAgent_ == nullptr && this->supportCreateNonStandardNodeGroup_ == nullptr && this->supportEed_ == nullptr && this->supportEnableAi_ == nullptr && this->supportEnableSSL_ == nullptr
        && this->supportFastModeModifyConfig_ == nullptr && this->supportFastModeModifyResource_ == nullptr && this->supportFastRestart_ == nullptr && this->supportFeGateway_ == nullptr && this->supportHostAlias_ == nullptr
        && this->supportModifyTimezone_ == nullptr && this->supportMultiAZ_ == nullptr && this->useComputeNode_ == nullptr && this->supportCompactionService_ == nullptr; };
      // consoleControlRestart Field Functions 
      bool hasConsoleControlRestart() const { return this->consoleControlRestart_ != nullptr;};
      void deleteConsoleControlRestart() { this->consoleControlRestart_ = nullptr;};
      inline bool getConsoleControlRestart() const { DARABONBA_PTR_GET_DEFAULT(consoleControlRestart_, false) };
      inline Data& setConsoleControlRestart(bool consoleControlRestart) { DARABONBA_PTR_SET_VALUE(consoleControlRestart_, consoleControlRestart) };


      // enableManageMv Field Functions 
      bool hasEnableManageMv() const { return this->enableManageMv_ != nullptr;};
      void deleteEnableManageMv() { this->enableManageMv_ = nullptr;};
      inline bool getEnableManageMv() const { DARABONBA_PTR_GET_DEFAULT(enableManageMv_, false) };
      inline Data& setEnableManageMv(bool enableManageMv) { DARABONBA_PTR_SET_VALUE(enableManageMv_, enableManageMv) };


      // fullManagedSecurityGroup Field Functions 
      bool hasFullManagedSecurityGroup() const { return this->fullManagedSecurityGroup_ != nullptr;};
      void deleteFullManagedSecurityGroup() { this->fullManagedSecurityGroup_ = nullptr;};
      inline bool getFullManagedSecurityGroup() const { DARABONBA_PTR_GET_DEFAULT(fullManagedSecurityGroup_, false) };
      inline Data& setFullManagedSecurityGroup(bool fullManagedSecurityGroup) { DARABONBA_PTR_SET_VALUE(fullManagedSecurityGroup_, fullManagedSecurityGroup) };


      // mountDlfMetaToken Field Functions 
      bool hasMountDlfMetaToken() const { return this->mountDlfMetaToken_ != nullptr;};
      void deleteMountDlfMetaToken() { this->mountDlfMetaToken_ = nullptr;};
      inline bool getMountDlfMetaToken() const { DARABONBA_PTR_GET_DEFAULT(mountDlfMetaToken_, false) };
      inline Data& setMountDlfMetaToken(bool mountDlfMetaToken) { DARABONBA_PTR_SET_VALUE(mountDlfMetaToken_, mountDlfMetaToken) };


      // supportAddConfigTypes Field Functions 
      bool hasSupportAddConfigTypes() const { return this->supportAddConfigTypes_ != nullptr;};
      void deleteSupportAddConfigTypes() { this->supportAddConfigTypes_ = nullptr;};
      inline const vector<string> & getSupportAddConfigTypes() const { DARABONBA_PTR_GET_CONST(supportAddConfigTypes_, vector<string>) };
      inline vector<string> getSupportAddConfigTypes() { DARABONBA_PTR_GET(supportAddConfigTypes_, vector<string>) };
      inline Data& setSupportAddConfigTypes(const vector<string> & supportAddConfigTypes) { DARABONBA_PTR_SET_VALUE(supportAddConfigTypes_, supportAddConfigTypes) };
      inline Data& setSupportAddConfigTypes(vector<string> && supportAddConfigTypes) { DARABONBA_PTR_SET_RVALUE(supportAddConfigTypes_, supportAddConfigTypes) };


      // supportBackup Field Functions 
      bool hasSupportBackup() const { return this->supportBackup_ != nullptr;};
      void deleteSupportBackup() { this->supportBackup_ = nullptr;};
      inline bool getSupportBackup() const { DARABONBA_PTR_GET_DEFAULT(supportBackup_, false) };
      inline Data& setSupportBackup(bool supportBackup) { DARABONBA_PTR_SET_VALUE(supportBackup_, supportBackup) };


      // supportCreateAgent Field Functions 
      bool hasSupportCreateAgent() const { return this->supportCreateAgent_ != nullptr;};
      void deleteSupportCreateAgent() { this->supportCreateAgent_ = nullptr;};
      inline bool getSupportCreateAgent() const { DARABONBA_PTR_GET_DEFAULT(supportCreateAgent_, false) };
      inline Data& setSupportCreateAgent(bool supportCreateAgent) { DARABONBA_PTR_SET_VALUE(supportCreateAgent_, supportCreateAgent) };


      // supportCreateNonStandardNodeGroup Field Functions 
      bool hasSupportCreateNonStandardNodeGroup() const { return this->supportCreateNonStandardNodeGroup_ != nullptr;};
      void deleteSupportCreateNonStandardNodeGroup() { this->supportCreateNonStandardNodeGroup_ = nullptr;};
      inline bool getSupportCreateNonStandardNodeGroup() const { DARABONBA_PTR_GET_DEFAULT(supportCreateNonStandardNodeGroup_, false) };
      inline Data& setSupportCreateNonStandardNodeGroup(bool supportCreateNonStandardNodeGroup) { DARABONBA_PTR_SET_VALUE(supportCreateNonStandardNodeGroup_, supportCreateNonStandardNodeGroup) };


      // supportEed Field Functions 
      bool hasSupportEed() const { return this->supportEed_ != nullptr;};
      void deleteSupportEed() { this->supportEed_ = nullptr;};
      inline bool getSupportEed() const { DARABONBA_PTR_GET_DEFAULT(supportEed_, false) };
      inline Data& setSupportEed(bool supportEed) { DARABONBA_PTR_SET_VALUE(supportEed_, supportEed) };


      // supportEnableAi Field Functions 
      bool hasSupportEnableAi() const { return this->supportEnableAi_ != nullptr;};
      void deleteSupportEnableAi() { this->supportEnableAi_ = nullptr;};
      inline bool getSupportEnableAi() const { DARABONBA_PTR_GET_DEFAULT(supportEnableAi_, false) };
      inline Data& setSupportEnableAi(bool supportEnableAi) { DARABONBA_PTR_SET_VALUE(supportEnableAi_, supportEnableAi) };


      // supportEnableSSL Field Functions 
      bool hasSupportEnableSSL() const { return this->supportEnableSSL_ != nullptr;};
      void deleteSupportEnableSSL() { this->supportEnableSSL_ = nullptr;};
      inline bool getSupportEnableSSL() const { DARABONBA_PTR_GET_DEFAULT(supportEnableSSL_, false) };
      inline Data& setSupportEnableSSL(bool supportEnableSSL) { DARABONBA_PTR_SET_VALUE(supportEnableSSL_, supportEnableSSL) };


      // supportFastModeModifyConfig Field Functions 
      bool hasSupportFastModeModifyConfig() const { return this->supportFastModeModifyConfig_ != nullptr;};
      void deleteSupportFastModeModifyConfig() { this->supportFastModeModifyConfig_ = nullptr;};
      inline bool getSupportFastModeModifyConfig() const { DARABONBA_PTR_GET_DEFAULT(supportFastModeModifyConfig_, false) };
      inline Data& setSupportFastModeModifyConfig(bool supportFastModeModifyConfig) { DARABONBA_PTR_SET_VALUE(supportFastModeModifyConfig_, supportFastModeModifyConfig) };


      // supportFastModeModifyResource Field Functions 
      bool hasSupportFastModeModifyResource() const { return this->supportFastModeModifyResource_ != nullptr;};
      void deleteSupportFastModeModifyResource() { this->supportFastModeModifyResource_ = nullptr;};
      inline bool getSupportFastModeModifyResource() const { DARABONBA_PTR_GET_DEFAULT(supportFastModeModifyResource_, false) };
      inline Data& setSupportFastModeModifyResource(bool supportFastModeModifyResource) { DARABONBA_PTR_SET_VALUE(supportFastModeModifyResource_, supportFastModeModifyResource) };


      // supportFastRestart Field Functions 
      bool hasSupportFastRestart() const { return this->supportFastRestart_ != nullptr;};
      void deleteSupportFastRestart() { this->supportFastRestart_ = nullptr;};
      inline bool getSupportFastRestart() const { DARABONBA_PTR_GET_DEFAULT(supportFastRestart_, false) };
      inline Data& setSupportFastRestart(bool supportFastRestart) { DARABONBA_PTR_SET_VALUE(supportFastRestart_, supportFastRestart) };


      // supportFeGateway Field Functions 
      bool hasSupportFeGateway() const { return this->supportFeGateway_ != nullptr;};
      void deleteSupportFeGateway() { this->supportFeGateway_ = nullptr;};
      inline bool getSupportFeGateway() const { DARABONBA_PTR_GET_DEFAULT(supportFeGateway_, false) };
      inline Data& setSupportFeGateway(bool supportFeGateway) { DARABONBA_PTR_SET_VALUE(supportFeGateway_, supportFeGateway) };


      // supportHostAlias Field Functions 
      bool hasSupportHostAlias() const { return this->supportHostAlias_ != nullptr;};
      void deleteSupportHostAlias() { this->supportHostAlias_ = nullptr;};
      inline bool getSupportHostAlias() const { DARABONBA_PTR_GET_DEFAULT(supportHostAlias_, false) };
      inline Data& setSupportHostAlias(bool supportHostAlias) { DARABONBA_PTR_SET_VALUE(supportHostAlias_, supportHostAlias) };


      // supportModifyTimezone Field Functions 
      bool hasSupportModifyTimezone() const { return this->supportModifyTimezone_ != nullptr;};
      void deleteSupportModifyTimezone() { this->supportModifyTimezone_ = nullptr;};
      inline bool getSupportModifyTimezone() const { DARABONBA_PTR_GET_DEFAULT(supportModifyTimezone_, false) };
      inline Data& setSupportModifyTimezone(bool supportModifyTimezone) { DARABONBA_PTR_SET_VALUE(supportModifyTimezone_, supportModifyTimezone) };


      // supportMultiAZ Field Functions 
      bool hasSupportMultiAZ() const { return this->supportMultiAZ_ != nullptr;};
      void deleteSupportMultiAZ() { this->supportMultiAZ_ = nullptr;};
      inline bool getSupportMultiAZ() const { DARABONBA_PTR_GET_DEFAULT(supportMultiAZ_, false) };
      inline Data& setSupportMultiAZ(bool supportMultiAZ) { DARABONBA_PTR_SET_VALUE(supportMultiAZ_, supportMultiAZ) };


      // useComputeNode Field Functions 
      bool hasUseComputeNode() const { return this->useComputeNode_ != nullptr;};
      void deleteUseComputeNode() { this->useComputeNode_ = nullptr;};
      inline bool getUseComputeNode() const { DARABONBA_PTR_GET_DEFAULT(useComputeNode_, false) };
      inline Data& setUseComputeNode(bool useComputeNode) { DARABONBA_PTR_SET_VALUE(useComputeNode_, useComputeNode) };


      // supportCompactionService Field Functions 
      bool hasSupportCompactionService() const { return this->supportCompactionService_ != nullptr;};
      void deleteSupportCompactionService() { this->supportCompactionService_ = nullptr;};
      inline bool getSupportCompactionService() const { DARABONBA_PTR_GET_DEFAULT(supportCompactionService_, false) };
      inline Data& setSupportCompactionService(bool supportCompactionService) { DARABONBA_PTR_SET_VALUE(supportCompactionService_, supportCompactionService) };


    protected:
      shared_ptr<bool> consoleControlRestart_ {};
      shared_ptr<bool> enableManageMv_ {};
      shared_ptr<bool> fullManagedSecurityGroup_ {};
      shared_ptr<bool> mountDlfMetaToken_ {};
      shared_ptr<vector<string>> supportAddConfigTypes_ {};
      shared_ptr<bool> supportBackup_ {};
      shared_ptr<bool> supportCreateAgent_ {};
      shared_ptr<bool> supportCreateNonStandardNodeGroup_ {};
      shared_ptr<bool> supportEed_ {};
      shared_ptr<bool> supportEnableAi_ {};
      shared_ptr<bool> supportEnableSSL_ {};
      shared_ptr<bool> supportFastModeModifyConfig_ {};
      shared_ptr<bool> supportFastModeModifyResource_ {};
      shared_ptr<bool> supportFastRestart_ {};
      shared_ptr<bool> supportFeGateway_ {};
      shared_ptr<bool> supportHostAlias_ {};
      shared_ptr<bool> supportModifyTimezone_ {};
      shared_ptr<bool> supportMultiAZ_ {};
      shared_ptr<bool> useComputeNode_ {};
      shared_ptr<bool> supportCompactionService_ {};
    };

    virtual bool empty() const override { return this->accessDeniedDetail_ == nullptr
        && this->data_ == nullptr && this->errCode_ == nullptr && this->errMessage_ == nullptr && this->httpStatusCode_ == nullptr && this->requestId_ == nullptr
        && this->success_ == nullptr && this->total_ == nullptr; };
    // accessDeniedDetail Field Functions 
    bool hasAccessDeniedDetail() const { return this->accessDeniedDetail_ != nullptr;};
    void deleteAccessDeniedDetail() { this->accessDeniedDetail_ = nullptr;};
    inline string getAccessDeniedDetail() const { DARABONBA_PTR_GET_DEFAULT(accessDeniedDetail_, "") };
    inline GetInstanceFeatureGateResponseBody& setAccessDeniedDetail(string accessDeniedDetail) { DARABONBA_PTR_SET_VALUE(accessDeniedDetail_, accessDeniedDetail) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetInstanceFeatureGateResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetInstanceFeatureGateResponseBody::Data) };
    inline GetInstanceFeatureGateResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetInstanceFeatureGateResponseBody::Data) };
    inline GetInstanceFeatureGateResponseBody& setData(const GetInstanceFeatureGateResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetInstanceFeatureGateResponseBody& setData(GetInstanceFeatureGateResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // errCode Field Functions 
    bool hasErrCode() const { return this->errCode_ != nullptr;};
    void deleteErrCode() { this->errCode_ = nullptr;};
    inline string getErrCode() const { DARABONBA_PTR_GET_DEFAULT(errCode_, "") };
    inline GetInstanceFeatureGateResponseBody& setErrCode(string errCode) { DARABONBA_PTR_SET_VALUE(errCode_, errCode) };


    // errMessage Field Functions 
    bool hasErrMessage() const { return this->errMessage_ != nullptr;};
    void deleteErrMessage() { this->errMessage_ = nullptr;};
    inline string getErrMessage() const { DARABONBA_PTR_GET_DEFAULT(errMessage_, "") };
    inline GetInstanceFeatureGateResponseBody& setErrMessage(string errMessage) { DARABONBA_PTR_SET_VALUE(errMessage_, errMessage) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline GetInstanceFeatureGateResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetInstanceFeatureGateResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetInstanceFeatureGateResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int32_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0) };
    inline GetInstanceFeatureGateResponseBody& setTotal(int32_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


  protected:
    // AccessDeniedDetail
    shared_ptr<string> accessDeniedDetail_ {};
    shared_ptr<GetInstanceFeatureGateResponseBody::Data> data_ {};
    shared_ptr<string> errCode_ {};
    shared_ptr<string> errMessage_ {};
    shared_ptr<int32_t> httpStatusCode_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
    shared_ptr<int32_t> total_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Starrocks20221019
#endif
