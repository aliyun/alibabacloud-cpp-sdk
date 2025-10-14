// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATETODOTASKRESPONSEBODYCONTENTFIELDLIST_HPP_
#define ALIBABACLOUD_MODELS_CREATETODOTASKRESPONSEBODYCONTENTFIELDLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class CreateTodoTaskResponseBodyContentFieldList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateTodoTaskResponseBodyContentFieldList& obj) { 
      DARABONBA_PTR_TO_JSON(fieldKey, fieldKey_);
      DARABONBA_PTR_TO_JSON(fieldValue, fieldValue_);
    };
    friend void from_json(const Darabonba::Json& j, CreateTodoTaskResponseBodyContentFieldList& obj) { 
      DARABONBA_PTR_FROM_JSON(fieldKey, fieldKey_);
      DARABONBA_PTR_FROM_JSON(fieldValue, fieldValue_);
    };
    CreateTodoTaskResponseBodyContentFieldList() = default ;
    CreateTodoTaskResponseBodyContentFieldList(const CreateTodoTaskResponseBodyContentFieldList &) = default ;
    CreateTodoTaskResponseBodyContentFieldList(CreateTodoTaskResponseBodyContentFieldList &&) = default ;
    CreateTodoTaskResponseBodyContentFieldList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateTodoTaskResponseBodyContentFieldList() = default ;
    CreateTodoTaskResponseBodyContentFieldList& operator=(const CreateTodoTaskResponseBodyContentFieldList &) = default ;
    CreateTodoTaskResponseBodyContentFieldList& operator=(CreateTodoTaskResponseBodyContentFieldList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->fieldKey_ == nullptr
        && return this->fieldValue_ == nullptr; };
    // fieldKey Field Functions 
    bool hasFieldKey() const { return this->fieldKey_ != nullptr;};
    void deleteFieldKey() { this->fieldKey_ = nullptr;};
    inline string fieldKey() const { DARABONBA_PTR_GET_DEFAULT(fieldKey_, "") };
    inline CreateTodoTaskResponseBodyContentFieldList& setFieldKey(string fieldKey) { DARABONBA_PTR_SET_VALUE(fieldKey_, fieldKey) };


    // fieldValue Field Functions 
    bool hasFieldValue() const { return this->fieldValue_ != nullptr;};
    void deleteFieldValue() { this->fieldValue_ = nullptr;};
    inline string fieldValue() const { DARABONBA_PTR_GET_DEFAULT(fieldValue_, "") };
    inline CreateTodoTaskResponseBodyContentFieldList& setFieldValue(string fieldValue) { DARABONBA_PTR_SET_VALUE(fieldValue_, fieldValue) };


  protected:
    // fieldKey
    std::shared_ptr<string> fieldKey_ = nullptr;
    // fieldValue
    std::shared_ptr<string> fieldValue_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
