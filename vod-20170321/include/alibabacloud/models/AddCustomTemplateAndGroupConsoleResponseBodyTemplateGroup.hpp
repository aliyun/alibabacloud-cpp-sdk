// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDCUSTOMTEMPLATEANDGROUPCONSOLERESPONSEBODYTEMPLATEGROUP_HPP_
#define ALIBABACLOUD_MODELS_ADDCUSTOMTEMPLATEANDGROUPCONSOLERESPONSEBODYTEMPLATEGROUP_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class AddCustomTemplateAndGroupConsoleResponseBodyTemplateGroup : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddCustomTemplateAndGroupConsoleResponseBodyTemplateGroup& obj) { 
      DARABONBA_PTR_TO_JSON(TemplateGroupId, templateGroupId_);
    };
    friend void from_json(const Darabonba::Json& j, AddCustomTemplateAndGroupConsoleResponseBodyTemplateGroup& obj) { 
      DARABONBA_PTR_FROM_JSON(TemplateGroupId, templateGroupId_);
    };
    AddCustomTemplateAndGroupConsoleResponseBodyTemplateGroup() = default ;
    AddCustomTemplateAndGroupConsoleResponseBodyTemplateGroup(const AddCustomTemplateAndGroupConsoleResponseBodyTemplateGroup &) = default ;
    AddCustomTemplateAndGroupConsoleResponseBodyTemplateGroup(AddCustomTemplateAndGroupConsoleResponseBodyTemplateGroup &&) = default ;
    AddCustomTemplateAndGroupConsoleResponseBodyTemplateGroup(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddCustomTemplateAndGroupConsoleResponseBodyTemplateGroup() = default ;
    AddCustomTemplateAndGroupConsoleResponseBodyTemplateGroup& operator=(const AddCustomTemplateAndGroupConsoleResponseBodyTemplateGroup &) = default ;
    AddCustomTemplateAndGroupConsoleResponseBodyTemplateGroup& operator=(AddCustomTemplateAndGroupConsoleResponseBodyTemplateGroup &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->templateGroupId_ != nullptr; };
    // templateGroupId Field Functions 
    bool hasTemplateGroupId() const { return this->templateGroupId_ != nullptr;};
    void deleteTemplateGroupId() { this->templateGroupId_ = nullptr;};
    inline string templateGroupId() const { DARABONBA_PTR_GET_DEFAULT(templateGroupId_, "") };
    inline AddCustomTemplateAndGroupConsoleResponseBodyTemplateGroup& setTemplateGroupId(string templateGroupId) { DARABONBA_PTR_SET_VALUE(templateGroupId_, templateGroupId) };


  protected:
    std::shared_ptr<string> templateGroupId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
