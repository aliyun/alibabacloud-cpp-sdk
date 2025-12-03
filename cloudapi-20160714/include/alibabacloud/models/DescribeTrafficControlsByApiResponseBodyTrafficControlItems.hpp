// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBETRAFFICCONTROLSBYAPIRESPONSEBODYTRAFFICCONTROLITEMS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBETRAFFICCONTROLSBYAPIRESPONSEBODYTRAFFICCONTROLITEMS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeTrafficControlsByApiResponseBodyTrafficControlItemsTrafficControlItem.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class DescribeTrafficControlsByApiResponseBodyTrafficControlItems : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeTrafficControlsByApiResponseBodyTrafficControlItems& obj) { 
      DARABONBA_PTR_TO_JSON(TrafficControlItem, trafficControlItem_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeTrafficControlsByApiResponseBodyTrafficControlItems& obj) { 
      DARABONBA_PTR_FROM_JSON(TrafficControlItem, trafficControlItem_);
    };
    DescribeTrafficControlsByApiResponseBodyTrafficControlItems() = default ;
    DescribeTrafficControlsByApiResponseBodyTrafficControlItems(const DescribeTrafficControlsByApiResponseBodyTrafficControlItems &) = default ;
    DescribeTrafficControlsByApiResponseBodyTrafficControlItems(DescribeTrafficControlsByApiResponseBodyTrafficControlItems &&) = default ;
    DescribeTrafficControlsByApiResponseBodyTrafficControlItems(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeTrafficControlsByApiResponseBodyTrafficControlItems() = default ;
    DescribeTrafficControlsByApiResponseBodyTrafficControlItems& operator=(const DescribeTrafficControlsByApiResponseBodyTrafficControlItems &) = default ;
    DescribeTrafficControlsByApiResponseBodyTrafficControlItems& operator=(DescribeTrafficControlsByApiResponseBodyTrafficControlItems &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->trafficControlItem_ == nullptr; };
    // trafficControlItem Field Functions 
    bool hasTrafficControlItem() const { return this->trafficControlItem_ != nullptr;};
    void deleteTrafficControlItem() { this->trafficControlItem_ = nullptr;};
    inline const vector<Models::DescribeTrafficControlsByApiResponseBodyTrafficControlItemsTrafficControlItem> & trafficControlItem() const { DARABONBA_PTR_GET_CONST(trafficControlItem_, vector<Models::DescribeTrafficControlsByApiResponseBodyTrafficControlItemsTrafficControlItem>) };
    inline vector<Models::DescribeTrafficControlsByApiResponseBodyTrafficControlItemsTrafficControlItem> trafficControlItem() { DARABONBA_PTR_GET(trafficControlItem_, vector<Models::DescribeTrafficControlsByApiResponseBodyTrafficControlItemsTrafficControlItem>) };
    inline DescribeTrafficControlsByApiResponseBodyTrafficControlItems& setTrafficControlItem(const vector<Models::DescribeTrafficControlsByApiResponseBodyTrafficControlItemsTrafficControlItem> & trafficControlItem) { DARABONBA_PTR_SET_VALUE(trafficControlItem_, trafficControlItem) };
    inline DescribeTrafficControlsByApiResponseBodyTrafficControlItems& setTrafficControlItem(vector<Models::DescribeTrafficControlsByApiResponseBodyTrafficControlItemsTrafficControlItem> && trafficControlItem) { DARABONBA_PTR_SET_RVALUE(trafficControlItem_, trafficControlItem) };


  protected:
    std::shared_ptr<vector<Models::DescribeTrafficControlsByApiResponseBodyTrafficControlItemsTrafficControlItem>> trafficControlItem_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
