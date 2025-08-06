// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTEMPLATEGROUPRESPONSEBODYTEMPLATEGROUPS_HPP_
#define ALIBABACLOUD_MODELS_LISTTEMPLATEGROUPRESPONSEBODYTEMPLATEGROUPS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListTemplateGroupResponseBodyTemplateGroupsTemplateGroup.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class ListTemplateGroupResponseBodyTemplateGroups : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTemplateGroupResponseBodyTemplateGroups& obj) { 
      DARABONBA_PTR_TO_JSON(TemplateGroup, templateGroup_);
    };
    friend void from_json(const Darabonba::Json& j, ListTemplateGroupResponseBodyTemplateGroups& obj) { 
      DARABONBA_PTR_FROM_JSON(TemplateGroup, templateGroup_);
    };
    ListTemplateGroupResponseBodyTemplateGroups() = default ;
    ListTemplateGroupResponseBodyTemplateGroups(const ListTemplateGroupResponseBodyTemplateGroups &) = default ;
    ListTemplateGroupResponseBodyTemplateGroups(ListTemplateGroupResponseBodyTemplateGroups &&) = default ;
    ListTemplateGroupResponseBodyTemplateGroups(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTemplateGroupResponseBodyTemplateGroups() = default ;
    ListTemplateGroupResponseBodyTemplateGroups& operator=(const ListTemplateGroupResponseBodyTemplateGroups &) = default ;
    ListTemplateGroupResponseBodyTemplateGroups& operator=(ListTemplateGroupResponseBodyTemplateGroups &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->templateGroup_ != nullptr; };
    // templateGroup Field Functions 
    bool hasTemplateGroup() const { return this->templateGroup_ != nullptr;};
    void deleteTemplateGroup() { this->templateGroup_ = nullptr;};
    inline const vector<Models::ListTemplateGroupResponseBodyTemplateGroupsTemplateGroup> & templateGroup() const { DARABONBA_PTR_GET_CONST(templateGroup_, vector<Models::ListTemplateGroupResponseBodyTemplateGroupsTemplateGroup>) };
    inline vector<Models::ListTemplateGroupResponseBodyTemplateGroupsTemplateGroup> templateGroup() { DARABONBA_PTR_GET(templateGroup_, vector<Models::ListTemplateGroupResponseBodyTemplateGroupsTemplateGroup>) };
    inline ListTemplateGroupResponseBodyTemplateGroups& setTemplateGroup(const vector<Models::ListTemplateGroupResponseBodyTemplateGroupsTemplateGroup> & templateGroup) { DARABONBA_PTR_SET_VALUE(templateGroup_, templateGroup) };
    inline ListTemplateGroupResponseBodyTemplateGroups& setTemplateGroup(vector<Models::ListTemplateGroupResponseBodyTemplateGroupsTemplateGroup> && templateGroup) { DARABONBA_PTR_SET_RVALUE(templateGroup_, templateGroup) };


  protected:
    std::shared_ptr<vector<Models::ListTemplateGroupResponseBodyTemplateGroupsTemplateGroup>> templateGroup_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
