// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDATASETDOCUMENTRESPONSEBODYDATAMETADATA_HPP_
#define ALIBABACLOUD_MODELS_GETDATASETDOCUMENTRESPONSEBODYDATAMETADATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetDatasetDocumentResponseBodyDataMetadataAsrSentences.hpp>
#include <alibabacloud/models/GetDatasetDocumentResponseBodyDataMetadataVideoShots.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class GetDatasetDocumentResponseBodyDataMetadata : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDatasetDocumentResponseBodyDataMetadata& obj) { 
      DARABONBA_PTR_TO_JSON(AsrSentences, asrSentences_);
      DARABONBA_PTR_TO_JSON(Text, text_);
      DARABONBA_PTR_TO_JSON(VideoShots, videoShots_);
    };
    friend void from_json(const Darabonba::Json& j, GetDatasetDocumentResponseBodyDataMetadata& obj) { 
      DARABONBA_PTR_FROM_JSON(AsrSentences, asrSentences_);
      DARABONBA_PTR_FROM_JSON(Text, text_);
      DARABONBA_PTR_FROM_JSON(VideoShots, videoShots_);
    };
    GetDatasetDocumentResponseBodyDataMetadata() = default ;
    GetDatasetDocumentResponseBodyDataMetadata(const GetDatasetDocumentResponseBodyDataMetadata &) = default ;
    GetDatasetDocumentResponseBodyDataMetadata(GetDatasetDocumentResponseBodyDataMetadata &&) = default ;
    GetDatasetDocumentResponseBodyDataMetadata(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDatasetDocumentResponseBodyDataMetadata() = default ;
    GetDatasetDocumentResponseBodyDataMetadata& operator=(const GetDatasetDocumentResponseBodyDataMetadata &) = default ;
    GetDatasetDocumentResponseBodyDataMetadata& operator=(GetDatasetDocumentResponseBodyDataMetadata &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->asrSentences_ == nullptr
        && return this->text_ == nullptr && return this->videoShots_ == nullptr; };
    // asrSentences Field Functions 
    bool hasAsrSentences() const { return this->asrSentences_ != nullptr;};
    void deleteAsrSentences() { this->asrSentences_ = nullptr;};
    inline const vector<Models::GetDatasetDocumentResponseBodyDataMetadataAsrSentences> & asrSentences() const { DARABONBA_PTR_GET_CONST(asrSentences_, vector<Models::GetDatasetDocumentResponseBodyDataMetadataAsrSentences>) };
    inline vector<Models::GetDatasetDocumentResponseBodyDataMetadataAsrSentences> asrSentences() { DARABONBA_PTR_GET(asrSentences_, vector<Models::GetDatasetDocumentResponseBodyDataMetadataAsrSentences>) };
    inline GetDatasetDocumentResponseBodyDataMetadata& setAsrSentences(const vector<Models::GetDatasetDocumentResponseBodyDataMetadataAsrSentences> & asrSentences) { DARABONBA_PTR_SET_VALUE(asrSentences_, asrSentences) };
    inline GetDatasetDocumentResponseBodyDataMetadata& setAsrSentences(vector<Models::GetDatasetDocumentResponseBodyDataMetadataAsrSentences> && asrSentences) { DARABONBA_PTR_SET_RVALUE(asrSentences_, asrSentences) };


    // text Field Functions 
    bool hasText() const { return this->text_ != nullptr;};
    void deleteText() { this->text_ = nullptr;};
    inline string text() const { DARABONBA_PTR_GET_DEFAULT(text_, "") };
    inline GetDatasetDocumentResponseBodyDataMetadata& setText(string text) { DARABONBA_PTR_SET_VALUE(text_, text) };


    // videoShots Field Functions 
    bool hasVideoShots() const { return this->videoShots_ != nullptr;};
    void deleteVideoShots() { this->videoShots_ = nullptr;};
    inline const vector<Models::GetDatasetDocumentResponseBodyDataMetadataVideoShots> & videoShots() const { DARABONBA_PTR_GET_CONST(videoShots_, vector<Models::GetDatasetDocumentResponseBodyDataMetadataVideoShots>) };
    inline vector<Models::GetDatasetDocumentResponseBodyDataMetadataVideoShots> videoShots() { DARABONBA_PTR_GET(videoShots_, vector<Models::GetDatasetDocumentResponseBodyDataMetadataVideoShots>) };
    inline GetDatasetDocumentResponseBodyDataMetadata& setVideoShots(const vector<Models::GetDatasetDocumentResponseBodyDataMetadataVideoShots> & videoShots) { DARABONBA_PTR_SET_VALUE(videoShots_, videoShots) };
    inline GetDatasetDocumentResponseBodyDataMetadata& setVideoShots(vector<Models::GetDatasetDocumentResponseBodyDataMetadataVideoShots> && videoShots) { DARABONBA_PTR_SET_RVALUE(videoShots_, videoShots) };


  protected:
    std::shared_ptr<vector<Models::GetDatasetDocumentResponseBodyDataMetadataAsrSentences>> asrSentences_ = nullptr;
    std::shared_ptr<string> text_ = nullptr;
    std::shared_ptr<vector<Models::GetDatasetDocumentResponseBodyDataMetadataVideoShots>> videoShots_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
