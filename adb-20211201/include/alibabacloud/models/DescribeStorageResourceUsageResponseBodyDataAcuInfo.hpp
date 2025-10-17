// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESTORAGERESOURCEUSAGERESPONSEBODYDATAACUINFO_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESTORAGERESOURCEUSAGERESPONSEBODYDATAACUINFO_HPP_
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
  class DescribeStorageResourceUsageResponseBodyDataAcuInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeStorageResourceUsageResponseBodyDataAcuInfo& obj) { 
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Values, values_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeStorageResourceUsageResponseBodyDataAcuInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Values, values_);
    };
    DescribeStorageResourceUsageResponseBodyDataAcuInfo() = default ;
    DescribeStorageResourceUsageResponseBodyDataAcuInfo(const DescribeStorageResourceUsageResponseBodyDataAcuInfo &) = default ;
    DescribeStorageResourceUsageResponseBodyDataAcuInfo(DescribeStorageResourceUsageResponseBodyDataAcuInfo &&) = default ;
    DescribeStorageResourceUsageResponseBodyDataAcuInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeStorageResourceUsageResponseBodyDataAcuInfo() = default ;
    DescribeStorageResourceUsageResponseBodyDataAcuInfo& operator=(const DescribeStorageResourceUsageResponseBodyDataAcuInfo &) = default ;
    DescribeStorageResourceUsageResponseBodyDataAcuInfo& operator=(DescribeStorageResourceUsageResponseBodyDataAcuInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->name_ == nullptr
        && return this->values_ == nullptr; };
    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeStorageResourceUsageResponseBodyDataAcuInfo& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // values Field Functions 
    bool hasValues() const { return this->values_ != nullptr;};
    void deleteValues() { this->values_ = nullptr;};
    inline const vector<string> & values() const { DARABONBA_PTR_GET_CONST(values_, vector<string>) };
    inline vector<string> values() { DARABONBA_PTR_GET(values_, vector<string>) };
    inline DescribeStorageResourceUsageResponseBodyDataAcuInfo& setValues(const vector<string> & values) { DARABONBA_PTR_SET_VALUE(values_, values) };
    inline DescribeStorageResourceUsageResponseBodyDataAcuInfo& setValues(vector<string> && values) { DARABONBA_PTR_SET_RVALUE(values_, values) };


  protected:
    // The resource usage metric. Valid values:
    // 
    // *   `TotalAcuNumber`: the total number of ACUs.
    // *   `ReservedAcuNumber`: the number of ACUs for the reserved resources.
    std::shared_ptr<string> name_ = nullptr;
    // The values of the metric at specific points in time.
    std::shared_ptr<vector<string>> values_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
