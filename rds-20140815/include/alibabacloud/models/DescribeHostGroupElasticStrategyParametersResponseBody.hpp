// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEHOSTGROUPELASTICSTRATEGYPARAMETERSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEHOSTGROUPELASTICSTRATEGYPARAMETERSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class DescribeHostGroupElasticStrategyParametersResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeHostGroupElasticStrategyParametersResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CpuShar, cpuShar_);
      DARABONBA_PTR_TO_JSON(CpuZoom, cpuZoom_);
      DARABONBA_PTR_TO_JSON(IopsZoom, iopsZoom_);
      DARABONBA_PTR_TO_JSON(MaxConnZoom, maxConnZoom_);
      DARABONBA_PTR_TO_JSON(MemoryZoom, memoryZoom_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeHostGroupElasticStrategyParametersResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CpuShar, cpuShar_);
      DARABONBA_PTR_FROM_JSON(CpuZoom, cpuZoom_);
      DARABONBA_PTR_FROM_JSON(IopsZoom, iopsZoom_);
      DARABONBA_PTR_FROM_JSON(MaxConnZoom, maxConnZoom_);
      DARABONBA_PTR_FROM_JSON(MemoryZoom, memoryZoom_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeHostGroupElasticStrategyParametersResponseBody() = default ;
    DescribeHostGroupElasticStrategyParametersResponseBody(const DescribeHostGroupElasticStrategyParametersResponseBody &) = default ;
    DescribeHostGroupElasticStrategyParametersResponseBody(DescribeHostGroupElasticStrategyParametersResponseBody &&) = default ;
    DescribeHostGroupElasticStrategyParametersResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeHostGroupElasticStrategyParametersResponseBody() = default ;
    DescribeHostGroupElasticStrategyParametersResponseBody& operator=(const DescribeHostGroupElasticStrategyParametersResponseBody &) = default ;
    DescribeHostGroupElasticStrategyParametersResponseBody& operator=(DescribeHostGroupElasticStrategyParametersResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->cpuShar_ == nullptr
        && return this->cpuZoom_ == nullptr && return this->iopsZoom_ == nullptr && return this->maxConnZoom_ == nullptr && return this->memoryZoom_ == nullptr && return this->requestId_ == nullptr; };
    // cpuShar Field Functions 
    bool hasCpuShar() const { return this->cpuShar_ != nullptr;};
    void deleteCpuShar() { this->cpuShar_ = nullptr;};
    inline int32_t cpuShar() const { DARABONBA_PTR_GET_DEFAULT(cpuShar_, 0) };
    inline DescribeHostGroupElasticStrategyParametersResponseBody& setCpuShar(int32_t cpuShar) { DARABONBA_PTR_SET_VALUE(cpuShar_, cpuShar) };


    // cpuZoom Field Functions 
    bool hasCpuZoom() const { return this->cpuZoom_ != nullptr;};
    void deleteCpuZoom() { this->cpuZoom_ = nullptr;};
    inline int32_t cpuZoom() const { DARABONBA_PTR_GET_DEFAULT(cpuZoom_, 0) };
    inline DescribeHostGroupElasticStrategyParametersResponseBody& setCpuZoom(int32_t cpuZoom) { DARABONBA_PTR_SET_VALUE(cpuZoom_, cpuZoom) };


    // iopsZoom Field Functions 
    bool hasIopsZoom() const { return this->iopsZoom_ != nullptr;};
    void deleteIopsZoom() { this->iopsZoom_ = nullptr;};
    inline int32_t iopsZoom() const { DARABONBA_PTR_GET_DEFAULT(iopsZoom_, 0) };
    inline DescribeHostGroupElasticStrategyParametersResponseBody& setIopsZoom(int32_t iopsZoom) { DARABONBA_PTR_SET_VALUE(iopsZoom_, iopsZoom) };


    // maxConnZoom Field Functions 
    bool hasMaxConnZoom() const { return this->maxConnZoom_ != nullptr;};
    void deleteMaxConnZoom() { this->maxConnZoom_ = nullptr;};
    inline int32_t maxConnZoom() const { DARABONBA_PTR_GET_DEFAULT(maxConnZoom_, 0) };
    inline DescribeHostGroupElasticStrategyParametersResponseBody& setMaxConnZoom(int32_t maxConnZoom) { DARABONBA_PTR_SET_VALUE(maxConnZoom_, maxConnZoom) };


    // memoryZoom Field Functions 
    bool hasMemoryZoom() const { return this->memoryZoom_ != nullptr;};
    void deleteMemoryZoom() { this->memoryZoom_ = nullptr;};
    inline int32_t memoryZoom() const { DARABONBA_PTR_GET_DEFAULT(memoryZoom_, 0) };
    inline DescribeHostGroupElasticStrategyParametersResponseBody& setMemoryZoom(int32_t memoryZoom) { DARABONBA_PTR_SET_VALUE(memoryZoom_, memoryZoom) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeHostGroupElasticStrategyParametersResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The CPU utilization of the instance. Unit: percentage.
    std::shared_ptr<int32_t> cpuShar_ = nullptr;
    // The number of CPU cores used by the instance. Unit: cores.
    std::shared_ptr<int32_t> cpuZoom_ = nullptr;
    // The number of I/O requests.
    std::shared_ptr<int32_t> iopsZoom_ = nullptr;
    // The maximum number of concurrent connections supported by the instance type.
    std::shared_ptr<int32_t> maxConnZoom_ = nullptr;
    // The total memory size of the instance in the dedicated cluster. Unit: MB.
    std::shared_ptr<int32_t> memoryZoom_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
