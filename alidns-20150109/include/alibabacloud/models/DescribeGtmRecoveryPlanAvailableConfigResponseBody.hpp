// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEGTMRECOVERYPLANAVAILABLECONFIGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEGTMRECOVERYPLANAVAILABLECONFIGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeGtmRecoveryPlanAvailableConfigResponseBodyInstances.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class DescribeGtmRecoveryPlanAvailableConfigResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeGtmRecoveryPlanAvailableConfigResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Instances, instances_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeGtmRecoveryPlanAvailableConfigResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Instances, instances_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeGtmRecoveryPlanAvailableConfigResponseBody() = default ;
    DescribeGtmRecoveryPlanAvailableConfigResponseBody(const DescribeGtmRecoveryPlanAvailableConfigResponseBody &) = default ;
    DescribeGtmRecoveryPlanAvailableConfigResponseBody(DescribeGtmRecoveryPlanAvailableConfigResponseBody &&) = default ;
    DescribeGtmRecoveryPlanAvailableConfigResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeGtmRecoveryPlanAvailableConfigResponseBody() = default ;
    DescribeGtmRecoveryPlanAvailableConfigResponseBody& operator=(const DescribeGtmRecoveryPlanAvailableConfigResponseBody &) = default ;
    DescribeGtmRecoveryPlanAvailableConfigResponseBody& operator=(DescribeGtmRecoveryPlanAvailableConfigResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instances_ == nullptr
        && return this->requestId_ == nullptr; };
    // instances Field Functions 
    bool hasInstances() const { return this->instances_ != nullptr;};
    void deleteInstances() { this->instances_ = nullptr;};
    inline const DescribeGtmRecoveryPlanAvailableConfigResponseBodyInstances & instances() const { DARABONBA_PTR_GET_CONST(instances_, DescribeGtmRecoveryPlanAvailableConfigResponseBodyInstances) };
    inline DescribeGtmRecoveryPlanAvailableConfigResponseBodyInstances instances() { DARABONBA_PTR_GET(instances_, DescribeGtmRecoveryPlanAvailableConfigResponseBodyInstances) };
    inline DescribeGtmRecoveryPlanAvailableConfigResponseBody& setInstances(const DescribeGtmRecoveryPlanAvailableConfigResponseBodyInstances & instances) { DARABONBA_PTR_SET_VALUE(instances_, instances) };
    inline DescribeGtmRecoveryPlanAvailableConfigResponseBody& setInstances(DescribeGtmRecoveryPlanAvailableConfigResponseBodyInstances && instances) { DARABONBA_PTR_SET_RVALUE(instances_, instances) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeGtmRecoveryPlanAvailableConfigResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The instances.
    std::shared_ptr<DescribeGtmRecoveryPlanAvailableConfigResponseBodyInstances> instances_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
