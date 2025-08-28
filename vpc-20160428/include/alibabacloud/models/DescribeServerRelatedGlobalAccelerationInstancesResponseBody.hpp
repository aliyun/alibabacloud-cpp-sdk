// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESERVERRELATEDGLOBALACCELERATIONINSTANCESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESERVERRELATEDGLOBALACCELERATIONINSTANCESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeServerRelatedGlobalAccelerationInstancesResponseBodyGlobalAccelerationInstances.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class DescribeServerRelatedGlobalAccelerationInstancesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeServerRelatedGlobalAccelerationInstancesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(GlobalAccelerationInstances, globalAccelerationInstances_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeServerRelatedGlobalAccelerationInstancesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(GlobalAccelerationInstances, globalAccelerationInstances_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeServerRelatedGlobalAccelerationInstancesResponseBody() = default ;
    DescribeServerRelatedGlobalAccelerationInstancesResponseBody(const DescribeServerRelatedGlobalAccelerationInstancesResponseBody &) = default ;
    DescribeServerRelatedGlobalAccelerationInstancesResponseBody(DescribeServerRelatedGlobalAccelerationInstancesResponseBody &&) = default ;
    DescribeServerRelatedGlobalAccelerationInstancesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeServerRelatedGlobalAccelerationInstancesResponseBody() = default ;
    DescribeServerRelatedGlobalAccelerationInstancesResponseBody& operator=(const DescribeServerRelatedGlobalAccelerationInstancesResponseBody &) = default ;
    DescribeServerRelatedGlobalAccelerationInstancesResponseBody& operator=(DescribeServerRelatedGlobalAccelerationInstancesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->globalAccelerationInstances_ != nullptr
        && this->requestId_ != nullptr; };
    // globalAccelerationInstances Field Functions 
    bool hasGlobalAccelerationInstances() const { return this->globalAccelerationInstances_ != nullptr;};
    void deleteGlobalAccelerationInstances() { this->globalAccelerationInstances_ = nullptr;};
    inline const DescribeServerRelatedGlobalAccelerationInstancesResponseBodyGlobalAccelerationInstances & globalAccelerationInstances() const { DARABONBA_PTR_GET_CONST(globalAccelerationInstances_, DescribeServerRelatedGlobalAccelerationInstancesResponseBodyGlobalAccelerationInstances) };
    inline DescribeServerRelatedGlobalAccelerationInstancesResponseBodyGlobalAccelerationInstances globalAccelerationInstances() { DARABONBA_PTR_GET(globalAccelerationInstances_, DescribeServerRelatedGlobalAccelerationInstancesResponseBodyGlobalAccelerationInstances) };
    inline DescribeServerRelatedGlobalAccelerationInstancesResponseBody& setGlobalAccelerationInstances(const DescribeServerRelatedGlobalAccelerationInstancesResponseBodyGlobalAccelerationInstances & globalAccelerationInstances) { DARABONBA_PTR_SET_VALUE(globalAccelerationInstances_, globalAccelerationInstances) };
    inline DescribeServerRelatedGlobalAccelerationInstancesResponseBody& setGlobalAccelerationInstances(DescribeServerRelatedGlobalAccelerationInstancesResponseBodyGlobalAccelerationInstances && globalAccelerationInstances) { DARABONBA_PTR_SET_RVALUE(globalAccelerationInstances_, globalAccelerationInstances) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeServerRelatedGlobalAccelerationInstancesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The list of GA instances.
    std::shared_ptr<DescribeServerRelatedGlobalAccelerationInstancesResponseBodyGlobalAccelerationInstances> globalAccelerationInstances_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
