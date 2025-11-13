// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPERSONALNUMBERSOFUSERRESPONSEBODYDATALIST_HPP_
#define ALIBABACLOUD_MODELS_LISTPERSONALNUMBERSOFUSERRESPONSEBODYDATALIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CCC20200701
{
namespace Models
{
  class ListPersonalNumbersOfUserResponseBodyDataList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListPersonalNumbersOfUserResponseBodyDataList& obj) { 
      DARABONBA_PTR_TO_JSON(Active, active_);
      DARABONBA_PTR_TO_JSON(City, city_);
      DARABONBA_PTR_TO_JSON(ContactFlowId, contactFlowId_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Number, number_);
      DARABONBA_PTR_TO_JSON(Province, province_);
    };
    friend void from_json(const Darabonba::Json& j, ListPersonalNumbersOfUserResponseBodyDataList& obj) { 
      DARABONBA_PTR_FROM_JSON(Active, active_);
      DARABONBA_PTR_FROM_JSON(City, city_);
      DARABONBA_PTR_FROM_JSON(ContactFlowId, contactFlowId_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Number, number_);
      DARABONBA_PTR_FROM_JSON(Province, province_);
    };
    ListPersonalNumbersOfUserResponseBodyDataList() = default ;
    ListPersonalNumbersOfUserResponseBodyDataList(const ListPersonalNumbersOfUserResponseBodyDataList &) = default ;
    ListPersonalNumbersOfUserResponseBodyDataList(ListPersonalNumbersOfUserResponseBodyDataList &&) = default ;
    ListPersonalNumbersOfUserResponseBodyDataList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListPersonalNumbersOfUserResponseBodyDataList() = default ;
    ListPersonalNumbersOfUserResponseBodyDataList& operator=(const ListPersonalNumbersOfUserResponseBodyDataList &) = default ;
    ListPersonalNumbersOfUserResponseBodyDataList& operator=(ListPersonalNumbersOfUserResponseBodyDataList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->active_ == nullptr
        && return this->city_ == nullptr && return this->contactFlowId_ == nullptr && return this->instanceId_ == nullptr && return this->number_ == nullptr && return this->province_ == nullptr; };
    // active Field Functions 
    bool hasActive() const { return this->active_ != nullptr;};
    void deleteActive() { this->active_ = nullptr;};
    inline bool active() const { DARABONBA_PTR_GET_DEFAULT(active_, false) };
    inline ListPersonalNumbersOfUserResponseBodyDataList& setActive(bool active) { DARABONBA_PTR_SET_VALUE(active_, active) };


    // city Field Functions 
    bool hasCity() const { return this->city_ != nullptr;};
    void deleteCity() { this->city_ = nullptr;};
    inline string city() const { DARABONBA_PTR_GET_DEFAULT(city_, "") };
    inline ListPersonalNumbersOfUserResponseBodyDataList& setCity(string city) { DARABONBA_PTR_SET_VALUE(city_, city) };


    // contactFlowId Field Functions 
    bool hasContactFlowId() const { return this->contactFlowId_ != nullptr;};
    void deleteContactFlowId() { this->contactFlowId_ = nullptr;};
    inline string contactFlowId() const { DARABONBA_PTR_GET_DEFAULT(contactFlowId_, "") };
    inline ListPersonalNumbersOfUserResponseBodyDataList& setContactFlowId(string contactFlowId) { DARABONBA_PTR_SET_VALUE(contactFlowId_, contactFlowId) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ListPersonalNumbersOfUserResponseBodyDataList& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // number Field Functions 
    bool hasNumber() const { return this->number_ != nullptr;};
    void deleteNumber() { this->number_ = nullptr;};
    inline string number() const { DARABONBA_PTR_GET_DEFAULT(number_, "") };
    inline ListPersonalNumbersOfUserResponseBodyDataList& setNumber(string number) { DARABONBA_PTR_SET_VALUE(number_, number) };


    // province Field Functions 
    bool hasProvince() const { return this->province_ != nullptr;};
    void deleteProvince() { this->province_ = nullptr;};
    inline string province() const { DARABONBA_PTR_GET_DEFAULT(province_, "") };
    inline ListPersonalNumbersOfUserResponseBodyDataList& setProvince(string province) { DARABONBA_PTR_SET_VALUE(province_, province) };


  protected:
    std::shared_ptr<bool> active_ = nullptr;
    std::shared_ptr<string> city_ = nullptr;
    std::shared_ptr<string> contactFlowId_ = nullptr;
    std::shared_ptr<string> instanceId_ = nullptr;
    std::shared_ptr<string> number_ = nullptr;
    std::shared_ptr<string> province_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CCC20200701
#endif
