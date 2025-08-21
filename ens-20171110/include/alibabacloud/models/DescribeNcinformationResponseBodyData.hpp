// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBENCINFORMATIONRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBENCINFORMATIONRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeNCInformationResponseBodyDataCpu.hpp>
#include <alibabacloud/models/DescribeNCInformationResponseBodyDataGpu.hpp>
#include <alibabacloud/models/DescribeNCInformationResponseBodyDataHdd.hpp>
#include <alibabacloud/models/DescribeNCInformationResponseBodyDataInfo.hpp>
#include <alibabacloud/models/DescribeNCInformationResponseBodyDataMemory.hpp>
#include <alibabacloud/models/DescribeNCInformationResponseBodyDataNvme.hpp>
#include <alibabacloud/models/DescribeNCInformationResponseBodyDataSsd.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class DescribeNCInformationResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeNCInformationResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(Cpu, cpu_);
      DARABONBA_PTR_TO_JSON(Gpu, gpu_);
      DARABONBA_PTR_TO_JSON(Hdd, hdd_);
      DARABONBA_PTR_TO_JSON(Info, info_);
      DARABONBA_PTR_TO_JSON(Memory, memory_);
      DARABONBA_PTR_TO_JSON(Nvme, nvme_);
      DARABONBA_PTR_TO_JSON(Online, online_);
      DARABONBA_PTR_TO_JSON(Region, region_);
      DARABONBA_PTR_TO_JSON(Ssd, ssd_);
      DARABONBA_PTR_TO_JSON(Virtual, virtual_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeNCInformationResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(Cpu, cpu_);
      DARABONBA_PTR_FROM_JSON(Gpu, gpu_);
      DARABONBA_PTR_FROM_JSON(Hdd, hdd_);
      DARABONBA_PTR_FROM_JSON(Info, info_);
      DARABONBA_PTR_FROM_JSON(Memory, memory_);
      DARABONBA_PTR_FROM_JSON(Nvme, nvme_);
      DARABONBA_PTR_FROM_JSON(Online, online_);
      DARABONBA_PTR_FROM_JSON(Region, region_);
      DARABONBA_PTR_FROM_JSON(Ssd, ssd_);
      DARABONBA_PTR_FROM_JSON(Virtual, virtual_);
    };
    DescribeNCInformationResponseBodyData() = default ;
    DescribeNCInformationResponseBodyData(const DescribeNCInformationResponseBodyData &) = default ;
    DescribeNCInformationResponseBodyData(DescribeNCInformationResponseBodyData &&) = default ;
    DescribeNCInformationResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeNCInformationResponseBodyData() = default ;
    DescribeNCInformationResponseBodyData& operator=(const DescribeNCInformationResponseBodyData &) = default ;
    DescribeNCInformationResponseBodyData& operator=(DescribeNCInformationResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->cpu_ != nullptr
        && this->gpu_ != nullptr && this->hdd_ != nullptr && this->info_ != nullptr && this->memory_ != nullptr && this->nvme_ != nullptr
        && this->online_ != nullptr && this->region_ != nullptr && this->ssd_ != nullptr && this->virtual_ != nullptr; };
    // cpu Field Functions 
    bool hasCpu() const { return this->cpu_ != nullptr;};
    void deleteCpu() { this->cpu_ = nullptr;};
    inline const Models::DescribeNCInformationResponseBodyDataCpu & cpu() const { DARABONBA_PTR_GET_CONST(cpu_, Models::DescribeNCInformationResponseBodyDataCpu) };
    inline Models::DescribeNCInformationResponseBodyDataCpu cpu() { DARABONBA_PTR_GET(cpu_, Models::DescribeNCInformationResponseBodyDataCpu) };
    inline DescribeNCInformationResponseBodyData& setCpu(const Models::DescribeNCInformationResponseBodyDataCpu & cpu) { DARABONBA_PTR_SET_VALUE(cpu_, cpu) };
    inline DescribeNCInformationResponseBodyData& setCpu(Models::DescribeNCInformationResponseBodyDataCpu && cpu) { DARABONBA_PTR_SET_RVALUE(cpu_, cpu) };


    // gpu Field Functions 
    bool hasGpu() const { return this->gpu_ != nullptr;};
    void deleteGpu() { this->gpu_ = nullptr;};
    inline const Models::DescribeNCInformationResponseBodyDataGpu & gpu() const { DARABONBA_PTR_GET_CONST(gpu_, Models::DescribeNCInformationResponseBodyDataGpu) };
    inline Models::DescribeNCInformationResponseBodyDataGpu gpu() { DARABONBA_PTR_GET(gpu_, Models::DescribeNCInformationResponseBodyDataGpu) };
    inline DescribeNCInformationResponseBodyData& setGpu(const Models::DescribeNCInformationResponseBodyDataGpu & gpu) { DARABONBA_PTR_SET_VALUE(gpu_, gpu) };
    inline DescribeNCInformationResponseBodyData& setGpu(Models::DescribeNCInformationResponseBodyDataGpu && gpu) { DARABONBA_PTR_SET_RVALUE(gpu_, gpu) };


    // hdd Field Functions 
    bool hasHdd() const { return this->hdd_ != nullptr;};
    void deleteHdd() { this->hdd_ = nullptr;};
    inline const Models::DescribeNCInformationResponseBodyDataHdd & hdd() const { DARABONBA_PTR_GET_CONST(hdd_, Models::DescribeNCInformationResponseBodyDataHdd) };
    inline Models::DescribeNCInformationResponseBodyDataHdd hdd() { DARABONBA_PTR_GET(hdd_, Models::DescribeNCInformationResponseBodyDataHdd) };
    inline DescribeNCInformationResponseBodyData& setHdd(const Models::DescribeNCInformationResponseBodyDataHdd & hdd) { DARABONBA_PTR_SET_VALUE(hdd_, hdd) };
    inline DescribeNCInformationResponseBodyData& setHdd(Models::DescribeNCInformationResponseBodyDataHdd && hdd) { DARABONBA_PTR_SET_RVALUE(hdd_, hdd) };


    // info Field Functions 
    bool hasInfo() const { return this->info_ != nullptr;};
    void deleteInfo() { this->info_ = nullptr;};
    inline const Models::DescribeNCInformationResponseBodyDataInfo & info() const { DARABONBA_PTR_GET_CONST(info_, Models::DescribeNCInformationResponseBodyDataInfo) };
    inline Models::DescribeNCInformationResponseBodyDataInfo info() { DARABONBA_PTR_GET(info_, Models::DescribeNCInformationResponseBodyDataInfo) };
    inline DescribeNCInformationResponseBodyData& setInfo(const Models::DescribeNCInformationResponseBodyDataInfo & info) { DARABONBA_PTR_SET_VALUE(info_, info) };
    inline DescribeNCInformationResponseBodyData& setInfo(Models::DescribeNCInformationResponseBodyDataInfo && info) { DARABONBA_PTR_SET_RVALUE(info_, info) };


    // memory Field Functions 
    bool hasMemory() const { return this->memory_ != nullptr;};
    void deleteMemory() { this->memory_ = nullptr;};
    inline const Models::DescribeNCInformationResponseBodyDataMemory & memory() const { DARABONBA_PTR_GET_CONST(memory_, Models::DescribeNCInformationResponseBodyDataMemory) };
    inline Models::DescribeNCInformationResponseBodyDataMemory memory() { DARABONBA_PTR_GET(memory_, Models::DescribeNCInformationResponseBodyDataMemory) };
    inline DescribeNCInformationResponseBodyData& setMemory(const Models::DescribeNCInformationResponseBodyDataMemory & memory) { DARABONBA_PTR_SET_VALUE(memory_, memory) };
    inline DescribeNCInformationResponseBodyData& setMemory(Models::DescribeNCInformationResponseBodyDataMemory && memory) { DARABONBA_PTR_SET_RVALUE(memory_, memory) };


    // nvme Field Functions 
    bool hasNvme() const { return this->nvme_ != nullptr;};
    void deleteNvme() { this->nvme_ = nullptr;};
    inline const Models::DescribeNCInformationResponseBodyDataNvme & nvme() const { DARABONBA_PTR_GET_CONST(nvme_, Models::DescribeNCInformationResponseBodyDataNvme) };
    inline Models::DescribeNCInformationResponseBodyDataNvme nvme() { DARABONBA_PTR_GET(nvme_, Models::DescribeNCInformationResponseBodyDataNvme) };
    inline DescribeNCInformationResponseBodyData& setNvme(const Models::DescribeNCInformationResponseBodyDataNvme & nvme) { DARABONBA_PTR_SET_VALUE(nvme_, nvme) };
    inline DescribeNCInformationResponseBodyData& setNvme(Models::DescribeNCInformationResponseBodyDataNvme && nvme) { DARABONBA_PTR_SET_RVALUE(nvme_, nvme) };


    // online Field Functions 
    bool hasOnline() const { return this->online_ != nullptr;};
    void deleteOnline() { this->online_ = nullptr;};
    inline bool online() const { DARABONBA_PTR_GET_DEFAULT(online_, false) };
    inline DescribeNCInformationResponseBodyData& setOnline(bool online) { DARABONBA_PTR_SET_VALUE(online_, online) };


    // region Field Functions 
    bool hasRegion() const { return this->region_ != nullptr;};
    void deleteRegion() { this->region_ = nullptr;};
    inline string region() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
    inline DescribeNCInformationResponseBodyData& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


    // ssd Field Functions 
    bool hasSsd() const { return this->ssd_ != nullptr;};
    void deleteSsd() { this->ssd_ = nullptr;};
    inline const Models::DescribeNCInformationResponseBodyDataSsd & ssd() const { DARABONBA_PTR_GET_CONST(ssd_, Models::DescribeNCInformationResponseBodyDataSsd) };
    inline Models::DescribeNCInformationResponseBodyDataSsd ssd() { DARABONBA_PTR_GET(ssd_, Models::DescribeNCInformationResponseBodyDataSsd) };
    inline DescribeNCInformationResponseBodyData& setSsd(const Models::DescribeNCInformationResponseBodyDataSsd & ssd) { DARABONBA_PTR_SET_VALUE(ssd_, ssd) };
    inline DescribeNCInformationResponseBodyData& setSsd(Models::DescribeNCInformationResponseBodyDataSsd && ssd) { DARABONBA_PTR_SET_RVALUE(ssd_, ssd) };


    // virtual Field Functions 
    bool hasVirtual() const { return this->virtual_ != nullptr;};
    void deleteVirtual() { this->virtual_ = nullptr;};
    inline string _virtual() const { DARABONBA_PTR_GET_DEFAULT(virtual_, "") };
    inline DescribeNCInformationResponseBodyData& setVirtual(string _virtual) { DARABONBA_PTR_SET_VALUE(virtual_, _virtual) };


  protected:
    std::shared_ptr<Models::DescribeNCInformationResponseBodyDataCpu> cpu_ = nullptr;
    std::shared_ptr<Models::DescribeNCInformationResponseBodyDataGpu> gpu_ = nullptr;
    std::shared_ptr<Models::DescribeNCInformationResponseBodyDataHdd> hdd_ = nullptr;
    std::shared_ptr<Models::DescribeNCInformationResponseBodyDataInfo> info_ = nullptr;
    std::shared_ptr<Models::DescribeNCInformationResponseBodyDataMemory> memory_ = nullptr;
    std::shared_ptr<Models::DescribeNCInformationResponseBodyDataNvme> nvme_ = nullptr;
    std::shared_ptr<bool> online_ = nullptr;
    std::shared_ptr<string> region_ = nullptr;
    std::shared_ptr<Models::DescribeNCInformationResponseBodyDataSsd> ssd_ = nullptr;
    std::shared_ptr<string> virtual_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
