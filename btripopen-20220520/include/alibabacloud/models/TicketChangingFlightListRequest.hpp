// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TICKETCHANGINGFLIGHTLISTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_TICKETCHANGINGFLIGHTLISTREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class TicketChangingFlightListRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TicketChangingFlightListRequest& obj) { 
      DARABONBA_PTR_TO_JSON(arr_city, arrCity_);
      DARABONBA_PTR_TO_JSON(dep_city, depCity_);
      DARABONBA_PTR_TO_JSON(dep_date, depDate_);
      DARABONBA_PTR_TO_JSON(dis_order_id, disOrderId_);
      DARABONBA_PTR_TO_JSON(is_voluntary, isVoluntary_);
      DARABONBA_PTR_TO_JSON(traveler_info_list, travelerInfoList_);
    };
    friend void from_json(const Darabonba::Json& j, TicketChangingFlightListRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(arr_city, arrCity_);
      DARABONBA_PTR_FROM_JSON(dep_city, depCity_);
      DARABONBA_PTR_FROM_JSON(dep_date, depDate_);
      DARABONBA_PTR_FROM_JSON(dis_order_id, disOrderId_);
      DARABONBA_PTR_FROM_JSON(is_voluntary, isVoluntary_);
      DARABONBA_PTR_FROM_JSON(traveler_info_list, travelerInfoList_);
    };
    TicketChangingFlightListRequest() = default ;
    TicketChangingFlightListRequest(const TicketChangingFlightListRequest &) = default ;
    TicketChangingFlightListRequest(TicketChangingFlightListRequest &&) = default ;
    TicketChangingFlightListRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TicketChangingFlightListRequest() = default ;
    TicketChangingFlightListRequest& operator=(const TicketChangingFlightListRequest &) = default ;
    TicketChangingFlightListRequest& operator=(TicketChangingFlightListRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class TravelerInfoList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const TravelerInfoList& obj) { 
        DARABONBA_PTR_TO_JSON(arr_city, arrCity_);
        DARABONBA_PTR_TO_JSON(dep_city, depCity_);
        DARABONBA_PTR_TO_JSON(name, name_);
        DARABONBA_PTR_TO_JSON(type, type_);
        DARABONBA_PTR_TO_JSON(user_id, userId_);
      };
      friend void from_json(const Darabonba::Json& j, TravelerInfoList& obj) { 
        DARABONBA_PTR_FROM_JSON(arr_city, arrCity_);
        DARABONBA_PTR_FROM_JSON(dep_city, depCity_);
        DARABONBA_PTR_FROM_JSON(name, name_);
        DARABONBA_PTR_FROM_JSON(type, type_);
        DARABONBA_PTR_FROM_JSON(user_id, userId_);
      };
      TravelerInfoList() = default ;
      TravelerInfoList(const TravelerInfoList &) = default ;
      TravelerInfoList(TravelerInfoList &&) = default ;
      TravelerInfoList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~TravelerInfoList() = default ;
      TravelerInfoList& operator=(const TravelerInfoList &) = default ;
      TravelerInfoList& operator=(TravelerInfoList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->arrCity_ == nullptr
        && this->depCity_ == nullptr && this->name_ == nullptr && this->type_ == nullptr && this->userId_ == nullptr; };
      // arrCity Field Functions 
      bool hasArrCity() const { return this->arrCity_ != nullptr;};
      void deleteArrCity() { this->arrCity_ = nullptr;};
      inline string getArrCity() const { DARABONBA_PTR_GET_DEFAULT(arrCity_, "") };
      inline TravelerInfoList& setArrCity(string arrCity) { DARABONBA_PTR_SET_VALUE(arrCity_, arrCity) };


      // depCity Field Functions 
      bool hasDepCity() const { return this->depCity_ != nullptr;};
      void deleteDepCity() { this->depCity_ = nullptr;};
      inline string getDepCity() const { DARABONBA_PTR_GET_DEFAULT(depCity_, "") };
      inline TravelerInfoList& setDepCity(string depCity) { DARABONBA_PTR_SET_VALUE(depCity_, depCity) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline TravelerInfoList& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline TravelerInfoList& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      // userId Field Functions 
      bool hasUserId() const { return this->userId_ != nullptr;};
      void deleteUserId() { this->userId_ = nullptr;};
      inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
      inline TravelerInfoList& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


    protected:
      // This parameter is required.
      shared_ptr<string> arrCity_ {};
      // This parameter is required.
      shared_ptr<string> depCity_ {};
      shared_ptr<string> name_ {};
      shared_ptr<string> type_ {};
      // This parameter is required.
      shared_ptr<string> userId_ {};
    };

    virtual bool empty() const override { return this->arrCity_ == nullptr
        && this->depCity_ == nullptr && this->depDate_ == nullptr && this->disOrderId_ == nullptr && this->isVoluntary_ == nullptr && this->travelerInfoList_ == nullptr; };
    // arrCity Field Functions 
    bool hasArrCity() const { return this->arrCity_ != nullptr;};
    void deleteArrCity() { this->arrCity_ = nullptr;};
    inline string getArrCity() const { DARABONBA_PTR_GET_DEFAULT(arrCity_, "") };
    inline TicketChangingFlightListRequest& setArrCity(string arrCity) { DARABONBA_PTR_SET_VALUE(arrCity_, arrCity) };


    // depCity Field Functions 
    bool hasDepCity() const { return this->depCity_ != nullptr;};
    void deleteDepCity() { this->depCity_ = nullptr;};
    inline string getDepCity() const { DARABONBA_PTR_GET_DEFAULT(depCity_, "") };
    inline TicketChangingFlightListRequest& setDepCity(string depCity) { DARABONBA_PTR_SET_VALUE(depCity_, depCity) };


    // depDate Field Functions 
    bool hasDepDate() const { return this->depDate_ != nullptr;};
    void deleteDepDate() { this->depDate_ = nullptr;};
    inline string getDepDate() const { DARABONBA_PTR_GET_DEFAULT(depDate_, "") };
    inline TicketChangingFlightListRequest& setDepDate(string depDate) { DARABONBA_PTR_SET_VALUE(depDate_, depDate) };


    // disOrderId Field Functions 
    bool hasDisOrderId() const { return this->disOrderId_ != nullptr;};
    void deleteDisOrderId() { this->disOrderId_ = nullptr;};
    inline string getDisOrderId() const { DARABONBA_PTR_GET_DEFAULT(disOrderId_, "") };
    inline TicketChangingFlightListRequest& setDisOrderId(string disOrderId) { DARABONBA_PTR_SET_VALUE(disOrderId_, disOrderId) };


    // isVoluntary Field Functions 
    bool hasIsVoluntary() const { return this->isVoluntary_ != nullptr;};
    void deleteIsVoluntary() { this->isVoluntary_ = nullptr;};
    inline int32_t getIsVoluntary() const { DARABONBA_PTR_GET_DEFAULT(isVoluntary_, 0) };
    inline TicketChangingFlightListRequest& setIsVoluntary(int32_t isVoluntary) { DARABONBA_PTR_SET_VALUE(isVoluntary_, isVoluntary) };


    // travelerInfoList Field Functions 
    bool hasTravelerInfoList() const { return this->travelerInfoList_ != nullptr;};
    void deleteTravelerInfoList() { this->travelerInfoList_ = nullptr;};
    inline const vector<TicketChangingFlightListRequest::TravelerInfoList> & getTravelerInfoList() const { DARABONBA_PTR_GET_CONST(travelerInfoList_, vector<TicketChangingFlightListRequest::TravelerInfoList>) };
    inline vector<TicketChangingFlightListRequest::TravelerInfoList> getTravelerInfoList() { DARABONBA_PTR_GET(travelerInfoList_, vector<TicketChangingFlightListRequest::TravelerInfoList>) };
    inline TicketChangingFlightListRequest& setTravelerInfoList(const vector<TicketChangingFlightListRequest::TravelerInfoList> & travelerInfoList) { DARABONBA_PTR_SET_VALUE(travelerInfoList_, travelerInfoList) };
    inline TicketChangingFlightListRequest& setTravelerInfoList(vector<TicketChangingFlightListRequest::TravelerInfoList> && travelerInfoList) { DARABONBA_PTR_SET_RVALUE(travelerInfoList_, travelerInfoList) };


  protected:
    shared_ptr<string> arrCity_ {};
    shared_ptr<string> depCity_ {};
    // This parameter is required.
    shared_ptr<string> depDate_ {};
    // This parameter is required.
    shared_ptr<string> disOrderId_ {};
    shared_ptr<int32_t> isVoluntary_ {};
    shared_ptr<vector<TicketChangingFlightListRequest::TravelerInfoList>> travelerInfoList_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
