// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BOOKSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_BOOKSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AirticketOpen20230117
{
namespace Models
{
  class BookShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BookShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(contact, contactShrink_);
      DARABONBA_PTR_TO_JSON(out_order_num, outOrderNum_);
      DARABONBA_PTR_TO_JSON(passenger_ancillary_purchase_map_list, passengerAncillaryPurchaseMapListShrink_);
      DARABONBA_PTR_TO_JSON(passenger_list, passengerListShrink_);
      DARABONBA_PTR_TO_JSON(solution_id, solutionId_);
    };
    friend void from_json(const Darabonba::Json& j, BookShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(contact, contactShrink_);
      DARABONBA_PTR_FROM_JSON(out_order_num, outOrderNum_);
      DARABONBA_PTR_FROM_JSON(passenger_ancillary_purchase_map_list, passengerAncillaryPurchaseMapListShrink_);
      DARABONBA_PTR_FROM_JSON(passenger_list, passengerListShrink_);
      DARABONBA_PTR_FROM_JSON(solution_id, solutionId_);
    };
    BookShrinkRequest() = default ;
    BookShrinkRequest(const BookShrinkRequest &) = default ;
    BookShrinkRequest(BookShrinkRequest &&) = default ;
    BookShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BookShrinkRequest() = default ;
    BookShrinkRequest& operator=(const BookShrinkRequest &) = default ;
    BookShrinkRequest& operator=(BookShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->contactShrink_ == nullptr
        && return this->outOrderNum_ == nullptr && return this->passengerAncillaryPurchaseMapListShrink_ == nullptr && return this->passengerListShrink_ == nullptr && return this->solutionId_ == nullptr; };
    // contactShrink Field Functions 
    bool hasContactShrink() const { return this->contactShrink_ != nullptr;};
    void deleteContactShrink() { this->contactShrink_ = nullptr;};
    inline string contactShrink() const { DARABONBA_PTR_GET_DEFAULT(contactShrink_, "") };
    inline BookShrinkRequest& setContactShrink(string contactShrink) { DARABONBA_PTR_SET_VALUE(contactShrink_, contactShrink) };


    // outOrderNum Field Functions 
    bool hasOutOrderNum() const { return this->outOrderNum_ != nullptr;};
    void deleteOutOrderNum() { this->outOrderNum_ = nullptr;};
    inline string outOrderNum() const { DARABONBA_PTR_GET_DEFAULT(outOrderNum_, "") };
    inline BookShrinkRequest& setOutOrderNum(string outOrderNum) { DARABONBA_PTR_SET_VALUE(outOrderNum_, outOrderNum) };


    // passengerAncillaryPurchaseMapListShrink Field Functions 
    bool hasPassengerAncillaryPurchaseMapListShrink() const { return this->passengerAncillaryPurchaseMapListShrink_ != nullptr;};
    void deletePassengerAncillaryPurchaseMapListShrink() { this->passengerAncillaryPurchaseMapListShrink_ = nullptr;};
    inline string passengerAncillaryPurchaseMapListShrink() const { DARABONBA_PTR_GET_DEFAULT(passengerAncillaryPurchaseMapListShrink_, "") };
    inline BookShrinkRequest& setPassengerAncillaryPurchaseMapListShrink(string passengerAncillaryPurchaseMapListShrink) { DARABONBA_PTR_SET_VALUE(passengerAncillaryPurchaseMapListShrink_, passengerAncillaryPurchaseMapListShrink) };


    // passengerListShrink Field Functions 
    bool hasPassengerListShrink() const { return this->passengerListShrink_ != nullptr;};
    void deletePassengerListShrink() { this->passengerListShrink_ = nullptr;};
    inline string passengerListShrink() const { DARABONBA_PTR_GET_DEFAULT(passengerListShrink_, "") };
    inline BookShrinkRequest& setPassengerListShrink(string passengerListShrink) { DARABONBA_PTR_SET_VALUE(passengerListShrink_, passengerListShrink) };


    // solutionId Field Functions 
    bool hasSolutionId() const { return this->solutionId_ != nullptr;};
    void deleteSolutionId() { this->solutionId_ = nullptr;};
    inline string solutionId() const { DARABONBA_PTR_GET_DEFAULT(solutionId_, "") };
    inline BookShrinkRequest& setSolutionId(string solutionId) { DARABONBA_PTR_SET_VALUE(solutionId_, solutionId) };


  protected:
    // contact information
    // 
    // This parameter is required.
    std::shared_ptr<string> contactShrink_ = nullptr;
    // external order number(buyer customization)
    // 
    // This parameter is required.
    std::shared_ptr<string> outOrderNum_ = nullptr;
    // passenger-ancillary purchase relationship
    std::shared_ptr<string> passengerAncillaryPurchaseMapListShrink_ = nullptr;
    // passenger list
    // 
    // This parameter is required.
    std::shared_ptr<string> passengerListShrink_ = nullptr;
    // solution_id returned by Enrich
    // 
    // This parameter is required.
    std::shared_ptr<string> solutionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AirticketOpen20230117
#endif
