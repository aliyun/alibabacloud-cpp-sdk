// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTINSTANCESOFUSERRESPONSEBODYDATALISTNUMBERLIST_HPP_
#define ALIBABACLOUD_MODELS_LISTINSTANCESOFUSERRESPONSEBODYDATALISTNUMBERLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListInstancesOfUserResponseBodyDataListNumberListSkillGroups.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CCC20200701
{
namespace Models
{
  class ListInstancesOfUserResponseBodyDataListNumberList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListInstancesOfUserResponseBodyDataListNumberList& obj) { 
      DARABONBA_PTR_TO_JSON(Active, active_);
      DARABONBA_PTR_TO_JSON(City, city_);
      DARABONBA_PTR_TO_JSON(ContactFlowId, contactFlowId_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Number, number_);
      DARABONBA_PTR_TO_JSON(Province, province_);
      DARABONBA_PTR_TO_JSON(SkillGroups, skillGroups_);
      DARABONBA_PTR_TO_JSON(Usage, usage_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
    };
    friend void from_json(const Darabonba::Json& j, ListInstancesOfUserResponseBodyDataListNumberList& obj) { 
      DARABONBA_PTR_FROM_JSON(Active, active_);
      DARABONBA_PTR_FROM_JSON(City, city_);
      DARABONBA_PTR_FROM_JSON(ContactFlowId, contactFlowId_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Number, number_);
      DARABONBA_PTR_FROM_JSON(Province, province_);
      DARABONBA_PTR_FROM_JSON(SkillGroups, skillGroups_);
      DARABONBA_PTR_FROM_JSON(Usage, usage_);
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
    };
    ListInstancesOfUserResponseBodyDataListNumberList() = default ;
    ListInstancesOfUserResponseBodyDataListNumberList(const ListInstancesOfUserResponseBodyDataListNumberList &) = default ;
    ListInstancesOfUserResponseBodyDataListNumberList(ListInstancesOfUserResponseBodyDataListNumberList &&) = default ;
    ListInstancesOfUserResponseBodyDataListNumberList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListInstancesOfUserResponseBodyDataListNumberList() = default ;
    ListInstancesOfUserResponseBodyDataListNumberList& operator=(const ListInstancesOfUserResponseBodyDataListNumberList &) = default ;
    ListInstancesOfUserResponseBodyDataListNumberList& operator=(ListInstancesOfUserResponseBodyDataListNumberList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->active_ != nullptr
        && this->city_ != nullptr && this->contactFlowId_ != nullptr && this->instanceId_ != nullptr && this->number_ != nullptr && this->province_ != nullptr
        && this->skillGroups_ != nullptr && this->usage_ != nullptr && this->userId_ != nullptr; };
    // active Field Functions 
    bool hasActive() const { return this->active_ != nullptr;};
    void deleteActive() { this->active_ = nullptr;};
    inline bool active() const { DARABONBA_PTR_GET_DEFAULT(active_, false) };
    inline ListInstancesOfUserResponseBodyDataListNumberList& setActive(bool active) { DARABONBA_PTR_SET_VALUE(active_, active) };


    // city Field Functions 
    bool hasCity() const { return this->city_ != nullptr;};
    void deleteCity() { this->city_ = nullptr;};
    inline string city() const { DARABONBA_PTR_GET_DEFAULT(city_, "") };
    inline ListInstancesOfUserResponseBodyDataListNumberList& setCity(string city) { DARABONBA_PTR_SET_VALUE(city_, city) };


    // contactFlowId Field Functions 
    bool hasContactFlowId() const { return this->contactFlowId_ != nullptr;};
    void deleteContactFlowId() { this->contactFlowId_ = nullptr;};
    inline string contactFlowId() const { DARABONBA_PTR_GET_DEFAULT(contactFlowId_, "") };
    inline ListInstancesOfUserResponseBodyDataListNumberList& setContactFlowId(string contactFlowId) { DARABONBA_PTR_SET_VALUE(contactFlowId_, contactFlowId) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ListInstancesOfUserResponseBodyDataListNumberList& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // number Field Functions 
    bool hasNumber() const { return this->number_ != nullptr;};
    void deleteNumber() { this->number_ = nullptr;};
    inline string number() const { DARABONBA_PTR_GET_DEFAULT(number_, "") };
    inline ListInstancesOfUserResponseBodyDataListNumberList& setNumber(string number) { DARABONBA_PTR_SET_VALUE(number_, number) };


    // province Field Functions 
    bool hasProvince() const { return this->province_ != nullptr;};
    void deleteProvince() { this->province_ = nullptr;};
    inline string province() const { DARABONBA_PTR_GET_DEFAULT(province_, "") };
    inline ListInstancesOfUserResponseBodyDataListNumberList& setProvince(string province) { DARABONBA_PTR_SET_VALUE(province_, province) };


    // skillGroups Field Functions 
    bool hasSkillGroups() const { return this->skillGroups_ != nullptr;};
    void deleteSkillGroups() { this->skillGroups_ = nullptr;};
    inline const vector<Models::ListInstancesOfUserResponseBodyDataListNumberListSkillGroups> & skillGroups() const { DARABONBA_PTR_GET_CONST(skillGroups_, vector<Models::ListInstancesOfUserResponseBodyDataListNumberListSkillGroups>) };
    inline vector<Models::ListInstancesOfUserResponseBodyDataListNumberListSkillGroups> skillGroups() { DARABONBA_PTR_GET(skillGroups_, vector<Models::ListInstancesOfUserResponseBodyDataListNumberListSkillGroups>) };
    inline ListInstancesOfUserResponseBodyDataListNumberList& setSkillGroups(const vector<Models::ListInstancesOfUserResponseBodyDataListNumberListSkillGroups> & skillGroups) { DARABONBA_PTR_SET_VALUE(skillGroups_, skillGroups) };
    inline ListInstancesOfUserResponseBodyDataListNumberList& setSkillGroups(vector<Models::ListInstancesOfUserResponseBodyDataListNumberListSkillGroups> && skillGroups) { DARABONBA_PTR_SET_RVALUE(skillGroups_, skillGroups) };


    // usage Field Functions 
    bool hasUsage() const { return this->usage_ != nullptr;};
    void deleteUsage() { this->usage_ = nullptr;};
    inline string usage() const { DARABONBA_PTR_GET_DEFAULT(usage_, "") };
    inline ListInstancesOfUserResponseBodyDataListNumberList& setUsage(string usage) { DARABONBA_PTR_SET_VALUE(usage_, usage) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline ListInstancesOfUserResponseBodyDataListNumberList& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


  protected:
    std::shared_ptr<bool> active_ = nullptr;
    std::shared_ptr<string> city_ = nullptr;
    std::shared_ptr<string> contactFlowId_ = nullptr;
    std::shared_ptr<string> instanceId_ = nullptr;
    std::shared_ptr<string> number_ = nullptr;
    std::shared_ptr<string> province_ = nullptr;
    std::shared_ptr<vector<Models::ListInstancesOfUserResponseBodyDataListNumberListSkillGroups>> skillGroups_ = nullptr;
    std::shared_ptr<string> usage_ = nullptr;
    std::shared_ptr<string> userId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CCC20200701
#endif
