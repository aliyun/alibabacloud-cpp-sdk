// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETFIELDDEFBYUUIDRESPONSEBODYRESULT_HPP_
#define ALIBABACLOUD_MODELS_GETFIELDDEFBYUUIDRESPONSEBODYRESULT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class GetFieldDefByUuidResponseBodyResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetFieldDefByUuidResponseBodyResult& obj) { 
      DARABONBA_PTR_TO_JSON(Behavior, behavior_);
      DARABONBA_PTR_TO_JSON(Children, children_);
      DARABONBA_PTR_TO_JSON(ComponentName, componentName_);
      DARABONBA_PTR_TO_JSON(FieldId, fieldId_);
      DARABONBA_ANY_TO_JSON(Label, label_);
      DARABONBA_ANY_TO_JSON(Props, props_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetFieldDefByUuidResponseBodyResult& obj) { 
      DARABONBA_PTR_FROM_JSON(Behavior, behavior_);
      DARABONBA_PTR_FROM_JSON(Children, children_);
      DARABONBA_PTR_FROM_JSON(ComponentName, componentName_);
      DARABONBA_PTR_FROM_JSON(FieldId, fieldId_);
      DARABONBA_ANY_FROM_JSON(Label, label_);
      DARABONBA_ANY_FROM_JSON(Props, props_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetFieldDefByUuidResponseBodyResult() = default ;
    GetFieldDefByUuidResponseBodyResult(const GetFieldDefByUuidResponseBodyResult &) = default ;
    GetFieldDefByUuidResponseBodyResult(GetFieldDefByUuidResponseBodyResult &&) = default ;
    GetFieldDefByUuidResponseBodyResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetFieldDefByUuidResponseBodyResult() = default ;
    GetFieldDefByUuidResponseBodyResult& operator=(const GetFieldDefByUuidResponseBodyResult &) = default ;
    GetFieldDefByUuidResponseBodyResult& operator=(GetFieldDefByUuidResponseBodyResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->behavior_ != nullptr
        && this->children_ != nullptr && this->componentName_ != nullptr && this->fieldId_ != nullptr && this->label_ != nullptr && this->props_ != nullptr
        && this->success_ != nullptr; };
    // behavior Field Functions 
    bool hasBehavior() const { return this->behavior_ != nullptr;};
    void deleteBehavior() { this->behavior_ = nullptr;};
    inline string behavior() const { DARABONBA_PTR_GET_DEFAULT(behavior_, "") };
    inline GetFieldDefByUuidResponseBodyResult& setBehavior(string behavior) { DARABONBA_PTR_SET_VALUE(behavior_, behavior) };


    // children Field Functions 
    bool hasChildren() const { return this->children_ != nullptr;};
    void deleteChildren() { this->children_ = nullptr;};
    inline string children() const { DARABONBA_PTR_GET_DEFAULT(children_, "") };
    inline GetFieldDefByUuidResponseBodyResult& setChildren(string children) { DARABONBA_PTR_SET_VALUE(children_, children) };


    // componentName Field Functions 
    bool hasComponentName() const { return this->componentName_ != nullptr;};
    void deleteComponentName() { this->componentName_ = nullptr;};
    inline string componentName() const { DARABONBA_PTR_GET_DEFAULT(componentName_, "") };
    inline GetFieldDefByUuidResponseBodyResult& setComponentName(string componentName) { DARABONBA_PTR_SET_VALUE(componentName_, componentName) };


    // fieldId Field Functions 
    bool hasFieldId() const { return this->fieldId_ != nullptr;};
    void deleteFieldId() { this->fieldId_ = nullptr;};
    inline string fieldId() const { DARABONBA_PTR_GET_DEFAULT(fieldId_, "") };
    inline GetFieldDefByUuidResponseBodyResult& setFieldId(string fieldId) { DARABONBA_PTR_SET_VALUE(fieldId_, fieldId) };


    // label Field Functions 
    bool hasLabel() const { return this->label_ != nullptr;};
    void deleteLabel() { this->label_ = nullptr;};
    inline     const Darabonba::Json & label() const { DARABONBA_GET(label_) };
    Darabonba::Json & label() { DARABONBA_GET(label_) };
    inline GetFieldDefByUuidResponseBodyResult& setLabel(const Darabonba::Json & label) { DARABONBA_SET_VALUE(label_, label) };
    inline GetFieldDefByUuidResponseBodyResult& setLabel(Darabonba::Json & label) { DARABONBA_SET_RVALUE(label_, label) };


    // props Field Functions 
    bool hasProps() const { return this->props_ != nullptr;};
    void deleteProps() { this->props_ = nullptr;};
    inline     const Darabonba::Json & props() const { DARABONBA_GET(props_) };
    Darabonba::Json & props() { DARABONBA_GET(props_) };
    inline GetFieldDefByUuidResponseBodyResult& setProps(const Darabonba::Json & props) { DARABONBA_SET_VALUE(props_, props) };
    inline GetFieldDefByUuidResponseBodyResult& setProps(Darabonba::Json & props) { DARABONBA_SET_RVALUE(props_, props) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetFieldDefByUuidResponseBodyResult& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    std::shared_ptr<string> behavior_ = nullptr;
    std::shared_ptr<string> children_ = nullptr;
    std::shared_ptr<string> componentName_ = nullptr;
    std::shared_ptr<string> fieldId_ = nullptr;
    Darabonba::Json label_ = nullptr;
    Darabonba::Json props_ = nullptr;
    std::shared_ptr<bool> success_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
