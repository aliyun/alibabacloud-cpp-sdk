// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERESOURCETIMELINERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERESOURCETIMELINERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeResourceTimelineResponseBodyAvailableEvents.hpp>
#include <alibabacloud/models/DescribeResourceTimelineResponseBodyBizEvents.hpp>
#include <alibabacloud/models/DescribeResourceTimelineResponseBodyInventoryEvents.hpp>
#include <alibabacloud/models/DescribeResourceTimelineResponseBodyReserveEvents.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class DescribeResourceTimelineResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeResourceTimelineResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AvailableEvents, availableEvents_);
      DARABONBA_PTR_TO_JSON(BizEvents, bizEvents_);
      DARABONBA_PTR_TO_JSON(Desc, desc_);
      DARABONBA_PTR_TO_JSON(InventoryEvents, inventoryEvents_);
      DARABONBA_PTR_TO_JSON(Msg, msg_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ReserveEvents, reserveEvents_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeResourceTimelineResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AvailableEvents, availableEvents_);
      DARABONBA_PTR_FROM_JSON(BizEvents, bizEvents_);
      DARABONBA_PTR_FROM_JSON(Desc, desc_);
      DARABONBA_PTR_FROM_JSON(InventoryEvents, inventoryEvents_);
      DARABONBA_PTR_FROM_JSON(Msg, msg_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ReserveEvents, reserveEvents_);
    };
    DescribeResourceTimelineResponseBody() = default ;
    DescribeResourceTimelineResponseBody(const DescribeResourceTimelineResponseBody &) = default ;
    DescribeResourceTimelineResponseBody(DescribeResourceTimelineResponseBody &&) = default ;
    DescribeResourceTimelineResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeResourceTimelineResponseBody() = default ;
    DescribeResourceTimelineResponseBody& operator=(const DescribeResourceTimelineResponseBody &) = default ;
    DescribeResourceTimelineResponseBody& operator=(DescribeResourceTimelineResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->availableEvents_ == nullptr
        && return this->bizEvents_ == nullptr && return this->desc_ == nullptr && return this->inventoryEvents_ == nullptr && return this->msg_ == nullptr && return this->requestId_ == nullptr
        && return this->reserveEvents_ == nullptr; };
    // availableEvents Field Functions 
    bool hasAvailableEvents() const { return this->availableEvents_ != nullptr;};
    void deleteAvailableEvents() { this->availableEvents_ = nullptr;};
    inline const vector<DescribeResourceTimelineResponseBodyAvailableEvents> & availableEvents() const { DARABONBA_PTR_GET_CONST(availableEvents_, vector<DescribeResourceTimelineResponseBodyAvailableEvents>) };
    inline vector<DescribeResourceTimelineResponseBodyAvailableEvents> availableEvents() { DARABONBA_PTR_GET(availableEvents_, vector<DescribeResourceTimelineResponseBodyAvailableEvents>) };
    inline DescribeResourceTimelineResponseBody& setAvailableEvents(const vector<DescribeResourceTimelineResponseBodyAvailableEvents> & availableEvents) { DARABONBA_PTR_SET_VALUE(availableEvents_, availableEvents) };
    inline DescribeResourceTimelineResponseBody& setAvailableEvents(vector<DescribeResourceTimelineResponseBodyAvailableEvents> && availableEvents) { DARABONBA_PTR_SET_RVALUE(availableEvents_, availableEvents) };


    // bizEvents Field Functions 
    bool hasBizEvents() const { return this->bizEvents_ != nullptr;};
    void deleteBizEvents() { this->bizEvents_ = nullptr;};
    inline const vector<DescribeResourceTimelineResponseBodyBizEvents> & bizEvents() const { DARABONBA_PTR_GET_CONST(bizEvents_, vector<DescribeResourceTimelineResponseBodyBizEvents>) };
    inline vector<DescribeResourceTimelineResponseBodyBizEvents> bizEvents() { DARABONBA_PTR_GET(bizEvents_, vector<DescribeResourceTimelineResponseBodyBizEvents>) };
    inline DescribeResourceTimelineResponseBody& setBizEvents(const vector<DescribeResourceTimelineResponseBodyBizEvents> & bizEvents) { DARABONBA_PTR_SET_VALUE(bizEvents_, bizEvents) };
    inline DescribeResourceTimelineResponseBody& setBizEvents(vector<DescribeResourceTimelineResponseBodyBizEvents> && bizEvents) { DARABONBA_PTR_SET_RVALUE(bizEvents_, bizEvents) };


    // desc Field Functions 
    bool hasDesc() const { return this->desc_ != nullptr;};
    void deleteDesc() { this->desc_ = nullptr;};
    inline string desc() const { DARABONBA_PTR_GET_DEFAULT(desc_, "") };
    inline DescribeResourceTimelineResponseBody& setDesc(string desc) { DARABONBA_PTR_SET_VALUE(desc_, desc) };


    // inventoryEvents Field Functions 
    bool hasInventoryEvents() const { return this->inventoryEvents_ != nullptr;};
    void deleteInventoryEvents() { this->inventoryEvents_ = nullptr;};
    inline const vector<DescribeResourceTimelineResponseBodyInventoryEvents> & inventoryEvents() const { DARABONBA_PTR_GET_CONST(inventoryEvents_, vector<DescribeResourceTimelineResponseBodyInventoryEvents>) };
    inline vector<DescribeResourceTimelineResponseBodyInventoryEvents> inventoryEvents() { DARABONBA_PTR_GET(inventoryEvents_, vector<DescribeResourceTimelineResponseBodyInventoryEvents>) };
    inline DescribeResourceTimelineResponseBody& setInventoryEvents(const vector<DescribeResourceTimelineResponseBodyInventoryEvents> & inventoryEvents) { DARABONBA_PTR_SET_VALUE(inventoryEvents_, inventoryEvents) };
    inline DescribeResourceTimelineResponseBody& setInventoryEvents(vector<DescribeResourceTimelineResponseBodyInventoryEvents> && inventoryEvents) { DARABONBA_PTR_SET_RVALUE(inventoryEvents_, inventoryEvents) };


    // msg Field Functions 
    bool hasMsg() const { return this->msg_ != nullptr;};
    void deleteMsg() { this->msg_ = nullptr;};
    inline string msg() const { DARABONBA_PTR_GET_DEFAULT(msg_, "") };
    inline DescribeResourceTimelineResponseBody& setMsg(string msg) { DARABONBA_PTR_SET_VALUE(msg_, msg) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeResourceTimelineResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // reserveEvents Field Functions 
    bool hasReserveEvents() const { return this->reserveEvents_ != nullptr;};
    void deleteReserveEvents() { this->reserveEvents_ = nullptr;};
    inline const vector<DescribeResourceTimelineResponseBodyReserveEvents> & reserveEvents() const { DARABONBA_PTR_GET_CONST(reserveEvents_, vector<DescribeResourceTimelineResponseBodyReserveEvents>) };
    inline vector<DescribeResourceTimelineResponseBodyReserveEvents> reserveEvents() { DARABONBA_PTR_GET(reserveEvents_, vector<DescribeResourceTimelineResponseBodyReserveEvents>) };
    inline DescribeResourceTimelineResponseBody& setReserveEvents(const vector<DescribeResourceTimelineResponseBodyReserveEvents> & reserveEvents) { DARABONBA_PTR_SET_VALUE(reserveEvents_, reserveEvents) };
    inline DescribeResourceTimelineResponseBody& setReserveEvents(vector<DescribeResourceTimelineResponseBodyReserveEvents> && reserveEvents) { DARABONBA_PTR_SET_RVALUE(reserveEvents_, reserveEvents) };


  protected:
    std::shared_ptr<vector<DescribeResourceTimelineResponseBodyAvailableEvents>> availableEvents_ = nullptr;
    std::shared_ptr<vector<DescribeResourceTimelineResponseBodyBizEvents>> bizEvents_ = nullptr;
    std::shared_ptr<string> desc_ = nullptr;
    std::shared_ptr<vector<DescribeResourceTimelineResponseBodyInventoryEvents>> inventoryEvents_ = nullptr;
    std::shared_ptr<string> msg_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<vector<DescribeResourceTimelineResponseBodyReserveEvents>> reserveEvents_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
