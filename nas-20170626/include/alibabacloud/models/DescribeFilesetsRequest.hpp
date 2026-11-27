// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEFILESETSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEFILESETSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace NAS20170626
{
namespace Models
{
  class DescribeFilesetsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeFilesetsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(FileSystemId, fileSystemId_);
      DARABONBA_PTR_TO_JSON(Filters, filters_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(OrderByField, orderByField_);
      DARABONBA_PTR_TO_JSON(SortOrder, sortOrder_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeFilesetsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(FileSystemId, fileSystemId_);
      DARABONBA_PTR_FROM_JSON(Filters, filters_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(OrderByField, orderByField_);
      DARABONBA_PTR_FROM_JSON(SortOrder, sortOrder_);
    };
    DescribeFilesetsRequest() = default ;
    DescribeFilesetsRequest(const DescribeFilesetsRequest &) = default ;
    DescribeFilesetsRequest(DescribeFilesetsRequest &&) = default ;
    DescribeFilesetsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeFilesetsRequest() = default ;
    DescribeFilesetsRequest& operator=(const DescribeFilesetsRequest &) = default ;
    DescribeFilesetsRequest& operator=(DescribeFilesetsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Filters : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Filters& obj) { 
        DARABONBA_PTR_TO_JSON(Key, key_);
        DARABONBA_PTR_TO_JSON(Value, value_);
      };
      friend void from_json(const Darabonba::Json& j, Filters& obj) { 
        DARABONBA_PTR_FROM_JSON(Key, key_);
        DARABONBA_PTR_FROM_JSON(Value, value_);
      };
      Filters() = default ;
      Filters(const Filters &) = default ;
      Filters(Filters &&) = default ;
      Filters(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Filters() = default ;
      Filters& operator=(const Filters &) = default ;
      Filters& operator=(Filters &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->key_ == nullptr
        && this->value_ == nullptr; };
      // key Field Functions 
      bool hasKey() const { return this->key_ != nullptr;};
      void deleteKey() { this->key_ = nullptr;};
      inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
      inline Filters& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


      // value Field Functions 
      bool hasValue() const { return this->value_ != nullptr;};
      void deleteValue() { this->value_ = nullptr;};
      inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
      inline Filters& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


    protected:
      // The name of the filter key. Valid values:
      // 
      // - FsetIds: Filters by fileset ID.
      // - FileSystemPath: Filters by the path of the fileset in the CPFS file system.
      // - Description: Filters by the description of the fileset.
      // - QuotaExists: Filters by whether a quota exists.
      // > Only CPFS for Lingjun 2.7.0 and later support filtering by the QuotaExists parameter.
      shared_ptr<string> key_ {};
      // The value of the filter key. This parameter does not support wildcards.
      // 
      // - When Key is set to FsetIds, Value is set to the fileset ID. You can specify one or more fileset IDs. You can specify up to 10 fileset IDs. Separate multiple values with commas (,). Example: `fset-1902718ea0ae****` or `fset-1902718ea0ae****,fset-3212718ea0ae****`.
      // - When Key is set to FileSystemPath, Value is set to the path or a part of the path of the fileset in the CPFS file system. The value must be 2 to 1,024 characters in length and encoded in UTF-8.
      // - When Key is set to Description, Value is set to the description or a part of the description of the fileset.
      // - When Key is set to QuotaExists, Value is set to true or false. If you do not specify this parameter, all filesets are returned.
      shared_ptr<string> value_ {};
    };

    virtual bool empty() const override { return this->fileSystemId_ == nullptr
        && this->filters_ == nullptr && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->orderByField_ == nullptr && this->sortOrder_ == nullptr; };
    // fileSystemId Field Functions 
    bool hasFileSystemId() const { return this->fileSystemId_ != nullptr;};
    void deleteFileSystemId() { this->fileSystemId_ = nullptr;};
    inline string getFileSystemId() const { DARABONBA_PTR_GET_DEFAULT(fileSystemId_, "") };
    inline DescribeFilesetsRequest& setFileSystemId(string fileSystemId) { DARABONBA_PTR_SET_VALUE(fileSystemId_, fileSystemId) };


    // filters Field Functions 
    bool hasFilters() const { return this->filters_ != nullptr;};
    void deleteFilters() { this->filters_ = nullptr;};
    inline const vector<DescribeFilesetsRequest::Filters> & getFilters() const { DARABONBA_PTR_GET_CONST(filters_, vector<DescribeFilesetsRequest::Filters>) };
    inline vector<DescribeFilesetsRequest::Filters> getFilters() { DARABONBA_PTR_GET(filters_, vector<DescribeFilesetsRequest::Filters>) };
    inline DescribeFilesetsRequest& setFilters(const vector<DescribeFilesetsRequest::Filters> & filters) { DARABONBA_PTR_SET_VALUE(filters_, filters) };
    inline DescribeFilesetsRequest& setFilters(vector<DescribeFilesetsRequest::Filters> && filters) { DARABONBA_PTR_SET_RVALUE(filters_, filters) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int64_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0L) };
    inline DescribeFilesetsRequest& setMaxResults(int64_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribeFilesetsRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // orderByField Field Functions 
    bool hasOrderByField() const { return this->orderByField_ != nullptr;};
    void deleteOrderByField() { this->orderByField_ = nullptr;};
    inline string getOrderByField() const { DARABONBA_PTR_GET_DEFAULT(orderByField_, "") };
    inline DescribeFilesetsRequest& setOrderByField(string orderByField) { DARABONBA_PTR_SET_VALUE(orderByField_, orderByField) };


    // sortOrder Field Functions 
    bool hasSortOrder() const { return this->sortOrder_ != nullptr;};
    void deleteSortOrder() { this->sortOrder_ = nullptr;};
    inline string getSortOrder() const { DARABONBA_PTR_GET_DEFAULT(sortOrder_, "") };
    inline DescribeFilesetsRequest& setSortOrder(string sortOrder) { DARABONBA_PTR_SET_VALUE(sortOrder_, sortOrder) };


  protected:
    // The file system ID.
    // 
    // - CPFS: Must start with `cpfs-`, such as cpfs-099394bd928c****.
    // 
    // - CPFS for Lingjun: Must start with `bmcpfs-`, such as bmcpfs-290w65p03ok64ya****.
    // > This operation supports only CPFS file systems (with an ID prefix of cpfs-* or bmcpfs-*). Standard NAS and Extreme NAS file systems are not supported.
    // 
    // This parameter is required.
    shared_ptr<string> fileSystemId_ {};
    // The filter conditions for the filesets to query.
    shared_ptr<vector<DescribeFilesetsRequest::Filters>> filters_ {};
    // The maximum number of entries to return for a single request.
    // 
    // Valid values: 10 to 100. Default value: 20.
    shared_ptr<int64_t> maxResults_ {};
    // The pagination token. If the returned results are truncated, you can use this token to initiate another request to retrieve the remaining results.
    shared_ptr<string> nextToken_ {};
    // The sort field.
    // 
    // - FileCountLimit: The file count limit of the quota.
    // - SizeLimit: The capacity limit of the quota.
    // - FileCountUsage: The file count usage.
    // - SpaceUsage: The capacity usage.
    shared_ptr<string> orderByField_ {};
    // The sort order.
    // 
    // - asc (default): Ascending order. Results are sorted from smallest to largest.
    // - desc: Descending order. Results are sorted from largest to smallest.
    // > This parameter takes effect only when the OrderByField parameter is specified.
    shared_ptr<string> sortOrder_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace NAS20170626
#endif
