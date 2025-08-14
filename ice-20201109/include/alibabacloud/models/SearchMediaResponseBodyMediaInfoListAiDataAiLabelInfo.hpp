// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SEARCHMEDIARESPONSEBODYMEDIAINFOLISTAIDATAAILABELINFO_HPP_
#define ALIBABACLOUD_MODELS_SEARCHMEDIARESPONSEBODYMEDIAINFOLISTAIDATAAILABELINFO_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/SearchMediaResponseBodyMediaInfoListAiDataAiLabelInfoOccurrences.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class SearchMediaResponseBodyMediaInfoListAiDataAiLabelInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SearchMediaResponseBodyMediaInfoListAiDataAiLabelInfo& obj) { 
      DARABONBA_PTR_TO_JSON(Category, category_);
      DARABONBA_PTR_TO_JSON(FaceId, faceId_);
      DARABONBA_PTR_TO_JSON(LabelId, labelId_);
      DARABONBA_PTR_TO_JSON(LabelName, labelName_);
      DARABONBA_PTR_TO_JSON(LabelType, labelType_);
      DARABONBA_PTR_TO_JSON(Occurrences, occurrences_);
      DARABONBA_PTR_TO_JSON(Source, source_);
    };
    friend void from_json(const Darabonba::Json& j, SearchMediaResponseBodyMediaInfoListAiDataAiLabelInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(Category, category_);
      DARABONBA_PTR_FROM_JSON(FaceId, faceId_);
      DARABONBA_PTR_FROM_JSON(LabelId, labelId_);
      DARABONBA_PTR_FROM_JSON(LabelName, labelName_);
      DARABONBA_PTR_FROM_JSON(LabelType, labelType_);
      DARABONBA_PTR_FROM_JSON(Occurrences, occurrences_);
      DARABONBA_PTR_FROM_JSON(Source, source_);
    };
    SearchMediaResponseBodyMediaInfoListAiDataAiLabelInfo() = default ;
    SearchMediaResponseBodyMediaInfoListAiDataAiLabelInfo(const SearchMediaResponseBodyMediaInfoListAiDataAiLabelInfo &) = default ;
    SearchMediaResponseBodyMediaInfoListAiDataAiLabelInfo(SearchMediaResponseBodyMediaInfoListAiDataAiLabelInfo &&) = default ;
    SearchMediaResponseBodyMediaInfoListAiDataAiLabelInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SearchMediaResponseBodyMediaInfoListAiDataAiLabelInfo() = default ;
    SearchMediaResponseBodyMediaInfoListAiDataAiLabelInfo& operator=(const SearchMediaResponseBodyMediaInfoListAiDataAiLabelInfo &) = default ;
    SearchMediaResponseBodyMediaInfoListAiDataAiLabelInfo& operator=(SearchMediaResponseBodyMediaInfoListAiDataAiLabelInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->category_ != nullptr
        && this->faceId_ != nullptr && this->labelId_ != nullptr && this->labelName_ != nullptr && this->labelType_ != nullptr && this->occurrences_ != nullptr
        && this->source_ != nullptr; };
    // category Field Functions 
    bool hasCategory() const { return this->category_ != nullptr;};
    void deleteCategory() { this->category_ = nullptr;};
    inline string category() const { DARABONBA_PTR_GET_DEFAULT(category_, "") };
    inline SearchMediaResponseBodyMediaInfoListAiDataAiLabelInfo& setCategory(string category) { DARABONBA_PTR_SET_VALUE(category_, category) };


    // faceId Field Functions 
    bool hasFaceId() const { return this->faceId_ != nullptr;};
    void deleteFaceId() { this->faceId_ = nullptr;};
    inline string faceId() const { DARABONBA_PTR_GET_DEFAULT(faceId_, "") };
    inline SearchMediaResponseBodyMediaInfoListAiDataAiLabelInfo& setFaceId(string faceId) { DARABONBA_PTR_SET_VALUE(faceId_, faceId) };


    // labelId Field Functions 
    bool hasLabelId() const { return this->labelId_ != nullptr;};
    void deleteLabelId() { this->labelId_ = nullptr;};
    inline string labelId() const { DARABONBA_PTR_GET_DEFAULT(labelId_, "") };
    inline SearchMediaResponseBodyMediaInfoListAiDataAiLabelInfo& setLabelId(string labelId) { DARABONBA_PTR_SET_VALUE(labelId_, labelId) };


    // labelName Field Functions 
    bool hasLabelName() const { return this->labelName_ != nullptr;};
    void deleteLabelName() { this->labelName_ = nullptr;};
    inline string labelName() const { DARABONBA_PTR_GET_DEFAULT(labelName_, "") };
    inline SearchMediaResponseBodyMediaInfoListAiDataAiLabelInfo& setLabelName(string labelName) { DARABONBA_PTR_SET_VALUE(labelName_, labelName) };


    // labelType Field Functions 
    bool hasLabelType() const { return this->labelType_ != nullptr;};
    void deleteLabelType() { this->labelType_ = nullptr;};
    inline string labelType() const { DARABONBA_PTR_GET_DEFAULT(labelType_, "") };
    inline SearchMediaResponseBodyMediaInfoListAiDataAiLabelInfo& setLabelType(string labelType) { DARABONBA_PTR_SET_VALUE(labelType_, labelType) };


    // occurrences Field Functions 
    bool hasOccurrences() const { return this->occurrences_ != nullptr;};
    void deleteOccurrences() { this->occurrences_ = nullptr;};
    inline const vector<Models::SearchMediaResponseBodyMediaInfoListAiDataAiLabelInfoOccurrences> & occurrences() const { DARABONBA_PTR_GET_CONST(occurrences_, vector<Models::SearchMediaResponseBodyMediaInfoListAiDataAiLabelInfoOccurrences>) };
    inline vector<Models::SearchMediaResponseBodyMediaInfoListAiDataAiLabelInfoOccurrences> occurrences() { DARABONBA_PTR_GET(occurrences_, vector<Models::SearchMediaResponseBodyMediaInfoListAiDataAiLabelInfoOccurrences>) };
    inline SearchMediaResponseBodyMediaInfoListAiDataAiLabelInfo& setOccurrences(const vector<Models::SearchMediaResponseBodyMediaInfoListAiDataAiLabelInfoOccurrences> & occurrences) { DARABONBA_PTR_SET_VALUE(occurrences_, occurrences) };
    inline SearchMediaResponseBodyMediaInfoListAiDataAiLabelInfo& setOccurrences(vector<Models::SearchMediaResponseBodyMediaInfoListAiDataAiLabelInfoOccurrences> && occurrences) { DARABONBA_PTR_SET_RVALUE(occurrences_, occurrences) };


    // source Field Functions 
    bool hasSource() const { return this->source_ != nullptr;};
    void deleteSource() { this->source_ = nullptr;};
    inline string source() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
    inline SearchMediaResponseBodyMediaInfoListAiDataAiLabelInfo& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


  protected:
    // The category.
    std::shared_ptr<string> category_ = nullptr;
    // The face ID.
    std::shared_ptr<string> faceId_ = nullptr;
    // The ID of the entity.
    std::shared_ptr<string> labelId_ = nullptr;
    // The name of the entity.
    std::shared_ptr<string> labelName_ = nullptr;
    // The type of the tag.
    std::shared_ptr<string> labelType_ = nullptr;
    // The clips.
    std::shared_ptr<vector<Models::SearchMediaResponseBodyMediaInfoListAiDataAiLabelInfoOccurrences>> occurrences_ = nullptr;
    // The source.
    std::shared_ptr<string> source_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
