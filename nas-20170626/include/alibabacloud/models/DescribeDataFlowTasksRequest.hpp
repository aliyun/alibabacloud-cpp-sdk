// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDATAFLOWTASKSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDATAFLOWTASKSREQUEST_HPP_
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
  class DescribeDataFlowTasksRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDataFlowTasksRequest& obj) { 
      DARABONBA_PTR_TO_JSON(FileSystemId, fileSystemId_);
      DARABONBA_PTR_TO_JSON(Filters, filters_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(WithReports, withReports_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDataFlowTasksRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(FileSystemId, fileSystemId_);
      DARABONBA_PTR_FROM_JSON(Filters, filters_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(WithReports, withReports_);
    };
    DescribeDataFlowTasksRequest() = default ;
    DescribeDataFlowTasksRequest(const DescribeDataFlowTasksRequest &) = default ;
    DescribeDataFlowTasksRequest(DescribeDataFlowTasksRequest &&) = default ;
    DescribeDataFlowTasksRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDataFlowTasksRequest() = default ;
    DescribeDataFlowTasksRequest& operator=(const DescribeDataFlowTasksRequest &) = default ;
    DescribeDataFlowTasksRequest& operator=(DescribeDataFlowTasksRequest &&) = default ;
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
      // The filter key.
      // 
      // Valid values:
      // 
      // - DataFlowIds: Filters by data flow ID.
      // 
      // - TaskIds: Filters by data flow task ID.
      // 
      // - Originator: Filters by originator.
      // 
      // - TaskActions: Filters by data flow task type.
      // 
      // - DataTypes: Filters by data type.
      // 
      // - Status: Filters by status.
      // 
      // - CreateTimeBegin: Filters data flow tasks created after the specified time.
      // 
      // - CreateTimeEnd: Filters data flow tasks created before the specified time.
      // 
      // - StartTimeBegin: Filters data flow tasks that started after the specified time.
      // 
      // - StartTimeEnd: Filters data flow tasks that started before the specified time.
      // 
      // - EndTimeBegin: Filters data flow tasks that ended after the specified time.
      // 
      // - EndTimeEnd: Filters data flow tasks that ended before the specified time.
      shared_ptr<string> key_ {};
      // The filter value. This parameter does not support wildcards.
      // 
      // - When `Key` is `DataFlowIds`, specify one or more data flow IDs. You can specify up to 10 data flow IDs, separated by commas. For example, `df-194433a5be31****` or `df-194433a512a2****,df-234533a5be31****`.
      // 
      // - When `Key` is `TaskId`, specify one or more data flow task IDs. You can specify up to 10 data flow task IDs, separated by commas. For example, `task-38aa8e890f45****` or `task-38aa8e890f45****,task-29ae8e890f45****`.
      // 
      // - When `Key` is `TaskActions`, specify the data flow task type. Valid values are **Import**, **Export**, **Evict**, **Inventory**, **StreamImport**, and **StreamExport**. You can specify multiple values. CPFS for AI Computing supports only Import, Export, StreamImport, and StreamExport. StreamImport and StreamExport are available only in CPFS for AI Computing 2.6.0 and later.
      // 
      // - When `Key` is `DataTypes`, specify the data type of the data flow task. Valid values are MetaAndData, Metadata, and Data. You can specify multiple values.
      // 
      // - When `Key` is `Originator`, specify the originator of the data flow task. Valid values are User and System.
      // 
      // - When `Key` is `Status`, specify the status of the data flow task. Valid values are Pending, Executing, Failed, Completed, Canceling, and Canceled. You can specify multiple values.
      // 
      // - When `Key` is `CreateTimeBegin`, specify the earliest creation time. Use the `yyyy-MM-ddTHH:mmZ` format.
      // 
      // - When `Key` is `CreateTimeEnd`, specify the latest creation time. Use the `yyyy-MM-ddTHH:mmZ` format.
      // 
      // - When `Key` is `StartTimeBegin`, specify the earliest start time. Use the `yyyy-MM-ddTHH:mmZ` format.
      // 
      // - When `Key` is `StartTimeEnd`, specify the latest start time. Use the `yyyy-MM-ddTHH:mmZ` format.
      // 
      // - When `Key` is `EndTimeBegin`, specify the earliest end time. Use the `yyyy-MM-ddTHH:mmZ` format.
      // 
      // - When `Key` is `EndTimeEnd`, specify the latest end time. Use the `yyyy-MM-ddTHH:mmZ` format.
      shared_ptr<string> value_ {};
    };

    virtual bool empty() const override { return this->fileSystemId_ == nullptr
        && this->filters_ == nullptr && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->withReports_ == nullptr; };
    // fileSystemId Field Functions 
    bool hasFileSystemId() const { return this->fileSystemId_ != nullptr;};
    void deleteFileSystemId() { this->fileSystemId_ = nullptr;};
    inline string getFileSystemId() const { DARABONBA_PTR_GET_DEFAULT(fileSystemId_, "") };
    inline DescribeDataFlowTasksRequest& setFileSystemId(string fileSystemId) { DARABONBA_PTR_SET_VALUE(fileSystemId_, fileSystemId) };


    // filters Field Functions 
    bool hasFilters() const { return this->filters_ != nullptr;};
    void deleteFilters() { this->filters_ = nullptr;};
    inline const vector<DescribeDataFlowTasksRequest::Filters> & getFilters() const { DARABONBA_PTR_GET_CONST(filters_, vector<DescribeDataFlowTasksRequest::Filters>) };
    inline vector<DescribeDataFlowTasksRequest::Filters> getFilters() { DARABONBA_PTR_GET(filters_, vector<DescribeDataFlowTasksRequest::Filters>) };
    inline DescribeDataFlowTasksRequest& setFilters(const vector<DescribeDataFlowTasksRequest::Filters> & filters) { DARABONBA_PTR_SET_VALUE(filters_, filters) };
    inline DescribeDataFlowTasksRequest& setFilters(vector<DescribeDataFlowTasksRequest::Filters> && filters) { DARABONBA_PTR_SET_RVALUE(filters_, filters) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int64_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0L) };
    inline DescribeDataFlowTasksRequest& setMaxResults(int64_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribeDataFlowTasksRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // withReports Field Functions 
    bool hasWithReports() const { return this->withReports_ != nullptr;};
    void deleteWithReports() { this->withReports_ = nullptr;};
    inline bool getWithReports() const { DARABONBA_PTR_GET_DEFAULT(withReports_, false) };
    inline DescribeDataFlowTasksRequest& setWithReports(bool withReports) { DARABONBA_PTR_SET_VALUE(withReports_, withReports) };


  protected:
    // The file system ID.
    // 
    // - CPFS General-purpose: The ID must start with `cpfs-`, such as cpfs-099394bd928c\\*\\*\\*\\*.
    // 
    // - CPFS for AI Computing: The ID must start with `bmcpfs-`, such as bmcpfs-290w65p03ok64ya\\*\\*\\*\\*.
    // 
    // This parameter is required.
    shared_ptr<string> fileSystemId_ {};
    // A collection of filters.
    shared_ptr<vector<DescribeDataFlowTasksRequest::Filters>> filters_ {};
    // The maximum number of results to return per page.
    // 
    // Valid values: 10 to 100.
    // 
    // Default value: 20.
    shared_ptr<int64_t> maxResults_ {};
    // The pagination token for the next page of results. If the response is truncated, use this token in your next request to retrieve the subsequent page.
    shared_ptr<string> nextToken_ {};
    // Specifies whether to return report information.
    // 
    // - True (default): Includes reports in the response.
    // 
    // - False: Excludes reports from the response.
    // 
    // > * Set this parameter to False to speed up the query.
    // >
    // > * This parameter is supported only in CPFS for AI Computing.
    shared_ptr<bool> withReports_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace NAS20170626
#endif
