// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSKILLGROUPCONFIGRESPONSEBODYDATASKILLGROUPCONFIGSKILLGROUPSCREENS_HPP_
#define ALIBABACLOUD_MODELS_LISTSKILLGROUPCONFIGRESPONSEBODYDATASKILLGROUPCONFIGSKILLGROUPSCREENS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListSkillGroupConfigResponseBodyDataSkillGroupConfigSkillGroupScreensSkillGroupScreen.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Qualitycheck20190115
{
namespace Models
{
  class ListSkillGroupConfigResponseBodyDataSkillGroupConfigSkillGroupScreens : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSkillGroupConfigResponseBodyDataSkillGroupConfigSkillGroupScreens& obj) { 
      DARABONBA_PTR_TO_JSON(SkillGroupScreen, skillGroupScreen_);
    };
    friend void from_json(const Darabonba::Json& j, ListSkillGroupConfigResponseBodyDataSkillGroupConfigSkillGroupScreens& obj) { 
      DARABONBA_PTR_FROM_JSON(SkillGroupScreen, skillGroupScreen_);
    };
    ListSkillGroupConfigResponseBodyDataSkillGroupConfigSkillGroupScreens() = default ;
    ListSkillGroupConfigResponseBodyDataSkillGroupConfigSkillGroupScreens(const ListSkillGroupConfigResponseBodyDataSkillGroupConfigSkillGroupScreens &) = default ;
    ListSkillGroupConfigResponseBodyDataSkillGroupConfigSkillGroupScreens(ListSkillGroupConfigResponseBodyDataSkillGroupConfigSkillGroupScreens &&) = default ;
    ListSkillGroupConfigResponseBodyDataSkillGroupConfigSkillGroupScreens(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSkillGroupConfigResponseBodyDataSkillGroupConfigSkillGroupScreens() = default ;
    ListSkillGroupConfigResponseBodyDataSkillGroupConfigSkillGroupScreens& operator=(const ListSkillGroupConfigResponseBodyDataSkillGroupConfigSkillGroupScreens &) = default ;
    ListSkillGroupConfigResponseBodyDataSkillGroupConfigSkillGroupScreens& operator=(ListSkillGroupConfigResponseBodyDataSkillGroupConfigSkillGroupScreens &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->skillGroupScreen_ == nullptr; };
    // skillGroupScreen Field Functions 
    bool hasSkillGroupScreen() const { return this->skillGroupScreen_ != nullptr;};
    void deleteSkillGroupScreen() { this->skillGroupScreen_ = nullptr;};
    inline const vector<Models::ListSkillGroupConfigResponseBodyDataSkillGroupConfigSkillGroupScreensSkillGroupScreen> & skillGroupScreen() const { DARABONBA_PTR_GET_CONST(skillGroupScreen_, vector<Models::ListSkillGroupConfigResponseBodyDataSkillGroupConfigSkillGroupScreensSkillGroupScreen>) };
    inline vector<Models::ListSkillGroupConfigResponseBodyDataSkillGroupConfigSkillGroupScreensSkillGroupScreen> skillGroupScreen() { DARABONBA_PTR_GET(skillGroupScreen_, vector<Models::ListSkillGroupConfigResponseBodyDataSkillGroupConfigSkillGroupScreensSkillGroupScreen>) };
    inline ListSkillGroupConfigResponseBodyDataSkillGroupConfigSkillGroupScreens& setSkillGroupScreen(const vector<Models::ListSkillGroupConfigResponseBodyDataSkillGroupConfigSkillGroupScreensSkillGroupScreen> & skillGroupScreen) { DARABONBA_PTR_SET_VALUE(skillGroupScreen_, skillGroupScreen) };
    inline ListSkillGroupConfigResponseBodyDataSkillGroupConfigSkillGroupScreens& setSkillGroupScreen(vector<Models::ListSkillGroupConfigResponseBodyDataSkillGroupConfigSkillGroupScreensSkillGroupScreen> && skillGroupScreen) { DARABONBA_PTR_SET_RVALUE(skillGroupScreen_, skillGroupScreen) };


  protected:
    std::shared_ptr<vector<Models::ListSkillGroupConfigResponseBodyDataSkillGroupConfigSkillGroupScreensSkillGroupScreen>> skillGroupScreen_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Qualitycheck20190115
#endif
