// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SEARCHMEDIABYAILABELRESPONSEBODYMEDIALISTAIDATA_HPP_
#define ALIBABACLOUD_MODELS_SEARCHMEDIABYAILABELRESPONSEBODYMEDIALISTAIDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/SearchMediaByAILabelResponseBodyMediaListAiDataAiLabelInfo.hpp>
#include <alibabacloud/models/SearchMediaByAILabelResponseBodyMediaListAiDataAsrInfo.hpp>
#include <alibabacloud/models/SearchMediaByAILabelResponseBodyMediaListAiDataOcrInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class SearchMediaByAILabelResponseBodyMediaListAiData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SearchMediaByAILabelResponseBodyMediaListAiData& obj) { 
      DARABONBA_PTR_TO_JSON(AiLabelInfo, aiLabelInfo_);
      DARABONBA_PTR_TO_JSON(AsrInfo, asrInfo_);
      DARABONBA_PTR_TO_JSON(OcrInfo, ocrInfo_);
    };
    friend void from_json(const Darabonba::Json& j, SearchMediaByAILabelResponseBodyMediaListAiData& obj) { 
      DARABONBA_PTR_FROM_JSON(AiLabelInfo, aiLabelInfo_);
      DARABONBA_PTR_FROM_JSON(AsrInfo, asrInfo_);
      DARABONBA_PTR_FROM_JSON(OcrInfo, ocrInfo_);
    };
    SearchMediaByAILabelResponseBodyMediaListAiData() = default ;
    SearchMediaByAILabelResponseBodyMediaListAiData(const SearchMediaByAILabelResponseBodyMediaListAiData &) = default ;
    SearchMediaByAILabelResponseBodyMediaListAiData(SearchMediaByAILabelResponseBodyMediaListAiData &&) = default ;
    SearchMediaByAILabelResponseBodyMediaListAiData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SearchMediaByAILabelResponseBodyMediaListAiData() = default ;
    SearchMediaByAILabelResponseBodyMediaListAiData& operator=(const SearchMediaByAILabelResponseBodyMediaListAiData &) = default ;
    SearchMediaByAILabelResponseBodyMediaListAiData& operator=(SearchMediaByAILabelResponseBodyMediaListAiData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->aiLabelInfo_ == nullptr
        && return this->asrInfo_ == nullptr && return this->ocrInfo_ == nullptr; };
    // aiLabelInfo Field Functions 
    bool hasAiLabelInfo() const { return this->aiLabelInfo_ != nullptr;};
    void deleteAiLabelInfo() { this->aiLabelInfo_ = nullptr;};
    inline const vector<Models::SearchMediaByAILabelResponseBodyMediaListAiDataAiLabelInfo> & aiLabelInfo() const { DARABONBA_PTR_GET_CONST(aiLabelInfo_, vector<Models::SearchMediaByAILabelResponseBodyMediaListAiDataAiLabelInfo>) };
    inline vector<Models::SearchMediaByAILabelResponseBodyMediaListAiDataAiLabelInfo> aiLabelInfo() { DARABONBA_PTR_GET(aiLabelInfo_, vector<Models::SearchMediaByAILabelResponseBodyMediaListAiDataAiLabelInfo>) };
    inline SearchMediaByAILabelResponseBodyMediaListAiData& setAiLabelInfo(const vector<Models::SearchMediaByAILabelResponseBodyMediaListAiDataAiLabelInfo> & aiLabelInfo) { DARABONBA_PTR_SET_VALUE(aiLabelInfo_, aiLabelInfo) };
    inline SearchMediaByAILabelResponseBodyMediaListAiData& setAiLabelInfo(vector<Models::SearchMediaByAILabelResponseBodyMediaListAiDataAiLabelInfo> && aiLabelInfo) { DARABONBA_PTR_SET_RVALUE(aiLabelInfo_, aiLabelInfo) };


    // asrInfo Field Functions 
    bool hasAsrInfo() const { return this->asrInfo_ != nullptr;};
    void deleteAsrInfo() { this->asrInfo_ = nullptr;};
    inline const vector<Models::SearchMediaByAILabelResponseBodyMediaListAiDataAsrInfo> & asrInfo() const { DARABONBA_PTR_GET_CONST(asrInfo_, vector<Models::SearchMediaByAILabelResponseBodyMediaListAiDataAsrInfo>) };
    inline vector<Models::SearchMediaByAILabelResponseBodyMediaListAiDataAsrInfo> asrInfo() { DARABONBA_PTR_GET(asrInfo_, vector<Models::SearchMediaByAILabelResponseBodyMediaListAiDataAsrInfo>) };
    inline SearchMediaByAILabelResponseBodyMediaListAiData& setAsrInfo(const vector<Models::SearchMediaByAILabelResponseBodyMediaListAiDataAsrInfo> & asrInfo) { DARABONBA_PTR_SET_VALUE(asrInfo_, asrInfo) };
    inline SearchMediaByAILabelResponseBodyMediaListAiData& setAsrInfo(vector<Models::SearchMediaByAILabelResponseBodyMediaListAiDataAsrInfo> && asrInfo) { DARABONBA_PTR_SET_RVALUE(asrInfo_, asrInfo) };


    // ocrInfo Field Functions 
    bool hasOcrInfo() const { return this->ocrInfo_ != nullptr;};
    void deleteOcrInfo() { this->ocrInfo_ = nullptr;};
    inline const vector<Models::SearchMediaByAILabelResponseBodyMediaListAiDataOcrInfo> & ocrInfo() const { DARABONBA_PTR_GET_CONST(ocrInfo_, vector<Models::SearchMediaByAILabelResponseBodyMediaListAiDataOcrInfo>) };
    inline vector<Models::SearchMediaByAILabelResponseBodyMediaListAiDataOcrInfo> ocrInfo() { DARABONBA_PTR_GET(ocrInfo_, vector<Models::SearchMediaByAILabelResponseBodyMediaListAiDataOcrInfo>) };
    inline SearchMediaByAILabelResponseBodyMediaListAiData& setOcrInfo(const vector<Models::SearchMediaByAILabelResponseBodyMediaListAiDataOcrInfo> & ocrInfo) { DARABONBA_PTR_SET_VALUE(ocrInfo_, ocrInfo) };
    inline SearchMediaByAILabelResponseBodyMediaListAiData& setOcrInfo(vector<Models::SearchMediaByAILabelResponseBodyMediaListAiDataOcrInfo> && ocrInfo) { DARABONBA_PTR_SET_RVALUE(ocrInfo_, ocrInfo) };


  protected:
    // The tags of the AI job.
    std::shared_ptr<vector<Models::SearchMediaByAILabelResponseBodyMediaListAiDataAiLabelInfo>> aiLabelInfo_ = nullptr;
    // The information about audio files.
    std::shared_ptr<vector<Models::SearchMediaByAILabelResponseBodyMediaListAiDataAsrInfo>> asrInfo_ = nullptr;
    // The information about subtitle files.
    std::shared_ptr<vector<Models::SearchMediaByAILabelResponseBodyMediaListAiDataOcrInfo>> ocrInfo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
