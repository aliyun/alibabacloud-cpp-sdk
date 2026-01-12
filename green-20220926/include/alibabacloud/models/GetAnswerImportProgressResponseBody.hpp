// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETANSWERIMPORTPROGRESSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETANSWERIMPORTPROGRESSRESPONSEBODY_HPP_
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
  class GetAnswerImportProgressResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAnswerImportProgressResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(I18nKey, i18nKey_);
      DARABONBA_PTR_TO_JSON(IllegalLengthSamples, illegalLengthSamples_);
      DARABONBA_PTR_TO_JSON(InvalidCount, invalidCount_);
      DARABONBA_PTR_TO_JSON(LibId, libId_);
      DARABONBA_PTR_TO_JSON(Progress, progress_);
      DARABONBA_PTR_TO_JSON(RepeatCount, repeatCount_);
      DARABONBA_PTR_TO_JSON(RepeatSamples, repeatSamples_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SuccessCount, successCount_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
      DARABONBA_PTR_TO_JSON(Tips, tips_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, GetAnswerImportProgressResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(I18nKey, i18nKey_);
      DARABONBA_PTR_FROM_JSON(IllegalLengthSamples, illegalLengthSamples_);
      DARABONBA_PTR_FROM_JSON(InvalidCount, invalidCount_);
      DARABONBA_PTR_FROM_JSON(LibId, libId_);
      DARABONBA_PTR_FROM_JSON(Progress, progress_);
      DARABONBA_PTR_FROM_JSON(RepeatCount, repeatCount_);
      DARABONBA_PTR_FROM_JSON(RepeatSamples, repeatSamples_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SuccessCount, successCount_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
      DARABONBA_PTR_FROM_JSON(Tips, tips_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    GetAnswerImportProgressResponseBody() = default ;
    GetAnswerImportProgressResponseBody(const GetAnswerImportProgressResponseBody &) = default ;
    GetAnswerImportProgressResponseBody(GetAnswerImportProgressResponseBody &&) = default ;
    GetAnswerImportProgressResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAnswerImportProgressResponseBody() = default ;
    GetAnswerImportProgressResponseBody& operator=(const GetAnswerImportProgressResponseBody &) = default ;
    GetAnswerImportProgressResponseBody& operator=(GetAnswerImportProgressResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->i18nKey_ == nullptr
        && this->illegalLengthSamples_ == nullptr && this->invalidCount_ == nullptr && this->libId_ == nullptr && this->progress_ == nullptr && this->repeatCount_ == nullptr
        && this->repeatSamples_ == nullptr && this->requestId_ == nullptr && this->successCount_ == nullptr && this->taskId_ == nullptr && this->tips_ == nullptr
        && this->totalCount_ == nullptr; };
    // i18nKey Field Functions 
    bool hasI18nKey() const { return this->i18nKey_ != nullptr;};
    void deleteI18nKey() { this->i18nKey_ = nullptr;};
    inline string getI18nKey() const { DARABONBA_PTR_GET_DEFAULT(i18nKey_, "") };
    inline GetAnswerImportProgressResponseBody& setI18nKey(string i18nKey) { DARABONBA_PTR_SET_VALUE(i18nKey_, i18nKey) };


    // illegalLengthSamples Field Functions 
    bool hasIllegalLengthSamples() const { return this->illegalLengthSamples_ != nullptr;};
    void deleteIllegalLengthSamples() { this->illegalLengthSamples_ = nullptr;};
    inline const vector<string> & getIllegalLengthSamples() const { DARABONBA_PTR_GET_CONST(illegalLengthSamples_, vector<string>) };
    inline vector<string> getIllegalLengthSamples() { DARABONBA_PTR_GET(illegalLengthSamples_, vector<string>) };
    inline GetAnswerImportProgressResponseBody& setIllegalLengthSamples(const vector<string> & illegalLengthSamples) { DARABONBA_PTR_SET_VALUE(illegalLengthSamples_, illegalLengthSamples) };
    inline GetAnswerImportProgressResponseBody& setIllegalLengthSamples(vector<string> && illegalLengthSamples) { DARABONBA_PTR_SET_RVALUE(illegalLengthSamples_, illegalLengthSamples) };


    // invalidCount Field Functions 
    bool hasInvalidCount() const { return this->invalidCount_ != nullptr;};
    void deleteInvalidCount() { this->invalidCount_ = nullptr;};
    inline int32_t getInvalidCount() const { DARABONBA_PTR_GET_DEFAULT(invalidCount_, 0) };
    inline GetAnswerImportProgressResponseBody& setInvalidCount(int32_t invalidCount) { DARABONBA_PTR_SET_VALUE(invalidCount_, invalidCount) };


    // libId Field Functions 
    bool hasLibId() const { return this->libId_ != nullptr;};
    void deleteLibId() { this->libId_ = nullptr;};
    inline string getLibId() const { DARABONBA_PTR_GET_DEFAULT(libId_, "") };
    inline GetAnswerImportProgressResponseBody& setLibId(string libId) { DARABONBA_PTR_SET_VALUE(libId_, libId) };


    // progress Field Functions 
    bool hasProgress() const { return this->progress_ != nullptr;};
    void deleteProgress() { this->progress_ = nullptr;};
    inline int32_t getProgress() const { DARABONBA_PTR_GET_DEFAULT(progress_, 0) };
    inline GetAnswerImportProgressResponseBody& setProgress(int32_t progress) { DARABONBA_PTR_SET_VALUE(progress_, progress) };


    // repeatCount Field Functions 
    bool hasRepeatCount() const { return this->repeatCount_ != nullptr;};
    void deleteRepeatCount() { this->repeatCount_ = nullptr;};
    inline int32_t getRepeatCount() const { DARABONBA_PTR_GET_DEFAULT(repeatCount_, 0) };
    inline GetAnswerImportProgressResponseBody& setRepeatCount(int32_t repeatCount) { DARABONBA_PTR_SET_VALUE(repeatCount_, repeatCount) };


    // repeatSamples Field Functions 
    bool hasRepeatSamples() const { return this->repeatSamples_ != nullptr;};
    void deleteRepeatSamples() { this->repeatSamples_ = nullptr;};
    inline const vector<string> & getRepeatSamples() const { DARABONBA_PTR_GET_CONST(repeatSamples_, vector<string>) };
    inline vector<string> getRepeatSamples() { DARABONBA_PTR_GET(repeatSamples_, vector<string>) };
    inline GetAnswerImportProgressResponseBody& setRepeatSamples(const vector<string> & repeatSamples) { DARABONBA_PTR_SET_VALUE(repeatSamples_, repeatSamples) };
    inline GetAnswerImportProgressResponseBody& setRepeatSamples(vector<string> && repeatSamples) { DARABONBA_PTR_SET_RVALUE(repeatSamples_, repeatSamples) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetAnswerImportProgressResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // successCount Field Functions 
    bool hasSuccessCount() const { return this->successCount_ != nullptr;};
    void deleteSuccessCount() { this->successCount_ = nullptr;};
    inline int32_t getSuccessCount() const { DARABONBA_PTR_GET_DEFAULT(successCount_, 0) };
    inline GetAnswerImportProgressResponseBody& setSuccessCount(int32_t successCount) { DARABONBA_PTR_SET_VALUE(successCount_, successCount) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline GetAnswerImportProgressResponseBody& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    // tips Field Functions 
    bool hasTips() const { return this->tips_ != nullptr;};
    void deleteTips() { this->tips_ = nullptr;};
    inline string getTips() const { DARABONBA_PTR_GET_DEFAULT(tips_, "") };
    inline GetAnswerImportProgressResponseBody& setTips(string tips) { DARABONBA_PTR_SET_VALUE(tips_, tips) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline GetAnswerImportProgressResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    shared_ptr<string> i18nKey_ {};
    shared_ptr<vector<string>> illegalLengthSamples_ {};
    shared_ptr<int32_t> invalidCount_ {};
    shared_ptr<string> libId_ {};
    shared_ptr<int32_t> progress_ {};
    shared_ptr<int32_t> repeatCount_ {};
    shared_ptr<vector<string>> repeatSamples_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<int32_t> successCount_ {};
    shared_ptr<string> taskId_ {};
    shared_ptr<string> tips_ {};
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Green20220926
#endif
