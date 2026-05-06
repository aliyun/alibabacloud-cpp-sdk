// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTVOICEACCESSPROFILERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTVOICEACCESSPROFILERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BailianVoiceBot20250101
{
namespace Models
{
  class ListVoiceAccessProfileResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListVoiceAccessProfileResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(Params, params_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListVoiceAccessProfileResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(Params, params_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListVoiceAccessProfileResponseBody() = default ;
    ListVoiceAccessProfileResponseBody(const ListVoiceAccessProfileResponseBody &) = default ;
    ListVoiceAccessProfileResponseBody(ListVoiceAccessProfileResponseBody &&) = default ;
    ListVoiceAccessProfileResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListVoiceAccessProfileResponseBody() = default ;
    ListVoiceAccessProfileResponseBody& operator=(const ListVoiceAccessProfileResponseBody &) = default ;
    ListVoiceAccessProfileResponseBody& operator=(ListVoiceAccessProfileResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
        DARABONBA_PTR_TO_JSON(VoiceAccessProfiles, voiceAccessProfiles_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
        DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
        DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
        DARABONBA_PTR_FROM_JSON(VoiceAccessProfiles, voiceAccessProfiles_);
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
      class VoiceAccessProfiles : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const VoiceAccessProfiles& obj) { 
          DARABONBA_PTR_TO_JSON(AccessProfileId, accessProfileId_);
          DARABONBA_PTR_TO_JSON(Capabilities, capabilities_);
          DARABONBA_PTR_TO_JSON(CreatedTime, createdTime_);
          DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
          DARABONBA_PTR_TO_JSON(NlsEngine, nlsEngine_);
          DARABONBA_PTR_TO_JSON(NlsEngineName, nlsEngineName_);
          DARABONBA_PTR_TO_JSON(Profile, profile_);
          DARABONBA_PTR_TO_JSON(UpdatedTime, updatedTime_);
        };
        friend void from_json(const Darabonba::Json& j, VoiceAccessProfiles& obj) { 
          DARABONBA_PTR_FROM_JSON(AccessProfileId, accessProfileId_);
          DARABONBA_PTR_FROM_JSON(Capabilities, capabilities_);
          DARABONBA_PTR_FROM_JSON(CreatedTime, createdTime_);
          DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
          DARABONBA_PTR_FROM_JSON(NlsEngine, nlsEngine_);
          DARABONBA_PTR_FROM_JSON(NlsEngineName, nlsEngineName_);
          DARABONBA_PTR_FROM_JSON(Profile, profile_);
          DARABONBA_PTR_FROM_JSON(UpdatedTime, updatedTime_);
        };
        VoiceAccessProfiles() = default ;
        VoiceAccessProfiles(const VoiceAccessProfiles &) = default ;
        VoiceAccessProfiles(VoiceAccessProfiles &&) = default ;
        VoiceAccessProfiles(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~VoiceAccessProfiles() = default ;
        VoiceAccessProfiles& operator=(const VoiceAccessProfiles &) = default ;
        VoiceAccessProfiles& operator=(VoiceAccessProfiles &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Profile : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Profile& obj) { 
            DARABONBA_PTR_TO_JSON(AccessKey, accessKey_);
            DARABONBA_PTR_TO_JSON(ApiKey, apiKey_);
            DARABONBA_PTR_TO_JSON(ApiSecret, apiSecret_);
            DARABONBA_PTR_TO_JSON(AppId, appId_);
            DARABONBA_PTR_TO_JSON(AppKey, appKey_);
            DARABONBA_PTR_TO_JSON(AsrAppKey, asrAppKey_);
            DARABONBA_PTR_TO_JSON(TtsApiKey, ttsApiKey_);
          };
          friend void from_json(const Darabonba::Json& j, Profile& obj) { 
            DARABONBA_PTR_FROM_JSON(AccessKey, accessKey_);
            DARABONBA_PTR_FROM_JSON(ApiKey, apiKey_);
            DARABONBA_PTR_FROM_JSON(ApiSecret, apiSecret_);
            DARABONBA_PTR_FROM_JSON(AppId, appId_);
            DARABONBA_PTR_FROM_JSON(AppKey, appKey_);
            DARABONBA_PTR_FROM_JSON(AsrAppKey, asrAppKey_);
            DARABONBA_PTR_FROM_JSON(TtsApiKey, ttsApiKey_);
          };
          Profile() = default ;
          Profile(const Profile &) = default ;
          Profile(Profile &&) = default ;
          Profile(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Profile() = default ;
          Profile& operator=(const Profile &) = default ;
          Profile& operator=(Profile &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->accessKey_ == nullptr
        && this->apiKey_ == nullptr && this->apiSecret_ == nullptr && this->appId_ == nullptr && this->appKey_ == nullptr && this->asrAppKey_ == nullptr
        && this->ttsApiKey_ == nullptr; };
          // accessKey Field Functions 
          bool hasAccessKey() const { return this->accessKey_ != nullptr;};
          void deleteAccessKey() { this->accessKey_ = nullptr;};
          inline string getAccessKey() const { DARABONBA_PTR_GET_DEFAULT(accessKey_, "") };
          inline Profile& setAccessKey(string accessKey) { DARABONBA_PTR_SET_VALUE(accessKey_, accessKey) };


          // apiKey Field Functions 
          bool hasApiKey() const { return this->apiKey_ != nullptr;};
          void deleteApiKey() { this->apiKey_ = nullptr;};
          inline string getApiKey() const { DARABONBA_PTR_GET_DEFAULT(apiKey_, "") };
          inline Profile& setApiKey(string apiKey) { DARABONBA_PTR_SET_VALUE(apiKey_, apiKey) };


          // apiSecret Field Functions 
          bool hasApiSecret() const { return this->apiSecret_ != nullptr;};
          void deleteApiSecret() { this->apiSecret_ = nullptr;};
          inline string getApiSecret() const { DARABONBA_PTR_GET_DEFAULT(apiSecret_, "") };
          inline Profile& setApiSecret(string apiSecret) { DARABONBA_PTR_SET_VALUE(apiSecret_, apiSecret) };


          // appId Field Functions 
          bool hasAppId() const { return this->appId_ != nullptr;};
          void deleteAppId() { this->appId_ = nullptr;};
          inline string getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
          inline Profile& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


          // appKey Field Functions 
          bool hasAppKey() const { return this->appKey_ != nullptr;};
          void deleteAppKey() { this->appKey_ = nullptr;};
          inline string getAppKey() const { DARABONBA_PTR_GET_DEFAULT(appKey_, "") };
          inline Profile& setAppKey(string appKey) { DARABONBA_PTR_SET_VALUE(appKey_, appKey) };


          // asrAppKey Field Functions 
          bool hasAsrAppKey() const { return this->asrAppKey_ != nullptr;};
          void deleteAsrAppKey() { this->asrAppKey_ = nullptr;};
          inline string getAsrAppKey() const { DARABONBA_PTR_GET_DEFAULT(asrAppKey_, "") };
          inline Profile& setAsrAppKey(string asrAppKey) { DARABONBA_PTR_SET_VALUE(asrAppKey_, asrAppKey) };


          // ttsApiKey Field Functions 
          bool hasTtsApiKey() const { return this->ttsApiKey_ != nullptr;};
          void deleteTtsApiKey() { this->ttsApiKey_ = nullptr;};
          inline string getTtsApiKey() const { DARABONBA_PTR_GET_DEFAULT(ttsApiKey_, "") };
          inline Profile& setTtsApiKey(string ttsApiKey) { DARABONBA_PTR_SET_VALUE(ttsApiKey_, ttsApiKey) };


        protected:
          shared_ptr<string> accessKey_ {};
          shared_ptr<string> apiKey_ {};
          shared_ptr<string> apiSecret_ {};
          shared_ptr<string> appId_ {};
          shared_ptr<string> appKey_ {};
          shared_ptr<string> asrAppKey_ {};
          shared_ptr<string> ttsApiKey_ {};
        };

        virtual bool empty() const override { return this->accessProfileId_ == nullptr
        && this->capabilities_ == nullptr && this->createdTime_ == nullptr && this->instanceId_ == nullptr && this->nlsEngine_ == nullptr && this->nlsEngineName_ == nullptr
        && this->profile_ == nullptr && this->updatedTime_ == nullptr; };
        // accessProfileId Field Functions 
        bool hasAccessProfileId() const { return this->accessProfileId_ != nullptr;};
        void deleteAccessProfileId() { this->accessProfileId_ = nullptr;};
        inline string getAccessProfileId() const { DARABONBA_PTR_GET_DEFAULT(accessProfileId_, "") };
        inline VoiceAccessProfiles& setAccessProfileId(string accessProfileId) { DARABONBA_PTR_SET_VALUE(accessProfileId_, accessProfileId) };


        // capabilities Field Functions 
        bool hasCapabilities() const { return this->capabilities_ != nullptr;};
        void deleteCapabilities() { this->capabilities_ = nullptr;};
        inline const vector<string> & getCapabilities() const { DARABONBA_PTR_GET_CONST(capabilities_, vector<string>) };
        inline vector<string> getCapabilities() { DARABONBA_PTR_GET(capabilities_, vector<string>) };
        inline VoiceAccessProfiles& setCapabilities(const vector<string> & capabilities) { DARABONBA_PTR_SET_VALUE(capabilities_, capabilities) };
        inline VoiceAccessProfiles& setCapabilities(vector<string> && capabilities) { DARABONBA_PTR_SET_RVALUE(capabilities_, capabilities) };


        // createdTime Field Functions 
        bool hasCreatedTime() const { return this->createdTime_ != nullptr;};
        void deleteCreatedTime() { this->createdTime_ = nullptr;};
        inline int64_t getCreatedTime() const { DARABONBA_PTR_GET_DEFAULT(createdTime_, 0L) };
        inline VoiceAccessProfiles& setCreatedTime(int64_t createdTime) { DARABONBA_PTR_SET_VALUE(createdTime_, createdTime) };


        // instanceId Field Functions 
        bool hasInstanceId() const { return this->instanceId_ != nullptr;};
        void deleteInstanceId() { this->instanceId_ = nullptr;};
        inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
        inline VoiceAccessProfiles& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


        // nlsEngine Field Functions 
        bool hasNlsEngine() const { return this->nlsEngine_ != nullptr;};
        void deleteNlsEngine() { this->nlsEngine_ = nullptr;};
        inline string getNlsEngine() const { DARABONBA_PTR_GET_DEFAULT(nlsEngine_, "") };
        inline VoiceAccessProfiles& setNlsEngine(string nlsEngine) { DARABONBA_PTR_SET_VALUE(nlsEngine_, nlsEngine) };


        // nlsEngineName Field Functions 
        bool hasNlsEngineName() const { return this->nlsEngineName_ != nullptr;};
        void deleteNlsEngineName() { this->nlsEngineName_ = nullptr;};
        inline string getNlsEngineName() const { DARABONBA_PTR_GET_DEFAULT(nlsEngineName_, "") };
        inline VoiceAccessProfiles& setNlsEngineName(string nlsEngineName) { DARABONBA_PTR_SET_VALUE(nlsEngineName_, nlsEngineName) };


        // profile Field Functions 
        bool hasProfile() const { return this->profile_ != nullptr;};
        void deleteProfile() { this->profile_ = nullptr;};
        inline const VoiceAccessProfiles::Profile & getProfile() const { DARABONBA_PTR_GET_CONST(profile_, VoiceAccessProfiles::Profile) };
        inline VoiceAccessProfiles::Profile getProfile() { DARABONBA_PTR_GET(profile_, VoiceAccessProfiles::Profile) };
        inline VoiceAccessProfiles& setProfile(const VoiceAccessProfiles::Profile & profile) { DARABONBA_PTR_SET_VALUE(profile_, profile) };
        inline VoiceAccessProfiles& setProfile(VoiceAccessProfiles::Profile && profile) { DARABONBA_PTR_SET_RVALUE(profile_, profile) };


        // updatedTime Field Functions 
        bool hasUpdatedTime() const { return this->updatedTime_ != nullptr;};
        void deleteUpdatedTime() { this->updatedTime_ = nullptr;};
        inline int64_t getUpdatedTime() const { DARABONBA_PTR_GET_DEFAULT(updatedTime_, 0L) };
        inline VoiceAccessProfiles& setUpdatedTime(int64_t updatedTime) { DARABONBA_PTR_SET_VALUE(updatedTime_, updatedTime) };


      protected:
        shared_ptr<string> accessProfileId_ {};
        shared_ptr<vector<string>> capabilities_ {};
        shared_ptr<int64_t> createdTime_ {};
        shared_ptr<string> instanceId_ {};
        shared_ptr<string> nlsEngine_ {};
        shared_ptr<string> nlsEngineName_ {};
        shared_ptr<VoiceAccessProfiles::Profile> profile_ {};
        shared_ptr<int64_t> updatedTime_ {};
      };

      virtual bool empty() const override { return this->pageNumber_ == nullptr
        && this->pageSize_ == nullptr && this->totalCount_ == nullptr && this->voiceAccessProfiles_ == nullptr; };
      // pageNumber Field Functions 
      bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
      void deletePageNumber() { this->pageNumber_ = nullptr;};
      inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
      inline Data& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
      inline Data& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


      // totalCount Field Functions 
      bool hasTotalCount() const { return this->totalCount_ != nullptr;};
      void deleteTotalCount() { this->totalCount_ = nullptr;};
      inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
      inline Data& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


      // voiceAccessProfiles Field Functions 
      bool hasVoiceAccessProfiles() const { return this->voiceAccessProfiles_ != nullptr;};
      void deleteVoiceAccessProfiles() { this->voiceAccessProfiles_ = nullptr;};
      inline const vector<Data::VoiceAccessProfiles> & getVoiceAccessProfiles() const { DARABONBA_PTR_GET_CONST(voiceAccessProfiles_, vector<Data::VoiceAccessProfiles>) };
      inline vector<Data::VoiceAccessProfiles> getVoiceAccessProfiles() { DARABONBA_PTR_GET(voiceAccessProfiles_, vector<Data::VoiceAccessProfiles>) };
      inline Data& setVoiceAccessProfiles(const vector<Data::VoiceAccessProfiles> & voiceAccessProfiles) { DARABONBA_PTR_SET_VALUE(voiceAccessProfiles_, voiceAccessProfiles) };
      inline Data& setVoiceAccessProfiles(vector<Data::VoiceAccessProfiles> && voiceAccessProfiles) { DARABONBA_PTR_SET_RVALUE(voiceAccessProfiles_, voiceAccessProfiles) };


    protected:
      shared_ptr<int32_t> pageNumber_ {};
      shared_ptr<int32_t> pageSize_ {};
      shared_ptr<int32_t> totalCount_ {};
      shared_ptr<vector<Data::VoiceAccessProfiles>> voiceAccessProfiles_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->params_ == nullptr && this->requestId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListVoiceAccessProfileResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ListVoiceAccessProfileResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, ListVoiceAccessProfileResponseBody::Data) };
    inline ListVoiceAccessProfileResponseBody::Data getData() { DARABONBA_PTR_GET(data_, ListVoiceAccessProfileResponseBody::Data) };
    inline ListVoiceAccessProfileResponseBody& setData(const ListVoiceAccessProfileResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListVoiceAccessProfileResponseBody& setData(ListVoiceAccessProfileResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline ListVoiceAccessProfileResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListVoiceAccessProfileResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // params Field Functions 
    bool hasParams() const { return this->params_ != nullptr;};
    void deleteParams() { this->params_ = nullptr;};
    inline const vector<string> & getParams() const { DARABONBA_PTR_GET_CONST(params_, vector<string>) };
    inline vector<string> getParams() { DARABONBA_PTR_GET(params_, vector<string>) };
    inline ListVoiceAccessProfileResponseBody& setParams(const vector<string> & params) { DARABONBA_PTR_SET_VALUE(params_, params) };
    inline ListVoiceAccessProfileResponseBody& setParams(vector<string> && params) { DARABONBA_PTR_SET_RVALUE(params_, params) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListVoiceAccessProfileResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<ListVoiceAccessProfileResponseBody::Data> data_ {};
    shared_ptr<int32_t> httpStatusCode_ {};
    shared_ptr<string> message_ {};
    shared_ptr<vector<string>> params_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BailianVoiceBot20250101
#endif
