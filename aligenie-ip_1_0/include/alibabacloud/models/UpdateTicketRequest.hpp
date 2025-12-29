// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATETICKETREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATETICKETREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliGenieip_1_0
{
namespace Models
{
  class UpdateTicketRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateTicketRequest& obj) { 
      DARABONBA_PTR_TO_JSON(GroupKey, groupKey_);
      DARABONBA_PTR_TO_JSON(HotelId, hotelId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateTicketRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(GroupKey, groupKey_);
      DARABONBA_PTR_FROM_JSON(HotelId, hotelId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    UpdateTicketRequest() = default ;
    UpdateTicketRequest(const UpdateTicketRequest &) = default ;
    UpdateTicketRequest(UpdateTicketRequest &&) = default ;
    UpdateTicketRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateTicketRequest() = default ;
    UpdateTicketRequest& operator=(const UpdateTicketRequest &) = default ;
    UpdateTicketRequest& operator=(UpdateTicketRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->groupKey_ == nullptr
        && this->hotelId_ == nullptr && this->status_ == nullptr; };
    // groupKey Field Functions 
    bool hasGroupKey() const { return this->groupKey_ != nullptr;};
    void deleteGroupKey() { this->groupKey_ = nullptr;};
    inline string getGroupKey() const { DARABONBA_PTR_GET_DEFAULT(groupKey_, "") };
    inline UpdateTicketRequest& setGroupKey(string groupKey) { DARABONBA_PTR_SET_VALUE(groupKey_, groupKey) };


    // hotelId Field Functions 
    bool hasHotelId() const { return this->hotelId_ != nullptr;};
    void deleteHotelId() { this->hotelId_ = nullptr;};
    inline string getHotelId() const { DARABONBA_PTR_GET_DEFAULT(hotelId_, "") };
    inline UpdateTicketRequest& setHotelId(string hotelId) { DARABONBA_PTR_SET_VALUE(hotelId_, hotelId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline UpdateTicketRequest& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // This parameter is required.
    shared_ptr<string> groupKey_ {};
    // This parameter is required.
    shared_ptr<string> hotelId_ {};
    // This parameter is required.
    shared_ptr<string> status_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGenieip_1_0
#endif
