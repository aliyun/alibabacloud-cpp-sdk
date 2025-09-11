// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TEXTTRANSLATEREQUESTEXTTEXTTRANSFORM_HPP_
#define ALIBABACLOUD_MODELS_TEXTTRANSLATEREQUESTEXTTEXTTRANSFORM_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AnyTrans20250707
{
namespace Models
{
  class TextTranslateRequestExtTextTransform : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TextTranslateRequestExtTextTransform& obj) { 
      DARABONBA_PTR_TO_JSON(toLower, toLower_);
      DARABONBA_PTR_TO_JSON(toTitle, toTitle_);
      DARABONBA_PTR_TO_JSON(toUpper, toUpper_);
    };
    friend void from_json(const Darabonba::Json& j, TextTranslateRequestExtTextTransform& obj) { 
      DARABONBA_PTR_FROM_JSON(toLower, toLower_);
      DARABONBA_PTR_FROM_JSON(toTitle, toTitle_);
      DARABONBA_PTR_FROM_JSON(toUpper, toUpper_);
    };
    TextTranslateRequestExtTextTransform() = default ;
    TextTranslateRequestExtTextTransform(const TextTranslateRequestExtTextTransform &) = default ;
    TextTranslateRequestExtTextTransform(TextTranslateRequestExtTextTransform &&) = default ;
    TextTranslateRequestExtTextTransform(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TextTranslateRequestExtTextTransform() = default ;
    TextTranslateRequestExtTextTransform& operator=(const TextTranslateRequestExtTextTransform &) = default ;
    TextTranslateRequestExtTextTransform& operator=(TextTranslateRequestExtTextTransform &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->toLower_ != nullptr
        && this->toTitle_ != nullptr && this->toUpper_ != nullptr; };
    // toLower Field Functions 
    bool hasToLower() const { return this->toLower_ != nullptr;};
    void deleteToLower() { this->toLower_ = nullptr;};
    inline bool toLower() const { DARABONBA_PTR_GET_DEFAULT(toLower_, false) };
    inline TextTranslateRequestExtTextTransform& setToLower(bool toLower) { DARABONBA_PTR_SET_VALUE(toLower_, toLower) };


    // toTitle Field Functions 
    bool hasToTitle() const { return this->toTitle_ != nullptr;};
    void deleteToTitle() { this->toTitle_ = nullptr;};
    inline bool toTitle() const { DARABONBA_PTR_GET_DEFAULT(toTitle_, false) };
    inline TextTranslateRequestExtTextTransform& setToTitle(bool toTitle) { DARABONBA_PTR_SET_VALUE(toTitle_, toTitle) };


    // toUpper Field Functions 
    bool hasToUpper() const { return this->toUpper_ != nullptr;};
    void deleteToUpper() { this->toUpper_ = nullptr;};
    inline bool toUpper() const { DARABONBA_PTR_GET_DEFAULT(toUpper_, false) };
    inline TextTranslateRequestExtTextTransform& setToUpper(bool toUpper) { DARABONBA_PTR_SET_VALUE(toUpper_, toUpper) };


  protected:
    std::shared_ptr<bool> toLower_ = nullptr;
    std::shared_ptr<bool> toTitle_ = nullptr;
    std::shared_ptr<bool> toUpper_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AnyTrans20250707
#endif
