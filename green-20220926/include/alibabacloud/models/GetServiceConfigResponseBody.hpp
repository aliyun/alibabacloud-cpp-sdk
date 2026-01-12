// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSERVICECONFIGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETSERVICECONFIGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Green20220926
{
namespace Models
{
  class GetServiceConfigResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetServiceConfigResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Msg, msg_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetServiceConfigResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Msg, msg_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetServiceConfigResponseBody() = default ;
    GetServiceConfigResponseBody(const GetServiceConfigResponseBody &) = default ;
    GetServiceConfigResponseBody(GetServiceConfigResponseBody &&) = default ;
    GetServiceConfigResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetServiceConfigResponseBody() = default ;
    GetServiceConfigResponseBody& operator=(const GetServiceConfigResponseBody &) = default ;
    GetServiceConfigResponseBody& operator=(GetServiceConfigResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(CustomServiceConf, customServiceConf_);
        DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
        DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
        DARABONBA_PTR_TO_JSON(ServiceCode, serviceCode_);
        DARABONBA_PTR_TO_JSON(Uid, uid_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(CustomServiceConf, customServiceConf_);
        DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
        DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
        DARABONBA_PTR_FROM_JSON(ServiceCode, serviceCode_);
        DARABONBA_PTR_FROM_JSON(Uid, uid_);
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
      class CustomServiceConf : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const CustomServiceConf& obj) { 
          DARABONBA_PTR_TO_JSON(KeywordFilterLibs, keywordFilterLibs_);
          DARABONBA_PTR_TO_JSON(KeywordHitLibs, keywordHitLibs_);
          DARABONBA_PTR_TO_JSON(ManualMachineConfig, manualMachineConfig_);
          DARABONBA_PTR_TO_JSON(SimilarTextHitLibs, similarTextHitLibs_);
        };
        friend void from_json(const Darabonba::Json& j, CustomServiceConf& obj) { 
          DARABONBA_PTR_FROM_JSON(KeywordFilterLibs, keywordFilterLibs_);
          DARABONBA_PTR_FROM_JSON(KeywordHitLibs, keywordHitLibs_);
          DARABONBA_PTR_FROM_JSON(ManualMachineConfig, manualMachineConfig_);
          DARABONBA_PTR_FROM_JSON(SimilarTextHitLibs, similarTextHitLibs_);
        };
        CustomServiceConf() = default ;
        CustomServiceConf(const CustomServiceConf &) = default ;
        CustomServiceConf(CustomServiceConf &&) = default ;
        CustomServiceConf(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~CustomServiceConf() = default ;
        CustomServiceConf& operator=(const CustomServiceConf &) = default ;
        CustomServiceConf& operator=(CustomServiceConf &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class ManualMachineConfig : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const ManualMachineConfig& obj) { 
            DARABONBA_PTR_TO_JSON(AuditRiskLevels, auditRiskLevels_);
            DARABONBA_PTR_TO_JSON(CallbackId, callbackId_);
            DARABONBA_PTR_TO_JSON(Enable, enable_);
            DARABONBA_PTR_TO_JSON(ManualService, manualService_);
          };
          friend void from_json(const Darabonba::Json& j, ManualMachineConfig& obj) { 
            DARABONBA_PTR_FROM_JSON(AuditRiskLevels, auditRiskLevels_);
            DARABONBA_PTR_FROM_JSON(CallbackId, callbackId_);
            DARABONBA_PTR_FROM_JSON(Enable, enable_);
            DARABONBA_PTR_FROM_JSON(ManualService, manualService_);
          };
          ManualMachineConfig() = default ;
          ManualMachineConfig(const ManualMachineConfig &) = default ;
          ManualMachineConfig(ManualMachineConfig &&) = default ;
          ManualMachineConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~ManualMachineConfig() = default ;
          ManualMachineConfig& operator=(const ManualMachineConfig &) = default ;
          ManualMachineConfig& operator=(ManualMachineConfig &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->auditRiskLevels_ == nullptr
        && this->callbackId_ == nullptr && this->enable_ == nullptr && this->manualService_ == nullptr; };
          // auditRiskLevels Field Functions 
          bool hasAuditRiskLevels() const { return this->auditRiskLevels_ != nullptr;};
          void deleteAuditRiskLevels() { this->auditRiskLevels_ = nullptr;};
          inline const vector<string> & getAuditRiskLevels() const { DARABONBA_PTR_GET_CONST(auditRiskLevels_, vector<string>) };
          inline vector<string> getAuditRiskLevels() { DARABONBA_PTR_GET(auditRiskLevels_, vector<string>) };
          inline ManualMachineConfig& setAuditRiskLevels(const vector<string> & auditRiskLevels) { DARABONBA_PTR_SET_VALUE(auditRiskLevels_, auditRiskLevels) };
          inline ManualMachineConfig& setAuditRiskLevels(vector<string> && auditRiskLevels) { DARABONBA_PTR_SET_RVALUE(auditRiskLevels_, auditRiskLevels) };


          // callbackId Field Functions 
          bool hasCallbackId() const { return this->callbackId_ != nullptr;};
          void deleteCallbackId() { this->callbackId_ = nullptr;};
          inline int64_t getCallbackId() const { DARABONBA_PTR_GET_DEFAULT(callbackId_, 0L) };
          inline ManualMachineConfig& setCallbackId(int64_t callbackId) { DARABONBA_PTR_SET_VALUE(callbackId_, callbackId) };


          // enable Field Functions 
          bool hasEnable() const { return this->enable_ != nullptr;};
          void deleteEnable() { this->enable_ = nullptr;};
          inline bool getEnable() const { DARABONBA_PTR_GET_DEFAULT(enable_, false) };
          inline ManualMachineConfig& setEnable(bool enable) { DARABONBA_PTR_SET_VALUE(enable_, enable) };


          // manualService Field Functions 
          bool hasManualService() const { return this->manualService_ != nullptr;};
          void deleteManualService() { this->manualService_ = nullptr;};
          inline string getManualService() const { DARABONBA_PTR_GET_DEFAULT(manualService_, "") };
          inline ManualMachineConfig& setManualService(string manualService) { DARABONBA_PTR_SET_VALUE(manualService_, manualService) };


        protected:
          // Risk levels.
          shared_ptr<vector<string>> auditRiskLevels_ {};
          // Callback notification ID
          shared_ptr<int64_t> callbackId_ {};
          // Whether to enable. Values:
          // - **true**: Enabled
          // - **false**: Disabled
          shared_ptr<bool> enable_ {};
          // Manual review service
          shared_ptr<string> manualService_ {};
        };

        virtual bool empty() const override { return this->keywordFilterLibs_ == nullptr
        && this->keywordHitLibs_ == nullptr && this->manualMachineConfig_ == nullptr && this->similarTextHitLibs_ == nullptr; };
        // keywordFilterLibs Field Functions 
        bool hasKeywordFilterLibs() const { return this->keywordFilterLibs_ != nullptr;};
        void deleteKeywordFilterLibs() { this->keywordFilterLibs_ = nullptr;};
        inline const vector<string> & getKeywordFilterLibs() const { DARABONBA_PTR_GET_CONST(keywordFilterLibs_, vector<string>) };
        inline vector<string> getKeywordFilterLibs() { DARABONBA_PTR_GET(keywordFilterLibs_, vector<string>) };
        inline CustomServiceConf& setKeywordFilterLibs(const vector<string> & keywordFilterLibs) { DARABONBA_PTR_SET_VALUE(keywordFilterLibs_, keywordFilterLibs) };
        inline CustomServiceConf& setKeywordFilterLibs(vector<string> && keywordFilterLibs) { DARABONBA_PTR_SET_RVALUE(keywordFilterLibs_, keywordFilterLibs) };


        // keywordHitLibs Field Functions 
        bool hasKeywordHitLibs() const { return this->keywordHitLibs_ != nullptr;};
        void deleteKeywordHitLibs() { this->keywordHitLibs_ = nullptr;};
        inline const vector<string> & getKeywordHitLibs() const { DARABONBA_PTR_GET_CONST(keywordHitLibs_, vector<string>) };
        inline vector<string> getKeywordHitLibs() { DARABONBA_PTR_GET(keywordHitLibs_, vector<string>) };
        inline CustomServiceConf& setKeywordHitLibs(const vector<string> & keywordHitLibs) { DARABONBA_PTR_SET_VALUE(keywordHitLibs_, keywordHitLibs) };
        inline CustomServiceConf& setKeywordHitLibs(vector<string> && keywordHitLibs) { DARABONBA_PTR_SET_RVALUE(keywordHitLibs_, keywordHitLibs) };


        // manualMachineConfig Field Functions 
        bool hasManualMachineConfig() const { return this->manualMachineConfig_ != nullptr;};
        void deleteManualMachineConfig() { this->manualMachineConfig_ = nullptr;};
        inline const CustomServiceConf::ManualMachineConfig & getManualMachineConfig() const { DARABONBA_PTR_GET_CONST(manualMachineConfig_, CustomServiceConf::ManualMachineConfig) };
        inline CustomServiceConf::ManualMachineConfig getManualMachineConfig() { DARABONBA_PTR_GET(manualMachineConfig_, CustomServiceConf::ManualMachineConfig) };
        inline CustomServiceConf& setManualMachineConfig(const CustomServiceConf::ManualMachineConfig & manualMachineConfig) { DARABONBA_PTR_SET_VALUE(manualMachineConfig_, manualMachineConfig) };
        inline CustomServiceConf& setManualMachineConfig(CustomServiceConf::ManualMachineConfig && manualMachineConfig) { DARABONBA_PTR_SET_RVALUE(manualMachineConfig_, manualMachineConfig) };


        // similarTextHitLibs Field Functions 
        bool hasSimilarTextHitLibs() const { return this->similarTextHitLibs_ != nullptr;};
        void deleteSimilarTextHitLibs() { this->similarTextHitLibs_ = nullptr;};
        inline const vector<string> & getSimilarTextHitLibs() const { DARABONBA_PTR_GET_CONST(similarTextHitLibs_, vector<string>) };
        inline vector<string> getSimilarTextHitLibs() { DARABONBA_PTR_GET(similarTextHitLibs_, vector<string>) };
        inline CustomServiceConf& setSimilarTextHitLibs(const vector<string> & similarTextHitLibs) { DARABONBA_PTR_SET_VALUE(similarTextHitLibs_, similarTextHitLibs) };
        inline CustomServiceConf& setSimilarTextHitLibs(vector<string> && similarTextHitLibs) { DARABONBA_PTR_SET_RVALUE(similarTextHitLibs_, similarTextHitLibs) };


      protected:
        // Ignore word libraries.
        shared_ptr<vector<string>> keywordFilterLibs_ {};
        // Hit word libraries.
        shared_ptr<vector<string>> keywordHitLibs_ {};
        // Human-machine review configuration.
        shared_ptr<CustomServiceConf::ManualMachineConfig> manualMachineConfig_ {};
        // Hit similar text libraries.
        shared_ptr<vector<string>> similarTextHitLibs_ {};
      };

      virtual bool empty() const override { return this->customServiceConf_ == nullptr
        && this->gmtModified_ == nullptr && this->resourceType_ == nullptr && this->serviceCode_ == nullptr && this->uid_ == nullptr; };
      // customServiceConf Field Functions 
      bool hasCustomServiceConf() const { return this->customServiceConf_ != nullptr;};
      void deleteCustomServiceConf() { this->customServiceConf_ = nullptr;};
      inline const Data::CustomServiceConf & getCustomServiceConf() const { DARABONBA_PTR_GET_CONST(customServiceConf_, Data::CustomServiceConf) };
      inline Data::CustomServiceConf getCustomServiceConf() { DARABONBA_PTR_GET(customServiceConf_, Data::CustomServiceConf) };
      inline Data& setCustomServiceConf(const Data::CustomServiceConf & customServiceConf) { DARABONBA_PTR_SET_VALUE(customServiceConf_, customServiceConf) };
      inline Data& setCustomServiceConf(Data::CustomServiceConf && customServiceConf) { DARABONBA_PTR_SET_RVALUE(customServiceConf_, customServiceConf) };


      // gmtModified Field Functions 
      bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
      void deleteGmtModified() { this->gmtModified_ = nullptr;};
      inline string getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
      inline Data& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


      // resourceType Field Functions 
      bool hasResourceType() const { return this->resourceType_ != nullptr;};
      void deleteResourceType() { this->resourceType_ = nullptr;};
      inline string getResourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
      inline Data& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


      // serviceCode Field Functions 
      bool hasServiceCode() const { return this->serviceCode_ != nullptr;};
      void deleteServiceCode() { this->serviceCode_ = nullptr;};
      inline string getServiceCode() const { DARABONBA_PTR_GET_DEFAULT(serviceCode_, "") };
      inline Data& setServiceCode(string serviceCode) { DARABONBA_PTR_SET_VALUE(serviceCode_, serviceCode) };


      // uid Field Functions 
      bool hasUid() const { return this->uid_ != nullptr;};
      void deleteUid() { this->uid_ = nullptr;};
      inline string getUid() const { DARABONBA_PTR_GET_DEFAULT(uid_, "") };
      inline Data& setUid(string uid) { DARABONBA_PTR_SET_VALUE(uid_, uid) };


    protected:
      // Custom service details
      shared_ptr<Data::CustomServiceConf> customServiceConf_ {};
      // Modification time.
      shared_ptr<string> gmtModified_ {};
      // Resource type.
      shared_ptr<string> resourceType_ {};
      // Service code.
      shared_ptr<string> serviceCode_ {};
      // UID.
      shared_ptr<string> uid_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->msg_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline GetServiceConfigResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetServiceConfigResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetServiceConfigResponseBody::Data) };
    inline GetServiceConfigResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetServiceConfigResponseBody::Data) };
    inline GetServiceConfigResponseBody& setData(const GetServiceConfigResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetServiceConfigResponseBody& setData(GetServiceConfigResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // msg Field Functions 
    bool hasMsg() const { return this->msg_ != nullptr;};
    void deleteMsg() { this->msg_ = nullptr;};
    inline string getMsg() const { DARABONBA_PTR_GET_DEFAULT(msg_, "") };
    inline GetServiceConfigResponseBody& setMsg(string msg) { DARABONBA_PTR_SET_VALUE(msg_, msg) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetServiceConfigResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetServiceConfigResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // Error code.
    shared_ptr<int32_t> code_ {};
    // Returned data.
    shared_ptr<GetServiceConfigResponseBody::Data> data_ {};
    // Further description of the error code.
    shared_ptr<string> msg_ {};
    // Request ID.
    shared_ptr<string> requestId_ {};
    // Success indicator.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Green20220926
#endif
