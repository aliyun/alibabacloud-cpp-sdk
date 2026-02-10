// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESERVICELINKEDROLESTATUSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESERVICELINKEDROLESTATUSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
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
    class RoleStatus : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const RoleStatus& obj) { 
        DARABONBA_PTR_TO_JSON(Status, status_);
      };
      friend void from_json(const Darabonba::Json& j, RoleStatus& obj) { 
        DARABONBA_PTR_FROM_JSON(Status, status_);
      };
      RoleStatus() = default ;
      RoleStatus(const RoleStatus &) = default ;
      RoleStatus(RoleStatus &&) = default ;
      RoleStatus(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~RoleStatus() = default ;
      RoleStatus& operator=(const RoleStatus &) = default ;
      RoleStatus& operator=(RoleStatus &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->status_ == nullptr; };
      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline bool getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, false) };
      inline RoleStatus& setStatus(bool status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    protected:
      // Indicates whether the service-linked role is created. Valid values:
      // 
      // *   **true**: yes
      // *   **false**: no
      shared_ptr<bool> status_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->roleStatus_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeServiceLinkedRoleStatusResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // roleStatus Field Functions 
    bool hasRoleStatus() const { return this->roleStatus_ != nullptr;};
    void deleteRoleStatus() { this->roleStatus_ = nullptr;};
    inline const DescribeServiceLinkedRoleStatusResponseBody::RoleStatus & getRoleStatus() const { DARABONBA_PTR_GET_CONST(roleStatus_, DescribeServiceLinkedRoleStatusResponseBody::RoleStatus) };
    inline DescribeServiceLinkedRoleStatusResponseBody::RoleStatus getRoleStatus() { DARABONBA_PTR_GET(roleStatus_, DescribeServiceLinkedRoleStatusResponseBody::RoleStatus) };
    inline DescribeServiceLinkedRoleStatusResponseBody& setRoleStatus(const DescribeServiceLinkedRoleStatusResponseBody::RoleStatus & roleStatus) { DARABONBA_PTR_SET_VALUE(roleStatus_, roleStatus) };
    inline DescribeServiceLinkedRoleStatusResponseBody& setRoleStatus(DescribeServiceLinkedRoleStatusResponseBody::RoleStatus && roleStatus) { DARABONBA_PTR_SET_RVALUE(roleStatus_, roleStatus) };


  protected:
    // The ID of the request, which is used to locate and troubleshoot issues.
    shared_ptr<string> requestId_ {};
    // The status information about the service-linked role.
    shared_ptr<DescribeServiceLinkedRoleStatusResponseBody::RoleStatus> roleStatus_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
