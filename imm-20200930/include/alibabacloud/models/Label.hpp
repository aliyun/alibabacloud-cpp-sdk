// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LABEL_HPP_
#define ALIBABACLOUD_MODELS_LABEL_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/Clip.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Imm20200930
{
namespace Models
{
  class Label : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const Label& obj) { 
      DARABONBA_PTR_TO_JSON(CentricScore, centricScore_);
      DARABONBA_PTR_TO_JSON(Clips, clips_);
      DARABONBA_PTR_TO_JSON(LabelAlias, labelAlias_);
      DARABONBA_PTR_TO_JSON(LabelConfidence, labelConfidence_);
      DARABONBA_PTR_TO_JSON(LabelLevel, labelLevel_);
      DARABONBA_PTR_TO_JSON(LabelName, labelName_);
      DARABONBA_PTR_TO_JSON(Language, language_);
      DARABONBA_PTR_TO_JSON(ParentLabelName, parentLabelName_);
    };
    friend void from_json(const Darabonba::Json& j, Label& obj) { 
      DARABONBA_PTR_FROM_JSON(CentricScore, centricScore_);
      DARABONBA_PTR_FROM_JSON(Clips, clips_);
      DARABONBA_PTR_FROM_JSON(LabelAlias, labelAlias_);
      DARABONBA_PTR_FROM_JSON(LabelConfidence, labelConfidence_);
      DARABONBA_PTR_FROM_JSON(LabelLevel, labelLevel_);
      DARABONBA_PTR_FROM_JSON(LabelName, labelName_);
      DARABONBA_PTR_FROM_JSON(Language, language_);
      DARABONBA_PTR_FROM_JSON(ParentLabelName, parentLabelName_);
    };
    Label() = default ;
    Label(const Label &) = default ;
    Label(Label &&) = default ;
    Label(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~Label() = default ;
    Label& operator=(const Label &) = default ;
    Label& operator=(Label &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->centricScore_ == nullptr
        && this->clips_ == nullptr && this->labelAlias_ == nullptr && this->labelConfidence_ == nullptr && this->labelLevel_ == nullptr && this->labelName_ == nullptr
        && this->language_ == nullptr && this->parentLabelName_ == nullptr; };
    // centricScore Field Functions 
    bool hasCentricScore() const { return this->centricScore_ != nullptr;};
    void deleteCentricScore() { this->centricScore_ = nullptr;};
    inline float getCentricScore() const { DARABONBA_PTR_GET_DEFAULT(centricScore_, 0.0) };
    inline Label& setCentricScore(float centricScore) { DARABONBA_PTR_SET_VALUE(centricScore_, centricScore) };


    // clips Field Functions 
    bool hasClips() const { return this->clips_ != nullptr;};
    void deleteClips() { this->clips_ = nullptr;};
    inline const vector<Clip> & getClips() const { DARABONBA_PTR_GET_CONST(clips_, vector<Clip>) };
    inline vector<Clip> getClips() { DARABONBA_PTR_GET(clips_, vector<Clip>) };
    inline Label& setClips(const vector<Clip> & clips) { DARABONBA_PTR_SET_VALUE(clips_, clips) };
    inline Label& setClips(vector<Clip> && clips) { DARABONBA_PTR_SET_RVALUE(clips_, clips) };


    // labelAlias Field Functions 
    bool hasLabelAlias() const { return this->labelAlias_ != nullptr;};
    void deleteLabelAlias() { this->labelAlias_ = nullptr;};
    inline string getLabelAlias() const { DARABONBA_PTR_GET_DEFAULT(labelAlias_, "") };
    inline Label& setLabelAlias(string labelAlias) { DARABONBA_PTR_SET_VALUE(labelAlias_, labelAlias) };


    // labelConfidence Field Functions 
    bool hasLabelConfidence() const { return this->labelConfidence_ != nullptr;};
    void deleteLabelConfidence() { this->labelConfidence_ = nullptr;};
    inline float getLabelConfidence() const { DARABONBA_PTR_GET_DEFAULT(labelConfidence_, 0.0) };
    inline Label& setLabelConfidence(float labelConfidence) { DARABONBA_PTR_SET_VALUE(labelConfidence_, labelConfidence) };


    // labelLevel Field Functions 
    bool hasLabelLevel() const { return this->labelLevel_ != nullptr;};
    void deleteLabelLevel() { this->labelLevel_ = nullptr;};
    inline int64_t getLabelLevel() const { DARABONBA_PTR_GET_DEFAULT(labelLevel_, 0L) };
    inline Label& setLabelLevel(int64_t labelLevel) { DARABONBA_PTR_SET_VALUE(labelLevel_, labelLevel) };


    // labelName Field Functions 
    bool hasLabelName() const { return this->labelName_ != nullptr;};
    void deleteLabelName() { this->labelName_ = nullptr;};
    inline string getLabelName() const { DARABONBA_PTR_GET_DEFAULT(labelName_, "") };
    inline Label& setLabelName(string labelName) { DARABONBA_PTR_SET_VALUE(labelName_, labelName) };


    // language Field Functions 
    bool hasLanguage() const { return this->language_ != nullptr;};
    void deleteLanguage() { this->language_ = nullptr;};
    inline string getLanguage() const { DARABONBA_PTR_GET_DEFAULT(language_, "") };
    inline Label& setLanguage(string language) { DARABONBA_PTR_SET_VALUE(language_, language) };


    // parentLabelName Field Functions 
    bool hasParentLabelName() const { return this->parentLabelName_ != nullptr;};
    void deleteParentLabelName() { this->parentLabelName_ = nullptr;};
    inline string getParentLabelName() const { DARABONBA_PTR_GET_DEFAULT(parentLabelName_, "") };
    inline Label& setParentLabelName(string parentLabelName) { DARABONBA_PTR_SET_VALUE(parentLabelName_, parentLabelName) };


  protected:
    // The central value of the label. This value indicates the confidence that the label is the majority component of the image. Valid values: 0 to 1. A higher value indicates greater confidence.
    shared_ptr<float> centricScore_ {};
    shared_ptr<vector<Clip>> clips_ {};
    shared_ptr<string> labelAlias_ {};
    // The confidence level of the label. Valid values: 0 to 1. A higher value indicates greater confidence.
    shared_ptr<float> labelConfidence_ {};
    // The label level. Valid values: 1, 2, and 3.
    shared_ptr<int64_t> labelLevel_ {};
    // The label name.
    shared_ptr<string> labelName_ {};
    // The label language, which is represented as a BCP 47 language tag.
    shared_ptr<string> language_ {};
    // The name of the parent label.
    shared_ptr<string> parentLabelName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imm20200930
#endif
