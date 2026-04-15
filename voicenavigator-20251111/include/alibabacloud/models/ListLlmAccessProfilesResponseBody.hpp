// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTLLMACCESSPROFILESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTLLMACCESSPROFILESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace VoiceNavigator20251111
{
namespace Models
{
  class ListLlmAccessProfilesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListLlmAccessProfilesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(Params, params_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListLlmAccessProfilesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(Params, params_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListLlmAccessProfilesResponseBody() = default ;
    ListLlmAccessProfilesResponseBody(const ListLlmAccessProfilesResponseBody &) = default ;
    ListLlmAccessProfilesResponseBody(ListLlmAccessProfilesResponseBody &&) = default ;
    ListLlmAccessProfilesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListLlmAccessProfilesResponseBody() = default ;
    ListLlmAccessProfilesResponseBody& operator=(const ListLlmAccessProfilesResponseBody &) = default ;
    ListLlmAccessProfilesResponseBody& operator=(ListLlmAccessProfilesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(LlmAccessProfiles, llmAccessProfiles_);
        DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(LlmAccessProfiles, llmAccessProfiles_);
        DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
        DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
        DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
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
      class LlmAccessProfiles : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const LlmAccessProfiles& obj) { 
          DARABONBA_PTR_TO_JSON(AccessProfileId, accessProfileId_);
          DARABONBA_PTR_TO_JSON(CreatedTime, createdTime_);
          DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
          DARABONBA_PTR_TO_JSON(Profile, profile_);
          DARABONBA_PTR_TO_JSON(UpdatedTime, updatedTime_);
        };
        friend void from_json(const Darabonba::Json& j, LlmAccessProfiles& obj) { 
          DARABONBA_PTR_FROM_JSON(AccessProfileId, accessProfileId_);
          DARABONBA_PTR_FROM_JSON(CreatedTime, createdTime_);
          DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
          DARABONBA_PTR_FROM_JSON(Profile, profile_);
          DARABONBA_PTR_FROM_JSON(UpdatedTime, updatedTime_);
        };
        LlmAccessProfiles() = default ;
        LlmAccessProfiles(const LlmAccessProfiles &) = default ;
        LlmAccessProfiles(LlmAccessProfiles &&) = default ;
        LlmAccessProfiles(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~LlmAccessProfiles() = default ;
        LlmAccessProfiles& operator=(const LlmAccessProfiles &) = default ;
        LlmAccessProfiles& operator=(LlmAccessProfiles &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Profile : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Profile& obj) { 
            DARABONBA_PTR_TO_JSON(ApiKey, apiKey_);
            DARABONBA_PTR_TO_JSON(Endpoint, endpoint_);
            DARABONBA_PTR_TO_JSON(Name, name_);
            DARABONBA_PTR_TO_JSON(NluAccessType, nluAccessType_);
            DARABONBA_PTR_TO_JSON(NluEngine, nluEngine_);
          };
          friend void from_json(const Darabonba::Json& j, Profile& obj) { 
            DARABONBA_PTR_FROM_JSON(ApiKey, apiKey_);
            DARABONBA_PTR_FROM_JSON(Endpoint, endpoint_);
            DARABONBA_PTR_FROM_JSON(Name, name_);
            DARABONBA_PTR_FROM_JSON(NluAccessType, nluAccessType_);
            DARABONBA_PTR_FROM_JSON(NluEngine, nluEngine_);
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
          virtual bool empty() const override { return this->apiKey_ == nullptr
        && this->endpoint_ == nullptr && this->name_ == nullptr && this->nluAccessType_ == nullptr && this->nluEngine_ == nullptr; };
          // apiKey Field Functions 
          bool hasApiKey() const { return this->apiKey_ != nullptr;};
          void deleteApiKey() { this->apiKey_ = nullptr;};
          inline string getApiKey() const { DARABONBA_PTR_GET_DEFAULT(apiKey_, "") };
          inline Profile& setApiKey(string apiKey) { DARABONBA_PTR_SET_VALUE(apiKey_, apiKey) };


          // endpoint Field Functions 
          bool hasEndpoint() const { return this->endpoint_ != nullptr;};
          void deleteEndpoint() { this->endpoint_ = nullptr;};
          inline string getEndpoint() const { DARABONBA_PTR_GET_DEFAULT(endpoint_, "") };
          inline Profile& setEndpoint(string endpoint) { DARABONBA_PTR_SET_VALUE(endpoint_, endpoint) };


          // name Field Functions 
          bool hasName() const { return this->name_ != nullptr;};
          void deleteName() { this->name_ = nullptr;};
          inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
          inline Profile& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


          // nluAccessType Field Functions 
          bool hasNluAccessType() const { return this->nluAccessType_ != nullptr;};
          void deleteNluAccessType() { this->nluAccessType_ = nullptr;};
          inline string getNluAccessType() const { DARABONBA_PTR_GET_DEFAULT(nluAccessType_, "") };
          inline Profile& setNluAccessType(string nluAccessType) { DARABONBA_PTR_SET_VALUE(nluAccessType_, nluAccessType) };


          // nluEngine Field Functions 
          bool hasNluEngine() const { return this->nluEngine_ != nullptr;};
          void deleteNluEngine() { this->nluEngine_ = nullptr;};
          inline string getNluEngine() const { DARABONBA_PTR_GET_DEFAULT(nluEngine_, "") };
          inline Profile& setNluEngine(string nluEngine) { DARABONBA_PTR_SET_VALUE(nluEngine_, nluEngine) };


        protected:
          shared_ptr<string> apiKey_ {};
          shared_ptr<string> endpoint_ {};
          shared_ptr<string> name_ {};
          shared_ptr<string> nluAccessType_ {};
          shared_ptr<string> nluEngine_ {};
        };

        virtual bool empty() const override { return this->accessProfileId_ == nullptr
        && this->createdTime_ == nullptr && this->instanceId_ == nullptr && this->profile_ == nullptr && this->updatedTime_ == nullptr; };
        // accessProfileId Field Functions 
        bool hasAccessProfileId() const { return this->accessProfileId_ != nullptr;};
        void deleteAccessProfileId() { this->accessProfileId_ = nullptr;};
        inline string getAccessProfileId() const { DARABONBA_PTR_GET_DEFAULT(accessProfileId_, "") };
        inline LlmAccessProfiles& setAccessProfileId(string accessProfileId) { DARABONBA_PTR_SET_VALUE(accessProfileId_, accessProfileId) };


        // createdTime Field Functions 
        bool hasCreatedTime() const { return this->createdTime_ != nullptr;};
        void deleteCreatedTime() { this->createdTime_ = nullptr;};
        inline int64_t getCreatedTime() const { DARABONBA_PTR_GET_DEFAULT(createdTime_, 0L) };
        inline LlmAccessProfiles& setCreatedTime(int64_t createdTime) { DARABONBA_PTR_SET_VALUE(createdTime_, createdTime) };


        // instanceId Field Functions 
        bool hasInstanceId() const { return this->instanceId_ != nullptr;};
        void deleteInstanceId() { this->instanceId_ = nullptr;};
        inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
        inline LlmAccessProfiles& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


        // profile Field Functions 
        bool hasProfile() const { return this->profile_ != nullptr;};
        void deleteProfile() { this->profile_ = nullptr;};
        inline const LlmAccessProfiles::Profile & getProfile() const { DARABONBA_PTR_GET_CONST(profile_, LlmAccessProfiles::Profile) };
        inline LlmAccessProfiles::Profile getProfile() { DARABONBA_PTR_GET(profile_, LlmAccessProfiles::Profile) };
        inline LlmAccessProfiles& setProfile(const LlmAccessProfiles::Profile & profile) { DARABONBA_PTR_SET_VALUE(profile_, profile) };
        inline LlmAccessProfiles& setProfile(LlmAccessProfiles::Profile && profile) { DARABONBA_PTR_SET_RVALUE(profile_, profile) };


        // updatedTime Field Functions 
        bool hasUpdatedTime() const { return this->updatedTime_ != nullptr;};
        void deleteUpdatedTime() { this->updatedTime_ = nullptr;};
        inline int64_t getUpdatedTime() const { DARABONBA_PTR_GET_DEFAULT(updatedTime_, 0L) };
        inline LlmAccessProfiles& setUpdatedTime(int64_t updatedTime) { DARABONBA_PTR_SET_VALUE(updatedTime_, updatedTime) };


      protected:
        shared_ptr<string> accessProfileId_ {};
        shared_ptr<int64_t> createdTime_ {};
        shared_ptr<string> instanceId_ {};
        shared_ptr<LlmAccessProfiles::Profile> profile_ {};
        shared_ptr<int64_t> updatedTime_ {};
      };

      virtual bool empty() const override { return this->llmAccessProfiles_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->totalCount_ == nullptr; };
      // llmAccessProfiles Field Functions 
      bool hasLlmAccessProfiles() const { return this->llmAccessProfiles_ != nullptr;};
      void deleteLlmAccessProfiles() { this->llmAccessProfiles_ = nullptr;};
      inline const vector<Data::LlmAccessProfiles> & getLlmAccessProfiles() const { DARABONBA_PTR_GET_CONST(llmAccessProfiles_, vector<Data::LlmAccessProfiles>) };
      inline vector<Data::LlmAccessProfiles> getLlmAccessProfiles() { DARABONBA_PTR_GET(llmAccessProfiles_, vector<Data::LlmAccessProfiles>) };
      inline Data& setLlmAccessProfiles(const vector<Data::LlmAccessProfiles> & llmAccessProfiles) { DARABONBA_PTR_SET_VALUE(llmAccessProfiles_, llmAccessProfiles) };
      inline Data& setLlmAccessProfiles(vector<Data::LlmAccessProfiles> && llmAccessProfiles) { DARABONBA_PTR_SET_RVALUE(llmAccessProfiles_, llmAccessProfiles) };


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


    protected:
      shared_ptr<vector<Data::LlmAccessProfiles>> llmAccessProfiles_ {};
      shared_ptr<int32_t> pageNumber_ {};
      shared_ptr<int32_t> pageSize_ {};
      shared_ptr<int32_t> totalCount_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->params_ == nullptr && this->requestId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListLlmAccessProfilesResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ListLlmAccessProfilesResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, ListLlmAccessProfilesResponseBody::Data) };
    inline ListLlmAccessProfilesResponseBody::Data getData() { DARABONBA_PTR_GET(data_, ListLlmAccessProfilesResponseBody::Data) };
    inline ListLlmAccessProfilesResponseBody& setData(const ListLlmAccessProfilesResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListLlmAccessProfilesResponseBody& setData(ListLlmAccessProfilesResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline ListLlmAccessProfilesResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListLlmAccessProfilesResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // params Field Functions 
    bool hasParams() const { return this->params_ != nullptr;};
    void deleteParams() { this->params_ = nullptr;};
    inline const vector<string> & getParams() const { DARABONBA_PTR_GET_CONST(params_, vector<string>) };
    inline vector<string> getParams() { DARABONBA_PTR_GET(params_, vector<string>) };
    inline ListLlmAccessProfilesResponseBody& setParams(const vector<string> & params) { DARABONBA_PTR_SET_VALUE(params_, params) };
    inline ListLlmAccessProfilesResponseBody& setParams(vector<string> && params) { DARABONBA_PTR_SET_RVALUE(params_, params) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListLlmAccessProfilesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<ListLlmAccessProfilesResponseBody::Data> data_ {};
    shared_ptr<int32_t> httpStatusCode_ {};
    shared_ptr<string> message_ {};
    shared_ptr<vector<string>> params_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace VoiceNavigator20251111
#endif
