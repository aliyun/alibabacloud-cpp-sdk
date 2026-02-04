// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAUDITLOGCONFIGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAUDITLOGCONFIGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RKvstore20150101
{
namespace Models
{
  class DescribeAuditLogConfigResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAuditLogConfigResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DbAudit, dbAudit_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Retention, retention_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAuditLogConfigResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DbAudit, dbAudit_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Retention, retention_);
    };
    DescribeAuditLogConfigResponseBody() = default ;
    DescribeAuditLogConfigResponseBody(const DescribeAuditLogConfigResponseBody &) = default ;
    DescribeAuditLogConfigResponseBody(DescribeAuditLogConfigResponseBody &&) = default ;
    DescribeAuditLogConfigResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAuditLogConfigResponseBody() = default ;
    DescribeAuditLogConfigResponseBody& operator=(const DescribeAuditLogConfigResponseBody &) = default ;
    DescribeAuditLogConfigResponseBody& operator=(DescribeAuditLogConfigResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dbAudit_ == nullptr
        && this->requestId_ == nullptr && this->retention_ == nullptr; };
    // dbAudit Field Functions 
    bool hasDbAudit() const { return this->dbAudit_ != nullptr;};
    void deleteDbAudit() { this->dbAudit_ = nullptr;};
    inline string getDbAudit() const { DARABONBA_PTR_GET_DEFAULT(dbAudit_, "") };
    inline DescribeAuditLogConfigResponseBody& setDbAudit(string dbAudit) { DARABONBA_PTR_SET_VALUE(dbAudit_, dbAudit) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeAuditLogConfigResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // retention Field Functions 
    bool hasRetention() const { return this->retention_ != nullptr;};
    void deleteRetention() { this->retention_ = nullptr;};
    inline string getRetention() const { DARABONBA_PTR_GET_DEFAULT(retention_, "") };
    inline DescribeAuditLogConfigResponseBody& setRetention(string retention) { DARABONBA_PTR_SET_VALUE(retention_, retention) };


  protected:
    // Indicates whether the audit log feature is enabled. Valid values:
    // 
    // *   **true**: enabled
    // *   **false**: disabled
    // 
    // > You can call the [ModifyAuditLogConfig](https://help.aliyun.com/document_detail/473829.html) operation to enable or disable the audit log feature for a Tair (Redis OSS-compatible) instance.
    shared_ptr<string> dbAudit_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The retention period of audit logs. Unit: days.
    shared_ptr<string> retention_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RKvstore20150101
#endif
