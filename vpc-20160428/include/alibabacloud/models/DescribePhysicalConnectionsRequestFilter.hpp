// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPHYSICALCONNECTIONSREQUESTFILTER_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPHYSICALCONNECTIONSREQUESTFILTER_HPP_
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
  class DescribePhysicalConnectionsRequestFilter : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePhysicalConnectionsRequestFilter& obj) { 
      DARABONBA_PTR_TO_JSON(Key, key_);
      DARABONBA_PTR_TO_JSON(Value, value_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePhysicalConnectionsRequestFilter& obj) { 
      DARABONBA_PTR_FROM_JSON(Key, key_);
      DARABONBA_PTR_FROM_JSON(Value, value_);
    };
    DescribePhysicalConnectionsRequestFilter() = default ;
    DescribePhysicalConnectionsRequestFilter(const DescribePhysicalConnectionsRequestFilter &) = default ;
    DescribePhysicalConnectionsRequestFilter(DescribePhysicalConnectionsRequestFilter &&) = default ;
    DescribePhysicalConnectionsRequestFilter(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePhysicalConnectionsRequestFilter() = default ;
    DescribePhysicalConnectionsRequestFilter& operator=(const DescribePhysicalConnectionsRequestFilter &) = default ;
    DescribePhysicalConnectionsRequestFilter& operator=(DescribePhysicalConnectionsRequestFilter &&) = default ;
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
    inline DescribePhysicalConnectionsRequestFilter& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline const vector<string> & value() const { DARABONBA_PTR_GET_CONST(value_, vector<string>) };
    inline vector<string> value() { DARABONBA_PTR_GET(value_, vector<string>) };
    inline DescribePhysicalConnectionsRequestFilter& setValue(const vector<string> & value) { DARABONBA_PTR_SET_VALUE(value_, value) };
    inline DescribePhysicalConnectionsRequestFilter& setValue(vector<string> && value) { DARABONBA_PTR_SET_RVALUE(value_, value) };


  protected:
    // The key of the filter. Valid values:
    // 
    // *   **PhysicalConnectionId**: the ID of the Express Connect circuit.
    // 
    // *   **AccessPointId**: the ID of the access point.
    // 
    // *   **Type**: the type of resource to which the Express Connect circuit is connected. You can set Type only to **VPC**.
    // 
    // *   **LineOperator**: the connectivity provider of the Express Connect circuit. Valid values:
    // 
    //     *   **CT**: China Telecom.
    //     *   **CU**: China Unicom.
    //     *   **CM**: China Mobile.
    //     *   **CO**: other connectivity providers in the Chinese mainland.
    //     *   **Equinix**: Equinix.
    //     *   **Other**: other connectivity providers outside the Chinese mainland.
    // 
    // *   **Spec**: the specification of the Express Connect circuit. Valid values:
    // 
    //     *   **1G and below**
    //     *   **10G**
    //     *   **40G**
    //     *   **100G**
    // 
    // >  By default, you cannot set the value to **40G** or **100G**. To use these values, you must first contact your account manager.
    // 
    // *   **Status**: the status of the Express Connect circuit. Valid values:
    // 
    //     *   **Initial**: The application is under review.
    //     *   **Approved**: The application is approved.
    //     *   **Allocating**: The system is allocating resources.
    //     *   **Allocated**: The Express Connect circuit is under construction.
    //     *   **Confirmed**: The Express Connect circuit is pending for user confirmation.
    //     *   **Enabled**: The Express Connect circuit is enabled.
    //     *   **Rejected**: The application is rejected.
    //     *   **Canceled**: The application is canceled.
    //     *   **Allocation Failed**: The system failed to allocate resources.
    //     *   **Terminating**: The Express Connect circuit is being disabled.
    //     *   **Terminated**: The Express Connect circuit is disabled.
    // 
    // *   **Name**: the name of the Express Connect circuit.
    // 
    // *   **ProductType**: the type of the Express Connect circuit. Valid values:
    // 
    //     *   **VirtualPhysicalConnection**: shared Express Connect circuit
    //     *   **PhysicalConnection**: dedicated Express Connect circuit.
    // 
    // You can specify at most five filter conditions in each request. The logical relation among the filter conditions is **AND**. Therefore, an Express Connect circuit is returned only when all specified filter conditions are matched.
    std::shared_ptr<string> key_ = nullptr;
    // The filter values.
    std::shared_ptr<vector<string>> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
