// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SAVEMGSAPIRESTRESPONSEBODYRESULTCONTENT_HPP_
#define ALIBABACLOUD_MODELS_SAVEMGSAPIRESTRESPONSEBODYRESULTCONTENT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MPaaS20201028
{
namespace Models
{
  class SaveMgsApirestResponseBodyResultContent : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SaveMgsApirestResponseBodyResultContent& obj) { 
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(Value, value_);
    };
    friend void from_json(const Darabonba::Json& j, SaveMgsApirestResponseBodyResultContent& obj) { 
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(Value, value_);
    };
    SaveMgsApirestResponseBodyResultContent() = default ;
    SaveMgsApirestResponseBodyResultContent(const SaveMgsApirestResponseBodyResultContent &) = default ;
    SaveMgsApirestResponseBodyResultContent(SaveMgsApirestResponseBodyResultContent &&) = default ;
    SaveMgsApirestResponseBodyResultContent(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SaveMgsApirestResponseBodyResultContent() = default ;
    SaveMgsApirestResponseBodyResultContent& operator=(const SaveMgsApirestResponseBodyResultContent &) = default ;
    SaveMgsApirestResponseBodyResultContent& operator=(SaveMgsApirestResponseBodyResultContent &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->errorMessage_ != nullptr
        && this->success_ != nullptr && this->value_ != nullptr; };
    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string errorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline SaveMgsApirestResponseBodyResultContent& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline SaveMgsApirestResponseBodyResultContent& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline bool value() const { DARABONBA_PTR_GET_DEFAULT(value_, false) };
    inline SaveMgsApirestResponseBodyResultContent& setValue(bool value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    std::shared_ptr<string> errorMessage_ = nullptr;
    std::shared_ptr<bool> success_ = nullptr;
    std::shared_ptr<bool> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MPaaS20201028
#endif
