// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_AUTOPILOTPOLICY_HPP_
#define ALIBABACLOUD_MODELS_AUTOPILOTPOLICY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <map>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ververica20220718
{
namespace Models
{
  class AutopilotPolicy : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AutopilotPolicy& obj) { 
      DARABONBA_PTR_TO_JSON(advancedRules, advancedRules_);
      DARABONBA_PTR_TO_JSON(limits, limits_);
      DARABONBA_PTR_TO_JSON(scaleDownRules, scaleDownRules_);
      DARABONBA_PTR_TO_JSON(scaleUpRules, scaleUpRules_);
      DARABONBA_PTR_TO_JSON(silentPeriodConfig, silentPeriodConfig_);
    };
    friend void from_json(const Darabonba::Json& j, AutopilotPolicy& obj) { 
      DARABONBA_PTR_FROM_JSON(advancedRules, advancedRules_);
      DARABONBA_PTR_FROM_JSON(limits, limits_);
      DARABONBA_PTR_FROM_JSON(scaleDownRules, scaleDownRules_);
      DARABONBA_PTR_FROM_JSON(scaleUpRules, scaleUpRules_);
      DARABONBA_PTR_FROM_JSON(silentPeriodConfig, silentPeriodConfig_);
    };
    AutopilotPolicy() = default ;
    AutopilotPolicy(const AutopilotPolicy &) = default ;
    AutopilotPolicy(AutopilotPolicy &&) = default ;
    AutopilotPolicy(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AutopilotPolicy() = default ;
    AutopilotPolicy& operator=(const AutopilotPolicy &) = default ;
    AutopilotPolicy& operator=(AutopilotPolicy &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class SilentPeriodConfig : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SilentPeriodConfig& obj) { 
        DARABONBA_PTR_TO_JSON(enabled, enabled_);
        DARABONBA_PTR_TO_JSON(silentPeriods, silentPeriods_);
      };
      friend void from_json(const Darabonba::Json& j, SilentPeriodConfig& obj) { 
        DARABONBA_PTR_FROM_JSON(enabled, enabled_);
        DARABONBA_PTR_FROM_JSON(silentPeriods, silentPeriods_);
      };
      SilentPeriodConfig() = default ;
      SilentPeriodConfig(const SilentPeriodConfig &) = default ;
      SilentPeriodConfig(SilentPeriodConfig &&) = default ;
      SilentPeriodConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SilentPeriodConfig() = default ;
      SilentPeriodConfig& operator=(const SilentPeriodConfig &) = default ;
      SilentPeriodConfig& operator=(SilentPeriodConfig &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class SilentPeriods : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const SilentPeriods& obj) { 
          DARABONBA_PTR_TO_JSON(beginTime, beginTime_);
          DARABONBA_PTR_TO_JSON(endTime, endTime_);
          DARABONBA_PTR_TO_JSON(level, level_);
        };
        friend void from_json(const Darabonba::Json& j, SilentPeriods& obj) { 
          DARABONBA_PTR_FROM_JSON(beginTime, beginTime_);
          DARABONBA_PTR_FROM_JSON(endTime, endTime_);
          DARABONBA_PTR_FROM_JSON(level, level_);
        };
        SilentPeriods() = default ;
        SilentPeriods(const SilentPeriods &) = default ;
        SilentPeriods(SilentPeriods &&) = default ;
        SilentPeriods(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~SilentPeriods() = default ;
        SilentPeriods& operator=(const SilentPeriods &) = default ;
        SilentPeriods& operator=(SilentPeriods &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->beginTime_ == nullptr
        && this->endTime_ == nullptr && this->level_ == nullptr; };
        // beginTime Field Functions 
        bool hasBeginTime() const { return this->beginTime_ != nullptr;};
        void deleteBeginTime() { this->beginTime_ = nullptr;};
        inline int64_t getBeginTime() const { DARABONBA_PTR_GET_DEFAULT(beginTime_, 0L) };
        inline SilentPeriods& setBeginTime(int64_t beginTime) { DARABONBA_PTR_SET_VALUE(beginTime_, beginTime) };


        // endTime Field Functions 
        bool hasEndTime() const { return this->endTime_ != nullptr;};
        void deleteEndTime() { this->endTime_ = nullptr;};
        inline int64_t getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
        inline SilentPeriods& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


        // level Field Functions 
        bool hasLevel() const { return this->level_ != nullptr;};
        void deleteLevel() { this->level_ = nullptr;};
        inline string getLevel() const { DARABONBA_PTR_GET_DEFAULT(level_, "") };
        inline SilentPeriods& setLevel(string level) { DARABONBA_PTR_SET_VALUE(level_, level) };


      protected:
        shared_ptr<int64_t> beginTime_ {};
        shared_ptr<int64_t> endTime_ {};
        shared_ptr<string> level_ {};
      };

      virtual bool empty() const override { return this->enabled_ == nullptr
        && this->silentPeriods_ == nullptr; };
      // enabled Field Functions 
      bool hasEnabled() const { return this->enabled_ != nullptr;};
      void deleteEnabled() { this->enabled_ = nullptr;};
      inline bool getEnabled() const { DARABONBA_PTR_GET_DEFAULT(enabled_, false) };
      inline SilentPeriodConfig& setEnabled(bool enabled) { DARABONBA_PTR_SET_VALUE(enabled_, enabled) };


      // silentPeriods Field Functions 
      bool hasSilentPeriods() const { return this->silentPeriods_ != nullptr;};
      void deleteSilentPeriods() { this->silentPeriods_ = nullptr;};
      inline const vector<SilentPeriodConfig::SilentPeriods> & getSilentPeriods() const { DARABONBA_PTR_GET_CONST(silentPeriods_, vector<SilentPeriodConfig::SilentPeriods>) };
      inline vector<SilentPeriodConfig::SilentPeriods> getSilentPeriods() { DARABONBA_PTR_GET(silentPeriods_, vector<SilentPeriodConfig::SilentPeriods>) };
      inline SilentPeriodConfig& setSilentPeriods(const vector<SilentPeriodConfig::SilentPeriods> & silentPeriods) { DARABONBA_PTR_SET_VALUE(silentPeriods_, silentPeriods) };
      inline SilentPeriodConfig& setSilentPeriods(vector<SilentPeriodConfig::SilentPeriods> && silentPeriods) { DARABONBA_PTR_SET_RVALUE(silentPeriods_, silentPeriods) };


    protected:
      shared_ptr<bool> enabled_ {};
      shared_ptr<vector<SilentPeriodConfig::SilentPeriods>> silentPeriods_ {};
    };

    class ScaleUpRules : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ScaleUpRules& obj) { 
        DARABONBA_PTR_TO_JSON(delayRule, delayRule_);
        DARABONBA_PTR_TO_JSON(gcRule, gcRule_);
        DARABONBA_PTR_TO_JSON(memoryScaleUpRule, memoryScaleUpRule_);
        DARABONBA_PTR_TO_JSON(oomScaleUpRule, oomScaleUpRule_);
        DARABONBA_PTR_TO_JSON(slotBusyScaleUpRule, slotBusyScaleUpRule_);
      };
      friend void from_json(const Darabonba::Json& j, ScaleUpRules& obj) { 
        DARABONBA_PTR_FROM_JSON(delayRule, delayRule_);
        DARABONBA_PTR_FROM_JSON(gcRule, gcRule_);
        DARABONBA_PTR_FROM_JSON(memoryScaleUpRule, memoryScaleUpRule_);
        DARABONBA_PTR_FROM_JSON(oomScaleUpRule, oomScaleUpRule_);
        DARABONBA_PTR_FROM_JSON(slotBusyScaleUpRule, slotBusyScaleUpRule_);
      };
      ScaleUpRules() = default ;
      ScaleUpRules(const ScaleUpRules &) = default ;
      ScaleUpRules(ScaleUpRules &&) = default ;
      ScaleUpRules(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ScaleUpRules() = default ;
      ScaleUpRules& operator=(const ScaleUpRules &) = default ;
      ScaleUpRules& operator=(ScaleUpRules &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class SlotBusyScaleUpRule : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const SlotBusyScaleUpRule& obj) { 
          DARABONBA_PTR_TO_JSON(enabled, enabled_);
          DARABONBA_PTR_TO_JSON(slotBusyScaleUpSampleInterval, slotBusyScaleUpSampleInterval_);
          DARABONBA_PTR_TO_JSON(slotBusyScaleUpThreshold, slotBusyScaleUpThreshold_);
        };
        friend void from_json(const Darabonba::Json& j, SlotBusyScaleUpRule& obj) { 
          DARABONBA_PTR_FROM_JSON(enabled, enabled_);
          DARABONBA_PTR_FROM_JSON(slotBusyScaleUpSampleInterval, slotBusyScaleUpSampleInterval_);
          DARABONBA_PTR_FROM_JSON(slotBusyScaleUpThreshold, slotBusyScaleUpThreshold_);
        };
        SlotBusyScaleUpRule() = default ;
        SlotBusyScaleUpRule(const SlotBusyScaleUpRule &) = default ;
        SlotBusyScaleUpRule(SlotBusyScaleUpRule &&) = default ;
        SlotBusyScaleUpRule(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~SlotBusyScaleUpRule() = default ;
        SlotBusyScaleUpRule& operator=(const SlotBusyScaleUpRule &) = default ;
        SlotBusyScaleUpRule& operator=(SlotBusyScaleUpRule &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->enabled_ == nullptr
        && this->slotBusyScaleUpSampleInterval_ == nullptr && this->slotBusyScaleUpThreshold_ == nullptr; };
        // enabled Field Functions 
        bool hasEnabled() const { return this->enabled_ != nullptr;};
        void deleteEnabled() { this->enabled_ = nullptr;};
        inline bool getEnabled() const { DARABONBA_PTR_GET_DEFAULT(enabled_, false) };
        inline SlotBusyScaleUpRule& setEnabled(bool enabled) { DARABONBA_PTR_SET_VALUE(enabled_, enabled) };


        // slotBusyScaleUpSampleInterval Field Functions 
        bool hasSlotBusyScaleUpSampleInterval() const { return this->slotBusyScaleUpSampleInterval_ != nullptr;};
        void deleteSlotBusyScaleUpSampleInterval() { this->slotBusyScaleUpSampleInterval_ = nullptr;};
        inline string getSlotBusyScaleUpSampleInterval() const { DARABONBA_PTR_GET_DEFAULT(slotBusyScaleUpSampleInterval_, "") };
        inline SlotBusyScaleUpRule& setSlotBusyScaleUpSampleInterval(string slotBusyScaleUpSampleInterval) { DARABONBA_PTR_SET_VALUE(slotBusyScaleUpSampleInterval_, slotBusyScaleUpSampleInterval) };


        // slotBusyScaleUpThreshold Field Functions 
        bool hasSlotBusyScaleUpThreshold() const { return this->slotBusyScaleUpThreshold_ != nullptr;};
        void deleteSlotBusyScaleUpThreshold() { this->slotBusyScaleUpThreshold_ = nullptr;};
        inline double getSlotBusyScaleUpThreshold() const { DARABONBA_PTR_GET_DEFAULT(slotBusyScaleUpThreshold_, 0.0) };
        inline SlotBusyScaleUpRule& setSlotBusyScaleUpThreshold(double slotBusyScaleUpThreshold) { DARABONBA_PTR_SET_VALUE(slotBusyScaleUpThreshold_, slotBusyScaleUpThreshold) };


      protected:
        shared_ptr<bool> enabled_ {};
        shared_ptr<string> slotBusyScaleUpSampleInterval_ {};
        shared_ptr<double> slotBusyScaleUpThreshold_ {};
      };

      class OomScaleUpRule : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const OomScaleUpRule& obj) { 
          DARABONBA_PTR_TO_JSON(enabled, enabled_);
        };
        friend void from_json(const Darabonba::Json& j, OomScaleUpRule& obj) { 
          DARABONBA_PTR_FROM_JSON(enabled, enabled_);
        };
        OomScaleUpRule() = default ;
        OomScaleUpRule(const OomScaleUpRule &) = default ;
        OomScaleUpRule(OomScaleUpRule &&) = default ;
        OomScaleUpRule(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~OomScaleUpRule() = default ;
        OomScaleUpRule& operator=(const OomScaleUpRule &) = default ;
        OomScaleUpRule& operator=(OomScaleUpRule &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->enabled_ == nullptr; };
        // enabled Field Functions 
        bool hasEnabled() const { return this->enabled_ != nullptr;};
        void deleteEnabled() { this->enabled_ = nullptr;};
        inline bool getEnabled() const { DARABONBA_PTR_GET_DEFAULT(enabled_, false) };
        inline OomScaleUpRule& setEnabled(bool enabled) { DARABONBA_PTR_SET_VALUE(enabled_, enabled) };


      protected:
        shared_ptr<bool> enabled_ {};
      };

      class MemoryScaleUpRule : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const MemoryScaleUpRule& obj) { 
          DARABONBA_PTR_TO_JSON(enabled, enabled_);
          DARABONBA_PTR_TO_JSON(memUsageScaleUpThreshold, memUsageScaleUpThreshold_);
        };
        friend void from_json(const Darabonba::Json& j, MemoryScaleUpRule& obj) { 
          DARABONBA_PTR_FROM_JSON(enabled, enabled_);
          DARABONBA_PTR_FROM_JSON(memUsageScaleUpThreshold, memUsageScaleUpThreshold_);
        };
        MemoryScaleUpRule() = default ;
        MemoryScaleUpRule(const MemoryScaleUpRule &) = default ;
        MemoryScaleUpRule(MemoryScaleUpRule &&) = default ;
        MemoryScaleUpRule(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~MemoryScaleUpRule() = default ;
        MemoryScaleUpRule& operator=(const MemoryScaleUpRule &) = default ;
        MemoryScaleUpRule& operator=(MemoryScaleUpRule &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->enabled_ == nullptr
        && this->memUsageScaleUpThreshold_ == nullptr; };
        // enabled Field Functions 
        bool hasEnabled() const { return this->enabled_ != nullptr;};
        void deleteEnabled() { this->enabled_ = nullptr;};
        inline bool getEnabled() const { DARABONBA_PTR_GET_DEFAULT(enabled_, false) };
        inline MemoryScaleUpRule& setEnabled(bool enabled) { DARABONBA_PTR_SET_VALUE(enabled_, enabled) };


        // memUsageScaleUpThreshold Field Functions 
        bool hasMemUsageScaleUpThreshold() const { return this->memUsageScaleUpThreshold_ != nullptr;};
        void deleteMemUsageScaleUpThreshold() { this->memUsageScaleUpThreshold_ = nullptr;};
        inline double getMemUsageScaleUpThreshold() const { DARABONBA_PTR_GET_DEFAULT(memUsageScaleUpThreshold_, 0.0) };
        inline MemoryScaleUpRule& setMemUsageScaleUpThreshold(double memUsageScaleUpThreshold) { DARABONBA_PTR_SET_VALUE(memUsageScaleUpThreshold_, memUsageScaleUpThreshold) };


      protected:
        shared_ptr<bool> enabled_ {};
        shared_ptr<double> memUsageScaleUpThreshold_ {};
      };

      class GcRule : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const GcRule& obj) { 
          DARABONBA_PTR_TO_JSON(enabled, enabled_);
          DARABONBA_PTR_TO_JSON(gcSampleInterval, gcSampleInterval_);
          DARABONBA_PTR_TO_JSON(gcTimeRatioThreshold, gcTimeRatioThreshold_);
        };
        friend void from_json(const Darabonba::Json& j, GcRule& obj) { 
          DARABONBA_PTR_FROM_JSON(enabled, enabled_);
          DARABONBA_PTR_FROM_JSON(gcSampleInterval, gcSampleInterval_);
          DARABONBA_PTR_FROM_JSON(gcTimeRatioThreshold, gcTimeRatioThreshold_);
        };
        GcRule() = default ;
        GcRule(const GcRule &) = default ;
        GcRule(GcRule &&) = default ;
        GcRule(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~GcRule() = default ;
        GcRule& operator=(const GcRule &) = default ;
        GcRule& operator=(GcRule &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->enabled_ == nullptr
        && this->gcSampleInterval_ == nullptr && this->gcTimeRatioThreshold_ == nullptr; };
        // enabled Field Functions 
        bool hasEnabled() const { return this->enabled_ != nullptr;};
        void deleteEnabled() { this->enabled_ = nullptr;};
        inline bool getEnabled() const { DARABONBA_PTR_GET_DEFAULT(enabled_, false) };
        inline GcRule& setEnabled(bool enabled) { DARABONBA_PTR_SET_VALUE(enabled_, enabled) };


        // gcSampleInterval Field Functions 
        bool hasGcSampleInterval() const { return this->gcSampleInterval_ != nullptr;};
        void deleteGcSampleInterval() { this->gcSampleInterval_ = nullptr;};
        inline string getGcSampleInterval() const { DARABONBA_PTR_GET_DEFAULT(gcSampleInterval_, "") };
        inline GcRule& setGcSampleInterval(string gcSampleInterval) { DARABONBA_PTR_SET_VALUE(gcSampleInterval_, gcSampleInterval) };


        // gcTimeRatioThreshold Field Functions 
        bool hasGcTimeRatioThreshold() const { return this->gcTimeRatioThreshold_ != nullptr;};
        void deleteGcTimeRatioThreshold() { this->gcTimeRatioThreshold_ = nullptr;};
        inline double getGcTimeRatioThreshold() const { DARABONBA_PTR_GET_DEFAULT(gcTimeRatioThreshold_, 0.0) };
        inline GcRule& setGcTimeRatioThreshold(double gcTimeRatioThreshold) { DARABONBA_PTR_SET_VALUE(gcTimeRatioThreshold_, gcTimeRatioThreshold) };


      protected:
        shared_ptr<bool> enabled_ {};
        shared_ptr<string> gcSampleInterval_ {};
        shared_ptr<double> gcTimeRatioThreshold_ {};
      };

      class DelayRule : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const DelayRule& obj) { 
          DARABONBA_PTR_TO_JSON(delaySampleInterval, delaySampleInterval_);
          DARABONBA_PTR_TO_JSON(delayThreshold, delayThreshold_);
          DARABONBA_PTR_TO_JSON(enabled, enabled_);
        };
        friend void from_json(const Darabonba::Json& j, DelayRule& obj) { 
          DARABONBA_PTR_FROM_JSON(delaySampleInterval, delaySampleInterval_);
          DARABONBA_PTR_FROM_JSON(delayThreshold, delayThreshold_);
          DARABONBA_PTR_FROM_JSON(enabled, enabled_);
        };
        DelayRule() = default ;
        DelayRule(const DelayRule &) = default ;
        DelayRule(DelayRule &&) = default ;
        DelayRule(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~DelayRule() = default ;
        DelayRule& operator=(const DelayRule &) = default ;
        DelayRule& operator=(DelayRule &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->delaySampleInterval_ == nullptr
        && this->delayThreshold_ == nullptr && this->enabled_ == nullptr; };
        // delaySampleInterval Field Functions 
        bool hasDelaySampleInterval() const { return this->delaySampleInterval_ != nullptr;};
        void deleteDelaySampleInterval() { this->delaySampleInterval_ = nullptr;};
        inline string getDelaySampleInterval() const { DARABONBA_PTR_GET_DEFAULT(delaySampleInterval_, "") };
        inline DelayRule& setDelaySampleInterval(string delaySampleInterval) { DARABONBA_PTR_SET_VALUE(delaySampleInterval_, delaySampleInterval) };


        // delayThreshold Field Functions 
        bool hasDelayThreshold() const { return this->delayThreshold_ != nullptr;};
        void deleteDelayThreshold() { this->delayThreshold_ = nullptr;};
        inline string getDelayThreshold() const { DARABONBA_PTR_GET_DEFAULT(delayThreshold_, "") };
        inline DelayRule& setDelayThreshold(string delayThreshold) { DARABONBA_PTR_SET_VALUE(delayThreshold_, delayThreshold) };


        // enabled Field Functions 
        bool hasEnabled() const { return this->enabled_ != nullptr;};
        void deleteEnabled() { this->enabled_ = nullptr;};
        inline bool getEnabled() const { DARABONBA_PTR_GET_DEFAULT(enabled_, false) };
        inline DelayRule& setEnabled(bool enabled) { DARABONBA_PTR_SET_VALUE(enabled_, enabled) };


      protected:
        shared_ptr<string> delaySampleInterval_ {};
        shared_ptr<string> delayThreshold_ {};
        shared_ptr<bool> enabled_ {};
      };

      virtual bool empty() const override { return this->delayRule_ == nullptr
        && this->gcRule_ == nullptr && this->memoryScaleUpRule_ == nullptr && this->oomScaleUpRule_ == nullptr && this->slotBusyScaleUpRule_ == nullptr; };
      // delayRule Field Functions 
      bool hasDelayRule() const { return this->delayRule_ != nullptr;};
      void deleteDelayRule() { this->delayRule_ = nullptr;};
      inline const ScaleUpRules::DelayRule & getDelayRule() const { DARABONBA_PTR_GET_CONST(delayRule_, ScaleUpRules::DelayRule) };
      inline ScaleUpRules::DelayRule getDelayRule() { DARABONBA_PTR_GET(delayRule_, ScaleUpRules::DelayRule) };
      inline ScaleUpRules& setDelayRule(const ScaleUpRules::DelayRule & delayRule) { DARABONBA_PTR_SET_VALUE(delayRule_, delayRule) };
      inline ScaleUpRules& setDelayRule(ScaleUpRules::DelayRule && delayRule) { DARABONBA_PTR_SET_RVALUE(delayRule_, delayRule) };


      // gcRule Field Functions 
      bool hasGcRule() const { return this->gcRule_ != nullptr;};
      void deleteGcRule() { this->gcRule_ = nullptr;};
      inline const ScaleUpRules::GcRule & getGcRule() const { DARABONBA_PTR_GET_CONST(gcRule_, ScaleUpRules::GcRule) };
      inline ScaleUpRules::GcRule getGcRule() { DARABONBA_PTR_GET(gcRule_, ScaleUpRules::GcRule) };
      inline ScaleUpRules& setGcRule(const ScaleUpRules::GcRule & gcRule) { DARABONBA_PTR_SET_VALUE(gcRule_, gcRule) };
      inline ScaleUpRules& setGcRule(ScaleUpRules::GcRule && gcRule) { DARABONBA_PTR_SET_RVALUE(gcRule_, gcRule) };


      // memoryScaleUpRule Field Functions 
      bool hasMemoryScaleUpRule() const { return this->memoryScaleUpRule_ != nullptr;};
      void deleteMemoryScaleUpRule() { this->memoryScaleUpRule_ = nullptr;};
      inline const ScaleUpRules::MemoryScaleUpRule & getMemoryScaleUpRule() const { DARABONBA_PTR_GET_CONST(memoryScaleUpRule_, ScaleUpRules::MemoryScaleUpRule) };
      inline ScaleUpRules::MemoryScaleUpRule getMemoryScaleUpRule() { DARABONBA_PTR_GET(memoryScaleUpRule_, ScaleUpRules::MemoryScaleUpRule) };
      inline ScaleUpRules& setMemoryScaleUpRule(const ScaleUpRules::MemoryScaleUpRule & memoryScaleUpRule) { DARABONBA_PTR_SET_VALUE(memoryScaleUpRule_, memoryScaleUpRule) };
      inline ScaleUpRules& setMemoryScaleUpRule(ScaleUpRules::MemoryScaleUpRule && memoryScaleUpRule) { DARABONBA_PTR_SET_RVALUE(memoryScaleUpRule_, memoryScaleUpRule) };


      // oomScaleUpRule Field Functions 
      bool hasOomScaleUpRule() const { return this->oomScaleUpRule_ != nullptr;};
      void deleteOomScaleUpRule() { this->oomScaleUpRule_ = nullptr;};
      inline const ScaleUpRules::OomScaleUpRule & getOomScaleUpRule() const { DARABONBA_PTR_GET_CONST(oomScaleUpRule_, ScaleUpRules::OomScaleUpRule) };
      inline ScaleUpRules::OomScaleUpRule getOomScaleUpRule() { DARABONBA_PTR_GET(oomScaleUpRule_, ScaleUpRules::OomScaleUpRule) };
      inline ScaleUpRules& setOomScaleUpRule(const ScaleUpRules::OomScaleUpRule & oomScaleUpRule) { DARABONBA_PTR_SET_VALUE(oomScaleUpRule_, oomScaleUpRule) };
      inline ScaleUpRules& setOomScaleUpRule(ScaleUpRules::OomScaleUpRule && oomScaleUpRule) { DARABONBA_PTR_SET_RVALUE(oomScaleUpRule_, oomScaleUpRule) };


      // slotBusyScaleUpRule Field Functions 
      bool hasSlotBusyScaleUpRule() const { return this->slotBusyScaleUpRule_ != nullptr;};
      void deleteSlotBusyScaleUpRule() { this->slotBusyScaleUpRule_ = nullptr;};
      inline const ScaleUpRules::SlotBusyScaleUpRule & getSlotBusyScaleUpRule() const { DARABONBA_PTR_GET_CONST(slotBusyScaleUpRule_, ScaleUpRules::SlotBusyScaleUpRule) };
      inline ScaleUpRules::SlotBusyScaleUpRule getSlotBusyScaleUpRule() { DARABONBA_PTR_GET(slotBusyScaleUpRule_, ScaleUpRules::SlotBusyScaleUpRule) };
      inline ScaleUpRules& setSlotBusyScaleUpRule(const ScaleUpRules::SlotBusyScaleUpRule & slotBusyScaleUpRule) { DARABONBA_PTR_SET_VALUE(slotBusyScaleUpRule_, slotBusyScaleUpRule) };
      inline ScaleUpRules& setSlotBusyScaleUpRule(ScaleUpRules::SlotBusyScaleUpRule && slotBusyScaleUpRule) { DARABONBA_PTR_SET_RVALUE(slotBusyScaleUpRule_, slotBusyScaleUpRule) };


    protected:
      shared_ptr<ScaleUpRules::DelayRule> delayRule_ {};
      shared_ptr<ScaleUpRules::GcRule> gcRule_ {};
      shared_ptr<ScaleUpRules::MemoryScaleUpRule> memoryScaleUpRule_ {};
      shared_ptr<ScaleUpRules::OomScaleUpRule> oomScaleUpRule_ {};
      shared_ptr<ScaleUpRules::SlotBusyScaleUpRule> slotBusyScaleUpRule_ {};
    };

    class ScaleDownRules : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ScaleDownRules& obj) { 
        DARABONBA_PTR_TO_JSON(memoryScaleDownRule, memoryScaleDownRule_);
        DARABONBA_PTR_TO_JSON(slotBusyScaleDownRule, slotBusyScaleDownRule_);
      };
      friend void from_json(const Darabonba::Json& j, ScaleDownRules& obj) { 
        DARABONBA_PTR_FROM_JSON(memoryScaleDownRule, memoryScaleDownRule_);
        DARABONBA_PTR_FROM_JSON(slotBusyScaleDownRule, slotBusyScaleDownRule_);
      };
      ScaleDownRules() = default ;
      ScaleDownRules(const ScaleDownRules &) = default ;
      ScaleDownRules(ScaleDownRules &&) = default ;
      ScaleDownRules(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ScaleDownRules() = default ;
      ScaleDownRules& operator=(const ScaleDownRules &) = default ;
      ScaleDownRules& operator=(ScaleDownRules &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class SlotBusyScaleDownRule : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const SlotBusyScaleDownRule& obj) { 
          DARABONBA_PTR_TO_JSON(enabled, enabled_);
          DARABONBA_PTR_TO_JSON(slotBusyScaleDownSampleInterval, slotBusyScaleDownSampleInterval_);
          DARABONBA_PTR_TO_JSON(slotBusyScaleDownThreshold, slotBusyScaleDownThreshold_);
        };
        friend void from_json(const Darabonba::Json& j, SlotBusyScaleDownRule& obj) { 
          DARABONBA_PTR_FROM_JSON(enabled, enabled_);
          DARABONBA_PTR_FROM_JSON(slotBusyScaleDownSampleInterval, slotBusyScaleDownSampleInterval_);
          DARABONBA_PTR_FROM_JSON(slotBusyScaleDownThreshold, slotBusyScaleDownThreshold_);
        };
        SlotBusyScaleDownRule() = default ;
        SlotBusyScaleDownRule(const SlotBusyScaleDownRule &) = default ;
        SlotBusyScaleDownRule(SlotBusyScaleDownRule &&) = default ;
        SlotBusyScaleDownRule(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~SlotBusyScaleDownRule() = default ;
        SlotBusyScaleDownRule& operator=(const SlotBusyScaleDownRule &) = default ;
        SlotBusyScaleDownRule& operator=(SlotBusyScaleDownRule &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->enabled_ == nullptr
        && this->slotBusyScaleDownSampleInterval_ == nullptr && this->slotBusyScaleDownThreshold_ == nullptr; };
        // enabled Field Functions 
        bool hasEnabled() const { return this->enabled_ != nullptr;};
        void deleteEnabled() { this->enabled_ = nullptr;};
        inline bool getEnabled() const { DARABONBA_PTR_GET_DEFAULT(enabled_, false) };
        inline SlotBusyScaleDownRule& setEnabled(bool enabled) { DARABONBA_PTR_SET_VALUE(enabled_, enabled) };


        // slotBusyScaleDownSampleInterval Field Functions 
        bool hasSlotBusyScaleDownSampleInterval() const { return this->slotBusyScaleDownSampleInterval_ != nullptr;};
        void deleteSlotBusyScaleDownSampleInterval() { this->slotBusyScaleDownSampleInterval_ = nullptr;};
        inline string getSlotBusyScaleDownSampleInterval() const { DARABONBA_PTR_GET_DEFAULT(slotBusyScaleDownSampleInterval_, "") };
        inline SlotBusyScaleDownRule& setSlotBusyScaleDownSampleInterval(string slotBusyScaleDownSampleInterval) { DARABONBA_PTR_SET_VALUE(slotBusyScaleDownSampleInterval_, slotBusyScaleDownSampleInterval) };


        // slotBusyScaleDownThreshold Field Functions 
        bool hasSlotBusyScaleDownThreshold() const { return this->slotBusyScaleDownThreshold_ != nullptr;};
        void deleteSlotBusyScaleDownThreshold() { this->slotBusyScaleDownThreshold_ = nullptr;};
        inline double getSlotBusyScaleDownThreshold() const { DARABONBA_PTR_GET_DEFAULT(slotBusyScaleDownThreshold_, 0.0) };
        inline SlotBusyScaleDownRule& setSlotBusyScaleDownThreshold(double slotBusyScaleDownThreshold) { DARABONBA_PTR_SET_VALUE(slotBusyScaleDownThreshold_, slotBusyScaleDownThreshold) };


      protected:
        shared_ptr<bool> enabled_ {};
        shared_ptr<string> slotBusyScaleDownSampleInterval_ {};
        shared_ptr<double> slotBusyScaleDownThreshold_ {};
      };

      class MemoryScaleDownRule : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const MemoryScaleDownRule& obj) { 
          DARABONBA_PTR_TO_JSON(enabled, enabled_);
          DARABONBA_PTR_TO_JSON(memUsageScaleDownSampleInterval, memUsageScaleDownSampleInterval_);
          DARABONBA_PTR_TO_JSON(memUsageScaleDownThreshold, memUsageScaleDownThreshold_);
        };
        friend void from_json(const Darabonba::Json& j, MemoryScaleDownRule& obj) { 
          DARABONBA_PTR_FROM_JSON(enabled, enabled_);
          DARABONBA_PTR_FROM_JSON(memUsageScaleDownSampleInterval, memUsageScaleDownSampleInterval_);
          DARABONBA_PTR_FROM_JSON(memUsageScaleDownThreshold, memUsageScaleDownThreshold_);
        };
        MemoryScaleDownRule() = default ;
        MemoryScaleDownRule(const MemoryScaleDownRule &) = default ;
        MemoryScaleDownRule(MemoryScaleDownRule &&) = default ;
        MemoryScaleDownRule(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~MemoryScaleDownRule() = default ;
        MemoryScaleDownRule& operator=(const MemoryScaleDownRule &) = default ;
        MemoryScaleDownRule& operator=(MemoryScaleDownRule &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->enabled_ == nullptr
        && this->memUsageScaleDownSampleInterval_ == nullptr && this->memUsageScaleDownThreshold_ == nullptr; };
        // enabled Field Functions 
        bool hasEnabled() const { return this->enabled_ != nullptr;};
        void deleteEnabled() { this->enabled_ = nullptr;};
        inline bool getEnabled() const { DARABONBA_PTR_GET_DEFAULT(enabled_, false) };
        inline MemoryScaleDownRule& setEnabled(bool enabled) { DARABONBA_PTR_SET_VALUE(enabled_, enabled) };


        // memUsageScaleDownSampleInterval Field Functions 
        bool hasMemUsageScaleDownSampleInterval() const { return this->memUsageScaleDownSampleInterval_ != nullptr;};
        void deleteMemUsageScaleDownSampleInterval() { this->memUsageScaleDownSampleInterval_ = nullptr;};
        inline string getMemUsageScaleDownSampleInterval() const { DARABONBA_PTR_GET_DEFAULT(memUsageScaleDownSampleInterval_, "") };
        inline MemoryScaleDownRule& setMemUsageScaleDownSampleInterval(string memUsageScaleDownSampleInterval) { DARABONBA_PTR_SET_VALUE(memUsageScaleDownSampleInterval_, memUsageScaleDownSampleInterval) };


        // memUsageScaleDownThreshold Field Functions 
        bool hasMemUsageScaleDownThreshold() const { return this->memUsageScaleDownThreshold_ != nullptr;};
        void deleteMemUsageScaleDownThreshold() { this->memUsageScaleDownThreshold_ = nullptr;};
        inline double getMemUsageScaleDownThreshold() const { DARABONBA_PTR_GET_DEFAULT(memUsageScaleDownThreshold_, 0.0) };
        inline MemoryScaleDownRule& setMemUsageScaleDownThreshold(double memUsageScaleDownThreshold) { DARABONBA_PTR_SET_VALUE(memUsageScaleDownThreshold_, memUsageScaleDownThreshold) };


      protected:
        shared_ptr<bool> enabled_ {};
        shared_ptr<string> memUsageScaleDownSampleInterval_ {};
        shared_ptr<double> memUsageScaleDownThreshold_ {};
      };

      virtual bool empty() const override { return this->memoryScaleDownRule_ == nullptr
        && this->slotBusyScaleDownRule_ == nullptr; };
      // memoryScaleDownRule Field Functions 
      bool hasMemoryScaleDownRule() const { return this->memoryScaleDownRule_ != nullptr;};
      void deleteMemoryScaleDownRule() { this->memoryScaleDownRule_ = nullptr;};
      inline const ScaleDownRules::MemoryScaleDownRule & getMemoryScaleDownRule() const { DARABONBA_PTR_GET_CONST(memoryScaleDownRule_, ScaleDownRules::MemoryScaleDownRule) };
      inline ScaleDownRules::MemoryScaleDownRule getMemoryScaleDownRule() { DARABONBA_PTR_GET(memoryScaleDownRule_, ScaleDownRules::MemoryScaleDownRule) };
      inline ScaleDownRules& setMemoryScaleDownRule(const ScaleDownRules::MemoryScaleDownRule & memoryScaleDownRule) { DARABONBA_PTR_SET_VALUE(memoryScaleDownRule_, memoryScaleDownRule) };
      inline ScaleDownRules& setMemoryScaleDownRule(ScaleDownRules::MemoryScaleDownRule && memoryScaleDownRule) { DARABONBA_PTR_SET_RVALUE(memoryScaleDownRule_, memoryScaleDownRule) };


      // slotBusyScaleDownRule Field Functions 
      bool hasSlotBusyScaleDownRule() const { return this->slotBusyScaleDownRule_ != nullptr;};
      void deleteSlotBusyScaleDownRule() { this->slotBusyScaleDownRule_ = nullptr;};
      inline const ScaleDownRules::SlotBusyScaleDownRule & getSlotBusyScaleDownRule() const { DARABONBA_PTR_GET_CONST(slotBusyScaleDownRule_, ScaleDownRules::SlotBusyScaleDownRule) };
      inline ScaleDownRules::SlotBusyScaleDownRule getSlotBusyScaleDownRule() { DARABONBA_PTR_GET(slotBusyScaleDownRule_, ScaleDownRules::SlotBusyScaleDownRule) };
      inline ScaleDownRules& setSlotBusyScaleDownRule(const ScaleDownRules::SlotBusyScaleDownRule & slotBusyScaleDownRule) { DARABONBA_PTR_SET_VALUE(slotBusyScaleDownRule_, slotBusyScaleDownRule) };
      inline ScaleDownRules& setSlotBusyScaleDownRule(ScaleDownRules::SlotBusyScaleDownRule && slotBusyScaleDownRule) { DARABONBA_PTR_SET_RVALUE(slotBusyScaleDownRule_, slotBusyScaleDownRule) };


    protected:
      shared_ptr<ScaleDownRules::MemoryScaleDownRule> memoryScaleDownRule_ {};
      shared_ptr<ScaleDownRules::SlotBusyScaleDownRule> slotBusyScaleDownRule_ {};
    };

    class Limits : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Limits& obj) { 
        DARABONBA_PTR_TO_JSON(coolDownMinutes, coolDownMinutes_);
        DARABONBA_PTR_TO_JSON(jobMaxCpu, jobMaxCpu_);
        DARABONBA_PTR_TO_JSON(jobMaxMemory, jobMaxMemory_);
        DARABONBA_PTR_TO_JSON(jobMaxParallelism, jobMaxParallelism_);
        DARABONBA_PTR_TO_JSON(jobMinParallelism, jobMinParallelism_);
      };
      friend void from_json(const Darabonba::Json& j, Limits& obj) { 
        DARABONBA_PTR_FROM_JSON(coolDownMinutes, coolDownMinutes_);
        DARABONBA_PTR_FROM_JSON(jobMaxCpu, jobMaxCpu_);
        DARABONBA_PTR_FROM_JSON(jobMaxMemory, jobMaxMemory_);
        DARABONBA_PTR_FROM_JSON(jobMaxParallelism, jobMaxParallelism_);
        DARABONBA_PTR_FROM_JSON(jobMinParallelism, jobMinParallelism_);
      };
      Limits() = default ;
      Limits(const Limits &) = default ;
      Limits(Limits &&) = default ;
      Limits(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Limits() = default ;
      Limits& operator=(const Limits &) = default ;
      Limits& operator=(Limits &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->coolDownMinutes_ == nullptr
        && this->jobMaxCpu_ == nullptr && this->jobMaxMemory_ == nullptr && this->jobMaxParallelism_ == nullptr && this->jobMinParallelism_ == nullptr; };
      // coolDownMinutes Field Functions 
      bool hasCoolDownMinutes() const { return this->coolDownMinutes_ != nullptr;};
      void deleteCoolDownMinutes() { this->coolDownMinutes_ = nullptr;};
      inline int64_t getCoolDownMinutes() const { DARABONBA_PTR_GET_DEFAULT(coolDownMinutes_, 0L) };
      inline Limits& setCoolDownMinutes(int64_t coolDownMinutes) { DARABONBA_PTR_SET_VALUE(coolDownMinutes_, coolDownMinutes) };


      // jobMaxCpu Field Functions 
      bool hasJobMaxCpu() const { return this->jobMaxCpu_ != nullptr;};
      void deleteJobMaxCpu() { this->jobMaxCpu_ = nullptr;};
      inline double getJobMaxCpu() const { DARABONBA_PTR_GET_DEFAULT(jobMaxCpu_, 0.0) };
      inline Limits& setJobMaxCpu(double jobMaxCpu) { DARABONBA_PTR_SET_VALUE(jobMaxCpu_, jobMaxCpu) };


      // jobMaxMemory Field Functions 
      bool hasJobMaxMemory() const { return this->jobMaxMemory_ != nullptr;};
      void deleteJobMaxMemory() { this->jobMaxMemory_ = nullptr;};
      inline string getJobMaxMemory() const { DARABONBA_PTR_GET_DEFAULT(jobMaxMemory_, "") };
      inline Limits& setJobMaxMemory(string jobMaxMemory) { DARABONBA_PTR_SET_VALUE(jobMaxMemory_, jobMaxMemory) };


      // jobMaxParallelism Field Functions 
      bool hasJobMaxParallelism() const { return this->jobMaxParallelism_ != nullptr;};
      void deleteJobMaxParallelism() { this->jobMaxParallelism_ = nullptr;};
      inline int32_t getJobMaxParallelism() const { DARABONBA_PTR_GET_DEFAULT(jobMaxParallelism_, 0) };
      inline Limits& setJobMaxParallelism(int32_t jobMaxParallelism) { DARABONBA_PTR_SET_VALUE(jobMaxParallelism_, jobMaxParallelism) };


      // jobMinParallelism Field Functions 
      bool hasJobMinParallelism() const { return this->jobMinParallelism_ != nullptr;};
      void deleteJobMinParallelism() { this->jobMinParallelism_ = nullptr;};
      inline int32_t getJobMinParallelism() const { DARABONBA_PTR_GET_DEFAULT(jobMinParallelism_, 0) };
      inline Limits& setJobMinParallelism(int32_t jobMinParallelism) { DARABONBA_PTR_SET_VALUE(jobMinParallelism_, jobMinParallelism) };


    protected:
      shared_ptr<int64_t> coolDownMinutes_ {};
      shared_ptr<double> jobMaxCpu_ {};
      shared_ptr<string> jobMaxMemory_ {};
      shared_ptr<int32_t> jobMaxParallelism_ {};
      shared_ptr<int32_t> jobMinParallelism_ {};
    };

    class AdvancedRules : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AdvancedRules& obj) { 
        DARABONBA_PTR_TO_JSON(enabled, enabled_);
        DARABONBA_PTR_TO_JSON(parameters, parameters_);
      };
      friend void from_json(const Darabonba::Json& j, AdvancedRules& obj) { 
        DARABONBA_PTR_FROM_JSON(enabled, enabled_);
        DARABONBA_PTR_FROM_JSON(parameters, parameters_);
      };
      AdvancedRules() = default ;
      AdvancedRules(const AdvancedRules &) = default ;
      AdvancedRules(AdvancedRules &&) = default ;
      AdvancedRules(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AdvancedRules() = default ;
      AdvancedRules& operator=(const AdvancedRules &) = default ;
      AdvancedRules& operator=(AdvancedRules &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->enabled_ == nullptr
        && this->parameters_ == nullptr; };
      // enabled Field Functions 
      bool hasEnabled() const { return this->enabled_ != nullptr;};
      void deleteEnabled() { this->enabled_ = nullptr;};
      inline bool getEnabled() const { DARABONBA_PTR_GET_DEFAULT(enabled_, false) };
      inline AdvancedRules& setEnabled(bool enabled) { DARABONBA_PTR_SET_VALUE(enabled_, enabled) };


      // parameters Field Functions 
      bool hasParameters() const { return this->parameters_ != nullptr;};
      void deleteParameters() { this->parameters_ = nullptr;};
      inline const map<string, string> & getParameters() const { DARABONBA_PTR_GET_CONST(parameters_, map<string, string>) };
      inline map<string, string> getParameters() { DARABONBA_PTR_GET(parameters_, map<string, string>) };
      inline AdvancedRules& setParameters(const map<string, string> & parameters) { DARABONBA_PTR_SET_VALUE(parameters_, parameters) };
      inline AdvancedRules& setParameters(map<string, string> && parameters) { DARABONBA_PTR_SET_RVALUE(parameters_, parameters) };


    protected:
      shared_ptr<bool> enabled_ {};
      shared_ptr<map<string, string>> parameters_ {};
    };

    virtual bool empty() const override { return this->advancedRules_ == nullptr
        && this->limits_ == nullptr && this->scaleDownRules_ == nullptr && this->scaleUpRules_ == nullptr && this->silentPeriodConfig_ == nullptr; };
    // advancedRules Field Functions 
    bool hasAdvancedRules() const { return this->advancedRules_ != nullptr;};
    void deleteAdvancedRules() { this->advancedRules_ = nullptr;};
    inline const AutopilotPolicy::AdvancedRules & getAdvancedRules() const { DARABONBA_PTR_GET_CONST(advancedRules_, AutopilotPolicy::AdvancedRules) };
    inline AutopilotPolicy::AdvancedRules getAdvancedRules() { DARABONBA_PTR_GET(advancedRules_, AutopilotPolicy::AdvancedRules) };
    inline AutopilotPolicy& setAdvancedRules(const AutopilotPolicy::AdvancedRules & advancedRules) { DARABONBA_PTR_SET_VALUE(advancedRules_, advancedRules) };
    inline AutopilotPolicy& setAdvancedRules(AutopilotPolicy::AdvancedRules && advancedRules) { DARABONBA_PTR_SET_RVALUE(advancedRules_, advancedRules) };


    // limits Field Functions 
    bool hasLimits() const { return this->limits_ != nullptr;};
    void deleteLimits() { this->limits_ = nullptr;};
    inline const AutopilotPolicy::Limits & getLimits() const { DARABONBA_PTR_GET_CONST(limits_, AutopilotPolicy::Limits) };
    inline AutopilotPolicy::Limits getLimits() { DARABONBA_PTR_GET(limits_, AutopilotPolicy::Limits) };
    inline AutopilotPolicy& setLimits(const AutopilotPolicy::Limits & limits) { DARABONBA_PTR_SET_VALUE(limits_, limits) };
    inline AutopilotPolicy& setLimits(AutopilotPolicy::Limits && limits) { DARABONBA_PTR_SET_RVALUE(limits_, limits) };


    // scaleDownRules Field Functions 
    bool hasScaleDownRules() const { return this->scaleDownRules_ != nullptr;};
    void deleteScaleDownRules() { this->scaleDownRules_ = nullptr;};
    inline const AutopilotPolicy::ScaleDownRules & getScaleDownRules() const { DARABONBA_PTR_GET_CONST(scaleDownRules_, AutopilotPolicy::ScaleDownRules) };
    inline AutopilotPolicy::ScaleDownRules getScaleDownRules() { DARABONBA_PTR_GET(scaleDownRules_, AutopilotPolicy::ScaleDownRules) };
    inline AutopilotPolicy& setScaleDownRules(const AutopilotPolicy::ScaleDownRules & scaleDownRules) { DARABONBA_PTR_SET_VALUE(scaleDownRules_, scaleDownRules) };
    inline AutopilotPolicy& setScaleDownRules(AutopilotPolicy::ScaleDownRules && scaleDownRules) { DARABONBA_PTR_SET_RVALUE(scaleDownRules_, scaleDownRules) };


    // scaleUpRules Field Functions 
    bool hasScaleUpRules() const { return this->scaleUpRules_ != nullptr;};
    void deleteScaleUpRules() { this->scaleUpRules_ = nullptr;};
    inline const AutopilotPolicy::ScaleUpRules & getScaleUpRules() const { DARABONBA_PTR_GET_CONST(scaleUpRules_, AutopilotPolicy::ScaleUpRules) };
    inline AutopilotPolicy::ScaleUpRules getScaleUpRules() { DARABONBA_PTR_GET(scaleUpRules_, AutopilotPolicy::ScaleUpRules) };
    inline AutopilotPolicy& setScaleUpRules(const AutopilotPolicy::ScaleUpRules & scaleUpRules) { DARABONBA_PTR_SET_VALUE(scaleUpRules_, scaleUpRules) };
    inline AutopilotPolicy& setScaleUpRules(AutopilotPolicy::ScaleUpRules && scaleUpRules) { DARABONBA_PTR_SET_RVALUE(scaleUpRules_, scaleUpRules) };


    // silentPeriodConfig Field Functions 
    bool hasSilentPeriodConfig() const { return this->silentPeriodConfig_ != nullptr;};
    void deleteSilentPeriodConfig() { this->silentPeriodConfig_ = nullptr;};
    inline const AutopilotPolicy::SilentPeriodConfig & getSilentPeriodConfig() const { DARABONBA_PTR_GET_CONST(silentPeriodConfig_, AutopilotPolicy::SilentPeriodConfig) };
    inline AutopilotPolicy::SilentPeriodConfig getSilentPeriodConfig() { DARABONBA_PTR_GET(silentPeriodConfig_, AutopilotPolicy::SilentPeriodConfig) };
    inline AutopilotPolicy& setSilentPeriodConfig(const AutopilotPolicy::SilentPeriodConfig & silentPeriodConfig) { DARABONBA_PTR_SET_VALUE(silentPeriodConfig_, silentPeriodConfig) };
    inline AutopilotPolicy& setSilentPeriodConfig(AutopilotPolicy::SilentPeriodConfig && silentPeriodConfig) { DARABONBA_PTR_SET_RVALUE(silentPeriodConfig_, silentPeriodConfig) };


  protected:
    shared_ptr<AutopilotPolicy::AdvancedRules> advancedRules_ {};
    shared_ptr<AutopilotPolicy::Limits> limits_ {};
    shared_ptr<AutopilotPolicy::ScaleDownRules> scaleDownRules_ {};
    shared_ptr<AutopilotPolicy::ScaleUpRules> scaleUpRules_ {};
    shared_ptr<AutopilotPolicy::SilentPeriodConfig> silentPeriodConfig_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ververica20220718
#endif
