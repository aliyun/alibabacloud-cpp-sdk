// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEWORKITEMREQUESTFIELDVALUELIST_HPP_
#define ALIBABACLOUD_MODELS_CREATEWORKITEMREQUESTFIELDVALUELIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devops20210625
{
namespace Models
{
  class CreateWorkitemRequestFieldValueList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateWorkitemRequestFieldValueList& obj) { 
      DARABONBA_PTR_TO_JSON(fieldIdentifier, fieldIdentifier_);
      DARABONBA_PTR_TO_JSON(value, value_);
      DARABONBA_PTR_TO_JSON(workitemIdentifier, workitemIdentifier_);
    };
    friend void from_json(const Darabonba::Json& j, CreateWorkitemRequestFieldValueList& obj) { 
      DARABONBA_PTR_FROM_JSON(fieldIdentifier, fieldIdentifier_);
      DARABONBA_PTR_FROM_JSON(value, value_);
      DARABONBA_PTR_FROM_JSON(workitemIdentifier, workitemIdentifier_);
    };
    CreateWorkitemRequestFieldValueList() = default ;
    CreateWorkitemRequestFieldValueList(const CreateWorkitemRequestFieldValueList &) = default ;
    CreateWorkitemRequestFieldValueList(CreateWorkitemRequestFieldValueList &&) = default ;
    CreateWorkitemRequestFieldValueList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateWorkitemRequestFieldValueList() = default ;
    CreateWorkitemRequestFieldValueList& operator=(const CreateWorkitemRequestFieldValueList &) = default ;
    CreateWorkitemRequestFieldValueList& operator=(CreateWorkitemRequestFieldValueList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->fieldIdentifier_ == nullptr
        && return this->value_ == nullptr && return this->workitemIdentifier_ == nullptr; };
    // fieldIdentifier Field Functions 
    bool hasFieldIdentifier() const { return this->fieldIdentifier_ != nullptr;};
    void deleteFieldIdentifier() { this->fieldIdentifier_ = nullptr;};
    inline string fieldIdentifier() const { DARABONBA_PTR_GET_DEFAULT(fieldIdentifier_, "") };
    inline CreateWorkitemRequestFieldValueList& setFieldIdentifier(string fieldIdentifier) { DARABONBA_PTR_SET_VALUE(fieldIdentifier_, fieldIdentifier) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string value() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline CreateWorkitemRequestFieldValueList& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


    // workitemIdentifier Field Functions 
    bool hasWorkitemIdentifier() const { return this->workitemIdentifier_ != nullptr;};
    void deleteWorkitemIdentifier() { this->workitemIdentifier_ = nullptr;};
    inline string workitemIdentifier() const { DARABONBA_PTR_GET_DEFAULT(workitemIdentifier_, "") };
    inline CreateWorkitemRequestFieldValueList& setWorkitemIdentifier(string workitemIdentifier) { DARABONBA_PTR_SET_VALUE(workitemIdentifier_, workitemIdentifier) };


  protected:
    std::shared_ptr<string> fieldIdentifier_ = nullptr;
    std::shared_ptr<string> value_ = nullptr;
    std::shared_ptr<string> workitemIdentifier_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devops20210625
#endif
