// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERESOURCETIMELINERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERESOURCETIMELINERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
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
    class ReserveEvents : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ReserveEvents& obj) { 
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(OccurrenceTime, occurrenceTime_);
        DARABONBA_PTR_TO_JSON(Reason, reason_);
        DARABONBA_PTR_TO_JSON(Type, type_);
      };
      friend void from_json(const Darabonba::Json& j, ReserveEvents& obj) { 
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(OccurrenceTime, occurrenceTime_);
        DARABONBA_PTR_FROM_JSON(Reason, reason_);
        DARABONBA_PTR_FROM_JSON(Type, type_);
      };
      ReserveEvents() = default ;
      ReserveEvents(const ReserveEvents &) = default ;
      ReserveEvents(ReserveEvents &&) = default ;
      ReserveEvents(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ReserveEvents() = default ;
      ReserveEvents& operator=(const ReserveEvents &) = default ;
      ReserveEvents& operator=(ReserveEvents &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->name_ == nullptr
        && this->occurrenceTime_ == nullptr && this->reason_ == nullptr && this->type_ == nullptr; };
      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline ReserveEvents& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // occurrenceTime Field Functions 
      bool hasOccurrenceTime() const { return this->occurrenceTime_ != nullptr;};
      void deleteOccurrenceTime() { this->occurrenceTime_ = nullptr;};
      inline string getOccurrenceTime() const { DARABONBA_PTR_GET_DEFAULT(occurrenceTime_, "") };
      inline ReserveEvents& setOccurrenceTime(string occurrenceTime) { DARABONBA_PTR_SET_VALUE(occurrenceTime_, occurrenceTime) };


      // reason Field Functions 
      bool hasReason() const { return this->reason_ != nullptr;};
      void deleteReason() { this->reason_ = nullptr;};
      inline string getReason() const { DARABONBA_PTR_GET_DEFAULT(reason_, "") };
      inline ReserveEvents& setReason(string reason) { DARABONBA_PTR_SET_VALUE(reason_, reason) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline ReserveEvents& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    protected:
      shared_ptr<string> name_ {};
      shared_ptr<string> occurrenceTime_ {};
      shared_ptr<string> reason_ {};
      shared_ptr<string> type_ {};
    };

    class InventoryEvents : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const InventoryEvents& obj) { 
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(OccurrenceTime, occurrenceTime_);
        DARABONBA_PTR_TO_JSON(Reason, reason_);
        DARABONBA_PTR_TO_JSON(Type, type_);
      };
      friend void from_json(const Darabonba::Json& j, InventoryEvents& obj) { 
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(OccurrenceTime, occurrenceTime_);
        DARABONBA_PTR_FROM_JSON(Reason, reason_);
        DARABONBA_PTR_FROM_JSON(Type, type_);
      };
      InventoryEvents() = default ;
      InventoryEvents(const InventoryEvents &) = default ;
      InventoryEvents(InventoryEvents &&) = default ;
      InventoryEvents(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~InventoryEvents() = default ;
      InventoryEvents& operator=(const InventoryEvents &) = default ;
      InventoryEvents& operator=(InventoryEvents &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->name_ == nullptr
        && this->occurrenceTime_ == nullptr && this->reason_ == nullptr && this->type_ == nullptr; };
      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline InventoryEvents& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // occurrenceTime Field Functions 
      bool hasOccurrenceTime() const { return this->occurrenceTime_ != nullptr;};
      void deleteOccurrenceTime() { this->occurrenceTime_ = nullptr;};
      inline string getOccurrenceTime() const { DARABONBA_PTR_GET_DEFAULT(occurrenceTime_, "") };
      inline InventoryEvents& setOccurrenceTime(string occurrenceTime) { DARABONBA_PTR_SET_VALUE(occurrenceTime_, occurrenceTime) };


      // reason Field Functions 
      bool hasReason() const { return this->reason_ != nullptr;};
      void deleteReason() { this->reason_ = nullptr;};
      inline string getReason() const { DARABONBA_PTR_GET_DEFAULT(reason_, "") };
      inline InventoryEvents& setReason(string reason) { DARABONBA_PTR_SET_VALUE(reason_, reason) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline InventoryEvents& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    protected:
      shared_ptr<string> name_ {};
      shared_ptr<string> occurrenceTime_ {};
      shared_ptr<string> reason_ {};
      shared_ptr<string> type_ {};
    };

    class BizEvents : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const BizEvents& obj) { 
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(OccurrenceTime, occurrenceTime_);
        DARABONBA_PTR_TO_JSON(Reason, reason_);
        DARABONBA_PTR_TO_JSON(Type, type_);
      };
      friend void from_json(const Darabonba::Json& j, BizEvents& obj) { 
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(OccurrenceTime, occurrenceTime_);
        DARABONBA_PTR_FROM_JSON(Reason, reason_);
        DARABONBA_PTR_FROM_JSON(Type, type_);
      };
      BizEvents() = default ;
      BizEvents(const BizEvents &) = default ;
      BizEvents(BizEvents &&) = default ;
      BizEvents(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~BizEvents() = default ;
      BizEvents& operator=(const BizEvents &) = default ;
      BizEvents& operator=(BizEvents &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->name_ == nullptr
        && this->occurrenceTime_ == nullptr && this->reason_ == nullptr && this->type_ == nullptr; };
      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline BizEvents& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // occurrenceTime Field Functions 
      bool hasOccurrenceTime() const { return this->occurrenceTime_ != nullptr;};
      void deleteOccurrenceTime() { this->occurrenceTime_ = nullptr;};
      inline string getOccurrenceTime() const { DARABONBA_PTR_GET_DEFAULT(occurrenceTime_, "") };
      inline BizEvents& setOccurrenceTime(string occurrenceTime) { DARABONBA_PTR_SET_VALUE(occurrenceTime_, occurrenceTime) };


      // reason Field Functions 
      bool hasReason() const { return this->reason_ != nullptr;};
      void deleteReason() { this->reason_ = nullptr;};
      inline string getReason() const { DARABONBA_PTR_GET_DEFAULT(reason_, "") };
      inline BizEvents& setReason(string reason) { DARABONBA_PTR_SET_VALUE(reason_, reason) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline BizEvents& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    protected:
      shared_ptr<string> name_ {};
      shared_ptr<string> occurrenceTime_ {};
      shared_ptr<string> reason_ {};
      shared_ptr<string> type_ {};
    };

    class AvailableEvents : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AvailableEvents& obj) { 
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(OccurrenceTime, occurrenceTime_);
        DARABONBA_PTR_TO_JSON(Reason, reason_);
        DARABONBA_PTR_TO_JSON(Type, type_);
      };
      friend void from_json(const Darabonba::Json& j, AvailableEvents& obj) { 
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(OccurrenceTime, occurrenceTime_);
        DARABONBA_PTR_FROM_JSON(Reason, reason_);
        DARABONBA_PTR_FROM_JSON(Type, type_);
      };
      AvailableEvents() = default ;
      AvailableEvents(const AvailableEvents &) = default ;
      AvailableEvents(AvailableEvents &&) = default ;
      AvailableEvents(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AvailableEvents() = default ;
      AvailableEvents& operator=(const AvailableEvents &) = default ;
      AvailableEvents& operator=(AvailableEvents &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->name_ == nullptr
        && this->occurrenceTime_ == nullptr && this->reason_ == nullptr && this->type_ == nullptr; };
      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline AvailableEvents& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // occurrenceTime Field Functions 
      bool hasOccurrenceTime() const { return this->occurrenceTime_ != nullptr;};
      void deleteOccurrenceTime() { this->occurrenceTime_ = nullptr;};
      inline string getOccurrenceTime() const { DARABONBA_PTR_GET_DEFAULT(occurrenceTime_, "") };
      inline AvailableEvents& setOccurrenceTime(string occurrenceTime) { DARABONBA_PTR_SET_VALUE(occurrenceTime_, occurrenceTime) };


      // reason Field Functions 
      bool hasReason() const { return this->reason_ != nullptr;};
      void deleteReason() { this->reason_ = nullptr;};
      inline string getReason() const { DARABONBA_PTR_GET_DEFAULT(reason_, "") };
      inline AvailableEvents& setReason(string reason) { DARABONBA_PTR_SET_VALUE(reason_, reason) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline AvailableEvents& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    protected:
      shared_ptr<string> name_ {};
      shared_ptr<string> occurrenceTime_ {};
      shared_ptr<string> reason_ {};
      shared_ptr<string> type_ {};
    };

    virtual bool empty() const override { return this->availableEvents_ == nullptr
        && this->bizEvents_ == nullptr && this->desc_ == nullptr && this->inventoryEvents_ == nullptr && this->msg_ == nullptr && this->requestId_ == nullptr
        && this->reserveEvents_ == nullptr; };
    // availableEvents Field Functions 
    bool hasAvailableEvents() const { return this->availableEvents_ != nullptr;};
    void deleteAvailableEvents() { this->availableEvents_ = nullptr;};
    inline const vector<DescribeResourceTimelineResponseBody::AvailableEvents> & getAvailableEvents() const { DARABONBA_PTR_GET_CONST(availableEvents_, vector<DescribeResourceTimelineResponseBody::AvailableEvents>) };
    inline vector<DescribeResourceTimelineResponseBody::AvailableEvents> getAvailableEvents() { DARABONBA_PTR_GET(availableEvents_, vector<DescribeResourceTimelineResponseBody::AvailableEvents>) };
    inline DescribeResourceTimelineResponseBody& setAvailableEvents(const vector<DescribeResourceTimelineResponseBody::AvailableEvents> & availableEvents) { DARABONBA_PTR_SET_VALUE(availableEvents_, availableEvents) };
    inline DescribeResourceTimelineResponseBody& setAvailableEvents(vector<DescribeResourceTimelineResponseBody::AvailableEvents> && availableEvents) { DARABONBA_PTR_SET_RVALUE(availableEvents_, availableEvents) };


    // bizEvents Field Functions 
    bool hasBizEvents() const { return this->bizEvents_ != nullptr;};
    void deleteBizEvents() { this->bizEvents_ = nullptr;};
    inline const vector<DescribeResourceTimelineResponseBody::BizEvents> & getBizEvents() const { DARABONBA_PTR_GET_CONST(bizEvents_, vector<DescribeResourceTimelineResponseBody::BizEvents>) };
    inline vector<DescribeResourceTimelineResponseBody::BizEvents> getBizEvents() { DARABONBA_PTR_GET(bizEvents_, vector<DescribeResourceTimelineResponseBody::BizEvents>) };
    inline DescribeResourceTimelineResponseBody& setBizEvents(const vector<DescribeResourceTimelineResponseBody::BizEvents> & bizEvents) { DARABONBA_PTR_SET_VALUE(bizEvents_, bizEvents) };
    inline DescribeResourceTimelineResponseBody& setBizEvents(vector<DescribeResourceTimelineResponseBody::BizEvents> && bizEvents) { DARABONBA_PTR_SET_RVALUE(bizEvents_, bizEvents) };


    // desc Field Functions 
    bool hasDesc() const { return this->desc_ != nullptr;};
    void deleteDesc() { this->desc_ = nullptr;};
    inline string getDesc() const { DARABONBA_PTR_GET_DEFAULT(desc_, "") };
    inline DescribeResourceTimelineResponseBody& setDesc(string desc) { DARABONBA_PTR_SET_VALUE(desc_, desc) };


    // inventoryEvents Field Functions 
    bool hasInventoryEvents() const { return this->inventoryEvents_ != nullptr;};
    void deleteInventoryEvents() { this->inventoryEvents_ = nullptr;};
    inline const vector<DescribeResourceTimelineResponseBody::InventoryEvents> & getInventoryEvents() const { DARABONBA_PTR_GET_CONST(inventoryEvents_, vector<DescribeResourceTimelineResponseBody::InventoryEvents>) };
    inline vector<DescribeResourceTimelineResponseBody::InventoryEvents> getInventoryEvents() { DARABONBA_PTR_GET(inventoryEvents_, vector<DescribeResourceTimelineResponseBody::InventoryEvents>) };
    inline DescribeResourceTimelineResponseBody& setInventoryEvents(const vector<DescribeResourceTimelineResponseBody::InventoryEvents> & inventoryEvents) { DARABONBA_PTR_SET_VALUE(inventoryEvents_, inventoryEvents) };
    inline DescribeResourceTimelineResponseBody& setInventoryEvents(vector<DescribeResourceTimelineResponseBody::InventoryEvents> && inventoryEvents) { DARABONBA_PTR_SET_RVALUE(inventoryEvents_, inventoryEvents) };


    // msg Field Functions 
    bool hasMsg() const { return this->msg_ != nullptr;};
    void deleteMsg() { this->msg_ = nullptr;};
    inline string getMsg() const { DARABONBA_PTR_GET_DEFAULT(msg_, "") };
    inline DescribeResourceTimelineResponseBody& setMsg(string msg) { DARABONBA_PTR_SET_VALUE(msg_, msg) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeResourceTimelineResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // reserveEvents Field Functions 
    bool hasReserveEvents() const { return this->reserveEvents_ != nullptr;};
    void deleteReserveEvents() { this->reserveEvents_ = nullptr;};
    inline const vector<DescribeResourceTimelineResponseBody::ReserveEvents> & getReserveEvents() const { DARABONBA_PTR_GET_CONST(reserveEvents_, vector<DescribeResourceTimelineResponseBody::ReserveEvents>) };
    inline vector<DescribeResourceTimelineResponseBody::ReserveEvents> getReserveEvents() { DARABONBA_PTR_GET(reserveEvents_, vector<DescribeResourceTimelineResponseBody::ReserveEvents>) };
    inline DescribeResourceTimelineResponseBody& setReserveEvents(const vector<DescribeResourceTimelineResponseBody::ReserveEvents> & reserveEvents) { DARABONBA_PTR_SET_VALUE(reserveEvents_, reserveEvents) };
    inline DescribeResourceTimelineResponseBody& setReserveEvents(vector<DescribeResourceTimelineResponseBody::ReserveEvents> && reserveEvents) { DARABONBA_PTR_SET_RVALUE(reserveEvents_, reserveEvents) };


  protected:
    shared_ptr<vector<DescribeResourceTimelineResponseBody::AvailableEvents>> availableEvents_ {};
    shared_ptr<vector<DescribeResourceTimelineResponseBody::BizEvents>> bizEvents_ {};
    shared_ptr<string> desc_ {};
    shared_ptr<vector<DescribeResourceTimelineResponseBody::InventoryEvents>> inventoryEvents_ {};
    shared_ptr<string> msg_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<vector<DescribeResourceTimelineResponseBody::ReserveEvents>> reserveEvents_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
