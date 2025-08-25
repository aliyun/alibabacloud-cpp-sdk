// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTUSERSRESPONSEBODYDATALISTPERSONALOUTBOUNDNUMBERLIST_HPP_
#define ALIBABACLOUD_MODELS_LISTUSERSRESPONSEBODYDATALISTPERSONALOUTBOUNDNUMBERLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CCC20200701
{
namespace Models
{
  class ListUsersResponseBodyDataListPersonalOutboundNumberList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListUsersResponseBodyDataListPersonalOutboundNumberList& obj) { 
      DARABONBA_PTR_TO_JSON(Active, active_);
      DARABONBA_PTR_TO_JSON(City, city_);
      DARABONBA_PTR_TO_JSON(Number, number_);
      DARABONBA_PTR_TO_JSON(Province, province_);
      DARABONBA_PTR_TO_JSON(Usage, usage_);
    };
    friend void from_json(const Darabonba::Json& j, ListUsersResponseBodyDataListPersonalOutboundNumberList& obj) { 
      DARABONBA_PTR_FROM_JSON(Active, active_);
      DARABONBA_PTR_FROM_JSON(City, city_);
      DARABONBA_PTR_FROM_JSON(Number, number_);
      DARABONBA_PTR_FROM_JSON(Province, province_);
      DARABONBA_PTR_FROM_JSON(Usage, usage_);
    };
    ListUsersResponseBodyDataListPersonalOutboundNumberList() = default ;
    ListUsersResponseBodyDataListPersonalOutboundNumberList(const ListUsersResponseBodyDataListPersonalOutboundNumberList &) = default ;
    ListUsersResponseBodyDataListPersonalOutboundNumberList(ListUsersResponseBodyDataListPersonalOutboundNumberList &&) = default ;
    ListUsersResponseBodyDataListPersonalOutboundNumberList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListUsersResponseBodyDataListPersonalOutboundNumberList() = default ;
    ListUsersResponseBodyDataListPersonalOutboundNumberList& operator=(const ListUsersResponseBodyDataListPersonalOutboundNumberList &) = default ;
    ListUsersResponseBodyDataListPersonalOutboundNumberList& operator=(ListUsersResponseBodyDataListPersonalOutboundNumberList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->active_ != nullptr
        && this->city_ != nullptr && this->number_ != nullptr && this->province_ != nullptr && this->usage_ != nullptr; };
    // active Field Functions 
    bool hasActive() const { return this->active_ != nullptr;};
    void deleteActive() { this->active_ = nullptr;};
    inline bool active() const { DARABONBA_PTR_GET_DEFAULT(active_, false) };
    inline ListUsersResponseBodyDataListPersonalOutboundNumberList& setActive(bool active) { DARABONBA_PTR_SET_VALUE(active_, active) };


    // city Field Functions 
    bool hasCity() const { return this->city_ != nullptr;};
    void deleteCity() { this->city_ = nullptr;};
    inline string city() const { DARABONBA_PTR_GET_DEFAULT(city_, "") };
    inline ListUsersResponseBodyDataListPersonalOutboundNumberList& setCity(string city) { DARABONBA_PTR_SET_VALUE(city_, city) };


    // number Field Functions 
    bool hasNumber() const { return this->number_ != nullptr;};
    void deleteNumber() { this->number_ = nullptr;};
    inline string number() const { DARABONBA_PTR_GET_DEFAULT(number_, "") };
    inline ListUsersResponseBodyDataListPersonalOutboundNumberList& setNumber(string number) { DARABONBA_PTR_SET_VALUE(number_, number) };


    // province Field Functions 
    bool hasProvince() const { return this->province_ != nullptr;};
    void deleteProvince() { this->province_ = nullptr;};
    inline string province() const { DARABONBA_PTR_GET_DEFAULT(province_, "") };
    inline ListUsersResponseBodyDataListPersonalOutboundNumberList& setProvince(string province) { DARABONBA_PTR_SET_VALUE(province_, province) };


    // usage Field Functions 
    bool hasUsage() const { return this->usage_ != nullptr;};
    void deleteUsage() { this->usage_ = nullptr;};
    inline string usage() const { DARABONBA_PTR_GET_DEFAULT(usage_, "") };
    inline ListUsersResponseBodyDataListPersonalOutboundNumberList& setUsage(string usage) { DARABONBA_PTR_SET_VALUE(usage_, usage) };


  protected:
    std::shared_ptr<bool> active_ = nullptr;
    std::shared_ptr<string> city_ = nullptr;
    std::shared_ptr<string> number_ = nullptr;
    std::shared_ptr<string> province_ = nullptr;
    std::shared_ptr<string> usage_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CCC20200701
#endif
