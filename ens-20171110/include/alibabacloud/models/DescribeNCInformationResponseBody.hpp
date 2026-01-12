// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBENCINFORMATIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBENCINFORMATIONRESPONSEBODY_HPP_
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
  class DescribeNCInformationResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeNCInformationResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Desc, desc_);
      DARABONBA_PTR_TO_JSON(Msg, msg_);
      DARABONBA_PTR_TO_JSON(Pager, pager_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeNCInformationResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Desc, desc_);
      DARABONBA_PTR_FROM_JSON(Msg, msg_);
      DARABONBA_PTR_FROM_JSON(Pager, pager_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeNCInformationResponseBody() = default ;
    DescribeNCInformationResponseBody(const DescribeNCInformationResponseBody &) = default ;
    DescribeNCInformationResponseBody(DescribeNCInformationResponseBody &&) = default ;
    DescribeNCInformationResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeNCInformationResponseBody() = default ;
    DescribeNCInformationResponseBody& operator=(const DescribeNCInformationResponseBody &) = default ;
    DescribeNCInformationResponseBody& operator=(DescribeNCInformationResponseBody &&) = default ;
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
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
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

      class Info : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Info& obj) { 
          DARABONBA_PTR_TO_JSON(Ip, ip_);
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(Tag, tag_);
          DARABONBA_PTR_TO_JSON(Uuid, uuid_);
        };
        friend void from_json(const Darabonba::Json& j, Info& obj) { 
          DARABONBA_PTR_FROM_JSON(Ip, ip_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(Tag, tag_);
          DARABONBA_PTR_FROM_JSON(Uuid, uuid_);
        };
        Info() = default ;
        Info(const Info &) = default ;
        Info(Info &&) = default ;
        Info(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Info() = default ;
        Info& operator=(const Info &) = default ;
        Info& operator=(Info &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->ip_ == nullptr
        && this->name_ == nullptr && this->tag_ == nullptr && this->uuid_ == nullptr; };
        // ip Field Functions 
        bool hasIp() const { return this->ip_ != nullptr;};
        void deleteIp() { this->ip_ = nullptr;};
        inline string getIp() const { DARABONBA_PTR_GET_DEFAULT(ip_, "") };
        inline Info& setIp(string ip) { DARABONBA_PTR_SET_VALUE(ip_, ip) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline Info& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // tag Field Functions 
        bool hasTag() const { return this->tag_ != nullptr;};
        void deleteTag() { this->tag_ = nullptr;};
        inline const vector<string> & getTag() const { DARABONBA_PTR_GET_CONST(tag_, vector<string>) };
        inline vector<string> getTag() { DARABONBA_PTR_GET(tag_, vector<string>) };
        inline Info& setTag(const vector<string> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
        inline Info& setTag(vector<string> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


        // uuid Field Functions 
        bool hasUuid() const { return this->uuid_ != nullptr;};
        void deleteUuid() { this->uuid_ = nullptr;};
        inline string getUuid() const { DARABONBA_PTR_GET_DEFAULT(uuid_, "") };
        inline Info& setUuid(string uuid) { DARABONBA_PTR_SET_VALUE(uuid_, uuid) };


      protected:
        shared_ptr<string> ip_ {};
        shared_ptr<string> name_ {};
        shared_ptr<vector<string>> tag_ {};
        shared_ptr<string> uuid_ {};
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

      virtual bool empty() const override { return this->cpu_ == nullptr
        && this->gpu_ == nullptr && this->hdd_ == nullptr && this->info_ == nullptr && this->memory_ == nullptr && this->nvme_ == nullptr
        && this->online_ == nullptr && this->region_ == nullptr && this->ssd_ == nullptr && this->virtual_ == nullptr; };
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


      // info Field Functions 
      bool hasInfo() const { return this->info_ != nullptr;};
      void deleteInfo() { this->info_ = nullptr;};
      inline const Data::Info & getInfo() const { DARABONBA_PTR_GET_CONST(info_, Data::Info) };
      inline Data::Info getInfo() { DARABONBA_PTR_GET(info_, Data::Info) };
      inline Data& setInfo(const Data::Info & info) { DARABONBA_PTR_SET_VALUE(info_, info) };
      inline Data& setInfo(Data::Info && info) { DARABONBA_PTR_SET_RVALUE(info_, info) };


      // memory Field Functions 
      bool hasMemory() const { return this->memory_ != nullptr;};
      void deleteMemory() { this->memory_ = nullptr;};
      inline const Data::Memory & getMemory() const { DARABONBA_PTR_GET_CONST(memory_, Data::Memory) };
      inline Data::Memory getMemory() { DARABONBA_PTR_GET(memory_, Data::Memory) };
      inline Data& setMemory(const Data::Memory & memory) { DARABONBA_PTR_SET_VALUE(memory_, memory) };
      inline Data& setMemory(Data::Memory && memory) { DARABONBA_PTR_SET_RVALUE(memory_, memory) };


      // nvme Field Functions 
      bool hasNvme() const { return this->nvme_ != nullptr;};
      void deleteNvme() { this->nvme_ = nullptr;};
      inline const Data::Nvme & getNvme() const { DARABONBA_PTR_GET_CONST(nvme_, Data::Nvme) };
      inline Data::Nvme getNvme() { DARABONBA_PTR_GET(nvme_, Data::Nvme) };
      inline Data& setNvme(const Data::Nvme & nvme) { DARABONBA_PTR_SET_VALUE(nvme_, nvme) };
      inline Data& setNvme(Data::Nvme && nvme) { DARABONBA_PTR_SET_RVALUE(nvme_, nvme) };


      // online Field Functions 
      bool hasOnline() const { return this->online_ != nullptr;};
      void deleteOnline() { this->online_ = nullptr;};
      inline bool getOnline() const { DARABONBA_PTR_GET_DEFAULT(online_, false) };
      inline Data& setOnline(bool online) { DARABONBA_PTR_SET_VALUE(online_, online) };


      // region Field Functions 
      bool hasRegion() const { return this->region_ != nullptr;};
      void deleteRegion() { this->region_ = nullptr;};
      inline string getRegion() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
      inline Data& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


      // ssd Field Functions 
      bool hasSsd() const { return this->ssd_ != nullptr;};
      void deleteSsd() { this->ssd_ = nullptr;};
      inline const Data::Ssd & getSsd() const { DARABONBA_PTR_GET_CONST(ssd_, Data::Ssd) };
      inline Data::Ssd getSsd() { DARABONBA_PTR_GET(ssd_, Data::Ssd) };
      inline Data& setSsd(const Data::Ssd & ssd) { DARABONBA_PTR_SET_VALUE(ssd_, ssd) };
      inline Data& setSsd(Data::Ssd && ssd) { DARABONBA_PTR_SET_RVALUE(ssd_, ssd) };


      // virtual Field Functions 
      bool hasVirtual() const { return this->virtual_ != nullptr;};
      void deleteVirtual() { this->virtual_ = nullptr;};
      inline string getVirtual() const { DARABONBA_PTR_GET_DEFAULT(virtual_, "") };
      inline Data& setVirtual(string _virtual) { DARABONBA_PTR_SET_VALUE(virtual_, _virtual) };


    protected:
      shared_ptr<Data::Cpu> cpu_ {};
      shared_ptr<Data::Gpu> gpu_ {};
      shared_ptr<Data::Hdd> hdd_ {};
      shared_ptr<Data::Info> info_ {};
      shared_ptr<Data::Memory> memory_ {};
      shared_ptr<Data::Nvme> nvme_ {};
      shared_ptr<bool> online_ {};
      shared_ptr<string> region_ {};
      shared_ptr<Data::Ssd> ssd_ {};
      shared_ptr<string> virtual_ {};
    };

    virtual bool empty() const override { return this->currentPage_ == nullptr
        && this->data_ == nullptr && this->desc_ == nullptr && this->msg_ == nullptr && this->pager_ == nullptr && this->requestId_ == nullptr
        && this->totalCount_ == nullptr; };
    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline DescribeNCInformationResponseBody& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<DescribeNCInformationResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<DescribeNCInformationResponseBody::Data>) };
    inline vector<DescribeNCInformationResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<DescribeNCInformationResponseBody::Data>) };
    inline DescribeNCInformationResponseBody& setData(const vector<DescribeNCInformationResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DescribeNCInformationResponseBody& setData(vector<DescribeNCInformationResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // desc Field Functions 
    bool hasDesc() const { return this->desc_ != nullptr;};
    void deleteDesc() { this->desc_ = nullptr;};
    inline string getDesc() const { DARABONBA_PTR_GET_DEFAULT(desc_, "") };
    inline DescribeNCInformationResponseBody& setDesc(string desc) { DARABONBA_PTR_SET_VALUE(desc_, desc) };


    // msg Field Functions 
    bool hasMsg() const { return this->msg_ != nullptr;};
    void deleteMsg() { this->msg_ = nullptr;};
    inline string getMsg() const { DARABONBA_PTR_GET_DEFAULT(msg_, "") };
    inline DescribeNCInformationResponseBody& setMsg(string msg) { DARABONBA_PTR_SET_VALUE(msg_, msg) };


    // pager Field Functions 
    bool hasPager() const { return this->pager_ != nullptr;};
    void deletePager() { this->pager_ = nullptr;};
    inline const DescribeNCInformationResponseBody::Pager & getPager() const { DARABONBA_PTR_GET_CONST(pager_, DescribeNCInformationResponseBody::Pager) };
    inline DescribeNCInformationResponseBody::Pager getPager() { DARABONBA_PTR_GET(pager_, DescribeNCInformationResponseBody::Pager) };
    inline DescribeNCInformationResponseBody& setPager(const DescribeNCInformationResponseBody::Pager & pager) { DARABONBA_PTR_SET_VALUE(pager_, pager) };
    inline DescribeNCInformationResponseBody& setPager(DescribeNCInformationResponseBody::Pager && pager) { DARABONBA_PTR_SET_RVALUE(pager_, pager) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeNCInformationResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeNCInformationResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    shared_ptr<int32_t> currentPage_ {};
    shared_ptr<vector<DescribeNCInformationResponseBody::Data>> data_ {};
    shared_ptr<string> desc_ {};
    shared_ptr<string> msg_ {};
    shared_ptr<DescribeNCInformationResponseBody::Pager> pager_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
