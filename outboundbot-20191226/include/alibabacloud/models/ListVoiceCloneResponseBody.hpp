// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTVOICECLONERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTVOICECLONERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OutboundBot20191226
{
namespace Models
{
  class ListVoiceCloneResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListVoiceCloneResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ListVoiceCloneResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    ListVoiceCloneResponseBody() = default ;
    ListVoiceCloneResponseBody(const ListVoiceCloneResponseBody &) = default ;
    ListVoiceCloneResponseBody(ListVoiceCloneResponseBody &&) = default ;
    ListVoiceCloneResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListVoiceCloneResponseBody() = default ;
    ListVoiceCloneResponseBody& operator=(const ListVoiceCloneResponseBody &) = default ;
    ListVoiceCloneResponseBody& operator=(ListVoiceCloneResponseBody &&) = default ;
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
        DARABONBA_PTR_TO_JSON(VoiceClones, voiceClones_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
        DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
        DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
        DARABONBA_PTR_FROM_JSON(VoiceClones, voiceClones_);
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
      class VoiceClones : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const VoiceClones& obj) { 
          DARABONBA_PTR_TO_JSON(Creator, creator_);
          DARABONBA_PTR_TO_JSON(Engine, engine_);
          DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
          DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
          DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
          DARABONBA_PTR_TO_JSON(Model, model_);
          DARABONBA_PTR_TO_JSON(Status, status_);
          DARABONBA_PTR_TO_JSON(VoiceId, voiceId_);
          DARABONBA_PTR_TO_JSON(VoiceName, voiceName_);
        };
        friend void from_json(const Darabonba::Json& j, VoiceClones& obj) { 
          DARABONBA_PTR_FROM_JSON(Creator, creator_);
          DARABONBA_PTR_FROM_JSON(Engine, engine_);
          DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
          DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
          DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
          DARABONBA_PTR_FROM_JSON(Model, model_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
          DARABONBA_PTR_FROM_JSON(VoiceId, voiceId_);
          DARABONBA_PTR_FROM_JSON(VoiceName, voiceName_);
        };
        VoiceClones() = default ;
        VoiceClones(const VoiceClones &) = default ;
        VoiceClones(VoiceClones &&) = default ;
        VoiceClones(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~VoiceClones() = default ;
        VoiceClones& operator=(const VoiceClones &) = default ;
        VoiceClones& operator=(VoiceClones &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->creator_ == nullptr
        && this->engine_ == nullptr && this->gmtCreate_ == nullptr && this->gmtModified_ == nullptr && this->instanceId_ == nullptr && this->model_ == nullptr
        && this->status_ == nullptr && this->voiceId_ == nullptr && this->voiceName_ == nullptr; };
        // creator Field Functions 
        bool hasCreator() const { return this->creator_ != nullptr;};
        void deleteCreator() { this->creator_ = nullptr;};
        inline string getCreator() const { DARABONBA_PTR_GET_DEFAULT(creator_, "") };
        inline VoiceClones& setCreator(string creator) { DARABONBA_PTR_SET_VALUE(creator_, creator) };


        // engine Field Functions 
        bool hasEngine() const { return this->engine_ != nullptr;};
        void deleteEngine() { this->engine_ = nullptr;};
        inline string getEngine() const { DARABONBA_PTR_GET_DEFAULT(engine_, "") };
        inline VoiceClones& setEngine(string engine) { DARABONBA_PTR_SET_VALUE(engine_, engine) };


        // gmtCreate Field Functions 
        bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
        void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
        inline int64_t getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, 0L) };
        inline VoiceClones& setGmtCreate(int64_t gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


        // gmtModified Field Functions 
        bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
        void deleteGmtModified() { this->gmtModified_ = nullptr;};
        inline int64_t getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, 0L) };
        inline VoiceClones& setGmtModified(int64_t gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


        // instanceId Field Functions 
        bool hasInstanceId() const { return this->instanceId_ != nullptr;};
        void deleteInstanceId() { this->instanceId_ = nullptr;};
        inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
        inline VoiceClones& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


        // model Field Functions 
        bool hasModel() const { return this->model_ != nullptr;};
        void deleteModel() { this->model_ = nullptr;};
        inline string getModel() const { DARABONBA_PTR_GET_DEFAULT(model_, "") };
        inline VoiceClones& setModel(string model) { DARABONBA_PTR_SET_VALUE(model_, model) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline VoiceClones& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // voiceId Field Functions 
        bool hasVoiceId() const { return this->voiceId_ != nullptr;};
        void deleteVoiceId() { this->voiceId_ = nullptr;};
        inline string getVoiceId() const { DARABONBA_PTR_GET_DEFAULT(voiceId_, "") };
        inline VoiceClones& setVoiceId(string voiceId) { DARABONBA_PTR_SET_VALUE(voiceId_, voiceId) };


        // voiceName Field Functions 
        bool hasVoiceName() const { return this->voiceName_ != nullptr;};
        void deleteVoiceName() { this->voiceName_ = nullptr;};
        inline string getVoiceName() const { DARABONBA_PTR_GET_DEFAULT(voiceName_, "") };
        inline VoiceClones& setVoiceName(string voiceName) { DARABONBA_PTR_SET_VALUE(voiceName_, voiceName) };


      protected:
        // The Alibaba Cloud account ID of the creator of the voice.
        shared_ptr<string> creator_ {};
        // The type of the text-to-speech (TTS) engine used by the voice.
        shared_ptr<string> engine_ {};
        // The creation time. The value is a UNIX timestamp in milliseconds.
        shared_ptr<int64_t> gmtCreate_ {};
        // The last modification time. The value is a UNIX timestamp in milliseconds.
        shared_ptr<int64_t> gmtModified_ {};
        // The instance ID.
        shared_ptr<string> instanceId_ {};
        // The identifier of the model used for cloning.
        shared_ptr<string> model_ {};
        // The voice status. Valid values: Enabled (available) and Disabled (unavailable).
        shared_ptr<string> status_ {};
        // The voice ID.
        shared_ptr<string> voiceId_ {};
        // The voice name.
        shared_ptr<string> voiceName_ {};
      };

      virtual bool empty() const override { return this->pageNumber_ == nullptr
        && this->pageSize_ == nullptr && this->totalCount_ == nullptr && this->voiceClones_ == nullptr; };
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


      // voiceClones Field Functions 
      bool hasVoiceClones() const { return this->voiceClones_ != nullptr;};
      void deleteVoiceClones() { this->voiceClones_ = nullptr;};
      inline const vector<Data::VoiceClones> & getVoiceClones() const { DARABONBA_PTR_GET_CONST(voiceClones_, vector<Data::VoiceClones>) };
      inline vector<Data::VoiceClones> getVoiceClones() { DARABONBA_PTR_GET(voiceClones_, vector<Data::VoiceClones>) };
      inline Data& setVoiceClones(const vector<Data::VoiceClones> & voiceClones) { DARABONBA_PTR_SET_VALUE(voiceClones_, voiceClones) };
      inline Data& setVoiceClones(vector<Data::VoiceClones> && voiceClones) { DARABONBA_PTR_SET_RVALUE(voiceClones_, voiceClones) };


    protected:
      // The current page number.
      shared_ptr<int32_t> pageNumber_ {};
      // The number of entries per page.
      shared_ptr<int32_t> pageSize_ {};
      // The total number of cloned voices that meet the filter conditions.
      shared_ptr<int32_t> totalCount_ {};
      // The list of cloned voices.
      shared_ptr<vector<Data::VoiceClones>> voiceClones_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListVoiceCloneResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ListVoiceCloneResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, ListVoiceCloneResponseBody::Data) };
    inline ListVoiceCloneResponseBody::Data getData() { DARABONBA_PTR_GET(data_, ListVoiceCloneResponseBody::Data) };
    inline ListVoiceCloneResponseBody& setData(const ListVoiceCloneResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListVoiceCloneResponseBody& setData(ListVoiceCloneResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline ListVoiceCloneResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListVoiceCloneResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListVoiceCloneResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListVoiceCloneResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The API status code.
    shared_ptr<string> code_ {};
    // The returned data.
    shared_ptr<ListVoiceCloneResponseBody::Data> data_ {};
    // The HTTP status code.
    shared_ptr<int32_t> httpStatusCode_ {};
    // The message returned by the API.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the call was successful.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OutboundBot20191226
#endif
