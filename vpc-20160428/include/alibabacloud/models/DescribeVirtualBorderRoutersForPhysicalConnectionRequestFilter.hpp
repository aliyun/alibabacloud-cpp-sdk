// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVIRTUALBORDERROUTERSFORPHYSICALCONNECTIONREQUESTFILTER_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVIRTUALBORDERROUTERSFORPHYSICALCONNECTIONREQUESTFILTER_HPP_
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
  class DescribeVirtualBorderRoutersForPhysicalConnectionRequestFilter : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVirtualBorderRoutersForPhysicalConnectionRequestFilter& obj) { 
      DARABONBA_PTR_TO_JSON(Key, key_);
      DARABONBA_PTR_TO_JSON(Value, value_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVirtualBorderRoutersForPhysicalConnectionRequestFilter& obj) { 
      DARABONBA_PTR_FROM_JSON(Key, key_);
      DARABONBA_PTR_FROM_JSON(Value, value_);
    };
    DescribeVirtualBorderRoutersForPhysicalConnectionRequestFilter() = default ;
    DescribeVirtualBorderRoutersForPhysicalConnectionRequestFilter(const DescribeVirtualBorderRoutersForPhysicalConnectionRequestFilter &) = default ;
    DescribeVirtualBorderRoutersForPhysicalConnectionRequestFilter(DescribeVirtualBorderRoutersForPhysicalConnectionRequestFilter &&) = default ;
    DescribeVirtualBorderRoutersForPhysicalConnectionRequestFilter(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVirtualBorderRoutersForPhysicalConnectionRequestFilter() = default ;
    DescribeVirtualBorderRoutersForPhysicalConnectionRequestFilter& operator=(const DescribeVirtualBorderRoutersForPhysicalConnectionRequestFilter &) = default ;
    DescribeVirtualBorderRoutersForPhysicalConnectionRequestFilter& operator=(DescribeVirtualBorderRoutersForPhysicalConnectionRequestFilter &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->key_ == nullptr
        && return this->value_ == nullptr; };
    // key Field Functions 
    bool hasKey() const { return this->key_ != nullptr;};
    void deleteKey() { this->key_ = nullptr;};
    inline string key() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
    inline DescribeVirtualBorderRoutersForPhysicalConnectionRequestFilter& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline const vector<string> & value() const { DARABONBA_PTR_GET_CONST(value_, vector<string>) };
    inline vector<string> value() { DARABONBA_PTR_GET(value_, vector<string>) };
    inline DescribeVirtualBorderRoutersForPhysicalConnectionRequestFilter& setValue(const vector<string> & value) { DARABONBA_PTR_SET_VALUE(value_, value) };
    inline DescribeVirtualBorderRoutersForPhysicalConnectionRequestFilter& setValue(vector<string> && value) { DARABONBA_PTR_SET_RVALUE(value_, value) };


  protected:
    // The filter conditions. You can specify at most five filter conditions. The following filter conditions are supported:
    // 
    // *   **PhysicalConnectionId**: filter VBRs by the Express Connect circuit ID.
    // *   **VbrId**: filter VBRs by ID.
    // *   **Status**: filter VBRs by status.
    // *   **Name**: filter VBRs by name.
    // *   **AccessPointId**: filter VBRs by access point ID.
    // *   **eccId**: filter VBRs by ID of Express Cloud Connect (ECC) instance.
    // *   **type**: filter VBRs by type.
    std::shared_ptr<string> key_ = nullptr;
    // The filter value for the key. You can specify multiple filter values for one key. The logical operator among filter values is OR. If one filter value is matched, the filter condition is matched.
    std::shared_ptr<vector<string>> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
