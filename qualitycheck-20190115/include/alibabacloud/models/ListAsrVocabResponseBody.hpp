// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTASRVOCABRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTASRVOCABRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Qualitycheck20190115
{
namespace Models
{
  class ListAsrVocabResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAsrVocabResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ListAsrVocabResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    ListAsrVocabResponseBody() = default ;
    ListAsrVocabResponseBody(const ListAsrVocabResponseBody &) = default ;
    ListAsrVocabResponseBody(ListAsrVocabResponseBody &&) = default ;
    ListAsrVocabResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAsrVocabResponseBody() = default ;
    ListAsrVocabResponseBody& operator=(const ListAsrVocabResponseBody &) = default ;
    ListAsrVocabResponseBody& operator=(ListAsrVocabResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(AsrVocab, asrVocab_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(AsrVocab, asrVocab_);
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
      class AsrVocab : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const AsrVocab& obj) { 
          DARABONBA_PTR_TO_JSON(AsrVersion, asrVersion_);
          DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
          DARABONBA_PTR_TO_JSON(Id, id_);
          DARABONBA_PTR_TO_JSON(ModelCustomizationId, modelCustomizationId_);
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
          DARABONBA_PTR_TO_JSON(VocabularyId, vocabularyId_);
        };
        friend void from_json(const Darabonba::Json& j, AsrVocab& obj) { 
          DARABONBA_PTR_FROM_JSON(AsrVersion, asrVersion_);
          DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
          DARABONBA_PTR_FROM_JSON(Id, id_);
          DARABONBA_PTR_FROM_JSON(ModelCustomizationId, modelCustomizationId_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
          DARABONBA_PTR_FROM_JSON(VocabularyId, vocabularyId_);
        };
        AsrVocab() = default ;
        AsrVocab(const AsrVocab &) = default ;
        AsrVocab(AsrVocab &&) = default ;
        AsrVocab(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~AsrVocab() = default ;
        AsrVocab& operator=(const AsrVocab &) = default ;
        AsrVocab& operator=(AsrVocab &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->asrVersion_ == nullptr
        && this->createTime_ == nullptr && this->id_ == nullptr && this->modelCustomizationId_ == nullptr && this->name_ == nullptr && this->updateTime_ == nullptr
        && this->vocabularyId_ == nullptr; };
        // asrVersion Field Functions 
        bool hasAsrVersion() const { return this->asrVersion_ != nullptr;};
        void deleteAsrVersion() { this->asrVersion_ = nullptr;};
        inline int32_t getAsrVersion() const { DARABONBA_PTR_GET_DEFAULT(asrVersion_, 0) };
        inline AsrVocab& setAsrVersion(int32_t asrVersion) { DARABONBA_PTR_SET_VALUE(asrVersion_, asrVersion) };


        // createTime Field Functions 
        bool hasCreateTime() const { return this->createTime_ != nullptr;};
        void deleteCreateTime() { this->createTime_ = nullptr;};
        inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
        inline AsrVocab& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
        inline AsrVocab& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // modelCustomizationId Field Functions 
        bool hasModelCustomizationId() const { return this->modelCustomizationId_ != nullptr;};
        void deleteModelCustomizationId() { this->modelCustomizationId_ = nullptr;};
        inline string getModelCustomizationId() const { DARABONBA_PTR_GET_DEFAULT(modelCustomizationId_, "") };
        inline AsrVocab& setModelCustomizationId(string modelCustomizationId) { DARABONBA_PTR_SET_VALUE(modelCustomizationId_, modelCustomizationId) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline AsrVocab& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // updateTime Field Functions 
        bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
        void deleteUpdateTime() { this->updateTime_ = nullptr;};
        inline string getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
        inline AsrVocab& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


        // vocabularyId Field Functions 
        bool hasVocabularyId() const { return this->vocabularyId_ != nullptr;};
        void deleteVocabularyId() { this->vocabularyId_ = nullptr;};
        inline string getVocabularyId() const { DARABONBA_PTR_GET_DEFAULT(vocabularyId_, "") };
        inline AsrVocab& setVocabularyId(string vocabularyId) { DARABONBA_PTR_SET_VALUE(vocabularyId_, vocabularyId) };


      protected:
        shared_ptr<int32_t> asrVersion_ {};
        shared_ptr<string> createTime_ {};
        shared_ptr<string> id_ {};
        shared_ptr<string> modelCustomizationId_ {};
        shared_ptr<string> name_ {};
        shared_ptr<string> updateTime_ {};
        shared_ptr<string> vocabularyId_ {};
      };

      virtual bool empty() const override { return this->asrVocab_ == nullptr; };
      // asrVocab Field Functions 
      bool hasAsrVocab() const { return this->asrVocab_ != nullptr;};
      void deleteAsrVocab() { this->asrVocab_ = nullptr;};
      inline const vector<Data::AsrVocab> & getAsrVocab() const { DARABONBA_PTR_GET_CONST(asrVocab_, vector<Data::AsrVocab>) };
      inline vector<Data::AsrVocab> getAsrVocab() { DARABONBA_PTR_GET(asrVocab_, vector<Data::AsrVocab>) };
      inline Data& setAsrVocab(const vector<Data::AsrVocab> & asrVocab) { DARABONBA_PTR_SET_VALUE(asrVocab_, asrVocab) };
      inline Data& setAsrVocab(vector<Data::AsrVocab> && asrVocab) { DARABONBA_PTR_SET_RVALUE(asrVocab_, asrVocab) };


    protected:
      shared_ptr<vector<Data::AsrVocab>> asrVocab_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListAsrVocabResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ListAsrVocabResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, ListAsrVocabResponseBody::Data) };
    inline ListAsrVocabResponseBody::Data getData() { DARABONBA_PTR_GET(data_, ListAsrVocabResponseBody::Data) };
    inline ListAsrVocabResponseBody& setData(const ListAsrVocabResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListAsrVocabResponseBody& setData(ListAsrVocabResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListAsrVocabResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListAsrVocabResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListAsrVocabResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<ListAsrVocabResponseBody::Data> data_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Qualitycheck20190115
#endif
