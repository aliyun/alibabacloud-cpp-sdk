// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDKEYWORDSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_ADDKEYWORDSRESPONSEBODY_HPP_
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
  class AddKeywordsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddKeywordsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Msg, msg_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, AddKeywordsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Msg, msg_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    AddKeywordsResponseBody() = default ;
    AddKeywordsResponseBody(const AddKeywordsResponseBody &) = default ;
    AddKeywordsResponseBody(AddKeywordsResponseBody &&) = default ;
    AddKeywordsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddKeywordsResponseBody() = default ;
    AddKeywordsResponseBody& operator=(const AddKeywordsResponseBody &) = default ;
    AddKeywordsResponseBody& operator=(AddKeywordsResponseBody &&) = default ;
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
          DARABONBA_PTR_TO_JSON(Tips, tips_);
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
          DARABONBA_PTR_FROM_JSON(Tips, tips_);
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
        && this->repeatCount_ == nullptr && this->repeatKeywords_ == nullptr && this->successCount_ == nullptr && this->tips_ == nullptr && this->totalCount_ == nullptr; };
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


        // tips Field Functions 
        bool hasTips() const { return this->tips_ != nullptr;};
        void deleteTips() { this->tips_ = nullptr;};
        inline string getTips() const { DARABONBA_PTR_GET_DEFAULT(tips_, "") };
        inline KeywordsResult& setTips(string tips) { DARABONBA_PTR_SET_VALUE(tips_, tips) };


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
        // Invalid keyword count
        shared_ptr<int32_t> invalidCount_ {};
        // List of invalid keywords
        shared_ptr<vector<string>> invalidKeywords_ {};
        // The keyword library ID.
        shared_ptr<string> libId_ {};
        // The progress percentage of the task.
        shared_ptr<int32_t> progress_ {};
        // Duplicate keyword count
        shared_ptr<int32_t> repeatCount_ {};
        // List of duplicate keywords
        shared_ptr<vector<string>> repeatKeywords_ {};
        // The success count of the keywords.
        shared_ptr<int32_t> successCount_ {};
        // The tips.
        shared_ptr<string> tips_ {};
        // The total count of the keywords.
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
      // The ID of the keyword library.
      shared_ptr<string> libId_ {};
      // The task ID.
      shared_ptr<string> taskId_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->msg_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline AddKeywordsResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const AddKeywordsResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, AddKeywordsResponseBody::Data) };
    inline AddKeywordsResponseBody::Data getData() { DARABONBA_PTR_GET(data_, AddKeywordsResponseBody::Data) };
    inline AddKeywordsResponseBody& setData(const AddKeywordsResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline AddKeywordsResponseBody& setData(AddKeywordsResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // msg Field Functions 
    bool hasMsg() const { return this->msg_ != nullptr;};
    void deleteMsg() { this->msg_ = nullptr;};
    inline string getMsg() const { DARABONBA_PTR_GET_DEFAULT(msg_, "") };
    inline AddKeywordsResponseBody& setMsg(string msg) { DARABONBA_PTR_SET_VALUE(msg_, msg) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline AddKeywordsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline AddKeywordsResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // Return code. A return of 200 represents success.
    shared_ptr<int32_t> code_ {};
    // The data returned.
    shared_ptr<AddKeywordsResponseBody::Data> data_ {};
    // The message that is returned in response to the request.
    shared_ptr<string> msg_ {};
    // ID assigned by the backend to uniquely identify a request. Can be used for troubleshooting.
    shared_ptr<string> requestId_ {};
    // Success indicator.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Green20220926
#endif
