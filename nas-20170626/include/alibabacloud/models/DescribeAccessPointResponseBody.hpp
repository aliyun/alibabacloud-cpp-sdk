// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEACCESSPOINTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEACCESSPOINTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeAccessPointResponseBodyAccessPoint.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace NAS20170626
{
namespace Models
{
  class DescribeAccessPointResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAccessPointResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccessPoint, accessPoint_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAccessPointResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessPoint, accessPoint_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeAccessPointResponseBody() = default ;
    DescribeAccessPointResponseBody(const DescribeAccessPointResponseBody &) = default ;
    DescribeAccessPointResponseBody(DescribeAccessPointResponseBody &&) = default ;
    DescribeAccessPointResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAccessPointResponseBody() = default ;
    DescribeAccessPointResponseBody& operator=(const DescribeAccessPointResponseBody &) = default ;
    DescribeAccessPointResponseBody& operator=(DescribeAccessPointResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accessPoint_ == nullptr
        && return this->requestId_ == nullptr; };
    // accessPoint Field Functions 
    bool hasAccessPoint() const { return this->accessPoint_ != nullptr;};
    void deleteAccessPoint() { this->accessPoint_ = nullptr;};
    inline const DescribeAccessPointResponseBodyAccessPoint & accessPoint() const { DARABONBA_PTR_GET_CONST(accessPoint_, DescribeAccessPointResponseBodyAccessPoint) };
    inline DescribeAccessPointResponseBodyAccessPoint accessPoint() { DARABONBA_PTR_GET(accessPoint_, DescribeAccessPointResponseBodyAccessPoint) };
    inline DescribeAccessPointResponseBody& setAccessPoint(const DescribeAccessPointResponseBodyAccessPoint & accessPoint) { DARABONBA_PTR_SET_VALUE(accessPoint_, accessPoint) };
    inline DescribeAccessPointResponseBody& setAccessPoint(DescribeAccessPointResponseBodyAccessPoint && accessPoint) { DARABONBA_PTR_SET_RVALUE(accessPoint_, accessPoint) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeAccessPointResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The information about the access point.
    std::shared_ptr<DescribeAccessPointResponseBodyAccessPoint> accessPoint_ = nullptr;
    // The request ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace NAS20170626
#endif
