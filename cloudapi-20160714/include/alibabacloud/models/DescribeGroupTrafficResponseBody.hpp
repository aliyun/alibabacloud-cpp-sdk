// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEGROUPTRAFFICRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEGROUPTRAFFICRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeGroupTrafficResponseBodyTrafficPerSecond.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class DescribeGroupTrafficResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeGroupTrafficResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TrafficPerSecond, trafficPerSecond_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeGroupTrafficResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TrafficPerSecond, trafficPerSecond_);
    };
    DescribeGroupTrafficResponseBody() = default ;
    DescribeGroupTrafficResponseBody(const DescribeGroupTrafficResponseBody &) = default ;
    DescribeGroupTrafficResponseBody(DescribeGroupTrafficResponseBody &&) = default ;
    DescribeGroupTrafficResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeGroupTrafficResponseBody() = default ;
    DescribeGroupTrafficResponseBody& operator=(const DescribeGroupTrafficResponseBody &) = default ;
    DescribeGroupTrafficResponseBody& operator=(DescribeGroupTrafficResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && return this->trafficPerSecond_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeGroupTrafficResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // trafficPerSecond Field Functions 
    bool hasTrafficPerSecond() const { return this->trafficPerSecond_ != nullptr;};
    void deleteTrafficPerSecond() { this->trafficPerSecond_ = nullptr;};
    inline const DescribeGroupTrafficResponseBodyTrafficPerSecond & trafficPerSecond() const { DARABONBA_PTR_GET_CONST(trafficPerSecond_, DescribeGroupTrafficResponseBodyTrafficPerSecond) };
    inline DescribeGroupTrafficResponseBodyTrafficPerSecond trafficPerSecond() { DARABONBA_PTR_GET(trafficPerSecond_, DescribeGroupTrafficResponseBodyTrafficPerSecond) };
    inline DescribeGroupTrafficResponseBody& setTrafficPerSecond(const DescribeGroupTrafficResponseBodyTrafficPerSecond & trafficPerSecond) { DARABONBA_PTR_SET_VALUE(trafficPerSecond_, trafficPerSecond) };
    inline DescribeGroupTrafficResponseBody& setTrafficPerSecond(DescribeGroupTrafficResponseBodyTrafficPerSecond && trafficPerSecond) { DARABONBA_PTR_SET_RVALUE(trafficPerSecond_, trafficPerSecond) };


  protected:
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The traffic information per second.
    std::shared_ptr<DescribeGroupTrafficResponseBodyTrafficPerSecond> trafficPerSecond_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
