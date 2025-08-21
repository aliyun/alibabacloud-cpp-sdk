// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEIPDDOSTHRESHOLDRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEIPDDOSTHRESHOLDRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeIpDdosThresholdResponseBodyThreshold.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AntiddosPublic20170518
{
namespace Models
{
  class DescribeIpDdosThresholdResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeIpDdosThresholdResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Threshold, threshold_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeIpDdosThresholdResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Threshold, threshold_);
    };
    DescribeIpDdosThresholdResponseBody() = default ;
    DescribeIpDdosThresholdResponseBody(const DescribeIpDdosThresholdResponseBody &) = default ;
    DescribeIpDdosThresholdResponseBody(DescribeIpDdosThresholdResponseBody &&) = default ;
    DescribeIpDdosThresholdResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeIpDdosThresholdResponseBody() = default ;
    DescribeIpDdosThresholdResponseBody& operator=(const DescribeIpDdosThresholdResponseBody &) = default ;
    DescribeIpDdosThresholdResponseBody& operator=(DescribeIpDdosThresholdResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->requestId_ != nullptr
        && this->threshold_ != nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeIpDdosThresholdResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // threshold Field Functions 
    bool hasThreshold() const { return this->threshold_ != nullptr;};
    void deleteThreshold() { this->threshold_ = nullptr;};
    inline const DescribeIpDdosThresholdResponseBodyThreshold & threshold() const { DARABONBA_PTR_GET_CONST(threshold_, DescribeIpDdosThresholdResponseBodyThreshold) };
    inline DescribeIpDdosThresholdResponseBodyThreshold threshold() { DARABONBA_PTR_GET(threshold_, DescribeIpDdosThresholdResponseBodyThreshold) };
    inline DescribeIpDdosThresholdResponseBody& setThreshold(const DescribeIpDdosThresholdResponseBodyThreshold & threshold) { DARABONBA_PTR_SET_VALUE(threshold_, threshold) };
    inline DescribeIpDdosThresholdResponseBody& setThreshold(DescribeIpDdosThresholdResponseBodyThreshold && threshold) { DARABONBA_PTR_SET_RVALUE(threshold_, threshold) };


  protected:
    // The ID of the request, which is used to locate and troubleshoot issues.
    std::shared_ptr<string> requestId_ = nullptr;
    // An array that consists of the details of the threshold.
    std::shared_ptr<DescribeIpDdosThresholdResponseBodyThreshold> threshold_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AntiddosPublic20170518
#endif
