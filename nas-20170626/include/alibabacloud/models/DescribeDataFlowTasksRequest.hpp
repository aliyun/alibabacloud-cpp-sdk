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
      // The filter name.
      // 
      // Valid value:
      // 
      // *   DataFlowIds: filters dataflow tasks by dataflow ID.
      // *   TaskIds: filters dataflow tasks by task ID.
      // *   Originator: filters dataflow tasks by task initiator.
      // *   TaskActions: filters dataflow tasks by task type.
      // *   DataTypes: filters dataflow tasks by data type.
      // *   Status: filters dataflow tasks by dataflow status.
      // *   CreateTimeBegin: filters dataflow tasks that are created after a specified time.
      // *   CreateTimeEnd: filters dataflow tasks that are created before a specified time.
      // *   StartTimeBegin: filters dataflow tasks that are started after a specified time.
      // *   StartTimeEnd: filters dataflow tasks that are started before a specified time.
      // *   EndTimeBegin: filters dataflow tasks that are stopped after a specified time.
      // *   EndTimeEnd: filters dataflow tasks that are stopped before a specified time.
      shared_ptr<string> key_ {};
      // The value of the filter. This parameter does not support wildcards.
      // 
      // *   If Key is set to DataFlowIds, set Value to a dataflow ID or a part of the dataflow ID. You can specify a dataflow ID or a group of dataflow IDs. You can specify a maximum of 10 dataflow IDs. Example: `df-194433a5be31****` or `df-194433a512a2****,df-234533a5be31****`.
      // *   If Key is set to TaskId, set Value to a dataflow task ID or a part of the dataflow task ID. You can specify a dataflow task ID or a group of dataflow task IDs. You can specify a maximum of 10 dataflow task IDs. Example: `task-38aa8e890f45****` or `task-38aa8e890f45****,task-29ae8e890f45****`.
      // *   If Key is set to TaskActions, set Value to the type of dataflow task. The task type can be **Import**, **Export**, **Evict**, **Inventory**, **StreamImport**, or **StreamExport**. Combined query is supported. CPFS for Lingjun supports only the Import, Export, StreamImport, and StreamExport tasks. Only CPFS for Lingjun V2.6.0 and later support the StreamImport and StreamExport tasks.
      // *   If Key is set to DataTypes, set Value to the data type of the dataflow task. The data type can be MetaAndData, Metadata, or Data. Combined query is supported.
      // *   If Key is set to Originator, set Value to the initiator of the dataflow task. The initiator can be User or System.
      // *   If Key is set to Status, set Value to the status of the dataflow task. The status can be Pending, Executing, Failed, Completed, Canceling, or Canceled. Combined query is supported.
      // *   If Key is set to CreateTimeBegin, set Value to the beginning of the time range to create the dataflow task. Time format: `yyyy-MM-ddThh:mmZ`.
      // *   If Key is set to CreateTimeEnd, set Value to the end of the time range to create the dataflow task. Time format: `yyyy-MM-ddThh:mmZ`.
      // *   If Key is set to StartTimeBegin, set Value to the beginning of the time range to start the dataflow task. Time format: `yyyy-MM-ddThh:mmZ`.
      // *   If Key is set to StartTimeEnd, set Value to the end of the time range to start the dataflow task. Time format: `yyyy-MM-ddThh:mmZ`.
      // *   If Key is set to EndTimeBegin, set Value to the beginning of the time range to stop the dataflow task. Time format: `yyyy-MM-ddThh:mmZ`.
      // *   If Key is set to EndTimeEnd, set Value to the end of the time range to stop the dataflow task. Time format: `yyyy-MM-ddThh:mmZ`.
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
    // The ID of the file system.
    // 
    // *   The IDs of CPFS file systems must start with `cpfs-`. Example: cpfs-099394bd928c\\*\\*\\*\\*.
    // *   The IDs of CPFS for Lingjun file systems must start with `bmcpfs-`. Example: bmcpfs-290w65p03ok64ya\\*\\*\\*\\*. .
    // 
    // This parameter is required.
    shared_ptr<string> fileSystemId_ {};
    // The details about filters.
    shared_ptr<vector<DescribeDataFlowTasksRequest::Filters>> filters_ {};
    // The number of results for each query.
    // 
    // Valid values: 10 to 100.
    // 
    // Default value: 20.
    shared_ptr<int64_t> maxResults_ {};
    // The pagination token that is used in the next request to retrieve a new page of results. You do not need to specify this parameter for the first request. You must specify the token that is obtained from the previous query as the value of NextToken.
    shared_ptr<string> nextToken_ {};
    // Whether to query report information.
    // 
    // *   True (default)
    // *   False
    // 
    // > 
    // 
    // *   Set it to False to speed up the query.
    // 
    // *   Only CPFS for Lingjun supports this parameter.
    shared_ptr<bool> withReports_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace NAS20170626
#endif
