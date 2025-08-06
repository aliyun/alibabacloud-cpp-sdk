// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SEARCHMEDIARESPONSEBODYMEDIALISTAIDATAAILABELINFO_HPP_
#define ALIBABACLOUD_MODELS_SEARCHMEDIARESPONSEBODYMEDIALISTAIDATAAILABELINFO_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/SearchMediaResponseBodyMediaListAiDataAiLabelInfoOccurrences.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class SearchMediaResponseBodyMediaListAiDataAiLabelInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SearchMediaResponseBodyMediaListAiDataAiLabelInfo& obj) { 
      DARABONBA_PTR_TO_JSON(Category, category_);
      DARABONBA_PTR_TO_JSON(LabelId, labelId_);
      DARABONBA_PTR_TO_JSON(LabelName, labelName_);
      DARABONBA_PTR_TO_JSON(Occurrences, occurrences_);
    };
    friend void from_json(const Darabonba::Json& j, SearchMediaResponseBodyMediaListAiDataAiLabelInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(Category, category_);
      DARABONBA_PTR_FROM_JSON(LabelId, labelId_);
      DARABONBA_PTR_FROM_JSON(LabelName, labelName_);
      DARABONBA_PTR_FROM_JSON(Occurrences, occurrences_);
    };
    SearchMediaResponseBodyMediaListAiDataAiLabelInfo() = default ;
    SearchMediaResponseBodyMediaListAiDataAiLabelInfo(const SearchMediaResponseBodyMediaListAiDataAiLabelInfo &) = default ;
    SearchMediaResponseBodyMediaListAiDataAiLabelInfo(SearchMediaResponseBodyMediaListAiDataAiLabelInfo &&) = default ;
    SearchMediaResponseBodyMediaListAiDataAiLabelInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SearchMediaResponseBodyMediaListAiDataAiLabelInfo() = default ;
    SearchMediaResponseBodyMediaListAiDataAiLabelInfo& operator=(const SearchMediaResponseBodyMediaListAiDataAiLabelInfo &) = default ;
    SearchMediaResponseBodyMediaListAiDataAiLabelInfo& operator=(SearchMediaResponseBodyMediaListAiDataAiLabelInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->category_ != nullptr
        && this->labelId_ != nullptr && this->labelName_ != nullptr && this->occurrences_ != nullptr; };
    // category Field Functions 
    bool hasCategory() const { return this->category_ != nullptr;};
    void deleteCategory() { this->category_ = nullptr;};
    inline string category() const { DARABONBA_PTR_GET_DEFAULT(category_, "") };
    inline SearchMediaResponseBodyMediaListAiDataAiLabelInfo& setCategory(string category) { DARABONBA_PTR_SET_VALUE(category_, category) };


    // labelId Field Functions 
    bool hasLabelId() const { return this->labelId_ != nullptr;};
    void deleteLabelId() { this->labelId_ = nullptr;};
    inline string labelId() const { DARABONBA_PTR_GET_DEFAULT(labelId_, "") };
    inline SearchMediaResponseBodyMediaListAiDataAiLabelInfo& setLabelId(string labelId) { DARABONBA_PTR_SET_VALUE(labelId_, labelId) };


    // labelName Field Functions 
    bool hasLabelName() const { return this->labelName_ != nullptr;};
    void deleteLabelName() { this->labelName_ = nullptr;};
    inline string labelName() const { DARABONBA_PTR_GET_DEFAULT(labelName_, "") };
    inline SearchMediaResponseBodyMediaListAiDataAiLabelInfo& setLabelName(string labelName) { DARABONBA_PTR_SET_VALUE(labelName_, labelName) };


    // occurrences Field Functions 
    bool hasOccurrences() const { return this->occurrences_ != nullptr;};
    void deleteOccurrences() { this->occurrences_ = nullptr;};
    inline const vector<Models::SearchMediaResponseBodyMediaListAiDataAiLabelInfoOccurrences> & occurrences() const { DARABONBA_PTR_GET_CONST(occurrences_, vector<Models::SearchMediaResponseBodyMediaListAiDataAiLabelInfoOccurrences>) };
    inline vector<Models::SearchMediaResponseBodyMediaListAiDataAiLabelInfoOccurrences> occurrences() { DARABONBA_PTR_GET(occurrences_, vector<Models::SearchMediaResponseBodyMediaListAiDataAiLabelInfoOccurrences>) };
    inline SearchMediaResponseBodyMediaListAiDataAiLabelInfo& setOccurrences(const vector<Models::SearchMediaResponseBodyMediaListAiDataAiLabelInfoOccurrences> & occurrences) { DARABONBA_PTR_SET_VALUE(occurrences_, occurrences) };
    inline SearchMediaResponseBodyMediaListAiDataAiLabelInfo& setOccurrences(vector<Models::SearchMediaResponseBodyMediaListAiDataAiLabelInfoOccurrences> && occurrences) { DARABONBA_PTR_SET_RVALUE(occurrences_, occurrences) };


  protected:
    // The category.
    std::shared_ptr<string> category_ = nullptr;
    // The ID of the tag.
    std::shared_ptr<string> labelId_ = nullptr;
    // The name of the tag.
    std::shared_ptr<string> labelName_ = nullptr;
    // The clips.
    std::shared_ptr<vector<Models::SearchMediaResponseBodyMediaListAiDataAiLabelInfoOccurrences>> occurrences_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
