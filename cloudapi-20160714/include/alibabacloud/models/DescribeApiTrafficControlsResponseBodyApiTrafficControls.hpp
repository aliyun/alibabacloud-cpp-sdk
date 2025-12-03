// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAPITRAFFICCONTROLSRESPONSEBODYAPITRAFFICCONTROLS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAPITRAFFICCONTROLSRESPONSEBODYAPITRAFFICCONTROLS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeApiTrafficControlsResponseBodyApiTrafficControlsApiTrafficControlItem.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class DescribeApiTrafficControlsResponseBodyApiTrafficControls : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeApiTrafficControlsResponseBodyApiTrafficControls& obj) { 
      DARABONBA_PTR_TO_JSON(ApiTrafficControlItem, apiTrafficControlItem_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeApiTrafficControlsResponseBodyApiTrafficControls& obj) { 
      DARABONBA_PTR_FROM_JSON(ApiTrafficControlItem, apiTrafficControlItem_);
    };
    DescribeApiTrafficControlsResponseBodyApiTrafficControls() = default ;
    DescribeApiTrafficControlsResponseBodyApiTrafficControls(const DescribeApiTrafficControlsResponseBodyApiTrafficControls &) = default ;
    DescribeApiTrafficControlsResponseBodyApiTrafficControls(DescribeApiTrafficControlsResponseBodyApiTrafficControls &&) = default ;
    DescribeApiTrafficControlsResponseBodyApiTrafficControls(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeApiTrafficControlsResponseBodyApiTrafficControls() = default ;
    DescribeApiTrafficControlsResponseBodyApiTrafficControls& operator=(const DescribeApiTrafficControlsResponseBodyApiTrafficControls &) = default ;
    DescribeApiTrafficControlsResponseBodyApiTrafficControls& operator=(DescribeApiTrafficControlsResponseBodyApiTrafficControls &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->apiTrafficControlItem_ == nullptr; };
    // apiTrafficControlItem Field Functions 
    bool hasApiTrafficControlItem() const { return this->apiTrafficControlItem_ != nullptr;};
    void deleteApiTrafficControlItem() { this->apiTrafficControlItem_ = nullptr;};
    inline const vector<Models::DescribeApiTrafficControlsResponseBodyApiTrafficControlsApiTrafficControlItem> & apiTrafficControlItem() const { DARABONBA_PTR_GET_CONST(apiTrafficControlItem_, vector<Models::DescribeApiTrafficControlsResponseBodyApiTrafficControlsApiTrafficControlItem>) };
    inline vector<Models::DescribeApiTrafficControlsResponseBodyApiTrafficControlsApiTrafficControlItem> apiTrafficControlItem() { DARABONBA_PTR_GET(apiTrafficControlItem_, vector<Models::DescribeApiTrafficControlsResponseBodyApiTrafficControlsApiTrafficControlItem>) };
    inline DescribeApiTrafficControlsResponseBodyApiTrafficControls& setApiTrafficControlItem(const vector<Models::DescribeApiTrafficControlsResponseBodyApiTrafficControlsApiTrafficControlItem> & apiTrafficControlItem) { DARABONBA_PTR_SET_VALUE(apiTrafficControlItem_, apiTrafficControlItem) };
    inline DescribeApiTrafficControlsResponseBodyApiTrafficControls& setApiTrafficControlItem(vector<Models::DescribeApiTrafficControlsResponseBodyApiTrafficControlsApiTrafficControlItem> && apiTrafficControlItem) { DARABONBA_PTR_SET_RVALUE(apiTrafficControlItem_, apiTrafficControlItem) };


  protected:
    std::shared_ptr<vector<Models::DescribeApiTrafficControlsResponseBodyApiTrafficControlsApiTrafficControlItem>> apiTrafficControlItem_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
