// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_NODESTATISTICS_HPP_
#define ALIBABACLOUD_MODELS_NODESTATISTICS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/StatisticsResources.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiStudio20220112
{
namespace Models
{
  class NodeStatistics : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const NodeStatistics& obj) { 
      DARABONBA_PTR_TO_JSON(ActualMinResources, actualMinResources_);
      DARABONBA_PTR_TO_JSON(GPUDetails, GPUDetails_);
      DARABONBA_PTR_TO_JSON(HyperNodeDetails, hyperNodeDetails_);
      DARABONBA_PTR_TO_JSON(IdleResources, idleResources_);
      DARABONBA_PTR_TO_JSON(SchedulableResources, schedulableResources_);
      DARABONBA_PTR_TO_JSON(SystemReservedResources, systemReservedResources_);
    };
    friend void from_json(const Darabonba::Json& j, NodeStatistics& obj) { 
      DARABONBA_PTR_FROM_JSON(ActualMinResources, actualMinResources_);
      DARABONBA_PTR_FROM_JSON(GPUDetails, GPUDetails_);
      DARABONBA_PTR_FROM_JSON(HyperNodeDetails, hyperNodeDetails_);
      DARABONBA_PTR_FROM_JSON(IdleResources, idleResources_);
      DARABONBA_PTR_FROM_JSON(SchedulableResources, schedulableResources_);
      DARABONBA_PTR_FROM_JSON(SystemReservedResources, systemReservedResources_);
    };
    NodeStatistics() = default ;
    NodeStatistics(const NodeStatistics &) = default ;
    NodeStatistics(NodeStatistics &&) = default ;
    NodeStatistics(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~NodeStatistics() = default ;
    NodeStatistics& operator=(const NodeStatistics &) = default ;
    NodeStatistics& operator=(NodeStatistics &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class HyperNodeDetails : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const HyperNodeDetails& obj) { 
        DARABONBA_PTR_TO_JSON(Count, count_);
        DARABONBA_PTR_TO_JSON(IdleNum, idleNum_);
      };
      friend void from_json(const Darabonba::Json& j, HyperNodeDetails& obj) { 
        DARABONBA_PTR_FROM_JSON(Count, count_);
        DARABONBA_PTR_FROM_JSON(IdleNum, idleNum_);
      };
      HyperNodeDetails() = default ;
      HyperNodeDetails(const HyperNodeDetails &) = default ;
      HyperNodeDetails(HyperNodeDetails &&) = default ;
      HyperNodeDetails(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~HyperNodeDetails() = default ;
      HyperNodeDetails& operator=(const HyperNodeDetails &) = default ;
      HyperNodeDetails& operator=(HyperNodeDetails &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->count_ == nullptr
        && this->idleNum_ == nullptr; };
      // count Field Functions 
      bool hasCount() const { return this->count_ != nullptr;};
      void deleteCount() { this->count_ = nullptr;};
      inline int64_t getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, 0L) };
      inline HyperNodeDetails& setCount(int64_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


      // idleNum Field Functions 
      bool hasIdleNum() const { return this->idleNum_ != nullptr;};
      void deleteIdleNum() { this->idleNum_ = nullptr;};
      inline int64_t getIdleNum() const { DARABONBA_PTR_GET_DEFAULT(idleNum_, 0L) };
      inline HyperNodeDetails& setIdleNum(int64_t idleNum) { DARABONBA_PTR_SET_VALUE(idleNum_, idleNum) };


    protected:
      shared_ptr<int64_t> count_ {};
      shared_ptr<int64_t> idleNum_ {};
    };

    class GPUDetails : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const GPUDetails& obj) { 
        DARABONBA_PTR_TO_JSON(Count, count_);
        DARABONBA_PTR_TO_JSON(IdleNum, idleNum_);
      };
      friend void from_json(const Darabonba::Json& j, GPUDetails& obj) { 
        DARABONBA_PTR_FROM_JSON(Count, count_);
        DARABONBA_PTR_FROM_JSON(IdleNum, idleNum_);
      };
      GPUDetails() = default ;
      GPUDetails(const GPUDetails &) = default ;
      GPUDetails(GPUDetails &&) = default ;
      GPUDetails(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~GPUDetails() = default ;
      GPUDetails& operator=(const GPUDetails &) = default ;
      GPUDetails& operator=(GPUDetails &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->count_ == nullptr
        && this->idleNum_ == nullptr; };
      // count Field Functions 
      bool hasCount() const { return this->count_ != nullptr;};
      void deleteCount() { this->count_ = nullptr;};
      inline int64_t getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, 0L) };
      inline GPUDetails& setCount(int64_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


      // idleNum Field Functions 
      bool hasIdleNum() const { return this->idleNum_ != nullptr;};
      void deleteIdleNum() { this->idleNum_ = nullptr;};
      inline int64_t getIdleNum() const { DARABONBA_PTR_GET_DEFAULT(idleNum_, 0L) };
      inline GPUDetails& setIdleNum(int64_t idleNum) { DARABONBA_PTR_SET_VALUE(idleNum_, idleNum) };


    protected:
      shared_ptr<int64_t> count_ {};
      shared_ptr<int64_t> idleNum_ {};
    };

    virtual bool empty() const override { return this->actualMinResources_ == nullptr
        && this->GPUDetails_ == nullptr && this->hyperNodeDetails_ == nullptr && this->idleResources_ == nullptr && this->schedulableResources_ == nullptr && this->systemReservedResources_ == nullptr; };
    // actualMinResources Field Functions 
    bool hasActualMinResources() const { return this->actualMinResources_ != nullptr;};
    void deleteActualMinResources() { this->actualMinResources_ = nullptr;};
    inline const StatisticsResources & getActualMinResources() const { DARABONBA_PTR_GET_CONST(actualMinResources_, StatisticsResources) };
    inline StatisticsResources getActualMinResources() { DARABONBA_PTR_GET(actualMinResources_, StatisticsResources) };
    inline NodeStatistics& setActualMinResources(const StatisticsResources & actualMinResources) { DARABONBA_PTR_SET_VALUE(actualMinResources_, actualMinResources) };
    inline NodeStatistics& setActualMinResources(StatisticsResources && actualMinResources) { DARABONBA_PTR_SET_RVALUE(actualMinResources_, actualMinResources) };


    // GPUDetails Field Functions 
    bool hasGPUDetails() const { return this->GPUDetails_ != nullptr;};
    void deleteGPUDetails() { this->GPUDetails_ = nullptr;};
    inline const vector<NodeStatistics::GPUDetails> & getGPUDetails() const { DARABONBA_PTR_GET_CONST(GPUDetails_, vector<NodeStatistics::GPUDetails>) };
    inline vector<NodeStatistics::GPUDetails> getGPUDetails() { DARABONBA_PTR_GET(GPUDetails_, vector<NodeStatistics::GPUDetails>) };
    inline NodeStatistics& setGPUDetails(const vector<NodeStatistics::GPUDetails> & gPUDetails) { DARABONBA_PTR_SET_VALUE(GPUDetails_, gPUDetails) };
    inline NodeStatistics& setGPUDetails(vector<NodeStatistics::GPUDetails> && gPUDetails) { DARABONBA_PTR_SET_RVALUE(GPUDetails_, gPUDetails) };


    // hyperNodeDetails Field Functions 
    bool hasHyperNodeDetails() const { return this->hyperNodeDetails_ != nullptr;};
    void deleteHyperNodeDetails() { this->hyperNodeDetails_ = nullptr;};
    inline const vector<NodeStatistics::HyperNodeDetails> & getHyperNodeDetails() const { DARABONBA_PTR_GET_CONST(hyperNodeDetails_, vector<NodeStatistics::HyperNodeDetails>) };
    inline vector<NodeStatistics::HyperNodeDetails> getHyperNodeDetails() { DARABONBA_PTR_GET(hyperNodeDetails_, vector<NodeStatistics::HyperNodeDetails>) };
    inline NodeStatistics& setHyperNodeDetails(const vector<NodeStatistics::HyperNodeDetails> & hyperNodeDetails) { DARABONBA_PTR_SET_VALUE(hyperNodeDetails_, hyperNodeDetails) };
    inline NodeStatistics& setHyperNodeDetails(vector<NodeStatistics::HyperNodeDetails> && hyperNodeDetails) { DARABONBA_PTR_SET_RVALUE(hyperNodeDetails_, hyperNodeDetails) };


    // idleResources Field Functions 
    bool hasIdleResources() const { return this->idleResources_ != nullptr;};
    void deleteIdleResources() { this->idleResources_ = nullptr;};
    inline const StatisticsResources & getIdleResources() const { DARABONBA_PTR_GET_CONST(idleResources_, StatisticsResources) };
    inline StatisticsResources getIdleResources() { DARABONBA_PTR_GET(idleResources_, StatisticsResources) };
    inline NodeStatistics& setIdleResources(const StatisticsResources & idleResources) { DARABONBA_PTR_SET_VALUE(idleResources_, idleResources) };
    inline NodeStatistics& setIdleResources(StatisticsResources && idleResources) { DARABONBA_PTR_SET_RVALUE(idleResources_, idleResources) };


    // schedulableResources Field Functions 
    bool hasSchedulableResources() const { return this->schedulableResources_ != nullptr;};
    void deleteSchedulableResources() { this->schedulableResources_ = nullptr;};
    inline const StatisticsResources & getSchedulableResources() const { DARABONBA_PTR_GET_CONST(schedulableResources_, StatisticsResources) };
    inline StatisticsResources getSchedulableResources() { DARABONBA_PTR_GET(schedulableResources_, StatisticsResources) };
    inline NodeStatistics& setSchedulableResources(const StatisticsResources & schedulableResources) { DARABONBA_PTR_SET_VALUE(schedulableResources_, schedulableResources) };
    inline NodeStatistics& setSchedulableResources(StatisticsResources && schedulableResources) { DARABONBA_PTR_SET_RVALUE(schedulableResources_, schedulableResources) };


    // systemReservedResources Field Functions 
    bool hasSystemReservedResources() const { return this->systemReservedResources_ != nullptr;};
    void deleteSystemReservedResources() { this->systemReservedResources_ = nullptr;};
    inline const StatisticsResources & getSystemReservedResources() const { DARABONBA_PTR_GET_CONST(systemReservedResources_, StatisticsResources) };
    inline StatisticsResources getSystemReservedResources() { DARABONBA_PTR_GET(systemReservedResources_, StatisticsResources) };
    inline NodeStatistics& setSystemReservedResources(const StatisticsResources & systemReservedResources) { DARABONBA_PTR_SET_VALUE(systemReservedResources_, systemReservedResources) };
    inline NodeStatistics& setSystemReservedResources(StatisticsResources && systemReservedResources) { DARABONBA_PTR_SET_RVALUE(systemReservedResources_, systemReservedResources) };


  protected:
    shared_ptr<StatisticsResources> actualMinResources_ {};
    shared_ptr<vector<NodeStatistics::GPUDetails>> GPUDetails_ {};
    shared_ptr<vector<NodeStatistics::HyperNodeDetails>> hyperNodeDetails_ {};
    shared_ptr<StatisticsResources> idleResources_ {};
    shared_ptr<StatisticsResources> schedulableResources_ {};
    shared_ptr<StatisticsResources> systemReservedResources_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiStudio20220112
#endif
