// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTVOICESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTVOICESRESPONSEBODY_HPP_
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
  class ListVoicesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListVoicesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(Params, params_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListVoicesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(Params, params_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListVoicesResponseBody() = default ;
    ListVoicesResponseBody(const ListVoicesResponseBody &) = default ;
    ListVoicesResponseBody(ListVoicesResponseBody &&) = default ;
    ListVoicesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListVoicesResponseBody() = default ;
    ListVoicesResponseBody& operator=(const ListVoicesResponseBody &) = default ;
    ListVoicesResponseBody& operator=(ListVoicesResponseBody &&) = default ;
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
        DARABONBA_PTR_TO_JSON(Voices, voices_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
        DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
        DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
        DARABONBA_PTR_FROM_JSON(Voices, voices_);
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
      class Voices : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Voices& obj) { 
          DARABONBA_PTR_TO_JSON(Category, category_);
          DARABONBA_PTR_TO_JSON(Language, language_);
          DARABONBA_PTR_TO_JSON(Model, model_);
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(NlsEngine, nlsEngine_);
          DARABONBA_PTR_TO_JSON(Style, style_);
          DARABONBA_PTR_TO_JSON(SupportedParams, supportedParams_);
          DARABONBA_PTR_TO_JSON(Voice, voice_);
        };
        friend void from_json(const Darabonba::Json& j, Voices& obj) { 
          DARABONBA_PTR_FROM_JSON(Category, category_);
          DARABONBA_PTR_FROM_JSON(Language, language_);
          DARABONBA_PTR_FROM_JSON(Model, model_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(NlsEngine, nlsEngine_);
          DARABONBA_PTR_FROM_JSON(Style, style_);
          DARABONBA_PTR_FROM_JSON(SupportedParams, supportedParams_);
          DARABONBA_PTR_FROM_JSON(Voice, voice_);
        };
        Voices() = default ;
        Voices(const Voices &) = default ;
        Voices(Voices &&) = default ;
        Voices(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Voices() = default ;
        Voices& operator=(const Voices &) = default ;
        Voices& operator=(Voices &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->category_ == nullptr
        && this->language_ == nullptr && this->model_ == nullptr && this->name_ == nullptr && this->nlsEngine_ == nullptr && this->style_ == nullptr
        && this->supportedParams_ == nullptr && this->voice_ == nullptr; };
        // category Field Functions 
        bool hasCategory() const { return this->category_ != nullptr;};
        void deleteCategory() { this->category_ = nullptr;};
        inline string getCategory() const { DARABONBA_PTR_GET_DEFAULT(category_, "") };
        inline Voices& setCategory(string category) { DARABONBA_PTR_SET_VALUE(category_, category) };


        // language Field Functions 
        bool hasLanguage() const { return this->language_ != nullptr;};
        void deleteLanguage() { this->language_ = nullptr;};
        inline string getLanguage() const { DARABONBA_PTR_GET_DEFAULT(language_, "") };
        inline Voices& setLanguage(string language) { DARABONBA_PTR_SET_VALUE(language_, language) };


        // model Field Functions 
        bool hasModel() const { return this->model_ != nullptr;};
        void deleteModel() { this->model_ = nullptr;};
        inline string getModel() const { DARABONBA_PTR_GET_DEFAULT(model_, "") };
        inline Voices& setModel(string model) { DARABONBA_PTR_SET_VALUE(model_, model) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline Voices& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // nlsEngine Field Functions 
        bool hasNlsEngine() const { return this->nlsEngine_ != nullptr;};
        void deleteNlsEngine() { this->nlsEngine_ = nullptr;};
        inline string getNlsEngine() const { DARABONBA_PTR_GET_DEFAULT(nlsEngine_, "") };
        inline Voices& setNlsEngine(string nlsEngine) { DARABONBA_PTR_SET_VALUE(nlsEngine_, nlsEngine) };


        // style Field Functions 
        bool hasStyle() const { return this->style_ != nullptr;};
        void deleteStyle() { this->style_ = nullptr;};
        inline string getStyle() const { DARABONBA_PTR_GET_DEFAULT(style_, "") };
        inline Voices& setStyle(string style) { DARABONBA_PTR_SET_VALUE(style_, style) };


        // supportedParams Field Functions 
        bool hasSupportedParams() const { return this->supportedParams_ != nullptr;};
        void deleteSupportedParams() { this->supportedParams_ = nullptr;};
        inline const vector<string> & getSupportedParams() const { DARABONBA_PTR_GET_CONST(supportedParams_, vector<string>) };
        inline vector<string> getSupportedParams() { DARABONBA_PTR_GET(supportedParams_, vector<string>) };
        inline Voices& setSupportedParams(const vector<string> & supportedParams) { DARABONBA_PTR_SET_VALUE(supportedParams_, supportedParams) };
        inline Voices& setSupportedParams(vector<string> && supportedParams) { DARABONBA_PTR_SET_RVALUE(supportedParams_, supportedParams) };


        // voice Field Functions 
        bool hasVoice() const { return this->voice_ != nullptr;};
        void deleteVoice() { this->voice_ = nullptr;};
        inline string getVoice() const { DARABONBA_PTR_GET_DEFAULT(voice_, "") };
        inline Voices& setVoice(string voice) { DARABONBA_PTR_SET_VALUE(voice_, voice) };


      protected:
        shared_ptr<string> category_ {};
        shared_ptr<string> language_ {};
        shared_ptr<string> model_ {};
        shared_ptr<string> name_ {};
        shared_ptr<string> nlsEngine_ {};
        shared_ptr<string> style_ {};
        shared_ptr<vector<string>> supportedParams_ {};
        shared_ptr<string> voice_ {};
      };

      virtual bool empty() const override { return this->pageNumber_ == nullptr
        && this->pageSize_ == nullptr && this->totalCount_ == nullptr && this->voices_ == nullptr; };
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


      // voices Field Functions 
      bool hasVoices() const { return this->voices_ != nullptr;};
      void deleteVoices() { this->voices_ = nullptr;};
      inline const vector<Data::Voices> & getVoices() const { DARABONBA_PTR_GET_CONST(voices_, vector<Data::Voices>) };
      inline vector<Data::Voices> getVoices() { DARABONBA_PTR_GET(voices_, vector<Data::Voices>) };
      inline Data& setVoices(const vector<Data::Voices> & voices) { DARABONBA_PTR_SET_VALUE(voices_, voices) };
      inline Data& setVoices(vector<Data::Voices> && voices) { DARABONBA_PTR_SET_RVALUE(voices_, voices) };


    protected:
      shared_ptr<int32_t> pageNumber_ {};
      shared_ptr<int32_t> pageSize_ {};
      shared_ptr<int32_t> totalCount_ {};
      shared_ptr<vector<Data::Voices>> voices_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->params_ == nullptr && this->requestId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListVoicesResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ListVoicesResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, ListVoicesResponseBody::Data) };
    inline ListVoicesResponseBody::Data getData() { DARABONBA_PTR_GET(data_, ListVoicesResponseBody::Data) };
    inline ListVoicesResponseBody& setData(const ListVoicesResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListVoicesResponseBody& setData(ListVoicesResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline ListVoicesResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListVoicesResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // params Field Functions 
    bool hasParams() const { return this->params_ != nullptr;};
    void deleteParams() { this->params_ = nullptr;};
    inline const vector<string> & getParams() const { DARABONBA_PTR_GET_CONST(params_, vector<string>) };
    inline vector<string> getParams() { DARABONBA_PTR_GET(params_, vector<string>) };
    inline ListVoicesResponseBody& setParams(const vector<string> & params) { DARABONBA_PTR_SET_VALUE(params_, params) };
    inline ListVoicesResponseBody& setParams(vector<string> && params) { DARABONBA_PTR_SET_RVALUE(params_, params) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListVoicesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<ListVoicesResponseBody::Data> data_ {};
    shared_ptr<int32_t> httpStatusCode_ {};
    shared_ptr<string> message_ {};
    shared_ptr<vector<string>> params_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace VoiceNavigator20251111
#endif
