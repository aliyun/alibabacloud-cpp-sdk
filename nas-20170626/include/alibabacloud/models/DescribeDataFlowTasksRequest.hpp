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
      // - DataFlowIds: Filters by data flow ID.
      // - TaskIds: Filters by data flow task ID.
      // - Originator: Filters by the originator of the data flow task.
      // - TaskActions: Filters by the type of the data flow task.
      // - DataTypes: Filters by the data type of the data flow task.
      // - Status: Filters by the data flow status.
      // - CreateTimeBegin: Filters data flow tasks created after a specified time.
      // - CreateTimeEnd: Filters data flow tasks created before a specified time.
      // - StartTimeBegin: Filters data flow tasks started after a specified time.
      // - StartTimeEnd: Filters data flow tasks started before a specified time.
      // - EndTimeBegin: Filters data flow tasks ended after a specified time.
      // - EndTimeEnd: Filters data flow tasks ended before a specified time.
      shared_ptr<string> key_ {};
      // The value of the filter key. This parameter does not support wildcards.
      // 
      // - When Key is set to DataFlowIds, Value is set to the data flow ID or a part of the data flow ID. It can be a single DataFlowId or a list of DataFlowIds. You can specify up to 10 data flow IDs. Example: `df-194433a5be31****` or `df-194433a512a2****,df-234533a5be31****`.
      // - When Key is set to TaskIds, Value is set to the data flow task ID or a part of the data flow task ID. It can be a single task ID or a list of task IDs. You can specify up to 10 data flow task IDs. Example: `task-38aa8e890f45****` or `task-38aa8e890f45****,task-29ae8e890f45****`.
      // - When Key is set to TaskActions, Value is set to the task type of the data flow. Valid values: **Import**, **Export**, **Evict**, **Inventory**, **StreamImport**, and **StreamExport**. Combined queries are supported. Currently, CPFS for Lingjun only supports Import, Export, StreamImport, and StreamExport. StreamImport and StreamExport are supported only in CPFS for Lingjun 2.6.0 and later.
      // - When Key is set to DataTypes, Value is set to the data type of the data flow task. Valid values: MetaAndData, Metadata, and Data. Combined queries are supported.
      // - When Key is set to Originator, Value is set to the originator of the data flow task. Valid values: User and System.
      // - When Key is set to Status, Value is set to the status of the data flow task. Valid values: Pending, Executing, Failed, Completed, Canceling, and Canceled. Combined queries are supported.
      // - When Key is set to CreateTimeBegin, Value is set to the minimum creation time of the data flow task. Format: `yyyy-MM-ddThh:mmZ`.
      // - When Key is set to CreateTimeEnd, Value is set to the maximum creation time of the data flow task. Format: `yyyy-MM-ddThh:mmZ`.
      // - When Key is set to StartTimeBegin, Value is set to the minimum start time of the data flow task. Format: `yyyy-MM-ddThh:mmZ`.
      // - When Key is set to StartTimeEnd, Value is set to the maximum start time of the data flow task. Format: `yyyy-MM-ddThh:mmZ`.
      // - When Key is set to EndTimeBegin, Value is set to the minimum end time of the data flow task. Format: `yyyy-MM-ddThh:mmZ`.
      // - When Key is set to EndTimeEnd, Value is set to the maximum end time of the data flow task. Format: `yyyy-MM-ddThh:mmZ`.
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
    // - General-purpose CPFS: must start with `cpfs-`, for example, cpfs-099394bd928c****.
    // 
    // - CPFS for Lingjun: must start with `bmcpfs-`, for example, bmcpfs-290w65p03ok64ya****.
    // 
    // This parameter is required.
    shared_ptr<string> fileSystemId_ {};
    // The collection of filter keys.
    shared_ptr<vector<DescribeDataFlowTasksRequest::Filters>> filters_ {};
    // The maximum number of entries to return for a single request.
    // 
    // Valid values: 10 to 100.
    // 
    // Default value: 20.
    shared_ptr<int64_t> maxResults_ {};
    // The next token. If the returned results of a request are truncated, you can use NextToken to initiate another request and obtain the remaining results.
    shared_ptr<string> nextToken_ {};
    // Specifies whether to query report information.
    // 
    // Valid values:
    // - True: Queries reports. This is the default value.
    // - False: Does not query reports.
    // 
    // > - Setting this parameter to false can accelerate the query speed.
    // > - Only CPFS for Lingjun supports this parameter.
    shared_ptr<bool> withReports_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace NAS20170626
#endif
