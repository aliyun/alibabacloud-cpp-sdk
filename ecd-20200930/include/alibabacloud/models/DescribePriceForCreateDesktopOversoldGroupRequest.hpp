// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPRICEFORCREATEDESKTOPOVERSOLDGROUPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPRICEFORCREATEDESKTOPOVERSOLDGROUPREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class DescribePriceForCreateDesktopOversoldGroupRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePriceForCreateDesktopOversoldGroupRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ConcurrenceCount, concurrenceCount_);
      DARABONBA_PTR_TO_JSON(DataDiskSize, dataDiskSize_);
      DARABONBA_PTR_TO_JSON(DesktopType, desktopType_);
      DARABONBA_PTR_TO_JSON(OversoldUserCount, oversoldUserCount_);
      DARABONBA_PTR_TO_JSON(Period, period_);
      DARABONBA_PTR_TO_JSON(PeriodUnit, periodUnit_);
      DARABONBA_PTR_TO_JSON(SystemDiskSize, systemDiskSize_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePriceForCreateDesktopOversoldGroupRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ConcurrenceCount, concurrenceCount_);
      DARABONBA_PTR_FROM_JSON(DataDiskSize, dataDiskSize_);
      DARABONBA_PTR_FROM_JSON(DesktopType, desktopType_);
      DARABONBA_PTR_FROM_JSON(OversoldUserCount, oversoldUserCount_);
      DARABONBA_PTR_FROM_JSON(Period, period_);
      DARABONBA_PTR_FROM_JSON(PeriodUnit, periodUnit_);
      DARABONBA_PTR_FROM_JSON(SystemDiskSize, systemDiskSize_);
    };
    DescribePriceForCreateDesktopOversoldGroupRequest() = default ;
    DescribePriceForCreateDesktopOversoldGroupRequest(const DescribePriceForCreateDesktopOversoldGroupRequest &) = default ;
    DescribePriceForCreateDesktopOversoldGroupRequest(DescribePriceForCreateDesktopOversoldGroupRequest &&) = default ;
    DescribePriceForCreateDesktopOversoldGroupRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePriceForCreateDesktopOversoldGroupRequest() = default ;
    DescribePriceForCreateDesktopOversoldGroupRequest& operator=(const DescribePriceForCreateDesktopOversoldGroupRequest &) = default ;
    DescribePriceForCreateDesktopOversoldGroupRequest& operator=(DescribePriceForCreateDesktopOversoldGroupRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->concurrenceCount_ == nullptr
        && return this->dataDiskSize_ == nullptr && return this->desktopType_ == nullptr && return this->oversoldUserCount_ == nullptr && return this->period_ == nullptr && return this->periodUnit_ == nullptr
        && return this->systemDiskSize_ == nullptr; };
    // concurrenceCount Field Functions 
    bool hasConcurrenceCount() const { return this->concurrenceCount_ != nullptr;};
    void deleteConcurrenceCount() { this->concurrenceCount_ = nullptr;};
    inline int32_t concurrenceCount() const { DARABONBA_PTR_GET_DEFAULT(concurrenceCount_, 0) };
    inline DescribePriceForCreateDesktopOversoldGroupRequest& setConcurrenceCount(int32_t concurrenceCount) { DARABONBA_PTR_SET_VALUE(concurrenceCount_, concurrenceCount) };


    // dataDiskSize Field Functions 
    bool hasDataDiskSize() const { return this->dataDiskSize_ != nullptr;};
    void deleteDataDiskSize() { this->dataDiskSize_ = nullptr;};
    inline int32_t dataDiskSize() const { DARABONBA_PTR_GET_DEFAULT(dataDiskSize_, 0) };
    inline DescribePriceForCreateDesktopOversoldGroupRequest& setDataDiskSize(int32_t dataDiskSize) { DARABONBA_PTR_SET_VALUE(dataDiskSize_, dataDiskSize) };


    // desktopType Field Functions 
    bool hasDesktopType() const { return this->desktopType_ != nullptr;};
    void deleteDesktopType() { this->desktopType_ = nullptr;};
    inline string desktopType() const { DARABONBA_PTR_GET_DEFAULT(desktopType_, "") };
    inline DescribePriceForCreateDesktopOversoldGroupRequest& setDesktopType(string desktopType) { DARABONBA_PTR_SET_VALUE(desktopType_, desktopType) };


    // oversoldUserCount Field Functions 
    bool hasOversoldUserCount() const { return this->oversoldUserCount_ != nullptr;};
    void deleteOversoldUserCount() { this->oversoldUserCount_ = nullptr;};
    inline int32_t oversoldUserCount() const { DARABONBA_PTR_GET_DEFAULT(oversoldUserCount_, 0) };
    inline DescribePriceForCreateDesktopOversoldGroupRequest& setOversoldUserCount(int32_t oversoldUserCount) { DARABONBA_PTR_SET_VALUE(oversoldUserCount_, oversoldUserCount) };


    // period Field Functions 
    bool hasPeriod() const { return this->period_ != nullptr;};
    void deletePeriod() { this->period_ = nullptr;};
    inline int32_t period() const { DARABONBA_PTR_GET_DEFAULT(period_, 0) };
    inline DescribePriceForCreateDesktopOversoldGroupRequest& setPeriod(int32_t period) { DARABONBA_PTR_SET_VALUE(period_, period) };


    // periodUnit Field Functions 
    bool hasPeriodUnit() const { return this->periodUnit_ != nullptr;};
    void deletePeriodUnit() { this->periodUnit_ = nullptr;};
    inline string periodUnit() const { DARABONBA_PTR_GET_DEFAULT(periodUnit_, "") };
    inline DescribePriceForCreateDesktopOversoldGroupRequest& setPeriodUnit(string periodUnit) { DARABONBA_PTR_SET_VALUE(periodUnit_, periodUnit) };


    // systemDiskSize Field Functions 
    bool hasSystemDiskSize() const { return this->systemDiskSize_ != nullptr;};
    void deleteSystemDiskSize() { this->systemDiskSize_ = nullptr;};
    inline int32_t systemDiskSize() const { DARABONBA_PTR_GET_DEFAULT(systemDiskSize_, 0) };
    inline DescribePriceForCreateDesktopOversoldGroupRequest& setSystemDiskSize(int32_t systemDiskSize) { DARABONBA_PTR_SET_VALUE(systemDiskSize_, systemDiskSize) };


  protected:
    std::shared_ptr<int32_t> concurrenceCount_ = nullptr;
    std::shared_ptr<int32_t> dataDiskSize_ = nullptr;
    std::shared_ptr<string> desktopType_ = nullptr;
    std::shared_ptr<int32_t> oversoldUserCount_ = nullptr;
    std::shared_ptr<int32_t> period_ = nullptr;
    std::shared_ptr<string> periodUnit_ = nullptr;
    std::shared_ptr<int32_t> systemDiskSize_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
