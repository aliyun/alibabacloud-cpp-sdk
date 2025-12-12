// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSESSIONGROUPRESPONSEBODYDATADATASKILLGROUPNAMELIST_HPP_
#define ALIBABACLOUD_MODELS_LISTSESSIONGROUPRESPONSEBODYDATADATASKILLGROUPNAMELIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Qualitycheck20190115
{
namespace Models
{
  class ListSessionGroupResponseBodyDataDataSkillGroupNameList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSessionGroupResponseBodyDataDataSkillGroupNameList& obj) { 
      DARABONBA_PTR_TO_JSON(SkillGroupNameList, skillGroupNameList_);
    };
    friend void from_json(const Darabonba::Json& j, ListSessionGroupResponseBodyDataDataSkillGroupNameList& obj) { 
      DARABONBA_PTR_FROM_JSON(SkillGroupNameList, skillGroupNameList_);
    };
    ListSessionGroupResponseBodyDataDataSkillGroupNameList() = default ;
    ListSessionGroupResponseBodyDataDataSkillGroupNameList(const ListSessionGroupResponseBodyDataDataSkillGroupNameList &) = default ;
    ListSessionGroupResponseBodyDataDataSkillGroupNameList(ListSessionGroupResponseBodyDataDataSkillGroupNameList &&) = default ;
    ListSessionGroupResponseBodyDataDataSkillGroupNameList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSessionGroupResponseBodyDataDataSkillGroupNameList() = default ;
    ListSessionGroupResponseBodyDataDataSkillGroupNameList& operator=(const ListSessionGroupResponseBodyDataDataSkillGroupNameList &) = default ;
    ListSessionGroupResponseBodyDataDataSkillGroupNameList& operator=(ListSessionGroupResponseBodyDataDataSkillGroupNameList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->skillGroupNameList_ == nullptr; };
    // skillGroupNameList Field Functions 
    bool hasSkillGroupNameList() const { return this->skillGroupNameList_ != nullptr;};
    void deleteSkillGroupNameList() { this->skillGroupNameList_ = nullptr;};
    inline const vector<string> & skillGroupNameList() const { DARABONBA_PTR_GET_CONST(skillGroupNameList_, vector<string>) };
    inline vector<string> skillGroupNameList() { DARABONBA_PTR_GET(skillGroupNameList_, vector<string>) };
    inline ListSessionGroupResponseBodyDataDataSkillGroupNameList& setSkillGroupNameList(const vector<string> & skillGroupNameList) { DARABONBA_PTR_SET_VALUE(skillGroupNameList_, skillGroupNameList) };
    inline ListSessionGroupResponseBodyDataDataSkillGroupNameList& setSkillGroupNameList(vector<string> && skillGroupNameList) { DARABONBA_PTR_SET_RVALUE(skillGroupNameList_, skillGroupNameList) };


  protected:
    std::shared_ptr<vector<string>> skillGroupNameList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Qualitycheck20190115
#endif
