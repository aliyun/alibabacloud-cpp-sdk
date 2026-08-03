// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDATAFLOWSUBTASKSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDATAFLOWSUBTASKSREQUEST_HPP_
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
  class DescribeDataFlowSubTasksRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDataFlowSubTasksRequest& obj) { 
      DARABONBA_PTR_TO_JSON(FileSystemId, fileSystemId_);
      DARABONBA_PTR_TO_JSON(Filters, filters_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDataFlowSubTasksRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(FileSystemId, fileSystemId_);
      DARABONBA_PTR_FROM_JSON(Filters, filters_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
    };
    DescribeDataFlowSubTasksRequest() = default ;
    DescribeDataFlowSubTasksRequest(const DescribeDataFlowSubTasksRequest &) = default ;
    DescribeDataFlowSubTasksRequest(DescribeDataFlowSubTasksRequest &&) = default ;
    DescribeDataFlowSubTasksRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDataFlowSubTasksRequest() = default ;
    DescribeDataFlowSubTasksRequest& operator=(const DescribeDataFlowSubTasksRequest &) = default ;
    DescribeDataFlowSubTasksRequest& operator=(DescribeDataFlowSubTasksRequest &&) = default ;
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
      // - DataFlowTaskIds: filters by data flow task ID.
      // - DataFlowSubTaskIds: filters by data flow streaming task ID.
      // - Status: filters by data flow status.
      // - SrcFilePath: filters by source file path.
      // - DstFilePath: filters by destination file path.
      shared_ptr<string> key_ {};
      // The value of the filter key. Wildcards are not supported for this parameter.
      // 
      // - If Key is set to DataFlowIds, Value is set to a data flow ID or part of a data flow ID. You can specify one or more data flow IDs. A maximum of 10 data flow IDs can be specified. Example: `df-194433a5be31****` or `df-194433a512a2****,df-234533a5be31****`.
      // - If Key is set to DataFlowTaskIds, Value is set to a data flow task ID or part of a data flow task ID. You can specify one or more data flow task IDs. A maximum of 10 data flow task IDs can be specified. Example: `task-29ee8e890f45****` or `task-29ee8e890f45****,task-38ae8e890f45****`.
      // - If Key is set to DataFlowSubTaskIds, Value is set to a data flow streaming task ID or part of a data flow streaming task ID. You can specify one or more data flow streaming task IDs. A maximum of 10 data flow streaming task IDs can be specified. Example: `subTaskId-370kyfmyknxcyzw****` or `subTaskId-247kyfmyknxcyzw****,subTaskId-256kyfmyknxcyzw****`.
      // - If Key is set to Status, Value is set to the status of the data flow task, including EXPIRED, CREATED, RUNNING, COMPLETE, CANCELING, FAILED, and CANCELED. Combined queries are supported.
      // - If Key is set to SrcFilePath, Value is set to the source file path. The maximum length is 1023 characters.
      // - If Key is set to DstFilePath, Value is set to the destination file path. The maximum length is 1023 characters.
      shared_ptr<string> value_ {};
    };

    virtual bool empty() const override { return this->fileSystemId_ == nullptr
        && this->filters_ == nullptr && this->maxResults_ == nullptr && this->nextToken_ == nullptr; };
    // fileSystemId Field Functions 
    bool hasFileSystemId() const { return this->fileSystemId_ != nullptr;};
    void deleteFileSystemId() { this->fileSystemId_ = nullptr;};
    inline string getFileSystemId() const { DARABONBA_PTR_GET_DEFAULT(fileSystemId_, "") };
    inline DescribeDataFlowSubTasksRequest& setFileSystemId(string fileSystemId) { DARABONBA_PTR_SET_VALUE(fileSystemId_, fileSystemId) };


    // filters Field Functions 
    bool hasFilters() const { return this->filters_ != nullptr;};
    void deleteFilters() { this->filters_ = nullptr;};
    inline const vector<DescribeDataFlowSubTasksRequest::Filters> & getFilters() const { DARABONBA_PTR_GET_CONST(filters_, vector<DescribeDataFlowSubTasksRequest::Filters>) };
    inline vector<DescribeDataFlowSubTasksRequest::Filters> getFilters() { DARABONBA_PTR_GET(filters_, vector<DescribeDataFlowSubTasksRequest::Filters>) };
    inline DescribeDataFlowSubTasksRequest& setFilters(const vector<DescribeDataFlowSubTasksRequest::Filters> & filters) { DARABONBA_PTR_SET_VALUE(filters_, filters) };
    inline DescribeDataFlowSubTasksRequest& setFilters(vector<DescribeDataFlowSubTasksRequest::Filters> && filters) { DARABONBA_PTR_SET_RVALUE(filters_, filters) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int64_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0L) };
    inline DescribeDataFlowSubTasksRequest& setMaxResults(int64_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribeDataFlowSubTasksRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


  protected:
    // The file system ID.
    // 
    // This parameter is required.
    shared_ptr<string> fileSystemId_ {};
    // The filter keys for querying data flow streaming tasks.
    shared_ptr<vector<DescribeDataFlowSubTasksRequest::Filters>> filters_ {};
    // The maximum number of results per query.
    // 
    // - Valid values: 20 to 100.
    // 
    // - Default value: 20.
    shared_ptr<int64_t> maxResults_ {};
    // If the returned results are truncated, you can use NextToken to initiate a new request to retrieve the content after the current truncation point.
    shared_ptr<string> nextToken_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace NAS20170626
#endif
