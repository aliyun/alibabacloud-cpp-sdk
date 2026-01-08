// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MULTIMODALGUARDRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_MULTIMODALGUARDRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Green20220302
{
namespace Models
{
  class MultiModalGuardResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const MultiModalGuardResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, MultiModalGuardResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    MultiModalGuardResponseBody() = default ;
    MultiModalGuardResponseBody(const MultiModalGuardResponseBody &) = default ;
    MultiModalGuardResponseBody(MultiModalGuardResponseBody &&) = default ;
    MultiModalGuardResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~MultiModalGuardResponseBody() = default ;
    MultiModalGuardResponseBody& operator=(const MultiModalGuardResponseBody &) = default ;
    MultiModalGuardResponseBody& operator=(MultiModalGuardResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(DataId, dataId_);
        DARABONBA_PTR_TO_JSON(Detail, detail_);
        DARABONBA_PTR_TO_JSON(Suggestion, suggestion_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(DataId, dataId_);
        DARABONBA_PTR_FROM_JSON(Detail, detail_);
        DARABONBA_PTR_FROM_JSON(Suggestion, suggestion_);
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
          DARABONBA_PTR_TO_JSON(Level, level_);
          DARABONBA_PTR_TO_JSON(Result, result_);
          DARABONBA_PTR_TO_JSON(Suggestion, suggestion_);
          DARABONBA_PTR_TO_JSON(Type, type_);
        };
        friend void from_json(const Darabonba::Json& j, Detail& obj) { 
          DARABONBA_PTR_FROM_JSON(Level, level_);
          DARABONBA_PTR_FROM_JSON(Result, result_);
          DARABONBA_PTR_FROM_JSON(Suggestion, suggestion_);
          DARABONBA_PTR_FROM_JSON(Type, type_);
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
            DARABONBA_PTR_TO_JSON(Confidence, confidence_);
            DARABONBA_PTR_TO_JSON(Description, description_);
            DARABONBA_ANY_TO_JSON(Ext, ext_);
            DARABONBA_PTR_TO_JSON(Label, label_);
            DARABONBA_PTR_TO_JSON(Level, level_);
          };
          friend void from_json(const Darabonba::Json& j, Result& obj) { 
            DARABONBA_PTR_FROM_JSON(Confidence, confidence_);
            DARABONBA_PTR_FROM_JSON(Description, description_);
            DARABONBA_ANY_FROM_JSON(Ext, ext_);
            DARABONBA_PTR_FROM_JSON(Label, label_);
            DARABONBA_PTR_FROM_JSON(Level, level_);
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
          virtual bool empty() const override { return this->confidence_ == nullptr
        && this->description_ == nullptr && this->ext_ == nullptr && this->label_ == nullptr && this->level_ == nullptr; };
          // confidence Field Functions 
          bool hasConfidence() const { return this->confidence_ != nullptr;};
          void deleteConfidence() { this->confidence_ = nullptr;};
          inline float getConfidence() const { DARABONBA_PTR_GET_DEFAULT(confidence_, 0.0) };
          inline Result& setConfidence(float confidence) { DARABONBA_PTR_SET_VALUE(confidence_, confidence) };


          // description Field Functions 
          bool hasDescription() const { return this->description_ != nullptr;};
          void deleteDescription() { this->description_ = nullptr;};
          inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
          inline Result& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


          // ext Field Functions 
          bool hasExt() const { return this->ext_ != nullptr;};
          void deleteExt() { this->ext_ = nullptr;};
          inline           const Darabonba::Json & getExt() const { DARABONBA_GET(ext_) };
          Darabonba::Json & getExt() { DARABONBA_GET(ext_) };
          inline Result& setExt(const Darabonba::Json & ext) { DARABONBA_SET_VALUE(ext_, ext) };
          inline Result& setExt(Darabonba::Json && ext) { DARABONBA_SET_RVALUE(ext_, ext) };


          // label Field Functions 
          bool hasLabel() const { return this->label_ != nullptr;};
          void deleteLabel() { this->label_ = nullptr;};
          inline string getLabel() const { DARABONBA_PTR_GET_DEFAULT(label_, "") };
          inline Result& setLabel(string label) { DARABONBA_PTR_SET_VALUE(label_, label) };


          // level Field Functions 
          bool hasLevel() const { return this->level_ != nullptr;};
          void deleteLevel() { this->level_ = nullptr;};
          inline string getLevel() const { DARABONBA_PTR_GET_DEFAULT(level_, "") };
          inline Result& setLevel(string level) { DARABONBA_PTR_SET_VALUE(level_, level) };


        protected:
          shared_ptr<float> confidence_ {};
          shared_ptr<string> description_ {};
          Darabonba::Json ext_ {};
          shared_ptr<string> label_ {};
          shared_ptr<string> level_ {};
        };

        virtual bool empty() const override { return this->level_ == nullptr
        && this->result_ == nullptr && this->suggestion_ == nullptr && this->type_ == nullptr; };
        // level Field Functions 
        bool hasLevel() const { return this->level_ != nullptr;};
        void deleteLevel() { this->level_ = nullptr;};
        inline string getLevel() const { DARABONBA_PTR_GET_DEFAULT(level_, "") };
        inline Detail& setLevel(string level) { DARABONBA_PTR_SET_VALUE(level_, level) };


        // result Field Functions 
        bool hasResult() const { return this->result_ != nullptr;};
        void deleteResult() { this->result_ = nullptr;};
        inline const vector<Detail::Result> & getResult() const { DARABONBA_PTR_GET_CONST(result_, vector<Detail::Result>) };
        inline vector<Detail::Result> getResult() { DARABONBA_PTR_GET(result_, vector<Detail::Result>) };
        inline Detail& setResult(const vector<Detail::Result> & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
        inline Detail& setResult(vector<Detail::Result> && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


        // suggestion Field Functions 
        bool hasSuggestion() const { return this->suggestion_ != nullptr;};
        void deleteSuggestion() { this->suggestion_ = nullptr;};
        inline string getSuggestion() const { DARABONBA_PTR_GET_DEFAULT(suggestion_, "") };
        inline Detail& setSuggestion(string suggestion) { DARABONBA_PTR_SET_VALUE(suggestion_, suggestion) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline Detail& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      protected:
        shared_ptr<string> level_ {};
        shared_ptr<vector<Detail::Result>> result_ {};
        shared_ptr<string> suggestion_ {};
        shared_ptr<string> type_ {};
      };

      virtual bool empty() const override { return this->dataId_ == nullptr
        && this->detail_ == nullptr && this->suggestion_ == nullptr; };
      // dataId Field Functions 
      bool hasDataId() const { return this->dataId_ != nullptr;};
      void deleteDataId() { this->dataId_ = nullptr;};
      inline string getDataId() const { DARABONBA_PTR_GET_DEFAULT(dataId_, "") };
      inline Data& setDataId(string dataId) { DARABONBA_PTR_SET_VALUE(dataId_, dataId) };


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


    protected:
      shared_ptr<string> dataId_ {};
      shared_ptr<vector<Data::Detail>> detail_ {};
      shared_ptr<string> suggestion_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline MultiModalGuardResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const MultiModalGuardResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, MultiModalGuardResponseBody::Data) };
    inline MultiModalGuardResponseBody::Data getData() { DARABONBA_PTR_GET(data_, MultiModalGuardResponseBody::Data) };
    inline MultiModalGuardResponseBody& setData(const MultiModalGuardResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline MultiModalGuardResponseBody& setData(MultiModalGuardResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline MultiModalGuardResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline MultiModalGuardResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<int32_t> code_ {};
    shared_ptr<MultiModalGuardResponseBody::Data> data_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Green20220302
#endif
