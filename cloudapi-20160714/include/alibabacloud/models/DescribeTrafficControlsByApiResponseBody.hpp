// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBETRAFFICCONTROLSBYAPIRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBETRAFFICCONTROLSBYAPIRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeTrafficControlsByApiResponseBodyTrafficControlItems.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class DescribeTrafficControlsByApiResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeTrafficControlsByApiResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TrafficControlItems, trafficControlItems_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeTrafficControlsByApiResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TrafficControlItems, trafficControlItems_);
    };
    DescribeTrafficControlsByApiResponseBody() = default ;
    DescribeTrafficControlsByApiResponseBody(const DescribeTrafficControlsByApiResponseBody &) = default ;
    DescribeTrafficControlsByApiResponseBody(DescribeTrafficControlsByApiResponseBody &&) = default ;
    DescribeTrafficControlsByApiResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeTrafficControlsByApiResponseBody() = default ;
    DescribeTrafficControlsByApiResponseBody& operator=(const DescribeTrafficControlsByApiResponseBody &) = default ;
    DescribeTrafficControlsByApiResponseBody& operator=(DescribeTrafficControlsByApiResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && return this->trafficControlItems_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeTrafficControlsByApiResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // trafficControlItems Field Functions 
    bool hasTrafficControlItems() const { return this->trafficControlItems_ != nullptr;};
    void deleteTrafficControlItems() { this->trafficControlItems_ = nullptr;};
    inline const DescribeTrafficControlsByApiResponseBodyTrafficControlItems & trafficControlItems() const { DARABONBA_PTR_GET_CONST(trafficControlItems_, DescribeTrafficControlsByApiResponseBodyTrafficControlItems) };
    inline DescribeTrafficControlsByApiResponseBodyTrafficControlItems trafficControlItems() { DARABONBA_PTR_GET(trafficControlItems_, DescribeTrafficControlsByApiResponseBodyTrafficControlItems) };
    inline DescribeTrafficControlsByApiResponseBody& setTrafficControlItems(const DescribeTrafficControlsByApiResponseBodyTrafficControlItems & trafficControlItems) { DARABONBA_PTR_SET_VALUE(trafficControlItems_, trafficControlItems) };
    inline DescribeTrafficControlsByApiResponseBody& setTrafficControlItems(DescribeTrafficControlsByApiResponseBodyTrafficControlItems && trafficControlItems) { DARABONBA_PTR_SET_RVALUE(trafficControlItems_, trafficControlItems) };


  protected:
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The returned throttling policy information. It is an array consisting of TrafficControlItem data.
    std::shared_ptr<DescribeTrafficControlsByApiResponseBodyTrafficControlItems> trafficControlItems_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
