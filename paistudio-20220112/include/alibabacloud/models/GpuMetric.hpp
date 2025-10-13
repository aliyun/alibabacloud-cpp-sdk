// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GPUMETRIC_HPP_
#define ALIBABACLOUD_MODELS_GPUMETRIC_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiStudio20220112
{
namespace Models
{
  class GPUMetric : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GPUMetric& obj) { 
      DARABONBA_PTR_TO_JSON(Index, index_);
      DARABONBA_PTR_TO_JSON(Model, model_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(UsageRate, usageRate_);
    };
    friend void from_json(const Darabonba::Json& j, GPUMetric& obj) { 
      DARABONBA_PTR_FROM_JSON(Index, index_);
      DARABONBA_PTR_FROM_JSON(Model, model_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(UsageRate, usageRate_);
    };
    GPUMetric() = default ;
    GPUMetric(const GPUMetric &) = default ;
    GPUMetric(GPUMetric &&) = default ;
    GPUMetric(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GPUMetric() = default ;
    GPUMetric& operator=(const GPUMetric &) = default ;
    GPUMetric& operator=(GPUMetric &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->index_ == nullptr
        && return this->model_ == nullptr && return this->status_ == nullptr && return this->usageRate_ == nullptr; };
    // index Field Functions 
    bool hasIndex() const { return this->index_ != nullptr;};
    void deleteIndex() { this->index_ = nullptr;};
    inline int64_t index() const { DARABONBA_PTR_GET_DEFAULT(index_, 0L) };
    inline GPUMetric& setIndex(int64_t index) { DARABONBA_PTR_SET_VALUE(index_, index) };


    // model Field Functions 
    bool hasModel() const { return this->model_ != nullptr;};
    void deleteModel() { this->model_ = nullptr;};
    inline string model() const { DARABONBA_PTR_GET_DEFAULT(model_, "") };
    inline GPUMetric& setModel(string model) { DARABONBA_PTR_SET_VALUE(model_, model) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int64_t status() const { DARABONBA_PTR_GET_DEFAULT(status_, 0L) };
    inline GPUMetric& setStatus(int64_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // usageRate Field Functions 
    bool hasUsageRate() const { return this->usageRate_ != nullptr;};
    void deleteUsageRate() { this->usageRate_ = nullptr;};
    inline float usageRate() const { DARABONBA_PTR_GET_DEFAULT(usageRate_, 0.0) };
    inline GPUMetric& setUsageRate(float usageRate) { DARABONBA_PTR_SET_VALUE(usageRate_, usageRate) };


  protected:
    std::shared_ptr<int64_t> index_ = nullptr;
    std::shared_ptr<string> model_ = nullptr;
    std::shared_ptr<int64_t> status_ = nullptr;
    std::shared_ptr<float> usageRate_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiStudio20220112
#endif
