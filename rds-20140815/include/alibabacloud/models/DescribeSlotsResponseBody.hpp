// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESLOTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESLOTSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class DescribeSlotsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSlotsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Slots, slots_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSlotsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Slots, slots_);
    };
    DescribeSlotsResponseBody() = default ;
    DescribeSlotsResponseBody(const DescribeSlotsResponseBody &) = default ;
    DescribeSlotsResponseBody(DescribeSlotsResponseBody &&) = default ;
    DescribeSlotsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSlotsResponseBody() = default ;
    DescribeSlotsResponseBody& operator=(const DescribeSlotsResponseBody &) = default ;
    DescribeSlotsResponseBody& operator=(DescribeSlotsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Slots : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Slots& obj) { 
        DARABONBA_PTR_TO_JSON(Database, database_);
        DARABONBA_PTR_TO_JSON(Plugin, plugin_);
        DARABONBA_PTR_TO_JSON(SlotName, slotName_);
        DARABONBA_PTR_TO_JSON(SlotStatus, slotStatus_);
        DARABONBA_PTR_TO_JSON(SlotType, slotType_);
        DARABONBA_PTR_TO_JSON(SubReplayLag, subReplayLag_);
        DARABONBA_PTR_TO_JSON(Temporary, temporary_);
        DARABONBA_PTR_TO_JSON(WalDelay, walDelay_);
      };
      friend void from_json(const Darabonba::Json& j, Slots& obj) { 
        DARABONBA_PTR_FROM_JSON(Database, database_);
        DARABONBA_PTR_FROM_JSON(Plugin, plugin_);
        DARABONBA_PTR_FROM_JSON(SlotName, slotName_);
        DARABONBA_PTR_FROM_JSON(SlotStatus, slotStatus_);
        DARABONBA_PTR_FROM_JSON(SlotType, slotType_);
        DARABONBA_PTR_FROM_JSON(SubReplayLag, subReplayLag_);
        DARABONBA_PTR_FROM_JSON(Temporary, temporary_);
        DARABONBA_PTR_FROM_JSON(WalDelay, walDelay_);
      };
      Slots() = default ;
      Slots(const Slots &) = default ;
      Slots(Slots &&) = default ;
      Slots(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Slots() = default ;
      Slots& operator=(const Slots &) = default ;
      Slots& operator=(Slots &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->database_ == nullptr
        && this->plugin_ == nullptr && this->slotName_ == nullptr && this->slotStatus_ == nullptr && this->slotType_ == nullptr && this->subReplayLag_ == nullptr
        && this->temporary_ == nullptr && this->walDelay_ == nullptr; };
      // database Field Functions 
      bool hasDatabase() const { return this->database_ != nullptr;};
      void deleteDatabase() { this->database_ = nullptr;};
      inline string getDatabase() const { DARABONBA_PTR_GET_DEFAULT(database_, "") };
      inline Slots& setDatabase(string database) { DARABONBA_PTR_SET_VALUE(database_, database) };


      // plugin Field Functions 
      bool hasPlugin() const { return this->plugin_ != nullptr;};
      void deletePlugin() { this->plugin_ = nullptr;};
      inline string getPlugin() const { DARABONBA_PTR_GET_DEFAULT(plugin_, "") };
      inline Slots& setPlugin(string plugin) { DARABONBA_PTR_SET_VALUE(plugin_, plugin) };


      // slotName Field Functions 
      bool hasSlotName() const { return this->slotName_ != nullptr;};
      void deleteSlotName() { this->slotName_ = nullptr;};
      inline string getSlotName() const { DARABONBA_PTR_GET_DEFAULT(slotName_, "") };
      inline Slots& setSlotName(string slotName) { DARABONBA_PTR_SET_VALUE(slotName_, slotName) };


      // slotStatus Field Functions 
      bool hasSlotStatus() const { return this->slotStatus_ != nullptr;};
      void deleteSlotStatus() { this->slotStatus_ = nullptr;};
      inline string getSlotStatus() const { DARABONBA_PTR_GET_DEFAULT(slotStatus_, "") };
      inline Slots& setSlotStatus(string slotStatus) { DARABONBA_PTR_SET_VALUE(slotStatus_, slotStatus) };


      // slotType Field Functions 
      bool hasSlotType() const { return this->slotType_ != nullptr;};
      void deleteSlotType() { this->slotType_ = nullptr;};
      inline string getSlotType() const { DARABONBA_PTR_GET_DEFAULT(slotType_, "") };
      inline Slots& setSlotType(string slotType) { DARABONBA_PTR_SET_VALUE(slotType_, slotType) };


      // subReplayLag Field Functions 
      bool hasSubReplayLag() const { return this->subReplayLag_ != nullptr;};
      void deleteSubReplayLag() { this->subReplayLag_ = nullptr;};
      inline string getSubReplayLag() const { DARABONBA_PTR_GET_DEFAULT(subReplayLag_, "") };
      inline Slots& setSubReplayLag(string subReplayLag) { DARABONBA_PTR_SET_VALUE(subReplayLag_, subReplayLag) };


      // temporary Field Functions 
      bool hasTemporary() const { return this->temporary_ != nullptr;};
      void deleteTemporary() { this->temporary_ = nullptr;};
      inline string getTemporary() const { DARABONBA_PTR_GET_DEFAULT(temporary_, "") };
      inline Slots& setTemporary(string temporary) { DARABONBA_PTR_SET_VALUE(temporary_, temporary) };


      // walDelay Field Functions 
      bool hasWalDelay() const { return this->walDelay_ != nullptr;};
      void deleteWalDelay() { this->walDelay_ = nullptr;};
      inline string getWalDelay() const { DARABONBA_PTR_GET_DEFAULT(walDelay_, "") };
      inline Slots& setWalDelay(string walDelay) { DARABONBA_PTR_SET_VALUE(walDelay_, walDelay) };


    protected:
      // The name of the database in which the replication slot resides.
      shared_ptr<string> database_ {};
      // The extension used by the replication slot.
      shared_ptr<string> plugin_ {};
      // The replication slot name.
      shared_ptr<string> slotName_ {};
      // The replication slot status. Valid values:
      // 
      // *   ACTIVE
      // *   INACTIVE
      shared_ptr<string> slotStatus_ {};
      // The replication slot type. Valid values:
      // 
      // *   physical
      // *   logical
      shared_ptr<string> slotType_ {};
      // The latency of the logical subscription on the subscriber node that corresponds to the current replication slot. Unit: seconds.
      shared_ptr<string> subReplayLag_ {};
      // Indicates whether the replication slot is a temporary replication slot. Valid values:
      // 
      // *   true
      // *   false
      shared_ptr<string> temporary_ {};
      // The number of logs accumulated in the replication slot.
      shared_ptr<string> walDelay_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->slots_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeSlotsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // slots Field Functions 
    bool hasSlots() const { return this->slots_ != nullptr;};
    void deleteSlots() { this->slots_ = nullptr;};
    inline const vector<DescribeSlotsResponseBody::Slots> & getSlots() const { DARABONBA_PTR_GET_CONST(slots_, vector<DescribeSlotsResponseBody::Slots>) };
    inline vector<DescribeSlotsResponseBody::Slots> getSlots() { DARABONBA_PTR_GET(slots_, vector<DescribeSlotsResponseBody::Slots>) };
    inline DescribeSlotsResponseBody& setSlots(const vector<DescribeSlotsResponseBody::Slots> & slots) { DARABONBA_PTR_SET_VALUE(slots_, slots) };
    inline DescribeSlotsResponseBody& setSlots(vector<DescribeSlotsResponseBody::Slots> && slots) { DARABONBA_PTR_SET_RVALUE(slots_, slots) };


  protected:
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The information about the replication slot.
    shared_ptr<vector<DescribeSlotsResponseBody::Slots>> slots_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
