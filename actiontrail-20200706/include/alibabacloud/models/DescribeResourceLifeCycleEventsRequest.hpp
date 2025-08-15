// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERESOURCELIFECYCLEEVENTSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERESOURCELIFECYCLEEVENTSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Actiontrail20200706
{
namespace Models
{
  class DescribeResourceLifeCycleEventsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeResourceLifeCycleEventsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_TO_JSON(ServiceName, serviceName_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeResourceLifeCycleEventsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_FROM_JSON(ServiceName, serviceName_);
    };
    DescribeResourceLifeCycleEventsRequest() = default ;
    DescribeResourceLifeCycleEventsRequest(const DescribeResourceLifeCycleEventsRequest &) = default ;
    DescribeResourceLifeCycleEventsRequest(DescribeResourceLifeCycleEventsRequest &&) = default ;
    DescribeResourceLifeCycleEventsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeResourceLifeCycleEventsRequest() = default ;
    DescribeResourceLifeCycleEventsRequest& operator=(const DescribeResourceLifeCycleEventsRequest &) = default ;
    DescribeResourceLifeCycleEventsRequest& operator=(DescribeResourceLifeCycleEventsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->resourceType_ != nullptr
        && this->serviceName_ != nullptr; };
    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline string resourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
    inline DescribeResourceLifeCycleEventsRequest& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


    // serviceName Field Functions 
    bool hasServiceName() const { return this->serviceName_ != nullptr;};
    void deleteServiceName() { this->serviceName_ = nullptr;};
    inline string serviceName() const { DARABONBA_PTR_GET_DEFAULT(serviceName_, "") };
    inline DescribeResourceLifeCycleEventsRequest& setServiceName(string serviceName) { DARABONBA_PTR_SET_VALUE(serviceName_, serviceName) };


  protected:
    std::shared_ptr<string> resourceType_ = nullptr;
    std::shared_ptr<string> serviceName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Actiontrail20200706
#endif
