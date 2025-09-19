// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELOGSHIPPERSTATUSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELOGSHIPPERSTATUSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeLogShipperStatusResponseBodyLogShipperStatus.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeLogShipperStatusResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLogShipperStatusResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(LogShipperStatus, logShipperStatus_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLogShipperStatusResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(LogShipperStatus, logShipperStatus_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeLogShipperStatusResponseBody() = default ;
    DescribeLogShipperStatusResponseBody(const DescribeLogShipperStatusResponseBody &) = default ;
    DescribeLogShipperStatusResponseBody(DescribeLogShipperStatusResponseBody &&) = default ;
    DescribeLogShipperStatusResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLogShipperStatusResponseBody() = default ;
    DescribeLogShipperStatusResponseBody& operator=(const DescribeLogShipperStatusResponseBody &) = default ;
    DescribeLogShipperStatusResponseBody& operator=(DescribeLogShipperStatusResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->logShipperStatus_ != nullptr
        && this->requestId_ != nullptr; };
    // logShipperStatus Field Functions 
    bool hasLogShipperStatus() const { return this->logShipperStatus_ != nullptr;};
    void deleteLogShipperStatus() { this->logShipperStatus_ = nullptr;};
    inline const DescribeLogShipperStatusResponseBodyLogShipperStatus & logShipperStatus() const { DARABONBA_PTR_GET_CONST(logShipperStatus_, DescribeLogShipperStatusResponseBodyLogShipperStatus) };
    inline DescribeLogShipperStatusResponseBodyLogShipperStatus logShipperStatus() { DARABONBA_PTR_GET(logShipperStatus_, DescribeLogShipperStatusResponseBodyLogShipperStatus) };
    inline DescribeLogShipperStatusResponseBody& setLogShipperStatus(const DescribeLogShipperStatusResponseBodyLogShipperStatus & logShipperStatus) { DARABONBA_PTR_SET_VALUE(logShipperStatus_, logShipperStatus) };
    inline DescribeLogShipperStatusResponseBody& setLogShipperStatus(DescribeLogShipperStatusResponseBodyLogShipperStatus && logShipperStatus) { DARABONBA_PTR_SET_RVALUE(logShipperStatus_, logShipperStatus) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeLogShipperStatusResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The status information.
    std::shared_ptr<DescribeLogShipperStatusResponseBodyLogShipperStatus> logShipperStatus_ = nullptr;
    // The ID of the request, which is used to locate and troubleshoot issues.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
