// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEEIURANGERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEEIURANGERESPONSEBODY_HPP_
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
  class DescribeEIURangeResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeEIURangeResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(EIUInfo, EIUInfo_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeEIURangeResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(EIUInfo, EIUInfo_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeEIURangeResponseBody() = default ;
    DescribeEIURangeResponseBody(const DescribeEIURangeResponseBody &) = default ;
    DescribeEIURangeResponseBody(DescribeEIURangeResponseBody &&) = default ;
    DescribeEIURangeResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeEIURangeResponseBody() = default ;
    DescribeEIURangeResponseBody& operator=(const DescribeEIURangeResponseBody &) = default ;
    DescribeEIURangeResponseBody& operator=(DescribeEIURangeResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class EIUInfo : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const EIUInfo& obj) { 
        DARABONBA_PTR_TO_JSON(DefaultReservedNodeSize, defaultReservedNodeSize_);
        DARABONBA_PTR_TO_JSON(DefaultValue, defaultValue_);
        DARABONBA_PTR_TO_JSON(EIURange, EIURange_);
        DARABONBA_PTR_TO_JSON(MaxValue, maxValue_);
        DARABONBA_PTR_TO_JSON(MinValue, minValue_);
        DARABONBA_PTR_TO_JSON(ReservedNodeSizeRange, reservedNodeSizeRange_);
        DARABONBA_PTR_TO_JSON(Step, step_);
        DARABONBA_PTR_TO_JSON(StorageResourceRange, storageResourceRange_);
      };
      friend void from_json(const Darabonba::Json& j, EIUInfo& obj) { 
        DARABONBA_PTR_FROM_JSON(DefaultReservedNodeSize, defaultReservedNodeSize_);
        DARABONBA_PTR_FROM_JSON(DefaultValue, defaultValue_);
        DARABONBA_PTR_FROM_JSON(EIURange, EIURange_);
        DARABONBA_PTR_FROM_JSON(MaxValue, maxValue_);
        DARABONBA_PTR_FROM_JSON(MinValue, minValue_);
        DARABONBA_PTR_FROM_JSON(ReservedNodeSizeRange, reservedNodeSizeRange_);
        DARABONBA_PTR_FROM_JSON(Step, step_);
        DARABONBA_PTR_FROM_JSON(StorageResourceRange, storageResourceRange_);
      };
      EIUInfo() = default ;
      EIUInfo(const EIUInfo &) = default ;
      EIUInfo(EIUInfo &&) = default ;
      EIUInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~EIUInfo() = default ;
      EIUInfo& operator=(const EIUInfo &) = default ;
      EIUInfo& operator=(EIUInfo &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->defaultReservedNodeSize_ == nullptr
        && this->defaultValue_ == nullptr && this->EIURange_ == nullptr && this->maxValue_ == nullptr && this->minValue_ == nullptr && this->reservedNodeSizeRange_ == nullptr
        && this->step_ == nullptr && this->storageResourceRange_ == nullptr; };
      // defaultReservedNodeSize Field Functions 
      bool hasDefaultReservedNodeSize() const { return this->defaultReservedNodeSize_ != nullptr;};
      void deleteDefaultReservedNodeSize() { this->defaultReservedNodeSize_ = nullptr;};
      inline string getDefaultReservedNodeSize() const { DARABONBA_PTR_GET_DEFAULT(defaultReservedNodeSize_, "") };
      inline EIUInfo& setDefaultReservedNodeSize(string defaultReservedNodeSize) { DARABONBA_PTR_SET_VALUE(defaultReservedNodeSize_, defaultReservedNodeSize) };


      // defaultValue Field Functions 
      bool hasDefaultValue() const { return this->defaultValue_ != nullptr;};
      void deleteDefaultValue() { this->defaultValue_ = nullptr;};
      inline string getDefaultValue() const { DARABONBA_PTR_GET_DEFAULT(defaultValue_, "") };
      inline EIUInfo& setDefaultValue(string defaultValue) { DARABONBA_PTR_SET_VALUE(defaultValue_, defaultValue) };


      // EIURange Field Functions 
      bool hasEIURange() const { return this->EIURange_ != nullptr;};
      void deleteEIURange() { this->EIURange_ = nullptr;};
      inline const vector<int64_t> & getEIURange() const { DARABONBA_PTR_GET_CONST(EIURange_, vector<int64_t>) };
      inline vector<int64_t> getEIURange() { DARABONBA_PTR_GET(EIURange_, vector<int64_t>) };
      inline EIUInfo& setEIURange(const vector<int64_t> & EIURange) { DARABONBA_PTR_SET_VALUE(EIURange_, EIURange) };
      inline EIUInfo& setEIURange(vector<int64_t> && EIURange) { DARABONBA_PTR_SET_RVALUE(EIURange_, EIURange) };


      // maxValue Field Functions 
      bool hasMaxValue() const { return this->maxValue_ != nullptr;};
      void deleteMaxValue() { this->maxValue_ = nullptr;};
      inline string getMaxValue() const { DARABONBA_PTR_GET_DEFAULT(maxValue_, "") };
      inline EIUInfo& setMaxValue(string maxValue) { DARABONBA_PTR_SET_VALUE(maxValue_, maxValue) };


      // minValue Field Functions 
      bool hasMinValue() const { return this->minValue_ != nullptr;};
      void deleteMinValue() { this->minValue_ = nullptr;};
      inline string getMinValue() const { DARABONBA_PTR_GET_DEFAULT(minValue_, "") };
      inline EIUInfo& setMinValue(string minValue) { DARABONBA_PTR_SET_VALUE(minValue_, minValue) };


      // reservedNodeSizeRange Field Functions 
      bool hasReservedNodeSizeRange() const { return this->reservedNodeSizeRange_ != nullptr;};
      void deleteReservedNodeSizeRange() { this->reservedNodeSizeRange_ = nullptr;};
      inline const vector<string> & getReservedNodeSizeRange() const { DARABONBA_PTR_GET_CONST(reservedNodeSizeRange_, vector<string>) };
      inline vector<string> getReservedNodeSizeRange() { DARABONBA_PTR_GET(reservedNodeSizeRange_, vector<string>) };
      inline EIUInfo& setReservedNodeSizeRange(const vector<string> & reservedNodeSizeRange) { DARABONBA_PTR_SET_VALUE(reservedNodeSizeRange_, reservedNodeSizeRange) };
      inline EIUInfo& setReservedNodeSizeRange(vector<string> && reservedNodeSizeRange) { DARABONBA_PTR_SET_RVALUE(reservedNodeSizeRange_, reservedNodeSizeRange) };


      // step Field Functions 
      bool hasStep() const { return this->step_ != nullptr;};
      void deleteStep() { this->step_ = nullptr;};
      inline string getStep() const { DARABONBA_PTR_GET_DEFAULT(step_, "") };
      inline EIUInfo& setStep(string step) { DARABONBA_PTR_SET_VALUE(step_, step) };


      // storageResourceRange Field Functions 
      bool hasStorageResourceRange() const { return this->storageResourceRange_ != nullptr;};
      void deleteStorageResourceRange() { this->storageResourceRange_ = nullptr;};
      inline const vector<string> & getStorageResourceRange() const { DARABONBA_PTR_GET_CONST(storageResourceRange_, vector<string>) };
      inline vector<string> getStorageResourceRange() { DARABONBA_PTR_GET(storageResourceRange_, vector<string>) };
      inline EIUInfo& setStorageResourceRange(const vector<string> & storageResourceRange) { DARABONBA_PTR_SET_VALUE(storageResourceRange_, storageResourceRange) };
      inline EIUInfo& setStorageResourceRange(vector<string> && storageResourceRange) { DARABONBA_PTR_SET_RVALUE(storageResourceRange_, storageResourceRange) };


    protected:
      shared_ptr<string> defaultReservedNodeSize_ {};
      // The suggested value for the number of EIUs.
      shared_ptr<string> defaultValue_ {};
      // The queried range for the number of EIUs.
      shared_ptr<vector<int64_t>> EIURange_ {};
      // A reserved parameter.
      shared_ptr<string> maxValue_ {};
      // A reserved parameter.
      shared_ptr<string> minValue_ {};
      shared_ptr<vector<string>> reservedNodeSizeRange_ {};
      // A reserved parameter.
      shared_ptr<string> step_ {};
      // A reserved parameter.
      shared_ptr<vector<string>> storageResourceRange_ {};
    };

    virtual bool empty() const override { return this->EIUInfo_ == nullptr
        && this->requestId_ == nullptr; };
    // EIUInfo Field Functions 
    bool hasEIUInfo() const { return this->EIUInfo_ != nullptr;};
    void deleteEIUInfo() { this->EIUInfo_ = nullptr;};
    inline const DescribeEIURangeResponseBody::EIUInfo & getEIUInfo() const { DARABONBA_PTR_GET_CONST(EIUInfo_, DescribeEIURangeResponseBody::EIUInfo) };
    inline DescribeEIURangeResponseBody::EIUInfo getEIUInfo() { DARABONBA_PTR_GET(EIUInfo_, DescribeEIURangeResponseBody::EIUInfo) };
    inline DescribeEIURangeResponseBody& setEIUInfo(const DescribeEIURangeResponseBody::EIUInfo & eIUInfo) { DARABONBA_PTR_SET_VALUE(EIUInfo_, eIUInfo) };
    inline DescribeEIURangeResponseBody& setEIUInfo(DescribeEIURangeResponseBody::EIUInfo && eIUInfo) { DARABONBA_PTR_SET_RVALUE(EIUInfo_, eIUInfo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeEIURangeResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The queried information about the number of EIUs.
    shared_ptr<DescribeEIURangeResponseBody::EIUInfo> EIUInfo_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20190315
#endif
