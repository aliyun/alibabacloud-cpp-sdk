// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERCAVAILABLERESOURCERESPONSEBODYAVAILABLEZONESAVAILABLERESOURCESSUPPORTEDRESOURCES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERCAVAILABLERESOURCERESPONSEBODYAVAILABLEZONESAVAILABLERESOURCESSUPPORTEDRESOURCES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class DescribeRCAvailableResourceResponseBodyAvailableZonesAvailableResourcesSupportedResources : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRCAvailableResourceResponseBodyAvailableZonesAvailableResourcesSupportedResources& obj) { 
      DARABONBA_PTR_TO_JSON(Max, max_);
      DARABONBA_PTR_TO_JSON(Min, min_);
      DARABONBA_PTR_TO_JSON(QuotaStatus, quotaStatus_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(StatusCategory, statusCategory_);
      DARABONBA_PTR_TO_JSON(Unit, unit_);
      DARABONBA_PTR_TO_JSON(Value, value_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRCAvailableResourceResponseBodyAvailableZonesAvailableResourcesSupportedResources& obj) { 
      DARABONBA_PTR_FROM_JSON(Max, max_);
      DARABONBA_PTR_FROM_JSON(Min, min_);
      DARABONBA_PTR_FROM_JSON(QuotaStatus, quotaStatus_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(StatusCategory, statusCategory_);
      DARABONBA_PTR_FROM_JSON(Unit, unit_);
      DARABONBA_PTR_FROM_JSON(Value, value_);
    };
    DescribeRCAvailableResourceResponseBodyAvailableZonesAvailableResourcesSupportedResources() = default ;
    DescribeRCAvailableResourceResponseBodyAvailableZonesAvailableResourcesSupportedResources(const DescribeRCAvailableResourceResponseBodyAvailableZonesAvailableResourcesSupportedResources &) = default ;
    DescribeRCAvailableResourceResponseBodyAvailableZonesAvailableResourcesSupportedResources(DescribeRCAvailableResourceResponseBodyAvailableZonesAvailableResourcesSupportedResources &&) = default ;
    DescribeRCAvailableResourceResponseBodyAvailableZonesAvailableResourcesSupportedResources(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRCAvailableResourceResponseBodyAvailableZonesAvailableResourcesSupportedResources() = default ;
    DescribeRCAvailableResourceResponseBodyAvailableZonesAvailableResourcesSupportedResources& operator=(const DescribeRCAvailableResourceResponseBodyAvailableZonesAvailableResourcesSupportedResources &) = default ;
    DescribeRCAvailableResourceResponseBodyAvailableZonesAvailableResourcesSupportedResources& operator=(DescribeRCAvailableResourceResponseBodyAvailableZonesAvailableResourcesSupportedResources &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->max_ == nullptr
        && return this->min_ == nullptr && return this->quotaStatus_ == nullptr && return this->status_ == nullptr && return this->statusCategory_ == nullptr && return this->unit_ == nullptr
        && return this->value_ == nullptr; };
    // max Field Functions 
    bool hasMax() const { return this->max_ != nullptr;};
    void deleteMax() { this->max_ = nullptr;};
    inline int32_t max() const { DARABONBA_PTR_GET_DEFAULT(max_, 0) };
    inline DescribeRCAvailableResourceResponseBodyAvailableZonesAvailableResourcesSupportedResources& setMax(int32_t max) { DARABONBA_PTR_SET_VALUE(max_, max) };


    // min Field Functions 
    bool hasMin() const { return this->min_ != nullptr;};
    void deleteMin() { this->min_ = nullptr;};
    inline int32_t min() const { DARABONBA_PTR_GET_DEFAULT(min_, 0) };
    inline DescribeRCAvailableResourceResponseBodyAvailableZonesAvailableResourcesSupportedResources& setMin(int32_t min) { DARABONBA_PTR_SET_VALUE(min_, min) };


    // quotaStatus Field Functions 
    bool hasQuotaStatus() const { return this->quotaStatus_ != nullptr;};
    void deleteQuotaStatus() { this->quotaStatus_ = nullptr;};
    inline string quotaStatus() const { DARABONBA_PTR_GET_DEFAULT(quotaStatus_, "") };
    inline DescribeRCAvailableResourceResponseBodyAvailableZonesAvailableResourcesSupportedResources& setQuotaStatus(string quotaStatus) { DARABONBA_PTR_SET_VALUE(quotaStatus_, quotaStatus) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeRCAvailableResourceResponseBodyAvailableZonesAvailableResourcesSupportedResources& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // statusCategory Field Functions 
    bool hasStatusCategory() const { return this->statusCategory_ != nullptr;};
    void deleteStatusCategory() { this->statusCategory_ = nullptr;};
    inline string statusCategory() const { DARABONBA_PTR_GET_DEFAULT(statusCategory_, "") };
    inline DescribeRCAvailableResourceResponseBodyAvailableZonesAvailableResourcesSupportedResources& setStatusCategory(string statusCategory) { DARABONBA_PTR_SET_VALUE(statusCategory_, statusCategory) };


    // unit Field Functions 
    bool hasUnit() const { return this->unit_ != nullptr;};
    void deleteUnit() { this->unit_ = nullptr;};
    inline string unit() const { DARABONBA_PTR_GET_DEFAULT(unit_, "") };
    inline DescribeRCAvailableResourceResponseBodyAvailableZonesAvailableResourcesSupportedResources& setUnit(string unit) { DARABONBA_PTR_SET_VALUE(unit_, unit) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string value() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline DescribeRCAvailableResourceResponseBodyAvailableZonesAvailableResourcesSupportedResources& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    std::shared_ptr<int32_t> max_ = nullptr;
    std::shared_ptr<int32_t> min_ = nullptr;
    std::shared_ptr<string> quotaStatus_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
    std::shared_ptr<string> statusCategory_ = nullptr;
    std::shared_ptr<string> unit_ = nullptr;
    std::shared_ptr<string> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
