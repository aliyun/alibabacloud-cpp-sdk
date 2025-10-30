// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEHEALTHSTATUSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEHEALTHSTATUSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeHealthStatusResponseBodyStatus.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gpdb20160503
{
namespace Models
{
  class DescribeHealthStatusResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeHealthStatusResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeHealthStatusResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    DescribeHealthStatusResponseBody() = default ;
    DescribeHealthStatusResponseBody(const DescribeHealthStatusResponseBody &) = default ;
    DescribeHealthStatusResponseBody(DescribeHealthStatusResponseBody &&) = default ;
    DescribeHealthStatusResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeHealthStatusResponseBody() = default ;
    DescribeHealthStatusResponseBody& operator=(const DescribeHealthStatusResponseBody &) = default ;
    DescribeHealthStatusResponseBody& operator=(DescribeHealthStatusResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->DBClusterId_ == nullptr
        && return this->requestId_ == nullptr && return this->status_ == nullptr; };
    // DBClusterId Field Functions 
    bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
    void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
    inline string DBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
    inline DescribeHealthStatusResponseBody& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeHealthStatusResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline const DescribeHealthStatusResponseBodyStatus & status() const { DARABONBA_PTR_GET_CONST(status_, DescribeHealthStatusResponseBodyStatus) };
    inline DescribeHealthStatusResponseBodyStatus status() { DARABONBA_PTR_GET(status_, DescribeHealthStatusResponseBodyStatus) };
    inline DescribeHealthStatusResponseBody& setStatus(const DescribeHealthStatusResponseBodyStatus & status) { DARABONBA_PTR_SET_VALUE(status_, status) };
    inline DescribeHealthStatusResponseBody& setStatus(DescribeHealthStatusResponseBodyStatus && status) { DARABONBA_PTR_SET_RVALUE(status_, status) };


  protected:
    // The ID of instance.
    std::shared_ptr<string> DBClusterId_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The queried performance metrics. Each performance metric consists of the parameter name, status, and metric value. The metric information is returned only for the performance parameters specified by **Key**. For example, if you set **Key** to **adbpg_status**, only the metric information of **adbpg_status** is returned.
    // 
    // For more information about performance parameters, see [Performance parameters](https://help.aliyun.com/document_detail/86943.html).
    std::shared_ptr<DescribeHealthStatusResponseBodyStatus> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
