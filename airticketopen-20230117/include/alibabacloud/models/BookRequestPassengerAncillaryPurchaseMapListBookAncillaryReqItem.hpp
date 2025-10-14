// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BOOKREQUESTPASSENGERANCILLARYPURCHASEMAPLISTBOOKANCILLARYREQITEM_HPP_
#define ALIBABACLOUD_MODELS_BOOKREQUESTPASSENGERANCILLARYPURCHASEMAPLISTBOOKANCILLARYREQITEM_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AirticketOpen20230117
{
namespace Models
{
  class BookRequestPassengerAncillaryPurchaseMapListBookAncillaryReqItem : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BookRequestPassengerAncillaryPurchaseMapListBookAncillaryReqItem& obj) { 
      DARABONBA_PTR_TO_JSON(ancillary_id, ancillaryId_);
      DARABONBA_PTR_TO_JSON(ancillary_type, ancillaryType_);
    };
    friend void from_json(const Darabonba::Json& j, BookRequestPassengerAncillaryPurchaseMapListBookAncillaryReqItem& obj) { 
      DARABONBA_PTR_FROM_JSON(ancillary_id, ancillaryId_);
      DARABONBA_PTR_FROM_JSON(ancillary_type, ancillaryType_);
    };
    BookRequestPassengerAncillaryPurchaseMapListBookAncillaryReqItem() = default ;
    BookRequestPassengerAncillaryPurchaseMapListBookAncillaryReqItem(const BookRequestPassengerAncillaryPurchaseMapListBookAncillaryReqItem &) = default ;
    BookRequestPassengerAncillaryPurchaseMapListBookAncillaryReqItem(BookRequestPassengerAncillaryPurchaseMapListBookAncillaryReqItem &&) = default ;
    BookRequestPassengerAncillaryPurchaseMapListBookAncillaryReqItem(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BookRequestPassengerAncillaryPurchaseMapListBookAncillaryReqItem() = default ;
    BookRequestPassengerAncillaryPurchaseMapListBookAncillaryReqItem& operator=(const BookRequestPassengerAncillaryPurchaseMapListBookAncillaryReqItem &) = default ;
    BookRequestPassengerAncillaryPurchaseMapListBookAncillaryReqItem& operator=(BookRequestPassengerAncillaryPurchaseMapListBookAncillaryReqItem &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->ancillaryId_ == nullptr
        && return this->ancillaryType_ == nullptr; };
    // ancillaryId Field Functions 
    bool hasAncillaryId() const { return this->ancillaryId_ != nullptr;};
    void deleteAncillaryId() { this->ancillaryId_ = nullptr;};
    inline string ancillaryId() const { DARABONBA_PTR_GET_DEFAULT(ancillaryId_, "") };
    inline BookRequestPassengerAncillaryPurchaseMapListBookAncillaryReqItem& setAncillaryId(string ancillaryId) { DARABONBA_PTR_SET_VALUE(ancillaryId_, ancillaryId) };


    // ancillaryType Field Functions 
    bool hasAncillaryType() const { return this->ancillaryType_ != nullptr;};
    void deleteAncillaryType() { this->ancillaryType_ = nullptr;};
    inline int32_t ancillaryType() const { DARABONBA_PTR_GET_DEFAULT(ancillaryType_, 0) };
    inline BookRequestPassengerAncillaryPurchaseMapListBookAncillaryReqItem& setAncillaryType(int32_t ancillaryType) { DARABONBA_PTR_SET_VALUE(ancillaryType_, ancillaryType) };


  protected:
    // ancillary product ID, returned by AncillarySuggest.
    std::shared_ptr<string> ancillaryId_ = nullptr;
    // type of ancillary product, only support "4"(4 means paid baggage) currently.
    std::shared_ptr<int32_t> ancillaryType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AirticketOpen20230117
#endif
