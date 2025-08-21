// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINSTANCESPECRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINSTANCESPECRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeInstanceSpecResponseBodyInstanceSpecs.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class DescribeInstanceSpecResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInstanceSpecResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(BandwidthLimit, bandwidthLimit_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(DataDiskMaxSize, dataDiskMaxSize_);
      DARABONBA_PTR_TO_JSON(DataDiskMinSize, dataDiskMinSize_);
      DARABONBA_PTR_TO_JSON(InstanceSpecs, instanceSpecs_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SystemDiskMaxSize, systemDiskMaxSize_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInstanceSpecResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(BandwidthLimit, bandwidthLimit_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(DataDiskMaxSize, dataDiskMaxSize_);
      DARABONBA_PTR_FROM_JSON(DataDiskMinSize, dataDiskMinSize_);
      DARABONBA_PTR_FROM_JSON(InstanceSpecs, instanceSpecs_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SystemDiskMaxSize, systemDiskMaxSize_);
    };
    DescribeInstanceSpecResponseBody() = default ;
    DescribeInstanceSpecResponseBody(const DescribeInstanceSpecResponseBody &) = default ;
    DescribeInstanceSpecResponseBody(DescribeInstanceSpecResponseBody &&) = default ;
    DescribeInstanceSpecResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeInstanceSpecResponseBody() = default ;
    DescribeInstanceSpecResponseBody& operator=(const DescribeInstanceSpecResponseBody &) = default ;
    DescribeInstanceSpecResponseBody& operator=(DescribeInstanceSpecResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->bandwidthLimit_ != nullptr
        && this->code_ != nullptr && this->dataDiskMaxSize_ != nullptr && this->dataDiskMinSize_ != nullptr && this->instanceSpecs_ != nullptr && this->requestId_ != nullptr
        && this->systemDiskMaxSize_ != nullptr; };
    // bandwidthLimit Field Functions 
    bool hasBandwidthLimit() const { return this->bandwidthLimit_ != nullptr;};
    void deleteBandwidthLimit() { this->bandwidthLimit_ = nullptr;};
    inline int32_t bandwidthLimit() const { DARABONBA_PTR_GET_DEFAULT(bandwidthLimit_, 0) };
    inline DescribeInstanceSpecResponseBody& setBandwidthLimit(int32_t bandwidthLimit) { DARABONBA_PTR_SET_VALUE(bandwidthLimit_, bandwidthLimit) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t code() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline DescribeInstanceSpecResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // dataDiskMaxSize Field Functions 
    bool hasDataDiskMaxSize() const { return this->dataDiskMaxSize_ != nullptr;};
    void deleteDataDiskMaxSize() { this->dataDiskMaxSize_ = nullptr;};
    inline int32_t dataDiskMaxSize() const { DARABONBA_PTR_GET_DEFAULT(dataDiskMaxSize_, 0) };
    inline DescribeInstanceSpecResponseBody& setDataDiskMaxSize(int32_t dataDiskMaxSize) { DARABONBA_PTR_SET_VALUE(dataDiskMaxSize_, dataDiskMaxSize) };


    // dataDiskMinSize Field Functions 
    bool hasDataDiskMinSize() const { return this->dataDiskMinSize_ != nullptr;};
    void deleteDataDiskMinSize() { this->dataDiskMinSize_ = nullptr;};
    inline int32_t dataDiskMinSize() const { DARABONBA_PTR_GET_DEFAULT(dataDiskMinSize_, 0) };
    inline DescribeInstanceSpecResponseBody& setDataDiskMinSize(int32_t dataDiskMinSize) { DARABONBA_PTR_SET_VALUE(dataDiskMinSize_, dataDiskMinSize) };


    // instanceSpecs Field Functions 
    bool hasInstanceSpecs() const { return this->instanceSpecs_ != nullptr;};
    void deleteInstanceSpecs() { this->instanceSpecs_ = nullptr;};
    inline const DescribeInstanceSpecResponseBodyInstanceSpecs & instanceSpecs() const { DARABONBA_PTR_GET_CONST(instanceSpecs_, DescribeInstanceSpecResponseBodyInstanceSpecs) };
    inline DescribeInstanceSpecResponseBodyInstanceSpecs instanceSpecs() { DARABONBA_PTR_GET(instanceSpecs_, DescribeInstanceSpecResponseBodyInstanceSpecs) };
    inline DescribeInstanceSpecResponseBody& setInstanceSpecs(const DescribeInstanceSpecResponseBodyInstanceSpecs & instanceSpecs) { DARABONBA_PTR_SET_VALUE(instanceSpecs_, instanceSpecs) };
    inline DescribeInstanceSpecResponseBody& setInstanceSpecs(DescribeInstanceSpecResponseBodyInstanceSpecs && instanceSpecs) { DARABONBA_PTR_SET_RVALUE(instanceSpecs_, instanceSpecs) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeInstanceSpecResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // systemDiskMaxSize Field Functions 
    bool hasSystemDiskMaxSize() const { return this->systemDiskMaxSize_ != nullptr;};
    void deleteSystemDiskMaxSize() { this->systemDiskMaxSize_ = nullptr;};
    inline int32_t systemDiskMaxSize() const { DARABONBA_PTR_GET_DEFAULT(systemDiskMaxSize_, 0) };
    inline DescribeInstanceSpecResponseBody& setSystemDiskMaxSize(int32_t systemDiskMaxSize) { DARABONBA_PTR_SET_VALUE(systemDiskMaxSize_, systemDiskMaxSize) };


  protected:
    // The bandwidth limit for a single instance. Unit: Mbit/s.
    std::shared_ptr<int32_t> bandwidthLimit_ = nullptr;
    // The returned service code. A value of 0 indicates that the operation was successful.
    std::shared_ptr<int32_t> code_ = nullptr;
    // The maximum capacity of a data disk. Unit: GB.
    std::shared_ptr<int32_t> dataDiskMaxSize_ = nullptr;
    // The minimum capacity of a data disk. Unit: GB.
    std::shared_ptr<int32_t> dataDiskMinSize_ = nullptr;
    // The information about instance specifications.
    std::shared_ptr<DescribeInstanceSpecResponseBodyInstanceSpecs> instanceSpecs_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The maximum capacity of the system disk. Unit: GiB.
    std::shared_ptr<int32_t> systemDiskMaxSize_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
