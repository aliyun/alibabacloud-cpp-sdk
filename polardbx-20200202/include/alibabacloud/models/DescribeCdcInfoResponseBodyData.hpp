// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECDCINFORESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECDCINFORESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeCdcInfoResponseBodyDataInstanceTopologyList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardbx20200202
{
namespace Models
{
  class DescribeCdcInfoResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCdcInfoResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(BinlogPersistTime, binlogPersistTime_);
      DARABONBA_PTR_TO_JSON(BinlogSize, binlogSize_);
      DARABONBA_PTR_TO_JSON(CdcNewVersion, cdcNewVersion_);
      DARABONBA_PTR_TO_JSON(CheckSumSwitch, checkSumSwitch_);
      DARABONBA_PTR_TO_JSON(EnableCyclicReplication, enableCyclicReplication_);
      DARABONBA_PTR_TO_JSON(InstanceTopologyList, instanceTopologyList_);
      DARABONBA_PTR_TO_JSON(ServerId, serverId_);
      DARABONBA_PTR_TO_JSON(VersionSupportMultiCdc, versionSupportMultiCdc_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCdcInfoResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(BinlogPersistTime, binlogPersistTime_);
      DARABONBA_PTR_FROM_JSON(BinlogSize, binlogSize_);
      DARABONBA_PTR_FROM_JSON(CdcNewVersion, cdcNewVersion_);
      DARABONBA_PTR_FROM_JSON(CheckSumSwitch, checkSumSwitch_);
      DARABONBA_PTR_FROM_JSON(EnableCyclicReplication, enableCyclicReplication_);
      DARABONBA_PTR_FROM_JSON(InstanceTopologyList, instanceTopologyList_);
      DARABONBA_PTR_FROM_JSON(ServerId, serverId_);
      DARABONBA_PTR_FROM_JSON(VersionSupportMultiCdc, versionSupportMultiCdc_);
    };
    DescribeCdcInfoResponseBodyData() = default ;
    DescribeCdcInfoResponseBodyData(const DescribeCdcInfoResponseBodyData &) = default ;
    DescribeCdcInfoResponseBodyData(DescribeCdcInfoResponseBodyData &&) = default ;
    DescribeCdcInfoResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCdcInfoResponseBodyData() = default ;
    DescribeCdcInfoResponseBodyData& operator=(const DescribeCdcInfoResponseBodyData &) = default ;
    DescribeCdcInfoResponseBodyData& operator=(DescribeCdcInfoResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->binlogPersistTime_ != nullptr
        && this->binlogSize_ != nullptr && this->cdcNewVersion_ != nullptr && this->checkSumSwitch_ != nullptr && this->enableCyclicReplication_ != nullptr && this->instanceTopologyList_ != nullptr
        && this->serverId_ != nullptr && this->versionSupportMultiCdc_ != nullptr; };
    // binlogPersistTime Field Functions 
    bool hasBinlogPersistTime() const { return this->binlogPersistTime_ != nullptr;};
    void deleteBinlogPersistTime() { this->binlogPersistTime_ = nullptr;};
    inline int32_t binlogPersistTime() const { DARABONBA_PTR_GET_DEFAULT(binlogPersistTime_, 0) };
    inline DescribeCdcInfoResponseBodyData& setBinlogPersistTime(int32_t binlogPersistTime) { DARABONBA_PTR_SET_VALUE(binlogPersistTime_, binlogPersistTime) };


    // binlogSize Field Functions 
    bool hasBinlogSize() const { return this->binlogSize_ != nullptr;};
    void deleteBinlogSize() { this->binlogSize_ = nullptr;};
    inline int32_t binlogSize() const { DARABONBA_PTR_GET_DEFAULT(binlogSize_, 0) };
    inline DescribeCdcInfoResponseBodyData& setBinlogSize(int32_t binlogSize) { DARABONBA_PTR_SET_VALUE(binlogSize_, binlogSize) };


    // cdcNewVersion Field Functions 
    bool hasCdcNewVersion() const { return this->cdcNewVersion_ != nullptr;};
    void deleteCdcNewVersion() { this->cdcNewVersion_ = nullptr;};
    inline string cdcNewVersion() const { DARABONBA_PTR_GET_DEFAULT(cdcNewVersion_, "") };
    inline DescribeCdcInfoResponseBodyData& setCdcNewVersion(string cdcNewVersion) { DARABONBA_PTR_SET_VALUE(cdcNewVersion_, cdcNewVersion) };


    // checkSumSwitch Field Functions 
    bool hasCheckSumSwitch() const { return this->checkSumSwitch_ != nullptr;};
    void deleteCheckSumSwitch() { this->checkSumSwitch_ = nullptr;};
    inline string checkSumSwitch() const { DARABONBA_PTR_GET_DEFAULT(checkSumSwitch_, "") };
    inline DescribeCdcInfoResponseBodyData& setCheckSumSwitch(string checkSumSwitch) { DARABONBA_PTR_SET_VALUE(checkSumSwitch_, checkSumSwitch) };


    // enableCyclicReplication Field Functions 
    bool hasEnableCyclicReplication() const { return this->enableCyclicReplication_ != nullptr;};
    void deleteEnableCyclicReplication() { this->enableCyclicReplication_ = nullptr;};
    inline bool enableCyclicReplication() const { DARABONBA_PTR_GET_DEFAULT(enableCyclicReplication_, false) };
    inline DescribeCdcInfoResponseBodyData& setEnableCyclicReplication(bool enableCyclicReplication) { DARABONBA_PTR_SET_VALUE(enableCyclicReplication_, enableCyclicReplication) };


    // instanceTopologyList Field Functions 
    bool hasInstanceTopologyList() const { return this->instanceTopologyList_ != nullptr;};
    void deleteInstanceTopologyList() { this->instanceTopologyList_ = nullptr;};
    inline const vector<Models::DescribeCdcInfoResponseBodyDataInstanceTopologyList> & instanceTopologyList() const { DARABONBA_PTR_GET_CONST(instanceTopologyList_, vector<Models::DescribeCdcInfoResponseBodyDataInstanceTopologyList>) };
    inline vector<Models::DescribeCdcInfoResponseBodyDataInstanceTopologyList> instanceTopologyList() { DARABONBA_PTR_GET(instanceTopologyList_, vector<Models::DescribeCdcInfoResponseBodyDataInstanceTopologyList>) };
    inline DescribeCdcInfoResponseBodyData& setInstanceTopologyList(const vector<Models::DescribeCdcInfoResponseBodyDataInstanceTopologyList> & instanceTopologyList) { DARABONBA_PTR_SET_VALUE(instanceTopologyList_, instanceTopologyList) };
    inline DescribeCdcInfoResponseBodyData& setInstanceTopologyList(vector<Models::DescribeCdcInfoResponseBodyDataInstanceTopologyList> && instanceTopologyList) { DARABONBA_PTR_SET_RVALUE(instanceTopologyList_, instanceTopologyList) };


    // serverId Field Functions 
    bool hasServerId() const { return this->serverId_ != nullptr;};
    void deleteServerId() { this->serverId_ = nullptr;};
    inline int32_t serverId() const { DARABONBA_PTR_GET_DEFAULT(serverId_, 0) };
    inline DescribeCdcInfoResponseBodyData& setServerId(int32_t serverId) { DARABONBA_PTR_SET_VALUE(serverId_, serverId) };


    // versionSupportMultiCdc Field Functions 
    bool hasVersionSupportMultiCdc() const { return this->versionSupportMultiCdc_ != nullptr;};
    void deleteVersionSupportMultiCdc() { this->versionSupportMultiCdc_ = nullptr;};
    inline bool versionSupportMultiCdc() const { DARABONBA_PTR_GET_DEFAULT(versionSupportMultiCdc_, false) };
    inline DescribeCdcInfoResponseBodyData& setVersionSupportMultiCdc(bool versionSupportMultiCdc) { DARABONBA_PTR_SET_VALUE(versionSupportMultiCdc_, versionSupportMultiCdc) };


  protected:
    std::shared_ptr<int32_t> binlogPersistTime_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int32_t> binlogSize_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> cdcNewVersion_ = nullptr;
    std::shared_ptr<string> checkSumSwitch_ = nullptr;
    std::shared_ptr<bool> enableCyclicReplication_ = nullptr;
    std::shared_ptr<vector<Models::DescribeCdcInfoResponseBodyDataInstanceTopologyList>> instanceTopologyList_ = nullptr;
    // server id
    // 
    // This parameter is required.
    std::shared_ptr<int32_t> serverId_ = nullptr;
    std::shared_ptr<bool> versionSupportMultiCdc_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardbx20200202
#endif
