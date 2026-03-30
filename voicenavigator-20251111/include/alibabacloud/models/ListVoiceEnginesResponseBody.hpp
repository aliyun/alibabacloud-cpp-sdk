// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTVOICEENGINESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTVOICEENGINESRESPONSEBODY_HPP_
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
  class ListVoiceEnginesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListVoiceEnginesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(Params, params_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListVoiceEnginesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(Params, params_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListVoiceEnginesResponseBody() = default ;
    ListVoiceEnginesResponseBody(const ListVoiceEnginesResponseBody &) = default ;
    ListVoiceEnginesResponseBody(ListVoiceEnginesResponseBody &&) = default ;
    ListVoiceEnginesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListVoiceEnginesResponseBody() = default ;
    ListVoiceEnginesResponseBody& operator=(const ListVoiceEnginesResponseBody &) = default ;
    ListVoiceEnginesResponseBody& operator=(ListVoiceEnginesResponseBody &&) = default ;
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
        DARABONBA_PTR_TO_JSON(VoiceEngines, voiceEngines_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
        DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
        DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
        DARABONBA_PTR_FROM_JSON(VoiceEngines, voiceEngines_);
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
      class VoiceEngines : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const VoiceEngines& obj) { 
          DARABONBA_PTR_TO_JSON(ConfigSchema, configSchema_);
          DARABONBA_PTR_TO_JSON(NlsEngine, nlsEngine_);
          DARABONBA_PTR_TO_JSON(NlsEngineName, nlsEngineName_);
        };
        friend void from_json(const Darabonba::Json& j, VoiceEngines& obj) { 
          DARABONBA_PTR_FROM_JSON(ConfigSchema, configSchema_);
          DARABONBA_PTR_FROM_JSON(NlsEngine, nlsEngine_);
          DARABONBA_PTR_FROM_JSON(NlsEngineName, nlsEngineName_);
        };
        VoiceEngines() = default ;
        VoiceEngines(const VoiceEngines &) = default ;
        VoiceEngines(VoiceEngines &&) = default ;
        VoiceEngines(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~VoiceEngines() = default ;
        VoiceEngines& operator=(const VoiceEngines &) = default ;
        VoiceEngines& operator=(VoiceEngines &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->configSchema_ == nullptr
        && this->nlsEngine_ == nullptr && this->nlsEngineName_ == nullptr; };
        // configSchema Field Functions 
        bool hasConfigSchema() const { return this->configSchema_ != nullptr;};
        void deleteConfigSchema() { this->configSchema_ = nullptr;};
        inline string getConfigSchema() const { DARABONBA_PTR_GET_DEFAULT(configSchema_, "") };
        inline VoiceEngines& setConfigSchema(string configSchema) { DARABONBA_PTR_SET_VALUE(configSchema_, configSchema) };


        // nlsEngine Field Functions 
        bool hasNlsEngine() const { return this->nlsEngine_ != nullptr;};
        void deleteNlsEngine() { this->nlsEngine_ = nullptr;};
        inline string getNlsEngine() const { DARABONBA_PTR_GET_DEFAULT(nlsEngine_, "") };
        inline VoiceEngines& setNlsEngine(string nlsEngine) { DARABONBA_PTR_SET_VALUE(nlsEngine_, nlsEngine) };


        // nlsEngineName Field Functions 
        bool hasNlsEngineName() const { return this->nlsEngineName_ != nullptr;};
        void deleteNlsEngineName() { this->nlsEngineName_ = nullptr;};
        inline string getNlsEngineName() const { DARABONBA_PTR_GET_DEFAULT(nlsEngineName_, "") };
        inline VoiceEngines& setNlsEngineName(string nlsEngineName) { DARABONBA_PTR_SET_VALUE(nlsEngineName_, nlsEngineName) };


      protected:
        shared_ptr<string> configSchema_ {};
        shared_ptr<string> nlsEngine_ {};
        shared_ptr<string> nlsEngineName_ {};
      };

      virtual bool empty() const override { return this->pageNumber_ == nullptr
        && this->pageSize_ == nullptr && this->totalCount_ == nullptr && this->voiceEngines_ == nullptr; };
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


      // voiceEngines Field Functions 
      bool hasVoiceEngines() const { return this->voiceEngines_ != nullptr;};
      void deleteVoiceEngines() { this->voiceEngines_ = nullptr;};
      inline const vector<Data::VoiceEngines> & getVoiceEngines() const { DARABONBA_PTR_GET_CONST(voiceEngines_, vector<Data::VoiceEngines>) };
      inline vector<Data::VoiceEngines> getVoiceEngines() { DARABONBA_PTR_GET(voiceEngines_, vector<Data::VoiceEngines>) };
      inline Data& setVoiceEngines(const vector<Data::VoiceEngines> & voiceEngines) { DARABONBA_PTR_SET_VALUE(voiceEngines_, voiceEngines) };
      inline Data& setVoiceEngines(vector<Data::VoiceEngines> && voiceEngines) { DARABONBA_PTR_SET_RVALUE(voiceEngines_, voiceEngines) };


    protected:
      shared_ptr<int32_t> pageNumber_ {};
      shared_ptr<int32_t> pageSize_ {};
      shared_ptr<int32_t> totalCount_ {};
      shared_ptr<vector<Data::VoiceEngines>> voiceEngines_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->params_ == nullptr && this->requestId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListVoiceEnginesResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ListVoiceEnginesResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, ListVoiceEnginesResponseBody::Data) };
    inline ListVoiceEnginesResponseBody::Data getData() { DARABONBA_PTR_GET(data_, ListVoiceEnginesResponseBody::Data) };
    inline ListVoiceEnginesResponseBody& setData(const ListVoiceEnginesResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListVoiceEnginesResponseBody& setData(ListVoiceEnginesResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline ListVoiceEnginesResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListVoiceEnginesResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // params Field Functions 
    bool hasParams() const { return this->params_ != nullptr;};
    void deleteParams() { this->params_ = nullptr;};
    inline const vector<string> & getParams() const { DARABONBA_PTR_GET_CONST(params_, vector<string>) };
    inline vector<string> getParams() { DARABONBA_PTR_GET(params_, vector<string>) };
    inline ListVoiceEnginesResponseBody& setParams(const vector<string> & params) { DARABONBA_PTR_SET_VALUE(params_, params) };
    inline ListVoiceEnginesResponseBody& setParams(vector<string> && params) { DARABONBA_PTR_SET_RVALUE(params_, params) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListVoiceEnginesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<ListVoiceEnginesResponseBody::Data> data_ {};
    shared_ptr<int32_t> httpStatusCode_ {};
    shared_ptr<string> message_ {};
    shared_ptr<vector<string>> params_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace VoiceNavigator20251111
#endif
