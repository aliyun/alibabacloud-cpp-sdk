// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESLOTSRESPONSEBODYSLOTS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESLOTSRESPONSEBODYSLOTS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class DescribeSlotsResponseBodySlots : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSlotsResponseBodySlots& obj) { 
      DARABONBA_PTR_TO_JSON(Database, database_);
      DARABONBA_PTR_TO_JSON(Plugin, plugin_);
      DARABONBA_PTR_TO_JSON(SlotName, slotName_);
      DARABONBA_PTR_TO_JSON(SlotStatus, slotStatus_);
      DARABONBA_PTR_TO_JSON(SlotType, slotType_);
      DARABONBA_PTR_TO_JSON(SubReplayLag, subReplayLag_);
      DARABONBA_PTR_TO_JSON(Temporary, temporary_);
      DARABONBA_PTR_TO_JSON(WalDelay, walDelay_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSlotsResponseBodySlots& obj) { 
      DARABONBA_PTR_FROM_JSON(Database, database_);
      DARABONBA_PTR_FROM_JSON(Plugin, plugin_);
      DARABONBA_PTR_FROM_JSON(SlotName, slotName_);
      DARABONBA_PTR_FROM_JSON(SlotStatus, slotStatus_);
      DARABONBA_PTR_FROM_JSON(SlotType, slotType_);
      DARABONBA_PTR_FROM_JSON(SubReplayLag, subReplayLag_);
      DARABONBA_PTR_FROM_JSON(Temporary, temporary_);
      DARABONBA_PTR_FROM_JSON(WalDelay, walDelay_);
    };
    DescribeSlotsResponseBodySlots() = default ;
    DescribeSlotsResponseBodySlots(const DescribeSlotsResponseBodySlots &) = default ;
    DescribeSlotsResponseBodySlots(DescribeSlotsResponseBodySlots &&) = default ;
    DescribeSlotsResponseBodySlots(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSlotsResponseBodySlots() = default ;
    DescribeSlotsResponseBodySlots& operator=(const DescribeSlotsResponseBodySlots &) = default ;
    DescribeSlotsResponseBodySlots& operator=(DescribeSlotsResponseBodySlots &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->database_ == nullptr
        && return this->plugin_ == nullptr && return this->slotName_ == nullptr && return this->slotStatus_ == nullptr && return this->slotType_ == nullptr && return this->subReplayLag_ == nullptr
        && return this->temporary_ == nullptr && return this->walDelay_ == nullptr; };
    // database Field Functions 
    bool hasDatabase() const { return this->database_ != nullptr;};
    void deleteDatabase() { this->database_ = nullptr;};
    inline string database() const { DARABONBA_PTR_GET_DEFAULT(database_, "") };
    inline DescribeSlotsResponseBodySlots& setDatabase(string database) { DARABONBA_PTR_SET_VALUE(database_, database) };


    // plugin Field Functions 
    bool hasPlugin() const { return this->plugin_ != nullptr;};
    void deletePlugin() { this->plugin_ = nullptr;};
    inline string plugin() const { DARABONBA_PTR_GET_DEFAULT(plugin_, "") };
    inline DescribeSlotsResponseBodySlots& setPlugin(string plugin) { DARABONBA_PTR_SET_VALUE(plugin_, plugin) };


    // slotName Field Functions 
    bool hasSlotName() const { return this->slotName_ != nullptr;};
    void deleteSlotName() { this->slotName_ = nullptr;};
    inline string slotName() const { DARABONBA_PTR_GET_DEFAULT(slotName_, "") };
    inline DescribeSlotsResponseBodySlots& setSlotName(string slotName) { DARABONBA_PTR_SET_VALUE(slotName_, slotName) };


    // slotStatus Field Functions 
    bool hasSlotStatus() const { return this->slotStatus_ != nullptr;};
    void deleteSlotStatus() { this->slotStatus_ = nullptr;};
    inline string slotStatus() const { DARABONBA_PTR_GET_DEFAULT(slotStatus_, "") };
    inline DescribeSlotsResponseBodySlots& setSlotStatus(string slotStatus) { DARABONBA_PTR_SET_VALUE(slotStatus_, slotStatus) };


    // slotType Field Functions 
    bool hasSlotType() const { return this->slotType_ != nullptr;};
    void deleteSlotType() { this->slotType_ = nullptr;};
    inline string slotType() const { DARABONBA_PTR_GET_DEFAULT(slotType_, "") };
    inline DescribeSlotsResponseBodySlots& setSlotType(string slotType) { DARABONBA_PTR_SET_VALUE(slotType_, slotType) };


    // subReplayLag Field Functions 
    bool hasSubReplayLag() const { return this->subReplayLag_ != nullptr;};
    void deleteSubReplayLag() { this->subReplayLag_ = nullptr;};
    inline string subReplayLag() const { DARABONBA_PTR_GET_DEFAULT(subReplayLag_, "") };
    inline DescribeSlotsResponseBodySlots& setSubReplayLag(string subReplayLag) { DARABONBA_PTR_SET_VALUE(subReplayLag_, subReplayLag) };


    // temporary Field Functions 
    bool hasTemporary() const { return this->temporary_ != nullptr;};
    void deleteTemporary() { this->temporary_ = nullptr;};
    inline string temporary() const { DARABONBA_PTR_GET_DEFAULT(temporary_, "") };
    inline DescribeSlotsResponseBodySlots& setTemporary(string temporary) { DARABONBA_PTR_SET_VALUE(temporary_, temporary) };


    // walDelay Field Functions 
    bool hasWalDelay() const { return this->walDelay_ != nullptr;};
    void deleteWalDelay() { this->walDelay_ = nullptr;};
    inline string walDelay() const { DARABONBA_PTR_GET_DEFAULT(walDelay_, "") };
    inline DescribeSlotsResponseBodySlots& setWalDelay(string walDelay) { DARABONBA_PTR_SET_VALUE(walDelay_, walDelay) };


  protected:
    // The name of the database in which the replication slot resides.
    std::shared_ptr<string> database_ = nullptr;
    // The extension used by the replication slot.
    std::shared_ptr<string> plugin_ = nullptr;
    // The replication slot name.
    std::shared_ptr<string> slotName_ = nullptr;
    // The replication slot status. Valid values:
    // 
    // *   ACTIVE
    // *   INACTIVE
    std::shared_ptr<string> slotStatus_ = nullptr;
    // The replication slot type. Valid values:
    // 
    // *   physical
    // *   logical
    std::shared_ptr<string> slotType_ = nullptr;
    // The latency of the logical subscription on the subscriber node that corresponds to the current replication slot. Unit: seconds.
    std::shared_ptr<string> subReplayLag_ = nullptr;
    // Indicates whether the replication slot is a temporary replication slot. Valid values:
    // 
    // *   true
    // *   false
    std::shared_ptr<string> temporary_ = nullptr;
    // The number of logs accumulated in the replication slot.
    std::shared_ptr<string> walDelay_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
