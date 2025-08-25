// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTUSERSRESPONSEBODYDATALISTSKILLLEVELLIST_HPP_
#define ALIBABACLOUD_MODELS_LISTUSERSRESPONSEBODYDATALISTSKILLLEVELLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CCC20200701
{
namespace Models
{
  class ListUsersResponseBodyDataListSkillLevelList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListUsersResponseBodyDataListSkillLevelList& obj) { 
      DARABONBA_PTR_TO_JSON(SkillGroupId, skillGroupId_);
      DARABONBA_PTR_TO_JSON(SkillGroupName, skillGroupName_);
      DARABONBA_PTR_TO_JSON(SkillLevel, skillLevel_);
    };
    friend void from_json(const Darabonba::Json& j, ListUsersResponseBodyDataListSkillLevelList& obj) { 
      DARABONBA_PTR_FROM_JSON(SkillGroupId, skillGroupId_);
      DARABONBA_PTR_FROM_JSON(SkillGroupName, skillGroupName_);
      DARABONBA_PTR_FROM_JSON(SkillLevel, skillLevel_);
    };
    ListUsersResponseBodyDataListSkillLevelList() = default ;
    ListUsersResponseBodyDataListSkillLevelList(const ListUsersResponseBodyDataListSkillLevelList &) = default ;
    ListUsersResponseBodyDataListSkillLevelList(ListUsersResponseBodyDataListSkillLevelList &&) = default ;
    ListUsersResponseBodyDataListSkillLevelList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListUsersResponseBodyDataListSkillLevelList() = default ;
    ListUsersResponseBodyDataListSkillLevelList& operator=(const ListUsersResponseBodyDataListSkillLevelList &) = default ;
    ListUsersResponseBodyDataListSkillLevelList& operator=(ListUsersResponseBodyDataListSkillLevelList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->skillGroupId_ != nullptr
        && this->skillGroupName_ != nullptr && this->skillLevel_ != nullptr; };
    // skillGroupId Field Functions 
    bool hasSkillGroupId() const { return this->skillGroupId_ != nullptr;};
    void deleteSkillGroupId() { this->skillGroupId_ = nullptr;};
    inline string skillGroupId() const { DARABONBA_PTR_GET_DEFAULT(skillGroupId_, "") };
    inline ListUsersResponseBodyDataListSkillLevelList& setSkillGroupId(string skillGroupId) { DARABONBA_PTR_SET_VALUE(skillGroupId_, skillGroupId) };


    // skillGroupName Field Functions 
    bool hasSkillGroupName() const { return this->skillGroupName_ != nullptr;};
    void deleteSkillGroupName() { this->skillGroupName_ = nullptr;};
    inline string skillGroupName() const { DARABONBA_PTR_GET_DEFAULT(skillGroupName_, "") };
    inline ListUsersResponseBodyDataListSkillLevelList& setSkillGroupName(string skillGroupName) { DARABONBA_PTR_SET_VALUE(skillGroupName_, skillGroupName) };


    // skillLevel Field Functions 
    bool hasSkillLevel() const { return this->skillLevel_ != nullptr;};
    void deleteSkillLevel() { this->skillLevel_ = nullptr;};
    inline int32_t skillLevel() const { DARABONBA_PTR_GET_DEFAULT(skillLevel_, 0) };
    inline ListUsersResponseBodyDataListSkillLevelList& setSkillLevel(int32_t skillLevel) { DARABONBA_PTR_SET_VALUE(skillLevel_, skillLevel) };


  protected:
    std::shared_ptr<string> skillGroupId_ = nullptr;
    std::shared_ptr<string> skillGroupName_ = nullptr;
    std::shared_ptr<int32_t> skillLevel_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CCC20200701
#endif
