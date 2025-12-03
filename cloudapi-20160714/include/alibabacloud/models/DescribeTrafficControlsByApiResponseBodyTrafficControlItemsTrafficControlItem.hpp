// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBETRAFFICCONTROLSBYAPIRESPONSEBODYTRAFFICCONTROLITEMSTRAFFICCONTROLITEM_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBETRAFFICCONTROLSBYAPIRESPONSEBODYTRAFFICCONTROLITEMSTRAFFICCONTROLITEM_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class DescribeTrafficControlsByApiResponseBodyTrafficControlItemsTrafficControlItem : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeTrafficControlsByApiResponseBodyTrafficControlItemsTrafficControlItem& obj) { 
      DARABONBA_PTR_TO_JSON(BoundTime, boundTime_);
      DARABONBA_PTR_TO_JSON(TrafficControlItemId, trafficControlItemId_);
      DARABONBA_PTR_TO_JSON(TrafficControlItemName, trafficControlItemName_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeTrafficControlsByApiResponseBodyTrafficControlItemsTrafficControlItem& obj) { 
      DARABONBA_PTR_FROM_JSON(BoundTime, boundTime_);
      DARABONBA_PTR_FROM_JSON(TrafficControlItemId, trafficControlItemId_);
      DARABONBA_PTR_FROM_JSON(TrafficControlItemName, trafficControlItemName_);
    };
    DescribeTrafficControlsByApiResponseBodyTrafficControlItemsTrafficControlItem() = default ;
    DescribeTrafficControlsByApiResponseBodyTrafficControlItemsTrafficControlItem(const DescribeTrafficControlsByApiResponseBodyTrafficControlItemsTrafficControlItem &) = default ;
    DescribeTrafficControlsByApiResponseBodyTrafficControlItemsTrafficControlItem(DescribeTrafficControlsByApiResponseBodyTrafficControlItemsTrafficControlItem &&) = default ;
    DescribeTrafficControlsByApiResponseBodyTrafficControlItemsTrafficControlItem(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeTrafficControlsByApiResponseBodyTrafficControlItemsTrafficControlItem() = default ;
    DescribeTrafficControlsByApiResponseBodyTrafficControlItemsTrafficControlItem& operator=(const DescribeTrafficControlsByApiResponseBodyTrafficControlItemsTrafficControlItem &) = default ;
    DescribeTrafficControlsByApiResponseBodyTrafficControlItemsTrafficControlItem& operator=(DescribeTrafficControlsByApiResponseBodyTrafficControlItemsTrafficControlItem &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->boundTime_ == nullptr
        && return this->trafficControlItemId_ == nullptr && return this->trafficControlItemName_ == nullptr; };
    // boundTime Field Functions 
    bool hasBoundTime() const { return this->boundTime_ != nullptr;};
    void deleteBoundTime() { this->boundTime_ = nullptr;};
    inline string boundTime() const { DARABONBA_PTR_GET_DEFAULT(boundTime_, "") };
    inline DescribeTrafficControlsByApiResponseBodyTrafficControlItemsTrafficControlItem& setBoundTime(string boundTime) { DARABONBA_PTR_SET_VALUE(boundTime_, boundTime) };


    // trafficControlItemId Field Functions 
    bool hasTrafficControlItemId() const { return this->trafficControlItemId_ != nullptr;};
    void deleteTrafficControlItemId() { this->trafficControlItemId_ = nullptr;};
    inline string trafficControlItemId() const { DARABONBA_PTR_GET_DEFAULT(trafficControlItemId_, "") };
    inline DescribeTrafficControlsByApiResponseBodyTrafficControlItemsTrafficControlItem& setTrafficControlItemId(string trafficControlItemId) { DARABONBA_PTR_SET_VALUE(trafficControlItemId_, trafficControlItemId) };


    // trafficControlItemName Field Functions 
    bool hasTrafficControlItemName() const { return this->trafficControlItemName_ != nullptr;};
    void deleteTrafficControlItemName() { this->trafficControlItemName_ = nullptr;};
    inline string trafficControlItemName() const { DARABONBA_PTR_GET_DEFAULT(trafficControlItemName_, "") };
    inline DescribeTrafficControlsByApiResponseBodyTrafficControlItemsTrafficControlItem& setTrafficControlItemName(string trafficControlItemName) { DARABONBA_PTR_SET_VALUE(trafficControlItemName_, trafficControlItemName) };


  protected:
    // The binding time of the policy.
    std::shared_ptr<string> boundTime_ = nullptr;
    // The ID of the throttling policy.
    std::shared_ptr<string> trafficControlItemId_ = nullptr;
    // The name of the throttling policy.
    std::shared_ptr<string> trafficControlItemName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
