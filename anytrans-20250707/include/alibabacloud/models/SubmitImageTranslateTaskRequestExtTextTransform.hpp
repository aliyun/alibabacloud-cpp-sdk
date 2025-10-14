// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITIMAGETRANSLATETASKREQUESTEXTTEXTTRANSFORM_HPP_
#define ALIBABACLOUD_MODELS_SUBMITIMAGETRANSLATETASKREQUESTEXTTEXTTRANSFORM_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AnyTrans20250707
{
namespace Models
{
  class SubmitImageTranslateTaskRequestExtTextTransform : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitImageTranslateTaskRequestExtTextTransform& obj) { 
      DARABONBA_PTR_TO_JSON(toLower, toLower_);
      DARABONBA_PTR_TO_JSON(toTitle, toTitle_);
      DARABONBA_PTR_TO_JSON(toUpper, toUpper_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitImageTranslateTaskRequestExtTextTransform& obj) { 
      DARABONBA_PTR_FROM_JSON(toLower, toLower_);
      DARABONBA_PTR_FROM_JSON(toTitle, toTitle_);
      DARABONBA_PTR_FROM_JSON(toUpper, toUpper_);
    };
    SubmitImageTranslateTaskRequestExtTextTransform() = default ;
    SubmitImageTranslateTaskRequestExtTextTransform(const SubmitImageTranslateTaskRequestExtTextTransform &) = default ;
    SubmitImageTranslateTaskRequestExtTextTransform(SubmitImageTranslateTaskRequestExtTextTransform &&) = default ;
    SubmitImageTranslateTaskRequestExtTextTransform(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitImageTranslateTaskRequestExtTextTransform() = default ;
    SubmitImageTranslateTaskRequestExtTextTransform& operator=(const SubmitImageTranslateTaskRequestExtTextTransform &) = default ;
    SubmitImageTranslateTaskRequestExtTextTransform& operator=(SubmitImageTranslateTaskRequestExtTextTransform &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->toLower_ == nullptr
        && return this->toTitle_ == nullptr && return this->toUpper_ == nullptr; };
    // toLower Field Functions 
    bool hasToLower() const { return this->toLower_ != nullptr;};
    void deleteToLower() { this->toLower_ = nullptr;};
    inline bool toLower() const { DARABONBA_PTR_GET_DEFAULT(toLower_, false) };
    inline SubmitImageTranslateTaskRequestExtTextTransform& setToLower(bool toLower) { DARABONBA_PTR_SET_VALUE(toLower_, toLower) };


    // toTitle Field Functions 
    bool hasToTitle() const { return this->toTitle_ != nullptr;};
    void deleteToTitle() { this->toTitle_ = nullptr;};
    inline bool toTitle() const { DARABONBA_PTR_GET_DEFAULT(toTitle_, false) };
    inline SubmitImageTranslateTaskRequestExtTextTransform& setToTitle(bool toTitle) { DARABONBA_PTR_SET_VALUE(toTitle_, toTitle) };


    // toUpper Field Functions 
    bool hasToUpper() const { return this->toUpper_ != nullptr;};
    void deleteToUpper() { this->toUpper_ = nullptr;};
    inline bool toUpper() const { DARABONBA_PTR_GET_DEFAULT(toUpper_, false) };
    inline SubmitImageTranslateTaskRequestExtTextTransform& setToUpper(bool toUpper) { DARABONBA_PTR_SET_VALUE(toUpper_, toUpper) };


  protected:
    std::shared_ptr<bool> toLower_ = nullptr;
    std::shared_ptr<bool> toTitle_ = nullptr;
    std::shared_ptr<bool> toUpper_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AnyTrans20250707
#endif
