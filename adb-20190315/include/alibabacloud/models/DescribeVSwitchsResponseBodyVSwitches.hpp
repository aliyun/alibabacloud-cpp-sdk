// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVSWITCHSRESPONSEBODYVSWITCHES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVSWITCHSRESPONSEBODYVSWITCHES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeVSwitchsResponseBodyVSwitchesVSwitch.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20190315
{
namespace Models
{
  class DescribeVSwitchsResponseBodyVSwitches : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVSwitchsResponseBodyVSwitches& obj) { 
      DARABONBA_PTR_TO_JSON(VSwitch, vSwitch_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVSwitchsResponseBodyVSwitches& obj) { 
      DARABONBA_PTR_FROM_JSON(VSwitch, vSwitch_);
    };
    DescribeVSwitchsResponseBodyVSwitches() = default ;
    DescribeVSwitchsResponseBodyVSwitches(const DescribeVSwitchsResponseBodyVSwitches &) = default ;
    DescribeVSwitchsResponseBodyVSwitches(DescribeVSwitchsResponseBodyVSwitches &&) = default ;
    DescribeVSwitchsResponseBodyVSwitches(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVSwitchsResponseBodyVSwitches() = default ;
    DescribeVSwitchsResponseBodyVSwitches& operator=(const DescribeVSwitchsResponseBodyVSwitches &) = default ;
    DescribeVSwitchsResponseBodyVSwitches& operator=(DescribeVSwitchsResponseBodyVSwitches &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->vSwitch_ == nullptr; };
    // vSwitch Field Functions 
    bool hasVSwitch() const { return this->vSwitch_ != nullptr;};
    void deleteVSwitch() { this->vSwitch_ = nullptr;};
    inline const vector<Models::DescribeVSwitchsResponseBodyVSwitchesVSwitch> & vSwitch() const { DARABONBA_PTR_GET_CONST(vSwitch_, vector<Models::DescribeVSwitchsResponseBodyVSwitchesVSwitch>) };
    inline vector<Models::DescribeVSwitchsResponseBodyVSwitchesVSwitch> vSwitch() { DARABONBA_PTR_GET(vSwitch_, vector<Models::DescribeVSwitchsResponseBodyVSwitchesVSwitch>) };
    inline DescribeVSwitchsResponseBodyVSwitches& setVSwitch(const vector<Models::DescribeVSwitchsResponseBodyVSwitchesVSwitch> & vSwitch) { DARABONBA_PTR_SET_VALUE(vSwitch_, vSwitch) };
    inline DescribeVSwitchsResponseBodyVSwitches& setVSwitch(vector<Models::DescribeVSwitchsResponseBodyVSwitchesVSwitch> && vSwitch) { DARABONBA_PTR_SET_RVALUE(vSwitch_, vSwitch) };


  protected:
    // The queried vSwitch.
    std::shared_ptr<vector<Models::DescribeVSwitchsResponseBodyVSwitchesVSwitch>> vSwitch_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20190315
#endif
