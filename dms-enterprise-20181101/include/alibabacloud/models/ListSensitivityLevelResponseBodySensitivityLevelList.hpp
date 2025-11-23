// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSENSITIVITYLEVELRESPONSEBODYSENSITIVITYLEVELLIST_HPP_
#define ALIBABACLOUD_MODELS_LISTSENSITIVITYLEVELRESPONSEBODYSENSITIVITYLEVELLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class ListSensitivityLevelResponseBodySensitivityLevelList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSensitivityLevelResponseBodySensitivityLevelList& obj) { 
      DARABONBA_PTR_TO_JSON(IsPlain, isPlain_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(TemplateId, templateId_);
      DARABONBA_PTR_TO_JSON(TemplateType, templateType_);
    };
    friend void from_json(const Darabonba::Json& j, ListSensitivityLevelResponseBodySensitivityLevelList& obj) { 
      DARABONBA_PTR_FROM_JSON(IsPlain, isPlain_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(TemplateId, templateId_);
      DARABONBA_PTR_FROM_JSON(TemplateType, templateType_);
    };
    ListSensitivityLevelResponseBodySensitivityLevelList() = default ;
    ListSensitivityLevelResponseBodySensitivityLevelList(const ListSensitivityLevelResponseBodySensitivityLevelList &) = default ;
    ListSensitivityLevelResponseBodySensitivityLevelList(ListSensitivityLevelResponseBodySensitivityLevelList &&) = default ;
    ListSensitivityLevelResponseBodySensitivityLevelList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSensitivityLevelResponseBodySensitivityLevelList() = default ;
    ListSensitivityLevelResponseBodySensitivityLevelList& operator=(const ListSensitivityLevelResponseBodySensitivityLevelList &) = default ;
    ListSensitivityLevelResponseBodySensitivityLevelList& operator=(ListSensitivityLevelResponseBodySensitivityLevelList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->isPlain_ == nullptr
        && return this->name_ == nullptr && return this->templateId_ == nullptr && return this->templateType_ == nullptr; };
    // isPlain Field Functions 
    bool hasIsPlain() const { return this->isPlain_ != nullptr;};
    void deleteIsPlain() { this->isPlain_ = nullptr;};
    inline bool isPlain() const { DARABONBA_PTR_GET_DEFAULT(isPlain_, false) };
    inline ListSensitivityLevelResponseBodySensitivityLevelList& setIsPlain(bool isPlain) { DARABONBA_PTR_SET_VALUE(isPlain_, isPlain) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListSensitivityLevelResponseBodySensitivityLevelList& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // templateId Field Functions 
    bool hasTemplateId() const { return this->templateId_ != nullptr;};
    void deleteTemplateId() { this->templateId_ = nullptr;};
    inline string templateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, "") };
    inline ListSensitivityLevelResponseBodySensitivityLevelList& setTemplateId(string templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


    // templateType Field Functions 
    bool hasTemplateType() const { return this->templateType_ != nullptr;};
    void deleteTemplateType() { this->templateType_ = nullptr;};
    inline string templateType() const { DARABONBA_PTR_GET_DEFAULT(templateType_, "") };
    inline ListSensitivityLevelResponseBodySensitivityLevelList& setTemplateType(string templateType) { DARABONBA_PTR_SET_VALUE(templateType_, templateType) };


  protected:
    // Indicates whether the fields of the sensitive level are displayed in plaintext.
    std::shared_ptr<bool> isPlain_ = nullptr;
    // The name of the sensitive level.
    std::shared_ptr<string> name_ = nullptr;
    // The ID of the classification template.
    std::shared_ptr<string> templateId_ = nullptr;
    // The type of the classification template. Valid values:
    // 
    // *   **INNER**: a built-in template.
    // *   **USER_DEFINE**: a custom template.
    std::shared_ptr<string> templateType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
