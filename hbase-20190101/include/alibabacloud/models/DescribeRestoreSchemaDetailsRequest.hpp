// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERESTORESCHEMADETAILSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERESTORESCHEMADETAILSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace HBase20190101
{
namespace Models
{
  class DescribeRestoreSchemaDetailsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRestoreSchemaDetailsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RestoreRecordId, restoreRecordId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRestoreSchemaDetailsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RestoreRecordId, restoreRecordId_);
    };
    DescribeRestoreSchemaDetailsRequest() = default ;
    DescribeRestoreSchemaDetailsRequest(const DescribeRestoreSchemaDetailsRequest &) = default ;
    DescribeRestoreSchemaDetailsRequest(DescribeRestoreSchemaDetailsRequest &&) = default ;
    DescribeRestoreSchemaDetailsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRestoreSchemaDetailsRequest() = default ;
    DescribeRestoreSchemaDetailsRequest& operator=(const DescribeRestoreSchemaDetailsRequest &) = default ;
    DescribeRestoreSchemaDetailsRequest& operator=(DescribeRestoreSchemaDetailsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clusterId_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->restoreRecordId_ == nullptr; };
    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string getClusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline DescribeRestoreSchemaDetailsRequest& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeRestoreSchemaDetailsRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeRestoreSchemaDetailsRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // restoreRecordId Field Functions 
    bool hasRestoreRecordId() const { return this->restoreRecordId_ != nullptr;};
    void deleteRestoreRecordId() { this->restoreRecordId_ = nullptr;};
    inline string getRestoreRecordId() const { DARABONBA_PTR_GET_DEFAULT(restoreRecordId_, "") };
    inline DescribeRestoreSchemaDetailsRequest& setRestoreRecordId(string restoreRecordId) { DARABONBA_PTR_SET_VALUE(restoreRecordId_, restoreRecordId) };


  protected:
    // The cluster ID.
    // 
    // This parameter is required.
    shared_ptr<string> clusterId_ {};
    // The page number.
    shared_ptr<int32_t> pageNumber_ {};
    // The page size.
    shared_ptr<int32_t> pageSize_ {};
    // The backup record ID. You can call the DescribeBackupSummary operation to obtain the ID.
    // 
    // This parameter is required.
    shared_ptr<string> restoreRecordId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace HBase20190101
#endif
