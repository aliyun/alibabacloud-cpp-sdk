// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETADDONSCHEMARESPONSEBODYFIELDSVALIDATION_HPP_
#define ALIBABACLOUD_MODELS_GETADDONSCHEMARESPONSEBODYFIELDSVALIDATION_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class GetAddonSchemaResponseBodyFieldsValidation : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAddonSchemaResponseBodyFieldsValidation& obj) { 
      DARABONBA_PTR_TO_JSON(max, max_);
      DARABONBA_PTR_TO_JSON(maxLength, maxLength_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(min, min_);
      DARABONBA_PTR_TO_JSON(minLength, minLength_);
      DARABONBA_PTR_TO_JSON(regular, regular_);
      DARABONBA_PTR_TO_JSON(required, required_);
    };
    friend void from_json(const Darabonba::Json& j, GetAddonSchemaResponseBodyFieldsValidation& obj) { 
      DARABONBA_PTR_FROM_JSON(max, max_);
      DARABONBA_PTR_FROM_JSON(maxLength, maxLength_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(min, min_);
      DARABONBA_PTR_FROM_JSON(minLength, minLength_);
      DARABONBA_PTR_FROM_JSON(regular, regular_);
      DARABONBA_PTR_FROM_JSON(required, required_);
    };
    GetAddonSchemaResponseBodyFieldsValidation() = default ;
    GetAddonSchemaResponseBodyFieldsValidation(const GetAddonSchemaResponseBodyFieldsValidation &) = default ;
    GetAddonSchemaResponseBodyFieldsValidation(GetAddonSchemaResponseBodyFieldsValidation &&) = default ;
    GetAddonSchemaResponseBodyFieldsValidation(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAddonSchemaResponseBodyFieldsValidation() = default ;
    GetAddonSchemaResponseBodyFieldsValidation& operator=(const GetAddonSchemaResponseBodyFieldsValidation &) = default ;
    GetAddonSchemaResponseBodyFieldsValidation& operator=(GetAddonSchemaResponseBodyFieldsValidation &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->max_ == nullptr
        && return this->maxLength_ == nullptr && return this->message_ == nullptr && return this->min_ == nullptr && return this->minLength_ == nullptr && return this->regular_ == nullptr
        && return this->required_ == nullptr; };
    // max Field Functions 
    bool hasMax() const { return this->max_ != nullptr;};
    void deleteMax() { this->max_ = nullptr;};
    inline int32_t max() const { DARABONBA_PTR_GET_DEFAULT(max_, 0) };
    inline GetAddonSchemaResponseBodyFieldsValidation& setMax(int32_t max) { DARABONBA_PTR_SET_VALUE(max_, max) };


    // maxLength Field Functions 
    bool hasMaxLength() const { return this->maxLength_ != nullptr;};
    void deleteMaxLength() { this->maxLength_ = nullptr;};
    inline int32_t maxLength() const { DARABONBA_PTR_GET_DEFAULT(maxLength_, 0) };
    inline GetAddonSchemaResponseBodyFieldsValidation& setMaxLength(int32_t maxLength) { DARABONBA_PTR_SET_VALUE(maxLength_, maxLength) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetAddonSchemaResponseBodyFieldsValidation& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // min Field Functions 
    bool hasMin() const { return this->min_ != nullptr;};
    void deleteMin() { this->min_ = nullptr;};
    inline int32_t min() const { DARABONBA_PTR_GET_DEFAULT(min_, 0) };
    inline GetAddonSchemaResponseBodyFieldsValidation& setMin(int32_t min) { DARABONBA_PTR_SET_VALUE(min_, min) };


    // minLength Field Functions 
    bool hasMinLength() const { return this->minLength_ != nullptr;};
    void deleteMinLength() { this->minLength_ = nullptr;};
    inline int32_t minLength() const { DARABONBA_PTR_GET_DEFAULT(minLength_, 0) };
    inline GetAddonSchemaResponseBodyFieldsValidation& setMinLength(int32_t minLength) { DARABONBA_PTR_SET_VALUE(minLength_, minLength) };


    // regular Field Functions 
    bool hasRegular() const { return this->regular_ != nullptr;};
    void deleteRegular() { this->regular_ = nullptr;};
    inline string regular() const { DARABONBA_PTR_GET_DEFAULT(regular_, "") };
    inline GetAddonSchemaResponseBodyFieldsValidation& setRegular(string regular) { DARABONBA_PTR_SET_VALUE(regular_, regular) };


    // required Field Functions 
    bool hasRequired() const { return this->required_ != nullptr;};
    void deleteRequired() { this->required_ = nullptr;};
    inline bool required() const { DARABONBA_PTR_GET_DEFAULT(required_, false) };
    inline GetAddonSchemaResponseBodyFieldsValidation& setRequired(bool required) { DARABONBA_PTR_SET_VALUE(required_, required) };


  protected:
    std::shared_ptr<int32_t> max_ = nullptr;
    std::shared_ptr<int32_t> maxLength_ = nullptr;
    std::shared_ptr<string> message_ = nullptr;
    std::shared_ptr<int32_t> min_ = nullptr;
    std::shared_ptr<int32_t> minLength_ = nullptr;
    std::shared_ptr<string> regular_ = nullptr;
    std::shared_ptr<bool> required_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
