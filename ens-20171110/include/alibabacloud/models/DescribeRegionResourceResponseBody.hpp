// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEREGIONRESOURCERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEREGIONRESOURCERESPONSEBODY_HPP_
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
  class DescribeRegionResourceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRegionResourceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Desc, desc_);
      DARABONBA_PTR_TO_JSON(Msg, msg_);
      DARABONBA_PTR_TO_JSON(Pager, pager_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRegionResourceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Desc, desc_);
      DARABONBA_PTR_FROM_JSON(Msg, msg_);
      DARABONBA_PTR_FROM_JSON(Pager, pager_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeRegionResourceResponseBody() = default ;
    DescribeRegionResourceResponseBody(const DescribeRegionResourceResponseBody &) = default ;
    DescribeRegionResourceResponseBody(DescribeRegionResourceResponseBody &&) = default ;
    DescribeRegionResourceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRegionResourceResponseBody() = default ;
    DescribeRegionResourceResponseBody& operator=(const DescribeRegionResourceResponseBody &) = default ;
    DescribeRegionResourceResponseBody& operator=(DescribeRegionResourceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Pager : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Pager& obj) { 
        DARABONBA_PTR_TO_JSON(Page, page_);
        DARABONBA_PTR_TO_JSON(Size, size_);
        DARABONBA_PTR_TO_JSON(Total, total_);
      };
      friend void from_json(const Darabonba::Json& j, Pager& obj) { 
        DARABONBA_PTR_FROM_JSON(Page, page_);
        DARABONBA_PTR_FROM_JSON(Size, size_);
        DARABONBA_PTR_FROM_JSON(Total, total_);
      };
      Pager() = default ;
      Pager(const Pager &) = default ;
      Pager(Pager &&) = default ;
      Pager(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Pager() = default ;
      Pager& operator=(const Pager &) = default ;
      Pager& operator=(Pager &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->page_ == nullptr
        && this->size_ == nullptr && this->total_ == nullptr; };
      // page Field Functions 
      bool hasPage() const { return this->page_ != nullptr;};
      void deletePage() { this->page_ = nullptr;};
      inline int64_t getPage() const { DARABONBA_PTR_GET_DEFAULT(page_, 0L) };
      inline Pager& setPage(int64_t page) { DARABONBA_PTR_SET_VALUE(page_, page) };


      // size Field Functions 
      bool hasSize() const { return this->size_ != nullptr;};
      void deleteSize() { this->size_ = nullptr;};
      inline int64_t getSize() const { DARABONBA_PTR_GET_DEFAULT(size_, 0L) };
      inline Pager& setSize(int64_t size) { DARABONBA_PTR_SET_VALUE(size_, size) };


      // total Field Functions 
      bool hasTotal() const { return this->total_ != nullptr;};
      void deleteTotal() { this->total_ = nullptr;};
      inline int64_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0L) };
      inline Pager& setTotal(int64_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


    protected:
      shared_ptr<int64_t> page_ {};
      shared_ptr<int64_t> size_ {};
      shared_ptr<int64_t> total_ {};
    };

    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
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
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
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
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Ssd : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Ssd& obj) { 
          DARABONBA_PTR_TO_JSON(Display, display_);
          DARABONBA_PTR_TO_JSON(OversellRatio, oversellRatio_);
          DARABONBA_PTR_TO_JSON(Remain, remain_);
          DARABONBA_PTR_TO_JSON(ReserveDisable, reserveDisable_);
          DARABONBA_PTR_TO_JSON(ReserveDisableTotal, reserveDisableTotal_);
          DARABONBA_PTR_TO_JSON(Reserved, reserved_);
          DARABONBA_PTR_TO_JSON(StatusDisable, statusDisable_);
          DARABONBA_PTR_TO_JSON(StatusDisableTotal, statusDisableTotal_);
          DARABONBA_PTR_TO_JSON(Total, total_);
          DARABONBA_PTR_TO_JSON(Type, type_);
          DARABONBA_PTR_TO_JSON(Used, used_);
          DARABONBA_PTR_TO_JSON(UsedRatio, usedRatio_);
        };
        friend void from_json(const Darabonba::Json& j, Ssd& obj) { 
          DARABONBA_PTR_FROM_JSON(Display, display_);
          DARABONBA_PTR_FROM_JSON(OversellRatio, oversellRatio_);
          DARABONBA_PTR_FROM_JSON(Remain, remain_);
          DARABONBA_PTR_FROM_JSON(ReserveDisable, reserveDisable_);
          DARABONBA_PTR_FROM_JSON(ReserveDisableTotal, reserveDisableTotal_);
          DARABONBA_PTR_FROM_JSON(Reserved, reserved_);
          DARABONBA_PTR_FROM_JSON(StatusDisable, statusDisable_);
          DARABONBA_PTR_FROM_JSON(StatusDisableTotal, statusDisableTotal_);
          DARABONBA_PTR_FROM_JSON(Total, total_);
          DARABONBA_PTR_FROM_JSON(Type, type_);
          DARABONBA_PTR_FROM_JSON(Used, used_);
          DARABONBA_PTR_FROM_JSON(UsedRatio, usedRatio_);
        };
        Ssd() = default ;
        Ssd(const Ssd &) = default ;
        Ssd(Ssd &&) = default ;
        Ssd(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Ssd() = default ;
        Ssd& operator=(const Ssd &) = default ;
        Ssd& operator=(Ssd &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->display_ == nullptr
        && this->oversellRatio_ == nullptr && this->remain_ == nullptr && this->reserveDisable_ == nullptr && this->reserveDisableTotal_ == nullptr && this->reserved_ == nullptr
        && this->statusDisable_ == nullptr && this->statusDisableTotal_ == nullptr && this->total_ == nullptr && this->type_ == nullptr && this->used_ == nullptr
        && this->usedRatio_ == nullptr; };
        // display Field Functions 
        bool hasDisplay() const { return this->display_ != nullptr;};
        void deleteDisplay() { this->display_ = nullptr;};
        inline bool getDisplay() const { DARABONBA_PTR_GET_DEFAULT(display_, false) };
        inline Ssd& setDisplay(bool display) { DARABONBA_PTR_SET_VALUE(display_, display) };


        // oversellRatio Field Functions 
        bool hasOversellRatio() const { return this->oversellRatio_ != nullptr;};
        void deleteOversellRatio() { this->oversellRatio_ = nullptr;};
        inline int64_t getOversellRatio() const { DARABONBA_PTR_GET_DEFAULT(oversellRatio_, 0L) };
        inline Ssd& setOversellRatio(int64_t oversellRatio) { DARABONBA_PTR_SET_VALUE(oversellRatio_, oversellRatio) };


        // remain Field Functions 
        bool hasRemain() const { return this->remain_ != nullptr;};
        void deleteRemain() { this->remain_ = nullptr;};
        inline int64_t getRemain() const { DARABONBA_PTR_GET_DEFAULT(remain_, 0L) };
        inline Ssd& setRemain(int64_t remain) { DARABONBA_PTR_SET_VALUE(remain_, remain) };


        // reserveDisable Field Functions 
        bool hasReserveDisable() const { return this->reserveDisable_ != nullptr;};
        void deleteReserveDisable() { this->reserveDisable_ = nullptr;};
        inline bool getReserveDisable() const { DARABONBA_PTR_GET_DEFAULT(reserveDisable_, false) };
        inline Ssd& setReserveDisable(bool reserveDisable) { DARABONBA_PTR_SET_VALUE(reserveDisable_, reserveDisable) };


        // reserveDisableTotal Field Functions 
        bool hasReserveDisableTotal() const { return this->reserveDisableTotal_ != nullptr;};
        void deleteReserveDisableTotal() { this->reserveDisableTotal_ = nullptr;};
        inline int64_t getReserveDisableTotal() const { DARABONBA_PTR_GET_DEFAULT(reserveDisableTotal_, 0L) };
        inline Ssd& setReserveDisableTotal(int64_t reserveDisableTotal) { DARABONBA_PTR_SET_VALUE(reserveDisableTotal_, reserveDisableTotal) };


        // reserved Field Functions 
        bool hasReserved() const { return this->reserved_ != nullptr;};
        void deleteReserved() { this->reserved_ = nullptr;};
        inline int64_t getReserved() const { DARABONBA_PTR_GET_DEFAULT(reserved_, 0L) };
        inline Ssd& setReserved(int64_t reserved) { DARABONBA_PTR_SET_VALUE(reserved_, reserved) };


        // statusDisable Field Functions 
        bool hasStatusDisable() const { return this->statusDisable_ != nullptr;};
        void deleteStatusDisable() { this->statusDisable_ = nullptr;};
        inline bool getStatusDisable() const { DARABONBA_PTR_GET_DEFAULT(statusDisable_, false) };
        inline Ssd& setStatusDisable(bool statusDisable) { DARABONBA_PTR_SET_VALUE(statusDisable_, statusDisable) };


        // statusDisableTotal Field Functions 
        bool hasStatusDisableTotal() const { return this->statusDisableTotal_ != nullptr;};
        void deleteStatusDisableTotal() { this->statusDisableTotal_ = nullptr;};
        inline int64_t getStatusDisableTotal() const { DARABONBA_PTR_GET_DEFAULT(statusDisableTotal_, 0L) };
        inline Ssd& setStatusDisableTotal(int64_t statusDisableTotal) { DARABONBA_PTR_SET_VALUE(statusDisableTotal_, statusDisableTotal) };


        // total Field Functions 
        bool hasTotal() const { return this->total_ != nullptr;};
        void deleteTotal() { this->total_ = nullptr;};
        inline int64_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0L) };
        inline Ssd& setTotal(int64_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline Ssd& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


        // used Field Functions 
        bool hasUsed() const { return this->used_ != nullptr;};
        void deleteUsed() { this->used_ = nullptr;};
        inline int64_t getUsed() const { DARABONBA_PTR_GET_DEFAULT(used_, 0L) };
        inline Ssd& setUsed(int64_t used) { DARABONBA_PTR_SET_VALUE(used_, used) };


        // usedRatio Field Functions 
        bool hasUsedRatio() const { return this->usedRatio_ != nullptr;};
        void deleteUsedRatio() { this->usedRatio_ = nullptr;};
        inline int64_t getUsedRatio() const { DARABONBA_PTR_GET_DEFAULT(usedRatio_, 0L) };
        inline Ssd& setUsedRatio(int64_t usedRatio) { DARABONBA_PTR_SET_VALUE(usedRatio_, usedRatio) };


      protected:
        shared_ptr<bool> display_ {};
        shared_ptr<int64_t> oversellRatio_ {};
        shared_ptr<int64_t> remain_ {};
        shared_ptr<bool> reserveDisable_ {};
        shared_ptr<int64_t> reserveDisableTotal_ {};
        shared_ptr<int64_t> reserved_ {};
        shared_ptr<bool> statusDisable_ {};
        shared_ptr<int64_t> statusDisableTotal_ {};
        shared_ptr<int64_t> total_ {};
        shared_ptr<string> type_ {};
        shared_ptr<int64_t> used_ {};
        shared_ptr<int64_t> usedRatio_ {};
      };

      class PcfarmNum : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const PcfarmNum& obj) { 
          DARABONBA_PTR_TO_JSON(Display, display_);
          DARABONBA_PTR_TO_JSON(OversellRatio, oversellRatio_);
          DARABONBA_PTR_TO_JSON(Remain, remain_);
          DARABONBA_PTR_TO_JSON(ReserveDisable, reserveDisable_);
          DARABONBA_PTR_TO_JSON(ReserveDisableTotal, reserveDisableTotal_);
          DARABONBA_PTR_TO_JSON(Reserved, reserved_);
          DARABONBA_PTR_TO_JSON(StatusDisable, statusDisable_);
          DARABONBA_PTR_TO_JSON(StatusDisableTotal, statusDisableTotal_);
          DARABONBA_PTR_TO_JSON(Total, total_);
          DARABONBA_PTR_TO_JSON(Type, type_);
          DARABONBA_PTR_TO_JSON(Used, used_);
          DARABONBA_PTR_TO_JSON(UsedRatio, usedRatio_);
        };
        friend void from_json(const Darabonba::Json& j, PcfarmNum& obj) { 
          DARABONBA_PTR_FROM_JSON(Display, display_);
          DARABONBA_PTR_FROM_JSON(OversellRatio, oversellRatio_);
          DARABONBA_PTR_FROM_JSON(Remain, remain_);
          DARABONBA_PTR_FROM_JSON(ReserveDisable, reserveDisable_);
          DARABONBA_PTR_FROM_JSON(ReserveDisableTotal, reserveDisableTotal_);
          DARABONBA_PTR_FROM_JSON(Reserved, reserved_);
          DARABONBA_PTR_FROM_JSON(StatusDisable, statusDisable_);
          DARABONBA_PTR_FROM_JSON(StatusDisableTotal, statusDisableTotal_);
          DARABONBA_PTR_FROM_JSON(Total, total_);
          DARABONBA_PTR_FROM_JSON(Type, type_);
          DARABONBA_PTR_FROM_JSON(Used, used_);
          DARABONBA_PTR_FROM_JSON(UsedRatio, usedRatio_);
        };
        PcfarmNum() = default ;
        PcfarmNum(const PcfarmNum &) = default ;
        PcfarmNum(PcfarmNum &&) = default ;
        PcfarmNum(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~PcfarmNum() = default ;
        PcfarmNum& operator=(const PcfarmNum &) = default ;
        PcfarmNum& operator=(PcfarmNum &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->display_ == nullptr
        && this->oversellRatio_ == nullptr && this->remain_ == nullptr && this->reserveDisable_ == nullptr && this->reserveDisableTotal_ == nullptr && this->reserved_ == nullptr
        && this->statusDisable_ == nullptr && this->statusDisableTotal_ == nullptr && this->total_ == nullptr && this->type_ == nullptr && this->used_ == nullptr
        && this->usedRatio_ == nullptr; };
        // display Field Functions 
        bool hasDisplay() const { return this->display_ != nullptr;};
        void deleteDisplay() { this->display_ = nullptr;};
        inline bool getDisplay() const { DARABONBA_PTR_GET_DEFAULT(display_, false) };
        inline PcfarmNum& setDisplay(bool display) { DARABONBA_PTR_SET_VALUE(display_, display) };


        // oversellRatio Field Functions 
        bool hasOversellRatio() const { return this->oversellRatio_ != nullptr;};
        void deleteOversellRatio() { this->oversellRatio_ = nullptr;};
        inline int64_t getOversellRatio() const { DARABONBA_PTR_GET_DEFAULT(oversellRatio_, 0L) };
        inline PcfarmNum& setOversellRatio(int64_t oversellRatio) { DARABONBA_PTR_SET_VALUE(oversellRatio_, oversellRatio) };


        // remain Field Functions 
        bool hasRemain() const { return this->remain_ != nullptr;};
        void deleteRemain() { this->remain_ = nullptr;};
        inline int64_t getRemain() const { DARABONBA_PTR_GET_DEFAULT(remain_, 0L) };
        inline PcfarmNum& setRemain(int64_t remain) { DARABONBA_PTR_SET_VALUE(remain_, remain) };


        // reserveDisable Field Functions 
        bool hasReserveDisable() const { return this->reserveDisable_ != nullptr;};
        void deleteReserveDisable() { this->reserveDisable_ = nullptr;};
        inline bool getReserveDisable() const { DARABONBA_PTR_GET_DEFAULT(reserveDisable_, false) };
        inline PcfarmNum& setReserveDisable(bool reserveDisable) { DARABONBA_PTR_SET_VALUE(reserveDisable_, reserveDisable) };


        // reserveDisableTotal Field Functions 
        bool hasReserveDisableTotal() const { return this->reserveDisableTotal_ != nullptr;};
        void deleteReserveDisableTotal() { this->reserveDisableTotal_ = nullptr;};
        inline int64_t getReserveDisableTotal() const { DARABONBA_PTR_GET_DEFAULT(reserveDisableTotal_, 0L) };
        inline PcfarmNum& setReserveDisableTotal(int64_t reserveDisableTotal) { DARABONBA_PTR_SET_VALUE(reserveDisableTotal_, reserveDisableTotal) };


        // reserved Field Functions 
        bool hasReserved() const { return this->reserved_ != nullptr;};
        void deleteReserved() { this->reserved_ = nullptr;};
        inline int64_t getReserved() const { DARABONBA_PTR_GET_DEFAULT(reserved_, 0L) };
        inline PcfarmNum& setReserved(int64_t reserved) { DARABONBA_PTR_SET_VALUE(reserved_, reserved) };


        // statusDisable Field Functions 
        bool hasStatusDisable() const { return this->statusDisable_ != nullptr;};
        void deleteStatusDisable() { this->statusDisable_ = nullptr;};
        inline bool getStatusDisable() const { DARABONBA_PTR_GET_DEFAULT(statusDisable_, false) };
        inline PcfarmNum& setStatusDisable(bool statusDisable) { DARABONBA_PTR_SET_VALUE(statusDisable_, statusDisable) };


        // statusDisableTotal Field Functions 
        bool hasStatusDisableTotal() const { return this->statusDisableTotal_ != nullptr;};
        void deleteStatusDisableTotal() { this->statusDisableTotal_ = nullptr;};
        inline int64_t getStatusDisableTotal() const { DARABONBA_PTR_GET_DEFAULT(statusDisableTotal_, 0L) };
        inline PcfarmNum& setStatusDisableTotal(int64_t statusDisableTotal) { DARABONBA_PTR_SET_VALUE(statusDisableTotal_, statusDisableTotal) };


        // total Field Functions 
        bool hasTotal() const { return this->total_ != nullptr;};
        void deleteTotal() { this->total_ = nullptr;};
        inline int64_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0L) };
        inline PcfarmNum& setTotal(int64_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline PcfarmNum& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


        // used Field Functions 
        bool hasUsed() const { return this->used_ != nullptr;};
        void deleteUsed() { this->used_ = nullptr;};
        inline int64_t getUsed() const { DARABONBA_PTR_GET_DEFAULT(used_, 0L) };
        inline PcfarmNum& setUsed(int64_t used) { DARABONBA_PTR_SET_VALUE(used_, used) };


        // usedRatio Field Functions 
        bool hasUsedRatio() const { return this->usedRatio_ != nullptr;};
        void deleteUsedRatio() { this->usedRatio_ = nullptr;};
        inline int64_t getUsedRatio() const { DARABONBA_PTR_GET_DEFAULT(usedRatio_, 0L) };
        inline PcfarmNum& setUsedRatio(int64_t usedRatio) { DARABONBA_PTR_SET_VALUE(usedRatio_, usedRatio) };


      protected:
        shared_ptr<bool> display_ {};
        shared_ptr<int64_t> oversellRatio_ {};
        shared_ptr<int64_t> remain_ {};
        shared_ptr<bool> reserveDisable_ {};
        shared_ptr<int64_t> reserveDisableTotal_ {};
        shared_ptr<int64_t> reserved_ {};
        shared_ptr<bool> statusDisable_ {};
        shared_ptr<int64_t> statusDisableTotal_ {};
        shared_ptr<int64_t> total_ {};
        shared_ptr<string> type_ {};
        shared_ptr<int64_t> used_ {};
        shared_ptr<int64_t> usedRatio_ {};
      };

      class Pangu : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Pangu& obj) { 
          DARABONBA_PTR_TO_JSON(Display, display_);
          DARABONBA_PTR_TO_JSON(OversellRatio, oversellRatio_);
          DARABONBA_PTR_TO_JSON(Remain, remain_);
          DARABONBA_PTR_TO_JSON(ReserveDisable, reserveDisable_);
          DARABONBA_PTR_TO_JSON(ReserveDisableTotal, reserveDisableTotal_);
          DARABONBA_PTR_TO_JSON(Reserved, reserved_);
          DARABONBA_PTR_TO_JSON(StatusDisable, statusDisable_);
          DARABONBA_PTR_TO_JSON(StatusDisableTotal, statusDisableTotal_);
          DARABONBA_PTR_TO_JSON(Total, total_);
          DARABONBA_PTR_TO_JSON(Type, type_);
          DARABONBA_PTR_TO_JSON(Used, used_);
          DARABONBA_PTR_TO_JSON(UsedRatio, usedRatio_);
        };
        friend void from_json(const Darabonba::Json& j, Pangu& obj) { 
          DARABONBA_PTR_FROM_JSON(Display, display_);
          DARABONBA_PTR_FROM_JSON(OversellRatio, oversellRatio_);
          DARABONBA_PTR_FROM_JSON(Remain, remain_);
          DARABONBA_PTR_FROM_JSON(ReserveDisable, reserveDisable_);
          DARABONBA_PTR_FROM_JSON(ReserveDisableTotal, reserveDisableTotal_);
          DARABONBA_PTR_FROM_JSON(Reserved, reserved_);
          DARABONBA_PTR_FROM_JSON(StatusDisable, statusDisable_);
          DARABONBA_PTR_FROM_JSON(StatusDisableTotal, statusDisableTotal_);
          DARABONBA_PTR_FROM_JSON(Total, total_);
          DARABONBA_PTR_FROM_JSON(Type, type_);
          DARABONBA_PTR_FROM_JSON(Used, used_);
          DARABONBA_PTR_FROM_JSON(UsedRatio, usedRatio_);
        };
        Pangu() = default ;
        Pangu(const Pangu &) = default ;
        Pangu(Pangu &&) = default ;
        Pangu(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Pangu() = default ;
        Pangu& operator=(const Pangu &) = default ;
        Pangu& operator=(Pangu &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->display_ == nullptr
        && this->oversellRatio_ == nullptr && this->remain_ == nullptr && this->reserveDisable_ == nullptr && this->reserveDisableTotal_ == nullptr && this->reserved_ == nullptr
        && this->statusDisable_ == nullptr && this->statusDisableTotal_ == nullptr && this->total_ == nullptr && this->type_ == nullptr && this->used_ == nullptr
        && this->usedRatio_ == nullptr; };
        // display Field Functions 
        bool hasDisplay() const { return this->display_ != nullptr;};
        void deleteDisplay() { this->display_ = nullptr;};
        inline bool getDisplay() const { DARABONBA_PTR_GET_DEFAULT(display_, false) };
        inline Pangu& setDisplay(bool display) { DARABONBA_PTR_SET_VALUE(display_, display) };


        // oversellRatio Field Functions 
        bool hasOversellRatio() const { return this->oversellRatio_ != nullptr;};
        void deleteOversellRatio() { this->oversellRatio_ = nullptr;};
        inline int64_t getOversellRatio() const { DARABONBA_PTR_GET_DEFAULT(oversellRatio_, 0L) };
        inline Pangu& setOversellRatio(int64_t oversellRatio) { DARABONBA_PTR_SET_VALUE(oversellRatio_, oversellRatio) };


        // remain Field Functions 
        bool hasRemain() const { return this->remain_ != nullptr;};
        void deleteRemain() { this->remain_ = nullptr;};
        inline int64_t getRemain() const { DARABONBA_PTR_GET_DEFAULT(remain_, 0L) };
        inline Pangu& setRemain(int64_t remain) { DARABONBA_PTR_SET_VALUE(remain_, remain) };


        // reserveDisable Field Functions 
        bool hasReserveDisable() const { return this->reserveDisable_ != nullptr;};
        void deleteReserveDisable() { this->reserveDisable_ = nullptr;};
        inline bool getReserveDisable() const { DARABONBA_PTR_GET_DEFAULT(reserveDisable_, false) };
        inline Pangu& setReserveDisable(bool reserveDisable) { DARABONBA_PTR_SET_VALUE(reserveDisable_, reserveDisable) };


        // reserveDisableTotal Field Functions 
        bool hasReserveDisableTotal() const { return this->reserveDisableTotal_ != nullptr;};
        void deleteReserveDisableTotal() { this->reserveDisableTotal_ = nullptr;};
        inline int64_t getReserveDisableTotal() const { DARABONBA_PTR_GET_DEFAULT(reserveDisableTotal_, 0L) };
        inline Pangu& setReserveDisableTotal(int64_t reserveDisableTotal) { DARABONBA_PTR_SET_VALUE(reserveDisableTotal_, reserveDisableTotal) };


        // reserved Field Functions 
        bool hasReserved() const { return this->reserved_ != nullptr;};
        void deleteReserved() { this->reserved_ = nullptr;};
        inline int64_t getReserved() const { DARABONBA_PTR_GET_DEFAULT(reserved_, 0L) };
        inline Pangu& setReserved(int64_t reserved) { DARABONBA_PTR_SET_VALUE(reserved_, reserved) };


        // statusDisable Field Functions 
        bool hasStatusDisable() const { return this->statusDisable_ != nullptr;};
        void deleteStatusDisable() { this->statusDisable_ = nullptr;};
        inline bool getStatusDisable() const { DARABONBA_PTR_GET_DEFAULT(statusDisable_, false) };
        inline Pangu& setStatusDisable(bool statusDisable) { DARABONBA_PTR_SET_VALUE(statusDisable_, statusDisable) };


        // statusDisableTotal Field Functions 
        bool hasStatusDisableTotal() const { return this->statusDisableTotal_ != nullptr;};
        void deleteStatusDisableTotal() { this->statusDisableTotal_ = nullptr;};
        inline int64_t getStatusDisableTotal() const { DARABONBA_PTR_GET_DEFAULT(statusDisableTotal_, 0L) };
        inline Pangu& setStatusDisableTotal(int64_t statusDisableTotal) { DARABONBA_PTR_SET_VALUE(statusDisableTotal_, statusDisableTotal) };


        // total Field Functions 
        bool hasTotal() const { return this->total_ != nullptr;};
        void deleteTotal() { this->total_ = nullptr;};
        inline int64_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0L) };
        inline Pangu& setTotal(int64_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline Pangu& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


        // used Field Functions 
        bool hasUsed() const { return this->used_ != nullptr;};
        void deleteUsed() { this->used_ = nullptr;};
        inline int64_t getUsed() const { DARABONBA_PTR_GET_DEFAULT(used_, 0L) };
        inline Pangu& setUsed(int64_t used) { DARABONBA_PTR_SET_VALUE(used_, used) };


        // usedRatio Field Functions 
        bool hasUsedRatio() const { return this->usedRatio_ != nullptr;};
        void deleteUsedRatio() { this->usedRatio_ = nullptr;};
        inline int64_t getUsedRatio() const { DARABONBA_PTR_GET_DEFAULT(usedRatio_, 0L) };
        inline Pangu& setUsedRatio(int64_t usedRatio) { DARABONBA_PTR_SET_VALUE(usedRatio_, usedRatio) };


      protected:
        shared_ptr<bool> display_ {};
        shared_ptr<int64_t> oversellRatio_ {};
        shared_ptr<int64_t> remain_ {};
        shared_ptr<bool> reserveDisable_ {};
        shared_ptr<int64_t> reserveDisableTotal_ {};
        shared_ptr<int64_t> reserved_ {};
        shared_ptr<bool> statusDisable_ {};
        shared_ptr<int64_t> statusDisableTotal_ {};
        shared_ptr<int64_t> total_ {};
        shared_ptr<string> type_ {};
        shared_ptr<int64_t> used_ {};
        shared_ptr<int64_t> usedRatio_ {};
      };

      class OssStorage : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const OssStorage& obj) { 
          DARABONBA_PTR_TO_JSON(Display, display_);
          DARABONBA_PTR_TO_JSON(OversellRatio, oversellRatio_);
          DARABONBA_PTR_TO_JSON(Remain, remain_);
          DARABONBA_PTR_TO_JSON(ReserveDisable, reserveDisable_);
          DARABONBA_PTR_TO_JSON(ReserveDisableTotal, reserveDisableTotal_);
          DARABONBA_PTR_TO_JSON(Reserved, reserved_);
          DARABONBA_PTR_TO_JSON(StatusDisable, statusDisable_);
          DARABONBA_PTR_TO_JSON(StatusDisableTotal, statusDisableTotal_);
          DARABONBA_PTR_TO_JSON(Total, total_);
          DARABONBA_PTR_TO_JSON(Type, type_);
          DARABONBA_PTR_TO_JSON(Used, used_);
          DARABONBA_PTR_TO_JSON(UsedRatio, usedRatio_);
        };
        friend void from_json(const Darabonba::Json& j, OssStorage& obj) { 
          DARABONBA_PTR_FROM_JSON(Display, display_);
          DARABONBA_PTR_FROM_JSON(OversellRatio, oversellRatio_);
          DARABONBA_PTR_FROM_JSON(Remain, remain_);
          DARABONBA_PTR_FROM_JSON(ReserveDisable, reserveDisable_);
          DARABONBA_PTR_FROM_JSON(ReserveDisableTotal, reserveDisableTotal_);
          DARABONBA_PTR_FROM_JSON(Reserved, reserved_);
          DARABONBA_PTR_FROM_JSON(StatusDisable, statusDisable_);
          DARABONBA_PTR_FROM_JSON(StatusDisableTotal, statusDisableTotal_);
          DARABONBA_PTR_FROM_JSON(Total, total_);
          DARABONBA_PTR_FROM_JSON(Type, type_);
          DARABONBA_PTR_FROM_JSON(Used, used_);
          DARABONBA_PTR_FROM_JSON(UsedRatio, usedRatio_);
        };
        OssStorage() = default ;
        OssStorage(const OssStorage &) = default ;
        OssStorage(OssStorage &&) = default ;
        OssStorage(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~OssStorage() = default ;
        OssStorage& operator=(const OssStorage &) = default ;
        OssStorage& operator=(OssStorage &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->display_ == nullptr
        && this->oversellRatio_ == nullptr && this->remain_ == nullptr && this->reserveDisable_ == nullptr && this->reserveDisableTotal_ == nullptr && this->reserved_ == nullptr
        && this->statusDisable_ == nullptr && this->statusDisableTotal_ == nullptr && this->total_ == nullptr && this->type_ == nullptr && this->used_ == nullptr
        && this->usedRatio_ == nullptr; };
        // display Field Functions 
        bool hasDisplay() const { return this->display_ != nullptr;};
        void deleteDisplay() { this->display_ = nullptr;};
        inline bool getDisplay() const { DARABONBA_PTR_GET_DEFAULT(display_, false) };
        inline OssStorage& setDisplay(bool display) { DARABONBA_PTR_SET_VALUE(display_, display) };


        // oversellRatio Field Functions 
        bool hasOversellRatio() const { return this->oversellRatio_ != nullptr;};
        void deleteOversellRatio() { this->oversellRatio_ = nullptr;};
        inline int64_t getOversellRatio() const { DARABONBA_PTR_GET_DEFAULT(oversellRatio_, 0L) };
        inline OssStorage& setOversellRatio(int64_t oversellRatio) { DARABONBA_PTR_SET_VALUE(oversellRatio_, oversellRatio) };


        // remain Field Functions 
        bool hasRemain() const { return this->remain_ != nullptr;};
        void deleteRemain() { this->remain_ = nullptr;};
        inline int64_t getRemain() const { DARABONBA_PTR_GET_DEFAULT(remain_, 0L) };
        inline OssStorage& setRemain(int64_t remain) { DARABONBA_PTR_SET_VALUE(remain_, remain) };


        // reserveDisable Field Functions 
        bool hasReserveDisable() const { return this->reserveDisable_ != nullptr;};
        void deleteReserveDisable() { this->reserveDisable_ = nullptr;};
        inline bool getReserveDisable() const { DARABONBA_PTR_GET_DEFAULT(reserveDisable_, false) };
        inline OssStorage& setReserveDisable(bool reserveDisable) { DARABONBA_PTR_SET_VALUE(reserveDisable_, reserveDisable) };


        // reserveDisableTotal Field Functions 
        bool hasReserveDisableTotal() const { return this->reserveDisableTotal_ != nullptr;};
        void deleteReserveDisableTotal() { this->reserveDisableTotal_ = nullptr;};
        inline int64_t getReserveDisableTotal() const { DARABONBA_PTR_GET_DEFAULT(reserveDisableTotal_, 0L) };
        inline OssStorage& setReserveDisableTotal(int64_t reserveDisableTotal) { DARABONBA_PTR_SET_VALUE(reserveDisableTotal_, reserveDisableTotal) };


        // reserved Field Functions 
        bool hasReserved() const { return this->reserved_ != nullptr;};
        void deleteReserved() { this->reserved_ = nullptr;};
        inline int64_t getReserved() const { DARABONBA_PTR_GET_DEFAULT(reserved_, 0L) };
        inline OssStorage& setReserved(int64_t reserved) { DARABONBA_PTR_SET_VALUE(reserved_, reserved) };


        // statusDisable Field Functions 
        bool hasStatusDisable() const { return this->statusDisable_ != nullptr;};
        void deleteStatusDisable() { this->statusDisable_ = nullptr;};
        inline bool getStatusDisable() const { DARABONBA_PTR_GET_DEFAULT(statusDisable_, false) };
        inline OssStorage& setStatusDisable(bool statusDisable) { DARABONBA_PTR_SET_VALUE(statusDisable_, statusDisable) };


        // statusDisableTotal Field Functions 
        bool hasStatusDisableTotal() const { return this->statusDisableTotal_ != nullptr;};
        void deleteStatusDisableTotal() { this->statusDisableTotal_ = nullptr;};
        inline int64_t getStatusDisableTotal() const { DARABONBA_PTR_GET_DEFAULT(statusDisableTotal_, 0L) };
        inline OssStorage& setStatusDisableTotal(int64_t statusDisableTotal) { DARABONBA_PTR_SET_VALUE(statusDisableTotal_, statusDisableTotal) };


        // total Field Functions 
        bool hasTotal() const { return this->total_ != nullptr;};
        void deleteTotal() { this->total_ = nullptr;};
        inline int64_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0L) };
        inline OssStorage& setTotal(int64_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline OssStorage& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


        // used Field Functions 
        bool hasUsed() const { return this->used_ != nullptr;};
        void deleteUsed() { this->used_ = nullptr;};
        inline int64_t getUsed() const { DARABONBA_PTR_GET_DEFAULT(used_, 0L) };
        inline OssStorage& setUsed(int64_t used) { DARABONBA_PTR_SET_VALUE(used_, used) };


        // usedRatio Field Functions 
        bool hasUsedRatio() const { return this->usedRatio_ != nullptr;};
        void deleteUsedRatio() { this->usedRatio_ = nullptr;};
        inline int64_t getUsedRatio() const { DARABONBA_PTR_GET_DEFAULT(usedRatio_, 0L) };
        inline OssStorage& setUsedRatio(int64_t usedRatio) { DARABONBA_PTR_SET_VALUE(usedRatio_, usedRatio) };


      protected:
        shared_ptr<bool> display_ {};
        shared_ptr<int64_t> oversellRatio_ {};
        shared_ptr<int64_t> remain_ {};
        shared_ptr<bool> reserveDisable_ {};
        shared_ptr<int64_t> reserveDisableTotal_ {};
        shared_ptr<int64_t> reserved_ {};
        shared_ptr<bool> statusDisable_ {};
        shared_ptr<int64_t> statusDisableTotal_ {};
        shared_ptr<int64_t> total_ {};
        shared_ptr<string> type_ {};
        shared_ptr<int64_t> used_ {};
        shared_ptr<int64_t> usedRatio_ {};
      };

      class Nvme : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Nvme& obj) { 
          DARABONBA_PTR_TO_JSON(Display, display_);
          DARABONBA_PTR_TO_JSON(OversellRatio, oversellRatio_);
          DARABONBA_PTR_TO_JSON(Remain, remain_);
          DARABONBA_PTR_TO_JSON(ReserveDisable, reserveDisable_);
          DARABONBA_PTR_TO_JSON(ReserveDisableTotal, reserveDisableTotal_);
          DARABONBA_PTR_TO_JSON(Reserved, reserved_);
          DARABONBA_PTR_TO_JSON(StatusDisable, statusDisable_);
          DARABONBA_PTR_TO_JSON(StatusDisableTotal, statusDisableTotal_);
          DARABONBA_PTR_TO_JSON(Total, total_);
          DARABONBA_PTR_TO_JSON(Type, type_);
          DARABONBA_PTR_TO_JSON(Used, used_);
          DARABONBA_PTR_TO_JSON(UsedRatio, usedRatio_);
        };
        friend void from_json(const Darabonba::Json& j, Nvme& obj) { 
          DARABONBA_PTR_FROM_JSON(Display, display_);
          DARABONBA_PTR_FROM_JSON(OversellRatio, oversellRatio_);
          DARABONBA_PTR_FROM_JSON(Remain, remain_);
          DARABONBA_PTR_FROM_JSON(ReserveDisable, reserveDisable_);
          DARABONBA_PTR_FROM_JSON(ReserveDisableTotal, reserveDisableTotal_);
          DARABONBA_PTR_FROM_JSON(Reserved, reserved_);
          DARABONBA_PTR_FROM_JSON(StatusDisable, statusDisable_);
          DARABONBA_PTR_FROM_JSON(StatusDisableTotal, statusDisableTotal_);
          DARABONBA_PTR_FROM_JSON(Total, total_);
          DARABONBA_PTR_FROM_JSON(Type, type_);
          DARABONBA_PTR_FROM_JSON(Used, used_);
          DARABONBA_PTR_FROM_JSON(UsedRatio, usedRatio_);
        };
        Nvme() = default ;
        Nvme(const Nvme &) = default ;
        Nvme(Nvme &&) = default ;
        Nvme(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Nvme() = default ;
        Nvme& operator=(const Nvme &) = default ;
        Nvme& operator=(Nvme &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->display_ == nullptr
        && this->oversellRatio_ == nullptr && this->remain_ == nullptr && this->reserveDisable_ == nullptr && this->reserveDisableTotal_ == nullptr && this->reserved_ == nullptr
        && this->statusDisable_ == nullptr && this->statusDisableTotal_ == nullptr && this->total_ == nullptr && this->type_ == nullptr && this->used_ == nullptr
        && this->usedRatio_ == nullptr; };
        // display Field Functions 
        bool hasDisplay() const { return this->display_ != nullptr;};
        void deleteDisplay() { this->display_ = nullptr;};
        inline bool getDisplay() const { DARABONBA_PTR_GET_DEFAULT(display_, false) };
        inline Nvme& setDisplay(bool display) { DARABONBA_PTR_SET_VALUE(display_, display) };


        // oversellRatio Field Functions 
        bool hasOversellRatio() const { return this->oversellRatio_ != nullptr;};
        void deleteOversellRatio() { this->oversellRatio_ = nullptr;};
        inline int64_t getOversellRatio() const { DARABONBA_PTR_GET_DEFAULT(oversellRatio_, 0L) };
        inline Nvme& setOversellRatio(int64_t oversellRatio) { DARABONBA_PTR_SET_VALUE(oversellRatio_, oversellRatio) };


        // remain Field Functions 
        bool hasRemain() const { return this->remain_ != nullptr;};
        void deleteRemain() { this->remain_ = nullptr;};
        inline int64_t getRemain() const { DARABONBA_PTR_GET_DEFAULT(remain_, 0L) };
        inline Nvme& setRemain(int64_t remain) { DARABONBA_PTR_SET_VALUE(remain_, remain) };


        // reserveDisable Field Functions 
        bool hasReserveDisable() const { return this->reserveDisable_ != nullptr;};
        void deleteReserveDisable() { this->reserveDisable_ = nullptr;};
        inline bool getReserveDisable() const { DARABONBA_PTR_GET_DEFAULT(reserveDisable_, false) };
        inline Nvme& setReserveDisable(bool reserveDisable) { DARABONBA_PTR_SET_VALUE(reserveDisable_, reserveDisable) };


        // reserveDisableTotal Field Functions 
        bool hasReserveDisableTotal() const { return this->reserveDisableTotal_ != nullptr;};
        void deleteReserveDisableTotal() { this->reserveDisableTotal_ = nullptr;};
        inline int64_t getReserveDisableTotal() const { DARABONBA_PTR_GET_DEFAULT(reserveDisableTotal_, 0L) };
        inline Nvme& setReserveDisableTotal(int64_t reserveDisableTotal) { DARABONBA_PTR_SET_VALUE(reserveDisableTotal_, reserveDisableTotal) };


        // reserved Field Functions 
        bool hasReserved() const { return this->reserved_ != nullptr;};
        void deleteReserved() { this->reserved_ = nullptr;};
        inline int64_t getReserved() const { DARABONBA_PTR_GET_DEFAULT(reserved_, 0L) };
        inline Nvme& setReserved(int64_t reserved) { DARABONBA_PTR_SET_VALUE(reserved_, reserved) };


        // statusDisable Field Functions 
        bool hasStatusDisable() const { return this->statusDisable_ != nullptr;};
        void deleteStatusDisable() { this->statusDisable_ = nullptr;};
        inline bool getStatusDisable() const { DARABONBA_PTR_GET_DEFAULT(statusDisable_, false) };
        inline Nvme& setStatusDisable(bool statusDisable) { DARABONBA_PTR_SET_VALUE(statusDisable_, statusDisable) };


        // statusDisableTotal Field Functions 
        bool hasStatusDisableTotal() const { return this->statusDisableTotal_ != nullptr;};
        void deleteStatusDisableTotal() { this->statusDisableTotal_ = nullptr;};
        inline int64_t getStatusDisableTotal() const { DARABONBA_PTR_GET_DEFAULT(statusDisableTotal_, 0L) };
        inline Nvme& setStatusDisableTotal(int64_t statusDisableTotal) { DARABONBA_PTR_SET_VALUE(statusDisableTotal_, statusDisableTotal) };


        // total Field Functions 
        bool hasTotal() const { return this->total_ != nullptr;};
        void deleteTotal() { this->total_ = nullptr;};
        inline int64_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0L) };
        inline Nvme& setTotal(int64_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline Nvme& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


        // used Field Functions 
        bool hasUsed() const { return this->used_ != nullptr;};
        void deleteUsed() { this->used_ = nullptr;};
        inline int64_t getUsed() const { DARABONBA_PTR_GET_DEFAULT(used_, 0L) };
        inline Nvme& setUsed(int64_t used) { DARABONBA_PTR_SET_VALUE(used_, used) };


        // usedRatio Field Functions 
        bool hasUsedRatio() const { return this->usedRatio_ != nullptr;};
        void deleteUsedRatio() { this->usedRatio_ = nullptr;};
        inline int64_t getUsedRatio() const { DARABONBA_PTR_GET_DEFAULT(usedRatio_, 0L) };
        inline Nvme& setUsedRatio(int64_t usedRatio) { DARABONBA_PTR_SET_VALUE(usedRatio_, usedRatio) };


      protected:
        shared_ptr<bool> display_ {};
        shared_ptr<int64_t> oversellRatio_ {};
        shared_ptr<int64_t> remain_ {};
        shared_ptr<bool> reserveDisable_ {};
        shared_ptr<int64_t> reserveDisableTotal_ {};
        shared_ptr<int64_t> reserved_ {};
        shared_ptr<bool> statusDisable_ {};
        shared_ptr<int64_t> statusDisableTotal_ {};
        shared_ptr<int64_t> total_ {};
        shared_ptr<string> type_ {};
        shared_ptr<int64_t> used_ {};
        shared_ptr<int64_t> usedRatio_ {};
      };

      class Memory : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Memory& obj) { 
          DARABONBA_PTR_TO_JSON(Display, display_);
          DARABONBA_PTR_TO_JSON(OversellRatio, oversellRatio_);
          DARABONBA_PTR_TO_JSON(Remain, remain_);
          DARABONBA_PTR_TO_JSON(ReserveDisable, reserveDisable_);
          DARABONBA_PTR_TO_JSON(ReserveDisableTotal, reserveDisableTotal_);
          DARABONBA_PTR_TO_JSON(Reserved, reserved_);
          DARABONBA_PTR_TO_JSON(StatusDisable, statusDisable_);
          DARABONBA_PTR_TO_JSON(StatusDisableTotal, statusDisableTotal_);
          DARABONBA_PTR_TO_JSON(Total, total_);
          DARABONBA_PTR_TO_JSON(Type, type_);
          DARABONBA_PTR_TO_JSON(Used, used_);
          DARABONBA_PTR_TO_JSON(UsedRatio, usedRatio_);
        };
        friend void from_json(const Darabonba::Json& j, Memory& obj) { 
          DARABONBA_PTR_FROM_JSON(Display, display_);
          DARABONBA_PTR_FROM_JSON(OversellRatio, oversellRatio_);
          DARABONBA_PTR_FROM_JSON(Remain, remain_);
          DARABONBA_PTR_FROM_JSON(ReserveDisable, reserveDisable_);
          DARABONBA_PTR_FROM_JSON(ReserveDisableTotal, reserveDisableTotal_);
          DARABONBA_PTR_FROM_JSON(Reserved, reserved_);
          DARABONBA_PTR_FROM_JSON(StatusDisable, statusDisable_);
          DARABONBA_PTR_FROM_JSON(StatusDisableTotal, statusDisableTotal_);
          DARABONBA_PTR_FROM_JSON(Total, total_);
          DARABONBA_PTR_FROM_JSON(Type, type_);
          DARABONBA_PTR_FROM_JSON(Used, used_);
          DARABONBA_PTR_FROM_JSON(UsedRatio, usedRatio_);
        };
        Memory() = default ;
        Memory(const Memory &) = default ;
        Memory(Memory &&) = default ;
        Memory(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Memory() = default ;
        Memory& operator=(const Memory &) = default ;
        Memory& operator=(Memory &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->display_ == nullptr
        && this->oversellRatio_ == nullptr && this->remain_ == nullptr && this->reserveDisable_ == nullptr && this->reserveDisableTotal_ == nullptr && this->reserved_ == nullptr
        && this->statusDisable_ == nullptr && this->statusDisableTotal_ == nullptr && this->total_ == nullptr && this->type_ == nullptr && this->used_ == nullptr
        && this->usedRatio_ == nullptr; };
        // display Field Functions 
        bool hasDisplay() const { return this->display_ != nullptr;};
        void deleteDisplay() { this->display_ = nullptr;};
        inline bool getDisplay() const { DARABONBA_PTR_GET_DEFAULT(display_, false) };
        inline Memory& setDisplay(bool display) { DARABONBA_PTR_SET_VALUE(display_, display) };


        // oversellRatio Field Functions 
        bool hasOversellRatio() const { return this->oversellRatio_ != nullptr;};
        void deleteOversellRatio() { this->oversellRatio_ = nullptr;};
        inline int64_t getOversellRatio() const { DARABONBA_PTR_GET_DEFAULT(oversellRatio_, 0L) };
        inline Memory& setOversellRatio(int64_t oversellRatio) { DARABONBA_PTR_SET_VALUE(oversellRatio_, oversellRatio) };


        // remain Field Functions 
        bool hasRemain() const { return this->remain_ != nullptr;};
        void deleteRemain() { this->remain_ = nullptr;};
        inline int64_t getRemain() const { DARABONBA_PTR_GET_DEFAULT(remain_, 0L) };
        inline Memory& setRemain(int64_t remain) { DARABONBA_PTR_SET_VALUE(remain_, remain) };


        // reserveDisable Field Functions 
        bool hasReserveDisable() const { return this->reserveDisable_ != nullptr;};
        void deleteReserveDisable() { this->reserveDisable_ = nullptr;};
        inline bool getReserveDisable() const { DARABONBA_PTR_GET_DEFAULT(reserveDisable_, false) };
        inline Memory& setReserveDisable(bool reserveDisable) { DARABONBA_PTR_SET_VALUE(reserveDisable_, reserveDisable) };


        // reserveDisableTotal Field Functions 
        bool hasReserveDisableTotal() const { return this->reserveDisableTotal_ != nullptr;};
        void deleteReserveDisableTotal() { this->reserveDisableTotal_ = nullptr;};
        inline int64_t getReserveDisableTotal() const { DARABONBA_PTR_GET_DEFAULT(reserveDisableTotal_, 0L) };
        inline Memory& setReserveDisableTotal(int64_t reserveDisableTotal) { DARABONBA_PTR_SET_VALUE(reserveDisableTotal_, reserveDisableTotal) };


        // reserved Field Functions 
        bool hasReserved() const { return this->reserved_ != nullptr;};
        void deleteReserved() { this->reserved_ = nullptr;};
        inline int64_t getReserved() const { DARABONBA_PTR_GET_DEFAULT(reserved_, 0L) };
        inline Memory& setReserved(int64_t reserved) { DARABONBA_PTR_SET_VALUE(reserved_, reserved) };


        // statusDisable Field Functions 
        bool hasStatusDisable() const { return this->statusDisable_ != nullptr;};
        void deleteStatusDisable() { this->statusDisable_ = nullptr;};
        inline bool getStatusDisable() const { DARABONBA_PTR_GET_DEFAULT(statusDisable_, false) };
        inline Memory& setStatusDisable(bool statusDisable) { DARABONBA_PTR_SET_VALUE(statusDisable_, statusDisable) };


        // statusDisableTotal Field Functions 
        bool hasStatusDisableTotal() const { return this->statusDisableTotal_ != nullptr;};
        void deleteStatusDisableTotal() { this->statusDisableTotal_ = nullptr;};
        inline int64_t getStatusDisableTotal() const { DARABONBA_PTR_GET_DEFAULT(statusDisableTotal_, 0L) };
        inline Memory& setStatusDisableTotal(int64_t statusDisableTotal) { DARABONBA_PTR_SET_VALUE(statusDisableTotal_, statusDisableTotal) };


        // total Field Functions 
        bool hasTotal() const { return this->total_ != nullptr;};
        void deleteTotal() { this->total_ = nullptr;};
        inline int64_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0L) };
        inline Memory& setTotal(int64_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline Memory& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


        // used Field Functions 
        bool hasUsed() const { return this->used_ != nullptr;};
        void deleteUsed() { this->used_ = nullptr;};
        inline int64_t getUsed() const { DARABONBA_PTR_GET_DEFAULT(used_, 0L) };
        inline Memory& setUsed(int64_t used) { DARABONBA_PTR_SET_VALUE(used_, used) };


        // usedRatio Field Functions 
        bool hasUsedRatio() const { return this->usedRatio_ != nullptr;};
        void deleteUsedRatio() { this->usedRatio_ = nullptr;};
        inline int64_t getUsedRatio() const { DARABONBA_PTR_GET_DEFAULT(usedRatio_, 0L) };
        inline Memory& setUsedRatio(int64_t usedRatio) { DARABONBA_PTR_SET_VALUE(usedRatio_, usedRatio) };


      protected:
        shared_ptr<bool> display_ {};
        shared_ptr<int64_t> oversellRatio_ {};
        shared_ptr<int64_t> remain_ {};
        shared_ptr<bool> reserveDisable_ {};
        shared_ptr<int64_t> reserveDisableTotal_ {};
        shared_ptr<int64_t> reserved_ {};
        shared_ptr<bool> statusDisable_ {};
        shared_ptr<int64_t> statusDisableTotal_ {};
        shared_ptr<int64_t> total_ {};
        shared_ptr<string> type_ {};
        shared_ptr<int64_t> used_ {};
        shared_ptr<int64_t> usedRatio_ {};
      };

      class Ipv6s : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Ipv6s& obj) { 
          DARABONBA_PTR_TO_JSON(Display, display_);
          DARABONBA_PTR_TO_JSON(Isp, isp_);
          DARABONBA_PTR_TO_JSON(OversellRatio, oversellRatio_);
          DARABONBA_PTR_TO_JSON(Remain, remain_);
          DARABONBA_PTR_TO_JSON(ReserveDisable, reserveDisable_);
          DARABONBA_PTR_TO_JSON(ReserveDisableTotal, reserveDisableTotal_);
          DARABONBA_PTR_TO_JSON(Reserved, reserved_);
          DARABONBA_PTR_TO_JSON(StatusDisable, statusDisable_);
          DARABONBA_PTR_TO_JSON(StatusDisableTotal, statusDisableTotal_);
          DARABONBA_PTR_TO_JSON(Total, total_);
          DARABONBA_PTR_TO_JSON(Type, type_);
          DARABONBA_PTR_TO_JSON(Used, used_);
          DARABONBA_PTR_TO_JSON(UsedRatio, usedRatio_);
          DARABONBA_PTR_TO_JSON(Vlan, vlan_);
        };
        friend void from_json(const Darabonba::Json& j, Ipv6s& obj) { 
          DARABONBA_PTR_FROM_JSON(Display, display_);
          DARABONBA_PTR_FROM_JSON(Isp, isp_);
          DARABONBA_PTR_FROM_JSON(OversellRatio, oversellRatio_);
          DARABONBA_PTR_FROM_JSON(Remain, remain_);
          DARABONBA_PTR_FROM_JSON(ReserveDisable, reserveDisable_);
          DARABONBA_PTR_FROM_JSON(ReserveDisableTotal, reserveDisableTotal_);
          DARABONBA_PTR_FROM_JSON(Reserved, reserved_);
          DARABONBA_PTR_FROM_JSON(StatusDisable, statusDisable_);
          DARABONBA_PTR_FROM_JSON(StatusDisableTotal, statusDisableTotal_);
          DARABONBA_PTR_FROM_JSON(Total, total_);
          DARABONBA_PTR_FROM_JSON(Type, type_);
          DARABONBA_PTR_FROM_JSON(Used, used_);
          DARABONBA_PTR_FROM_JSON(UsedRatio, usedRatio_);
          DARABONBA_PTR_FROM_JSON(Vlan, vlan_);
        };
        Ipv6s() = default ;
        Ipv6s(const Ipv6s &) = default ;
        Ipv6s(Ipv6s &&) = default ;
        Ipv6s(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Ipv6s() = default ;
        Ipv6s& operator=(const Ipv6s &) = default ;
        Ipv6s& operator=(Ipv6s &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->display_ == nullptr
        && this->isp_ == nullptr && this->oversellRatio_ == nullptr && this->remain_ == nullptr && this->reserveDisable_ == nullptr && this->reserveDisableTotal_ == nullptr
        && this->reserved_ == nullptr && this->statusDisable_ == nullptr && this->statusDisableTotal_ == nullptr && this->total_ == nullptr && this->type_ == nullptr
        && this->used_ == nullptr && this->usedRatio_ == nullptr && this->vlan_ == nullptr; };
        // display Field Functions 
        bool hasDisplay() const { return this->display_ != nullptr;};
        void deleteDisplay() { this->display_ = nullptr;};
        inline string getDisplay() const { DARABONBA_PTR_GET_DEFAULT(display_, "") };
        inline Ipv6s& setDisplay(string display) { DARABONBA_PTR_SET_VALUE(display_, display) };


        // isp Field Functions 
        bool hasIsp() const { return this->isp_ != nullptr;};
        void deleteIsp() { this->isp_ = nullptr;};
        inline string getIsp() const { DARABONBA_PTR_GET_DEFAULT(isp_, "") };
        inline Ipv6s& setIsp(string isp) { DARABONBA_PTR_SET_VALUE(isp_, isp) };


        // oversellRatio Field Functions 
        bool hasOversellRatio() const { return this->oversellRatio_ != nullptr;};
        void deleteOversellRatio() { this->oversellRatio_ = nullptr;};
        inline int64_t getOversellRatio() const { DARABONBA_PTR_GET_DEFAULT(oversellRatio_, 0L) };
        inline Ipv6s& setOversellRatio(int64_t oversellRatio) { DARABONBA_PTR_SET_VALUE(oversellRatio_, oversellRatio) };


        // remain Field Functions 
        bool hasRemain() const { return this->remain_ != nullptr;};
        void deleteRemain() { this->remain_ = nullptr;};
        inline int64_t getRemain() const { DARABONBA_PTR_GET_DEFAULT(remain_, 0L) };
        inline Ipv6s& setRemain(int64_t remain) { DARABONBA_PTR_SET_VALUE(remain_, remain) };


        // reserveDisable Field Functions 
        bool hasReserveDisable() const { return this->reserveDisable_ != nullptr;};
        void deleteReserveDisable() { this->reserveDisable_ = nullptr;};
        inline bool getReserveDisable() const { DARABONBA_PTR_GET_DEFAULT(reserveDisable_, false) };
        inline Ipv6s& setReserveDisable(bool reserveDisable) { DARABONBA_PTR_SET_VALUE(reserveDisable_, reserveDisable) };


        // reserveDisableTotal Field Functions 
        bool hasReserveDisableTotal() const { return this->reserveDisableTotal_ != nullptr;};
        void deleteReserveDisableTotal() { this->reserveDisableTotal_ = nullptr;};
        inline int64_t getReserveDisableTotal() const { DARABONBA_PTR_GET_DEFAULT(reserveDisableTotal_, 0L) };
        inline Ipv6s& setReserveDisableTotal(int64_t reserveDisableTotal) { DARABONBA_PTR_SET_VALUE(reserveDisableTotal_, reserveDisableTotal) };


        // reserved Field Functions 
        bool hasReserved() const { return this->reserved_ != nullptr;};
        void deleteReserved() { this->reserved_ = nullptr;};
        inline int64_t getReserved() const { DARABONBA_PTR_GET_DEFAULT(reserved_, 0L) };
        inline Ipv6s& setReserved(int64_t reserved) { DARABONBA_PTR_SET_VALUE(reserved_, reserved) };


        // statusDisable Field Functions 
        bool hasStatusDisable() const { return this->statusDisable_ != nullptr;};
        void deleteStatusDisable() { this->statusDisable_ = nullptr;};
        inline bool getStatusDisable() const { DARABONBA_PTR_GET_DEFAULT(statusDisable_, false) };
        inline Ipv6s& setStatusDisable(bool statusDisable) { DARABONBA_PTR_SET_VALUE(statusDisable_, statusDisable) };


        // statusDisableTotal Field Functions 
        bool hasStatusDisableTotal() const { return this->statusDisableTotal_ != nullptr;};
        void deleteStatusDisableTotal() { this->statusDisableTotal_ = nullptr;};
        inline int64_t getStatusDisableTotal() const { DARABONBA_PTR_GET_DEFAULT(statusDisableTotal_, 0L) };
        inline Ipv6s& setStatusDisableTotal(int64_t statusDisableTotal) { DARABONBA_PTR_SET_VALUE(statusDisableTotal_, statusDisableTotal) };


        // total Field Functions 
        bool hasTotal() const { return this->total_ != nullptr;};
        void deleteTotal() { this->total_ = nullptr;};
        inline int64_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0L) };
        inline Ipv6s& setTotal(int64_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline Ipv6s& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


        // used Field Functions 
        bool hasUsed() const { return this->used_ != nullptr;};
        void deleteUsed() { this->used_ = nullptr;};
        inline int64_t getUsed() const { DARABONBA_PTR_GET_DEFAULT(used_, 0L) };
        inline Ipv6s& setUsed(int64_t used) { DARABONBA_PTR_SET_VALUE(used_, used) };


        // usedRatio Field Functions 
        bool hasUsedRatio() const { return this->usedRatio_ != nullptr;};
        void deleteUsedRatio() { this->usedRatio_ = nullptr;};
        inline int64_t getUsedRatio() const { DARABONBA_PTR_GET_DEFAULT(usedRatio_, 0L) };
        inline Ipv6s& setUsedRatio(int64_t usedRatio) { DARABONBA_PTR_SET_VALUE(usedRatio_, usedRatio) };


        // vlan Field Functions 
        bool hasVlan() const { return this->vlan_ != nullptr;};
        void deleteVlan() { this->vlan_ = nullptr;};
        inline string getVlan() const { DARABONBA_PTR_GET_DEFAULT(vlan_, "") };
        inline Ipv6s& setVlan(string vlan) { DARABONBA_PTR_SET_VALUE(vlan_, vlan) };


      protected:
        shared_ptr<string> display_ {};
        shared_ptr<string> isp_ {};
        shared_ptr<int64_t> oversellRatio_ {};
        shared_ptr<int64_t> remain_ {};
        shared_ptr<bool> reserveDisable_ {};
        shared_ptr<int64_t> reserveDisableTotal_ {};
        shared_ptr<int64_t> reserved_ {};
        shared_ptr<bool> statusDisable_ {};
        shared_ptr<int64_t> statusDisableTotal_ {};
        shared_ptr<int64_t> total_ {};
        shared_ptr<string> type_ {};
        shared_ptr<int64_t> used_ {};
        shared_ptr<int64_t> usedRatio_ {};
        shared_ptr<string> vlan_ {};
      };

      class Ipv4s : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Ipv4s& obj) { 
          DARABONBA_PTR_TO_JSON(Display, display_);
          DARABONBA_PTR_TO_JSON(Isp, isp_);
          DARABONBA_PTR_TO_JSON(OversellRatio, oversellRatio_);
          DARABONBA_PTR_TO_JSON(Remain, remain_);
          DARABONBA_PTR_TO_JSON(ReserveDisable, reserveDisable_);
          DARABONBA_PTR_TO_JSON(ReserveDisableTotal, reserveDisableTotal_);
          DARABONBA_PTR_TO_JSON(Reserved, reserved_);
          DARABONBA_PTR_TO_JSON(StatusDisable, statusDisable_);
          DARABONBA_PTR_TO_JSON(StatusDisableTotal, statusDisableTotal_);
          DARABONBA_PTR_TO_JSON(Total, total_);
          DARABONBA_PTR_TO_JSON(Type, type_);
          DARABONBA_PTR_TO_JSON(Used, used_);
          DARABONBA_PTR_TO_JSON(UsedRatio, usedRatio_);
          DARABONBA_PTR_TO_JSON(Vlan, vlan_);
        };
        friend void from_json(const Darabonba::Json& j, Ipv4s& obj) { 
          DARABONBA_PTR_FROM_JSON(Display, display_);
          DARABONBA_PTR_FROM_JSON(Isp, isp_);
          DARABONBA_PTR_FROM_JSON(OversellRatio, oversellRatio_);
          DARABONBA_PTR_FROM_JSON(Remain, remain_);
          DARABONBA_PTR_FROM_JSON(ReserveDisable, reserveDisable_);
          DARABONBA_PTR_FROM_JSON(ReserveDisableTotal, reserveDisableTotal_);
          DARABONBA_PTR_FROM_JSON(Reserved, reserved_);
          DARABONBA_PTR_FROM_JSON(StatusDisable, statusDisable_);
          DARABONBA_PTR_FROM_JSON(StatusDisableTotal, statusDisableTotal_);
          DARABONBA_PTR_FROM_JSON(Total, total_);
          DARABONBA_PTR_FROM_JSON(Type, type_);
          DARABONBA_PTR_FROM_JSON(Used, used_);
          DARABONBA_PTR_FROM_JSON(UsedRatio, usedRatio_);
          DARABONBA_PTR_FROM_JSON(Vlan, vlan_);
        };
        Ipv4s() = default ;
        Ipv4s(const Ipv4s &) = default ;
        Ipv4s(Ipv4s &&) = default ;
        Ipv4s(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Ipv4s() = default ;
        Ipv4s& operator=(const Ipv4s &) = default ;
        Ipv4s& operator=(Ipv4s &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->display_ == nullptr
        && this->isp_ == nullptr && this->oversellRatio_ == nullptr && this->remain_ == nullptr && this->reserveDisable_ == nullptr && this->reserveDisableTotal_ == nullptr
        && this->reserved_ == nullptr && this->statusDisable_ == nullptr && this->statusDisableTotal_ == nullptr && this->total_ == nullptr && this->type_ == nullptr
        && this->used_ == nullptr && this->usedRatio_ == nullptr && this->vlan_ == nullptr; };
        // display Field Functions 
        bool hasDisplay() const { return this->display_ != nullptr;};
        void deleteDisplay() { this->display_ = nullptr;};
        inline string getDisplay() const { DARABONBA_PTR_GET_DEFAULT(display_, "") };
        inline Ipv4s& setDisplay(string display) { DARABONBA_PTR_SET_VALUE(display_, display) };


        // isp Field Functions 
        bool hasIsp() const { return this->isp_ != nullptr;};
        void deleteIsp() { this->isp_ = nullptr;};
        inline string getIsp() const { DARABONBA_PTR_GET_DEFAULT(isp_, "") };
        inline Ipv4s& setIsp(string isp) { DARABONBA_PTR_SET_VALUE(isp_, isp) };


        // oversellRatio Field Functions 
        bool hasOversellRatio() const { return this->oversellRatio_ != nullptr;};
        void deleteOversellRatio() { this->oversellRatio_ = nullptr;};
        inline int64_t getOversellRatio() const { DARABONBA_PTR_GET_DEFAULT(oversellRatio_, 0L) };
        inline Ipv4s& setOversellRatio(int64_t oversellRatio) { DARABONBA_PTR_SET_VALUE(oversellRatio_, oversellRatio) };


        // remain Field Functions 
        bool hasRemain() const { return this->remain_ != nullptr;};
        void deleteRemain() { this->remain_ = nullptr;};
        inline int64_t getRemain() const { DARABONBA_PTR_GET_DEFAULT(remain_, 0L) };
        inline Ipv4s& setRemain(int64_t remain) { DARABONBA_PTR_SET_VALUE(remain_, remain) };


        // reserveDisable Field Functions 
        bool hasReserveDisable() const { return this->reserveDisable_ != nullptr;};
        void deleteReserveDisable() { this->reserveDisable_ = nullptr;};
        inline bool getReserveDisable() const { DARABONBA_PTR_GET_DEFAULT(reserveDisable_, false) };
        inline Ipv4s& setReserveDisable(bool reserveDisable) { DARABONBA_PTR_SET_VALUE(reserveDisable_, reserveDisable) };


        // reserveDisableTotal Field Functions 
        bool hasReserveDisableTotal() const { return this->reserveDisableTotal_ != nullptr;};
        void deleteReserveDisableTotal() { this->reserveDisableTotal_ = nullptr;};
        inline int64_t getReserveDisableTotal() const { DARABONBA_PTR_GET_DEFAULT(reserveDisableTotal_, 0L) };
        inline Ipv4s& setReserveDisableTotal(int64_t reserveDisableTotal) { DARABONBA_PTR_SET_VALUE(reserveDisableTotal_, reserveDisableTotal) };


        // reserved Field Functions 
        bool hasReserved() const { return this->reserved_ != nullptr;};
        void deleteReserved() { this->reserved_ = nullptr;};
        inline int64_t getReserved() const { DARABONBA_PTR_GET_DEFAULT(reserved_, 0L) };
        inline Ipv4s& setReserved(int64_t reserved) { DARABONBA_PTR_SET_VALUE(reserved_, reserved) };


        // statusDisable Field Functions 
        bool hasStatusDisable() const { return this->statusDisable_ != nullptr;};
        void deleteStatusDisable() { this->statusDisable_ = nullptr;};
        inline bool getStatusDisable() const { DARABONBA_PTR_GET_DEFAULT(statusDisable_, false) };
        inline Ipv4s& setStatusDisable(bool statusDisable) { DARABONBA_PTR_SET_VALUE(statusDisable_, statusDisable) };


        // statusDisableTotal Field Functions 
        bool hasStatusDisableTotal() const { return this->statusDisableTotal_ != nullptr;};
        void deleteStatusDisableTotal() { this->statusDisableTotal_ = nullptr;};
        inline int64_t getStatusDisableTotal() const { DARABONBA_PTR_GET_DEFAULT(statusDisableTotal_, 0L) };
        inline Ipv4s& setStatusDisableTotal(int64_t statusDisableTotal) { DARABONBA_PTR_SET_VALUE(statusDisableTotal_, statusDisableTotal) };


        // total Field Functions 
        bool hasTotal() const { return this->total_ != nullptr;};
        void deleteTotal() { this->total_ = nullptr;};
        inline int64_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0L) };
        inline Ipv4s& setTotal(int64_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline Ipv4s& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


        // used Field Functions 
        bool hasUsed() const { return this->used_ != nullptr;};
        void deleteUsed() { this->used_ = nullptr;};
        inline int64_t getUsed() const { DARABONBA_PTR_GET_DEFAULT(used_, 0L) };
        inline Ipv4s& setUsed(int64_t used) { DARABONBA_PTR_SET_VALUE(used_, used) };


        // usedRatio Field Functions 
        bool hasUsedRatio() const { return this->usedRatio_ != nullptr;};
        void deleteUsedRatio() { this->usedRatio_ = nullptr;};
        inline int64_t getUsedRatio() const { DARABONBA_PTR_GET_DEFAULT(usedRatio_, 0L) };
        inline Ipv4s& setUsedRatio(int64_t usedRatio) { DARABONBA_PTR_SET_VALUE(usedRatio_, usedRatio) };


        // vlan Field Functions 
        bool hasVlan() const { return this->vlan_ != nullptr;};
        void deleteVlan() { this->vlan_ = nullptr;};
        inline string getVlan() const { DARABONBA_PTR_GET_DEFAULT(vlan_, "") };
        inline Ipv4s& setVlan(string vlan) { DARABONBA_PTR_SET_VALUE(vlan_, vlan) };


      protected:
        shared_ptr<string> display_ {};
        shared_ptr<string> isp_ {};
        shared_ptr<int64_t> oversellRatio_ {};
        shared_ptr<int64_t> remain_ {};
        shared_ptr<bool> reserveDisable_ {};
        shared_ptr<int64_t> reserveDisableTotal_ {};
        shared_ptr<int64_t> reserved_ {};
        shared_ptr<bool> statusDisable_ {};
        shared_ptr<int64_t> statusDisableTotal_ {};
        shared_ptr<int64_t> total_ {};
        shared_ptr<string> type_ {};
        shared_ptr<int64_t> used_ {};
        shared_ptr<int64_t> usedRatio_ {};
        shared_ptr<string> vlan_ {};
      };

      class Hdd : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Hdd& obj) { 
          DARABONBA_PTR_TO_JSON(Display, display_);
          DARABONBA_PTR_TO_JSON(OversellRatio, oversellRatio_);
          DARABONBA_PTR_TO_JSON(Remain, remain_);
          DARABONBA_PTR_TO_JSON(ReserveDisable, reserveDisable_);
          DARABONBA_PTR_TO_JSON(ReserveDisableTotal, reserveDisableTotal_);
          DARABONBA_PTR_TO_JSON(Reserved, reserved_);
          DARABONBA_PTR_TO_JSON(StatusDisable, statusDisable_);
          DARABONBA_PTR_TO_JSON(StatusDisableTotal, statusDisableTotal_);
          DARABONBA_PTR_TO_JSON(Total, total_);
          DARABONBA_PTR_TO_JSON(Type, type_);
          DARABONBA_PTR_TO_JSON(Used, used_);
          DARABONBA_PTR_TO_JSON(UsedRatio, usedRatio_);
        };
        friend void from_json(const Darabonba::Json& j, Hdd& obj) { 
          DARABONBA_PTR_FROM_JSON(Display, display_);
          DARABONBA_PTR_FROM_JSON(OversellRatio, oversellRatio_);
          DARABONBA_PTR_FROM_JSON(Remain, remain_);
          DARABONBA_PTR_FROM_JSON(ReserveDisable, reserveDisable_);
          DARABONBA_PTR_FROM_JSON(ReserveDisableTotal, reserveDisableTotal_);
          DARABONBA_PTR_FROM_JSON(Reserved, reserved_);
          DARABONBA_PTR_FROM_JSON(StatusDisable, statusDisable_);
          DARABONBA_PTR_FROM_JSON(StatusDisableTotal, statusDisableTotal_);
          DARABONBA_PTR_FROM_JSON(Total, total_);
          DARABONBA_PTR_FROM_JSON(Type, type_);
          DARABONBA_PTR_FROM_JSON(Used, used_);
          DARABONBA_PTR_FROM_JSON(UsedRatio, usedRatio_);
        };
        Hdd() = default ;
        Hdd(const Hdd &) = default ;
        Hdd(Hdd &&) = default ;
        Hdd(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Hdd() = default ;
        Hdd& operator=(const Hdd &) = default ;
        Hdd& operator=(Hdd &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->display_ == nullptr
        && this->oversellRatio_ == nullptr && this->remain_ == nullptr && this->reserveDisable_ == nullptr && this->reserveDisableTotal_ == nullptr && this->reserved_ == nullptr
        && this->statusDisable_ == nullptr && this->statusDisableTotal_ == nullptr && this->total_ == nullptr && this->type_ == nullptr && this->used_ == nullptr
        && this->usedRatio_ == nullptr; };
        // display Field Functions 
        bool hasDisplay() const { return this->display_ != nullptr;};
        void deleteDisplay() { this->display_ = nullptr;};
        inline bool getDisplay() const { DARABONBA_PTR_GET_DEFAULT(display_, false) };
        inline Hdd& setDisplay(bool display) { DARABONBA_PTR_SET_VALUE(display_, display) };


        // oversellRatio Field Functions 
        bool hasOversellRatio() const { return this->oversellRatio_ != nullptr;};
        void deleteOversellRatio() { this->oversellRatio_ = nullptr;};
        inline int64_t getOversellRatio() const { DARABONBA_PTR_GET_DEFAULT(oversellRatio_, 0L) };
        inline Hdd& setOversellRatio(int64_t oversellRatio) { DARABONBA_PTR_SET_VALUE(oversellRatio_, oversellRatio) };


        // remain Field Functions 
        bool hasRemain() const { return this->remain_ != nullptr;};
        void deleteRemain() { this->remain_ = nullptr;};
        inline int64_t getRemain() const { DARABONBA_PTR_GET_DEFAULT(remain_, 0L) };
        inline Hdd& setRemain(int64_t remain) { DARABONBA_PTR_SET_VALUE(remain_, remain) };


        // reserveDisable Field Functions 
        bool hasReserveDisable() const { return this->reserveDisable_ != nullptr;};
        void deleteReserveDisable() { this->reserveDisable_ = nullptr;};
        inline bool getReserveDisable() const { DARABONBA_PTR_GET_DEFAULT(reserveDisable_, false) };
        inline Hdd& setReserveDisable(bool reserveDisable) { DARABONBA_PTR_SET_VALUE(reserveDisable_, reserveDisable) };


        // reserveDisableTotal Field Functions 
        bool hasReserveDisableTotal() const { return this->reserveDisableTotal_ != nullptr;};
        void deleteReserveDisableTotal() { this->reserveDisableTotal_ = nullptr;};
        inline int64_t getReserveDisableTotal() const { DARABONBA_PTR_GET_DEFAULT(reserveDisableTotal_, 0L) };
        inline Hdd& setReserveDisableTotal(int64_t reserveDisableTotal) { DARABONBA_PTR_SET_VALUE(reserveDisableTotal_, reserveDisableTotal) };


        // reserved Field Functions 
        bool hasReserved() const { return this->reserved_ != nullptr;};
        void deleteReserved() { this->reserved_ = nullptr;};
        inline int64_t getReserved() const { DARABONBA_PTR_GET_DEFAULT(reserved_, 0L) };
        inline Hdd& setReserved(int64_t reserved) { DARABONBA_PTR_SET_VALUE(reserved_, reserved) };


        // statusDisable Field Functions 
        bool hasStatusDisable() const { return this->statusDisable_ != nullptr;};
        void deleteStatusDisable() { this->statusDisable_ = nullptr;};
        inline bool getStatusDisable() const { DARABONBA_PTR_GET_DEFAULT(statusDisable_, false) };
        inline Hdd& setStatusDisable(bool statusDisable) { DARABONBA_PTR_SET_VALUE(statusDisable_, statusDisable) };


        // statusDisableTotal Field Functions 
        bool hasStatusDisableTotal() const { return this->statusDisableTotal_ != nullptr;};
        void deleteStatusDisableTotal() { this->statusDisableTotal_ = nullptr;};
        inline int64_t getStatusDisableTotal() const { DARABONBA_PTR_GET_DEFAULT(statusDisableTotal_, 0L) };
        inline Hdd& setStatusDisableTotal(int64_t statusDisableTotal) { DARABONBA_PTR_SET_VALUE(statusDisableTotal_, statusDisableTotal) };


        // total Field Functions 
        bool hasTotal() const { return this->total_ != nullptr;};
        void deleteTotal() { this->total_ = nullptr;};
        inline int64_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0L) };
        inline Hdd& setTotal(int64_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline Hdd& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


        // used Field Functions 
        bool hasUsed() const { return this->used_ != nullptr;};
        void deleteUsed() { this->used_ = nullptr;};
        inline int64_t getUsed() const { DARABONBA_PTR_GET_DEFAULT(used_, 0L) };
        inline Hdd& setUsed(int64_t used) { DARABONBA_PTR_SET_VALUE(used_, used) };


        // usedRatio Field Functions 
        bool hasUsedRatio() const { return this->usedRatio_ != nullptr;};
        void deleteUsedRatio() { this->usedRatio_ = nullptr;};
        inline int64_t getUsedRatio() const { DARABONBA_PTR_GET_DEFAULT(usedRatio_, 0L) };
        inline Hdd& setUsedRatio(int64_t usedRatio) { DARABONBA_PTR_SET_VALUE(usedRatio_, usedRatio) };


      protected:
        shared_ptr<bool> display_ {};
        shared_ptr<int64_t> oversellRatio_ {};
        shared_ptr<int64_t> remain_ {};
        shared_ptr<bool> reserveDisable_ {};
        shared_ptr<int64_t> reserveDisableTotal_ {};
        shared_ptr<int64_t> reserved_ {};
        shared_ptr<bool> statusDisable_ {};
        shared_ptr<int64_t> statusDisableTotal_ {};
        shared_ptr<int64_t> total_ {};
        shared_ptr<string> type_ {};
        shared_ptr<int64_t> used_ {};
        shared_ptr<int64_t> usedRatio_ {};
      };

      class Gpu : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Gpu& obj) { 
          DARABONBA_PTR_TO_JSON(Display, display_);
          DARABONBA_PTR_TO_JSON(OversellRatio, oversellRatio_);
          DARABONBA_PTR_TO_JSON(Remain, remain_);
          DARABONBA_PTR_TO_JSON(ReserveDisable, reserveDisable_);
          DARABONBA_PTR_TO_JSON(ReserveDisableTotal, reserveDisableTotal_);
          DARABONBA_PTR_TO_JSON(Reserved, reserved_);
          DARABONBA_PTR_TO_JSON(StatusDisable, statusDisable_);
          DARABONBA_PTR_TO_JSON(StatusDisableTotal, statusDisableTotal_);
          DARABONBA_PTR_TO_JSON(Total, total_);
          DARABONBA_PTR_TO_JSON(Type, type_);
          DARABONBA_PTR_TO_JSON(Used, used_);
          DARABONBA_PTR_TO_JSON(UsedRatio, usedRatio_);
        };
        friend void from_json(const Darabonba::Json& j, Gpu& obj) { 
          DARABONBA_PTR_FROM_JSON(Display, display_);
          DARABONBA_PTR_FROM_JSON(OversellRatio, oversellRatio_);
          DARABONBA_PTR_FROM_JSON(Remain, remain_);
          DARABONBA_PTR_FROM_JSON(ReserveDisable, reserveDisable_);
          DARABONBA_PTR_FROM_JSON(ReserveDisableTotal, reserveDisableTotal_);
          DARABONBA_PTR_FROM_JSON(Reserved, reserved_);
          DARABONBA_PTR_FROM_JSON(StatusDisable, statusDisable_);
          DARABONBA_PTR_FROM_JSON(StatusDisableTotal, statusDisableTotal_);
          DARABONBA_PTR_FROM_JSON(Total, total_);
          DARABONBA_PTR_FROM_JSON(Type, type_);
          DARABONBA_PTR_FROM_JSON(Used, used_);
          DARABONBA_PTR_FROM_JSON(UsedRatio, usedRatio_);
        };
        Gpu() = default ;
        Gpu(const Gpu &) = default ;
        Gpu(Gpu &&) = default ;
        Gpu(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Gpu() = default ;
        Gpu& operator=(const Gpu &) = default ;
        Gpu& operator=(Gpu &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->display_ == nullptr
        && this->oversellRatio_ == nullptr && this->remain_ == nullptr && this->reserveDisable_ == nullptr && this->reserveDisableTotal_ == nullptr && this->reserved_ == nullptr
        && this->statusDisable_ == nullptr && this->statusDisableTotal_ == nullptr && this->total_ == nullptr && this->type_ == nullptr && this->used_ == nullptr
        && this->usedRatio_ == nullptr; };
        // display Field Functions 
        bool hasDisplay() const { return this->display_ != nullptr;};
        void deleteDisplay() { this->display_ = nullptr;};
        inline bool getDisplay() const { DARABONBA_PTR_GET_DEFAULT(display_, false) };
        inline Gpu& setDisplay(bool display) { DARABONBA_PTR_SET_VALUE(display_, display) };


        // oversellRatio Field Functions 
        bool hasOversellRatio() const { return this->oversellRatio_ != nullptr;};
        void deleteOversellRatio() { this->oversellRatio_ = nullptr;};
        inline int64_t getOversellRatio() const { DARABONBA_PTR_GET_DEFAULT(oversellRatio_, 0L) };
        inline Gpu& setOversellRatio(int64_t oversellRatio) { DARABONBA_PTR_SET_VALUE(oversellRatio_, oversellRatio) };


        // remain Field Functions 
        bool hasRemain() const { return this->remain_ != nullptr;};
        void deleteRemain() { this->remain_ = nullptr;};
        inline int64_t getRemain() const { DARABONBA_PTR_GET_DEFAULT(remain_, 0L) };
        inline Gpu& setRemain(int64_t remain) { DARABONBA_PTR_SET_VALUE(remain_, remain) };


        // reserveDisable Field Functions 
        bool hasReserveDisable() const { return this->reserveDisable_ != nullptr;};
        void deleteReserveDisable() { this->reserveDisable_ = nullptr;};
        inline bool getReserveDisable() const { DARABONBA_PTR_GET_DEFAULT(reserveDisable_, false) };
        inline Gpu& setReserveDisable(bool reserveDisable) { DARABONBA_PTR_SET_VALUE(reserveDisable_, reserveDisable) };


        // reserveDisableTotal Field Functions 
        bool hasReserveDisableTotal() const { return this->reserveDisableTotal_ != nullptr;};
        void deleteReserveDisableTotal() { this->reserveDisableTotal_ = nullptr;};
        inline int64_t getReserveDisableTotal() const { DARABONBA_PTR_GET_DEFAULT(reserveDisableTotal_, 0L) };
        inline Gpu& setReserveDisableTotal(int64_t reserveDisableTotal) { DARABONBA_PTR_SET_VALUE(reserveDisableTotal_, reserveDisableTotal) };


        // reserved Field Functions 
        bool hasReserved() const { return this->reserved_ != nullptr;};
        void deleteReserved() { this->reserved_ = nullptr;};
        inline int64_t getReserved() const { DARABONBA_PTR_GET_DEFAULT(reserved_, 0L) };
        inline Gpu& setReserved(int64_t reserved) { DARABONBA_PTR_SET_VALUE(reserved_, reserved) };


        // statusDisable Field Functions 
        bool hasStatusDisable() const { return this->statusDisable_ != nullptr;};
        void deleteStatusDisable() { this->statusDisable_ = nullptr;};
        inline bool getStatusDisable() const { DARABONBA_PTR_GET_DEFAULT(statusDisable_, false) };
        inline Gpu& setStatusDisable(bool statusDisable) { DARABONBA_PTR_SET_VALUE(statusDisable_, statusDisable) };


        // statusDisableTotal Field Functions 
        bool hasStatusDisableTotal() const { return this->statusDisableTotal_ != nullptr;};
        void deleteStatusDisableTotal() { this->statusDisableTotal_ = nullptr;};
        inline int64_t getStatusDisableTotal() const { DARABONBA_PTR_GET_DEFAULT(statusDisableTotal_, 0L) };
        inline Gpu& setStatusDisableTotal(int64_t statusDisableTotal) { DARABONBA_PTR_SET_VALUE(statusDisableTotal_, statusDisableTotal) };


        // total Field Functions 
        bool hasTotal() const { return this->total_ != nullptr;};
        void deleteTotal() { this->total_ = nullptr;};
        inline int64_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0L) };
        inline Gpu& setTotal(int64_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline Gpu& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


        // used Field Functions 
        bool hasUsed() const { return this->used_ != nullptr;};
        void deleteUsed() { this->used_ = nullptr;};
        inline int64_t getUsed() const { DARABONBA_PTR_GET_DEFAULT(used_, 0L) };
        inline Gpu& setUsed(int64_t used) { DARABONBA_PTR_SET_VALUE(used_, used) };


        // usedRatio Field Functions 
        bool hasUsedRatio() const { return this->usedRatio_ != nullptr;};
        void deleteUsedRatio() { this->usedRatio_ = nullptr;};
        inline int64_t getUsedRatio() const { DARABONBA_PTR_GET_DEFAULT(usedRatio_, 0L) };
        inline Gpu& setUsedRatio(int64_t usedRatio) { DARABONBA_PTR_SET_VALUE(usedRatio_, usedRatio) };


      protected:
        shared_ptr<bool> display_ {};
        shared_ptr<int64_t> oversellRatio_ {};
        shared_ptr<int64_t> remain_ {};
        shared_ptr<bool> reserveDisable_ {};
        shared_ptr<int64_t> reserveDisableTotal_ {};
        shared_ptr<int64_t> reserved_ {};
        shared_ptr<bool> statusDisable_ {};
        shared_ptr<int64_t> statusDisableTotal_ {};
        shared_ptr<int64_t> total_ {};
        shared_ptr<string> type_ {};
        shared_ptr<int64_t> used_ {};
        shared_ptr<int64_t> usedRatio_ {};
      };

      class Cpu : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Cpu& obj) { 
          DARABONBA_PTR_TO_JSON(Display, display_);
          DARABONBA_PTR_TO_JSON(OversellRatio, oversellRatio_);
          DARABONBA_PTR_TO_JSON(Remain, remain_);
          DARABONBA_PTR_TO_JSON(ReserveDisable, reserveDisable_);
          DARABONBA_PTR_TO_JSON(ReserveDisableTotal, reserveDisableTotal_);
          DARABONBA_PTR_TO_JSON(Reserved, reserved_);
          DARABONBA_PTR_TO_JSON(StatusDisable, statusDisable_);
          DARABONBA_PTR_TO_JSON(StatusDisableTotal, statusDisableTotal_);
          DARABONBA_PTR_TO_JSON(Total, total_);
          DARABONBA_PTR_TO_JSON(Type, type_);
          DARABONBA_PTR_TO_JSON(Used, used_);
          DARABONBA_PTR_TO_JSON(UsedRatio, usedRatio_);
        };
        friend void from_json(const Darabonba::Json& j, Cpu& obj) { 
          DARABONBA_PTR_FROM_JSON(Display, display_);
          DARABONBA_PTR_FROM_JSON(OversellRatio, oversellRatio_);
          DARABONBA_PTR_FROM_JSON(Remain, remain_);
          DARABONBA_PTR_FROM_JSON(ReserveDisable, reserveDisable_);
          DARABONBA_PTR_FROM_JSON(ReserveDisableTotal, reserveDisableTotal_);
          DARABONBA_PTR_FROM_JSON(Reserved, reserved_);
          DARABONBA_PTR_FROM_JSON(StatusDisable, statusDisable_);
          DARABONBA_PTR_FROM_JSON(StatusDisableTotal, statusDisableTotal_);
          DARABONBA_PTR_FROM_JSON(Total, total_);
          DARABONBA_PTR_FROM_JSON(Type, type_);
          DARABONBA_PTR_FROM_JSON(Used, used_);
          DARABONBA_PTR_FROM_JSON(UsedRatio, usedRatio_);
        };
        Cpu() = default ;
        Cpu(const Cpu &) = default ;
        Cpu(Cpu &&) = default ;
        Cpu(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Cpu() = default ;
        Cpu& operator=(const Cpu &) = default ;
        Cpu& operator=(Cpu &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->display_ == nullptr
        && this->oversellRatio_ == nullptr && this->remain_ == nullptr && this->reserveDisable_ == nullptr && this->reserveDisableTotal_ == nullptr && this->reserved_ == nullptr
        && this->statusDisable_ == nullptr && this->statusDisableTotal_ == nullptr && this->total_ == nullptr && this->type_ == nullptr && this->used_ == nullptr
        && this->usedRatio_ == nullptr; };
        // display Field Functions 
        bool hasDisplay() const { return this->display_ != nullptr;};
        void deleteDisplay() { this->display_ = nullptr;};
        inline bool getDisplay() const { DARABONBA_PTR_GET_DEFAULT(display_, false) };
        inline Cpu& setDisplay(bool display) { DARABONBA_PTR_SET_VALUE(display_, display) };


        // oversellRatio Field Functions 
        bool hasOversellRatio() const { return this->oversellRatio_ != nullptr;};
        void deleteOversellRatio() { this->oversellRatio_ = nullptr;};
        inline int64_t getOversellRatio() const { DARABONBA_PTR_GET_DEFAULT(oversellRatio_, 0L) };
        inline Cpu& setOversellRatio(int64_t oversellRatio) { DARABONBA_PTR_SET_VALUE(oversellRatio_, oversellRatio) };


        // remain Field Functions 
        bool hasRemain() const { return this->remain_ != nullptr;};
        void deleteRemain() { this->remain_ = nullptr;};
        inline int64_t getRemain() const { DARABONBA_PTR_GET_DEFAULT(remain_, 0L) };
        inline Cpu& setRemain(int64_t remain) { DARABONBA_PTR_SET_VALUE(remain_, remain) };


        // reserveDisable Field Functions 
        bool hasReserveDisable() const { return this->reserveDisable_ != nullptr;};
        void deleteReserveDisable() { this->reserveDisable_ = nullptr;};
        inline bool getReserveDisable() const { DARABONBA_PTR_GET_DEFAULT(reserveDisable_, false) };
        inline Cpu& setReserveDisable(bool reserveDisable) { DARABONBA_PTR_SET_VALUE(reserveDisable_, reserveDisable) };


        // reserveDisableTotal Field Functions 
        bool hasReserveDisableTotal() const { return this->reserveDisableTotal_ != nullptr;};
        void deleteReserveDisableTotal() { this->reserveDisableTotal_ = nullptr;};
        inline int64_t getReserveDisableTotal() const { DARABONBA_PTR_GET_DEFAULT(reserveDisableTotal_, 0L) };
        inline Cpu& setReserveDisableTotal(int64_t reserveDisableTotal) { DARABONBA_PTR_SET_VALUE(reserveDisableTotal_, reserveDisableTotal) };


        // reserved Field Functions 
        bool hasReserved() const { return this->reserved_ != nullptr;};
        void deleteReserved() { this->reserved_ = nullptr;};
        inline int64_t getReserved() const { DARABONBA_PTR_GET_DEFAULT(reserved_, 0L) };
        inline Cpu& setReserved(int64_t reserved) { DARABONBA_PTR_SET_VALUE(reserved_, reserved) };


        // statusDisable Field Functions 
        bool hasStatusDisable() const { return this->statusDisable_ != nullptr;};
        void deleteStatusDisable() { this->statusDisable_ = nullptr;};
        inline bool getStatusDisable() const { DARABONBA_PTR_GET_DEFAULT(statusDisable_, false) };
        inline Cpu& setStatusDisable(bool statusDisable) { DARABONBA_PTR_SET_VALUE(statusDisable_, statusDisable) };


        // statusDisableTotal Field Functions 
        bool hasStatusDisableTotal() const { return this->statusDisableTotal_ != nullptr;};
        void deleteStatusDisableTotal() { this->statusDisableTotal_ = nullptr;};
        inline int64_t getStatusDisableTotal() const { DARABONBA_PTR_GET_DEFAULT(statusDisableTotal_, 0L) };
        inline Cpu& setStatusDisableTotal(int64_t statusDisableTotal) { DARABONBA_PTR_SET_VALUE(statusDisableTotal_, statusDisableTotal) };


        // total Field Functions 
        bool hasTotal() const { return this->total_ != nullptr;};
        void deleteTotal() { this->total_ = nullptr;};
        inline int64_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0L) };
        inline Cpu& setTotal(int64_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline Cpu& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


        // used Field Functions 
        bool hasUsed() const { return this->used_ != nullptr;};
        void deleteUsed() { this->used_ = nullptr;};
        inline int64_t getUsed() const { DARABONBA_PTR_GET_DEFAULT(used_, 0L) };
        inline Cpu& setUsed(int64_t used) { DARABONBA_PTR_SET_VALUE(used_, used) };


        // usedRatio Field Functions 
        bool hasUsedRatio() const { return this->usedRatio_ != nullptr;};
        void deleteUsedRatio() { this->usedRatio_ = nullptr;};
        inline int64_t getUsedRatio() const { DARABONBA_PTR_GET_DEFAULT(usedRatio_, 0L) };
        inline Cpu& setUsedRatio(int64_t usedRatio) { DARABONBA_PTR_SET_VALUE(usedRatio_, usedRatio) };


      protected:
        shared_ptr<bool> display_ {};
        shared_ptr<int64_t> oversellRatio_ {};
        shared_ptr<int64_t> remain_ {};
        shared_ptr<bool> reserveDisable_ {};
        shared_ptr<int64_t> reserveDisableTotal_ {};
        shared_ptr<int64_t> reserved_ {};
        shared_ptr<bool> statusDisable_ {};
        shared_ptr<int64_t> statusDisableTotal_ {};
        shared_ptr<int64_t> total_ {};
        shared_ptr<string> type_ {};
        shared_ptr<int64_t> used_ {};
        shared_ptr<int64_t> usedRatio_ {};
      };

      class BlockStorage : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const BlockStorage& obj) { 
          DARABONBA_PTR_TO_JSON(Display, display_);
          DARABONBA_PTR_TO_JSON(OversellRatio, oversellRatio_);
          DARABONBA_PTR_TO_JSON(Remain, remain_);
          DARABONBA_PTR_TO_JSON(ReserveDisable, reserveDisable_);
          DARABONBA_PTR_TO_JSON(ReserveDisableTotal, reserveDisableTotal_);
          DARABONBA_PTR_TO_JSON(Reserved, reserved_);
          DARABONBA_PTR_TO_JSON(StatusDisable, statusDisable_);
          DARABONBA_PTR_TO_JSON(StatusDisableTotal, statusDisableTotal_);
          DARABONBA_PTR_TO_JSON(Total, total_);
          DARABONBA_PTR_TO_JSON(Type, type_);
          DARABONBA_PTR_TO_JSON(Used, used_);
          DARABONBA_PTR_TO_JSON(UsedRatio, usedRatio_);
        };
        friend void from_json(const Darabonba::Json& j, BlockStorage& obj) { 
          DARABONBA_PTR_FROM_JSON(Display, display_);
          DARABONBA_PTR_FROM_JSON(OversellRatio, oversellRatio_);
          DARABONBA_PTR_FROM_JSON(Remain, remain_);
          DARABONBA_PTR_FROM_JSON(ReserveDisable, reserveDisable_);
          DARABONBA_PTR_FROM_JSON(ReserveDisableTotal, reserveDisableTotal_);
          DARABONBA_PTR_FROM_JSON(Reserved, reserved_);
          DARABONBA_PTR_FROM_JSON(StatusDisable, statusDisable_);
          DARABONBA_PTR_FROM_JSON(StatusDisableTotal, statusDisableTotal_);
          DARABONBA_PTR_FROM_JSON(Total, total_);
          DARABONBA_PTR_FROM_JSON(Type, type_);
          DARABONBA_PTR_FROM_JSON(Used, used_);
          DARABONBA_PTR_FROM_JSON(UsedRatio, usedRatio_);
        };
        BlockStorage() = default ;
        BlockStorage(const BlockStorage &) = default ;
        BlockStorage(BlockStorage &&) = default ;
        BlockStorage(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~BlockStorage() = default ;
        BlockStorage& operator=(const BlockStorage &) = default ;
        BlockStorage& operator=(BlockStorage &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->display_ == nullptr
        && this->oversellRatio_ == nullptr && this->remain_ == nullptr && this->reserveDisable_ == nullptr && this->reserveDisableTotal_ == nullptr && this->reserved_ == nullptr
        && this->statusDisable_ == nullptr && this->statusDisableTotal_ == nullptr && this->total_ == nullptr && this->type_ == nullptr && this->used_ == nullptr
        && this->usedRatio_ == nullptr; };
        // display Field Functions 
        bool hasDisplay() const { return this->display_ != nullptr;};
        void deleteDisplay() { this->display_ = nullptr;};
        inline bool getDisplay() const { DARABONBA_PTR_GET_DEFAULT(display_, false) };
        inline BlockStorage& setDisplay(bool display) { DARABONBA_PTR_SET_VALUE(display_, display) };


        // oversellRatio Field Functions 
        bool hasOversellRatio() const { return this->oversellRatio_ != nullptr;};
        void deleteOversellRatio() { this->oversellRatio_ = nullptr;};
        inline int64_t getOversellRatio() const { DARABONBA_PTR_GET_DEFAULT(oversellRatio_, 0L) };
        inline BlockStorage& setOversellRatio(int64_t oversellRatio) { DARABONBA_PTR_SET_VALUE(oversellRatio_, oversellRatio) };


        // remain Field Functions 
        bool hasRemain() const { return this->remain_ != nullptr;};
        void deleteRemain() { this->remain_ = nullptr;};
        inline int64_t getRemain() const { DARABONBA_PTR_GET_DEFAULT(remain_, 0L) };
        inline BlockStorage& setRemain(int64_t remain) { DARABONBA_PTR_SET_VALUE(remain_, remain) };


        // reserveDisable Field Functions 
        bool hasReserveDisable() const { return this->reserveDisable_ != nullptr;};
        void deleteReserveDisable() { this->reserveDisable_ = nullptr;};
        inline bool getReserveDisable() const { DARABONBA_PTR_GET_DEFAULT(reserveDisable_, false) };
        inline BlockStorage& setReserveDisable(bool reserveDisable) { DARABONBA_PTR_SET_VALUE(reserveDisable_, reserveDisable) };


        // reserveDisableTotal Field Functions 
        bool hasReserveDisableTotal() const { return this->reserveDisableTotal_ != nullptr;};
        void deleteReserveDisableTotal() { this->reserveDisableTotal_ = nullptr;};
        inline int64_t getReserveDisableTotal() const { DARABONBA_PTR_GET_DEFAULT(reserveDisableTotal_, 0L) };
        inline BlockStorage& setReserveDisableTotal(int64_t reserveDisableTotal) { DARABONBA_PTR_SET_VALUE(reserveDisableTotal_, reserveDisableTotal) };


        // reserved Field Functions 
        bool hasReserved() const { return this->reserved_ != nullptr;};
        void deleteReserved() { this->reserved_ = nullptr;};
        inline int64_t getReserved() const { DARABONBA_PTR_GET_DEFAULT(reserved_, 0L) };
        inline BlockStorage& setReserved(int64_t reserved) { DARABONBA_PTR_SET_VALUE(reserved_, reserved) };


        // statusDisable Field Functions 
        bool hasStatusDisable() const { return this->statusDisable_ != nullptr;};
        void deleteStatusDisable() { this->statusDisable_ = nullptr;};
        inline bool getStatusDisable() const { DARABONBA_PTR_GET_DEFAULT(statusDisable_, false) };
        inline BlockStorage& setStatusDisable(bool statusDisable) { DARABONBA_PTR_SET_VALUE(statusDisable_, statusDisable) };


        // statusDisableTotal Field Functions 
        bool hasStatusDisableTotal() const { return this->statusDisableTotal_ != nullptr;};
        void deleteStatusDisableTotal() { this->statusDisableTotal_ = nullptr;};
        inline int64_t getStatusDisableTotal() const { DARABONBA_PTR_GET_DEFAULT(statusDisableTotal_, 0L) };
        inline BlockStorage& setStatusDisableTotal(int64_t statusDisableTotal) { DARABONBA_PTR_SET_VALUE(statusDisableTotal_, statusDisableTotal) };


        // total Field Functions 
        bool hasTotal() const { return this->total_ != nullptr;};
        void deleteTotal() { this->total_ = nullptr;};
        inline int64_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0L) };
        inline BlockStorage& setTotal(int64_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline BlockStorage& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


        // used Field Functions 
        bool hasUsed() const { return this->used_ != nullptr;};
        void deleteUsed() { this->used_ = nullptr;};
        inline int64_t getUsed() const { DARABONBA_PTR_GET_DEFAULT(used_, 0L) };
        inline BlockStorage& setUsed(int64_t used) { DARABONBA_PTR_SET_VALUE(used_, used) };


        // usedRatio Field Functions 
        bool hasUsedRatio() const { return this->usedRatio_ != nullptr;};
        void deleteUsedRatio() { this->usedRatio_ = nullptr;};
        inline int64_t getUsedRatio() const { DARABONBA_PTR_GET_DEFAULT(usedRatio_, 0L) };
        inline BlockStorage& setUsedRatio(int64_t usedRatio) { DARABONBA_PTR_SET_VALUE(usedRatio_, usedRatio) };


      protected:
        shared_ptr<bool> display_ {};
        shared_ptr<int64_t> oversellRatio_ {};
        shared_ptr<int64_t> remain_ {};
        shared_ptr<bool> reserveDisable_ {};
        shared_ptr<int64_t> reserveDisableTotal_ {};
        shared_ptr<int64_t> reserved_ {};
        shared_ptr<bool> statusDisable_ {};
        shared_ptr<int64_t> statusDisableTotal_ {};
        shared_ptr<int64_t> total_ {};
        shared_ptr<string> type_ {};
        shared_ptr<int64_t> used_ {};
        shared_ptr<int64_t> usedRatio_ {};
      };

      class Bandwidth : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Bandwidth& obj) { 
          DARABONBA_PTR_TO_JSON(Display, display_);
          DARABONBA_PTR_TO_JSON(OversellRatio, oversellRatio_);
          DARABONBA_PTR_TO_JSON(Remain, remain_);
          DARABONBA_PTR_TO_JSON(ReserveDisable, reserveDisable_);
          DARABONBA_PTR_TO_JSON(ReserveDisableTotal, reserveDisableTotal_);
          DARABONBA_PTR_TO_JSON(Reserved, reserved_);
          DARABONBA_PTR_TO_JSON(StatusDisable, statusDisable_);
          DARABONBA_PTR_TO_JSON(StatusDisableTotal, statusDisableTotal_);
          DARABONBA_PTR_TO_JSON(Total, total_);
          DARABONBA_PTR_TO_JSON(Type, type_);
          DARABONBA_PTR_TO_JSON(Used, used_);
          DARABONBA_PTR_TO_JSON(UsedRatio, usedRatio_);
        };
        friend void from_json(const Darabonba::Json& j, Bandwidth& obj) { 
          DARABONBA_PTR_FROM_JSON(Display, display_);
          DARABONBA_PTR_FROM_JSON(OversellRatio, oversellRatio_);
          DARABONBA_PTR_FROM_JSON(Remain, remain_);
          DARABONBA_PTR_FROM_JSON(ReserveDisable, reserveDisable_);
          DARABONBA_PTR_FROM_JSON(ReserveDisableTotal, reserveDisableTotal_);
          DARABONBA_PTR_FROM_JSON(Reserved, reserved_);
          DARABONBA_PTR_FROM_JSON(StatusDisable, statusDisable_);
          DARABONBA_PTR_FROM_JSON(StatusDisableTotal, statusDisableTotal_);
          DARABONBA_PTR_FROM_JSON(Total, total_);
          DARABONBA_PTR_FROM_JSON(Type, type_);
          DARABONBA_PTR_FROM_JSON(Used, used_);
          DARABONBA_PTR_FROM_JSON(UsedRatio, usedRatio_);
        };
        Bandwidth() = default ;
        Bandwidth(const Bandwidth &) = default ;
        Bandwidth(Bandwidth &&) = default ;
        Bandwidth(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Bandwidth() = default ;
        Bandwidth& operator=(const Bandwidth &) = default ;
        Bandwidth& operator=(Bandwidth &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->display_ == nullptr
        && this->oversellRatio_ == nullptr && this->remain_ == nullptr && this->reserveDisable_ == nullptr && this->reserveDisableTotal_ == nullptr && this->reserved_ == nullptr
        && this->statusDisable_ == nullptr && this->statusDisableTotal_ == nullptr && this->total_ == nullptr && this->type_ == nullptr && this->used_ == nullptr
        && this->usedRatio_ == nullptr; };
        // display Field Functions 
        bool hasDisplay() const { return this->display_ != nullptr;};
        void deleteDisplay() { this->display_ = nullptr;};
        inline bool getDisplay() const { DARABONBA_PTR_GET_DEFAULT(display_, false) };
        inline Bandwidth& setDisplay(bool display) { DARABONBA_PTR_SET_VALUE(display_, display) };


        // oversellRatio Field Functions 
        bool hasOversellRatio() const { return this->oversellRatio_ != nullptr;};
        void deleteOversellRatio() { this->oversellRatio_ = nullptr;};
        inline int64_t getOversellRatio() const { DARABONBA_PTR_GET_DEFAULT(oversellRatio_, 0L) };
        inline Bandwidth& setOversellRatio(int64_t oversellRatio) { DARABONBA_PTR_SET_VALUE(oversellRatio_, oversellRatio) };


        // remain Field Functions 
        bool hasRemain() const { return this->remain_ != nullptr;};
        void deleteRemain() { this->remain_ = nullptr;};
        inline int64_t getRemain() const { DARABONBA_PTR_GET_DEFAULT(remain_, 0L) };
        inline Bandwidth& setRemain(int64_t remain) { DARABONBA_PTR_SET_VALUE(remain_, remain) };


        // reserveDisable Field Functions 
        bool hasReserveDisable() const { return this->reserveDisable_ != nullptr;};
        void deleteReserveDisable() { this->reserveDisable_ = nullptr;};
        inline bool getReserveDisable() const { DARABONBA_PTR_GET_DEFAULT(reserveDisable_, false) };
        inline Bandwidth& setReserveDisable(bool reserveDisable) { DARABONBA_PTR_SET_VALUE(reserveDisable_, reserveDisable) };


        // reserveDisableTotal Field Functions 
        bool hasReserveDisableTotal() const { return this->reserveDisableTotal_ != nullptr;};
        void deleteReserveDisableTotal() { this->reserveDisableTotal_ = nullptr;};
        inline int64_t getReserveDisableTotal() const { DARABONBA_PTR_GET_DEFAULT(reserveDisableTotal_, 0L) };
        inline Bandwidth& setReserveDisableTotal(int64_t reserveDisableTotal) { DARABONBA_PTR_SET_VALUE(reserveDisableTotal_, reserveDisableTotal) };


        // reserved Field Functions 
        bool hasReserved() const { return this->reserved_ != nullptr;};
        void deleteReserved() { this->reserved_ = nullptr;};
        inline int64_t getReserved() const { DARABONBA_PTR_GET_DEFAULT(reserved_, 0L) };
        inline Bandwidth& setReserved(int64_t reserved) { DARABONBA_PTR_SET_VALUE(reserved_, reserved) };


        // statusDisable Field Functions 
        bool hasStatusDisable() const { return this->statusDisable_ != nullptr;};
        void deleteStatusDisable() { this->statusDisable_ = nullptr;};
        inline bool getStatusDisable() const { DARABONBA_PTR_GET_DEFAULT(statusDisable_, false) };
        inline Bandwidth& setStatusDisable(bool statusDisable) { DARABONBA_PTR_SET_VALUE(statusDisable_, statusDisable) };


        // statusDisableTotal Field Functions 
        bool hasStatusDisableTotal() const { return this->statusDisableTotal_ != nullptr;};
        void deleteStatusDisableTotal() { this->statusDisableTotal_ = nullptr;};
        inline int64_t getStatusDisableTotal() const { DARABONBA_PTR_GET_DEFAULT(statusDisableTotal_, 0L) };
        inline Bandwidth& setStatusDisableTotal(int64_t statusDisableTotal) { DARABONBA_PTR_SET_VALUE(statusDisableTotal_, statusDisableTotal) };


        // total Field Functions 
        bool hasTotal() const { return this->total_ != nullptr;};
        void deleteTotal() { this->total_ = nullptr;};
        inline int64_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0L) };
        inline Bandwidth& setTotal(int64_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline Bandwidth& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


        // used Field Functions 
        bool hasUsed() const { return this->used_ != nullptr;};
        void deleteUsed() { this->used_ = nullptr;};
        inline int64_t getUsed() const { DARABONBA_PTR_GET_DEFAULT(used_, 0L) };
        inline Bandwidth& setUsed(int64_t used) { DARABONBA_PTR_SET_VALUE(used_, used) };


        // usedRatio Field Functions 
        bool hasUsedRatio() const { return this->usedRatio_ != nullptr;};
        void deleteUsedRatio() { this->usedRatio_ = nullptr;};
        inline int64_t getUsedRatio() const { DARABONBA_PTR_GET_DEFAULT(usedRatio_, 0L) };
        inline Bandwidth& setUsedRatio(int64_t usedRatio) { DARABONBA_PTR_SET_VALUE(usedRatio_, usedRatio) };


      protected:
        shared_ptr<bool> display_ {};
        shared_ptr<int64_t> oversellRatio_ {};
        shared_ptr<int64_t> remain_ {};
        shared_ptr<bool> reserveDisable_ {};
        shared_ptr<int64_t> reserveDisableTotal_ {};
        shared_ptr<int64_t> reserved_ {};
        shared_ptr<bool> statusDisable_ {};
        shared_ptr<int64_t> statusDisableTotal_ {};
        shared_ptr<int64_t> total_ {};
        shared_ptr<string> type_ {};
        shared_ptr<int64_t> used_ {};
        shared_ptr<int64_t> usedRatio_ {};
      };

      class ArmCard : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ArmCard& obj) { 
          DARABONBA_PTR_TO_JSON(Display, display_);
          DARABONBA_PTR_TO_JSON(OversellRatio, oversellRatio_);
          DARABONBA_PTR_TO_JSON(Remain, remain_);
          DARABONBA_PTR_TO_JSON(ReserveDisable, reserveDisable_);
          DARABONBA_PTR_TO_JSON(ReserveDisableTotal, reserveDisableTotal_);
          DARABONBA_PTR_TO_JSON(Reserved, reserved_);
          DARABONBA_PTR_TO_JSON(StatusDisable, statusDisable_);
          DARABONBA_PTR_TO_JSON(StatusDisableTotal, statusDisableTotal_);
          DARABONBA_PTR_TO_JSON(Total, total_);
          DARABONBA_PTR_TO_JSON(Type, type_);
          DARABONBA_PTR_TO_JSON(Used, used_);
          DARABONBA_PTR_TO_JSON(UsedRatio, usedRatio_);
        };
        friend void from_json(const Darabonba::Json& j, ArmCard& obj) { 
          DARABONBA_PTR_FROM_JSON(Display, display_);
          DARABONBA_PTR_FROM_JSON(OversellRatio, oversellRatio_);
          DARABONBA_PTR_FROM_JSON(Remain, remain_);
          DARABONBA_PTR_FROM_JSON(ReserveDisable, reserveDisable_);
          DARABONBA_PTR_FROM_JSON(ReserveDisableTotal, reserveDisableTotal_);
          DARABONBA_PTR_FROM_JSON(Reserved, reserved_);
          DARABONBA_PTR_FROM_JSON(StatusDisable, statusDisable_);
          DARABONBA_PTR_FROM_JSON(StatusDisableTotal, statusDisableTotal_);
          DARABONBA_PTR_FROM_JSON(Total, total_);
          DARABONBA_PTR_FROM_JSON(Type, type_);
          DARABONBA_PTR_FROM_JSON(Used, used_);
          DARABONBA_PTR_FROM_JSON(UsedRatio, usedRatio_);
        };
        ArmCard() = default ;
        ArmCard(const ArmCard &) = default ;
        ArmCard(ArmCard &&) = default ;
        ArmCard(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ArmCard() = default ;
        ArmCard& operator=(const ArmCard &) = default ;
        ArmCard& operator=(ArmCard &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->display_ == nullptr
        && this->oversellRatio_ == nullptr && this->remain_ == nullptr && this->reserveDisable_ == nullptr && this->reserveDisableTotal_ == nullptr && this->reserved_ == nullptr
        && this->statusDisable_ == nullptr && this->statusDisableTotal_ == nullptr && this->total_ == nullptr && this->type_ == nullptr && this->used_ == nullptr
        && this->usedRatio_ == nullptr; };
        // display Field Functions 
        bool hasDisplay() const { return this->display_ != nullptr;};
        void deleteDisplay() { this->display_ = nullptr;};
        inline bool getDisplay() const { DARABONBA_PTR_GET_DEFAULT(display_, false) };
        inline ArmCard& setDisplay(bool display) { DARABONBA_PTR_SET_VALUE(display_, display) };


        // oversellRatio Field Functions 
        bool hasOversellRatio() const { return this->oversellRatio_ != nullptr;};
        void deleteOversellRatio() { this->oversellRatio_ = nullptr;};
        inline int64_t getOversellRatio() const { DARABONBA_PTR_GET_DEFAULT(oversellRatio_, 0L) };
        inline ArmCard& setOversellRatio(int64_t oversellRatio) { DARABONBA_PTR_SET_VALUE(oversellRatio_, oversellRatio) };


        // remain Field Functions 
        bool hasRemain() const { return this->remain_ != nullptr;};
        void deleteRemain() { this->remain_ = nullptr;};
        inline int64_t getRemain() const { DARABONBA_PTR_GET_DEFAULT(remain_, 0L) };
        inline ArmCard& setRemain(int64_t remain) { DARABONBA_PTR_SET_VALUE(remain_, remain) };


        // reserveDisable Field Functions 
        bool hasReserveDisable() const { return this->reserveDisable_ != nullptr;};
        void deleteReserveDisable() { this->reserveDisable_ = nullptr;};
        inline bool getReserveDisable() const { DARABONBA_PTR_GET_DEFAULT(reserveDisable_, false) };
        inline ArmCard& setReserveDisable(bool reserveDisable) { DARABONBA_PTR_SET_VALUE(reserveDisable_, reserveDisable) };


        // reserveDisableTotal Field Functions 
        bool hasReserveDisableTotal() const { return this->reserveDisableTotal_ != nullptr;};
        void deleteReserveDisableTotal() { this->reserveDisableTotal_ = nullptr;};
        inline int64_t getReserveDisableTotal() const { DARABONBA_PTR_GET_DEFAULT(reserveDisableTotal_, 0L) };
        inline ArmCard& setReserveDisableTotal(int64_t reserveDisableTotal) { DARABONBA_PTR_SET_VALUE(reserveDisableTotal_, reserveDisableTotal) };


        // reserved Field Functions 
        bool hasReserved() const { return this->reserved_ != nullptr;};
        void deleteReserved() { this->reserved_ = nullptr;};
        inline int64_t getReserved() const { DARABONBA_PTR_GET_DEFAULT(reserved_, 0L) };
        inline ArmCard& setReserved(int64_t reserved) { DARABONBA_PTR_SET_VALUE(reserved_, reserved) };


        // statusDisable Field Functions 
        bool hasStatusDisable() const { return this->statusDisable_ != nullptr;};
        void deleteStatusDisable() { this->statusDisable_ = nullptr;};
        inline bool getStatusDisable() const { DARABONBA_PTR_GET_DEFAULT(statusDisable_, false) };
        inline ArmCard& setStatusDisable(bool statusDisable) { DARABONBA_PTR_SET_VALUE(statusDisable_, statusDisable) };


        // statusDisableTotal Field Functions 
        bool hasStatusDisableTotal() const { return this->statusDisableTotal_ != nullptr;};
        void deleteStatusDisableTotal() { this->statusDisableTotal_ = nullptr;};
        inline int64_t getStatusDisableTotal() const { DARABONBA_PTR_GET_DEFAULT(statusDisableTotal_, 0L) };
        inline ArmCard& setStatusDisableTotal(int64_t statusDisableTotal) { DARABONBA_PTR_SET_VALUE(statusDisableTotal_, statusDisableTotal) };


        // total Field Functions 
        bool hasTotal() const { return this->total_ != nullptr;};
        void deleteTotal() { this->total_ = nullptr;};
        inline int64_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0L) };
        inline ArmCard& setTotal(int64_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline ArmCard& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


        // used Field Functions 
        bool hasUsed() const { return this->used_ != nullptr;};
        void deleteUsed() { this->used_ = nullptr;};
        inline int64_t getUsed() const { DARABONBA_PTR_GET_DEFAULT(used_, 0L) };
        inline ArmCard& setUsed(int64_t used) { DARABONBA_PTR_SET_VALUE(used_, used) };


        // usedRatio Field Functions 
        bool hasUsedRatio() const { return this->usedRatio_ != nullptr;};
        void deleteUsedRatio() { this->usedRatio_ = nullptr;};
        inline int64_t getUsedRatio() const { DARABONBA_PTR_GET_DEFAULT(usedRatio_, 0L) };
        inline ArmCard& setUsedRatio(int64_t usedRatio) { DARABONBA_PTR_SET_VALUE(usedRatio_, usedRatio) };


      protected:
        shared_ptr<bool> display_ {};
        shared_ptr<int64_t> oversellRatio_ {};
        shared_ptr<int64_t> remain_ {};
        shared_ptr<bool> reserveDisable_ {};
        shared_ptr<int64_t> reserveDisableTotal_ {};
        shared_ptr<int64_t> reserved_ {};
        shared_ptr<bool> statusDisable_ {};
        shared_ptr<int64_t> statusDisableTotal_ {};
        shared_ptr<int64_t> total_ {};
        shared_ptr<string> type_ {};
        shared_ptr<int64_t> used_ {};
        shared_ptr<int64_t> usedRatio_ {};
      };

      virtual bool empty() const override { return this->areaCode_ == nullptr
        && this->areaName_ == nullptr && this->armCard_ == nullptr && this->attributes_ == nullptr && this->bandwidth_ == nullptr && this->blockStorage_ == nullptr
        && this->countryCode_ == nullptr && this->countryName_ == nullptr && this->cpu_ == nullptr && this->gpu_ == nullptr && this->hdd_ == nullptr
        && this->houseId_ == nullptr && this->ipv4s_ == nullptr && this->ipv6s_ == nullptr && this->ispTypes_ == nullptr && this->memory_ == nullptr
        && this->name_ == nullptr && this->nvme_ == nullptr && this->ossStorage_ == nullptr && this->pangu_ == nullptr && this->pcfarmNum_ == nullptr
        && this->poc_ == nullptr && this->provinceCode_ == nullptr && this->provinceName_ == nullptr && this->reserveDisable_ == nullptr && this->ssd_ == nullptr
        && this->statusDisable_ == nullptr && this->type_ == nullptr && this->uuid_ == nullptr && this->virtual_ == nullptr; };
      // areaCode Field Functions 
      bool hasAreaCode() const { return this->areaCode_ != nullptr;};
      void deleteAreaCode() { this->areaCode_ = nullptr;};
      inline string getAreaCode() const { DARABONBA_PTR_GET_DEFAULT(areaCode_, "") };
      inline Data& setAreaCode(string areaCode) { DARABONBA_PTR_SET_VALUE(areaCode_, areaCode) };


      // areaName Field Functions 
      bool hasAreaName() const { return this->areaName_ != nullptr;};
      void deleteAreaName() { this->areaName_ = nullptr;};
      inline string getAreaName() const { DARABONBA_PTR_GET_DEFAULT(areaName_, "") };
      inline Data& setAreaName(string areaName) { DARABONBA_PTR_SET_VALUE(areaName_, areaName) };


      // armCard Field Functions 
      bool hasArmCard() const { return this->armCard_ != nullptr;};
      void deleteArmCard() { this->armCard_ = nullptr;};
      inline const Data::ArmCard & getArmCard() const { DARABONBA_PTR_GET_CONST(armCard_, Data::ArmCard) };
      inline Data::ArmCard getArmCard() { DARABONBA_PTR_GET(armCard_, Data::ArmCard) };
      inline Data& setArmCard(const Data::ArmCard & armCard) { DARABONBA_PTR_SET_VALUE(armCard_, armCard) };
      inline Data& setArmCard(Data::ArmCard && armCard) { DARABONBA_PTR_SET_RVALUE(armCard_, armCard) };


      // attributes Field Functions 
      bool hasAttributes() const { return this->attributes_ != nullptr;};
      void deleteAttributes() { this->attributes_ = nullptr;};
      inline const vector<string> & getAttributes() const { DARABONBA_PTR_GET_CONST(attributes_, vector<string>) };
      inline vector<string> getAttributes() { DARABONBA_PTR_GET(attributes_, vector<string>) };
      inline Data& setAttributes(const vector<string> & attributes) { DARABONBA_PTR_SET_VALUE(attributes_, attributes) };
      inline Data& setAttributes(vector<string> && attributes) { DARABONBA_PTR_SET_RVALUE(attributes_, attributes) };


      // bandwidth Field Functions 
      bool hasBandwidth() const { return this->bandwidth_ != nullptr;};
      void deleteBandwidth() { this->bandwidth_ = nullptr;};
      inline const Data::Bandwidth & getBandwidth() const { DARABONBA_PTR_GET_CONST(bandwidth_, Data::Bandwidth) };
      inline Data::Bandwidth getBandwidth() { DARABONBA_PTR_GET(bandwidth_, Data::Bandwidth) };
      inline Data& setBandwidth(const Data::Bandwidth & bandwidth) { DARABONBA_PTR_SET_VALUE(bandwidth_, bandwidth) };
      inline Data& setBandwidth(Data::Bandwidth && bandwidth) { DARABONBA_PTR_SET_RVALUE(bandwidth_, bandwidth) };


      // blockStorage Field Functions 
      bool hasBlockStorage() const { return this->blockStorage_ != nullptr;};
      void deleteBlockStorage() { this->blockStorage_ = nullptr;};
      inline const Data::BlockStorage & getBlockStorage() const { DARABONBA_PTR_GET_CONST(blockStorage_, Data::BlockStorage) };
      inline Data::BlockStorage getBlockStorage() { DARABONBA_PTR_GET(blockStorage_, Data::BlockStorage) };
      inline Data& setBlockStorage(const Data::BlockStorage & blockStorage) { DARABONBA_PTR_SET_VALUE(blockStorage_, blockStorage) };
      inline Data& setBlockStorage(Data::BlockStorage && blockStorage) { DARABONBA_PTR_SET_RVALUE(blockStorage_, blockStorage) };


      // countryCode Field Functions 
      bool hasCountryCode() const { return this->countryCode_ != nullptr;};
      void deleteCountryCode() { this->countryCode_ = nullptr;};
      inline string getCountryCode() const { DARABONBA_PTR_GET_DEFAULT(countryCode_, "") };
      inline Data& setCountryCode(string countryCode) { DARABONBA_PTR_SET_VALUE(countryCode_, countryCode) };


      // countryName Field Functions 
      bool hasCountryName() const { return this->countryName_ != nullptr;};
      void deleteCountryName() { this->countryName_ = nullptr;};
      inline string getCountryName() const { DARABONBA_PTR_GET_DEFAULT(countryName_, "") };
      inline Data& setCountryName(string countryName) { DARABONBA_PTR_SET_VALUE(countryName_, countryName) };


      // cpu Field Functions 
      bool hasCpu() const { return this->cpu_ != nullptr;};
      void deleteCpu() { this->cpu_ = nullptr;};
      inline const Data::Cpu & getCpu() const { DARABONBA_PTR_GET_CONST(cpu_, Data::Cpu) };
      inline Data::Cpu getCpu() { DARABONBA_PTR_GET(cpu_, Data::Cpu) };
      inline Data& setCpu(const Data::Cpu & cpu) { DARABONBA_PTR_SET_VALUE(cpu_, cpu) };
      inline Data& setCpu(Data::Cpu && cpu) { DARABONBA_PTR_SET_RVALUE(cpu_, cpu) };


      // gpu Field Functions 
      bool hasGpu() const { return this->gpu_ != nullptr;};
      void deleteGpu() { this->gpu_ = nullptr;};
      inline const Data::Gpu & getGpu() const { DARABONBA_PTR_GET_CONST(gpu_, Data::Gpu) };
      inline Data::Gpu getGpu() { DARABONBA_PTR_GET(gpu_, Data::Gpu) };
      inline Data& setGpu(const Data::Gpu & gpu) { DARABONBA_PTR_SET_VALUE(gpu_, gpu) };
      inline Data& setGpu(Data::Gpu && gpu) { DARABONBA_PTR_SET_RVALUE(gpu_, gpu) };


      // hdd Field Functions 
      bool hasHdd() const { return this->hdd_ != nullptr;};
      void deleteHdd() { this->hdd_ = nullptr;};
      inline const Data::Hdd & getHdd() const { DARABONBA_PTR_GET_CONST(hdd_, Data::Hdd) };
      inline Data::Hdd getHdd() { DARABONBA_PTR_GET(hdd_, Data::Hdd) };
      inline Data& setHdd(const Data::Hdd & hdd) { DARABONBA_PTR_SET_VALUE(hdd_, hdd) };
      inline Data& setHdd(Data::Hdd && hdd) { DARABONBA_PTR_SET_RVALUE(hdd_, hdd) };


      // houseId Field Functions 
      bool hasHouseId() const { return this->houseId_ != nullptr;};
      void deleteHouseId() { this->houseId_ = nullptr;};
      inline string getHouseId() const { DARABONBA_PTR_GET_DEFAULT(houseId_, "") };
      inline Data& setHouseId(string houseId) { DARABONBA_PTR_SET_VALUE(houseId_, houseId) };


      // ipv4s Field Functions 
      bool hasIpv4s() const { return this->ipv4s_ != nullptr;};
      void deleteIpv4s() { this->ipv4s_ = nullptr;};
      inline const vector<Data::Ipv4s> & getIpv4s() const { DARABONBA_PTR_GET_CONST(ipv4s_, vector<Data::Ipv4s>) };
      inline vector<Data::Ipv4s> getIpv4s() { DARABONBA_PTR_GET(ipv4s_, vector<Data::Ipv4s>) };
      inline Data& setIpv4s(const vector<Data::Ipv4s> & ipv4s) { DARABONBA_PTR_SET_VALUE(ipv4s_, ipv4s) };
      inline Data& setIpv4s(vector<Data::Ipv4s> && ipv4s) { DARABONBA_PTR_SET_RVALUE(ipv4s_, ipv4s) };


      // ipv6s Field Functions 
      bool hasIpv6s() const { return this->ipv6s_ != nullptr;};
      void deleteIpv6s() { this->ipv6s_ = nullptr;};
      inline const vector<Data::Ipv6s> & getIpv6s() const { DARABONBA_PTR_GET_CONST(ipv6s_, vector<Data::Ipv6s>) };
      inline vector<Data::Ipv6s> getIpv6s() { DARABONBA_PTR_GET(ipv6s_, vector<Data::Ipv6s>) };
      inline Data& setIpv6s(const vector<Data::Ipv6s> & ipv6s) { DARABONBA_PTR_SET_VALUE(ipv6s_, ipv6s) };
      inline Data& setIpv6s(vector<Data::Ipv6s> && ipv6s) { DARABONBA_PTR_SET_RVALUE(ipv6s_, ipv6s) };


      // ispTypes Field Functions 
      bool hasIspTypes() const { return this->ispTypes_ != nullptr;};
      void deleteIspTypes() { this->ispTypes_ = nullptr;};
      inline const vector<string> & getIspTypes() const { DARABONBA_PTR_GET_CONST(ispTypes_, vector<string>) };
      inline vector<string> getIspTypes() { DARABONBA_PTR_GET(ispTypes_, vector<string>) };
      inline Data& setIspTypes(const vector<string> & ispTypes) { DARABONBA_PTR_SET_VALUE(ispTypes_, ispTypes) };
      inline Data& setIspTypes(vector<string> && ispTypes) { DARABONBA_PTR_SET_RVALUE(ispTypes_, ispTypes) };


      // memory Field Functions 
      bool hasMemory() const { return this->memory_ != nullptr;};
      void deleteMemory() { this->memory_ = nullptr;};
      inline const Data::Memory & getMemory() const { DARABONBA_PTR_GET_CONST(memory_, Data::Memory) };
      inline Data::Memory getMemory() { DARABONBA_PTR_GET(memory_, Data::Memory) };
      inline Data& setMemory(const Data::Memory & memory) { DARABONBA_PTR_SET_VALUE(memory_, memory) };
      inline Data& setMemory(Data::Memory && memory) { DARABONBA_PTR_SET_RVALUE(memory_, memory) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Data& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // nvme Field Functions 
      bool hasNvme() const { return this->nvme_ != nullptr;};
      void deleteNvme() { this->nvme_ = nullptr;};
      inline const Data::Nvme & getNvme() const { DARABONBA_PTR_GET_CONST(nvme_, Data::Nvme) };
      inline Data::Nvme getNvme() { DARABONBA_PTR_GET(nvme_, Data::Nvme) };
      inline Data& setNvme(const Data::Nvme & nvme) { DARABONBA_PTR_SET_VALUE(nvme_, nvme) };
      inline Data& setNvme(Data::Nvme && nvme) { DARABONBA_PTR_SET_RVALUE(nvme_, nvme) };


      // ossStorage Field Functions 
      bool hasOssStorage() const { return this->ossStorage_ != nullptr;};
      void deleteOssStorage() { this->ossStorage_ = nullptr;};
      inline const Data::OssStorage & getOssStorage() const { DARABONBA_PTR_GET_CONST(ossStorage_, Data::OssStorage) };
      inline Data::OssStorage getOssStorage() { DARABONBA_PTR_GET(ossStorage_, Data::OssStorage) };
      inline Data& setOssStorage(const Data::OssStorage & ossStorage) { DARABONBA_PTR_SET_VALUE(ossStorage_, ossStorage) };
      inline Data& setOssStorage(Data::OssStorage && ossStorage) { DARABONBA_PTR_SET_RVALUE(ossStorage_, ossStorage) };


      // pangu Field Functions 
      bool hasPangu() const { return this->pangu_ != nullptr;};
      void deletePangu() { this->pangu_ = nullptr;};
      inline const Data::Pangu & getPangu() const { DARABONBA_PTR_GET_CONST(pangu_, Data::Pangu) };
      inline Data::Pangu getPangu() { DARABONBA_PTR_GET(pangu_, Data::Pangu) };
      inline Data& setPangu(const Data::Pangu & pangu) { DARABONBA_PTR_SET_VALUE(pangu_, pangu) };
      inline Data& setPangu(Data::Pangu && pangu) { DARABONBA_PTR_SET_RVALUE(pangu_, pangu) };


      // pcfarmNum Field Functions 
      bool hasPcfarmNum() const { return this->pcfarmNum_ != nullptr;};
      void deletePcfarmNum() { this->pcfarmNum_ = nullptr;};
      inline const Data::PcfarmNum & getPcfarmNum() const { DARABONBA_PTR_GET_CONST(pcfarmNum_, Data::PcfarmNum) };
      inline Data::PcfarmNum getPcfarmNum() { DARABONBA_PTR_GET(pcfarmNum_, Data::PcfarmNum) };
      inline Data& setPcfarmNum(const Data::PcfarmNum & pcfarmNum) { DARABONBA_PTR_SET_VALUE(pcfarmNum_, pcfarmNum) };
      inline Data& setPcfarmNum(Data::PcfarmNum && pcfarmNum) { DARABONBA_PTR_SET_RVALUE(pcfarmNum_, pcfarmNum) };


      // poc Field Functions 
      bool hasPoc() const { return this->poc_ != nullptr;};
      void deletePoc() { this->poc_ = nullptr;};
      inline bool getPoc() const { DARABONBA_PTR_GET_DEFAULT(poc_, false) };
      inline Data& setPoc(bool poc) { DARABONBA_PTR_SET_VALUE(poc_, poc) };


      // provinceCode Field Functions 
      bool hasProvinceCode() const { return this->provinceCode_ != nullptr;};
      void deleteProvinceCode() { this->provinceCode_ = nullptr;};
      inline string getProvinceCode() const { DARABONBA_PTR_GET_DEFAULT(provinceCode_, "") };
      inline Data& setProvinceCode(string provinceCode) { DARABONBA_PTR_SET_VALUE(provinceCode_, provinceCode) };


      // provinceName Field Functions 
      bool hasProvinceName() const { return this->provinceName_ != nullptr;};
      void deleteProvinceName() { this->provinceName_ = nullptr;};
      inline string getProvinceName() const { DARABONBA_PTR_GET_DEFAULT(provinceName_, "") };
      inline Data& setProvinceName(string provinceName) { DARABONBA_PTR_SET_VALUE(provinceName_, provinceName) };


      // reserveDisable Field Functions 
      bool hasReserveDisable() const { return this->reserveDisable_ != nullptr;};
      void deleteReserveDisable() { this->reserveDisable_ = nullptr;};
      inline bool getReserveDisable() const { DARABONBA_PTR_GET_DEFAULT(reserveDisable_, false) };
      inline Data& setReserveDisable(bool reserveDisable) { DARABONBA_PTR_SET_VALUE(reserveDisable_, reserveDisable) };


      // ssd Field Functions 
      bool hasSsd() const { return this->ssd_ != nullptr;};
      void deleteSsd() { this->ssd_ = nullptr;};
      inline const Data::Ssd & getSsd() const { DARABONBA_PTR_GET_CONST(ssd_, Data::Ssd) };
      inline Data::Ssd getSsd() { DARABONBA_PTR_GET(ssd_, Data::Ssd) };
      inline Data& setSsd(const Data::Ssd & ssd) { DARABONBA_PTR_SET_VALUE(ssd_, ssd) };
      inline Data& setSsd(Data::Ssd && ssd) { DARABONBA_PTR_SET_RVALUE(ssd_, ssd) };


      // statusDisable Field Functions 
      bool hasStatusDisable() const { return this->statusDisable_ != nullptr;};
      void deleteStatusDisable() { this->statusDisable_ = nullptr;};
      inline bool getStatusDisable() const { DARABONBA_PTR_GET_DEFAULT(statusDisable_, false) };
      inline Data& setStatusDisable(bool statusDisable) { DARABONBA_PTR_SET_VALUE(statusDisable_, statusDisable) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline Data& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      // uuid Field Functions 
      bool hasUuid() const { return this->uuid_ != nullptr;};
      void deleteUuid() { this->uuid_ = nullptr;};
      inline string getUuid() const { DARABONBA_PTR_GET_DEFAULT(uuid_, "") };
      inline Data& setUuid(string uuid) { DARABONBA_PTR_SET_VALUE(uuid_, uuid) };


      // virtual Field Functions 
      bool hasVirtual() const { return this->virtual_ != nullptr;};
      void deleteVirtual() { this->virtual_ = nullptr;};
      inline string getVirtual() const { DARABONBA_PTR_GET_DEFAULT(virtual_, "") };
      inline Data& setVirtual(string _virtual) { DARABONBA_PTR_SET_VALUE(virtual_, _virtual) };


    protected:
      shared_ptr<string> areaCode_ {};
      shared_ptr<string> areaName_ {};
      shared_ptr<Data::ArmCard> armCard_ {};
      shared_ptr<vector<string>> attributes_ {};
      shared_ptr<Data::Bandwidth> bandwidth_ {};
      shared_ptr<Data::BlockStorage> blockStorage_ {};
      shared_ptr<string> countryCode_ {};
      shared_ptr<string> countryName_ {};
      shared_ptr<Data::Cpu> cpu_ {};
      shared_ptr<Data::Gpu> gpu_ {};
      shared_ptr<Data::Hdd> hdd_ {};
      shared_ptr<string> houseId_ {};
      shared_ptr<vector<Data::Ipv4s>> ipv4s_ {};
      shared_ptr<vector<Data::Ipv6s>> ipv6s_ {};
      shared_ptr<vector<string>> ispTypes_ {};
      shared_ptr<Data::Memory> memory_ {};
      shared_ptr<string> name_ {};
      shared_ptr<Data::Nvme> nvme_ {};
      shared_ptr<Data::OssStorage> ossStorage_ {};
      shared_ptr<Data::Pangu> pangu_ {};
      shared_ptr<Data::PcfarmNum> pcfarmNum_ {};
      shared_ptr<bool> poc_ {};
      shared_ptr<string> provinceCode_ {};
      shared_ptr<string> provinceName_ {};
      shared_ptr<bool> reserveDisable_ {};
      shared_ptr<Data::Ssd> ssd_ {};
      shared_ptr<bool> statusDisable_ {};
      shared_ptr<string> type_ {};
      shared_ptr<string> uuid_ {};
      shared_ptr<string> virtual_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->desc_ == nullptr && this->msg_ == nullptr && this->pager_ == nullptr && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<DescribeRegionResourceResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<DescribeRegionResourceResponseBody::Data>) };
    inline vector<DescribeRegionResourceResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<DescribeRegionResourceResponseBody::Data>) };
    inline DescribeRegionResourceResponseBody& setData(const vector<DescribeRegionResourceResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DescribeRegionResourceResponseBody& setData(vector<DescribeRegionResourceResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // desc Field Functions 
    bool hasDesc() const { return this->desc_ != nullptr;};
    void deleteDesc() { this->desc_ = nullptr;};
    inline string getDesc() const { DARABONBA_PTR_GET_DEFAULT(desc_, "") };
    inline DescribeRegionResourceResponseBody& setDesc(string desc) { DARABONBA_PTR_SET_VALUE(desc_, desc) };


    // msg Field Functions 
    bool hasMsg() const { return this->msg_ != nullptr;};
    void deleteMsg() { this->msg_ = nullptr;};
    inline string getMsg() const { DARABONBA_PTR_GET_DEFAULT(msg_, "") };
    inline DescribeRegionResourceResponseBody& setMsg(string msg) { DARABONBA_PTR_SET_VALUE(msg_, msg) };


    // pager Field Functions 
    bool hasPager() const { return this->pager_ != nullptr;};
    void deletePager() { this->pager_ = nullptr;};
    inline const DescribeRegionResourceResponseBody::Pager & getPager() const { DARABONBA_PTR_GET_CONST(pager_, DescribeRegionResourceResponseBody::Pager) };
    inline DescribeRegionResourceResponseBody::Pager getPager() { DARABONBA_PTR_GET(pager_, DescribeRegionResourceResponseBody::Pager) };
    inline DescribeRegionResourceResponseBody& setPager(const DescribeRegionResourceResponseBody::Pager & pager) { DARABONBA_PTR_SET_VALUE(pager_, pager) };
    inline DescribeRegionResourceResponseBody& setPager(DescribeRegionResourceResponseBody::Pager && pager) { DARABONBA_PTR_SET_RVALUE(pager_, pager) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeRegionResourceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<vector<DescribeRegionResourceResponseBody::Data>> data_ {};
    shared_ptr<string> desc_ {};
    shared_ptr<string> msg_ {};
    shared_ptr<DescribeRegionResourceResponseBody::Pager> pager_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
