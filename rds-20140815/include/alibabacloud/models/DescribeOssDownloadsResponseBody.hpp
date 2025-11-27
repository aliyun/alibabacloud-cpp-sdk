// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEOSSDOWNLOADSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEOSSDOWNLOADSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeOssDownloadsResponseBodyItems.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class DescribeOssDownloadsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeOssDownloadsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_TO_JSON(Items, items_);
      DARABONBA_PTR_TO_JSON(MigrateTaskId, migrateTaskId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeOssDownloadsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_FROM_JSON(Items, items_);
      DARABONBA_PTR_FROM_JSON(MigrateTaskId, migrateTaskId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeOssDownloadsResponseBody() = default ;
    DescribeOssDownloadsResponseBody(const DescribeOssDownloadsResponseBody &) = default ;
    DescribeOssDownloadsResponseBody(DescribeOssDownloadsResponseBody &&) = default ;
    DescribeOssDownloadsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeOssDownloadsResponseBody() = default ;
    DescribeOssDownloadsResponseBody& operator=(const DescribeOssDownloadsResponseBody &) = default ;
    DescribeOssDownloadsResponseBody& operator=(DescribeOssDownloadsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->DBInstanceId_ == nullptr
        && return this->items_ == nullptr && return this->migrateTaskId_ == nullptr && return this->requestId_ == nullptr; };
    // DBInstanceId Field Functions 
    bool hasDBInstanceId() const { return this->DBInstanceId_ != nullptr;};
    void deleteDBInstanceId() { this->DBInstanceId_ = nullptr;};
    inline string DBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceId_, "") };
    inline DescribeOssDownloadsResponseBody& setDBInstanceId(string DBInstanceId) { DARABONBA_PTR_SET_VALUE(DBInstanceId_, DBInstanceId) };


    // items Field Functions 
    bool hasItems() const { return this->items_ != nullptr;};
    void deleteItems() { this->items_ = nullptr;};
    inline const DescribeOssDownloadsResponseBodyItems & items() const { DARABONBA_PTR_GET_CONST(items_, DescribeOssDownloadsResponseBodyItems) };
    inline DescribeOssDownloadsResponseBodyItems items() { DARABONBA_PTR_GET(items_, DescribeOssDownloadsResponseBodyItems) };
    inline DescribeOssDownloadsResponseBody& setItems(const DescribeOssDownloadsResponseBodyItems & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
    inline DescribeOssDownloadsResponseBody& setItems(DescribeOssDownloadsResponseBodyItems && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


    // migrateTaskId Field Functions 
    bool hasMigrateTaskId() const { return this->migrateTaskId_ != nullptr;};
    void deleteMigrateTaskId() { this->migrateTaskId_ = nullptr;};
    inline string migrateTaskId() const { DARABONBA_PTR_GET_DEFAULT(migrateTaskId_, "") };
    inline DescribeOssDownloadsResponseBody& setMigrateTaskId(string migrateTaskId) { DARABONBA_PTR_SET_VALUE(migrateTaskId_, migrateTaskId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeOssDownloadsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The instance ID.
    std::shared_ptr<string> DBInstanceId_ = nullptr;
    // Details of the backup file.
    std::shared_ptr<DescribeOssDownloadsResponseBodyItems> items_ = nullptr;
    // The ID of the migration task.
    std::shared_ptr<string> migrateTaskId_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
