// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETFORMCOMPONENTDEFINITIONLISTRESPONSEBODYRESULT_HPP_
#define ALIBABACLOUD_MODELS_GETFORMCOMPONENTDEFINITIONLISTRESPONSEBODYRESULT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class GetFormComponentDefinitionListResponseBodyResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetFormComponentDefinitionListResponseBodyResult& obj) { 
      DARABONBA_PTR_TO_JSON(ComponentName, componentName_);
      DARABONBA_PTR_TO_JSON(FieldId, fieldId_);
      DARABONBA_PTR_TO_JSON(Label, label_);
      DARABONBA_PTR_TO_JSON(ParentId, parentId_);
    };
    friend void from_json(const Darabonba::Json& j, GetFormComponentDefinitionListResponseBodyResult& obj) { 
      DARABONBA_PTR_FROM_JSON(ComponentName, componentName_);
      DARABONBA_PTR_FROM_JSON(FieldId, fieldId_);
      DARABONBA_PTR_FROM_JSON(Label, label_);
      DARABONBA_PTR_FROM_JSON(ParentId, parentId_);
    };
    GetFormComponentDefinitionListResponseBodyResult() = default ;
    GetFormComponentDefinitionListResponseBodyResult(const GetFormComponentDefinitionListResponseBodyResult &) = default ;
    GetFormComponentDefinitionListResponseBodyResult(GetFormComponentDefinitionListResponseBodyResult &&) = default ;
    GetFormComponentDefinitionListResponseBodyResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetFormComponentDefinitionListResponseBodyResult() = default ;
    GetFormComponentDefinitionListResponseBodyResult& operator=(const GetFormComponentDefinitionListResponseBodyResult &) = default ;
    GetFormComponentDefinitionListResponseBodyResult& operator=(GetFormComponentDefinitionListResponseBodyResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->componentName_ != nullptr
        && this->fieldId_ != nullptr && this->label_ != nullptr && this->parentId_ != nullptr; };
    // componentName Field Functions 
    bool hasComponentName() const { return this->componentName_ != nullptr;};
    void deleteComponentName() { this->componentName_ = nullptr;};
    inline string componentName() const { DARABONBA_PTR_GET_DEFAULT(componentName_, "") };
    inline GetFormComponentDefinitionListResponseBodyResult& setComponentName(string componentName) { DARABONBA_PTR_SET_VALUE(componentName_, componentName) };


    // fieldId Field Functions 
    bool hasFieldId() const { return this->fieldId_ != nullptr;};
    void deleteFieldId() { this->fieldId_ = nullptr;};
    inline string fieldId() const { DARABONBA_PTR_GET_DEFAULT(fieldId_, "") };
    inline GetFormComponentDefinitionListResponseBodyResult& setFieldId(string fieldId) { DARABONBA_PTR_SET_VALUE(fieldId_, fieldId) };


    // label Field Functions 
    bool hasLabel() const { return this->label_ != nullptr;};
    void deleteLabel() { this->label_ = nullptr;};
    inline string label() const { DARABONBA_PTR_GET_DEFAULT(label_, "") };
    inline GetFormComponentDefinitionListResponseBodyResult& setLabel(string label) { DARABONBA_PTR_SET_VALUE(label_, label) };


    // parentId Field Functions 
    bool hasParentId() const { return this->parentId_ != nullptr;};
    void deleteParentId() { this->parentId_ = nullptr;};
    inline string parentId() const { DARABONBA_PTR_GET_DEFAULT(parentId_, "") };
    inline GetFormComponentDefinitionListResponseBodyResult& setParentId(string parentId) { DARABONBA_PTR_SET_VALUE(parentId_, parentId) };


  protected:
    std::shared_ptr<string> componentName_ = nullptr;
    std::shared_ptr<string> fieldId_ = nullptr;
    std::shared_ptr<string> label_ = nullptr;
    std::shared_ptr<string> parentId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
