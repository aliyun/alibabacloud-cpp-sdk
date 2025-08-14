// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SEARCHMEDIARESPONSEBODYMEDIAINFOLISTAIDATA_HPP_
#define ALIBABACLOUD_MODELS_SEARCHMEDIARESPONSEBODYMEDIAINFOLISTAIDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/SearchMediaResponseBodyMediaInfoListAiDataAiLabelInfo.hpp>
#include <alibabacloud/models/SearchMediaResponseBodyMediaInfoListAiDataAsrInfo.hpp>
#include <alibabacloud/models/SearchMediaResponseBodyMediaInfoListAiDataOcrInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class SearchMediaResponseBodyMediaInfoListAiData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SearchMediaResponseBodyMediaInfoListAiData& obj) { 
      DARABONBA_PTR_TO_JSON(AiLabelInfo, aiLabelInfo_);
      DARABONBA_PTR_TO_JSON(AsrInfo, asrInfo_);
      DARABONBA_PTR_TO_JSON(OcrInfo, ocrInfo_);
    };
    friend void from_json(const Darabonba::Json& j, SearchMediaResponseBodyMediaInfoListAiData& obj) { 
      DARABONBA_PTR_FROM_JSON(AiLabelInfo, aiLabelInfo_);
      DARABONBA_PTR_FROM_JSON(AsrInfo, asrInfo_);
      DARABONBA_PTR_FROM_JSON(OcrInfo, ocrInfo_);
    };
    SearchMediaResponseBodyMediaInfoListAiData() = default ;
    SearchMediaResponseBodyMediaInfoListAiData(const SearchMediaResponseBodyMediaInfoListAiData &) = default ;
    SearchMediaResponseBodyMediaInfoListAiData(SearchMediaResponseBodyMediaInfoListAiData &&) = default ;
    SearchMediaResponseBodyMediaInfoListAiData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SearchMediaResponseBodyMediaInfoListAiData() = default ;
    SearchMediaResponseBodyMediaInfoListAiData& operator=(const SearchMediaResponseBodyMediaInfoListAiData &) = default ;
    SearchMediaResponseBodyMediaInfoListAiData& operator=(SearchMediaResponseBodyMediaInfoListAiData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->aiLabelInfo_ != nullptr
        && this->asrInfo_ != nullptr && this->ocrInfo_ != nullptr; };
    // aiLabelInfo Field Functions 
    bool hasAiLabelInfo() const { return this->aiLabelInfo_ != nullptr;};
    void deleteAiLabelInfo() { this->aiLabelInfo_ = nullptr;};
    inline const vector<Models::SearchMediaResponseBodyMediaInfoListAiDataAiLabelInfo> & aiLabelInfo() const { DARABONBA_PTR_GET_CONST(aiLabelInfo_, vector<Models::SearchMediaResponseBodyMediaInfoListAiDataAiLabelInfo>) };
    inline vector<Models::SearchMediaResponseBodyMediaInfoListAiDataAiLabelInfo> aiLabelInfo() { DARABONBA_PTR_GET(aiLabelInfo_, vector<Models::SearchMediaResponseBodyMediaInfoListAiDataAiLabelInfo>) };
    inline SearchMediaResponseBodyMediaInfoListAiData& setAiLabelInfo(const vector<Models::SearchMediaResponseBodyMediaInfoListAiDataAiLabelInfo> & aiLabelInfo) { DARABONBA_PTR_SET_VALUE(aiLabelInfo_, aiLabelInfo) };
    inline SearchMediaResponseBodyMediaInfoListAiData& setAiLabelInfo(vector<Models::SearchMediaResponseBodyMediaInfoListAiDataAiLabelInfo> && aiLabelInfo) { DARABONBA_PTR_SET_RVALUE(aiLabelInfo_, aiLabelInfo) };


    // asrInfo Field Functions 
    bool hasAsrInfo() const { return this->asrInfo_ != nullptr;};
    void deleteAsrInfo() { this->asrInfo_ = nullptr;};
    inline const vector<Models::SearchMediaResponseBodyMediaInfoListAiDataAsrInfo> & asrInfo() const { DARABONBA_PTR_GET_CONST(asrInfo_, vector<Models::SearchMediaResponseBodyMediaInfoListAiDataAsrInfo>) };
    inline vector<Models::SearchMediaResponseBodyMediaInfoListAiDataAsrInfo> asrInfo() { DARABONBA_PTR_GET(asrInfo_, vector<Models::SearchMediaResponseBodyMediaInfoListAiDataAsrInfo>) };
    inline SearchMediaResponseBodyMediaInfoListAiData& setAsrInfo(const vector<Models::SearchMediaResponseBodyMediaInfoListAiDataAsrInfo> & asrInfo) { DARABONBA_PTR_SET_VALUE(asrInfo_, asrInfo) };
    inline SearchMediaResponseBodyMediaInfoListAiData& setAsrInfo(vector<Models::SearchMediaResponseBodyMediaInfoListAiDataAsrInfo> && asrInfo) { DARABONBA_PTR_SET_RVALUE(asrInfo_, asrInfo) };


    // ocrInfo Field Functions 
    bool hasOcrInfo() const { return this->ocrInfo_ != nullptr;};
    void deleteOcrInfo() { this->ocrInfo_ = nullptr;};
    inline const vector<Models::SearchMediaResponseBodyMediaInfoListAiDataOcrInfo> & ocrInfo() const { DARABONBA_PTR_GET_CONST(ocrInfo_, vector<Models::SearchMediaResponseBodyMediaInfoListAiDataOcrInfo>) };
    inline vector<Models::SearchMediaResponseBodyMediaInfoListAiDataOcrInfo> ocrInfo() { DARABONBA_PTR_GET(ocrInfo_, vector<Models::SearchMediaResponseBodyMediaInfoListAiDataOcrInfo>) };
    inline SearchMediaResponseBodyMediaInfoListAiData& setOcrInfo(const vector<Models::SearchMediaResponseBodyMediaInfoListAiDataOcrInfo> & ocrInfo) { DARABONBA_PTR_SET_VALUE(ocrInfo_, ocrInfo) };
    inline SearchMediaResponseBodyMediaInfoListAiData& setOcrInfo(vector<Models::SearchMediaResponseBodyMediaInfoListAiDataOcrInfo> && ocrInfo) { DARABONBA_PTR_SET_RVALUE(ocrInfo_, ocrInfo) };


  protected:
    // The tags of the intelligent AI job.
    std::shared_ptr<vector<Models::SearchMediaResponseBodyMediaInfoListAiDataAiLabelInfo>> aiLabelInfo_ = nullptr;
    // The information about audio files.
    std::shared_ptr<vector<Models::SearchMediaResponseBodyMediaInfoListAiDataAsrInfo>> asrInfo_ = nullptr;
    // The subtitles.
    std::shared_ptr<vector<Models::SearchMediaResponseBodyMediaInfoListAiDataOcrInfo>> ocrInfo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
