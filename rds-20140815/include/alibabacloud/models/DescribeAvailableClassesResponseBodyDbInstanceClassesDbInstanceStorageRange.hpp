// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAVAILABLECLASSESRESPONSEBODYDBINSTANCECLASSESDBINSTANCESTORAGERANGE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAVAILABLECLASSESRESPONSEBODYDBINSTANCECLASSESDBINSTANCESTORAGERANGE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class DescribeAvailableClassesResponseBodyDBInstanceClassesDBInstanceStorageRange : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAvailableClassesResponseBodyDBInstanceClassesDBInstanceStorageRange& obj) { 
      DARABONBA_PTR_TO_JSON(MaxValue, maxValue_);
      DARABONBA_PTR_TO_JSON(MinValue, minValue_);
      DARABONBA_PTR_TO_JSON(Step, step_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAvailableClassesResponseBodyDBInstanceClassesDBInstanceStorageRange& obj) { 
      DARABONBA_PTR_FROM_JSON(MaxValue, maxValue_);
      DARABONBA_PTR_FROM_JSON(MinValue, minValue_);
      DARABONBA_PTR_FROM_JSON(Step, step_);
    };
    DescribeAvailableClassesResponseBodyDBInstanceClassesDBInstanceStorageRange() = default ;
    DescribeAvailableClassesResponseBodyDBInstanceClassesDBInstanceStorageRange(const DescribeAvailableClassesResponseBodyDBInstanceClassesDBInstanceStorageRange &) = default ;
    DescribeAvailableClassesResponseBodyDBInstanceClassesDBInstanceStorageRange(DescribeAvailableClassesResponseBodyDBInstanceClassesDBInstanceStorageRange &&) = default ;
    DescribeAvailableClassesResponseBodyDBInstanceClassesDBInstanceStorageRange(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAvailableClassesResponseBodyDBInstanceClassesDBInstanceStorageRange() = default ;
    DescribeAvailableClassesResponseBodyDBInstanceClassesDBInstanceStorageRange& operator=(const DescribeAvailableClassesResponseBodyDBInstanceClassesDBInstanceStorageRange &) = default ;
    DescribeAvailableClassesResponseBodyDBInstanceClassesDBInstanceStorageRange& operator=(DescribeAvailableClassesResponseBodyDBInstanceClassesDBInstanceStorageRange &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->maxValue_ == nullptr
        && return this->minValue_ == nullptr && return this->step_ == nullptr; };
    // maxValue Field Functions 
    bool hasMaxValue() const { return this->maxValue_ != nullptr;};
    void deleteMaxValue() { this->maxValue_ = nullptr;};
    inline int32_t maxValue() const { DARABONBA_PTR_GET_DEFAULT(maxValue_, 0) };
    inline DescribeAvailableClassesResponseBodyDBInstanceClassesDBInstanceStorageRange& setMaxValue(int32_t maxValue) { DARABONBA_PTR_SET_VALUE(maxValue_, maxValue) };


    // minValue Field Functions 
    bool hasMinValue() const { return this->minValue_ != nullptr;};
    void deleteMinValue() { this->minValue_ = nullptr;};
    inline int32_t minValue() const { DARABONBA_PTR_GET_DEFAULT(minValue_, 0) };
    inline DescribeAvailableClassesResponseBodyDBInstanceClassesDBInstanceStorageRange& setMinValue(int32_t minValue) { DARABONBA_PTR_SET_VALUE(minValue_, minValue) };


    // step Field Functions 
    bool hasStep() const { return this->step_ != nullptr;};
    void deleteStep() { this->step_ = nullptr;};
    inline int32_t step() const { DARABONBA_PTR_GET_DEFAULT(step_, 0) };
    inline DescribeAvailableClassesResponseBodyDBInstanceClassesDBInstanceStorageRange& setStep(int32_t step) { DARABONBA_PTR_SET_VALUE(step_, step) };


  protected:
    // The maximum storage capacity that is supported for the instance. Unit: GB.
    std::shared_ptr<int32_t> maxValue_ = nullptr;
    // The minimum storage capacity that is supported for the instance. Unit: GB.
    std::shared_ptr<int32_t> minValue_ = nullptr;
    // The minimum step size at which you can adjust the storage capacity of the instance. The minimum step size is 5 GB.
    std::shared_ptr<int32_t> step_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
