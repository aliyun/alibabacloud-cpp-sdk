// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECUSTOMIZERULETESTRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECUSTOMIZERULETESTRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudSiem20220616
{
namespace Models
{
  class DescribeCustomizeRuleTestResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCustomizeRuleTestResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(SimulateData, simulateData_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCustomizeRuleTestResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(SimulateData, simulateData_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    DescribeCustomizeRuleTestResponseBodyData() = default ;
    DescribeCustomizeRuleTestResponseBodyData(const DescribeCustomizeRuleTestResponseBodyData &) = default ;
    DescribeCustomizeRuleTestResponseBodyData(DescribeCustomizeRuleTestResponseBodyData &&) = default ;
    DescribeCustomizeRuleTestResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCustomizeRuleTestResponseBodyData() = default ;
    DescribeCustomizeRuleTestResponseBodyData& operator=(const DescribeCustomizeRuleTestResponseBodyData &) = default ;
    DescribeCustomizeRuleTestResponseBodyData& operator=(DescribeCustomizeRuleTestResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->id_ != nullptr
        && this->simulateData_ != nullptr && this->status_ != nullptr; };
    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline DescribeCustomizeRuleTestResponseBodyData& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // simulateData Field Functions 
    bool hasSimulateData() const { return this->simulateData_ != nullptr;};
    void deleteSimulateData() { this->simulateData_ = nullptr;};
    inline string simulateData() const { DARABONBA_PTR_GET_DEFAULT(simulateData_, "") };
    inline DescribeCustomizeRuleTestResponseBodyData& setSimulateData(string simulateData) { DARABONBA_PTR_SET_VALUE(simulateData_, simulateData) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t status() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline DescribeCustomizeRuleTestResponseBodyData& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The ID of the rule.
    std::shared_ptr<int64_t> id_ = nullptr;
    // The historical data that is used in the simulation test.
    std::shared_ptr<string> simulateData_ = nullptr;
    // The status of the rule. Valid values:
    // 
    // *   0: The rule is in the initial state.
    // *   10: The simulation data is tested.
    // *   15: The business data is being tested.
    // *   20: The business data test ends.
    // *   100: The rule takes effect.
    std::shared_ptr<int32_t> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudSiem20220616
#endif
