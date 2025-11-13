// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPHONENUMBERSOFSKILLGROUPRESPONSEBODYDATALIST_HPP_
#define ALIBABACLOUD_MODELS_LISTPHONENUMBERSOFSKILLGROUPRESPONSEBODYDATALIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CCC20200701
{
namespace Models
{
  class ListPhoneNumbersOfSkillGroupResponseBodyDataList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListPhoneNumbersOfSkillGroupResponseBodyDataList& obj) { 
      DARABONBA_PTR_TO_JSON(Active, active_);
      DARABONBA_PTR_TO_JSON(City, city_);
      DARABONBA_PTR_TO_JSON(ContactFlowId, contactFlowId_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Number, number_);
      DARABONBA_PTR_TO_JSON(Province, province_);
      DARABONBA_PTR_TO_JSON(Usage, usage_);
    };
    friend void from_json(const Darabonba::Json& j, ListPhoneNumbersOfSkillGroupResponseBodyDataList& obj) { 
      DARABONBA_PTR_FROM_JSON(Active, active_);
      DARABONBA_PTR_FROM_JSON(City, city_);
      DARABONBA_PTR_FROM_JSON(ContactFlowId, contactFlowId_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Number, number_);
      DARABONBA_PTR_FROM_JSON(Province, province_);
      DARABONBA_PTR_FROM_JSON(Usage, usage_);
    };
    ListPhoneNumbersOfSkillGroupResponseBodyDataList() = default ;
    ListPhoneNumbersOfSkillGroupResponseBodyDataList(const ListPhoneNumbersOfSkillGroupResponseBodyDataList &) = default ;
    ListPhoneNumbersOfSkillGroupResponseBodyDataList(ListPhoneNumbersOfSkillGroupResponseBodyDataList &&) = default ;
    ListPhoneNumbersOfSkillGroupResponseBodyDataList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListPhoneNumbersOfSkillGroupResponseBodyDataList() = default ;
    ListPhoneNumbersOfSkillGroupResponseBodyDataList& operator=(const ListPhoneNumbersOfSkillGroupResponseBodyDataList &) = default ;
    ListPhoneNumbersOfSkillGroupResponseBodyDataList& operator=(ListPhoneNumbersOfSkillGroupResponseBodyDataList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->active_ == nullptr
        && return this->city_ == nullptr && return this->contactFlowId_ == nullptr && return this->instanceId_ == nullptr && return this->number_ == nullptr && return this->province_ == nullptr
        && return this->usage_ == nullptr; };
    // active Field Functions 
    bool hasActive() const { return this->active_ != nullptr;};
    void deleteActive() { this->active_ = nullptr;};
    inline bool active() const { DARABONBA_PTR_GET_DEFAULT(active_, false) };
    inline ListPhoneNumbersOfSkillGroupResponseBodyDataList& setActive(bool active) { DARABONBA_PTR_SET_VALUE(active_, active) };


    // city Field Functions 
    bool hasCity() const { return this->city_ != nullptr;};
    void deleteCity() { this->city_ = nullptr;};
    inline string city() const { DARABONBA_PTR_GET_DEFAULT(city_, "") };
    inline ListPhoneNumbersOfSkillGroupResponseBodyDataList& setCity(string city) { DARABONBA_PTR_SET_VALUE(city_, city) };


    // contactFlowId Field Functions 
    bool hasContactFlowId() const { return this->contactFlowId_ != nullptr;};
    void deleteContactFlowId() { this->contactFlowId_ = nullptr;};
    inline string contactFlowId() const { DARABONBA_PTR_GET_DEFAULT(contactFlowId_, "") };
    inline ListPhoneNumbersOfSkillGroupResponseBodyDataList& setContactFlowId(string contactFlowId) { DARABONBA_PTR_SET_VALUE(contactFlowId_, contactFlowId) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ListPhoneNumbersOfSkillGroupResponseBodyDataList& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // number Field Functions 
    bool hasNumber() const { return this->number_ != nullptr;};
    void deleteNumber() { this->number_ = nullptr;};
    inline string number() const { DARABONBA_PTR_GET_DEFAULT(number_, "") };
    inline ListPhoneNumbersOfSkillGroupResponseBodyDataList& setNumber(string number) { DARABONBA_PTR_SET_VALUE(number_, number) };


    // province Field Functions 
    bool hasProvince() const { return this->province_ != nullptr;};
    void deleteProvince() { this->province_ = nullptr;};
    inline string province() const { DARABONBA_PTR_GET_DEFAULT(province_, "") };
    inline ListPhoneNumbersOfSkillGroupResponseBodyDataList& setProvince(string province) { DARABONBA_PTR_SET_VALUE(province_, province) };


    // usage Field Functions 
    bool hasUsage() const { return this->usage_ != nullptr;};
    void deleteUsage() { this->usage_ = nullptr;};
    inline string usage() const { DARABONBA_PTR_GET_DEFAULT(usage_, "") };
    inline ListPhoneNumbersOfSkillGroupResponseBodyDataList& setUsage(string usage) { DARABONBA_PTR_SET_VALUE(usage_, usage) };


  protected:
    std::shared_ptr<bool> active_ = nullptr;
    std::shared_ptr<string> city_ = nullptr;
    std::shared_ptr<string> contactFlowId_ = nullptr;
    std::shared_ptr<string> instanceId_ = nullptr;
    std::shared_ptr<string> number_ = nullptr;
    std::shared_ptr<string> province_ = nullptr;
    std::shared_ptr<string> usage_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CCC20200701
#endif
