// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEANSWERLIBRESPONSEBODYRESULT_HPP_
#define ALIBABACLOUD_MODELS_CREATEANSWERLIBRESPONSEBODYRESULT_HPP_
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
  class CreateAnswerLibResponseBodyResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateAnswerLibResponseBodyResult& obj) { 
      DARABONBA_PTR_TO_JSON(I18nKey, i18nKey_);
      DARABONBA_PTR_TO_JSON(IllegalLengthSamples, illegalLengthSamples_);
      DARABONBA_PTR_TO_JSON(InvalidCount, invalidCount_);
      DARABONBA_PTR_TO_JSON(LibId, libId_);
      DARABONBA_PTR_TO_JSON(Progress, progress_);
      DARABONBA_PTR_TO_JSON(RepeatCount, repeatCount_);
      DARABONBA_PTR_TO_JSON(RepeatSamples, repeatSamples_);
      DARABONBA_PTR_TO_JSON(SuccessCount, successCount_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, CreateAnswerLibResponseBodyResult& obj) { 
      DARABONBA_PTR_FROM_JSON(I18nKey, i18nKey_);
      DARABONBA_PTR_FROM_JSON(IllegalLengthSamples, illegalLengthSamples_);
      DARABONBA_PTR_FROM_JSON(InvalidCount, invalidCount_);
      DARABONBA_PTR_FROM_JSON(LibId, libId_);
      DARABONBA_PTR_FROM_JSON(Progress, progress_);
      DARABONBA_PTR_FROM_JSON(RepeatCount, repeatCount_);
      DARABONBA_PTR_FROM_JSON(RepeatSamples, repeatSamples_);
      DARABONBA_PTR_FROM_JSON(SuccessCount, successCount_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    CreateAnswerLibResponseBodyResult() = default ;
    CreateAnswerLibResponseBodyResult(const CreateAnswerLibResponseBodyResult &) = default ;
    CreateAnswerLibResponseBodyResult(CreateAnswerLibResponseBodyResult &&) = default ;
    CreateAnswerLibResponseBodyResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateAnswerLibResponseBodyResult() = default ;
    CreateAnswerLibResponseBodyResult& operator=(const CreateAnswerLibResponseBodyResult &) = default ;
    CreateAnswerLibResponseBodyResult& operator=(CreateAnswerLibResponseBodyResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->i18nKey_ == nullptr
        && return this->illegalLengthSamples_ == nullptr && return this->invalidCount_ == nullptr && return this->libId_ == nullptr && return this->progress_ == nullptr && return this->repeatCount_ == nullptr
        && return this->repeatSamples_ == nullptr && return this->successCount_ == nullptr && return this->taskId_ == nullptr && return this->totalCount_ == nullptr; };
    // i18nKey Field Functions 
    bool hasI18nKey() const { return this->i18nKey_ != nullptr;};
    void deleteI18nKey() { this->i18nKey_ = nullptr;};
    inline string i18nKey() const { DARABONBA_PTR_GET_DEFAULT(i18nKey_, "") };
    inline CreateAnswerLibResponseBodyResult& setI18nKey(string i18nKey) { DARABONBA_PTR_SET_VALUE(i18nKey_, i18nKey) };


    // illegalLengthSamples Field Functions 
    bool hasIllegalLengthSamples() const { return this->illegalLengthSamples_ != nullptr;};
    void deleteIllegalLengthSamples() { this->illegalLengthSamples_ = nullptr;};
    inline const vector<string> & illegalLengthSamples() const { DARABONBA_PTR_GET_CONST(illegalLengthSamples_, vector<string>) };
    inline vector<string> illegalLengthSamples() { DARABONBA_PTR_GET(illegalLengthSamples_, vector<string>) };
    inline CreateAnswerLibResponseBodyResult& setIllegalLengthSamples(const vector<string> & illegalLengthSamples) { DARABONBA_PTR_SET_VALUE(illegalLengthSamples_, illegalLengthSamples) };
    inline CreateAnswerLibResponseBodyResult& setIllegalLengthSamples(vector<string> && illegalLengthSamples) { DARABONBA_PTR_SET_RVALUE(illegalLengthSamples_, illegalLengthSamples) };


    // invalidCount Field Functions 
    bool hasInvalidCount() const { return this->invalidCount_ != nullptr;};
    void deleteInvalidCount() { this->invalidCount_ = nullptr;};
    inline int32_t invalidCount() const { DARABONBA_PTR_GET_DEFAULT(invalidCount_, 0) };
    inline CreateAnswerLibResponseBodyResult& setInvalidCount(int32_t invalidCount) { DARABONBA_PTR_SET_VALUE(invalidCount_, invalidCount) };


    // libId Field Functions 
    bool hasLibId() const { return this->libId_ != nullptr;};
    void deleteLibId() { this->libId_ = nullptr;};
    inline string libId() const { DARABONBA_PTR_GET_DEFAULT(libId_, "") };
    inline CreateAnswerLibResponseBodyResult& setLibId(string libId) { DARABONBA_PTR_SET_VALUE(libId_, libId) };


    // progress Field Functions 
    bool hasProgress() const { return this->progress_ != nullptr;};
    void deleteProgress() { this->progress_ = nullptr;};
    inline int32_t progress() const { DARABONBA_PTR_GET_DEFAULT(progress_, 0) };
    inline CreateAnswerLibResponseBodyResult& setProgress(int32_t progress) { DARABONBA_PTR_SET_VALUE(progress_, progress) };


    // repeatCount Field Functions 
    bool hasRepeatCount() const { return this->repeatCount_ != nullptr;};
    void deleteRepeatCount() { this->repeatCount_ = nullptr;};
    inline int32_t repeatCount() const { DARABONBA_PTR_GET_DEFAULT(repeatCount_, 0) };
    inline CreateAnswerLibResponseBodyResult& setRepeatCount(int32_t repeatCount) { DARABONBA_PTR_SET_VALUE(repeatCount_, repeatCount) };


    // repeatSamples Field Functions 
    bool hasRepeatSamples() const { return this->repeatSamples_ != nullptr;};
    void deleteRepeatSamples() { this->repeatSamples_ = nullptr;};
    inline const vector<string> & repeatSamples() const { DARABONBA_PTR_GET_CONST(repeatSamples_, vector<string>) };
    inline vector<string> repeatSamples() { DARABONBA_PTR_GET(repeatSamples_, vector<string>) };
    inline CreateAnswerLibResponseBodyResult& setRepeatSamples(const vector<string> & repeatSamples) { DARABONBA_PTR_SET_VALUE(repeatSamples_, repeatSamples) };
    inline CreateAnswerLibResponseBodyResult& setRepeatSamples(vector<string> && repeatSamples) { DARABONBA_PTR_SET_RVALUE(repeatSamples_, repeatSamples) };


    // successCount Field Functions 
    bool hasSuccessCount() const { return this->successCount_ != nullptr;};
    void deleteSuccessCount() { this->successCount_ = nullptr;};
    inline int32_t successCount() const { DARABONBA_PTR_GET_DEFAULT(successCount_, 0) };
    inline CreateAnswerLibResponseBodyResult& setSuccessCount(int32_t successCount) { DARABONBA_PTR_SET_VALUE(successCount_, successCount) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline CreateAnswerLibResponseBodyResult& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline CreateAnswerLibResponseBodyResult& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    std::shared_ptr<string> i18nKey_ = nullptr;
    std::shared_ptr<vector<string>> illegalLengthSamples_ = nullptr;
    std::shared_ptr<int32_t> invalidCount_ = nullptr;
    std::shared_ptr<string> libId_ = nullptr;
    std::shared_ptr<int32_t> progress_ = nullptr;
    std::shared_ptr<int32_t> repeatCount_ = nullptr;
    std::shared_ptr<vector<string>> repeatSamples_ = nullptr;
    std::shared_ptr<int32_t> successCount_ = nullptr;
    std::shared_ptr<string> taskId_ = nullptr;
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Green20220926
#endif
