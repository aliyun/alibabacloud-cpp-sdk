// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEUSERSTATUSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEUSERSTATUSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeUserStatusResponseBodyUserStatus.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sddp20190103
{
namespace Models
{
  class DescribeUserStatusResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeUserStatusResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(UserStatus, userStatus_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeUserStatusResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(UserStatus, userStatus_);
    };
    DescribeUserStatusResponseBody() = default ;
    DescribeUserStatusResponseBody(const DescribeUserStatusResponseBody &) = default ;
    DescribeUserStatusResponseBody(DescribeUserStatusResponseBody &&) = default ;
    DescribeUserStatusResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeUserStatusResponseBody() = default ;
    DescribeUserStatusResponseBody& operator=(const DescribeUserStatusResponseBody &) = default ;
    DescribeUserStatusResponseBody& operator=(DescribeUserStatusResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->requestId_ != nullptr
        && this->userStatus_ != nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeUserStatusResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // userStatus Field Functions 
    bool hasUserStatus() const { return this->userStatus_ != nullptr;};
    void deleteUserStatus() { this->userStatus_ = nullptr;};
    inline const DescribeUserStatusResponseBodyUserStatus & userStatus() const { DARABONBA_PTR_GET_CONST(userStatus_, DescribeUserStatusResponseBodyUserStatus) };
    inline DescribeUserStatusResponseBodyUserStatus userStatus() { DARABONBA_PTR_GET(userStatus_, DescribeUserStatusResponseBodyUserStatus) };
    inline DescribeUserStatusResponseBody& setUserStatus(const DescribeUserStatusResponseBodyUserStatus & userStatus) { DARABONBA_PTR_SET_VALUE(userStatus_, userStatus) };
    inline DescribeUserStatusResponseBody& setUserStatus(DescribeUserStatusResponseBodyUserStatus && userStatus) { DARABONBA_PTR_SET_RVALUE(userStatus_, userStatus) };


  protected:
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The information about the current account.
    std::shared_ptr<DescribeUserStatusResponseBodyUserStatus> userStatus_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sddp20190103
#endif
