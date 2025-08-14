// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SEARCHMEDIABYAILABELRESPONSEBODYMEDIALISTAIDATAAILABELINFO_HPP_
#define ALIBABACLOUD_MODELS_SEARCHMEDIABYAILABELRESPONSEBODYMEDIALISTAIDATAAILABELINFO_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/SearchMediaByAILabelResponseBodyMediaListAiDataAiLabelInfoOccurrences.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class SearchMediaByAILabelResponseBodyMediaListAiDataAiLabelInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SearchMediaByAILabelResponseBodyMediaListAiDataAiLabelInfo& obj) { 
      DARABONBA_PTR_TO_JSON(Category, category_);
      DARABONBA_PTR_TO_JSON(FaceId, faceId_);
      DARABONBA_PTR_TO_JSON(LabelId, labelId_);
      DARABONBA_PTR_TO_JSON(LabelName, labelName_);
      DARABONBA_PTR_TO_JSON(LabelType, labelType_);
      DARABONBA_PTR_TO_JSON(Occurrences, occurrences_);
      DARABONBA_PTR_TO_JSON(Source, source_);
    };
    friend void from_json(const Darabonba::Json& j, SearchMediaByAILabelResponseBodyMediaListAiDataAiLabelInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(Category, category_);
      DARABONBA_PTR_FROM_JSON(FaceId, faceId_);
      DARABONBA_PTR_FROM_JSON(LabelId, labelId_);
      DARABONBA_PTR_FROM_JSON(LabelName, labelName_);
      DARABONBA_PTR_FROM_JSON(LabelType, labelType_);
      DARABONBA_PTR_FROM_JSON(Occurrences, occurrences_);
      DARABONBA_PTR_FROM_JSON(Source, source_);
    };
    SearchMediaByAILabelResponseBodyMediaListAiDataAiLabelInfo() = default ;
    SearchMediaByAILabelResponseBodyMediaListAiDataAiLabelInfo(const SearchMediaByAILabelResponseBodyMediaListAiDataAiLabelInfo &) = default ;
    SearchMediaByAILabelResponseBodyMediaListAiDataAiLabelInfo(SearchMediaByAILabelResponseBodyMediaListAiDataAiLabelInfo &&) = default ;
    SearchMediaByAILabelResponseBodyMediaListAiDataAiLabelInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SearchMediaByAILabelResponseBodyMediaListAiDataAiLabelInfo() = default ;
    SearchMediaByAILabelResponseBodyMediaListAiDataAiLabelInfo& operator=(const SearchMediaByAILabelResponseBodyMediaListAiDataAiLabelInfo &) = default ;
    SearchMediaByAILabelResponseBodyMediaListAiDataAiLabelInfo& operator=(SearchMediaByAILabelResponseBodyMediaListAiDataAiLabelInfo &&) = default ;
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
    inline SearchMediaByAILabelResponseBodyMediaListAiDataAiLabelInfo& setCategory(string category) { DARABONBA_PTR_SET_VALUE(category_, category) };


    // faceId Field Functions 
    bool hasFaceId() const { return this->faceId_ != nullptr;};
    void deleteFaceId() { this->faceId_ = nullptr;};
    inline string faceId() const { DARABONBA_PTR_GET_DEFAULT(faceId_, "") };
    inline SearchMediaByAILabelResponseBodyMediaListAiDataAiLabelInfo& setFaceId(string faceId) { DARABONBA_PTR_SET_VALUE(faceId_, faceId) };


    // labelId Field Functions 
    bool hasLabelId() const { return this->labelId_ != nullptr;};
    void deleteLabelId() { this->labelId_ = nullptr;};
    inline string labelId() const { DARABONBA_PTR_GET_DEFAULT(labelId_, "") };
    inline SearchMediaByAILabelResponseBodyMediaListAiDataAiLabelInfo& setLabelId(string labelId) { DARABONBA_PTR_SET_VALUE(labelId_, labelId) };


    // labelName Field Functions 
    bool hasLabelName() const { return this->labelName_ != nullptr;};
    void deleteLabelName() { this->labelName_ = nullptr;};
    inline string labelName() const { DARABONBA_PTR_GET_DEFAULT(labelName_, "") };
    inline SearchMediaByAILabelResponseBodyMediaListAiDataAiLabelInfo& setLabelName(string labelName) { DARABONBA_PTR_SET_VALUE(labelName_, labelName) };


    // labelType Field Functions 
    bool hasLabelType() const { return this->labelType_ != nullptr;};
    void deleteLabelType() { this->labelType_ = nullptr;};
    inline string labelType() const { DARABONBA_PTR_GET_DEFAULT(labelType_, "") };
    inline SearchMediaByAILabelResponseBodyMediaListAiDataAiLabelInfo& setLabelType(string labelType) { DARABONBA_PTR_SET_VALUE(labelType_, labelType) };


    // occurrences Field Functions 
    bool hasOccurrences() const { return this->occurrences_ != nullptr;};
    void deleteOccurrences() { this->occurrences_ = nullptr;};
    inline const vector<Models::SearchMediaByAILabelResponseBodyMediaListAiDataAiLabelInfoOccurrences> & occurrences() const { DARABONBA_PTR_GET_CONST(occurrences_, vector<Models::SearchMediaByAILabelResponseBodyMediaListAiDataAiLabelInfoOccurrences>) };
    inline vector<Models::SearchMediaByAILabelResponseBodyMediaListAiDataAiLabelInfoOccurrences> occurrences() { DARABONBA_PTR_GET(occurrences_, vector<Models::SearchMediaByAILabelResponseBodyMediaListAiDataAiLabelInfoOccurrences>) };
    inline SearchMediaByAILabelResponseBodyMediaListAiDataAiLabelInfo& setOccurrences(const vector<Models::SearchMediaByAILabelResponseBodyMediaListAiDataAiLabelInfoOccurrences> & occurrences) { DARABONBA_PTR_SET_VALUE(occurrences_, occurrences) };
    inline SearchMediaByAILabelResponseBodyMediaListAiDataAiLabelInfo& setOccurrences(vector<Models::SearchMediaByAILabelResponseBodyMediaListAiDataAiLabelInfoOccurrences> && occurrences) { DARABONBA_PTR_SET_RVALUE(occurrences_, occurrences) };


    // source Field Functions 
    bool hasSource() const { return this->source_ != nullptr;};
    void deleteSource() { this->source_ = nullptr;};
    inline string source() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
    inline SearchMediaByAILabelResponseBodyMediaListAiDataAiLabelInfo& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


  protected:
    // The category.
    std::shared_ptr<string> category_ = nullptr;
    // The ID of the face.
    std::shared_ptr<string> faceId_ = nullptr;
    // The ID of the entity.
    std::shared_ptr<string> labelId_ = nullptr;
    // The name of the entity.
    std::shared_ptr<string> labelName_ = nullptr;
    // The type of the tag.
    std::shared_ptr<string> labelType_ = nullptr;
    // The information about the clips.
    std::shared_ptr<vector<Models::SearchMediaByAILabelResponseBodyMediaListAiDataAiLabelInfoOccurrences>> occurrences_ = nullptr;
    // The source.
    std::shared_ptr<string> source_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
