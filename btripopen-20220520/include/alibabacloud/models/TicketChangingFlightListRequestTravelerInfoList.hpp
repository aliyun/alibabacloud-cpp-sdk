// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TICKETCHANGINGFLIGHTLISTREQUESTTRAVELERINFOLIST_HPP_
#define ALIBABACLOUD_MODELS_TICKETCHANGINGFLIGHTLISTREQUESTTRAVELERINFOLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class TicketChangingFlightListRequestTravelerInfoList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TicketChangingFlightListRequestTravelerInfoList& obj) { 
      DARABONBA_PTR_TO_JSON(arr_city, arrCity_);
      DARABONBA_PTR_TO_JSON(dep_city, depCity_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(type, type_);
      DARABONBA_PTR_TO_JSON(user_id, userId_);
    };
    friend void from_json(const Darabonba::Json& j, TicketChangingFlightListRequestTravelerInfoList& obj) { 
      DARABONBA_PTR_FROM_JSON(arr_city, arrCity_);
      DARABONBA_PTR_FROM_JSON(dep_city, depCity_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(type, type_);
      DARABONBA_PTR_FROM_JSON(user_id, userId_);
    };
    TicketChangingFlightListRequestTravelerInfoList() = default ;
    TicketChangingFlightListRequestTravelerInfoList(const TicketChangingFlightListRequestTravelerInfoList &) = default ;
    TicketChangingFlightListRequestTravelerInfoList(TicketChangingFlightListRequestTravelerInfoList &&) = default ;
    TicketChangingFlightListRequestTravelerInfoList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TicketChangingFlightListRequestTravelerInfoList() = default ;
    TicketChangingFlightListRequestTravelerInfoList& operator=(const TicketChangingFlightListRequestTravelerInfoList &) = default ;
    TicketChangingFlightListRequestTravelerInfoList& operator=(TicketChangingFlightListRequestTravelerInfoList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->arrCity_ != nullptr
        && this->depCity_ != nullptr && this->name_ != nullptr && this->type_ != nullptr && this->userId_ != nullptr; };
    // arrCity Field Functions 
    bool hasArrCity() const { return this->arrCity_ != nullptr;};
    void deleteArrCity() { this->arrCity_ = nullptr;};
    inline string arrCity() const { DARABONBA_PTR_GET_DEFAULT(arrCity_, "") };
    inline TicketChangingFlightListRequestTravelerInfoList& setArrCity(string arrCity) { DARABONBA_PTR_SET_VALUE(arrCity_, arrCity) };


    // depCity Field Functions 
    bool hasDepCity() const { return this->depCity_ != nullptr;};
    void deleteDepCity() { this->depCity_ = nullptr;};
    inline string depCity() const { DARABONBA_PTR_GET_DEFAULT(depCity_, "") };
    inline TicketChangingFlightListRequestTravelerInfoList& setDepCity(string depCity) { DARABONBA_PTR_SET_VALUE(depCity_, depCity) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline TicketChangingFlightListRequestTravelerInfoList& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline TicketChangingFlightListRequestTravelerInfoList& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline TicketChangingFlightListRequestTravelerInfoList& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> arrCity_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> depCity_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> type_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> userId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
