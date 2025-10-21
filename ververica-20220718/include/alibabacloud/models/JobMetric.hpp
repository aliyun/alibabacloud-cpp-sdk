// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_JOBMETRIC_HPP_
#define ALIBABACLOUD_MODELS_JOBMETRIC_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ververica20220718
{
namespace Models
{
  class JobMetric : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const JobMetric& obj) { 
      DARABONBA_PTR_TO_JSON(totalCpu, totalCpu_);
      DARABONBA_PTR_TO_JSON(totalMemoryByte, totalMemoryByte_);
    };
    friend void from_json(const Darabonba::Json& j, JobMetric& obj) { 
      DARABONBA_PTR_FROM_JSON(totalCpu, totalCpu_);
      DARABONBA_PTR_FROM_JSON(totalMemoryByte, totalMemoryByte_);
    };
    JobMetric() = default ;
    JobMetric(const JobMetric &) = default ;
    JobMetric(JobMetric &&) = default ;
    JobMetric(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~JobMetric() = default ;
    JobMetric& operator=(const JobMetric &) = default ;
    JobMetric& operator=(JobMetric &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->totalCpu_ == nullptr
        && return this->totalMemoryByte_ == nullptr; };
    // totalCpu Field Functions 
    bool hasTotalCpu() const { return this->totalCpu_ != nullptr;};
    void deleteTotalCpu() { this->totalCpu_ = nullptr;};
    inline double totalCpu() const { DARABONBA_PTR_GET_DEFAULT(totalCpu_, 0.0) };
    inline JobMetric& setTotalCpu(double totalCpu) { DARABONBA_PTR_SET_VALUE(totalCpu_, totalCpu) };


    // totalMemoryByte Field Functions 
    bool hasTotalMemoryByte() const { return this->totalMemoryByte_ != nullptr;};
    void deleteTotalMemoryByte() { this->totalMemoryByte_ = nullptr;};
    inline int64_t totalMemoryByte() const { DARABONBA_PTR_GET_DEFAULT(totalMemoryByte_, 0L) };
    inline JobMetric& setTotalMemoryByte(int64_t totalMemoryByte) { DARABONBA_PTR_SET_VALUE(totalMemoryByte_, totalMemoryByte) };


  protected:
    std::shared_ptr<double> totalCpu_ = nullptr;
    std::shared_ptr<int64_t> totalMemoryByte_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ververica20220718
#endif
