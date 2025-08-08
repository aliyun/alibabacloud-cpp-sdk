// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEAUTHORITYTEMPLATERESPONSEBODYAUTHORITYTEMPLATEVIEW_HPP_
#define ALIBABACLOUD_MODELS_UPDATEAUTHORITYTEMPLATERESPONSEBODYAUTHORITYTEMPLATEVIEW_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class UpdateAuthorityTemplateResponseBodyAuthorityTemplateView : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateAuthorityTemplateResponseBodyAuthorityTemplateView& obj) { 
      DARABONBA_PTR_TO_JSON(CreatorId, creatorId_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(TemplateId, templateId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateAuthorityTemplateResponseBodyAuthorityTemplateView& obj) { 
      DARABONBA_PTR_FROM_JSON(CreatorId, creatorId_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(TemplateId, templateId_);
    };
    UpdateAuthorityTemplateResponseBodyAuthorityTemplateView() = default ;
    UpdateAuthorityTemplateResponseBodyAuthorityTemplateView(const UpdateAuthorityTemplateResponseBodyAuthorityTemplateView &) = default ;
    UpdateAuthorityTemplateResponseBodyAuthorityTemplateView(UpdateAuthorityTemplateResponseBodyAuthorityTemplateView &&) = default ;
    UpdateAuthorityTemplateResponseBodyAuthorityTemplateView(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateAuthorityTemplateResponseBodyAuthorityTemplateView() = default ;
    UpdateAuthorityTemplateResponseBodyAuthorityTemplateView& operator=(const UpdateAuthorityTemplateResponseBodyAuthorityTemplateView &) = default ;
    UpdateAuthorityTemplateResponseBodyAuthorityTemplateView& operator=(UpdateAuthorityTemplateResponseBodyAuthorityTemplateView &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->creatorId_ != nullptr
        && this->description_ != nullptr && this->name_ != nullptr && this->templateId_ != nullptr; };
    // creatorId Field Functions 
    bool hasCreatorId() const { return this->creatorId_ != nullptr;};
    void deleteCreatorId() { this->creatorId_ = nullptr;};
    inline int64_t creatorId() const { DARABONBA_PTR_GET_DEFAULT(creatorId_, 0L) };
    inline UpdateAuthorityTemplateResponseBodyAuthorityTemplateView& setCreatorId(int64_t creatorId) { DARABONBA_PTR_SET_VALUE(creatorId_, creatorId) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline UpdateAuthorityTemplateResponseBodyAuthorityTemplateView& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline UpdateAuthorityTemplateResponseBodyAuthorityTemplateView& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // templateId Field Functions 
    bool hasTemplateId() const { return this->templateId_ != nullptr;};
    void deleteTemplateId() { this->templateId_ = nullptr;};
    inline int64_t templateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, 0L) };
    inline UpdateAuthorityTemplateResponseBodyAuthorityTemplateView& setTemplateId(int64_t templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


  protected:
    // The ID of the user who created the permission template.
    std::shared_ptr<int64_t> creatorId_ = nullptr;
    // The description of the permission template.
    std::shared_ptr<string> description_ = nullptr;
    // The name of the permission template.
    std::shared_ptr<string> name_ = nullptr;
    // The ID of the permission template.
    std::shared_ptr<int64_t> templateId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
