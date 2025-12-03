// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTESTRESULTLISTRESPONSEBODYTESTRESULTCUSTOMFIELDS_HPP_
#define ALIBABACLOUD_MODELS_GETTESTRESULTLISTRESPONSEBODYTESTRESULTCUSTOMFIELDS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devops20210625
{
namespace Models
{
  class GetTestResultListResponseBodyTestResultCustomFields : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetTestResultListResponseBodyTestResultCustomFields& obj) { 
      DARABONBA_PTR_TO_JSON(fieldClassName, fieldClassName_);
      DARABONBA_PTR_TO_JSON(fieldFormat, fieldFormat_);
      DARABONBA_PTR_TO_JSON(fieldIdentifier, fieldIdentifier_);
      DARABONBA_PTR_TO_JSON(value, value_);
    };
    friend void from_json(const Darabonba::Json& j, GetTestResultListResponseBodyTestResultCustomFields& obj) { 
      DARABONBA_PTR_FROM_JSON(fieldClassName, fieldClassName_);
      DARABONBA_PTR_FROM_JSON(fieldFormat, fieldFormat_);
      DARABONBA_PTR_FROM_JSON(fieldIdentifier, fieldIdentifier_);
      DARABONBA_PTR_FROM_JSON(value, value_);
    };
    GetTestResultListResponseBodyTestResultCustomFields() = default ;
    GetTestResultListResponseBodyTestResultCustomFields(const GetTestResultListResponseBodyTestResultCustomFields &) = default ;
    GetTestResultListResponseBodyTestResultCustomFields(GetTestResultListResponseBodyTestResultCustomFields &&) = default ;
    GetTestResultListResponseBodyTestResultCustomFields(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetTestResultListResponseBodyTestResultCustomFields() = default ;
    GetTestResultListResponseBodyTestResultCustomFields& operator=(const GetTestResultListResponseBodyTestResultCustomFields &) = default ;
    GetTestResultListResponseBodyTestResultCustomFields& operator=(GetTestResultListResponseBodyTestResultCustomFields &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->fieldClassName_ == nullptr
        && return this->fieldFormat_ == nullptr && return this->fieldIdentifier_ == nullptr && return this->value_ == nullptr; };
    // fieldClassName Field Functions 
    bool hasFieldClassName() const { return this->fieldClassName_ != nullptr;};
    void deleteFieldClassName() { this->fieldClassName_ = nullptr;};
    inline string fieldClassName() const { DARABONBA_PTR_GET_DEFAULT(fieldClassName_, "") };
    inline GetTestResultListResponseBodyTestResultCustomFields& setFieldClassName(string fieldClassName) { DARABONBA_PTR_SET_VALUE(fieldClassName_, fieldClassName) };


    // fieldFormat Field Functions 
    bool hasFieldFormat() const { return this->fieldFormat_ != nullptr;};
    void deleteFieldFormat() { this->fieldFormat_ = nullptr;};
    inline string fieldFormat() const { DARABONBA_PTR_GET_DEFAULT(fieldFormat_, "") };
    inline GetTestResultListResponseBodyTestResultCustomFields& setFieldFormat(string fieldFormat) { DARABONBA_PTR_SET_VALUE(fieldFormat_, fieldFormat) };


    // fieldIdentifier Field Functions 
    bool hasFieldIdentifier() const { return this->fieldIdentifier_ != nullptr;};
    void deleteFieldIdentifier() { this->fieldIdentifier_ = nullptr;};
    inline string fieldIdentifier() const { DARABONBA_PTR_GET_DEFAULT(fieldIdentifier_, "") };
    inline GetTestResultListResponseBodyTestResultCustomFields& setFieldIdentifier(string fieldIdentifier) { DARABONBA_PTR_SET_VALUE(fieldIdentifier_, fieldIdentifier) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string value() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline GetTestResultListResponseBodyTestResultCustomFields& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    std::shared_ptr<string> fieldClassName_ = nullptr;
    std::shared_ptr<string> fieldFormat_ = nullptr;
    std::shared_ptr<string> fieldIdentifier_ = nullptr;
    std::shared_ptr<string> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devops20210625
#endif
