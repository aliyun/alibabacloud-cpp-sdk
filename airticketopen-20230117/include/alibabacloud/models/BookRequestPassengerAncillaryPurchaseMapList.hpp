// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BOOKREQUESTPASSENGERANCILLARYPURCHASEMAPLIST_HPP_
#define ALIBABACLOUD_MODELS_BOOKREQUESTPASSENGERANCILLARYPURCHASEMAPLIST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/BookRequestPassengerAncillaryPurchaseMapListBookAncillaryReqItem.hpp>
#include <vector>
#include <alibabacloud/models/BookRequestPassengerAncillaryPurchaseMapListPassengerList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AirticketOpen20230117
{
namespace Models
{
  class BookRequestPassengerAncillaryPurchaseMapList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BookRequestPassengerAncillaryPurchaseMapList& obj) { 
      DARABONBA_PTR_TO_JSON(book_ancillary_req_item, bookAncillaryReqItem_);
      DARABONBA_PTR_TO_JSON(passenger_list, passengerList_);
    };
    friend void from_json(const Darabonba::Json& j, BookRequestPassengerAncillaryPurchaseMapList& obj) { 
      DARABONBA_PTR_FROM_JSON(book_ancillary_req_item, bookAncillaryReqItem_);
      DARABONBA_PTR_FROM_JSON(passenger_list, passengerList_);
    };
    BookRequestPassengerAncillaryPurchaseMapList() = default ;
    BookRequestPassengerAncillaryPurchaseMapList(const BookRequestPassengerAncillaryPurchaseMapList &) = default ;
    BookRequestPassengerAncillaryPurchaseMapList(BookRequestPassengerAncillaryPurchaseMapList &&) = default ;
    BookRequestPassengerAncillaryPurchaseMapList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BookRequestPassengerAncillaryPurchaseMapList() = default ;
    BookRequestPassengerAncillaryPurchaseMapList& operator=(const BookRequestPassengerAncillaryPurchaseMapList &) = default ;
    BookRequestPassengerAncillaryPurchaseMapList& operator=(BookRequestPassengerAncillaryPurchaseMapList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bookAncillaryReqItem_ == nullptr
        && return this->passengerList_ == nullptr; };
    // bookAncillaryReqItem Field Functions 
    bool hasBookAncillaryReqItem() const { return this->bookAncillaryReqItem_ != nullptr;};
    void deleteBookAncillaryReqItem() { this->bookAncillaryReqItem_ = nullptr;};
    inline const Models::BookRequestPassengerAncillaryPurchaseMapListBookAncillaryReqItem & bookAncillaryReqItem() const { DARABONBA_PTR_GET_CONST(bookAncillaryReqItem_, Models::BookRequestPassengerAncillaryPurchaseMapListBookAncillaryReqItem) };
    inline Models::BookRequestPassengerAncillaryPurchaseMapListBookAncillaryReqItem bookAncillaryReqItem() { DARABONBA_PTR_GET(bookAncillaryReqItem_, Models::BookRequestPassengerAncillaryPurchaseMapListBookAncillaryReqItem) };
    inline BookRequestPassengerAncillaryPurchaseMapList& setBookAncillaryReqItem(const Models::BookRequestPassengerAncillaryPurchaseMapListBookAncillaryReqItem & bookAncillaryReqItem) { DARABONBA_PTR_SET_VALUE(bookAncillaryReqItem_, bookAncillaryReqItem) };
    inline BookRequestPassengerAncillaryPurchaseMapList& setBookAncillaryReqItem(Models::BookRequestPassengerAncillaryPurchaseMapListBookAncillaryReqItem && bookAncillaryReqItem) { DARABONBA_PTR_SET_RVALUE(bookAncillaryReqItem_, bookAncillaryReqItem) };


    // passengerList Field Functions 
    bool hasPassengerList() const { return this->passengerList_ != nullptr;};
    void deletePassengerList() { this->passengerList_ = nullptr;};
    inline const vector<Models::BookRequestPassengerAncillaryPurchaseMapListPassengerList> & passengerList() const { DARABONBA_PTR_GET_CONST(passengerList_, vector<Models::BookRequestPassengerAncillaryPurchaseMapListPassengerList>) };
    inline vector<Models::BookRequestPassengerAncillaryPurchaseMapListPassengerList> passengerList() { DARABONBA_PTR_GET(passengerList_, vector<Models::BookRequestPassengerAncillaryPurchaseMapListPassengerList>) };
    inline BookRequestPassengerAncillaryPurchaseMapList& setPassengerList(const vector<Models::BookRequestPassengerAncillaryPurchaseMapListPassengerList> & passengerList) { DARABONBA_PTR_SET_VALUE(passengerList_, passengerList) };
    inline BookRequestPassengerAncillaryPurchaseMapList& setPassengerList(vector<Models::BookRequestPassengerAncillaryPurchaseMapListPassengerList> && passengerList) { DARABONBA_PTR_SET_RVALUE(passengerList_, passengerList) };


  protected:
    // ancillary information
    std::shared_ptr<Models::BookRequestPassengerAncillaryPurchaseMapListBookAncillaryReqItem> bookAncillaryReqItem_ = nullptr;
    // passenger list for unified ancillary purchases
    std::shared_ptr<vector<Models::BookRequestPassengerAncillaryPurchaseMapListPassengerList>> passengerList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AirticketOpen20230117
#endif
