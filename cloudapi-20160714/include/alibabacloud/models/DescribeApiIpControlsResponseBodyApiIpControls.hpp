// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAPIIPCONTROLSRESPONSEBODYAPIIPCONTROLS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAPIIPCONTROLSRESPONSEBODYAPIIPCONTROLS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeApiIpControlsResponseBodyApiIpControlsApiIpControlItem.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class DescribeApiIpControlsResponseBodyApiIpControls : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeApiIpControlsResponseBodyApiIpControls& obj) { 
      DARABONBA_PTR_TO_JSON(ApiIpControlItem, apiIpControlItem_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeApiIpControlsResponseBodyApiIpControls& obj) { 
      DARABONBA_PTR_FROM_JSON(ApiIpControlItem, apiIpControlItem_);
    };
    DescribeApiIpControlsResponseBodyApiIpControls() = default ;
    DescribeApiIpControlsResponseBodyApiIpControls(const DescribeApiIpControlsResponseBodyApiIpControls &) = default ;
    DescribeApiIpControlsResponseBodyApiIpControls(DescribeApiIpControlsResponseBodyApiIpControls &&) = default ;
    DescribeApiIpControlsResponseBodyApiIpControls(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeApiIpControlsResponseBodyApiIpControls() = default ;
    DescribeApiIpControlsResponseBodyApiIpControls& operator=(const DescribeApiIpControlsResponseBodyApiIpControls &) = default ;
    DescribeApiIpControlsResponseBodyApiIpControls& operator=(DescribeApiIpControlsResponseBodyApiIpControls &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->apiIpControlItem_ == nullptr; };
    // apiIpControlItem Field Functions 
    bool hasApiIpControlItem() const { return this->apiIpControlItem_ != nullptr;};
    void deleteApiIpControlItem() { this->apiIpControlItem_ = nullptr;};
    inline const vector<Models::DescribeApiIpControlsResponseBodyApiIpControlsApiIpControlItem> & apiIpControlItem() const { DARABONBA_PTR_GET_CONST(apiIpControlItem_, vector<Models::DescribeApiIpControlsResponseBodyApiIpControlsApiIpControlItem>) };
    inline vector<Models::DescribeApiIpControlsResponseBodyApiIpControlsApiIpControlItem> apiIpControlItem() { DARABONBA_PTR_GET(apiIpControlItem_, vector<Models::DescribeApiIpControlsResponseBodyApiIpControlsApiIpControlItem>) };
    inline DescribeApiIpControlsResponseBodyApiIpControls& setApiIpControlItem(const vector<Models::DescribeApiIpControlsResponseBodyApiIpControlsApiIpControlItem> & apiIpControlItem) { DARABONBA_PTR_SET_VALUE(apiIpControlItem_, apiIpControlItem) };
    inline DescribeApiIpControlsResponseBodyApiIpControls& setApiIpControlItem(vector<Models::DescribeApiIpControlsResponseBodyApiIpControlsApiIpControlItem> && apiIpControlItem) { DARABONBA_PTR_SET_RVALUE(apiIpControlItem_, apiIpControlItem) };


  protected:
    std::shared_ptr<vector<Models::DescribeApiIpControlsResponseBodyApiIpControlsApiIpControlItem>> apiIpControlItem_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
