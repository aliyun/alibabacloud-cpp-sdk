// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMEDIAINFORESPONSEBODYMEDIAINFOAIROUGHDATASTANDARDSMARTTAGJOB_HPP_
#define ALIBABACLOUD_MODELS_GETMEDIAINFORESPONSEBODYMEDIAINFOAIROUGHDATASTANDARDSMARTTAGJOB_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetMediaInfoResponseBodyMediaInfoAiRoughDataStandardSmartTagJobResults.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class GetMediaInfoResponseBodyMediaInfoAiRoughDataStandardSmartTagJob : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetMediaInfoResponseBodyMediaInfoAiRoughDataStandardSmartTagJob& obj) { 
      DARABONBA_PTR_TO_JSON(AiJobId, aiJobId_);
      DARABONBA_PTR_TO_JSON(ResultUrl, resultUrl_);
      DARABONBA_PTR_TO_JSON(Results, results_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, GetMediaInfoResponseBodyMediaInfoAiRoughDataStandardSmartTagJob& obj) { 
      DARABONBA_PTR_FROM_JSON(AiJobId, aiJobId_);
      DARABONBA_PTR_FROM_JSON(ResultUrl, resultUrl_);
      DARABONBA_PTR_FROM_JSON(Results, results_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    GetMediaInfoResponseBodyMediaInfoAiRoughDataStandardSmartTagJob() = default ;
    GetMediaInfoResponseBodyMediaInfoAiRoughDataStandardSmartTagJob(const GetMediaInfoResponseBodyMediaInfoAiRoughDataStandardSmartTagJob &) = default ;
    GetMediaInfoResponseBodyMediaInfoAiRoughDataStandardSmartTagJob(GetMediaInfoResponseBodyMediaInfoAiRoughDataStandardSmartTagJob &&) = default ;
    GetMediaInfoResponseBodyMediaInfoAiRoughDataStandardSmartTagJob(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetMediaInfoResponseBodyMediaInfoAiRoughDataStandardSmartTagJob() = default ;
    GetMediaInfoResponseBodyMediaInfoAiRoughDataStandardSmartTagJob& operator=(const GetMediaInfoResponseBodyMediaInfoAiRoughDataStandardSmartTagJob &) = default ;
    GetMediaInfoResponseBodyMediaInfoAiRoughDataStandardSmartTagJob& operator=(GetMediaInfoResponseBodyMediaInfoAiRoughDataStandardSmartTagJob &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->aiJobId_ != nullptr
        && this->resultUrl_ != nullptr && this->results_ != nullptr && this->status_ != nullptr; };
    // aiJobId Field Functions 
    bool hasAiJobId() const { return this->aiJobId_ != nullptr;};
    void deleteAiJobId() { this->aiJobId_ = nullptr;};
    inline string aiJobId() const { DARABONBA_PTR_GET_DEFAULT(aiJobId_, "") };
    inline GetMediaInfoResponseBodyMediaInfoAiRoughDataStandardSmartTagJob& setAiJobId(string aiJobId) { DARABONBA_PTR_SET_VALUE(aiJobId_, aiJobId) };


    // resultUrl Field Functions 
    bool hasResultUrl() const { return this->resultUrl_ != nullptr;};
    void deleteResultUrl() { this->resultUrl_ = nullptr;};
    inline string resultUrl() const { DARABONBA_PTR_GET_DEFAULT(resultUrl_, "") };
    inline GetMediaInfoResponseBodyMediaInfoAiRoughDataStandardSmartTagJob& setResultUrl(string resultUrl) { DARABONBA_PTR_SET_VALUE(resultUrl_, resultUrl) };


    // results Field Functions 
    bool hasResults() const { return this->results_ != nullptr;};
    void deleteResults() { this->results_ = nullptr;};
    inline const vector<Models::GetMediaInfoResponseBodyMediaInfoAiRoughDataStandardSmartTagJobResults> & results() const { DARABONBA_PTR_GET_CONST(results_, vector<Models::GetMediaInfoResponseBodyMediaInfoAiRoughDataStandardSmartTagJobResults>) };
    inline vector<Models::GetMediaInfoResponseBodyMediaInfoAiRoughDataStandardSmartTagJobResults> results() { DARABONBA_PTR_GET(results_, vector<Models::GetMediaInfoResponseBodyMediaInfoAiRoughDataStandardSmartTagJobResults>) };
    inline GetMediaInfoResponseBodyMediaInfoAiRoughDataStandardSmartTagJob& setResults(const vector<Models::GetMediaInfoResponseBodyMediaInfoAiRoughDataStandardSmartTagJobResults> & results) { DARABONBA_PTR_SET_VALUE(results_, results) };
    inline GetMediaInfoResponseBodyMediaInfoAiRoughDataStandardSmartTagJob& setResults(vector<Models::GetMediaInfoResponseBodyMediaInfoAiRoughDataStandardSmartTagJobResults> && results) { DARABONBA_PTR_SET_RVALUE(results_, results) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetMediaInfoResponseBodyMediaInfoAiRoughDataStandardSmartTagJob& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The ID of the AI task.
    std::shared_ptr<string> aiJobId_ = nullptr;
    // The URL of the tagging result.
    std::shared_ptr<string> resultUrl_ = nullptr;
    // The recognized tags.
    std::shared_ptr<vector<Models::GetMediaInfoResponseBodyMediaInfoAiRoughDataStandardSmartTagJobResults>> results_ = nullptr;
    // The analysis status. Valid values:
    // 
    // *   Analyzing
    // *   AnalyzeSuccess
    // *   AnalyzeFailed
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
