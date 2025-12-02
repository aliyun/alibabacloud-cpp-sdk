// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETKEYWORDIMPORTRESULTRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETKEYWORDIMPORTRESULTRESPONSEBODYDATA_HPP_
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
  class GetKeywordImportResultResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetKeywordImportResultResponseBodyData& obj) { 
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
    friend void from_json(const Darabonba::Json& j, GetKeywordImportResultResponseBodyData& obj) { 
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
    GetKeywordImportResultResponseBodyData() = default ;
    GetKeywordImportResultResponseBodyData(const GetKeywordImportResultResponseBodyData &) = default ;
    GetKeywordImportResultResponseBodyData(GetKeywordImportResultResponseBodyData &&) = default ;
    GetKeywordImportResultResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetKeywordImportResultResponseBodyData() = default ;
    GetKeywordImportResultResponseBodyData& operator=(const GetKeywordImportResultResponseBodyData &) = default ;
    GetKeywordImportResultResponseBodyData& operator=(GetKeywordImportResultResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->i18nKey_ == nullptr
        && return this->illegalLengthKeywords_ == nullptr && return this->invalidCount_ == nullptr && return this->invalidKeywords_ == nullptr && return this->libId_ == nullptr && return this->progress_ == nullptr
        && return this->repeatCount_ == nullptr && return this->repeatKeywords_ == nullptr && return this->successCount_ == nullptr && return this->tips_ == nullptr && return this->totalCount_ == nullptr; };
    // i18nKey Field Functions 
    bool hasI18nKey() const { return this->i18nKey_ != nullptr;};
    void deleteI18nKey() { this->i18nKey_ = nullptr;};
    inline string i18nKey() const { DARABONBA_PTR_GET_DEFAULT(i18nKey_, "") };
    inline GetKeywordImportResultResponseBodyData& setI18nKey(string i18nKey) { DARABONBA_PTR_SET_VALUE(i18nKey_, i18nKey) };


    // illegalLengthKeywords Field Functions 
    bool hasIllegalLengthKeywords() const { return this->illegalLengthKeywords_ != nullptr;};
    void deleteIllegalLengthKeywords() { this->illegalLengthKeywords_ = nullptr;};
    inline const vector<string> & illegalLengthKeywords() const { DARABONBA_PTR_GET_CONST(illegalLengthKeywords_, vector<string>) };
    inline vector<string> illegalLengthKeywords() { DARABONBA_PTR_GET(illegalLengthKeywords_, vector<string>) };
    inline GetKeywordImportResultResponseBodyData& setIllegalLengthKeywords(const vector<string> & illegalLengthKeywords) { DARABONBA_PTR_SET_VALUE(illegalLengthKeywords_, illegalLengthKeywords) };
    inline GetKeywordImportResultResponseBodyData& setIllegalLengthKeywords(vector<string> && illegalLengthKeywords) { DARABONBA_PTR_SET_RVALUE(illegalLengthKeywords_, illegalLengthKeywords) };


    // invalidCount Field Functions 
    bool hasInvalidCount() const { return this->invalidCount_ != nullptr;};
    void deleteInvalidCount() { this->invalidCount_ = nullptr;};
    inline int32_t invalidCount() const { DARABONBA_PTR_GET_DEFAULT(invalidCount_, 0) };
    inline GetKeywordImportResultResponseBodyData& setInvalidCount(int32_t invalidCount) { DARABONBA_PTR_SET_VALUE(invalidCount_, invalidCount) };


    // invalidKeywords Field Functions 
    bool hasInvalidKeywords() const { return this->invalidKeywords_ != nullptr;};
    void deleteInvalidKeywords() { this->invalidKeywords_ = nullptr;};
    inline const vector<string> & invalidKeywords() const { DARABONBA_PTR_GET_CONST(invalidKeywords_, vector<string>) };
    inline vector<string> invalidKeywords() { DARABONBA_PTR_GET(invalidKeywords_, vector<string>) };
    inline GetKeywordImportResultResponseBodyData& setInvalidKeywords(const vector<string> & invalidKeywords) { DARABONBA_PTR_SET_VALUE(invalidKeywords_, invalidKeywords) };
    inline GetKeywordImportResultResponseBodyData& setInvalidKeywords(vector<string> && invalidKeywords) { DARABONBA_PTR_SET_RVALUE(invalidKeywords_, invalidKeywords) };


    // libId Field Functions 
    bool hasLibId() const { return this->libId_ != nullptr;};
    void deleteLibId() { this->libId_ = nullptr;};
    inline string libId() const { DARABONBA_PTR_GET_DEFAULT(libId_, "") };
    inline GetKeywordImportResultResponseBodyData& setLibId(string libId) { DARABONBA_PTR_SET_VALUE(libId_, libId) };


    // progress Field Functions 
    bool hasProgress() const { return this->progress_ != nullptr;};
    void deleteProgress() { this->progress_ = nullptr;};
    inline int32_t progress() const { DARABONBA_PTR_GET_DEFAULT(progress_, 0) };
    inline GetKeywordImportResultResponseBodyData& setProgress(int32_t progress) { DARABONBA_PTR_SET_VALUE(progress_, progress) };


    // repeatCount Field Functions 
    bool hasRepeatCount() const { return this->repeatCount_ != nullptr;};
    void deleteRepeatCount() { this->repeatCount_ = nullptr;};
    inline int32_t repeatCount() const { DARABONBA_PTR_GET_DEFAULT(repeatCount_, 0) };
    inline GetKeywordImportResultResponseBodyData& setRepeatCount(int32_t repeatCount) { DARABONBA_PTR_SET_VALUE(repeatCount_, repeatCount) };


    // repeatKeywords Field Functions 
    bool hasRepeatKeywords() const { return this->repeatKeywords_ != nullptr;};
    void deleteRepeatKeywords() { this->repeatKeywords_ = nullptr;};
    inline const vector<string> & repeatKeywords() const { DARABONBA_PTR_GET_CONST(repeatKeywords_, vector<string>) };
    inline vector<string> repeatKeywords() { DARABONBA_PTR_GET(repeatKeywords_, vector<string>) };
    inline GetKeywordImportResultResponseBodyData& setRepeatKeywords(const vector<string> & repeatKeywords) { DARABONBA_PTR_SET_VALUE(repeatKeywords_, repeatKeywords) };
    inline GetKeywordImportResultResponseBodyData& setRepeatKeywords(vector<string> && repeatKeywords) { DARABONBA_PTR_SET_RVALUE(repeatKeywords_, repeatKeywords) };


    // successCount Field Functions 
    bool hasSuccessCount() const { return this->successCount_ != nullptr;};
    void deleteSuccessCount() { this->successCount_ = nullptr;};
    inline int32_t successCount() const { DARABONBA_PTR_GET_DEFAULT(successCount_, 0) };
    inline GetKeywordImportResultResponseBodyData& setSuccessCount(int32_t successCount) { DARABONBA_PTR_SET_VALUE(successCount_, successCount) };


    // tips Field Functions 
    bool hasTips() const { return this->tips_ != nullptr;};
    void deleteTips() { this->tips_ = nullptr;};
    inline string tips() const { DARABONBA_PTR_GET_DEFAULT(tips_, "") };
    inline GetKeywordImportResultResponseBodyData& setTips(string tips) { DARABONBA_PTR_SET_VALUE(tips_, tips) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline GetKeywordImportResultResponseBodyData& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // Internationalization key.
    std::shared_ptr<string> i18nKey_ = nullptr;
    // List of keywords with illegal length (too long or too short).
    std::shared_ptr<vector<string>> illegalLengthKeywords_ = nullptr;
    // Invalid count.
    std::shared_ptr<int32_t> invalidCount_ = nullptr;
    // List of invalid keywords.
    std::shared_ptr<vector<string>> invalidKeywords_ = nullptr;
    // Keyword library ID.
    std::shared_ptr<string> libId_ = nullptr;
    // Task progress percentage.
    std::shared_ptr<int32_t> progress_ = nullptr;
    // Repeat count.
    std::shared_ptr<int32_t> repeatCount_ = nullptr;
    // List of repeated keywords.
    std::shared_ptr<vector<string>> repeatKeywords_ = nullptr;
    // Success count.
    std::shared_ptr<int32_t> successCount_ = nullptr;
    // Tips message.
    std::shared_ptr<string> tips_ = nullptr;
    // Total count.
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Green20220926
#endif
