// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPHONENUMBERSRESPONSEBODYDATALIST_HPP_
#define ALIBABACLOUD_MODELS_LISTPHONENUMBERSRESPONSEBODYDATALIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListPhoneNumbersResponseBodyDataListSkillGroups.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CCC20200701
{
namespace Models
{
  class ListPhoneNumbersResponseBodyDataList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListPhoneNumbersResponseBodyDataList& obj) { 
      DARABONBA_PTR_TO_JSON(Active, active_);
      DARABONBA_PTR_TO_JSON(City, city_);
      DARABONBA_PTR_TO_JSON(ContactFlowId, contactFlowId_);
      DARABONBA_PTR_TO_JSON(ContactFlowName, contactFlowName_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Number, number_);
      DARABONBA_PTR_TO_JSON(Provider, provider_);
      DARABONBA_PTR_TO_JSON(Province, province_);
      DARABONBA_PTR_TO_JSON(SkillGroups, skillGroups_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
      DARABONBA_PTR_TO_JSON(Usage, usage_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
    };
    friend void from_json(const Darabonba::Json& j, ListPhoneNumbersResponseBodyDataList& obj) { 
      DARABONBA_PTR_FROM_JSON(Active, active_);
      DARABONBA_PTR_FROM_JSON(City, city_);
      DARABONBA_PTR_FROM_JSON(ContactFlowId, contactFlowId_);
      DARABONBA_PTR_FROM_JSON(ContactFlowName, contactFlowName_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Number, number_);
      DARABONBA_PTR_FROM_JSON(Provider, provider_);
      DARABONBA_PTR_FROM_JSON(Province, province_);
      DARABONBA_PTR_FROM_JSON(SkillGroups, skillGroups_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
      DARABONBA_PTR_FROM_JSON(Usage, usage_);
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
    };
    ListPhoneNumbersResponseBodyDataList() = default ;
    ListPhoneNumbersResponseBodyDataList(const ListPhoneNumbersResponseBodyDataList &) = default ;
    ListPhoneNumbersResponseBodyDataList(ListPhoneNumbersResponseBodyDataList &&) = default ;
    ListPhoneNumbersResponseBodyDataList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListPhoneNumbersResponseBodyDataList() = default ;
    ListPhoneNumbersResponseBodyDataList& operator=(const ListPhoneNumbersResponseBodyDataList &) = default ;
    ListPhoneNumbersResponseBodyDataList& operator=(ListPhoneNumbersResponseBodyDataList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->active_ == nullptr
        && return this->city_ == nullptr && return this->contactFlowId_ == nullptr && return this->contactFlowName_ == nullptr && return this->createTime_ == nullptr && return this->instanceId_ == nullptr
        && return this->number_ == nullptr && return this->provider_ == nullptr && return this->province_ == nullptr && return this->skillGroups_ == nullptr && return this->tags_ == nullptr
        && return this->usage_ == nullptr && return this->userId_ == nullptr; };
    // active Field Functions 
    bool hasActive() const { return this->active_ != nullptr;};
    void deleteActive() { this->active_ = nullptr;};
    inline bool active() const { DARABONBA_PTR_GET_DEFAULT(active_, false) };
    inline ListPhoneNumbersResponseBodyDataList& setActive(bool active) { DARABONBA_PTR_SET_VALUE(active_, active) };


    // city Field Functions 
    bool hasCity() const { return this->city_ != nullptr;};
    void deleteCity() { this->city_ = nullptr;};
    inline string city() const { DARABONBA_PTR_GET_DEFAULT(city_, "") };
    inline ListPhoneNumbersResponseBodyDataList& setCity(string city) { DARABONBA_PTR_SET_VALUE(city_, city) };


    // contactFlowId Field Functions 
    bool hasContactFlowId() const { return this->contactFlowId_ != nullptr;};
    void deleteContactFlowId() { this->contactFlowId_ = nullptr;};
    inline string contactFlowId() const { DARABONBA_PTR_GET_DEFAULT(contactFlowId_, "") };
    inline ListPhoneNumbersResponseBodyDataList& setContactFlowId(string contactFlowId) { DARABONBA_PTR_SET_VALUE(contactFlowId_, contactFlowId) };


    // contactFlowName Field Functions 
    bool hasContactFlowName() const { return this->contactFlowName_ != nullptr;};
    void deleteContactFlowName() { this->contactFlowName_ = nullptr;};
    inline string contactFlowName() const { DARABONBA_PTR_GET_DEFAULT(contactFlowName_, "") };
    inline ListPhoneNumbersResponseBodyDataList& setContactFlowName(string contactFlowName) { DARABONBA_PTR_SET_VALUE(contactFlowName_, contactFlowName) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline ListPhoneNumbersResponseBodyDataList& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ListPhoneNumbersResponseBodyDataList& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // number Field Functions 
    bool hasNumber() const { return this->number_ != nullptr;};
    void deleteNumber() { this->number_ = nullptr;};
    inline string number() const { DARABONBA_PTR_GET_DEFAULT(number_, "") };
    inline ListPhoneNumbersResponseBodyDataList& setNumber(string number) { DARABONBA_PTR_SET_VALUE(number_, number) };


    // provider Field Functions 
    bool hasProvider() const { return this->provider_ != nullptr;};
    void deleteProvider() { this->provider_ = nullptr;};
    inline string provider() const { DARABONBA_PTR_GET_DEFAULT(provider_, "") };
    inline ListPhoneNumbersResponseBodyDataList& setProvider(string provider) { DARABONBA_PTR_SET_VALUE(provider_, provider) };


    // province Field Functions 
    bool hasProvince() const { return this->province_ != nullptr;};
    void deleteProvince() { this->province_ = nullptr;};
    inline string province() const { DARABONBA_PTR_GET_DEFAULT(province_, "") };
    inline ListPhoneNumbersResponseBodyDataList& setProvince(string province) { DARABONBA_PTR_SET_VALUE(province_, province) };


    // skillGroups Field Functions 
    bool hasSkillGroups() const { return this->skillGroups_ != nullptr;};
    void deleteSkillGroups() { this->skillGroups_ = nullptr;};
    inline const vector<Models::ListPhoneNumbersResponseBodyDataListSkillGroups> & skillGroups() const { DARABONBA_PTR_GET_CONST(skillGroups_, vector<Models::ListPhoneNumbersResponseBodyDataListSkillGroups>) };
    inline vector<Models::ListPhoneNumbersResponseBodyDataListSkillGroups> skillGroups() { DARABONBA_PTR_GET(skillGroups_, vector<Models::ListPhoneNumbersResponseBodyDataListSkillGroups>) };
    inline ListPhoneNumbersResponseBodyDataList& setSkillGroups(const vector<Models::ListPhoneNumbersResponseBodyDataListSkillGroups> & skillGroups) { DARABONBA_PTR_SET_VALUE(skillGroups_, skillGroups) };
    inline ListPhoneNumbersResponseBodyDataList& setSkillGroups(vector<Models::ListPhoneNumbersResponseBodyDataListSkillGroups> && skillGroups) { DARABONBA_PTR_SET_RVALUE(skillGroups_, skillGroups) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline string tags() const { DARABONBA_PTR_GET_DEFAULT(tags_, "") };
    inline ListPhoneNumbersResponseBodyDataList& setTags(string tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };


    // usage Field Functions 
    bool hasUsage() const { return this->usage_ != nullptr;};
    void deleteUsage() { this->usage_ = nullptr;};
    inline string usage() const { DARABONBA_PTR_GET_DEFAULT(usage_, "") };
    inline ListPhoneNumbersResponseBodyDataList& setUsage(string usage) { DARABONBA_PTR_SET_VALUE(usage_, usage) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline ListPhoneNumbersResponseBodyDataList& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


  protected:
    std::shared_ptr<bool> active_ = nullptr;
    std::shared_ptr<string> city_ = nullptr;
    std::shared_ptr<string> contactFlowId_ = nullptr;
    std::shared_ptr<string> contactFlowName_ = nullptr;
    std::shared_ptr<string> createTime_ = nullptr;
    std::shared_ptr<string> instanceId_ = nullptr;
    std::shared_ptr<string> number_ = nullptr;
    std::shared_ptr<string> provider_ = nullptr;
    std::shared_ptr<string> province_ = nullptr;
    std::shared_ptr<vector<Models::ListPhoneNumbersResponseBodyDataListSkillGroups>> skillGroups_ = nullptr;
    std::shared_ptr<string> tags_ = nullptr;
    std::shared_ptr<string> usage_ = nullptr;
    std::shared_ptr<string> userId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CCC20200701
#endif
