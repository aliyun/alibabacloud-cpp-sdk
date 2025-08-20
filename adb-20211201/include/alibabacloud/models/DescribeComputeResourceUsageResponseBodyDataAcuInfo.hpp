// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECOMPUTERESOURCEUSAGERESPONSEBODYDATAACUINFO_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECOMPUTERESOURCEUSAGERESPONSEBODYDATAACUINFO_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class DescribeComputeResourceUsageResponseBodyDataAcuInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeComputeResourceUsageResponseBodyDataAcuInfo& obj) { 
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Values, values_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeComputeResourceUsageResponseBodyDataAcuInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Values, values_);
    };
    DescribeComputeResourceUsageResponseBodyDataAcuInfo() = default ;
    DescribeComputeResourceUsageResponseBodyDataAcuInfo(const DescribeComputeResourceUsageResponseBodyDataAcuInfo &) = default ;
    DescribeComputeResourceUsageResponseBodyDataAcuInfo(DescribeComputeResourceUsageResponseBodyDataAcuInfo &&) = default ;
    DescribeComputeResourceUsageResponseBodyDataAcuInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeComputeResourceUsageResponseBodyDataAcuInfo() = default ;
    DescribeComputeResourceUsageResponseBodyDataAcuInfo& operator=(const DescribeComputeResourceUsageResponseBodyDataAcuInfo &) = default ;
    DescribeComputeResourceUsageResponseBodyDataAcuInfo& operator=(DescribeComputeResourceUsageResponseBodyDataAcuInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->name_ != nullptr
        && this->values_ != nullptr; };
    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeComputeResourceUsageResponseBodyDataAcuInfo& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // values Field Functions 
    bool hasValues() const { return this->values_ != nullptr;};
    void deleteValues() { this->values_ = nullptr;};
    inline const vector<string> & values() const { DARABONBA_PTR_GET_CONST(values_, vector<string>) };
    inline vector<string> values() { DARABONBA_PTR_GET(values_, vector<string>) };
    inline DescribeComputeResourceUsageResponseBodyDataAcuInfo& setValues(const vector<string> & values) { DARABONBA_PTR_SET_VALUE(values_, values) };
    inline DescribeComputeResourceUsageResponseBodyDataAcuInfo& setValues(vector<string> && values) { DARABONBA_PTR_SET_RVALUE(values_, values) };


  protected:
    // The resource usage metric. Valid values:
    // 
    // *   `TotalAcuNumber`: the total number of ACUs.
    // *   `ReservedAcuNumber`: the number of ACUs for the reserved resources.
    // *   `ReservedAcuUsageNumber`: the number of ACUs for the reserved resources that are used.
    std::shared_ptr<string> name_ = nullptr;
    // The values of the metric at specific points in time.
    std::shared_ptr<vector<string>> values_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
