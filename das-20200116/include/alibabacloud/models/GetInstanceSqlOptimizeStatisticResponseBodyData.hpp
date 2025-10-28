// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETINSTANCESQLOPTIMIZESTATISTICRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETINSTANCESQLOPTIMIZESTATISTICRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DAS20200116
{
namespace Models
{
  class GetInstanceSqlOptimizeStatisticResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetInstanceSqlOptimizeStatisticResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(count, count_);
      DARABONBA_PTR_TO_JSON(improvement, improvement_);
    };
    friend void from_json(const Darabonba::Json& j, GetInstanceSqlOptimizeStatisticResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(count, count_);
      DARABONBA_PTR_FROM_JSON(improvement, improvement_);
    };
    GetInstanceSqlOptimizeStatisticResponseBodyData() = default ;
    GetInstanceSqlOptimizeStatisticResponseBodyData(const GetInstanceSqlOptimizeStatisticResponseBodyData &) = default ;
    GetInstanceSqlOptimizeStatisticResponseBodyData(GetInstanceSqlOptimizeStatisticResponseBodyData &&) = default ;
    GetInstanceSqlOptimizeStatisticResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetInstanceSqlOptimizeStatisticResponseBodyData() = default ;
    GetInstanceSqlOptimizeStatisticResponseBodyData& operator=(const GetInstanceSqlOptimizeStatisticResponseBodyData &) = default ;
    GetInstanceSqlOptimizeStatisticResponseBodyData& operator=(GetInstanceSqlOptimizeStatisticResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->count_ == nullptr
        && return this->improvement_ == nullptr; };
    // count Field Functions 
    bool hasCount() const { return this->count_ != nullptr;};
    void deleteCount() { this->count_ = nullptr;};
    inline int32_t count() const { DARABONBA_PTR_GET_DEFAULT(count_, 0) };
    inline GetInstanceSqlOptimizeStatisticResponseBodyData& setCount(int32_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


    // improvement Field Functions 
    bool hasImprovement() const { return this->improvement_ != nullptr;};
    void deleteImprovement() { this->improvement_ = nullptr;};
    inline double improvement() const { DARABONBA_PTR_GET_DEFAULT(improvement_, 0.0) };
    inline GetInstanceSqlOptimizeStatisticResponseBodyData& setImprovement(double improvement) { DARABONBA_PTR_SET_VALUE(improvement_, improvement) };


  protected:
    // The total number of automatic SQL optimization events.
    std::shared_ptr<int32_t> count_ = nullptr;
    // The multiple of the maximum improvement for returned automatic SQL optimization events.
    std::shared_ptr<double> improvement_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DAS20200116
#endif
