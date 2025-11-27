// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEREPLICATIONLINKLOGSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEREPLICATIONLINKLOGSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeReplicationLinkLogsResponseBodyItems.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class DescribeReplicationLinkLogsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeReplicationLinkLogsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_TO_JSON(Items, items_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalSize, totalSize_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeReplicationLinkLogsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_FROM_JSON(Items, items_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalSize, totalSize_);
    };
    DescribeReplicationLinkLogsResponseBody() = default ;
    DescribeReplicationLinkLogsResponseBody(const DescribeReplicationLinkLogsResponseBody &) = default ;
    DescribeReplicationLinkLogsResponseBody(DescribeReplicationLinkLogsResponseBody &&) = default ;
    DescribeReplicationLinkLogsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeReplicationLinkLogsResponseBody() = default ;
    DescribeReplicationLinkLogsResponseBody& operator=(const DescribeReplicationLinkLogsResponseBody &) = default ;
    DescribeReplicationLinkLogsResponseBody& operator=(DescribeReplicationLinkLogsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->DBInstanceId_ == nullptr
        && return this->items_ == nullptr && return this->requestId_ == nullptr && return this->totalSize_ == nullptr; };
    // DBInstanceId Field Functions 
    bool hasDBInstanceId() const { return this->DBInstanceId_ != nullptr;};
    void deleteDBInstanceId() { this->DBInstanceId_ = nullptr;};
    inline string DBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceId_, "") };
    inline DescribeReplicationLinkLogsResponseBody& setDBInstanceId(string DBInstanceId) { DARABONBA_PTR_SET_VALUE(DBInstanceId_, DBInstanceId) };


    // items Field Functions 
    bool hasItems() const { return this->items_ != nullptr;};
    void deleteItems() { this->items_ = nullptr;};
    inline const vector<DescribeReplicationLinkLogsResponseBodyItems> & items() const { DARABONBA_PTR_GET_CONST(items_, vector<DescribeReplicationLinkLogsResponseBodyItems>) };
    inline vector<DescribeReplicationLinkLogsResponseBodyItems> items() { DARABONBA_PTR_GET(items_, vector<DescribeReplicationLinkLogsResponseBodyItems>) };
    inline DescribeReplicationLinkLogsResponseBody& setItems(const vector<DescribeReplicationLinkLogsResponseBodyItems> & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
    inline DescribeReplicationLinkLogsResponseBody& setItems(vector<DescribeReplicationLinkLogsResponseBodyItems> && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeReplicationLinkLogsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalSize Field Functions 
    bool hasTotalSize() const { return this->totalSize_ != nullptr;};
    void deleteTotalSize() { this->totalSize_ = nullptr;};
    inline int32_t totalSize() const { DARABONBA_PTR_GET_DEFAULT(totalSize_, 0) };
    inline DescribeReplicationLinkLogsResponseBody& setTotalSize(int32_t totalSize) { DARABONBA_PTR_SET_VALUE(totalSize_, totalSize) };


  protected:
    // The ID of the instance.
    std::shared_ptr<string> DBInstanceId_ = nullptr;
    // The items.
    std::shared_ptr<vector<DescribeReplicationLinkLogsResponseBodyItems>> items_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The total number of entries returned.
    std::shared_ptr<int32_t> totalSize_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
