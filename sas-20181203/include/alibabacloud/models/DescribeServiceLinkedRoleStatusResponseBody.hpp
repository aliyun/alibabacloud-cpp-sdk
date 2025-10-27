// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESERVICELINKEDROLESTATUSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESERVICELINKEDROLESTATUSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeServiceLinkedRoleStatusResponseBodyRoleStatus.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeServiceLinkedRoleStatusResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeServiceLinkedRoleStatusResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(RoleStatus, roleStatus_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeServiceLinkedRoleStatusResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(RoleStatus, roleStatus_);
    };
    DescribeServiceLinkedRoleStatusResponseBody() = default ;
    DescribeServiceLinkedRoleStatusResponseBody(const DescribeServiceLinkedRoleStatusResponseBody &) = default ;
    DescribeServiceLinkedRoleStatusResponseBody(DescribeServiceLinkedRoleStatusResponseBody &&) = default ;
    DescribeServiceLinkedRoleStatusResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeServiceLinkedRoleStatusResponseBody() = default ;
    DescribeServiceLinkedRoleStatusResponseBody& operator=(const DescribeServiceLinkedRoleStatusResponseBody &) = default ;
    DescribeServiceLinkedRoleStatusResponseBody& operator=(DescribeServiceLinkedRoleStatusResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && return this->roleStatus_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeServiceLinkedRoleStatusResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // roleStatus Field Functions 
    bool hasRoleStatus() const { return this->roleStatus_ != nullptr;};
    void deleteRoleStatus() { this->roleStatus_ = nullptr;};
    inline const DescribeServiceLinkedRoleStatusResponseBodyRoleStatus & roleStatus() const { DARABONBA_PTR_GET_CONST(roleStatus_, DescribeServiceLinkedRoleStatusResponseBodyRoleStatus) };
    inline DescribeServiceLinkedRoleStatusResponseBodyRoleStatus roleStatus() { DARABONBA_PTR_GET(roleStatus_, DescribeServiceLinkedRoleStatusResponseBodyRoleStatus) };
    inline DescribeServiceLinkedRoleStatusResponseBody& setRoleStatus(const DescribeServiceLinkedRoleStatusResponseBodyRoleStatus & roleStatus) { DARABONBA_PTR_SET_VALUE(roleStatus_, roleStatus) };
    inline DescribeServiceLinkedRoleStatusResponseBody& setRoleStatus(DescribeServiceLinkedRoleStatusResponseBodyRoleStatus && roleStatus) { DARABONBA_PTR_SET_RVALUE(roleStatus_, roleStatus) };


  protected:
    // The ID of the request, which is used to locate and troubleshoot issues.
    std::shared_ptr<string> requestId_ = nullptr;
    // The status information about the service-linked role.
    std::shared_ptr<DescribeServiceLinkedRoleStatusResponseBodyRoleStatus> roleStatus_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
