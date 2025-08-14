// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMEDIAINFORESPONSEBODYMEDIAINFOAIROUGHDATA_HPP_
#define ALIBABACLOUD_MODELS_GETMEDIAINFORESPONSEBODYMEDIAINFOAIROUGHDATA_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetMediaInfoResponseBodyMediaInfoAiRoughDataStandardSmartTagJob.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class GetMediaInfoResponseBodyMediaInfoAiRoughData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetMediaInfoResponseBodyMediaInfoAiRoughData& obj) { 
      DARABONBA_PTR_TO_JSON(AiCategory, aiCategory_);
      DARABONBA_PTR_TO_JSON(AiJobId, aiJobId_);
      DARABONBA_PTR_TO_JSON(Result, result_);
      DARABONBA_PTR_TO_JSON(SaveType, saveType_);
      DARABONBA_PTR_TO_JSON(StandardSmartTagJob, standardSmartTagJob_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, GetMediaInfoResponseBodyMediaInfoAiRoughData& obj) { 
      DARABONBA_PTR_FROM_JSON(AiCategory, aiCategory_);
      DARABONBA_PTR_FROM_JSON(AiJobId, aiJobId_);
      DARABONBA_PTR_FROM_JSON(Result, result_);
      DARABONBA_PTR_FROM_JSON(SaveType, saveType_);
      DARABONBA_PTR_FROM_JSON(StandardSmartTagJob, standardSmartTagJob_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    GetMediaInfoResponseBodyMediaInfoAiRoughData() = default ;
    GetMediaInfoResponseBodyMediaInfoAiRoughData(const GetMediaInfoResponseBodyMediaInfoAiRoughData &) = default ;
    GetMediaInfoResponseBodyMediaInfoAiRoughData(GetMediaInfoResponseBodyMediaInfoAiRoughData &&) = default ;
    GetMediaInfoResponseBodyMediaInfoAiRoughData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetMediaInfoResponseBodyMediaInfoAiRoughData() = default ;
    GetMediaInfoResponseBodyMediaInfoAiRoughData& operator=(const GetMediaInfoResponseBodyMediaInfoAiRoughData &) = default ;
    GetMediaInfoResponseBodyMediaInfoAiRoughData& operator=(GetMediaInfoResponseBodyMediaInfoAiRoughData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->aiCategory_ != nullptr
        && this->aiJobId_ != nullptr && this->result_ != nullptr && this->saveType_ != nullptr && this->standardSmartTagJob_ != nullptr && this->status_ != nullptr; };
    // aiCategory Field Functions 
    bool hasAiCategory() const { return this->aiCategory_ != nullptr;};
    void deleteAiCategory() { this->aiCategory_ = nullptr;};
    inline string aiCategory() const { DARABONBA_PTR_GET_DEFAULT(aiCategory_, "") };
    inline GetMediaInfoResponseBodyMediaInfoAiRoughData& setAiCategory(string aiCategory) { DARABONBA_PTR_SET_VALUE(aiCategory_, aiCategory) };


    // aiJobId Field Functions 
    bool hasAiJobId() const { return this->aiJobId_ != nullptr;};
    void deleteAiJobId() { this->aiJobId_ = nullptr;};
    inline string aiJobId() const { DARABONBA_PTR_GET_DEFAULT(aiJobId_, "") };
    inline GetMediaInfoResponseBodyMediaInfoAiRoughData& setAiJobId(string aiJobId) { DARABONBA_PTR_SET_VALUE(aiJobId_, aiJobId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline string result() const { DARABONBA_PTR_GET_DEFAULT(result_, "") };
    inline GetMediaInfoResponseBodyMediaInfoAiRoughData& setResult(string result) { DARABONBA_PTR_SET_VALUE(result_, result) };


    // saveType Field Functions 
    bool hasSaveType() const { return this->saveType_ != nullptr;};
    void deleteSaveType() { this->saveType_ = nullptr;};
    inline string saveType() const { DARABONBA_PTR_GET_DEFAULT(saveType_, "") };
    inline GetMediaInfoResponseBodyMediaInfoAiRoughData& setSaveType(string saveType) { DARABONBA_PTR_SET_VALUE(saveType_, saveType) };


    // standardSmartTagJob Field Functions 
    bool hasStandardSmartTagJob() const { return this->standardSmartTagJob_ != nullptr;};
    void deleteStandardSmartTagJob() { this->standardSmartTagJob_ = nullptr;};
    inline const Models::GetMediaInfoResponseBodyMediaInfoAiRoughDataStandardSmartTagJob & standardSmartTagJob() const { DARABONBA_PTR_GET_CONST(standardSmartTagJob_, Models::GetMediaInfoResponseBodyMediaInfoAiRoughDataStandardSmartTagJob) };
    inline Models::GetMediaInfoResponseBodyMediaInfoAiRoughDataStandardSmartTagJob standardSmartTagJob() { DARABONBA_PTR_GET(standardSmartTagJob_, Models::GetMediaInfoResponseBodyMediaInfoAiRoughDataStandardSmartTagJob) };
    inline GetMediaInfoResponseBodyMediaInfoAiRoughData& setStandardSmartTagJob(const Models::GetMediaInfoResponseBodyMediaInfoAiRoughDataStandardSmartTagJob & standardSmartTagJob) { DARABONBA_PTR_SET_VALUE(standardSmartTagJob_, standardSmartTagJob) };
    inline GetMediaInfoResponseBodyMediaInfoAiRoughData& setStandardSmartTagJob(Models::GetMediaInfoResponseBodyMediaInfoAiRoughDataStandardSmartTagJob && standardSmartTagJob) { DARABONBA_PTR_SET_RVALUE(standardSmartTagJob_, standardSmartTagJob) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetMediaInfoResponseBodyMediaInfoAiRoughData& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The AI category. Valid values:
    // 
    // *   Life
    // *   Good-looking
    // *   Cute pets
    // *   News
    // *   Ads
    // *   Environmental resources
    // *   Automobile
    std::shared_ptr<string> aiCategory_ = nullptr;
    // The ID of the AI task.
    std::shared_ptr<string> aiJobId_ = nullptr;
    // The analysis result.
    std::shared_ptr<string> result_ = nullptr;
    // The storage type. This parameter indicates the library in which the analysis data is stored. Valid values:
    // 
    // *   TEXT: the text library.
    std::shared_ptr<string> saveType_ = nullptr;
    // The information about the tagging job.
    std::shared_ptr<Models::GetMediaInfoResponseBodyMediaInfoAiRoughDataStandardSmartTagJob> standardSmartTagJob_ = nullptr;
    // The analysis status. Valid values:
    // 
    // *   Analyzing
    // *   AnalyzeSuccess
    // *   AnalyzeFailed
    // *   Saving
    // *   SaveSuccess
    // *   SaveFailed
    // *   Deleting
    // *   DeleteSuccess
    // *   DeleteFailed
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
