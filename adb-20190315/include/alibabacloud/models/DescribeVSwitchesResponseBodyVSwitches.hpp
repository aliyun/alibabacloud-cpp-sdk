// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVSWITCHESRESPONSEBODYVSWITCHES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVSWITCHESRESPONSEBODYVSWITCHES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeVSwitchesResponseBodyVSwitchesVSwitch.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20190315
{
namespace Models
{
  class DescribeVSwitchesResponseBodyVSwitches : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVSwitchesResponseBodyVSwitches& obj) { 
      DARABONBA_PTR_TO_JSON(VSwitch, vSwitch_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVSwitchesResponseBodyVSwitches& obj) { 
      DARABONBA_PTR_FROM_JSON(VSwitch, vSwitch_);
    };
    DescribeVSwitchesResponseBodyVSwitches() = default ;
    DescribeVSwitchesResponseBodyVSwitches(const DescribeVSwitchesResponseBodyVSwitches &) = default ;
    DescribeVSwitchesResponseBodyVSwitches(DescribeVSwitchesResponseBodyVSwitches &&) = default ;
    DescribeVSwitchesResponseBodyVSwitches(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVSwitchesResponseBodyVSwitches() = default ;
    DescribeVSwitchesResponseBodyVSwitches& operator=(const DescribeVSwitchesResponseBodyVSwitches &) = default ;
    DescribeVSwitchesResponseBodyVSwitches& operator=(DescribeVSwitchesResponseBodyVSwitches &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->vSwitch_ == nullptr; };
    // vSwitch Field Functions 
    bool hasVSwitch() const { return this->vSwitch_ != nullptr;};
    void deleteVSwitch() { this->vSwitch_ = nullptr;};
    inline const vector<Models::DescribeVSwitchesResponseBodyVSwitchesVSwitch> & vSwitch() const { DARABONBA_PTR_GET_CONST(vSwitch_, vector<Models::DescribeVSwitchesResponseBodyVSwitchesVSwitch>) };
    inline vector<Models::DescribeVSwitchesResponseBodyVSwitchesVSwitch> vSwitch() { DARABONBA_PTR_GET(vSwitch_, vector<Models::DescribeVSwitchesResponseBodyVSwitchesVSwitch>) };
    inline DescribeVSwitchesResponseBodyVSwitches& setVSwitch(const vector<Models::DescribeVSwitchesResponseBodyVSwitchesVSwitch> & vSwitch) { DARABONBA_PTR_SET_VALUE(vSwitch_, vSwitch) };
    inline DescribeVSwitchesResponseBodyVSwitches& setVSwitch(vector<Models::DescribeVSwitchesResponseBodyVSwitchesVSwitch> && vSwitch) { DARABONBA_PTR_SET_RVALUE(vSwitch_, vSwitch) };


  protected:
    // The queried vSwitch.
    std::shared_ptr<vector<Models::DescribeVSwitchesResponseBodyVSwitchesVSwitch>> vSwitch_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20190315
#endif
