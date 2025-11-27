// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDBINSTANCEPROMOTEACTIVITYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDBINSTANCEPROMOTEACTIVITYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class DescribeDBInstancePromoteActivityResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDBInstancePromoteActivityResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AliUid, aliUid_);
      DARABONBA_PTR_TO_JSON(Bid, bid_);
      DARABONBA_PTR_TO_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_TO_JSON(DBInstanceName, DBInstanceName_);
      DARABONBA_PTR_TO_JSON(DBType, DBType_);
      DARABONBA_PTR_TO_JSON(IsActivity, isActivity_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDBInstancePromoteActivityResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AliUid, aliUid_);
      DARABONBA_PTR_FROM_JSON(Bid, bid_);
      DARABONBA_PTR_FROM_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_FROM_JSON(DBInstanceName, DBInstanceName_);
      DARABONBA_PTR_FROM_JSON(DBType, DBType_);
      DARABONBA_PTR_FROM_JSON(IsActivity, isActivity_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeDBInstancePromoteActivityResponseBody() = default ;
    DescribeDBInstancePromoteActivityResponseBody(const DescribeDBInstancePromoteActivityResponseBody &) = default ;
    DescribeDBInstancePromoteActivityResponseBody(DescribeDBInstancePromoteActivityResponseBody &&) = default ;
    DescribeDBInstancePromoteActivityResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDBInstancePromoteActivityResponseBody() = default ;
    DescribeDBInstancePromoteActivityResponseBody& operator=(const DescribeDBInstancePromoteActivityResponseBody &) = default ;
    DescribeDBInstancePromoteActivityResponseBody& operator=(DescribeDBInstancePromoteActivityResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->aliUid_ == nullptr
        && return this->bid_ == nullptr && return this->DBInstanceId_ == nullptr && return this->DBInstanceName_ == nullptr && return this->DBType_ == nullptr && return this->isActivity_ == nullptr
        && return this->requestId_ == nullptr; };
    // aliUid Field Functions 
    bool hasAliUid() const { return this->aliUid_ != nullptr;};
    void deleteAliUid() { this->aliUid_ = nullptr;};
    inline string aliUid() const { DARABONBA_PTR_GET_DEFAULT(aliUid_, "") };
    inline DescribeDBInstancePromoteActivityResponseBody& setAliUid(string aliUid) { DARABONBA_PTR_SET_VALUE(aliUid_, aliUid) };


    // bid Field Functions 
    bool hasBid() const { return this->bid_ != nullptr;};
    void deleteBid() { this->bid_ = nullptr;};
    inline string bid() const { DARABONBA_PTR_GET_DEFAULT(bid_, "") };
    inline DescribeDBInstancePromoteActivityResponseBody& setBid(string bid) { DARABONBA_PTR_SET_VALUE(bid_, bid) };


    // DBInstanceId Field Functions 
    bool hasDBInstanceId() const { return this->DBInstanceId_ != nullptr;};
    void deleteDBInstanceId() { this->DBInstanceId_ = nullptr;};
    inline string DBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceId_, "") };
    inline DescribeDBInstancePromoteActivityResponseBody& setDBInstanceId(string DBInstanceId) { DARABONBA_PTR_SET_VALUE(DBInstanceId_, DBInstanceId) };


    // DBInstanceName Field Functions 
    bool hasDBInstanceName() const { return this->DBInstanceName_ != nullptr;};
    void deleteDBInstanceName() { this->DBInstanceName_ = nullptr;};
    inline string DBInstanceName() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceName_, "") };
    inline DescribeDBInstancePromoteActivityResponseBody& setDBInstanceName(string DBInstanceName) { DARABONBA_PTR_SET_VALUE(DBInstanceName_, DBInstanceName) };


    // DBType Field Functions 
    bool hasDBType() const { return this->DBType_ != nullptr;};
    void deleteDBType() { this->DBType_ = nullptr;};
    inline string DBType() const { DARABONBA_PTR_GET_DEFAULT(DBType_, "") };
    inline DescribeDBInstancePromoteActivityResponseBody& setDBType(string DBType) { DARABONBA_PTR_SET_VALUE(DBType_, DBType) };


    // isActivity Field Functions 
    bool hasIsActivity() const { return this->isActivity_ != nullptr;};
    void deleteIsActivity() { this->isActivity_ = nullptr;};
    inline string isActivity() const { DARABONBA_PTR_GET_DEFAULT(isActivity_, "") };
    inline DescribeDBInstancePromoteActivityResponseBody& setIsActivity(string isActivity) { DARABONBA_PTR_SET_VALUE(isActivity_, isActivity) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDBInstancePromoteActivityResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The ID of the Alibaba Cloud account.
    std::shared_ptr<string> aliUid_ = nullptr;
    // *   China site: 26842
    // *   International site: 26888
    std::shared_ptr<string> bid_ = nullptr;
    // The instance ID. You can call the [DescribeDBInstances](https://help.aliyun.com/document_detail/26232.html) operation to query the instance ID.
    std::shared_ptr<string> DBInstanceId_ = nullptr;
    // The instance name.
    std::shared_ptr<string> DBInstanceName_ = nullptr;
    // The type of the database engine. Valid values:
    // 
    // *   **MySQL**
    // *   **PostgreSQL**
    // *   **Oracle**
    std::shared_ptr<string> DBType_ = nullptr;
    // The activity information about the instance. For more information, see [Instance activities](https://help.aliyun.com/document_detail/2391834.html).
    std::shared_ptr<string> isActivity_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
