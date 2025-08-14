// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECENBANDWIDTHPACKAGESREQUESTFILTER_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECENBANDWIDTHPACKAGESREQUESTFILTER_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cbn20170912
{
namespace Models
{
  class DescribeCenBandwidthPackagesRequestFilter : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCenBandwidthPackagesRequestFilter& obj) { 
      DARABONBA_PTR_TO_JSON(Key, key_);
      DARABONBA_PTR_TO_JSON(Value, value_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCenBandwidthPackagesRequestFilter& obj) { 
      DARABONBA_PTR_FROM_JSON(Key, key_);
      DARABONBA_PTR_FROM_JSON(Value, value_);
    };
    DescribeCenBandwidthPackagesRequestFilter() = default ;
    DescribeCenBandwidthPackagesRequestFilter(const DescribeCenBandwidthPackagesRequestFilter &) = default ;
    DescribeCenBandwidthPackagesRequestFilter(DescribeCenBandwidthPackagesRequestFilter &&) = default ;
    DescribeCenBandwidthPackagesRequestFilter(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCenBandwidthPackagesRequestFilter() = default ;
    DescribeCenBandwidthPackagesRequestFilter& operator=(const DescribeCenBandwidthPackagesRequestFilter &) = default ;
    DescribeCenBandwidthPackagesRequestFilter& operator=(DescribeCenBandwidthPackagesRequestFilter &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->key_ != nullptr
        && this->value_ != nullptr; };
    // key Field Functions 
    bool hasKey() const { return this->key_ != nullptr;};
    void deleteKey() { this->key_ = nullptr;};
    inline string key() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
    inline DescribeCenBandwidthPackagesRequestFilter& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline const vector<string> & value() const { DARABONBA_PTR_GET_CONST(value_, vector<string>) };
    inline vector<string> value() { DARABONBA_PTR_GET(value_, vector<string>) };
    inline DescribeCenBandwidthPackagesRequestFilter& setValue(const vector<string> & value) { DARABONBA_PTR_SET_VALUE(value_, value) };
    inline DescribeCenBandwidthPackagesRequestFilter& setValue(vector<string> && value) { DARABONBA_PTR_SET_RVALUE(value_, value) };


  protected:
    // The filter conditions. You can use filter conditions to filter the bandwidth plans that you want to query. The following filter conditions are supported:
    // 
    // *   **CenId**: CEN instance ID
    // 
    // *   **Status**: bandwidth plan status. Valid values:
    // 
    //     *   **Idle**: not associated with a CEN instance.
    //     *   **InUse**: associated with a CEN instance.
    // 
    // *   **CenBandwidthPackageId**: bandwidth plan ID
    // 
    // *   **Name**: bandwidth plan name You can specify one or more filter conditions. The maximum value of **N** is **5**.
    std::shared_ptr<string> key_ = nullptr;
    // Specify a filter value based on the **Key** parameter. You can specify multiple filter values for each **Key**. The logical operator between filter values is **OR**. If one filter value is matched, the filter condition is matched.
    std::shared_ptr<vector<string>> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cbn20170912
#endif
