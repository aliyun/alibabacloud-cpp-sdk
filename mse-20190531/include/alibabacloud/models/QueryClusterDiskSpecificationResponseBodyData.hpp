// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYCLUSTERDISKSPECIFICATIONRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_QUERYCLUSTERDISKSPECIFICATIONRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class QueryClusterDiskSpecificationResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryClusterDiskSpecificationResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(Max, max_);
      DARABONBA_PTR_TO_JSON(Min, min_);
      DARABONBA_PTR_TO_JSON(Step, step_);
    };
    friend void from_json(const Darabonba::Json& j, QueryClusterDiskSpecificationResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(Max, max_);
      DARABONBA_PTR_FROM_JSON(Min, min_);
      DARABONBA_PTR_FROM_JSON(Step, step_);
    };
    QueryClusterDiskSpecificationResponseBodyData() = default ;
    QueryClusterDiskSpecificationResponseBodyData(const QueryClusterDiskSpecificationResponseBodyData &) = default ;
    QueryClusterDiskSpecificationResponseBodyData(QueryClusterDiskSpecificationResponseBodyData &&) = default ;
    QueryClusterDiskSpecificationResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryClusterDiskSpecificationResponseBodyData() = default ;
    QueryClusterDiskSpecificationResponseBodyData& operator=(const QueryClusterDiskSpecificationResponseBodyData &) = default ;
    QueryClusterDiskSpecificationResponseBodyData& operator=(QueryClusterDiskSpecificationResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->max_ != nullptr
        && this->min_ != nullptr && this->step_ != nullptr; };
    // max Field Functions 
    bool hasMax() const { return this->max_ != nullptr;};
    void deleteMax() { this->max_ = nullptr;};
    inline int32_t max() const { DARABONBA_PTR_GET_DEFAULT(max_, 0) };
    inline QueryClusterDiskSpecificationResponseBodyData& setMax(int32_t max) { DARABONBA_PTR_SET_VALUE(max_, max) };


    // min Field Functions 
    bool hasMin() const { return this->min_ != nullptr;};
    void deleteMin() { this->min_ = nullptr;};
    inline int32_t min() const { DARABONBA_PTR_GET_DEFAULT(min_, 0) };
    inline QueryClusterDiskSpecificationResponseBodyData& setMin(int32_t min) { DARABONBA_PTR_SET_VALUE(min_, min) };


    // step Field Functions 
    bool hasStep() const { return this->step_ != nullptr;};
    void deleteStep() { this->step_ = nullptr;};
    inline int32_t step() const { DARABONBA_PTR_GET_DEFAULT(step_, 0) };
    inline QueryClusterDiskSpecificationResponseBodyData& setStep(int32_t step) { DARABONBA_PTR_SET_VALUE(step_, step) };


  protected:
    // The maximum disk capacity. Unit: GB.
    std::shared_ptr<int32_t> max_ = nullptr;
    // The minimum disk capacity. Unit: GB.
    std::shared_ptr<int32_t> min_ = nullptr;
    // The step size of the disk capacity.
    std::shared_ptr<int32_t> step_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
