// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERESOURCELOGDELIVERYSTATUSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERESOURCELOGDELIVERYSTATUSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeResourceLogDeliveryStatusResponseBodyLogConfigs.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WafOpenapi20211001
{
namespace Models
{
  class DescribeResourceLogDeliveryStatusResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeResourceLogDeliveryStatusResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(LogConfigs, logConfigs_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeResourceLogDeliveryStatusResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(LogConfigs, logConfigs_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeResourceLogDeliveryStatusResponseBody() = default ;
    DescribeResourceLogDeliveryStatusResponseBody(const DescribeResourceLogDeliveryStatusResponseBody &) = default ;
    DescribeResourceLogDeliveryStatusResponseBody(DescribeResourceLogDeliveryStatusResponseBody &&) = default ;
    DescribeResourceLogDeliveryStatusResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeResourceLogDeliveryStatusResponseBody() = default ;
    DescribeResourceLogDeliveryStatusResponseBody& operator=(const DescribeResourceLogDeliveryStatusResponseBody &) = default ;
    DescribeResourceLogDeliveryStatusResponseBody& operator=(DescribeResourceLogDeliveryStatusResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->logConfigs_ == nullptr
        && return this->requestId_ == nullptr; };
    // logConfigs Field Functions 
    bool hasLogConfigs() const { return this->logConfigs_ != nullptr;};
    void deleteLogConfigs() { this->logConfigs_ = nullptr;};
    inline const vector<DescribeResourceLogDeliveryStatusResponseBodyLogConfigs> & logConfigs() const { DARABONBA_PTR_GET_CONST(logConfigs_, vector<DescribeResourceLogDeliveryStatusResponseBodyLogConfigs>) };
    inline vector<DescribeResourceLogDeliveryStatusResponseBodyLogConfigs> logConfigs() { DARABONBA_PTR_GET(logConfigs_, vector<DescribeResourceLogDeliveryStatusResponseBodyLogConfigs>) };
    inline DescribeResourceLogDeliveryStatusResponseBody& setLogConfigs(const vector<DescribeResourceLogDeliveryStatusResponseBodyLogConfigs> & logConfigs) { DARABONBA_PTR_SET_VALUE(logConfigs_, logConfigs) };
    inline DescribeResourceLogDeliveryStatusResponseBody& setLogConfigs(vector<DescribeResourceLogDeliveryStatusResponseBodyLogConfigs> && logConfigs) { DARABONBA_PTR_SET_RVALUE(logConfigs_, logConfigs) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeResourceLogDeliveryStatusResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<vector<DescribeResourceLogDeliveryStatusResponseBodyLogConfigs>> logConfigs_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
