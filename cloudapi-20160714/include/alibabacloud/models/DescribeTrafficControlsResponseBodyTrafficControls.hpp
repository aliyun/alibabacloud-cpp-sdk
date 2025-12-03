// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBETRAFFICCONTROLSRESPONSEBODYTRAFFICCONTROLS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBETRAFFICCONTROLSRESPONSEBODYTRAFFICCONTROLS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeTrafficControlsResponseBodyTrafficControlsTrafficControl.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class DescribeTrafficControlsResponseBodyTrafficControls : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeTrafficControlsResponseBodyTrafficControls& obj) { 
      DARABONBA_PTR_TO_JSON(TrafficControl, trafficControl_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeTrafficControlsResponseBodyTrafficControls& obj) { 
      DARABONBA_PTR_FROM_JSON(TrafficControl, trafficControl_);
    };
    DescribeTrafficControlsResponseBodyTrafficControls() = default ;
    DescribeTrafficControlsResponseBodyTrafficControls(const DescribeTrafficControlsResponseBodyTrafficControls &) = default ;
    DescribeTrafficControlsResponseBodyTrafficControls(DescribeTrafficControlsResponseBodyTrafficControls &&) = default ;
    DescribeTrafficControlsResponseBodyTrafficControls(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeTrafficControlsResponseBodyTrafficControls() = default ;
    DescribeTrafficControlsResponseBodyTrafficControls& operator=(const DescribeTrafficControlsResponseBodyTrafficControls &) = default ;
    DescribeTrafficControlsResponseBodyTrafficControls& operator=(DescribeTrafficControlsResponseBodyTrafficControls &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->trafficControl_ == nullptr; };
    // trafficControl Field Functions 
    bool hasTrafficControl() const { return this->trafficControl_ != nullptr;};
    void deleteTrafficControl() { this->trafficControl_ = nullptr;};
    inline const vector<Models::DescribeTrafficControlsResponseBodyTrafficControlsTrafficControl> & trafficControl() const { DARABONBA_PTR_GET_CONST(trafficControl_, vector<Models::DescribeTrafficControlsResponseBodyTrafficControlsTrafficControl>) };
    inline vector<Models::DescribeTrafficControlsResponseBodyTrafficControlsTrafficControl> trafficControl() { DARABONBA_PTR_GET(trafficControl_, vector<Models::DescribeTrafficControlsResponseBodyTrafficControlsTrafficControl>) };
    inline DescribeTrafficControlsResponseBodyTrafficControls& setTrafficControl(const vector<Models::DescribeTrafficControlsResponseBodyTrafficControlsTrafficControl> & trafficControl) { DARABONBA_PTR_SET_VALUE(trafficControl_, trafficControl) };
    inline DescribeTrafficControlsResponseBodyTrafficControls& setTrafficControl(vector<Models::DescribeTrafficControlsResponseBodyTrafficControlsTrafficControl> && trafficControl) { DARABONBA_PTR_SET_RVALUE(trafficControl_, trafficControl) };


  protected:
    std::shared_ptr<vector<Models::DescribeTrafficControlsResponseBodyTrafficControlsTrafficControl>> trafficControl_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
