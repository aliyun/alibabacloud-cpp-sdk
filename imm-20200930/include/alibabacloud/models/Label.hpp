// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LABEL_HPP_
#define ALIBABACLOUD_MODELS_LABEL_HPP_
#include <darabonba/Core.hpp>
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
      DARABONBA_PTR_TO_JSON(LabelConfidence, labelConfidence_);
      DARABONBA_PTR_TO_JSON(LabelLevel, labelLevel_);
      DARABONBA_PTR_TO_JSON(LabelName, labelName_);
      DARABONBA_PTR_TO_JSON(Language, language_);
      DARABONBA_PTR_TO_JSON(ParentLabelName, parentLabelName_);
    };
    friend void from_json(const Darabonba::Json& j, Label& obj) { 
      DARABONBA_PTR_FROM_JSON(CentricScore, centricScore_);
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
    virtual bool empty() const override { this->centricScore_ != nullptr
        && this->labelConfidence_ != nullptr && this->labelLevel_ != nullptr && this->labelName_ != nullptr && this->language_ != nullptr && this->parentLabelName_ != nullptr; };
    // centricScore Field Functions 
    bool hasCentricScore() const { return this->centricScore_ != nullptr;};
    void deleteCentricScore() { this->centricScore_ = nullptr;};
    inline float centricScore() const { DARABONBA_PTR_GET_DEFAULT(centricScore_, 0.0) };
    inline Label& setCentricScore(float centricScore) { DARABONBA_PTR_SET_VALUE(centricScore_, centricScore) };


    // labelConfidence Field Functions 
    bool hasLabelConfidence() const { return this->labelConfidence_ != nullptr;};
    void deleteLabelConfidence() { this->labelConfidence_ = nullptr;};
    inline float labelConfidence() const { DARABONBA_PTR_GET_DEFAULT(labelConfidence_, 0.0) };
    inline Label& setLabelConfidence(float labelConfidence) { DARABONBA_PTR_SET_VALUE(labelConfidence_, labelConfidence) };


    // labelLevel Field Functions 
    bool hasLabelLevel() const { return this->labelLevel_ != nullptr;};
    void deleteLabelLevel() { this->labelLevel_ = nullptr;};
    inline int64_t labelLevel() const { DARABONBA_PTR_GET_DEFAULT(labelLevel_, 0L) };
    inline Label& setLabelLevel(int64_t labelLevel) { DARABONBA_PTR_SET_VALUE(labelLevel_, labelLevel) };


    // labelName Field Functions 
    bool hasLabelName() const { return this->labelName_ != nullptr;};
    void deleteLabelName() { this->labelName_ = nullptr;};
    inline string labelName() const { DARABONBA_PTR_GET_DEFAULT(labelName_, "") };
    inline Label& setLabelName(string labelName) { DARABONBA_PTR_SET_VALUE(labelName_, labelName) };


    // language Field Functions 
    bool hasLanguage() const { return this->language_ != nullptr;};
    void deleteLanguage() { this->language_ = nullptr;};
    inline string language() const { DARABONBA_PTR_GET_DEFAULT(language_, "") };
    inline Label& setLanguage(string language) { DARABONBA_PTR_SET_VALUE(language_, language) };


    // parentLabelName Field Functions 
    bool hasParentLabelName() const { return this->parentLabelName_ != nullptr;};
    void deleteParentLabelName() { this->parentLabelName_ = nullptr;};
    inline string parentLabelName() const { DARABONBA_PTR_GET_DEFAULT(parentLabelName_, "") };
    inline Label& setParentLabelName(string parentLabelName) { DARABONBA_PTR_SET_VALUE(parentLabelName_, parentLabelName) };


  protected:
    std::shared_ptr<float> centricScore_ = nullptr;
    std::shared_ptr<float> labelConfidence_ = nullptr;
    std::shared_ptr<int64_t> labelLevel_ = nullptr;
    std::shared_ptr<string> labelName_ = nullptr;
    std::shared_ptr<string> language_ = nullptr;
    std::shared_ptr<string> parentLabelName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imm20200930
#endif
