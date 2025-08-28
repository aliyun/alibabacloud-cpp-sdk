// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVSWITCHESRESPONSEBODYVSWITCHESVSWITCHROUTETABLE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVSWITCHESRESPONSEBODYVSWITCHESVSWITCHROUTETABLE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class DescribeVSwitchesResponseBodyVSwitchesVSwitchRouteTable : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVSwitchesResponseBodyVSwitchesVSwitchRouteTable& obj) { 
      DARABONBA_PTR_TO_JSON(RouteTableId, routeTableId_);
      DARABONBA_PTR_TO_JSON(RouteTableType, routeTableType_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVSwitchesResponseBodyVSwitchesVSwitchRouteTable& obj) { 
      DARABONBA_PTR_FROM_JSON(RouteTableId, routeTableId_);
      DARABONBA_PTR_FROM_JSON(RouteTableType, routeTableType_);
    };
    DescribeVSwitchesResponseBodyVSwitchesVSwitchRouteTable() = default ;
    DescribeVSwitchesResponseBodyVSwitchesVSwitchRouteTable(const DescribeVSwitchesResponseBodyVSwitchesVSwitchRouteTable &) = default ;
    DescribeVSwitchesResponseBodyVSwitchesVSwitchRouteTable(DescribeVSwitchesResponseBodyVSwitchesVSwitchRouteTable &&) = default ;
    DescribeVSwitchesResponseBodyVSwitchesVSwitchRouteTable(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVSwitchesResponseBodyVSwitchesVSwitchRouteTable() = default ;
    DescribeVSwitchesResponseBodyVSwitchesVSwitchRouteTable& operator=(const DescribeVSwitchesResponseBodyVSwitchesVSwitchRouteTable &) = default ;
    DescribeVSwitchesResponseBodyVSwitchesVSwitchRouteTable& operator=(DescribeVSwitchesResponseBodyVSwitchesVSwitchRouteTable &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->routeTableId_ != nullptr
        && this->routeTableType_ != nullptr; };
    // routeTableId Field Functions 
    bool hasRouteTableId() const { return this->routeTableId_ != nullptr;};
    void deleteRouteTableId() { this->routeTableId_ = nullptr;};
    inline string routeTableId() const { DARABONBA_PTR_GET_DEFAULT(routeTableId_, "") };
    inline DescribeVSwitchesResponseBodyVSwitchesVSwitchRouteTable& setRouteTableId(string routeTableId) { DARABONBA_PTR_SET_VALUE(routeTableId_, routeTableId) };


    // routeTableType Field Functions 
    bool hasRouteTableType() const { return this->routeTableType_ != nullptr;};
    void deleteRouteTableType() { this->routeTableType_ = nullptr;};
    inline string routeTableType() const { DARABONBA_PTR_GET_DEFAULT(routeTableType_, "") };
    inline DescribeVSwitchesResponseBodyVSwitchesVSwitchRouteTable& setRouteTableType(string routeTableType) { DARABONBA_PTR_SET_VALUE(routeTableType_, routeTableType) };


  protected:
    // The ID of the route table that is associated with the vSwitch.
    std::shared_ptr<string> routeTableId_ = nullptr;
    // The type of the route table. Valid values:
    // 
    // *   **System**
    // *   **Custom**
    std::shared_ptr<string> routeTableType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
