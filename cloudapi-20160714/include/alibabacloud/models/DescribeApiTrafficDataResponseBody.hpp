// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAPITRAFFICDATARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAPITRAFFICDATARESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeApiTrafficDataResponseBodyCallDownloads.hpp>
#include <alibabacloud/models/DescribeApiTrafficDataResponseBodyCallUploads.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class DescribeApiTrafficDataResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeApiTrafficDataResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CallDownloads, callDownloads_);
      DARABONBA_PTR_TO_JSON(CallUploads, callUploads_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeApiTrafficDataResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CallDownloads, callDownloads_);
      DARABONBA_PTR_FROM_JSON(CallUploads, callUploads_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeApiTrafficDataResponseBody() = default ;
    DescribeApiTrafficDataResponseBody(const DescribeApiTrafficDataResponseBody &) = default ;
    DescribeApiTrafficDataResponseBody(DescribeApiTrafficDataResponseBody &&) = default ;
    DescribeApiTrafficDataResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeApiTrafficDataResponseBody() = default ;
    DescribeApiTrafficDataResponseBody& operator=(const DescribeApiTrafficDataResponseBody &) = default ;
    DescribeApiTrafficDataResponseBody& operator=(DescribeApiTrafficDataResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->callDownloads_ == nullptr
        && return this->callUploads_ == nullptr && return this->requestId_ == nullptr; };
    // callDownloads Field Functions 
    bool hasCallDownloads() const { return this->callDownloads_ != nullptr;};
    void deleteCallDownloads() { this->callDownloads_ = nullptr;};
    inline const DescribeApiTrafficDataResponseBodyCallDownloads & callDownloads() const { DARABONBA_PTR_GET_CONST(callDownloads_, DescribeApiTrafficDataResponseBodyCallDownloads) };
    inline DescribeApiTrafficDataResponseBodyCallDownloads callDownloads() { DARABONBA_PTR_GET(callDownloads_, DescribeApiTrafficDataResponseBodyCallDownloads) };
    inline DescribeApiTrafficDataResponseBody& setCallDownloads(const DescribeApiTrafficDataResponseBodyCallDownloads & callDownloads) { DARABONBA_PTR_SET_VALUE(callDownloads_, callDownloads) };
    inline DescribeApiTrafficDataResponseBody& setCallDownloads(DescribeApiTrafficDataResponseBodyCallDownloads && callDownloads) { DARABONBA_PTR_SET_RVALUE(callDownloads_, callDownloads) };


    // callUploads Field Functions 
    bool hasCallUploads() const { return this->callUploads_ != nullptr;};
    void deleteCallUploads() { this->callUploads_ = nullptr;};
    inline const DescribeApiTrafficDataResponseBodyCallUploads & callUploads() const { DARABONBA_PTR_GET_CONST(callUploads_, DescribeApiTrafficDataResponseBodyCallUploads) };
    inline DescribeApiTrafficDataResponseBodyCallUploads callUploads() { DARABONBA_PTR_GET(callUploads_, DescribeApiTrafficDataResponseBodyCallUploads) };
    inline DescribeApiTrafficDataResponseBody& setCallUploads(const DescribeApiTrafficDataResponseBodyCallUploads & callUploads) { DARABONBA_PTR_SET_VALUE(callUploads_, callUploads) };
    inline DescribeApiTrafficDataResponseBody& setCallUploads(DescribeApiTrafficDataResponseBodyCallUploads && callUploads) { DARABONBA_PTR_SET_RVALUE(callUploads_, callUploads) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeApiTrafficDataResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The returned downlink traffic data of API calls. It is an array consisting of MonitorItem data.
    std::shared_ptr<DescribeApiTrafficDataResponseBodyCallDownloads> callDownloads_ = nullptr;
    // The returned uplink traffic data of API calls. It is an array consisting of MonitorItem data.
    std::shared_ptr<DescribeApiTrafficDataResponseBodyCallUploads> callUploads_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
