// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEEIURANGERESPONSEBODYEIUINFO_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEEIURANGERESPONSEBODYEIUINFO_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20190315
{
namespace Models
{
  class DescribeEIURangeResponseBodyEIUInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeEIURangeResponseBodyEIUInfo& obj) { 
      DARABONBA_PTR_TO_JSON(DefaultReservedNodeSize, defaultReservedNodeSize_);
      DARABONBA_PTR_TO_JSON(DefaultValue, defaultValue_);
      DARABONBA_PTR_TO_JSON(EIURange, EIURange_);
      DARABONBA_PTR_TO_JSON(MaxValue, maxValue_);
      DARABONBA_PTR_TO_JSON(MinValue, minValue_);
      DARABONBA_PTR_TO_JSON(ReservedNodeSizeRange, reservedNodeSizeRange_);
      DARABONBA_PTR_TO_JSON(Step, step_);
      DARABONBA_PTR_TO_JSON(StorageResourceRange, storageResourceRange_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeEIURangeResponseBodyEIUInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(DefaultReservedNodeSize, defaultReservedNodeSize_);
      DARABONBA_PTR_FROM_JSON(DefaultValue, defaultValue_);
      DARABONBA_PTR_FROM_JSON(EIURange, EIURange_);
      DARABONBA_PTR_FROM_JSON(MaxValue, maxValue_);
      DARABONBA_PTR_FROM_JSON(MinValue, minValue_);
      DARABONBA_PTR_FROM_JSON(ReservedNodeSizeRange, reservedNodeSizeRange_);
      DARABONBA_PTR_FROM_JSON(Step, step_);
      DARABONBA_PTR_FROM_JSON(StorageResourceRange, storageResourceRange_);
    };
    DescribeEIURangeResponseBodyEIUInfo() = default ;
    DescribeEIURangeResponseBodyEIUInfo(const DescribeEIURangeResponseBodyEIUInfo &) = default ;
    DescribeEIURangeResponseBodyEIUInfo(DescribeEIURangeResponseBodyEIUInfo &&) = default ;
    DescribeEIURangeResponseBodyEIUInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeEIURangeResponseBodyEIUInfo() = default ;
    DescribeEIURangeResponseBodyEIUInfo& operator=(const DescribeEIURangeResponseBodyEIUInfo &) = default ;
    DescribeEIURangeResponseBodyEIUInfo& operator=(DescribeEIURangeResponseBodyEIUInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->defaultReservedNodeSize_ == nullptr
        && return this->defaultValue_ == nullptr && return this->EIURange_ == nullptr && return this->maxValue_ == nullptr && return this->minValue_ == nullptr && return this->reservedNodeSizeRange_ == nullptr
        && return this->step_ == nullptr && return this->storageResourceRange_ == nullptr; };
    // defaultReservedNodeSize Field Functions 
    bool hasDefaultReservedNodeSize() const { return this->defaultReservedNodeSize_ != nullptr;};
    void deleteDefaultReservedNodeSize() { this->defaultReservedNodeSize_ = nullptr;};
    inline string defaultReservedNodeSize() const { DARABONBA_PTR_GET_DEFAULT(defaultReservedNodeSize_, "") };
    inline DescribeEIURangeResponseBodyEIUInfo& setDefaultReservedNodeSize(string defaultReservedNodeSize) { DARABONBA_PTR_SET_VALUE(defaultReservedNodeSize_, defaultReservedNodeSize) };


    // defaultValue Field Functions 
    bool hasDefaultValue() const { return this->defaultValue_ != nullptr;};
    void deleteDefaultValue() { this->defaultValue_ = nullptr;};
    inline string defaultValue() const { DARABONBA_PTR_GET_DEFAULT(defaultValue_, "") };
    inline DescribeEIURangeResponseBodyEIUInfo& setDefaultValue(string defaultValue) { DARABONBA_PTR_SET_VALUE(defaultValue_, defaultValue) };


    // EIURange Field Functions 
    bool hasEIURange() const { return this->EIURange_ != nullptr;};
    void deleteEIURange() { this->EIURange_ = nullptr;};
    inline const vector<int64_t> & EIURange() const { DARABONBA_PTR_GET_CONST(EIURange_, vector<int64_t>) };
    inline vector<int64_t> EIURange() { DARABONBA_PTR_GET(EIURange_, vector<int64_t>) };
    inline DescribeEIURangeResponseBodyEIUInfo& setEIURange(const vector<int64_t> & EIURange) { DARABONBA_PTR_SET_VALUE(EIURange_, EIURange) };
    inline DescribeEIURangeResponseBodyEIUInfo& setEIURange(vector<int64_t> && EIURange) { DARABONBA_PTR_SET_RVALUE(EIURange_, EIURange) };


    // maxValue Field Functions 
    bool hasMaxValue() const { return this->maxValue_ != nullptr;};
    void deleteMaxValue() { this->maxValue_ = nullptr;};
    inline string maxValue() const { DARABONBA_PTR_GET_DEFAULT(maxValue_, "") };
    inline DescribeEIURangeResponseBodyEIUInfo& setMaxValue(string maxValue) { DARABONBA_PTR_SET_VALUE(maxValue_, maxValue) };


    // minValue Field Functions 
    bool hasMinValue() const { return this->minValue_ != nullptr;};
    void deleteMinValue() { this->minValue_ = nullptr;};
    inline string minValue() const { DARABONBA_PTR_GET_DEFAULT(minValue_, "") };
    inline DescribeEIURangeResponseBodyEIUInfo& setMinValue(string minValue) { DARABONBA_PTR_SET_VALUE(minValue_, minValue) };


    // reservedNodeSizeRange Field Functions 
    bool hasReservedNodeSizeRange() const { return this->reservedNodeSizeRange_ != nullptr;};
    void deleteReservedNodeSizeRange() { this->reservedNodeSizeRange_ = nullptr;};
    inline const vector<string> & reservedNodeSizeRange() const { DARABONBA_PTR_GET_CONST(reservedNodeSizeRange_, vector<string>) };
    inline vector<string> reservedNodeSizeRange() { DARABONBA_PTR_GET(reservedNodeSizeRange_, vector<string>) };
    inline DescribeEIURangeResponseBodyEIUInfo& setReservedNodeSizeRange(const vector<string> & reservedNodeSizeRange) { DARABONBA_PTR_SET_VALUE(reservedNodeSizeRange_, reservedNodeSizeRange) };
    inline DescribeEIURangeResponseBodyEIUInfo& setReservedNodeSizeRange(vector<string> && reservedNodeSizeRange) { DARABONBA_PTR_SET_RVALUE(reservedNodeSizeRange_, reservedNodeSizeRange) };


    // step Field Functions 
    bool hasStep() const { return this->step_ != nullptr;};
    void deleteStep() { this->step_ = nullptr;};
    inline string step() const { DARABONBA_PTR_GET_DEFAULT(step_, "") };
    inline DescribeEIURangeResponseBodyEIUInfo& setStep(string step) { DARABONBA_PTR_SET_VALUE(step_, step) };


    // storageResourceRange Field Functions 
    bool hasStorageResourceRange() const { return this->storageResourceRange_ != nullptr;};
    void deleteStorageResourceRange() { this->storageResourceRange_ = nullptr;};
    inline const vector<string> & storageResourceRange() const { DARABONBA_PTR_GET_CONST(storageResourceRange_, vector<string>) };
    inline vector<string> storageResourceRange() { DARABONBA_PTR_GET(storageResourceRange_, vector<string>) };
    inline DescribeEIURangeResponseBodyEIUInfo& setStorageResourceRange(const vector<string> & storageResourceRange) { DARABONBA_PTR_SET_VALUE(storageResourceRange_, storageResourceRange) };
    inline DescribeEIURangeResponseBodyEIUInfo& setStorageResourceRange(vector<string> && storageResourceRange) { DARABONBA_PTR_SET_RVALUE(storageResourceRange_, storageResourceRange) };


  protected:
    std::shared_ptr<string> defaultReservedNodeSize_ = nullptr;
    // The suggested value for the number of EIUs.
    std::shared_ptr<string> defaultValue_ = nullptr;
    // The queried range for the number of EIUs.
    std::shared_ptr<vector<int64_t>> EIURange_ = nullptr;
    // A reserved parameter.
    std::shared_ptr<string> maxValue_ = nullptr;
    // A reserved parameter.
    std::shared_ptr<string> minValue_ = nullptr;
    std::shared_ptr<vector<string>> reservedNodeSizeRange_ = nullptr;
    // A reserved parameter.
    std::shared_ptr<string> step_ = nullptr;
    // A reserved parameter.
    std::shared_ptr<vector<string>> storageResourceRange_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20190315
#endif
