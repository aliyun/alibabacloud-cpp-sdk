// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEACTIONEVENTPOLICYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEACTIONEVENTPOLICYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class DescribeActionEventPolicyResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeActionEventPolicyResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(EnableEventLog, enableEventLog_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeActionEventPolicyResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(EnableEventLog, enableEventLog_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeActionEventPolicyResponseBody() = default ;
    DescribeActionEventPolicyResponseBody(const DescribeActionEventPolicyResponseBody &) = default ;
    DescribeActionEventPolicyResponseBody(DescribeActionEventPolicyResponseBody &&) = default ;
    DescribeActionEventPolicyResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeActionEventPolicyResponseBody() = default ;
    DescribeActionEventPolicyResponseBody& operator=(const DescribeActionEventPolicyResponseBody &) = default ;
    DescribeActionEventPolicyResponseBody& operator=(DescribeActionEventPolicyResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->enableEventLog_ == nullptr
        && this->regionId_ == nullptr && this->requestId_ == nullptr; };
    // enableEventLog Field Functions 
    bool hasEnableEventLog() const { return this->enableEventLog_ != nullptr;};
    void deleteEnableEventLog() { this->enableEventLog_ = nullptr;};
    inline string getEnableEventLog() const { DARABONBA_PTR_GET_DEFAULT(enableEventLog_, "") };
    inline DescribeActionEventPolicyResponseBody& setEnableEventLog(string enableEventLog) { DARABONBA_PTR_SET_VALUE(enableEventLog_, enableEventLog) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeActionEventPolicyResponseBody& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeActionEventPolicyResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // Indicates whether the event history feature is enabled.
    shared_ptr<string> enableEventLog_ {};
    // The region ID.
    shared_ptr<string> regionId_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
