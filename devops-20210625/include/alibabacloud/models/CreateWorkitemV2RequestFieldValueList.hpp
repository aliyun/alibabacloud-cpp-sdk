// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEWORKITEMV2REQUESTFIELDVALUELIST_HPP_
#define ALIBABACLOUD_MODELS_CREATEWORKITEMV2REQUESTFIELDVALUELIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devops20210625
{
namespace Models
{
  class CreateWorkitemV2RequestFieldValueList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateWorkitemV2RequestFieldValueList& obj) { 
      DARABONBA_PTR_TO_JSON(fieldIdentifier, fieldIdentifier_);
      DARABONBA_PTR_TO_JSON(value, value_);
    };
    friend void from_json(const Darabonba::Json& j, CreateWorkitemV2RequestFieldValueList& obj) { 
      DARABONBA_PTR_FROM_JSON(fieldIdentifier, fieldIdentifier_);
      DARABONBA_PTR_FROM_JSON(value, value_);
    };
    CreateWorkitemV2RequestFieldValueList() = default ;
    CreateWorkitemV2RequestFieldValueList(const CreateWorkitemV2RequestFieldValueList &) = default ;
    CreateWorkitemV2RequestFieldValueList(CreateWorkitemV2RequestFieldValueList &&) = default ;
    CreateWorkitemV2RequestFieldValueList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateWorkitemV2RequestFieldValueList() = default ;
    CreateWorkitemV2RequestFieldValueList& operator=(const CreateWorkitemV2RequestFieldValueList &) = default ;
    CreateWorkitemV2RequestFieldValueList& operator=(CreateWorkitemV2RequestFieldValueList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->fieldIdentifier_ == nullptr
        && return this->value_ == nullptr; };
    // fieldIdentifier Field Functions 
    bool hasFieldIdentifier() const { return this->fieldIdentifier_ != nullptr;};
    void deleteFieldIdentifier() { this->fieldIdentifier_ = nullptr;};
    inline string fieldIdentifier() const { DARABONBA_PTR_GET_DEFAULT(fieldIdentifier_, "") };
    inline CreateWorkitemV2RequestFieldValueList& setFieldIdentifier(string fieldIdentifier) { DARABONBA_PTR_SET_VALUE(fieldIdentifier_, fieldIdentifier) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string value() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline CreateWorkitemV2RequestFieldValueList& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    std::shared_ptr<string> fieldIdentifier_ = nullptr;
    std::shared_ptr<string> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devops20210625
#endif
