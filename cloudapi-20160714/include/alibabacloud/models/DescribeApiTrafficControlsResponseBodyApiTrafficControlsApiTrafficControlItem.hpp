// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAPITRAFFICCONTROLSRESPONSEBODYAPITRAFFICCONTROLSAPITRAFFICCONTROLITEM_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAPITRAFFICCONTROLSRESPONSEBODYAPITRAFFICCONTROLSAPITRAFFICCONTROLITEM_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class DescribeApiTrafficControlsResponseBodyApiTrafficControlsApiTrafficControlItem : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeApiTrafficControlsResponseBodyApiTrafficControlsApiTrafficControlItem& obj) { 
      DARABONBA_PTR_TO_JSON(ApiId, apiId_);
      DARABONBA_PTR_TO_JSON(ApiName, apiName_);
      DARABONBA_PTR_TO_JSON(BoundTime, boundTime_);
      DARABONBA_PTR_TO_JSON(TrafficControlId, trafficControlId_);
      DARABONBA_PTR_TO_JSON(TrafficControlName, trafficControlName_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeApiTrafficControlsResponseBodyApiTrafficControlsApiTrafficControlItem& obj) { 
      DARABONBA_PTR_FROM_JSON(ApiId, apiId_);
      DARABONBA_PTR_FROM_JSON(ApiName, apiName_);
      DARABONBA_PTR_FROM_JSON(BoundTime, boundTime_);
      DARABONBA_PTR_FROM_JSON(TrafficControlId, trafficControlId_);
      DARABONBA_PTR_FROM_JSON(TrafficControlName, trafficControlName_);
    };
    DescribeApiTrafficControlsResponseBodyApiTrafficControlsApiTrafficControlItem() = default ;
    DescribeApiTrafficControlsResponseBodyApiTrafficControlsApiTrafficControlItem(const DescribeApiTrafficControlsResponseBodyApiTrafficControlsApiTrafficControlItem &) = default ;
    DescribeApiTrafficControlsResponseBodyApiTrafficControlsApiTrafficControlItem(DescribeApiTrafficControlsResponseBodyApiTrafficControlsApiTrafficControlItem &&) = default ;
    DescribeApiTrafficControlsResponseBodyApiTrafficControlsApiTrafficControlItem(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeApiTrafficControlsResponseBodyApiTrafficControlsApiTrafficControlItem() = default ;
    DescribeApiTrafficControlsResponseBodyApiTrafficControlsApiTrafficControlItem& operator=(const DescribeApiTrafficControlsResponseBodyApiTrafficControlsApiTrafficControlItem &) = default ;
    DescribeApiTrafficControlsResponseBodyApiTrafficControlsApiTrafficControlItem& operator=(DescribeApiTrafficControlsResponseBodyApiTrafficControlsApiTrafficControlItem &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->apiId_ == nullptr
        && return this->apiName_ == nullptr && return this->boundTime_ == nullptr && return this->trafficControlId_ == nullptr && return this->trafficControlName_ == nullptr; };
    // apiId Field Functions 
    bool hasApiId() const { return this->apiId_ != nullptr;};
    void deleteApiId() { this->apiId_ = nullptr;};
    inline string apiId() const { DARABONBA_PTR_GET_DEFAULT(apiId_, "") };
    inline DescribeApiTrafficControlsResponseBodyApiTrafficControlsApiTrafficControlItem& setApiId(string apiId) { DARABONBA_PTR_SET_VALUE(apiId_, apiId) };


    // apiName Field Functions 
    bool hasApiName() const { return this->apiName_ != nullptr;};
    void deleteApiName() { this->apiName_ = nullptr;};
    inline string apiName() const { DARABONBA_PTR_GET_DEFAULT(apiName_, "") };
    inline DescribeApiTrafficControlsResponseBodyApiTrafficControlsApiTrafficControlItem& setApiName(string apiName) { DARABONBA_PTR_SET_VALUE(apiName_, apiName) };


    // boundTime Field Functions 
    bool hasBoundTime() const { return this->boundTime_ != nullptr;};
    void deleteBoundTime() { this->boundTime_ = nullptr;};
    inline string boundTime() const { DARABONBA_PTR_GET_DEFAULT(boundTime_, "") };
    inline DescribeApiTrafficControlsResponseBodyApiTrafficControlsApiTrafficControlItem& setBoundTime(string boundTime) { DARABONBA_PTR_SET_VALUE(boundTime_, boundTime) };


    // trafficControlId Field Functions 
    bool hasTrafficControlId() const { return this->trafficControlId_ != nullptr;};
    void deleteTrafficControlId() { this->trafficControlId_ = nullptr;};
    inline string trafficControlId() const { DARABONBA_PTR_GET_DEFAULT(trafficControlId_, "") };
    inline DescribeApiTrafficControlsResponseBodyApiTrafficControlsApiTrafficControlItem& setTrafficControlId(string trafficControlId) { DARABONBA_PTR_SET_VALUE(trafficControlId_, trafficControlId) };


    // trafficControlName Field Functions 
    bool hasTrafficControlName() const { return this->trafficControlName_ != nullptr;};
    void deleteTrafficControlName() { this->trafficControlName_ = nullptr;};
    inline string trafficControlName() const { DARABONBA_PTR_GET_DEFAULT(trafficControlName_, "") };
    inline DescribeApiTrafficControlsResponseBodyApiTrafficControlsApiTrafficControlItem& setTrafficControlName(string trafficControlName) { DARABONBA_PTR_SET_VALUE(trafficControlName_, trafficControlName) };


  protected:
    // The ID of the API.
    std::shared_ptr<string> apiId_ = nullptr;
    // API operation
    std::shared_ptr<string> apiName_ = nullptr;
    // The binding time of the throttling policy.
    std::shared_ptr<string> boundTime_ = nullptr;
    // The ID of the throttling policy.
    std::shared_ptr<string> trafficControlId_ = nullptr;
    // The name of the throttling policy.
    std::shared_ptr<string> trafficControlName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
