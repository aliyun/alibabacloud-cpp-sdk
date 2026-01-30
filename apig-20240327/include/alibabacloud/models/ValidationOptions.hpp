// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_VALIDATIONOPTIONS_HPP_
#define ALIBABACLOUD_MODELS_VALIDATIONOPTIONS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class ValidationOptions : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ValidationOptions& obj) { 
      DARABONBA_PTR_TO_JSON(skipVerifyAIChatCompletion, skipVerifyAIChatCompletion_);
    };
    friend void from_json(const Darabonba::Json& j, ValidationOptions& obj) { 
      DARABONBA_PTR_FROM_JSON(skipVerifyAIChatCompletion, skipVerifyAIChatCompletion_);
    };
    ValidationOptions() = default ;
    ValidationOptions(const ValidationOptions &) = default ;
    ValidationOptions(ValidationOptions &&) = default ;
    ValidationOptions(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ValidationOptions() = default ;
    ValidationOptions& operator=(const ValidationOptions &) = default ;
    ValidationOptions& operator=(ValidationOptions &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->skipVerifyAIChatCompletion_ == nullptr; };
    // skipVerifyAIChatCompletion Field Functions 
    bool hasSkipVerifyAIChatCompletion() const { return this->skipVerifyAIChatCompletion_ != nullptr;};
    void deleteSkipVerifyAIChatCompletion() { this->skipVerifyAIChatCompletion_ = nullptr;};
    inline bool getSkipVerifyAIChatCompletion() const { DARABONBA_PTR_GET_DEFAULT(skipVerifyAIChatCompletion_, false) };
    inline ValidationOptions& setSkipVerifyAIChatCompletion(bool skipVerifyAIChatCompletion) { DARABONBA_PTR_SET_VALUE(skipVerifyAIChatCompletion_, skipVerifyAIChatCompletion) };


  protected:
    shared_ptr<bool> skipVerifyAIChatCompletion_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
