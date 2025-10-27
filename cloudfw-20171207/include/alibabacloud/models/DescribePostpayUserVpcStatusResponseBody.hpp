// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPOSTPAYUSERVPCSTATUSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPOSTPAYUSERVPCSTATUSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class DescribePostpayUserVpcStatusResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePostpayUserVpcStatusResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(UnprotectedDate, unprotectedDate_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePostpayUserVpcStatusResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(UnprotectedDate, unprotectedDate_);
    };
    DescribePostpayUserVpcStatusResponseBody() = default ;
    DescribePostpayUserVpcStatusResponseBody(const DescribePostpayUserVpcStatusResponseBody &) = default ;
    DescribePostpayUserVpcStatusResponseBody(DescribePostpayUserVpcStatusResponseBody &&) = default ;
    DescribePostpayUserVpcStatusResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePostpayUserVpcStatusResponseBody() = default ;
    DescribePostpayUserVpcStatusResponseBody& operator=(const DescribePostpayUserVpcStatusResponseBody &) = default ;
    DescribePostpayUserVpcStatusResponseBody& operator=(DescribePostpayUserVpcStatusResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && return this->status_ == nullptr && return this->unprotectedDate_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribePostpayUserVpcStatusResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribePostpayUserVpcStatusResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // unprotectedDate Field Functions 
    bool hasUnprotectedDate() const { return this->unprotectedDate_ != nullptr;};
    void deleteUnprotectedDate() { this->unprotectedDate_ = nullptr;};
    inline int64_t unprotectedDate() const { DARABONBA_PTR_GET_DEFAULT(unprotectedDate_, 0L) };
    inline DescribePostpayUserVpcStatusResponseBody& setUnprotectedDate(int64_t unprotectedDate) { DARABONBA_PTR_SET_VALUE(unprotectedDate_, unprotectedDate) };


  protected:
    // Id of the request
    std::shared_ptr<string> requestId_ = nullptr;
    // The status of the VPC Firewall feature. Valid values:
    // 
    // *   **open**: enabled
    // *   **init**: being enabled
    // *   **closed**: disabled
    std::shared_ptr<string> status_ = nullptr;
    // The number of days during which no asset is added to the VPC Firewall feature for protection. This parameter is valid only when the value of Status is open.
    std::shared_ptr<int64_t> unprotectedDate_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
