// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBENCINFORMATIONRESPONSEBODYDATANVME_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBENCINFORMATIONRESPONSEBODYDATANVME_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class DescribeNCInformationResponseBodyDataNvme : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeNCInformationResponseBodyDataNvme& obj) { 
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
    friend void from_json(const Darabonba::Json& j, DescribeNCInformationResponseBodyDataNvme& obj) { 
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
    DescribeNCInformationResponseBodyDataNvme() = default ;
    DescribeNCInformationResponseBodyDataNvme(const DescribeNCInformationResponseBodyDataNvme &) = default ;
    DescribeNCInformationResponseBodyDataNvme(DescribeNCInformationResponseBodyDataNvme &&) = default ;
    DescribeNCInformationResponseBodyDataNvme(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeNCInformationResponseBodyDataNvme() = default ;
    DescribeNCInformationResponseBodyDataNvme& operator=(const DescribeNCInformationResponseBodyDataNvme &) = default ;
    DescribeNCInformationResponseBodyDataNvme& operator=(DescribeNCInformationResponseBodyDataNvme &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->display_ == nullptr
        && return this->oversellRatio_ == nullptr && return this->remain_ == nullptr && return this->reserveDisable_ == nullptr && return this->reserveDisableTotal_ == nullptr && return this->reserved_ == nullptr
        && return this->statusDisable_ == nullptr && return this->statusDisableTotal_ == nullptr && return this->total_ == nullptr && return this->type_ == nullptr && return this->used_ == nullptr
        && return this->usedRatio_ == nullptr; };
    // display Field Functions 
    bool hasDisplay() const { return this->display_ != nullptr;};
    void deleteDisplay() { this->display_ = nullptr;};
    inline bool display() const { DARABONBA_PTR_GET_DEFAULT(display_, false) };
    inline DescribeNCInformationResponseBodyDataNvme& setDisplay(bool display) { DARABONBA_PTR_SET_VALUE(display_, display) };


    // oversellRatio Field Functions 
    bool hasOversellRatio() const { return this->oversellRatio_ != nullptr;};
    void deleteOversellRatio() { this->oversellRatio_ = nullptr;};
    inline int64_t oversellRatio() const { DARABONBA_PTR_GET_DEFAULT(oversellRatio_, 0L) };
    inline DescribeNCInformationResponseBodyDataNvme& setOversellRatio(int64_t oversellRatio) { DARABONBA_PTR_SET_VALUE(oversellRatio_, oversellRatio) };


    // remain Field Functions 
    bool hasRemain() const { return this->remain_ != nullptr;};
    void deleteRemain() { this->remain_ = nullptr;};
    inline int64_t remain() const { DARABONBA_PTR_GET_DEFAULT(remain_, 0L) };
    inline DescribeNCInformationResponseBodyDataNvme& setRemain(int64_t remain) { DARABONBA_PTR_SET_VALUE(remain_, remain) };


    // reserveDisable Field Functions 
    bool hasReserveDisable() const { return this->reserveDisable_ != nullptr;};
    void deleteReserveDisable() { this->reserveDisable_ = nullptr;};
    inline bool reserveDisable() const { DARABONBA_PTR_GET_DEFAULT(reserveDisable_, false) };
    inline DescribeNCInformationResponseBodyDataNvme& setReserveDisable(bool reserveDisable) { DARABONBA_PTR_SET_VALUE(reserveDisable_, reserveDisable) };


    // reserveDisableTotal Field Functions 
    bool hasReserveDisableTotal() const { return this->reserveDisableTotal_ != nullptr;};
    void deleteReserveDisableTotal() { this->reserveDisableTotal_ = nullptr;};
    inline int64_t reserveDisableTotal() const { DARABONBA_PTR_GET_DEFAULT(reserveDisableTotal_, 0L) };
    inline DescribeNCInformationResponseBodyDataNvme& setReserveDisableTotal(int64_t reserveDisableTotal) { DARABONBA_PTR_SET_VALUE(reserveDisableTotal_, reserveDisableTotal) };


    // reserved Field Functions 
    bool hasReserved() const { return this->reserved_ != nullptr;};
    void deleteReserved() { this->reserved_ = nullptr;};
    inline int64_t reserved() const { DARABONBA_PTR_GET_DEFAULT(reserved_, 0L) };
    inline DescribeNCInformationResponseBodyDataNvme& setReserved(int64_t reserved) { DARABONBA_PTR_SET_VALUE(reserved_, reserved) };


    // statusDisable Field Functions 
    bool hasStatusDisable() const { return this->statusDisable_ != nullptr;};
    void deleteStatusDisable() { this->statusDisable_ = nullptr;};
    inline bool statusDisable() const { DARABONBA_PTR_GET_DEFAULT(statusDisable_, false) };
    inline DescribeNCInformationResponseBodyDataNvme& setStatusDisable(bool statusDisable) { DARABONBA_PTR_SET_VALUE(statusDisable_, statusDisable) };


    // statusDisableTotal Field Functions 
    bool hasStatusDisableTotal() const { return this->statusDisableTotal_ != nullptr;};
    void deleteStatusDisableTotal() { this->statusDisableTotal_ = nullptr;};
    inline int64_t statusDisableTotal() const { DARABONBA_PTR_GET_DEFAULT(statusDisableTotal_, 0L) };
    inline DescribeNCInformationResponseBodyDataNvme& setStatusDisableTotal(int64_t statusDisableTotal) { DARABONBA_PTR_SET_VALUE(statusDisableTotal_, statusDisableTotal) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int64_t total() const { DARABONBA_PTR_GET_DEFAULT(total_, 0L) };
    inline DescribeNCInformationResponseBodyDataNvme& setTotal(int64_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline DescribeNCInformationResponseBodyDataNvme& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // used Field Functions 
    bool hasUsed() const { return this->used_ != nullptr;};
    void deleteUsed() { this->used_ = nullptr;};
    inline int64_t used() const { DARABONBA_PTR_GET_DEFAULT(used_, 0L) };
    inline DescribeNCInformationResponseBodyDataNvme& setUsed(int64_t used) { DARABONBA_PTR_SET_VALUE(used_, used) };


    // usedRatio Field Functions 
    bool hasUsedRatio() const { return this->usedRatio_ != nullptr;};
    void deleteUsedRatio() { this->usedRatio_ = nullptr;};
    inline int64_t usedRatio() const { DARABONBA_PTR_GET_DEFAULT(usedRatio_, 0L) };
    inline DescribeNCInformationResponseBodyDataNvme& setUsedRatio(int64_t usedRatio) { DARABONBA_PTR_SET_VALUE(usedRatio_, usedRatio) };


  protected:
    std::shared_ptr<bool> display_ = nullptr;
    std::shared_ptr<int64_t> oversellRatio_ = nullptr;
    std::shared_ptr<int64_t> remain_ = nullptr;
    std::shared_ptr<bool> reserveDisable_ = nullptr;
    std::shared_ptr<int64_t> reserveDisableTotal_ = nullptr;
    std::shared_ptr<int64_t> reserved_ = nullptr;
    std::shared_ptr<bool> statusDisable_ = nullptr;
    std::shared_ptr<int64_t> statusDisableTotal_ = nullptr;
    std::shared_ptr<int64_t> total_ = nullptr;
    std::shared_ptr<string> type_ = nullptr;
    std::shared_ptr<int64_t> used_ = nullptr;
    std::shared_ptr<int64_t> usedRatio_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
