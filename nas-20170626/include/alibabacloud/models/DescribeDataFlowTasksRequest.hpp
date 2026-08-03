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
      // The name of the filter key.
      // 
      // Valid values:
      // 
      // - DataFlowIds: filters by data flow ID.
      // - TaskIds: filters by data flow task ID.
      // - Originator: filters by the initiator of the data flow task.
      // - TaskActions: filters by the type of the data flow task.
      // - DataTypes: filters by the data type of the data flow task.
      // - Status: filters by data flow status.
      // - CreateTimeBegin: filters data flow tasks created after the specified time.
      // - CreateTimeEnd: filters data flow tasks created before the specified time.
      // - StartTimeBegin: filters data flow tasks started after the specified time.
      // - StartTimeEnd: filters data flow tasks started before the specified time.
      // - EndTimeBegin: filters data flow tasks ended after the specified time.
      // - EndTimeEnd: filters data flow tasks ended before the specified time.
      shared_ptr<string> key_ {};
      // The value of the filter key. Wildcards are not supported.
      // 
      // - If Key is set to DataFlowIds, Value is set to a data flow ID or part of a data flow ID. You can specify one or more data flow IDs. A maximum of 10 data flow IDs can be specified. Example: `df-194433a5be31****` or `df-194433a512a2****,df-234533a5be31****`.
      // - If Key is set to TaskId, Value is set to a data flow task ID or part of a data flow task ID. You can specify one or more data flow task IDs. A maximum of 10 data flow task IDs can be specified. Example: `task-38aa8e890f45****` or `task-38aa8e890f45****,task-29ae8e890f45****`.
      // - If Key is set to TaskActions, Value is set to the type of the data flow task, including **Import**, **Export**, **Evict**, **Inventory**, **StreamImport**, and **StreamExport**. Combined queries are supported. CPFS for Lingjun supports only Import, Export, StreamImport, and StreamExport. StreamImport and StreamExport are supported only by CPFS for Lingjun 2.6.0 and later.
      // - If Key is set to DataTypes, Value is set to the data type of the data flow task, including MetaAndData, Metadata, and Data. Combined queries are supported.
      // - If Key is set to Originator, Value is set to the initiator of the data flow task, including User and System.
      // - If Key is set to Status, Value is set to the status of the data flow task, including Pending, Executing, Failed, Completed, Canceling, and Canceled. Combined queries are supported.
      // - If Key is set to CreateTimeBegin, Value is set to the earliest creation time of data flow tasks. Format: `yyyy-MM-ddThh:mmZ`.
      // - If Key is set to CreateTimeEnd, Value is set to the latest creation time of data flow tasks. Format: `yyyy-MM-ddThh:mmZ`.
      // - If Key is set to StartTimeBegin, Value is set to the earliest start time of data flow tasks. Format: `yyyy-MM-ddThh:mmZ`.
      // - If Key is set to StartTimeEnd, Value is set to the latest start time of data flow tasks. Format: `yyyy-MM-ddThh:mmZ`.
      // - If Key is set to EndTimeBegin, Value is set to the earliest end time of data flow tasks. Format: `yyyy-MM-ddThh:mmZ`.
      // - If Key is set to EndTimeEnd, Value is set to the latest end time of data flow tasks. Format: `yyyy-MM-ddThh:mmZ`.
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
    // - General-purpose CPFS: must start with `cpfs-`, such as cpfs-099394bd928c****.
    // 
    // - CPFS for Lingjun: must start with `bmcpfs-`, such as bmcpfs-290w65p03ok64ya****.
    // 
    // This parameter is required.
    shared_ptr<string> fileSystemId_ {};
    // The filter conditions.
    shared_ptr<vector<DescribeDataFlowTasksRequest::Filters>> filters_ {};
    // The number of results for each query.
    // 
    // Valid values: 10 to 100.
    // 
    // Default value: 20.
    shared_ptr<int64_t> maxResults_ {};
    // The pagination token that is used in the next request to retrieve a new page of results. If the return results are truncated, you can use NextToken to initiate a new request to retrieve the content after the truncation point.
    shared_ptr<string> nextToken_ {};
    // Specifies whether to query report information.
    // 
    // - True (default): queries reports.
    // - False: does not query reports.
    // 
    // >- Setting this parameter to False can speed up queries.
    // > - Only CPFS for Lingjun is supported.
    shared_ptr<bool> withReports_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace NAS20170626
#endif
