// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEROLEAUTHSTATUSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEROLEAUTHSTATUSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WafOpenapi20211001
{
namespace Models
{
  class DescribeRoleAuthStatusResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRoleAuthStatusResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AuthStatus, authStatus_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRoleAuthStatusResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AuthStatus, authStatus_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeRoleAuthStatusResponseBody() = default ;
    DescribeRoleAuthStatusResponseBody(const DescribeRoleAuthStatusResponseBody &) = default ;
    DescribeRoleAuthStatusResponseBody(DescribeRoleAuthStatusResponseBody &&) = default ;
    DescribeRoleAuthStatusResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRoleAuthStatusResponseBody() = default ;
    DescribeRoleAuthStatusResponseBody& operator=(const DescribeRoleAuthStatusResponseBody &) = default ;
    DescribeRoleAuthStatusResponseBody& operator=(DescribeRoleAuthStatusResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->authStatus_ == nullptr
        && return this->requestId_ == nullptr; };
    // authStatus Field Functions 
    bool hasAuthStatus() const { return this->authStatus_ != nullptr;};
    void deleteAuthStatus() { this->authStatus_ = nullptr;};
    inline bool authStatus() const { DARABONBA_PTR_GET_DEFAULT(authStatus_, false) };
    inline DescribeRoleAuthStatusResponseBody& setAuthStatus(bool authStatus) { DARABONBA_PTR_SET_VALUE(authStatus_, authStatus) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeRoleAuthStatusResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<bool> authStatus_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
