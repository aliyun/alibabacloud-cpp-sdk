// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_FEATUREVIEWCONFIGVALUE_HPP_
#define ALIBABACLOUD_MODELS_FEATUREVIEWCONFIGVALUE_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <alibabacloud/models/FeatureViewConfigValueSnapshotPartitionsValue.hpp>
#include <alibabacloud/models/FeatureViewConfigValuePartitionsValue.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiFeatureStore20230621
{
namespace Models
{
  class FeatureViewConfigValue : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const FeatureViewConfigValue& obj) { 
      DARABONBA_PTR_TO_JSON(Partitions, partitions_);
      DARABONBA_PTR_TO_JSON(EventTime, eventTime_);
      DARABONBA_PTR_TO_JSON(Equal, equal_);
      DARABONBA_PTR_TO_JSON(UseMock, useMock_);
      DARABONBA_PTR_TO_JSON(Snapshot, snapshot_);
    };
    friend void from_json(const Darabonba::Json& j, FeatureViewConfigValue& obj) { 
      DARABONBA_PTR_FROM_JSON(Partitions, partitions_);
      DARABONBA_PTR_FROM_JSON(EventTime, eventTime_);
      DARABONBA_PTR_FROM_JSON(Equal, equal_);
      DARABONBA_PTR_FROM_JSON(UseMock, useMock_);
      DARABONBA_PTR_FROM_JSON(Snapshot, snapshot_);
    };
    FeatureViewConfigValue() = default ;
    FeatureViewConfigValue(const FeatureViewConfigValue &) = default ;
    FeatureViewConfigValue(FeatureViewConfigValue &&) = default ;
    FeatureViewConfigValue(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~FeatureViewConfigValue() = default ;
    FeatureViewConfigValue& operator=(const FeatureViewConfigValue &) = default ;
    FeatureViewConfigValue& operator=(FeatureViewConfigValue &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Snapshot : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Snapshot& obj) { 
        DARABONBA_PTR_TO_JSON(Partitions, partitions_);
        DARABONBA_PTR_TO_JSON(Table, table_);
      };
      friend void from_json(const Darabonba::Json& j, Snapshot& obj) { 
        DARABONBA_PTR_FROM_JSON(Partitions, partitions_);
        DARABONBA_PTR_FROM_JSON(Table, table_);
      };
      Snapshot() = default ;
      Snapshot(const Snapshot &) = default ;
      Snapshot(Snapshot &&) = default ;
      Snapshot(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Snapshot() = default ;
      Snapshot& operator=(const Snapshot &) = default ;
      Snapshot& operator=(Snapshot &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->partitions_ == nullptr
        && this->table_ == nullptr; };
      // partitions Field Functions 
      bool hasPartitions() const { return this->partitions_ != nullptr;};
      void deletePartitions() { this->partitions_ = nullptr;};
      inline const map<string, FeatureViewConfigValueSnapshotPartitionsValue> & getPartitions() const { DARABONBA_PTR_GET_CONST(partitions_, map<string, FeatureViewConfigValueSnapshotPartitionsValue>) };
      inline map<string, FeatureViewConfigValueSnapshotPartitionsValue> getPartitions() { DARABONBA_PTR_GET(partitions_, map<string, FeatureViewConfigValueSnapshotPartitionsValue>) };
      inline Snapshot& setPartitions(const map<string, FeatureViewConfigValueSnapshotPartitionsValue> & partitions) { DARABONBA_PTR_SET_VALUE(partitions_, partitions) };
      inline Snapshot& setPartitions(map<string, FeatureViewConfigValueSnapshotPartitionsValue> && partitions) { DARABONBA_PTR_SET_RVALUE(partitions_, partitions) };


      // table Field Functions 
      bool hasTable() const { return this->table_ != nullptr;};
      void deleteTable() { this->table_ = nullptr;};
      inline string getTable() const { DARABONBA_PTR_GET_DEFAULT(table_, "") };
      inline Snapshot& setTable(string table) { DARABONBA_PTR_SET_VALUE(table_, table) };


    protected:
      shared_ptr<map<string, FeatureViewConfigValueSnapshotPartitionsValue>> partitions_ {};
      shared_ptr<string> table_ {};
    };

    virtual bool empty() const override { return this->partitions_ == nullptr
        && this->eventTime_ == nullptr && this->equal_ == nullptr && this->useMock_ == nullptr && this->snapshot_ == nullptr; };
    // partitions Field Functions 
    bool hasPartitions() const { return this->partitions_ != nullptr;};
    void deletePartitions() { this->partitions_ = nullptr;};
    inline const map<string, FeatureViewConfigValuePartitionsValue> & getPartitions() const { DARABONBA_PTR_GET_CONST(partitions_, map<string, FeatureViewConfigValuePartitionsValue>) };
    inline map<string, FeatureViewConfigValuePartitionsValue> getPartitions() { DARABONBA_PTR_GET(partitions_, map<string, FeatureViewConfigValuePartitionsValue>) };
    inline FeatureViewConfigValue& setPartitions(const map<string, FeatureViewConfigValuePartitionsValue> & partitions) { DARABONBA_PTR_SET_VALUE(partitions_, partitions) };
    inline FeatureViewConfigValue& setPartitions(map<string, FeatureViewConfigValuePartitionsValue> && partitions) { DARABONBA_PTR_SET_RVALUE(partitions_, partitions) };


    // eventTime Field Functions 
    bool hasEventTime() const { return this->eventTime_ != nullptr;};
    void deleteEventTime() { this->eventTime_ = nullptr;};
    inline string getEventTime() const { DARABONBA_PTR_GET_DEFAULT(eventTime_, "") };
    inline FeatureViewConfigValue& setEventTime(string eventTime) { DARABONBA_PTR_SET_VALUE(eventTime_, eventTime) };


    // equal Field Functions 
    bool hasEqual() const { return this->equal_ != nullptr;};
    void deleteEqual() { this->equal_ = nullptr;};
    inline bool getEqual() const { DARABONBA_PTR_GET_DEFAULT(equal_, false) };
    inline FeatureViewConfigValue& setEqual(bool equal) { DARABONBA_PTR_SET_VALUE(equal_, equal) };


    // useMock Field Functions 
    bool hasUseMock() const { return this->useMock_ != nullptr;};
    void deleteUseMock() { this->useMock_ = nullptr;};
    inline bool getUseMock() const { DARABONBA_PTR_GET_DEFAULT(useMock_, false) };
    inline FeatureViewConfigValue& setUseMock(bool useMock) { DARABONBA_PTR_SET_VALUE(useMock_, useMock) };


    // snapshot Field Functions 
    bool hasSnapshot() const { return this->snapshot_ != nullptr;};
    void deleteSnapshot() { this->snapshot_ = nullptr;};
    inline const FeatureViewConfigValue::Snapshot & getSnapshot() const { DARABONBA_PTR_GET_CONST(snapshot_, FeatureViewConfigValue::Snapshot) };
    inline FeatureViewConfigValue::Snapshot getSnapshot() { DARABONBA_PTR_GET(snapshot_, FeatureViewConfigValue::Snapshot) };
    inline FeatureViewConfigValue& setSnapshot(const FeatureViewConfigValue::Snapshot & snapshot) { DARABONBA_PTR_SET_VALUE(snapshot_, snapshot) };
    inline FeatureViewConfigValue& setSnapshot(FeatureViewConfigValue::Snapshot && snapshot) { DARABONBA_PTR_SET_RVALUE(snapshot_, snapshot) };


  protected:
    shared_ptr<map<string, FeatureViewConfigValuePartitionsValue>> partitions_ {};
    shared_ptr<string> eventTime_ {};
    shared_ptr<bool> equal_ {};
    shared_ptr<bool> useMock_ {};
    shared_ptr<FeatureViewConfigValue::Snapshot> snapshot_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiFeatureStore20230621
#endif
