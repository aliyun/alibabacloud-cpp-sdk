// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDKEYWORDSTOLIBRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_ADDKEYWORDSTOLIBRESPONSEBODY_HPP_
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
  class AddKeywordsToLibResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddKeywordsToLibResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, AddKeywordsToLibResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    AddKeywordsToLibResponseBody() = default ;
    AddKeywordsToLibResponseBody(const AddKeywordsToLibResponseBody &) = default ;
    AddKeywordsToLibResponseBody(AddKeywordsToLibResponseBody &&) = default ;
    AddKeywordsToLibResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddKeywordsToLibResponseBody() = default ;
    AddKeywordsToLibResponseBody& operator=(const AddKeywordsToLibResponseBody &) = default ;
    AddKeywordsToLibResponseBody& operator=(AddKeywordsToLibResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(KeywordsResult, keywordsResult_);
        DARABONBA_PTR_TO_JSON(LibId, libId_);
        DARABONBA_PTR_TO_JSON(TaskId, taskId_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(KeywordsResult, keywordsResult_);
        DARABONBA_PTR_FROM_JSON(LibId, libId_);
        DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
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
      class KeywordsResult : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const KeywordsResult& obj) { 
          DARABONBA_PTR_TO_JSON(I18nKey, i18nKey_);
          DARABONBA_PTR_TO_JSON(IllegalLengthKeywords, illegalLengthKeywords_);
          DARABONBA_PTR_TO_JSON(InvalidCount, invalidCount_);
          DARABONBA_PTR_TO_JSON(InvalidKeywords, invalidKeywords_);
          DARABONBA_PTR_TO_JSON(LibId, libId_);
          DARABONBA_PTR_TO_JSON(Progress, progress_);
          DARABONBA_PTR_TO_JSON(RepeatCount, repeatCount_);
          DARABONBA_PTR_TO_JSON(RepeatKeywords, repeatKeywords_);
          DARABONBA_PTR_TO_JSON(SuccessCount, successCount_);
          DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
        };
        friend void from_json(const Darabonba::Json& j, KeywordsResult& obj) { 
          DARABONBA_PTR_FROM_JSON(I18nKey, i18nKey_);
          DARABONBA_PTR_FROM_JSON(IllegalLengthKeywords, illegalLengthKeywords_);
          DARABONBA_PTR_FROM_JSON(InvalidCount, invalidCount_);
          DARABONBA_PTR_FROM_JSON(InvalidKeywords, invalidKeywords_);
          DARABONBA_PTR_FROM_JSON(LibId, libId_);
          DARABONBA_PTR_FROM_JSON(Progress, progress_);
          DARABONBA_PTR_FROM_JSON(RepeatCount, repeatCount_);
          DARABONBA_PTR_FROM_JSON(RepeatKeywords, repeatKeywords_);
          DARABONBA_PTR_FROM_JSON(SuccessCount, successCount_);
          DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
        };
        KeywordsResult() = default ;
        KeywordsResult(const KeywordsResult &) = default ;
        KeywordsResult(KeywordsResult &&) = default ;
        KeywordsResult(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~KeywordsResult() = default ;
        KeywordsResult& operator=(const KeywordsResult &) = default ;
        KeywordsResult& operator=(KeywordsResult &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->i18nKey_ == nullptr
        && this->illegalLengthKeywords_ == nullptr && this->invalidCount_ == nullptr && this->invalidKeywords_ == nullptr && this->libId_ == nullptr && this->progress_ == nullptr
        && this->repeatCount_ == nullptr && this->repeatKeywords_ == nullptr && this->successCount_ == nullptr && this->totalCount_ == nullptr; };
        // i18nKey Field Functions 
        bool hasI18nKey() const { return this->i18nKey_ != nullptr;};
        void deleteI18nKey() { this->i18nKey_ = nullptr;};
        inline string getI18nKey() const { DARABONBA_PTR_GET_DEFAULT(i18nKey_, "") };
        inline KeywordsResult& setI18nKey(string i18nKey) { DARABONBA_PTR_SET_VALUE(i18nKey_, i18nKey) };


        // illegalLengthKeywords Field Functions 
        bool hasIllegalLengthKeywords() const { return this->illegalLengthKeywords_ != nullptr;};
        void deleteIllegalLengthKeywords() { this->illegalLengthKeywords_ = nullptr;};
        inline const vector<string> & getIllegalLengthKeywords() const { DARABONBA_PTR_GET_CONST(illegalLengthKeywords_, vector<string>) };
        inline vector<string> getIllegalLengthKeywords() { DARABONBA_PTR_GET(illegalLengthKeywords_, vector<string>) };
        inline KeywordsResult& setIllegalLengthKeywords(const vector<string> & illegalLengthKeywords) { DARABONBA_PTR_SET_VALUE(illegalLengthKeywords_, illegalLengthKeywords) };
        inline KeywordsResult& setIllegalLengthKeywords(vector<string> && illegalLengthKeywords) { DARABONBA_PTR_SET_RVALUE(illegalLengthKeywords_, illegalLengthKeywords) };


        // invalidCount Field Functions 
        bool hasInvalidCount() const { return this->invalidCount_ != nullptr;};
        void deleteInvalidCount() { this->invalidCount_ = nullptr;};
        inline int32_t getInvalidCount() const { DARABONBA_PTR_GET_DEFAULT(invalidCount_, 0) };
        inline KeywordsResult& setInvalidCount(int32_t invalidCount) { DARABONBA_PTR_SET_VALUE(invalidCount_, invalidCount) };


        // invalidKeywords Field Functions 
        bool hasInvalidKeywords() const { return this->invalidKeywords_ != nullptr;};
        void deleteInvalidKeywords() { this->invalidKeywords_ = nullptr;};
        inline const vector<string> & getInvalidKeywords() const { DARABONBA_PTR_GET_CONST(invalidKeywords_, vector<string>) };
        inline vector<string> getInvalidKeywords() { DARABONBA_PTR_GET(invalidKeywords_, vector<string>) };
        inline KeywordsResult& setInvalidKeywords(const vector<string> & invalidKeywords) { DARABONBA_PTR_SET_VALUE(invalidKeywords_, invalidKeywords) };
        inline KeywordsResult& setInvalidKeywords(vector<string> && invalidKeywords) { DARABONBA_PTR_SET_RVALUE(invalidKeywords_, invalidKeywords) };


        // libId Field Functions 
        bool hasLibId() const { return this->libId_ != nullptr;};
        void deleteLibId() { this->libId_ = nullptr;};
        inline string getLibId() const { DARABONBA_PTR_GET_DEFAULT(libId_, "") };
        inline KeywordsResult& setLibId(string libId) { DARABONBA_PTR_SET_VALUE(libId_, libId) };


        // progress Field Functions 
        bool hasProgress() const { return this->progress_ != nullptr;};
        void deleteProgress() { this->progress_ = nullptr;};
        inline int32_t getProgress() const { DARABONBA_PTR_GET_DEFAULT(progress_, 0) };
        inline KeywordsResult& setProgress(int32_t progress) { DARABONBA_PTR_SET_VALUE(progress_, progress) };


        // repeatCount Field Functions 
        bool hasRepeatCount() const { return this->repeatCount_ != nullptr;};
        void deleteRepeatCount() { this->repeatCount_ = nullptr;};
        inline int32_t getRepeatCount() const { DARABONBA_PTR_GET_DEFAULT(repeatCount_, 0) };
        inline KeywordsResult& setRepeatCount(int32_t repeatCount) { DARABONBA_PTR_SET_VALUE(repeatCount_, repeatCount) };


        // repeatKeywords Field Functions 
        bool hasRepeatKeywords() const { return this->repeatKeywords_ != nullptr;};
        void deleteRepeatKeywords() { this->repeatKeywords_ = nullptr;};
        inline const vector<string> & getRepeatKeywords() const { DARABONBA_PTR_GET_CONST(repeatKeywords_, vector<string>) };
        inline vector<string> getRepeatKeywords() { DARABONBA_PTR_GET(repeatKeywords_, vector<string>) };
        inline KeywordsResult& setRepeatKeywords(const vector<string> & repeatKeywords) { DARABONBA_PTR_SET_VALUE(repeatKeywords_, repeatKeywords) };
        inline KeywordsResult& setRepeatKeywords(vector<string> && repeatKeywords) { DARABONBA_PTR_SET_RVALUE(repeatKeywords_, repeatKeywords) };


        // successCount Field Functions 
        bool hasSuccessCount() const { return this->successCount_ != nullptr;};
        void deleteSuccessCount() { this->successCount_ = nullptr;};
        inline int32_t getSuccessCount() const { DARABONBA_PTR_GET_DEFAULT(successCount_, 0) };
        inline KeywordsResult& setSuccessCount(int32_t successCount) { DARABONBA_PTR_SET_VALUE(successCount_, successCount) };


        // totalCount Field Functions 
        bool hasTotalCount() const { return this->totalCount_ != nullptr;};
        void deleteTotalCount() { this->totalCount_ = nullptr;};
        inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
        inline KeywordsResult& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


      protected:
        // Internationalization key.
        shared_ptr<string> i18nKey_ {};
        // List of keywords that are too long or too short.
        shared_ptr<vector<string>> illegalLengthKeywords_ {};
        // Invalid keyword count.
        shared_ptr<int32_t> invalidCount_ {};
        // List of invalid keywords
        shared_ptr<vector<string>> invalidKeywords_ {};
        // The id of the keyword library.
        shared_ptr<string> libId_ {};
        // The progress percentage of the task.
        shared_ptr<int32_t> progress_ {};
        // Duplicate keyword count
        shared_ptr<int32_t> repeatCount_ {};
        // List of duplicate keywords
        shared_ptr<vector<string>> repeatKeywords_ {};
        // The success count of keywords.
        shared_ptr<int32_t> successCount_ {};
        // The total count of keywords.
        shared_ptr<int32_t> totalCount_ {};
      };

      virtual bool empty() const override { return this->keywordsResult_ == nullptr
        && this->libId_ == nullptr && this->taskId_ == nullptr; };
      // keywordsResult Field Functions 
      bool hasKeywordsResult() const { return this->keywordsResult_ != nullptr;};
      void deleteKeywordsResult() { this->keywordsResult_ = nullptr;};
      inline const Data::KeywordsResult & getKeywordsResult() const { DARABONBA_PTR_GET_CONST(keywordsResult_, Data::KeywordsResult) };
      inline Data::KeywordsResult getKeywordsResult() { DARABONBA_PTR_GET(keywordsResult_, Data::KeywordsResult) };
      inline Data& setKeywordsResult(const Data::KeywordsResult & keywordsResult) { DARABONBA_PTR_SET_VALUE(keywordsResult_, keywordsResult) };
      inline Data& setKeywordsResult(Data::KeywordsResult && keywordsResult) { DARABONBA_PTR_SET_RVALUE(keywordsResult_, keywordsResult) };


      // libId Field Functions 
      bool hasLibId() const { return this->libId_ != nullptr;};
      void deleteLibId() { this->libId_ = nullptr;};
      inline string getLibId() const { DARABONBA_PTR_GET_DEFAULT(libId_, "") };
      inline Data& setLibId(string libId) { DARABONBA_PTR_SET_VALUE(libId_, libId) };


      // taskId Field Functions 
      bool hasTaskId() const { return this->taskId_ != nullptr;};
      void deleteTaskId() { this->taskId_ = nullptr;};
      inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
      inline Data& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    protected:
      // Result.
      shared_ptr<Data::KeywordsResult> keywordsResult_ {};
      // The id of the keyword library.
      shared_ptr<string> libId_ {};
      // The task ID.
      shared_ptr<string> taskId_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const AddKeywordsToLibResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, AddKeywordsToLibResponseBody::Data) };
    inline AddKeywordsToLibResponseBody::Data getData() { DARABONBA_PTR_GET(data_, AddKeywordsToLibResponseBody::Data) };
    inline AddKeywordsToLibResponseBody& setData(const AddKeywordsToLibResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline AddKeywordsToLibResponseBody& setData(AddKeywordsToLibResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline AddKeywordsToLibResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The data returned.
    shared_ptr<AddKeywordsToLibResponseBody::Data> data_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Green20220926
#endif
