// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BOOKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_BOOKREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/BookRequestContact.hpp>
#include <vector>
#include <alibabacloud/models/BookRequestPassengerAncillaryPurchaseMapList.hpp>
#include <alibabacloud/models/BookRequestPassengerList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AirticketOpen20230117
{
namespace Models
{
  class BookRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BookRequest& obj) { 
      DARABONBA_PTR_TO_JSON(contact, contact_);
      DARABONBA_PTR_TO_JSON(out_order_num, outOrderNum_);
      DARABONBA_PTR_TO_JSON(passenger_ancillary_purchase_map_list, passengerAncillaryPurchaseMapList_);
      DARABONBA_PTR_TO_JSON(passenger_list, passengerList_);
      DARABONBA_PTR_TO_JSON(solution_id, solutionId_);
    };
    friend void from_json(const Darabonba::Json& j, BookRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(contact, contact_);
      DARABONBA_PTR_FROM_JSON(out_order_num, outOrderNum_);
      DARABONBA_PTR_FROM_JSON(passenger_ancillary_purchase_map_list, passengerAncillaryPurchaseMapList_);
      DARABONBA_PTR_FROM_JSON(passenger_list, passengerList_);
      DARABONBA_PTR_FROM_JSON(solution_id, solutionId_);
    };
    BookRequest() = default ;
    BookRequest(const BookRequest &) = default ;
    BookRequest(BookRequest &&) = default ;
    BookRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BookRequest() = default ;
    BookRequest& operator=(const BookRequest &) = default ;
    BookRequest& operator=(BookRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->contact_ == nullptr
        && return this->outOrderNum_ == nullptr && return this->passengerAncillaryPurchaseMapList_ == nullptr && return this->passengerList_ == nullptr && return this->solutionId_ == nullptr; };
    // contact Field Functions 
    bool hasContact() const { return this->contact_ != nullptr;};
    void deleteContact() { this->contact_ = nullptr;};
    inline const BookRequestContact & contact() const { DARABONBA_PTR_GET_CONST(contact_, BookRequestContact) };
    inline BookRequestContact contact() { DARABONBA_PTR_GET(contact_, BookRequestContact) };
    inline BookRequest& setContact(const BookRequestContact & contact) { DARABONBA_PTR_SET_VALUE(contact_, contact) };
    inline BookRequest& setContact(BookRequestContact && contact) { DARABONBA_PTR_SET_RVALUE(contact_, contact) };


    // outOrderNum Field Functions 
    bool hasOutOrderNum() const { return this->outOrderNum_ != nullptr;};
    void deleteOutOrderNum() { this->outOrderNum_ = nullptr;};
    inline string outOrderNum() const { DARABONBA_PTR_GET_DEFAULT(outOrderNum_, "") };
    inline BookRequest& setOutOrderNum(string outOrderNum) { DARABONBA_PTR_SET_VALUE(outOrderNum_, outOrderNum) };


    // passengerAncillaryPurchaseMapList Field Functions 
    bool hasPassengerAncillaryPurchaseMapList() const { return this->passengerAncillaryPurchaseMapList_ != nullptr;};
    void deletePassengerAncillaryPurchaseMapList() { this->passengerAncillaryPurchaseMapList_ = nullptr;};
    inline const vector<BookRequestPassengerAncillaryPurchaseMapList> & passengerAncillaryPurchaseMapList() const { DARABONBA_PTR_GET_CONST(passengerAncillaryPurchaseMapList_, vector<BookRequestPassengerAncillaryPurchaseMapList>) };
    inline vector<BookRequestPassengerAncillaryPurchaseMapList> passengerAncillaryPurchaseMapList() { DARABONBA_PTR_GET(passengerAncillaryPurchaseMapList_, vector<BookRequestPassengerAncillaryPurchaseMapList>) };
    inline BookRequest& setPassengerAncillaryPurchaseMapList(const vector<BookRequestPassengerAncillaryPurchaseMapList> & passengerAncillaryPurchaseMapList) { DARABONBA_PTR_SET_VALUE(passengerAncillaryPurchaseMapList_, passengerAncillaryPurchaseMapList) };
    inline BookRequest& setPassengerAncillaryPurchaseMapList(vector<BookRequestPassengerAncillaryPurchaseMapList> && passengerAncillaryPurchaseMapList) { DARABONBA_PTR_SET_RVALUE(passengerAncillaryPurchaseMapList_, passengerAncillaryPurchaseMapList) };


    // passengerList Field Functions 
    bool hasPassengerList() const { return this->passengerList_ != nullptr;};
    void deletePassengerList() { this->passengerList_ = nullptr;};
    inline const vector<BookRequestPassengerList> & passengerList() const { DARABONBA_PTR_GET_CONST(passengerList_, vector<BookRequestPassengerList>) };
    inline vector<BookRequestPassengerList> passengerList() { DARABONBA_PTR_GET(passengerList_, vector<BookRequestPassengerList>) };
    inline BookRequest& setPassengerList(const vector<BookRequestPassengerList> & passengerList) { DARABONBA_PTR_SET_VALUE(passengerList_, passengerList) };
    inline BookRequest& setPassengerList(vector<BookRequestPassengerList> && passengerList) { DARABONBA_PTR_SET_RVALUE(passengerList_, passengerList) };


    // solutionId Field Functions 
    bool hasSolutionId() const { return this->solutionId_ != nullptr;};
    void deleteSolutionId() { this->solutionId_ = nullptr;};
    inline string solutionId() const { DARABONBA_PTR_GET_DEFAULT(solutionId_, "") };
    inline BookRequest& setSolutionId(string solutionId) { DARABONBA_PTR_SET_VALUE(solutionId_, solutionId) };


  protected:
    // contact information
    // 
    // This parameter is required.
    std::shared_ptr<BookRequestContact> contact_ = nullptr;
    // external order number(buyer customization)
    // 
    // This parameter is required.
    std::shared_ptr<string> outOrderNum_ = nullptr;
    // passenger-ancillary purchase relationship
    std::shared_ptr<vector<BookRequestPassengerAncillaryPurchaseMapList>> passengerAncillaryPurchaseMapList_ = nullptr;
    // passenger list
    // 
    // This parameter is required.
    std::shared_ptr<vector<BookRequestPassengerList>> passengerList_ = nullptr;
    // solution_id returned by Enrich
    // 
    // This parameter is required.
    std::shared_ptr<string> solutionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AirticketOpen20230117
#endif
