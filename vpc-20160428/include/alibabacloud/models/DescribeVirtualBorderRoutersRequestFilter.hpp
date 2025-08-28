// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVIRTUALBORDERROUTERSREQUESTFILTER_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVIRTUALBORDERROUTERSREQUESTFILTER_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class DescribeVirtualBorderRoutersRequestFilter : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVirtualBorderRoutersRequestFilter& obj) { 
      DARABONBA_PTR_TO_JSON(Key, key_);
      DARABONBA_PTR_TO_JSON(Value, value_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVirtualBorderRoutersRequestFilter& obj) { 
      DARABONBA_PTR_FROM_JSON(Key, key_);
      DARABONBA_PTR_FROM_JSON(Value, value_);
    };
    DescribeVirtualBorderRoutersRequestFilter() = default ;
    DescribeVirtualBorderRoutersRequestFilter(const DescribeVirtualBorderRoutersRequestFilter &) = default ;
    DescribeVirtualBorderRoutersRequestFilter(DescribeVirtualBorderRoutersRequestFilter &&) = default ;
    DescribeVirtualBorderRoutersRequestFilter(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVirtualBorderRoutersRequestFilter() = default ;
    DescribeVirtualBorderRoutersRequestFilter& operator=(const DescribeVirtualBorderRoutersRequestFilter &) = default ;
    DescribeVirtualBorderRoutersRequestFilter& operator=(DescribeVirtualBorderRoutersRequestFilter &&) = default ;
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
    inline DescribeVirtualBorderRoutersRequestFilter& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline const vector<string> & value() const { DARABONBA_PTR_GET_CONST(value_, vector<string>) };
    inline vector<string> value() { DARABONBA_PTR_GET(value_, vector<string>) };
    inline DescribeVirtualBorderRoutersRequestFilter& setValue(const vector<string> & value) { DARABONBA_PTR_SET_VALUE(value_, value) };
    inline DescribeVirtualBorderRoutersRequestFilter& setValue(vector<string> && value) { DARABONBA_PTR_SET_RVALUE(value_, value) };


  protected:
    // The filter conditions. You can specify up to five filter conditions. Valid values:
    // 
    // *   **PhysicalConnectionId**: Filter by Express Connect circuit ID.
    // *   **VbrId**: Filter by VBR ID.
    // *   **Status**: Filter by VBR status.
    // *   **Name**: Filter by VBR name.
    // *   **AccessPointId**: Filter by access point ID.
    // *   **eccId:** Filter by Express Cloud Connect (ECC) instance ID.
    // *   **type**: Filter by Express Connect circuit type.
    std::shared_ptr<string> key_ = nullptr;
    // The filter values for keys. You can specify multiple filter values for one key. The logical operator between filter values is OR. If one filter value is matched, the filter condition is matched.
    std::shared_ptr<vector<string>> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
