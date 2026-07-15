// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MULTIMODALGUARDWS_MODELS_RESPONSEMESSAGEEVENT_HPP_
#define ALIBABACLOUD_MULTIMODALGUARDWS_MODELS_RESPONSEMESSAGEEVENT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Green20220302
{
namespace MultiModalGuardWs
{
namespace Models
{
  class ResponseMessageEvent : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ResponseMessageEvent& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(Data, data_);
    };
    friend void from_json(const Darabonba::Json& j, ResponseMessageEvent& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
    };
    ResponseMessageEvent() = default ;
    ResponseMessageEvent(const ResponseMessageEvent &) = default ;
    ResponseMessageEvent(ResponseMessageEvent &&) = default ;
    ResponseMessageEvent(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ResponseMessageEvent() = default ;
    ResponseMessageEvent& operator=(const ResponseMessageEvent &) = default ;
    ResponseMessageEvent& operator=(ResponseMessageEvent &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(Detail, detail_);
        DARABONBA_PTR_TO_JSON(Suggestion, suggestion_);
        DARABONBA_PTR_TO_JSON(DataId, dataId_);
        DARABONBA_PTR_TO_JSON(SeqList, seqList_);
        DARABONBA_PTR_TO_JSON(ProcessedOutput, processedOutput_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(Detail, detail_);
        DARABONBA_PTR_FROM_JSON(Suggestion, suggestion_);
        DARABONBA_PTR_FROM_JSON(DataId, dataId_);
        DARABONBA_PTR_FROM_JSON(SeqList, seqList_);
        DARABONBA_PTR_FROM_JSON(ProcessedOutput, processedOutput_);
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
      class Detail : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Detail& obj) { 
          DARABONBA_PTR_TO_JSON(Result, result_);
          DARABONBA_PTR_TO_JSON(Type, type_);
          DARABONBA_PTR_TO_JSON(Level, level_);
          DARABONBA_PTR_TO_JSON(Suggestion, suggestion_);
        };
        friend void from_json(const Darabonba::Json& j, Detail& obj) { 
          DARABONBA_PTR_FROM_JSON(Result, result_);
          DARABONBA_PTR_FROM_JSON(Type, type_);
          DARABONBA_PTR_FROM_JSON(Level, level_);
          DARABONBA_PTR_FROM_JSON(Suggestion, suggestion_);
        };
        Detail() = default ;
        Detail(const Detail &) = default ;
        Detail(Detail &&) = default ;
        Detail(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Detail() = default ;
        Detail& operator=(const Detail &) = default ;
        Detail& operator=(Detail &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Result : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Result& obj) { 
            DARABONBA_PTR_TO_JSON(Label, label_);
            DARABONBA_PTR_TO_JSON(Description, description_);
            DARABONBA_PTR_TO_JSON(Confidence, confidence_);
            DARABONBA_PTR_TO_JSON(Level, level_);
            DARABONBA_ANY_TO_JSON(Ext, ext_);
          };
          friend void from_json(const Darabonba::Json& j, Result& obj) { 
            DARABONBA_PTR_FROM_JSON(Label, label_);
            DARABONBA_PTR_FROM_JSON(Description, description_);
            DARABONBA_PTR_FROM_JSON(Confidence, confidence_);
            DARABONBA_PTR_FROM_JSON(Level, level_);
            DARABONBA_ANY_FROM_JSON(Ext, ext_);
          };
          Result() = default ;
          Result(const Result &) = default ;
          Result(Result &&) = default ;
          Result(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Result() = default ;
          Result& operator=(const Result &) = default ;
          Result& operator=(Result &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->label_ == nullptr
        && this->description_ == nullptr && this->confidence_ == nullptr && this->level_ == nullptr && this->ext_ == nullptr; };
          // label Field Functions 
          bool hasLabel() const { return this->label_ != nullptr;};
          void deleteLabel() { this->label_ = nullptr;};
          inline string getLabel() const { DARABONBA_PTR_GET_DEFAULT(label_, "") };
          inline Result& setLabel(string label) { DARABONBA_PTR_SET_VALUE(label_, label) };


          // description Field Functions 
          bool hasDescription() const { return this->description_ != nullptr;};
          void deleteDescription() { this->description_ = nullptr;};
          inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
          inline Result& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


          // confidence Field Functions 
          bool hasConfidence() const { return this->confidence_ != nullptr;};
          void deleteConfidence() { this->confidence_ = nullptr;};
          inline float getConfidence() const { DARABONBA_PTR_GET_DEFAULT(confidence_, 0.0) };
          inline Result& setConfidence(float confidence) { DARABONBA_PTR_SET_VALUE(confidence_, confidence) };


          // level Field Functions 
          bool hasLevel() const { return this->level_ != nullptr;};
          void deleteLevel() { this->level_ = nullptr;};
          inline string getLevel() const { DARABONBA_PTR_GET_DEFAULT(level_, "") };
          inline Result& setLevel(string level) { DARABONBA_PTR_SET_VALUE(level_, level) };


          // ext Field Functions 
          bool hasExt() const { return this->ext_ != nullptr;};
          void deleteExt() { this->ext_ = nullptr;};
          inline           const Darabonba::Json & getExt() const { DARABONBA_GET(ext_) };
          Darabonba::Json & getExt() { DARABONBA_GET(ext_) };
          inline Result& setExt(const Darabonba::Json & ext) { DARABONBA_SET_VALUE(ext_, ext) };
          inline Result& setExt(Darabonba::Json && ext) { DARABONBA_SET_RVALUE(ext_, ext) };


        protected:
          shared_ptr<string> label_ {};
          shared_ptr<string> description_ {};
          shared_ptr<float> confidence_ {};
          shared_ptr<string> level_ {};
          Darabonba::Json ext_ {};
        };

        virtual bool empty() const override { return this->result_ == nullptr
        && this->type_ == nullptr && this->level_ == nullptr && this->suggestion_ == nullptr; };
        // result Field Functions 
        bool hasResult() const { return this->result_ != nullptr;};
        void deleteResult() { this->result_ = nullptr;};
        inline const vector<Detail::Result> & getResult() const { DARABONBA_PTR_GET_CONST(result_, vector<Detail::Result>) };
        inline vector<Detail::Result> getResult() { DARABONBA_PTR_GET(result_, vector<Detail::Result>) };
        inline Detail& setResult(const vector<Detail::Result> & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
        inline Detail& setResult(vector<Detail::Result> && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline Detail& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


        // level Field Functions 
        bool hasLevel() const { return this->level_ != nullptr;};
        void deleteLevel() { this->level_ = nullptr;};
        inline string getLevel() const { DARABONBA_PTR_GET_DEFAULT(level_, "") };
        inline Detail& setLevel(string level) { DARABONBA_PTR_SET_VALUE(level_, level) };


        // suggestion Field Functions 
        bool hasSuggestion() const { return this->suggestion_ != nullptr;};
        void deleteSuggestion() { this->suggestion_ = nullptr;};
        inline string getSuggestion() const { DARABONBA_PTR_GET_DEFAULT(suggestion_, "") };
        inline Detail& setSuggestion(string suggestion) { DARABONBA_PTR_SET_VALUE(suggestion_, suggestion) };


      protected:
        shared_ptr<vector<Detail::Result>> result_ {};
        shared_ptr<string> type_ {};
        shared_ptr<string> level_ {};
        shared_ptr<string> suggestion_ {};
      };

      virtual bool empty() const override { return this->detail_ == nullptr
        && this->suggestion_ == nullptr && this->dataId_ == nullptr && this->seqList_ == nullptr && this->processedOutput_ == nullptr; };
      // detail Field Functions 
      bool hasDetail() const { return this->detail_ != nullptr;};
      void deleteDetail() { this->detail_ = nullptr;};
      inline const vector<Data::Detail> & getDetail() const { DARABONBA_PTR_GET_CONST(detail_, vector<Data::Detail>) };
      inline vector<Data::Detail> getDetail() { DARABONBA_PTR_GET(detail_, vector<Data::Detail>) };
      inline Data& setDetail(const vector<Data::Detail> & detail) { DARABONBA_PTR_SET_VALUE(detail_, detail) };
      inline Data& setDetail(vector<Data::Detail> && detail) { DARABONBA_PTR_SET_RVALUE(detail_, detail) };


      // suggestion Field Functions 
      bool hasSuggestion() const { return this->suggestion_ != nullptr;};
      void deleteSuggestion() { this->suggestion_ = nullptr;};
      inline string getSuggestion() const { DARABONBA_PTR_GET_DEFAULT(suggestion_, "") };
      inline Data& setSuggestion(string suggestion) { DARABONBA_PTR_SET_VALUE(suggestion_, suggestion) };


      // dataId Field Functions 
      bool hasDataId() const { return this->dataId_ != nullptr;};
      void deleteDataId() { this->dataId_ = nullptr;};
      inline string getDataId() const { DARABONBA_PTR_GET_DEFAULT(dataId_, "") };
      inline Data& setDataId(string dataId) { DARABONBA_PTR_SET_VALUE(dataId_, dataId) };


      // seqList Field Functions 
      bool hasSeqList() const { return this->seqList_ != nullptr;};
      void deleteSeqList() { this->seqList_ = nullptr;};
      inline const vector<string> & getSeqList() const { DARABONBA_PTR_GET_CONST(seqList_, vector<string>) };
      inline vector<string> getSeqList() { DARABONBA_PTR_GET(seqList_, vector<string>) };
      inline Data& setSeqList(const vector<string> & seqList) { DARABONBA_PTR_SET_VALUE(seqList_, seqList) };
      inline Data& setSeqList(vector<string> && seqList) { DARABONBA_PTR_SET_RVALUE(seqList_, seqList) };


      // processedOutput Field Functions 
      bool hasProcessedOutput() const { return this->processedOutput_ != nullptr;};
      void deleteProcessedOutput() { this->processedOutput_ = nullptr;};
      inline string getProcessedOutput() const { DARABONBA_PTR_GET_DEFAULT(processedOutput_, "") };
      inline Data& setProcessedOutput(string processedOutput) { DARABONBA_PTR_SET_VALUE(processedOutput_, processedOutput) };


    protected:
      shared_ptr<vector<Data::Detail>> detail_ {};
      shared_ptr<string> suggestion_ {};
      shared_ptr<string> dataId_ {};
      shared_ptr<vector<string>> seqList_ {};
      shared_ptr<string> processedOutput_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->message_ == nullptr && this->data_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline ResponseMessageEvent& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ResponseMessageEvent& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ResponseMessageEvent::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, ResponseMessageEvent::Data) };
    inline ResponseMessageEvent::Data getData() { DARABONBA_PTR_GET(data_, ResponseMessageEvent::Data) };
    inline ResponseMessageEvent& setData(const ResponseMessageEvent::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ResponseMessageEvent& setData(ResponseMessageEvent::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


  protected:
    shared_ptr<int32_t> code_ {};
    shared_ptr<string> message_ {};
    shared_ptr<ResponseMessageEvent::Data> data_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Green20220302
} // namespace MultiModalGuardWs
#endif
