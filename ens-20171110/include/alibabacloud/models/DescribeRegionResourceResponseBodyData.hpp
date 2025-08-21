// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEREGIONRESOURCERESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEREGIONRESOURCERESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeRegionResourceResponseBodyDataArmCard.hpp>
#include <vector>
#include <alibabacloud/models/DescribeRegionResourceResponseBodyDataBandwidth.hpp>
#include <alibabacloud/models/DescribeRegionResourceResponseBodyDataBlockStorage.hpp>
#include <alibabacloud/models/DescribeRegionResourceResponseBodyDataCpu.hpp>
#include <alibabacloud/models/DescribeRegionResourceResponseBodyDataGpu.hpp>
#include <alibabacloud/models/DescribeRegionResourceResponseBodyDataHdd.hpp>
#include <alibabacloud/models/DescribeRegionResourceResponseBodyDataIpv4s.hpp>
#include <alibabacloud/models/DescribeRegionResourceResponseBodyDataIpv6s.hpp>
#include <alibabacloud/models/DescribeRegionResourceResponseBodyDataMemory.hpp>
#include <alibabacloud/models/DescribeRegionResourceResponseBodyDataNvme.hpp>
#include <alibabacloud/models/DescribeRegionResourceResponseBodyDataOssStorage.hpp>
#include <alibabacloud/models/DescribeRegionResourceResponseBodyDataPangu.hpp>
#include <alibabacloud/models/DescribeRegionResourceResponseBodyDataPcfarmNum.hpp>
#include <alibabacloud/models/DescribeRegionResourceResponseBodyDataSsd.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class DescribeRegionResourceResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRegionResourceResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(AreaCode, areaCode_);
      DARABONBA_PTR_TO_JSON(AreaName, areaName_);
      DARABONBA_PTR_TO_JSON(ArmCard, armCard_);
      DARABONBA_PTR_TO_JSON(Attributes, attributes_);
      DARABONBA_PTR_TO_JSON(Bandwidth, bandwidth_);
      DARABONBA_PTR_TO_JSON(BlockStorage, blockStorage_);
      DARABONBA_PTR_TO_JSON(CountryCode, countryCode_);
      DARABONBA_PTR_TO_JSON(CountryName, countryName_);
      DARABONBA_PTR_TO_JSON(Cpu, cpu_);
      DARABONBA_PTR_TO_JSON(Gpu, gpu_);
      DARABONBA_PTR_TO_JSON(Hdd, hdd_);
      DARABONBA_PTR_TO_JSON(HouseId, houseId_);
      DARABONBA_PTR_TO_JSON(Ipv4s, ipv4s_);
      DARABONBA_PTR_TO_JSON(Ipv6s, ipv6s_);
      DARABONBA_PTR_TO_JSON(IspTypes, ispTypes_);
      DARABONBA_PTR_TO_JSON(Memory, memory_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Nvme, nvme_);
      DARABONBA_PTR_TO_JSON(OssStorage, ossStorage_);
      DARABONBA_PTR_TO_JSON(Pangu, pangu_);
      DARABONBA_PTR_TO_JSON(PcfarmNum, pcfarmNum_);
      DARABONBA_PTR_TO_JSON(Poc, poc_);
      DARABONBA_PTR_TO_JSON(ProvinceCode, provinceCode_);
      DARABONBA_PTR_TO_JSON(ProvinceName, provinceName_);
      DARABONBA_PTR_TO_JSON(ReserveDisable, reserveDisable_);
      DARABONBA_PTR_TO_JSON(Ssd, ssd_);
      DARABONBA_PTR_TO_JSON(StatusDisable, statusDisable_);
      DARABONBA_PTR_TO_JSON(Type, type_);
      DARABONBA_PTR_TO_JSON(Uuid, uuid_);
      DARABONBA_PTR_TO_JSON(Virtual, virtual_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRegionResourceResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(AreaCode, areaCode_);
      DARABONBA_PTR_FROM_JSON(AreaName, areaName_);
      DARABONBA_PTR_FROM_JSON(ArmCard, armCard_);
      DARABONBA_PTR_FROM_JSON(Attributes, attributes_);
      DARABONBA_PTR_FROM_JSON(Bandwidth, bandwidth_);
      DARABONBA_PTR_FROM_JSON(BlockStorage, blockStorage_);
      DARABONBA_PTR_FROM_JSON(CountryCode, countryCode_);
      DARABONBA_PTR_FROM_JSON(CountryName, countryName_);
      DARABONBA_PTR_FROM_JSON(Cpu, cpu_);
      DARABONBA_PTR_FROM_JSON(Gpu, gpu_);
      DARABONBA_PTR_FROM_JSON(Hdd, hdd_);
      DARABONBA_PTR_FROM_JSON(HouseId, houseId_);
      DARABONBA_PTR_FROM_JSON(Ipv4s, ipv4s_);
      DARABONBA_PTR_FROM_JSON(Ipv6s, ipv6s_);
      DARABONBA_PTR_FROM_JSON(IspTypes, ispTypes_);
      DARABONBA_PTR_FROM_JSON(Memory, memory_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Nvme, nvme_);
      DARABONBA_PTR_FROM_JSON(OssStorage, ossStorage_);
      DARABONBA_PTR_FROM_JSON(Pangu, pangu_);
      DARABONBA_PTR_FROM_JSON(PcfarmNum, pcfarmNum_);
      DARABONBA_PTR_FROM_JSON(Poc, poc_);
      DARABONBA_PTR_FROM_JSON(ProvinceCode, provinceCode_);
      DARABONBA_PTR_FROM_JSON(ProvinceName, provinceName_);
      DARABONBA_PTR_FROM_JSON(ReserveDisable, reserveDisable_);
      DARABONBA_PTR_FROM_JSON(Ssd, ssd_);
      DARABONBA_PTR_FROM_JSON(StatusDisable, statusDisable_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
      DARABONBA_PTR_FROM_JSON(Uuid, uuid_);
      DARABONBA_PTR_FROM_JSON(Virtual, virtual_);
    };
    DescribeRegionResourceResponseBodyData() = default ;
    DescribeRegionResourceResponseBodyData(const DescribeRegionResourceResponseBodyData &) = default ;
    DescribeRegionResourceResponseBodyData(DescribeRegionResourceResponseBodyData &&) = default ;
    DescribeRegionResourceResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRegionResourceResponseBodyData() = default ;
    DescribeRegionResourceResponseBodyData& operator=(const DescribeRegionResourceResponseBodyData &) = default ;
    DescribeRegionResourceResponseBodyData& operator=(DescribeRegionResourceResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->areaCode_ != nullptr
        && this->areaName_ != nullptr && this->armCard_ != nullptr && this->attributes_ != nullptr && this->bandwidth_ != nullptr && this->blockStorage_ != nullptr
        && this->countryCode_ != nullptr && this->countryName_ != nullptr && this->cpu_ != nullptr && this->gpu_ != nullptr && this->hdd_ != nullptr
        && this->houseId_ != nullptr && this->ipv4s_ != nullptr && this->ipv6s_ != nullptr && this->ispTypes_ != nullptr && this->memory_ != nullptr
        && this->name_ != nullptr && this->nvme_ != nullptr && this->ossStorage_ != nullptr && this->pangu_ != nullptr && this->pcfarmNum_ != nullptr
        && this->poc_ != nullptr && this->provinceCode_ != nullptr && this->provinceName_ != nullptr && this->reserveDisable_ != nullptr && this->ssd_ != nullptr
        && this->statusDisable_ != nullptr && this->type_ != nullptr && this->uuid_ != nullptr && this->virtual_ != nullptr; };
    // areaCode Field Functions 
    bool hasAreaCode() const { return this->areaCode_ != nullptr;};
    void deleteAreaCode() { this->areaCode_ = nullptr;};
    inline string areaCode() const { DARABONBA_PTR_GET_DEFAULT(areaCode_, "") };
    inline DescribeRegionResourceResponseBodyData& setAreaCode(string areaCode) { DARABONBA_PTR_SET_VALUE(areaCode_, areaCode) };


    // areaName Field Functions 
    bool hasAreaName() const { return this->areaName_ != nullptr;};
    void deleteAreaName() { this->areaName_ = nullptr;};
    inline string areaName() const { DARABONBA_PTR_GET_DEFAULT(areaName_, "") };
    inline DescribeRegionResourceResponseBodyData& setAreaName(string areaName) { DARABONBA_PTR_SET_VALUE(areaName_, areaName) };


    // armCard Field Functions 
    bool hasArmCard() const { return this->armCard_ != nullptr;};
    void deleteArmCard() { this->armCard_ = nullptr;};
    inline const Models::DescribeRegionResourceResponseBodyDataArmCard & armCard() const { DARABONBA_PTR_GET_CONST(armCard_, Models::DescribeRegionResourceResponseBodyDataArmCard) };
    inline Models::DescribeRegionResourceResponseBodyDataArmCard armCard() { DARABONBA_PTR_GET(armCard_, Models::DescribeRegionResourceResponseBodyDataArmCard) };
    inline DescribeRegionResourceResponseBodyData& setArmCard(const Models::DescribeRegionResourceResponseBodyDataArmCard & armCard) { DARABONBA_PTR_SET_VALUE(armCard_, armCard) };
    inline DescribeRegionResourceResponseBodyData& setArmCard(Models::DescribeRegionResourceResponseBodyDataArmCard && armCard) { DARABONBA_PTR_SET_RVALUE(armCard_, armCard) };


    // attributes Field Functions 
    bool hasAttributes() const { return this->attributes_ != nullptr;};
    void deleteAttributes() { this->attributes_ = nullptr;};
    inline const vector<string> & attributes() const { DARABONBA_PTR_GET_CONST(attributes_, vector<string>) };
    inline vector<string> attributes() { DARABONBA_PTR_GET(attributes_, vector<string>) };
    inline DescribeRegionResourceResponseBodyData& setAttributes(const vector<string> & attributes) { DARABONBA_PTR_SET_VALUE(attributes_, attributes) };
    inline DescribeRegionResourceResponseBodyData& setAttributes(vector<string> && attributes) { DARABONBA_PTR_SET_RVALUE(attributes_, attributes) };


    // bandwidth Field Functions 
    bool hasBandwidth() const { return this->bandwidth_ != nullptr;};
    void deleteBandwidth() { this->bandwidth_ = nullptr;};
    inline const Models::DescribeRegionResourceResponseBodyDataBandwidth & bandwidth() const { DARABONBA_PTR_GET_CONST(bandwidth_, Models::DescribeRegionResourceResponseBodyDataBandwidth) };
    inline Models::DescribeRegionResourceResponseBodyDataBandwidth bandwidth() { DARABONBA_PTR_GET(bandwidth_, Models::DescribeRegionResourceResponseBodyDataBandwidth) };
    inline DescribeRegionResourceResponseBodyData& setBandwidth(const Models::DescribeRegionResourceResponseBodyDataBandwidth & bandwidth) { DARABONBA_PTR_SET_VALUE(bandwidth_, bandwidth) };
    inline DescribeRegionResourceResponseBodyData& setBandwidth(Models::DescribeRegionResourceResponseBodyDataBandwidth && bandwidth) { DARABONBA_PTR_SET_RVALUE(bandwidth_, bandwidth) };


    // blockStorage Field Functions 
    bool hasBlockStorage() const { return this->blockStorage_ != nullptr;};
    void deleteBlockStorage() { this->blockStorage_ = nullptr;};
    inline const Models::DescribeRegionResourceResponseBodyDataBlockStorage & blockStorage() const { DARABONBA_PTR_GET_CONST(blockStorage_, Models::DescribeRegionResourceResponseBodyDataBlockStorage) };
    inline Models::DescribeRegionResourceResponseBodyDataBlockStorage blockStorage() { DARABONBA_PTR_GET(blockStorage_, Models::DescribeRegionResourceResponseBodyDataBlockStorage) };
    inline DescribeRegionResourceResponseBodyData& setBlockStorage(const Models::DescribeRegionResourceResponseBodyDataBlockStorage & blockStorage) { DARABONBA_PTR_SET_VALUE(blockStorage_, blockStorage) };
    inline DescribeRegionResourceResponseBodyData& setBlockStorage(Models::DescribeRegionResourceResponseBodyDataBlockStorage && blockStorage) { DARABONBA_PTR_SET_RVALUE(blockStorage_, blockStorage) };


    // countryCode Field Functions 
    bool hasCountryCode() const { return this->countryCode_ != nullptr;};
    void deleteCountryCode() { this->countryCode_ = nullptr;};
    inline string countryCode() const { DARABONBA_PTR_GET_DEFAULT(countryCode_, "") };
    inline DescribeRegionResourceResponseBodyData& setCountryCode(string countryCode) { DARABONBA_PTR_SET_VALUE(countryCode_, countryCode) };


    // countryName Field Functions 
    bool hasCountryName() const { return this->countryName_ != nullptr;};
    void deleteCountryName() { this->countryName_ = nullptr;};
    inline string countryName() const { DARABONBA_PTR_GET_DEFAULT(countryName_, "") };
    inline DescribeRegionResourceResponseBodyData& setCountryName(string countryName) { DARABONBA_PTR_SET_VALUE(countryName_, countryName) };


    // cpu Field Functions 
    bool hasCpu() const { return this->cpu_ != nullptr;};
    void deleteCpu() { this->cpu_ = nullptr;};
    inline const Models::DescribeRegionResourceResponseBodyDataCpu & cpu() const { DARABONBA_PTR_GET_CONST(cpu_, Models::DescribeRegionResourceResponseBodyDataCpu) };
    inline Models::DescribeRegionResourceResponseBodyDataCpu cpu() { DARABONBA_PTR_GET(cpu_, Models::DescribeRegionResourceResponseBodyDataCpu) };
    inline DescribeRegionResourceResponseBodyData& setCpu(const Models::DescribeRegionResourceResponseBodyDataCpu & cpu) { DARABONBA_PTR_SET_VALUE(cpu_, cpu) };
    inline DescribeRegionResourceResponseBodyData& setCpu(Models::DescribeRegionResourceResponseBodyDataCpu && cpu) { DARABONBA_PTR_SET_RVALUE(cpu_, cpu) };


    // gpu Field Functions 
    bool hasGpu() const { return this->gpu_ != nullptr;};
    void deleteGpu() { this->gpu_ = nullptr;};
    inline const Models::DescribeRegionResourceResponseBodyDataGpu & gpu() const { DARABONBA_PTR_GET_CONST(gpu_, Models::DescribeRegionResourceResponseBodyDataGpu) };
    inline Models::DescribeRegionResourceResponseBodyDataGpu gpu() { DARABONBA_PTR_GET(gpu_, Models::DescribeRegionResourceResponseBodyDataGpu) };
    inline DescribeRegionResourceResponseBodyData& setGpu(const Models::DescribeRegionResourceResponseBodyDataGpu & gpu) { DARABONBA_PTR_SET_VALUE(gpu_, gpu) };
    inline DescribeRegionResourceResponseBodyData& setGpu(Models::DescribeRegionResourceResponseBodyDataGpu && gpu) { DARABONBA_PTR_SET_RVALUE(gpu_, gpu) };


    // hdd Field Functions 
    bool hasHdd() const { return this->hdd_ != nullptr;};
    void deleteHdd() { this->hdd_ = nullptr;};
    inline const Models::DescribeRegionResourceResponseBodyDataHdd & hdd() const { DARABONBA_PTR_GET_CONST(hdd_, Models::DescribeRegionResourceResponseBodyDataHdd) };
    inline Models::DescribeRegionResourceResponseBodyDataHdd hdd() { DARABONBA_PTR_GET(hdd_, Models::DescribeRegionResourceResponseBodyDataHdd) };
    inline DescribeRegionResourceResponseBodyData& setHdd(const Models::DescribeRegionResourceResponseBodyDataHdd & hdd) { DARABONBA_PTR_SET_VALUE(hdd_, hdd) };
    inline DescribeRegionResourceResponseBodyData& setHdd(Models::DescribeRegionResourceResponseBodyDataHdd && hdd) { DARABONBA_PTR_SET_RVALUE(hdd_, hdd) };


    // houseId Field Functions 
    bool hasHouseId() const { return this->houseId_ != nullptr;};
    void deleteHouseId() { this->houseId_ = nullptr;};
    inline string houseId() const { DARABONBA_PTR_GET_DEFAULT(houseId_, "") };
    inline DescribeRegionResourceResponseBodyData& setHouseId(string houseId) { DARABONBA_PTR_SET_VALUE(houseId_, houseId) };


    // ipv4s Field Functions 
    bool hasIpv4s() const { return this->ipv4s_ != nullptr;};
    void deleteIpv4s() { this->ipv4s_ = nullptr;};
    inline const vector<Models::DescribeRegionResourceResponseBodyDataIpv4s> & ipv4s() const { DARABONBA_PTR_GET_CONST(ipv4s_, vector<Models::DescribeRegionResourceResponseBodyDataIpv4s>) };
    inline vector<Models::DescribeRegionResourceResponseBodyDataIpv4s> ipv4s() { DARABONBA_PTR_GET(ipv4s_, vector<Models::DescribeRegionResourceResponseBodyDataIpv4s>) };
    inline DescribeRegionResourceResponseBodyData& setIpv4s(const vector<Models::DescribeRegionResourceResponseBodyDataIpv4s> & ipv4s) { DARABONBA_PTR_SET_VALUE(ipv4s_, ipv4s) };
    inline DescribeRegionResourceResponseBodyData& setIpv4s(vector<Models::DescribeRegionResourceResponseBodyDataIpv4s> && ipv4s) { DARABONBA_PTR_SET_RVALUE(ipv4s_, ipv4s) };


    // ipv6s Field Functions 
    bool hasIpv6s() const { return this->ipv6s_ != nullptr;};
    void deleteIpv6s() { this->ipv6s_ = nullptr;};
    inline const vector<Models::DescribeRegionResourceResponseBodyDataIpv6s> & ipv6s() const { DARABONBA_PTR_GET_CONST(ipv6s_, vector<Models::DescribeRegionResourceResponseBodyDataIpv6s>) };
    inline vector<Models::DescribeRegionResourceResponseBodyDataIpv6s> ipv6s() { DARABONBA_PTR_GET(ipv6s_, vector<Models::DescribeRegionResourceResponseBodyDataIpv6s>) };
    inline DescribeRegionResourceResponseBodyData& setIpv6s(const vector<Models::DescribeRegionResourceResponseBodyDataIpv6s> & ipv6s) { DARABONBA_PTR_SET_VALUE(ipv6s_, ipv6s) };
    inline DescribeRegionResourceResponseBodyData& setIpv6s(vector<Models::DescribeRegionResourceResponseBodyDataIpv6s> && ipv6s) { DARABONBA_PTR_SET_RVALUE(ipv6s_, ipv6s) };


    // ispTypes Field Functions 
    bool hasIspTypes() const { return this->ispTypes_ != nullptr;};
    void deleteIspTypes() { this->ispTypes_ = nullptr;};
    inline const vector<string> & ispTypes() const { DARABONBA_PTR_GET_CONST(ispTypes_, vector<string>) };
    inline vector<string> ispTypes() { DARABONBA_PTR_GET(ispTypes_, vector<string>) };
    inline DescribeRegionResourceResponseBodyData& setIspTypes(const vector<string> & ispTypes) { DARABONBA_PTR_SET_VALUE(ispTypes_, ispTypes) };
    inline DescribeRegionResourceResponseBodyData& setIspTypes(vector<string> && ispTypes) { DARABONBA_PTR_SET_RVALUE(ispTypes_, ispTypes) };


    // memory Field Functions 
    bool hasMemory() const { return this->memory_ != nullptr;};
    void deleteMemory() { this->memory_ = nullptr;};
    inline const Models::DescribeRegionResourceResponseBodyDataMemory & memory() const { DARABONBA_PTR_GET_CONST(memory_, Models::DescribeRegionResourceResponseBodyDataMemory) };
    inline Models::DescribeRegionResourceResponseBodyDataMemory memory() { DARABONBA_PTR_GET(memory_, Models::DescribeRegionResourceResponseBodyDataMemory) };
    inline DescribeRegionResourceResponseBodyData& setMemory(const Models::DescribeRegionResourceResponseBodyDataMemory & memory) { DARABONBA_PTR_SET_VALUE(memory_, memory) };
    inline DescribeRegionResourceResponseBodyData& setMemory(Models::DescribeRegionResourceResponseBodyDataMemory && memory) { DARABONBA_PTR_SET_RVALUE(memory_, memory) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeRegionResourceResponseBodyData& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // nvme Field Functions 
    bool hasNvme() const { return this->nvme_ != nullptr;};
    void deleteNvme() { this->nvme_ = nullptr;};
    inline const Models::DescribeRegionResourceResponseBodyDataNvme & nvme() const { DARABONBA_PTR_GET_CONST(nvme_, Models::DescribeRegionResourceResponseBodyDataNvme) };
    inline Models::DescribeRegionResourceResponseBodyDataNvme nvme() { DARABONBA_PTR_GET(nvme_, Models::DescribeRegionResourceResponseBodyDataNvme) };
    inline DescribeRegionResourceResponseBodyData& setNvme(const Models::DescribeRegionResourceResponseBodyDataNvme & nvme) { DARABONBA_PTR_SET_VALUE(nvme_, nvme) };
    inline DescribeRegionResourceResponseBodyData& setNvme(Models::DescribeRegionResourceResponseBodyDataNvme && nvme) { DARABONBA_PTR_SET_RVALUE(nvme_, nvme) };


    // ossStorage Field Functions 
    bool hasOssStorage() const { return this->ossStorage_ != nullptr;};
    void deleteOssStorage() { this->ossStorage_ = nullptr;};
    inline const Models::DescribeRegionResourceResponseBodyDataOssStorage & ossStorage() const { DARABONBA_PTR_GET_CONST(ossStorage_, Models::DescribeRegionResourceResponseBodyDataOssStorage) };
    inline Models::DescribeRegionResourceResponseBodyDataOssStorage ossStorage() { DARABONBA_PTR_GET(ossStorage_, Models::DescribeRegionResourceResponseBodyDataOssStorage) };
    inline DescribeRegionResourceResponseBodyData& setOssStorage(const Models::DescribeRegionResourceResponseBodyDataOssStorage & ossStorage) { DARABONBA_PTR_SET_VALUE(ossStorage_, ossStorage) };
    inline DescribeRegionResourceResponseBodyData& setOssStorage(Models::DescribeRegionResourceResponseBodyDataOssStorage && ossStorage) { DARABONBA_PTR_SET_RVALUE(ossStorage_, ossStorage) };


    // pangu Field Functions 
    bool hasPangu() const { return this->pangu_ != nullptr;};
    void deletePangu() { this->pangu_ = nullptr;};
    inline const Models::DescribeRegionResourceResponseBodyDataPangu & pangu() const { DARABONBA_PTR_GET_CONST(pangu_, Models::DescribeRegionResourceResponseBodyDataPangu) };
    inline Models::DescribeRegionResourceResponseBodyDataPangu pangu() { DARABONBA_PTR_GET(pangu_, Models::DescribeRegionResourceResponseBodyDataPangu) };
    inline DescribeRegionResourceResponseBodyData& setPangu(const Models::DescribeRegionResourceResponseBodyDataPangu & pangu) { DARABONBA_PTR_SET_VALUE(pangu_, pangu) };
    inline DescribeRegionResourceResponseBodyData& setPangu(Models::DescribeRegionResourceResponseBodyDataPangu && pangu) { DARABONBA_PTR_SET_RVALUE(pangu_, pangu) };


    // pcfarmNum Field Functions 
    bool hasPcfarmNum() const { return this->pcfarmNum_ != nullptr;};
    void deletePcfarmNum() { this->pcfarmNum_ = nullptr;};
    inline const Models::DescribeRegionResourceResponseBodyDataPcfarmNum & pcfarmNum() const { DARABONBA_PTR_GET_CONST(pcfarmNum_, Models::DescribeRegionResourceResponseBodyDataPcfarmNum) };
    inline Models::DescribeRegionResourceResponseBodyDataPcfarmNum pcfarmNum() { DARABONBA_PTR_GET(pcfarmNum_, Models::DescribeRegionResourceResponseBodyDataPcfarmNum) };
    inline DescribeRegionResourceResponseBodyData& setPcfarmNum(const Models::DescribeRegionResourceResponseBodyDataPcfarmNum & pcfarmNum) { DARABONBA_PTR_SET_VALUE(pcfarmNum_, pcfarmNum) };
    inline DescribeRegionResourceResponseBodyData& setPcfarmNum(Models::DescribeRegionResourceResponseBodyDataPcfarmNum && pcfarmNum) { DARABONBA_PTR_SET_RVALUE(pcfarmNum_, pcfarmNum) };


    // poc Field Functions 
    bool hasPoc() const { return this->poc_ != nullptr;};
    void deletePoc() { this->poc_ = nullptr;};
    inline bool poc() const { DARABONBA_PTR_GET_DEFAULT(poc_, false) };
    inline DescribeRegionResourceResponseBodyData& setPoc(bool poc) { DARABONBA_PTR_SET_VALUE(poc_, poc) };


    // provinceCode Field Functions 
    bool hasProvinceCode() const { return this->provinceCode_ != nullptr;};
    void deleteProvinceCode() { this->provinceCode_ = nullptr;};
    inline string provinceCode() const { DARABONBA_PTR_GET_DEFAULT(provinceCode_, "") };
    inline DescribeRegionResourceResponseBodyData& setProvinceCode(string provinceCode) { DARABONBA_PTR_SET_VALUE(provinceCode_, provinceCode) };


    // provinceName Field Functions 
    bool hasProvinceName() const { return this->provinceName_ != nullptr;};
    void deleteProvinceName() { this->provinceName_ = nullptr;};
    inline string provinceName() const { DARABONBA_PTR_GET_DEFAULT(provinceName_, "") };
    inline DescribeRegionResourceResponseBodyData& setProvinceName(string provinceName) { DARABONBA_PTR_SET_VALUE(provinceName_, provinceName) };


    // reserveDisable Field Functions 
    bool hasReserveDisable() const { return this->reserveDisable_ != nullptr;};
    void deleteReserveDisable() { this->reserveDisable_ = nullptr;};
    inline bool reserveDisable() const { DARABONBA_PTR_GET_DEFAULT(reserveDisable_, false) };
    inline DescribeRegionResourceResponseBodyData& setReserveDisable(bool reserveDisable) { DARABONBA_PTR_SET_VALUE(reserveDisable_, reserveDisable) };


    // ssd Field Functions 
    bool hasSsd() const { return this->ssd_ != nullptr;};
    void deleteSsd() { this->ssd_ = nullptr;};
    inline const Models::DescribeRegionResourceResponseBodyDataSsd & ssd() const { DARABONBA_PTR_GET_CONST(ssd_, Models::DescribeRegionResourceResponseBodyDataSsd) };
    inline Models::DescribeRegionResourceResponseBodyDataSsd ssd() { DARABONBA_PTR_GET(ssd_, Models::DescribeRegionResourceResponseBodyDataSsd) };
    inline DescribeRegionResourceResponseBodyData& setSsd(const Models::DescribeRegionResourceResponseBodyDataSsd & ssd) { DARABONBA_PTR_SET_VALUE(ssd_, ssd) };
    inline DescribeRegionResourceResponseBodyData& setSsd(Models::DescribeRegionResourceResponseBodyDataSsd && ssd) { DARABONBA_PTR_SET_RVALUE(ssd_, ssd) };


    // statusDisable Field Functions 
    bool hasStatusDisable() const { return this->statusDisable_ != nullptr;};
    void deleteStatusDisable() { this->statusDisable_ = nullptr;};
    inline bool statusDisable() const { DARABONBA_PTR_GET_DEFAULT(statusDisable_, false) };
    inline DescribeRegionResourceResponseBodyData& setStatusDisable(bool statusDisable) { DARABONBA_PTR_SET_VALUE(statusDisable_, statusDisable) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline DescribeRegionResourceResponseBodyData& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // uuid Field Functions 
    bool hasUuid() const { return this->uuid_ != nullptr;};
    void deleteUuid() { this->uuid_ = nullptr;};
    inline string uuid() const { DARABONBA_PTR_GET_DEFAULT(uuid_, "") };
    inline DescribeRegionResourceResponseBodyData& setUuid(string uuid) { DARABONBA_PTR_SET_VALUE(uuid_, uuid) };


    // virtual Field Functions 
    bool hasVirtual() const { return this->virtual_ != nullptr;};
    void deleteVirtual() { this->virtual_ = nullptr;};
    inline string _virtual() const { DARABONBA_PTR_GET_DEFAULT(virtual_, "") };
    inline DescribeRegionResourceResponseBodyData& setVirtual(string _virtual) { DARABONBA_PTR_SET_VALUE(virtual_, _virtual) };


  protected:
    std::shared_ptr<string> areaCode_ = nullptr;
    std::shared_ptr<string> areaName_ = nullptr;
    std::shared_ptr<Models::DescribeRegionResourceResponseBodyDataArmCard> armCard_ = nullptr;
    std::shared_ptr<vector<string>> attributes_ = nullptr;
    std::shared_ptr<Models::DescribeRegionResourceResponseBodyDataBandwidth> bandwidth_ = nullptr;
    std::shared_ptr<Models::DescribeRegionResourceResponseBodyDataBlockStorage> blockStorage_ = nullptr;
    std::shared_ptr<string> countryCode_ = nullptr;
    std::shared_ptr<string> countryName_ = nullptr;
    std::shared_ptr<Models::DescribeRegionResourceResponseBodyDataCpu> cpu_ = nullptr;
    std::shared_ptr<Models::DescribeRegionResourceResponseBodyDataGpu> gpu_ = nullptr;
    std::shared_ptr<Models::DescribeRegionResourceResponseBodyDataHdd> hdd_ = nullptr;
    std::shared_ptr<string> houseId_ = nullptr;
    std::shared_ptr<vector<Models::DescribeRegionResourceResponseBodyDataIpv4s>> ipv4s_ = nullptr;
    std::shared_ptr<vector<Models::DescribeRegionResourceResponseBodyDataIpv6s>> ipv6s_ = nullptr;
    std::shared_ptr<vector<string>> ispTypes_ = nullptr;
    std::shared_ptr<Models::DescribeRegionResourceResponseBodyDataMemory> memory_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<Models::DescribeRegionResourceResponseBodyDataNvme> nvme_ = nullptr;
    std::shared_ptr<Models::DescribeRegionResourceResponseBodyDataOssStorage> ossStorage_ = nullptr;
    std::shared_ptr<Models::DescribeRegionResourceResponseBodyDataPangu> pangu_ = nullptr;
    std::shared_ptr<Models::DescribeRegionResourceResponseBodyDataPcfarmNum> pcfarmNum_ = nullptr;
    std::shared_ptr<bool> poc_ = nullptr;
    std::shared_ptr<string> provinceCode_ = nullptr;
    std::shared_ptr<string> provinceName_ = nullptr;
    std::shared_ptr<bool> reserveDisable_ = nullptr;
    std::shared_ptr<Models::DescribeRegionResourceResponseBodyDataSsd> ssd_ = nullptr;
    std::shared_ptr<bool> statusDisable_ = nullptr;
    std::shared_ptr<string> type_ = nullptr;
    std::shared_ptr<string> uuid_ = nullptr;
    std::shared_ptr<string> virtual_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
