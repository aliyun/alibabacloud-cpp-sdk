// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SEARCHMEDIACLIPBYFACERESPONSEBODYMEDIACLIPLIST_HPP_
#define ALIBABACLOUD_MODELS_SEARCHMEDIACLIPBYFACERESPONSEBODYMEDIACLIPLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/SearchMediaClipByFaceResponseBodyMediaClipListOccurrencesInfos.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class SearchMediaClipByFaceResponseBodyMediaClipList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SearchMediaClipByFaceResponseBodyMediaClipList& obj) { 
      DARABONBA_PTR_TO_JSON(Category, category_);
      DARABONBA_PTR_TO_JSON(EntityId, entityId_);
      DARABONBA_PTR_TO_JSON(LabelName, labelName_);
      DARABONBA_PTR_TO_JSON(OccurrencesInfos, occurrencesInfos_);
      DARABONBA_PTR_TO_JSON(Score, score_);
    };
    friend void from_json(const Darabonba::Json& j, SearchMediaClipByFaceResponseBodyMediaClipList& obj) { 
      DARABONBA_PTR_FROM_JSON(Category, category_);
      DARABONBA_PTR_FROM_JSON(EntityId, entityId_);
      DARABONBA_PTR_FROM_JSON(LabelName, labelName_);
      DARABONBA_PTR_FROM_JSON(OccurrencesInfos, occurrencesInfos_);
      DARABONBA_PTR_FROM_JSON(Score, score_);
    };
    SearchMediaClipByFaceResponseBodyMediaClipList() = default ;
    SearchMediaClipByFaceResponseBodyMediaClipList(const SearchMediaClipByFaceResponseBodyMediaClipList &) = default ;
    SearchMediaClipByFaceResponseBodyMediaClipList(SearchMediaClipByFaceResponseBodyMediaClipList &&) = default ;
    SearchMediaClipByFaceResponseBodyMediaClipList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SearchMediaClipByFaceResponseBodyMediaClipList() = default ;
    SearchMediaClipByFaceResponseBodyMediaClipList& operator=(const SearchMediaClipByFaceResponseBodyMediaClipList &) = default ;
    SearchMediaClipByFaceResponseBodyMediaClipList& operator=(SearchMediaClipByFaceResponseBodyMediaClipList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->category_ != nullptr
        && this->entityId_ != nullptr && this->labelName_ != nullptr && this->occurrencesInfos_ != nullptr && this->score_ != nullptr; };
    // category Field Functions 
    bool hasCategory() const { return this->category_ != nullptr;};
    void deleteCategory() { this->category_ = nullptr;};
    inline string category() const { DARABONBA_PTR_GET_DEFAULT(category_, "") };
    inline SearchMediaClipByFaceResponseBodyMediaClipList& setCategory(string category) { DARABONBA_PTR_SET_VALUE(category_, category) };


    // entityId Field Functions 
    bool hasEntityId() const { return this->entityId_ != nullptr;};
    void deleteEntityId() { this->entityId_ = nullptr;};
    inline string entityId() const { DARABONBA_PTR_GET_DEFAULT(entityId_, "") };
    inline SearchMediaClipByFaceResponseBodyMediaClipList& setEntityId(string entityId) { DARABONBA_PTR_SET_VALUE(entityId_, entityId) };


    // labelName Field Functions 
    bool hasLabelName() const { return this->labelName_ != nullptr;};
    void deleteLabelName() { this->labelName_ = nullptr;};
    inline string labelName() const { DARABONBA_PTR_GET_DEFAULT(labelName_, "") };
    inline SearchMediaClipByFaceResponseBodyMediaClipList& setLabelName(string labelName) { DARABONBA_PTR_SET_VALUE(labelName_, labelName) };


    // occurrencesInfos Field Functions 
    bool hasOccurrencesInfos() const { return this->occurrencesInfos_ != nullptr;};
    void deleteOccurrencesInfos() { this->occurrencesInfos_ = nullptr;};
    inline const vector<Models::SearchMediaClipByFaceResponseBodyMediaClipListOccurrencesInfos> & occurrencesInfos() const { DARABONBA_PTR_GET_CONST(occurrencesInfos_, vector<Models::SearchMediaClipByFaceResponseBodyMediaClipListOccurrencesInfos>) };
    inline vector<Models::SearchMediaClipByFaceResponseBodyMediaClipListOccurrencesInfos> occurrencesInfos() { DARABONBA_PTR_GET(occurrencesInfos_, vector<Models::SearchMediaClipByFaceResponseBodyMediaClipListOccurrencesInfos>) };
    inline SearchMediaClipByFaceResponseBodyMediaClipList& setOccurrencesInfos(const vector<Models::SearchMediaClipByFaceResponseBodyMediaClipListOccurrencesInfos> & occurrencesInfos) { DARABONBA_PTR_SET_VALUE(occurrencesInfos_, occurrencesInfos) };
    inline SearchMediaClipByFaceResponseBodyMediaClipList& setOccurrencesInfos(vector<Models::SearchMediaClipByFaceResponseBodyMediaClipListOccurrencesInfos> && occurrencesInfos) { DARABONBA_PTR_SET_RVALUE(occurrencesInfos_, occurrencesInfos) };


    // score Field Functions 
    bool hasScore() const { return this->score_ != nullptr;};
    void deleteScore() { this->score_ = nullptr;};
    inline float score() const { DARABONBA_PTR_GET_DEFAULT(score_, 0.0) };
    inline SearchMediaClipByFaceResponseBodyMediaClipList& setScore(float score) { DARABONBA_PTR_SET_VALUE(score_, score) };


  protected:
    // The type of the character. Valid values: celebrity sensitive politician custom unknown
    std::shared_ptr<string> category_ = nullptr;
    // The ID of the entity, which is the same as the entity ID returned in tag analysis.
    std::shared_ptr<string> entityId_ = nullptr;
    // The name of the entity.
    std::shared_ptr<string> labelName_ = nullptr;
    // The information about clips related to the face.
    std::shared_ptr<vector<Models::SearchMediaClipByFaceResponseBodyMediaClipListOccurrencesInfos>> occurrencesInfos_ = nullptr;
    // The score of the clip. The value is of the Float type. The value is in the range of [0,1].
    std::shared_ptr<float> score_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
