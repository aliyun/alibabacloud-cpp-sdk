// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAPIIPCONTROLSRESPONSEBODYAPIIPCONTROLSAPIIPCONTROLITEM_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAPIIPCONTROLSRESPONSEBODYAPIIPCONTROLSAPIIPCONTROLITEM_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class DescribeApiIpControlsResponseBodyApiIpControlsApiIpControlItem : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeApiIpControlsResponseBodyApiIpControlsApiIpControlItem& obj) { 
      DARABONBA_PTR_TO_JSON(ApiId, apiId_);
      DARABONBA_PTR_TO_JSON(ApiName, apiName_);
      DARABONBA_PTR_TO_JSON(BoundTime, boundTime_);
      DARABONBA_PTR_TO_JSON(IpControlId, ipControlId_);
      DARABONBA_PTR_TO_JSON(IpControlName, ipControlName_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeApiIpControlsResponseBodyApiIpControlsApiIpControlItem& obj) { 
      DARABONBA_PTR_FROM_JSON(ApiId, apiId_);
      DARABONBA_PTR_FROM_JSON(ApiName, apiName_);
      DARABONBA_PTR_FROM_JSON(BoundTime, boundTime_);
      DARABONBA_PTR_FROM_JSON(IpControlId, ipControlId_);
      DARABONBA_PTR_FROM_JSON(IpControlName, ipControlName_);
    };
    DescribeApiIpControlsResponseBodyApiIpControlsApiIpControlItem() = default ;
    DescribeApiIpControlsResponseBodyApiIpControlsApiIpControlItem(const DescribeApiIpControlsResponseBodyApiIpControlsApiIpControlItem &) = default ;
    DescribeApiIpControlsResponseBodyApiIpControlsApiIpControlItem(DescribeApiIpControlsResponseBodyApiIpControlsApiIpControlItem &&) = default ;
    DescribeApiIpControlsResponseBodyApiIpControlsApiIpControlItem(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeApiIpControlsResponseBodyApiIpControlsApiIpControlItem() = default ;
    DescribeApiIpControlsResponseBodyApiIpControlsApiIpControlItem& operator=(const DescribeApiIpControlsResponseBodyApiIpControlsApiIpControlItem &) = default ;
    DescribeApiIpControlsResponseBodyApiIpControlsApiIpControlItem& operator=(DescribeApiIpControlsResponseBodyApiIpControlsApiIpControlItem &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->apiId_ == nullptr
        && return this->apiName_ == nullptr && return this->boundTime_ == nullptr && return this->ipControlId_ == nullptr && return this->ipControlName_ == nullptr; };
    // apiId Field Functions 
    bool hasApiId() const { return this->apiId_ != nullptr;};
    void deleteApiId() { this->apiId_ = nullptr;};
    inline string apiId() const { DARABONBA_PTR_GET_DEFAULT(apiId_, "") };
    inline DescribeApiIpControlsResponseBodyApiIpControlsApiIpControlItem& setApiId(string apiId) { DARABONBA_PTR_SET_VALUE(apiId_, apiId) };


    // apiName Field Functions 
    bool hasApiName() const { return this->apiName_ != nullptr;};
    void deleteApiName() { this->apiName_ = nullptr;};
    inline string apiName() const { DARABONBA_PTR_GET_DEFAULT(apiName_, "") };
    inline DescribeApiIpControlsResponseBodyApiIpControlsApiIpControlItem& setApiName(string apiName) { DARABONBA_PTR_SET_VALUE(apiName_, apiName) };


    // boundTime Field Functions 
    bool hasBoundTime() const { return this->boundTime_ != nullptr;};
    void deleteBoundTime() { this->boundTime_ = nullptr;};
    inline string boundTime() const { DARABONBA_PTR_GET_DEFAULT(boundTime_, "") };
    inline DescribeApiIpControlsResponseBodyApiIpControlsApiIpControlItem& setBoundTime(string boundTime) { DARABONBA_PTR_SET_VALUE(boundTime_, boundTime) };


    // ipControlId Field Functions 
    bool hasIpControlId() const { return this->ipControlId_ != nullptr;};
    void deleteIpControlId() { this->ipControlId_ = nullptr;};
    inline string ipControlId() const { DARABONBA_PTR_GET_DEFAULT(ipControlId_, "") };
    inline DescribeApiIpControlsResponseBodyApiIpControlsApiIpControlItem& setIpControlId(string ipControlId) { DARABONBA_PTR_SET_VALUE(ipControlId_, ipControlId) };


    // ipControlName Field Functions 
    bool hasIpControlName() const { return this->ipControlName_ != nullptr;};
    void deleteIpControlName() { this->ipControlName_ = nullptr;};
    inline string ipControlName() const { DARABONBA_PTR_GET_DEFAULT(ipControlName_, "") };
    inline DescribeApiIpControlsResponseBodyApiIpControlsApiIpControlItem& setIpControlName(string ipControlName) { DARABONBA_PTR_SET_VALUE(ipControlName_, ipControlName) };


  protected:
    // The ID of the API.
    std::shared_ptr<string> apiId_ = nullptr;
    // The name of the API.
    std::shared_ptr<string> apiName_ = nullptr;
    // The time of binding.
    std::shared_ptr<string> boundTime_ = nullptr;
    // The ID of the ACL.
    std::shared_ptr<string> ipControlId_ = nullptr;
    // The name of the ACL.
    std::shared_ptr<string> ipControlName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
