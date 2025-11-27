// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDBINSTANCEHACONFIGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDBINSTANCEHACONFIGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeDBInstanceHAConfigResponseBodyHostInstanceInfos.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class DescribeDBInstanceHAConfigResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDBInstanceHAConfigResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_TO_JSON(HAMode, HAMode_);
      DARABONBA_PTR_TO_JSON(HostInstanceInfos, hostInstanceInfos_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SyncMode, syncMode_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDBInstanceHAConfigResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_FROM_JSON(HAMode, HAMode_);
      DARABONBA_PTR_FROM_JSON(HostInstanceInfos, hostInstanceInfos_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SyncMode, syncMode_);
    };
    DescribeDBInstanceHAConfigResponseBody() = default ;
    DescribeDBInstanceHAConfigResponseBody(const DescribeDBInstanceHAConfigResponseBody &) = default ;
    DescribeDBInstanceHAConfigResponseBody(DescribeDBInstanceHAConfigResponseBody &&) = default ;
    DescribeDBInstanceHAConfigResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDBInstanceHAConfigResponseBody() = default ;
    DescribeDBInstanceHAConfigResponseBody& operator=(const DescribeDBInstanceHAConfigResponseBody &) = default ;
    DescribeDBInstanceHAConfigResponseBody& operator=(DescribeDBInstanceHAConfigResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->DBInstanceId_ == nullptr
        && return this->HAMode_ == nullptr && return this->hostInstanceInfos_ == nullptr && return this->requestId_ == nullptr && return this->syncMode_ == nullptr; };
    // DBInstanceId Field Functions 
    bool hasDBInstanceId() const { return this->DBInstanceId_ != nullptr;};
    void deleteDBInstanceId() { this->DBInstanceId_ = nullptr;};
    inline string DBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceId_, "") };
    inline DescribeDBInstanceHAConfigResponseBody& setDBInstanceId(string DBInstanceId) { DARABONBA_PTR_SET_VALUE(DBInstanceId_, DBInstanceId) };


    // HAMode Field Functions 
    bool hasHAMode() const { return this->HAMode_ != nullptr;};
    void deleteHAMode() { this->HAMode_ = nullptr;};
    inline string HAMode() const { DARABONBA_PTR_GET_DEFAULT(HAMode_, "") };
    inline DescribeDBInstanceHAConfigResponseBody& setHAMode(string HAMode) { DARABONBA_PTR_SET_VALUE(HAMode_, HAMode) };


    // hostInstanceInfos Field Functions 
    bool hasHostInstanceInfos() const { return this->hostInstanceInfos_ != nullptr;};
    void deleteHostInstanceInfos() { this->hostInstanceInfos_ = nullptr;};
    inline const DescribeDBInstanceHAConfigResponseBodyHostInstanceInfos & hostInstanceInfos() const { DARABONBA_PTR_GET_CONST(hostInstanceInfos_, DescribeDBInstanceHAConfigResponseBodyHostInstanceInfos) };
    inline DescribeDBInstanceHAConfigResponseBodyHostInstanceInfos hostInstanceInfos() { DARABONBA_PTR_GET(hostInstanceInfos_, DescribeDBInstanceHAConfigResponseBodyHostInstanceInfos) };
    inline DescribeDBInstanceHAConfigResponseBody& setHostInstanceInfos(const DescribeDBInstanceHAConfigResponseBodyHostInstanceInfos & hostInstanceInfos) { DARABONBA_PTR_SET_VALUE(hostInstanceInfos_, hostInstanceInfos) };
    inline DescribeDBInstanceHAConfigResponseBody& setHostInstanceInfos(DescribeDBInstanceHAConfigResponseBodyHostInstanceInfos && hostInstanceInfos) { DARABONBA_PTR_SET_RVALUE(hostInstanceInfos_, hostInstanceInfos) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDBInstanceHAConfigResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // syncMode Field Functions 
    bool hasSyncMode() const { return this->syncMode_ != nullptr;};
    void deleteSyncMode() { this->syncMode_ = nullptr;};
    inline string syncMode() const { DARABONBA_PTR_GET_DEFAULT(syncMode_, "") };
    inline DescribeDBInstanceHAConfigResponseBody& setSyncMode(string syncMode) { DARABONBA_PTR_SET_VALUE(syncMode_, syncMode) };


  protected:
    // The instance ID.
    std::shared_ptr<string> DBInstanceId_ = nullptr;
    // The high availability mode of the instance. Valid values:
    // 
    // *   **RPO**: Data consistency is preferred. The instance ensures data reliability to minimize data losses. If you have high requirements on data consistency, select this mode.
    // *   **RTO**: Service availability is preferred. The instance restores the database service at the earliest opportunity to ensure service availability. If you have high requirements on instance availability, select this mode.
    // 
    // > This parameter is returned only for instances that run MySQL.
    std::shared_ptr<string> HAMode_ = nullptr;
    // An array that consists of the information of the primary and secondary instances.
    std::shared_ptr<DescribeDBInstanceHAConfigResponseBodyHostInstanceInfos> hostInstanceInfos_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The data replication mode of the instance. Valid values:
    // 
    // *   **Sync**: the synchronous mode
    // *   **Semi-sync**: the semi-synchronous replication mode
    // *   **Async**: the asynchronous mode
    // 
    // > This parameter is returned only for instances that run MySQL.
    std::shared_ptr<string> syncMode_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
