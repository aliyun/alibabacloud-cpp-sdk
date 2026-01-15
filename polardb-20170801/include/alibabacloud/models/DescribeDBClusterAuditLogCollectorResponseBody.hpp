// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDBCLUSTERAUDITLOGCOLLECTORRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDBCLUSTERAUDITLOGCOLLECTORRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class DescribeDBClusterAuditLogCollectorResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDBClusterAuditLogCollectorResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CollectorStatus, collectorStatus_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDBClusterAuditLogCollectorResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CollectorStatus, collectorStatus_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeDBClusterAuditLogCollectorResponseBody() = default ;
    DescribeDBClusterAuditLogCollectorResponseBody(const DescribeDBClusterAuditLogCollectorResponseBody &) = default ;
    DescribeDBClusterAuditLogCollectorResponseBody(DescribeDBClusterAuditLogCollectorResponseBody &&) = default ;
    DescribeDBClusterAuditLogCollectorResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDBClusterAuditLogCollectorResponseBody() = default ;
    DescribeDBClusterAuditLogCollectorResponseBody& operator=(const DescribeDBClusterAuditLogCollectorResponseBody &) = default ;
    DescribeDBClusterAuditLogCollectorResponseBody& operator=(DescribeDBClusterAuditLogCollectorResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->collectorStatus_ == nullptr
        && this->requestId_ == nullptr; };
    // collectorStatus Field Functions 
    bool hasCollectorStatus() const { return this->collectorStatus_ != nullptr;};
    void deleteCollectorStatus() { this->collectorStatus_ = nullptr;};
    inline string getCollectorStatus() const { DARABONBA_PTR_GET_DEFAULT(collectorStatus_, "") };
    inline DescribeDBClusterAuditLogCollectorResponseBody& setCollectorStatus(string collectorStatus) { DARABONBA_PTR_SET_VALUE(collectorStatus_, collectorStatus) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDBClusterAuditLogCollectorResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The status of SQL collector. Valid values:
    // 
    // *   Enable
    // *   Disabled
    shared_ptr<string> collectorStatus_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
