// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAUDITLOGFILTERRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAUDITLOGFILTERRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dds20151201
{
namespace Models
{
  class DescribeAuditLogFilterResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAuditLogFilterResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Filter, filter_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(RoleType, roleType_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAuditLogFilterResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Filter, filter_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(RoleType, roleType_);
    };
    DescribeAuditLogFilterResponseBody() = default ;
    DescribeAuditLogFilterResponseBody(const DescribeAuditLogFilterResponseBody &) = default ;
    DescribeAuditLogFilterResponseBody(DescribeAuditLogFilterResponseBody &&) = default ;
    DescribeAuditLogFilterResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAuditLogFilterResponseBody() = default ;
    DescribeAuditLogFilterResponseBody& operator=(const DescribeAuditLogFilterResponseBody &) = default ;
    DescribeAuditLogFilterResponseBody& operator=(DescribeAuditLogFilterResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->filter_ == nullptr
        && this->requestId_ == nullptr && this->roleType_ == nullptr; };
    // filter Field Functions 
    bool hasFilter() const { return this->filter_ != nullptr;};
    void deleteFilter() { this->filter_ = nullptr;};
    inline string getFilter() const { DARABONBA_PTR_GET_DEFAULT(filter_, "") };
    inline DescribeAuditLogFilterResponseBody& setFilter(string filter) { DARABONBA_PTR_SET_VALUE(filter_, filter) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeAuditLogFilterResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // roleType Field Functions 
    bool hasRoleType() const { return this->roleType_ != nullptr;};
    void deleteRoleType() { this->roleType_ = nullptr;};
    inline string getRoleType() const { DARABONBA_PTR_GET_DEFAULT(roleType_, "") };
    inline DescribeAuditLogFilterResponseBody& setRoleType(string roleType) { DARABONBA_PTR_SET_VALUE(roleType_, roleType) };


  protected:
    // The type of the audit log entries. Valid values:
    // 
    // *   **admin**: O\\&M and management operations
    // *   **slow**: slow query logs
    // *   **query**: query operations
    // *   **insert**: insert operations
    // *   **update**: update operations
    // *   **delete**: delete operations
    // *   **command**: protocol commands such as the aggregate method
    shared_ptr<string> filter_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The role of the node.
    shared_ptr<string> roleType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dds20151201
#endif
