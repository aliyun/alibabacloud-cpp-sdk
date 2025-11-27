// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEMODIFYPGHBACONFIGLOGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEMODIFYPGHBACONFIGLOGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeModifyPGHbaConfigLogResponseBodyHbaLogItems.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class DescribeModifyPGHbaConfigLogResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeModifyPGHbaConfigLogResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_TO_JSON(HbaLogItems, hbaLogItems_);
      DARABONBA_PTR_TO_JSON(LogItemCount, logItemCount_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeModifyPGHbaConfigLogResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_FROM_JSON(HbaLogItems, hbaLogItems_);
      DARABONBA_PTR_FROM_JSON(LogItemCount, logItemCount_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeModifyPGHbaConfigLogResponseBody() = default ;
    DescribeModifyPGHbaConfigLogResponseBody(const DescribeModifyPGHbaConfigLogResponseBody &) = default ;
    DescribeModifyPGHbaConfigLogResponseBody(DescribeModifyPGHbaConfigLogResponseBody &&) = default ;
    DescribeModifyPGHbaConfigLogResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeModifyPGHbaConfigLogResponseBody() = default ;
    DescribeModifyPGHbaConfigLogResponseBody& operator=(const DescribeModifyPGHbaConfigLogResponseBody &) = default ;
    DescribeModifyPGHbaConfigLogResponseBody& operator=(DescribeModifyPGHbaConfigLogResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->DBInstanceId_ == nullptr
        && return this->hbaLogItems_ == nullptr && return this->logItemCount_ == nullptr && return this->requestId_ == nullptr; };
    // DBInstanceId Field Functions 
    bool hasDBInstanceId() const { return this->DBInstanceId_ != nullptr;};
    void deleteDBInstanceId() { this->DBInstanceId_ = nullptr;};
    inline string DBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceId_, "") };
    inline DescribeModifyPGHbaConfigLogResponseBody& setDBInstanceId(string DBInstanceId) { DARABONBA_PTR_SET_VALUE(DBInstanceId_, DBInstanceId) };


    // hbaLogItems Field Functions 
    bool hasHbaLogItems() const { return this->hbaLogItems_ != nullptr;};
    void deleteHbaLogItems() { this->hbaLogItems_ = nullptr;};
    inline const DescribeModifyPGHbaConfigLogResponseBodyHbaLogItems & hbaLogItems() const { DARABONBA_PTR_GET_CONST(hbaLogItems_, DescribeModifyPGHbaConfigLogResponseBodyHbaLogItems) };
    inline DescribeModifyPGHbaConfigLogResponseBodyHbaLogItems hbaLogItems() { DARABONBA_PTR_GET(hbaLogItems_, DescribeModifyPGHbaConfigLogResponseBodyHbaLogItems) };
    inline DescribeModifyPGHbaConfigLogResponseBody& setHbaLogItems(const DescribeModifyPGHbaConfigLogResponseBodyHbaLogItems & hbaLogItems) { DARABONBA_PTR_SET_VALUE(hbaLogItems_, hbaLogItems) };
    inline DescribeModifyPGHbaConfigLogResponseBody& setHbaLogItems(DescribeModifyPGHbaConfigLogResponseBodyHbaLogItems && hbaLogItems) { DARABONBA_PTR_SET_RVALUE(hbaLogItems_, hbaLogItems) };


    // logItemCount Field Functions 
    bool hasLogItemCount() const { return this->logItemCount_ != nullptr;};
    void deleteLogItemCount() { this->logItemCount_ = nullptr;};
    inline int32_t logItemCount() const { DARABONBA_PTR_GET_DEFAULT(logItemCount_, 0) };
    inline DescribeModifyPGHbaConfigLogResponseBody& setLogItemCount(int32_t logItemCount) { DARABONBA_PTR_SET_VALUE(logItemCount_, logItemCount) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeModifyPGHbaConfigLogResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The instance ID.
    std::shared_ptr<string> DBInstanceId_ = nullptr;
    // An array that consists of the modifications to the pg_hba.conf file.
    std::shared_ptr<DescribeModifyPGHbaConfigLogResponseBodyHbaLogItems> hbaLogItems_ = nullptr;
    // The number of modification records.
    std::shared_ptr<int32_t> logItemCount_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
