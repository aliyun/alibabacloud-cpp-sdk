// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ORDERDETAILRESPONSEBODYDATAANCILLARYITEMDETAILLIST_HPP_
#define ALIBABACLOUD_MODELS_ORDERDETAILRESPONSEBODYDATAANCILLARYITEMDETAILLIST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/OrderDetailResponseBodyDataAncillaryItemDetailListAncillary.hpp>
#include <alibabacloud/models/OrderDetailResponseBodyDataAncillaryItemDetailListPassenger.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AirticketOpen20230117
{
namespace Models
{
  class OrderDetailResponseBodyDataAncillaryItemDetailList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const OrderDetailResponseBodyDataAncillaryItemDetailList& obj) { 
      DARABONBA_PTR_TO_JSON(ancillary, ancillary_);
      DARABONBA_PTR_TO_JSON(passenger, passenger_);
      DARABONBA_PTR_TO_JSON(segment_id_list, segmentIdList_);
    };
    friend void from_json(const Darabonba::Json& j, OrderDetailResponseBodyDataAncillaryItemDetailList& obj) { 
      DARABONBA_PTR_FROM_JSON(ancillary, ancillary_);
      DARABONBA_PTR_FROM_JSON(passenger, passenger_);
      DARABONBA_PTR_FROM_JSON(segment_id_list, segmentIdList_);
    };
    OrderDetailResponseBodyDataAncillaryItemDetailList() = default ;
    OrderDetailResponseBodyDataAncillaryItemDetailList(const OrderDetailResponseBodyDataAncillaryItemDetailList &) = default ;
    OrderDetailResponseBodyDataAncillaryItemDetailList(OrderDetailResponseBodyDataAncillaryItemDetailList &&) = default ;
    OrderDetailResponseBodyDataAncillaryItemDetailList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~OrderDetailResponseBodyDataAncillaryItemDetailList() = default ;
    OrderDetailResponseBodyDataAncillaryItemDetailList& operator=(const OrderDetailResponseBodyDataAncillaryItemDetailList &) = default ;
    OrderDetailResponseBodyDataAncillaryItemDetailList& operator=(OrderDetailResponseBodyDataAncillaryItemDetailList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->ancillary_ == nullptr
        && return this->passenger_ == nullptr && return this->segmentIdList_ == nullptr; };
    // ancillary Field Functions 
    bool hasAncillary() const { return this->ancillary_ != nullptr;};
    void deleteAncillary() { this->ancillary_ = nullptr;};
    inline const Models::OrderDetailResponseBodyDataAncillaryItemDetailListAncillary & ancillary() const { DARABONBA_PTR_GET_CONST(ancillary_, Models::OrderDetailResponseBodyDataAncillaryItemDetailListAncillary) };
    inline Models::OrderDetailResponseBodyDataAncillaryItemDetailListAncillary ancillary() { DARABONBA_PTR_GET(ancillary_, Models::OrderDetailResponseBodyDataAncillaryItemDetailListAncillary) };
    inline OrderDetailResponseBodyDataAncillaryItemDetailList& setAncillary(const Models::OrderDetailResponseBodyDataAncillaryItemDetailListAncillary & ancillary) { DARABONBA_PTR_SET_VALUE(ancillary_, ancillary) };
    inline OrderDetailResponseBodyDataAncillaryItemDetailList& setAncillary(Models::OrderDetailResponseBodyDataAncillaryItemDetailListAncillary && ancillary) { DARABONBA_PTR_SET_RVALUE(ancillary_, ancillary) };


    // passenger Field Functions 
    bool hasPassenger() const { return this->passenger_ != nullptr;};
    void deletePassenger() { this->passenger_ = nullptr;};
    inline const Models::OrderDetailResponseBodyDataAncillaryItemDetailListPassenger & passenger() const { DARABONBA_PTR_GET_CONST(passenger_, Models::OrderDetailResponseBodyDataAncillaryItemDetailListPassenger) };
    inline Models::OrderDetailResponseBodyDataAncillaryItemDetailListPassenger passenger() { DARABONBA_PTR_GET(passenger_, Models::OrderDetailResponseBodyDataAncillaryItemDetailListPassenger) };
    inline OrderDetailResponseBodyDataAncillaryItemDetailList& setPassenger(const Models::OrderDetailResponseBodyDataAncillaryItemDetailListPassenger & passenger) { DARABONBA_PTR_SET_VALUE(passenger_, passenger) };
    inline OrderDetailResponseBodyDataAncillaryItemDetailList& setPassenger(Models::OrderDetailResponseBodyDataAncillaryItemDetailListPassenger && passenger) { DARABONBA_PTR_SET_RVALUE(passenger_, passenger) };


    // segmentIdList Field Functions 
    bool hasSegmentIdList() const { return this->segmentIdList_ != nullptr;};
    void deleteSegmentIdList() { this->segmentIdList_ = nullptr;};
    inline const vector<string> & segmentIdList() const { DARABONBA_PTR_GET_CONST(segmentIdList_, vector<string>) };
    inline vector<string> segmentIdList() { DARABONBA_PTR_GET(segmentIdList_, vector<string>) };
    inline OrderDetailResponseBodyDataAncillaryItemDetailList& setSegmentIdList(const vector<string> & segmentIdList) { DARABONBA_PTR_SET_VALUE(segmentIdList_, segmentIdList) };
    inline OrderDetailResponseBodyDataAncillaryItemDetailList& setSegmentIdList(vector<string> && segmentIdList) { DARABONBA_PTR_SET_RVALUE(segmentIdList_, segmentIdList) };


  protected:
    // the ancillary buyer booked
    std::shared_ptr<Models::OrderDetailResponseBodyDataAncillaryItemDetailListAncillary> ancillary_ = nullptr;
    // passenger
    std::shared_ptr<Models::OrderDetailResponseBodyDataAncillaryItemDetailListPassenger> passenger_ = nullptr;
    // segment ID list, these segments share the same ancillary
    std::shared_ptr<vector<string>> segmentIdList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AirticketOpen20230117
#endif
