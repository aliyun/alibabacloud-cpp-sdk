// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERDSVSWITCHSRESPONSEBODYVSWITCHES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERDSVSWITCHSRESPONSEBODYVSWITCHES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeRdsVSwitchsResponseBodyVSwitchesVSwitch.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class DescribeRdsVSwitchsResponseBodyVSwitches : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRdsVSwitchsResponseBodyVSwitches& obj) { 
      DARABONBA_PTR_TO_JSON(VSwitch, vSwitch_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRdsVSwitchsResponseBodyVSwitches& obj) { 
      DARABONBA_PTR_FROM_JSON(VSwitch, vSwitch_);
    };
    DescribeRdsVSwitchsResponseBodyVSwitches() = default ;
    DescribeRdsVSwitchsResponseBodyVSwitches(const DescribeRdsVSwitchsResponseBodyVSwitches &) = default ;
    DescribeRdsVSwitchsResponseBodyVSwitches(DescribeRdsVSwitchsResponseBodyVSwitches &&) = default ;
    DescribeRdsVSwitchsResponseBodyVSwitches(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRdsVSwitchsResponseBodyVSwitches() = default ;
    DescribeRdsVSwitchsResponseBodyVSwitches& operator=(const DescribeRdsVSwitchsResponseBodyVSwitches &) = default ;
    DescribeRdsVSwitchsResponseBodyVSwitches& operator=(DescribeRdsVSwitchsResponseBodyVSwitches &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->vSwitch_ == nullptr; };
    // vSwitch Field Functions 
    bool hasVSwitch() const { return this->vSwitch_ != nullptr;};
    void deleteVSwitch() { this->vSwitch_ = nullptr;};
    inline const vector<Models::DescribeRdsVSwitchsResponseBodyVSwitchesVSwitch> & vSwitch() const { DARABONBA_PTR_GET_CONST(vSwitch_, vector<Models::DescribeRdsVSwitchsResponseBodyVSwitchesVSwitch>) };
    inline vector<Models::DescribeRdsVSwitchsResponseBodyVSwitchesVSwitch> vSwitch() { DARABONBA_PTR_GET(vSwitch_, vector<Models::DescribeRdsVSwitchsResponseBodyVSwitchesVSwitch>) };
    inline DescribeRdsVSwitchsResponseBodyVSwitches& setVSwitch(const vector<Models::DescribeRdsVSwitchsResponseBodyVSwitchesVSwitch> & vSwitch) { DARABONBA_PTR_SET_VALUE(vSwitch_, vSwitch) };
    inline DescribeRdsVSwitchsResponseBodyVSwitches& setVSwitch(vector<Models::DescribeRdsVSwitchsResponseBodyVSwitchesVSwitch> && vSwitch) { DARABONBA_PTR_SET_RVALUE(vSwitch_, vSwitch) };


  protected:
    std::shared_ptr<vector<Models::DescribeRdsVSwitchsResponseBodyVSwitchesVSwitch>> vSwitch_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
