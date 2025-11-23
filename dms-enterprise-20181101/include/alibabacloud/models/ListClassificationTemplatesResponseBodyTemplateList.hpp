// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCLASSIFICATIONTEMPLATESRESPONSEBODYTEMPLATELIST_HPP_
#define ALIBABACLOUD_MODELS_LISTCLASSIFICATIONTEMPLATESRESPONSEBODYTEMPLATELIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class ListClassificationTemplatesResponseBodyTemplateList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListClassificationTemplatesResponseBodyTemplateList& obj) { 
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Remark, remark_);
      DARABONBA_PTR_TO_JSON(TemplateId, templateId_);
      DARABONBA_PTR_TO_JSON(TemplateType, templateType_);
    };
    friend void from_json(const Darabonba::Json& j, ListClassificationTemplatesResponseBodyTemplateList& obj) { 
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Remark, remark_);
      DARABONBA_PTR_FROM_JSON(TemplateId, templateId_);
      DARABONBA_PTR_FROM_JSON(TemplateType, templateType_);
    };
    ListClassificationTemplatesResponseBodyTemplateList() = default ;
    ListClassificationTemplatesResponseBodyTemplateList(const ListClassificationTemplatesResponseBodyTemplateList &) = default ;
    ListClassificationTemplatesResponseBodyTemplateList(ListClassificationTemplatesResponseBodyTemplateList &&) = default ;
    ListClassificationTemplatesResponseBodyTemplateList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListClassificationTemplatesResponseBodyTemplateList() = default ;
    ListClassificationTemplatesResponseBodyTemplateList& operator=(const ListClassificationTemplatesResponseBodyTemplateList &) = default ;
    ListClassificationTemplatesResponseBodyTemplateList& operator=(ListClassificationTemplatesResponseBodyTemplateList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->name_ == nullptr
        && return this->remark_ == nullptr && return this->templateId_ == nullptr && return this->templateType_ == nullptr; };
    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListClassificationTemplatesResponseBodyTemplateList& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // remark Field Functions 
    bool hasRemark() const { return this->remark_ != nullptr;};
    void deleteRemark() { this->remark_ = nullptr;};
    inline string remark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
    inline ListClassificationTemplatesResponseBodyTemplateList& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


    // templateId Field Functions 
    bool hasTemplateId() const { return this->templateId_ != nullptr;};
    void deleteTemplateId() { this->templateId_ = nullptr;};
    inline int64_t templateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, 0L) };
    inline ListClassificationTemplatesResponseBodyTemplateList& setTemplateId(int64_t templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


    // templateType Field Functions 
    bool hasTemplateType() const { return this->templateType_ != nullptr;};
    void deleteTemplateType() { this->templateType_ = nullptr;};
    inline string templateType() const { DARABONBA_PTR_GET_DEFAULT(templateType_, "") };
    inline ListClassificationTemplatesResponseBodyTemplateList& setTemplateType(string templateType) { DARABONBA_PTR_SET_VALUE(templateType_, templateType) };


  protected:
    // The name of the classification template.
    std::shared_ptr<string> name_ = nullptr;
    // The remarks.
    std::shared_ptr<string> remark_ = nullptr;
    // The ID of the classification template.
    std::shared_ptr<int64_t> templateId_ = nullptr;
    // The type of the classification template. Valid values:
    // 
    // *   **INNER**: built-in template
    // *   **USER_DEFINE**: custom template
    std::shared_ptr<string> templateType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
