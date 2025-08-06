// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTEMPLATEGROUPCONSOLERESPONSEBODYTEMPLATEGROUPS_HPP_
#define ALIBABACLOUD_MODELS_LISTTEMPLATEGROUPCONSOLERESPONSEBODYTEMPLATEGROUPS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListTemplateGroupConsoleResponseBodyTemplateGroupsTemplateGroup.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class ListTemplateGroupConsoleResponseBodyTemplateGroups : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTemplateGroupConsoleResponseBodyTemplateGroups& obj) { 
      DARABONBA_PTR_TO_JSON(TemplateGroup, templateGroup_);
    };
    friend void from_json(const Darabonba::Json& j, ListTemplateGroupConsoleResponseBodyTemplateGroups& obj) { 
      DARABONBA_PTR_FROM_JSON(TemplateGroup, templateGroup_);
    };
    ListTemplateGroupConsoleResponseBodyTemplateGroups() = default ;
    ListTemplateGroupConsoleResponseBodyTemplateGroups(const ListTemplateGroupConsoleResponseBodyTemplateGroups &) = default ;
    ListTemplateGroupConsoleResponseBodyTemplateGroups(ListTemplateGroupConsoleResponseBodyTemplateGroups &&) = default ;
    ListTemplateGroupConsoleResponseBodyTemplateGroups(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTemplateGroupConsoleResponseBodyTemplateGroups() = default ;
    ListTemplateGroupConsoleResponseBodyTemplateGroups& operator=(const ListTemplateGroupConsoleResponseBodyTemplateGroups &) = default ;
    ListTemplateGroupConsoleResponseBodyTemplateGroups& operator=(ListTemplateGroupConsoleResponseBodyTemplateGroups &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->templateGroup_ != nullptr; };
    // templateGroup Field Functions 
    bool hasTemplateGroup() const { return this->templateGroup_ != nullptr;};
    void deleteTemplateGroup() { this->templateGroup_ = nullptr;};
    inline const vector<Models::ListTemplateGroupConsoleResponseBodyTemplateGroupsTemplateGroup> & templateGroup() const { DARABONBA_PTR_GET_CONST(templateGroup_, vector<Models::ListTemplateGroupConsoleResponseBodyTemplateGroupsTemplateGroup>) };
    inline vector<Models::ListTemplateGroupConsoleResponseBodyTemplateGroupsTemplateGroup> templateGroup() { DARABONBA_PTR_GET(templateGroup_, vector<Models::ListTemplateGroupConsoleResponseBodyTemplateGroupsTemplateGroup>) };
    inline ListTemplateGroupConsoleResponseBodyTemplateGroups& setTemplateGroup(const vector<Models::ListTemplateGroupConsoleResponseBodyTemplateGroupsTemplateGroup> & templateGroup) { DARABONBA_PTR_SET_VALUE(templateGroup_, templateGroup) };
    inline ListTemplateGroupConsoleResponseBodyTemplateGroups& setTemplateGroup(vector<Models::ListTemplateGroupConsoleResponseBodyTemplateGroupsTemplateGroup> && templateGroup) { DARABONBA_PTR_SET_RVALUE(templateGroup_, templateGroup) };


  protected:
    std::shared_ptr<vector<Models::ListTemplateGroupConsoleResponseBodyTemplateGroupsTemplateGroup>> templateGroup_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
