// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SEARCHMEDIARESPONSEBODYMEDIALISTAIDATA_HPP_
#define ALIBABACLOUD_MODELS_SEARCHMEDIARESPONSEBODYMEDIALISTAIDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/SearchMediaResponseBodyMediaListAiDataAiLabelInfo.hpp>
#include <alibabacloud/models/SearchMediaResponseBodyMediaListAiDataOcrInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class SearchMediaResponseBodyMediaListAiData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SearchMediaResponseBodyMediaListAiData& obj) { 
      DARABONBA_PTR_TO_JSON(AiLabelInfo, aiLabelInfo_);
      DARABONBA_PTR_TO_JSON(OcrInfo, ocrInfo_);
    };
    friend void from_json(const Darabonba::Json& j, SearchMediaResponseBodyMediaListAiData& obj) { 
      DARABONBA_PTR_FROM_JSON(AiLabelInfo, aiLabelInfo_);
      DARABONBA_PTR_FROM_JSON(OcrInfo, ocrInfo_);
    };
    SearchMediaResponseBodyMediaListAiData() = default ;
    SearchMediaResponseBodyMediaListAiData(const SearchMediaResponseBodyMediaListAiData &) = default ;
    SearchMediaResponseBodyMediaListAiData(SearchMediaResponseBodyMediaListAiData &&) = default ;
    SearchMediaResponseBodyMediaListAiData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SearchMediaResponseBodyMediaListAiData() = default ;
    SearchMediaResponseBodyMediaListAiData& operator=(const SearchMediaResponseBodyMediaListAiData &) = default ;
    SearchMediaResponseBodyMediaListAiData& operator=(SearchMediaResponseBodyMediaListAiData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->aiLabelInfo_ != nullptr
        && this->ocrInfo_ != nullptr; };
    // aiLabelInfo Field Functions 
    bool hasAiLabelInfo() const { return this->aiLabelInfo_ != nullptr;};
    void deleteAiLabelInfo() { this->aiLabelInfo_ = nullptr;};
    inline const vector<Models::SearchMediaResponseBodyMediaListAiDataAiLabelInfo> & aiLabelInfo() const { DARABONBA_PTR_GET_CONST(aiLabelInfo_, vector<Models::SearchMediaResponseBodyMediaListAiDataAiLabelInfo>) };
    inline vector<Models::SearchMediaResponseBodyMediaListAiDataAiLabelInfo> aiLabelInfo() { DARABONBA_PTR_GET(aiLabelInfo_, vector<Models::SearchMediaResponseBodyMediaListAiDataAiLabelInfo>) };
    inline SearchMediaResponseBodyMediaListAiData& setAiLabelInfo(const vector<Models::SearchMediaResponseBodyMediaListAiDataAiLabelInfo> & aiLabelInfo) { DARABONBA_PTR_SET_VALUE(aiLabelInfo_, aiLabelInfo) };
    inline SearchMediaResponseBodyMediaListAiData& setAiLabelInfo(vector<Models::SearchMediaResponseBodyMediaListAiDataAiLabelInfo> && aiLabelInfo) { DARABONBA_PTR_SET_RVALUE(aiLabelInfo_, aiLabelInfo) };


    // ocrInfo Field Functions 
    bool hasOcrInfo() const { return this->ocrInfo_ != nullptr;};
    void deleteOcrInfo() { this->ocrInfo_ = nullptr;};
    inline const vector<Models::SearchMediaResponseBodyMediaListAiDataOcrInfo> & ocrInfo() const { DARABONBA_PTR_GET_CONST(ocrInfo_, vector<Models::SearchMediaResponseBodyMediaListAiDataOcrInfo>) };
    inline vector<Models::SearchMediaResponseBodyMediaListAiDataOcrInfo> ocrInfo() { DARABONBA_PTR_GET(ocrInfo_, vector<Models::SearchMediaResponseBodyMediaListAiDataOcrInfo>) };
    inline SearchMediaResponseBodyMediaListAiData& setOcrInfo(const vector<Models::SearchMediaResponseBodyMediaListAiDataOcrInfo> & ocrInfo) { DARABONBA_PTR_SET_VALUE(ocrInfo_, ocrInfo) };
    inline SearchMediaResponseBodyMediaListAiData& setOcrInfo(vector<Models::SearchMediaResponseBodyMediaListAiDataOcrInfo> && ocrInfo) { DARABONBA_PTR_SET_RVALUE(ocrInfo_, ocrInfo) };


  protected:
    // The AI tags.
    std::shared_ptr<vector<Models::SearchMediaResponseBodyMediaListAiDataAiLabelInfo>> aiLabelInfo_ = nullptr;
    // The information about subtitles.
    std::shared_ptr<vector<Models::SearchMediaResponseBodyMediaListAiDataOcrInfo>> ocrInfo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
