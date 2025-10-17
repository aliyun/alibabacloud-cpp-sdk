// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETVIDEOANALYSISTASKRESPONSEBODYDATAPAYLOADOUTPUTVIDEOGENERATERESULTSUSAGE_HPP_
#define ALIBABACLOUD_MODELS_GETVIDEOANALYSISTASKRESPONSEBODYDATAPAYLOADOUTPUTVIDEOGENERATERESULTSUSAGE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QuanMiaoLightApp20240801
{
namespace Models
{
  class GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoGenerateResultsUsage : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoGenerateResultsUsage& obj) { 
      DARABONBA_PTR_TO_JSON(inputTokens, inputTokens_);
      DARABONBA_PTR_TO_JSON(outputTokens, outputTokens_);
      DARABONBA_PTR_TO_JSON(totalTokens, totalTokens_);
    };
    friend void from_json(const Darabonba::Json& j, GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoGenerateResultsUsage& obj) { 
      DARABONBA_PTR_FROM_JSON(inputTokens, inputTokens_);
      DARABONBA_PTR_FROM_JSON(outputTokens, outputTokens_);
      DARABONBA_PTR_FROM_JSON(totalTokens, totalTokens_);
    };
    GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoGenerateResultsUsage() = default ;
    GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoGenerateResultsUsage(const GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoGenerateResultsUsage &) = default ;
    GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoGenerateResultsUsage(GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoGenerateResultsUsage &&) = default ;
    GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoGenerateResultsUsage(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoGenerateResultsUsage() = default ;
    GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoGenerateResultsUsage& operator=(const GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoGenerateResultsUsage &) = default ;
    GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoGenerateResultsUsage& operator=(GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoGenerateResultsUsage &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->inputTokens_ == nullptr
        && return this->outputTokens_ == nullptr && return this->totalTokens_ == nullptr; };
    // inputTokens Field Functions 
    bool hasInputTokens() const { return this->inputTokens_ != nullptr;};
    void deleteInputTokens() { this->inputTokens_ = nullptr;};
    inline int64_t inputTokens() const { DARABONBA_PTR_GET_DEFAULT(inputTokens_, 0L) };
    inline GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoGenerateResultsUsage& setInputTokens(int64_t inputTokens) { DARABONBA_PTR_SET_VALUE(inputTokens_, inputTokens) };


    // outputTokens Field Functions 
    bool hasOutputTokens() const { return this->outputTokens_ != nullptr;};
    void deleteOutputTokens() { this->outputTokens_ = nullptr;};
    inline int64_t outputTokens() const { DARABONBA_PTR_GET_DEFAULT(outputTokens_, 0L) };
    inline GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoGenerateResultsUsage& setOutputTokens(int64_t outputTokens) { DARABONBA_PTR_SET_VALUE(outputTokens_, outputTokens) };


    // totalTokens Field Functions 
    bool hasTotalTokens() const { return this->totalTokens_ != nullptr;};
    void deleteTotalTokens() { this->totalTokens_ = nullptr;};
    inline int64_t totalTokens() const { DARABONBA_PTR_GET_DEFAULT(totalTokens_, 0L) };
    inline GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoGenerateResultsUsage& setTotalTokens(int64_t totalTokens) { DARABONBA_PTR_SET_VALUE(totalTokens_, totalTokens) };


  protected:
    std::shared_ptr<int64_t> inputTokens_ = nullptr;
    std::shared_ptr<int64_t> outputTokens_ = nullptr;
    std::shared_ptr<int64_t> totalTokens_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuanMiaoLightApp20240801
#endif
