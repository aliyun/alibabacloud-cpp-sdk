// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDATAFLOWSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDATAFLOWSREQUEST_HPP_
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
  class DescribeDataFlowsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDataFlowsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(FileSystemId, fileSystemId_);
      DARABONBA_PTR_TO_JSON(Filters, filters_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDataFlowsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(FileSystemId, fileSystemId_);
      DARABONBA_PTR_FROM_JSON(Filters, filters_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
    };
    DescribeDataFlowsRequest() = default ;
    DescribeDataFlowsRequest(const DescribeDataFlowsRequest &) = default ;
    DescribeDataFlowsRequest(DescribeDataFlowsRequest &&) = default ;
    DescribeDataFlowsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDataFlowsRequest() = default ;
    DescribeDataFlowsRequest& operator=(const DescribeDataFlowsRequest &) = default ;
    DescribeDataFlowsRequest& operator=(DescribeDataFlowsRequest &&) = default ;
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
      // - DataFlowIds: filters by data flow ID.
      // - FsetIds: filters by Fileset ID.
      // - FileSystemPath: filters by the path of the Fileset in the CPFS file system.
      // - SourceStorage: filters by the access path of the source storage.
      // - ThroughputList: filters by the transmission bandwidth of the data flow.
      // - Description: filters by the description of the Fileset.
      // - Status: filters by data flow status.
      shared_ptr<string> key_ {};
      // The value of the filter key. Wildcards are not supported for this parameter.
      // 
      // - If Key is set to DataFlowIds, Value is set to a data flow ID or part of a data flow ID. You can specify one or more data flow IDs. A maximum of 10 data flow IDs can be specified. Example: `df-194433a5be31****` or `df-194433a512a2****,df-234533a5be31****`.
      // 
      // - If Key is set to FsetIds, Value is set to a Fileset ID or part of a Fileset ID. You can specify one or more Fileset IDs. A maximum of 10 Fileset IDs can be specified. Example: `fset-1902718ea0ae****` or `fset-235718ea0ae****,fset-5122718ea0ae****`.
      // - If Key is set to FileSystemPath, Value is set to a path or part of a path in the CPFS file system. The value must be 1 to 1024 characters in length.
      // - If Key is set to SourceStorage, Value is set to the access path of the source storage. The maximum length is 1024 characters.
      // - If Key is set to ThroughputList, Value is set to the transmission bandwidth of the data flow. Combined queries are supported.
      // - If Key is set to Description, Value is set to the description or part of the description of the data flow.
      // - If Key is set to Status, Value is set to the data flow status.
      // - If Key is set to SourceStoragePath, Value is set to the access path of the source storage or part of the access path. The maximum length is 1024 characters.
      shared_ptr<string> value_ {};
    };

    virtual bool empty() const override { return this->fileSystemId_ == nullptr
        && this->filters_ == nullptr && this->maxResults_ == nullptr && this->nextToken_ == nullptr; };
    // fileSystemId Field Functions 
    bool hasFileSystemId() const { return this->fileSystemId_ != nullptr;};
    void deleteFileSystemId() { this->fileSystemId_ = nullptr;};
    inline string getFileSystemId() const { DARABONBA_PTR_GET_DEFAULT(fileSystemId_, "") };
    inline DescribeDataFlowsRequest& setFileSystemId(string fileSystemId) { DARABONBA_PTR_SET_VALUE(fileSystemId_, fileSystemId) };


    // filters Field Functions 
    bool hasFilters() const { return this->filters_ != nullptr;};
    void deleteFilters() { this->filters_ = nullptr;};
    inline const vector<DescribeDataFlowsRequest::Filters> & getFilters() const { DARABONBA_PTR_GET_CONST(filters_, vector<DescribeDataFlowsRequest::Filters>) };
    inline vector<DescribeDataFlowsRequest::Filters> getFilters() { DARABONBA_PTR_GET(filters_, vector<DescribeDataFlowsRequest::Filters>) };
    inline DescribeDataFlowsRequest& setFilters(const vector<DescribeDataFlowsRequest::Filters> & filters) { DARABONBA_PTR_SET_VALUE(filters_, filters) };
    inline DescribeDataFlowsRequest& setFilters(vector<DescribeDataFlowsRequest::Filters> && filters) { DARABONBA_PTR_SET_RVALUE(filters_, filters) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int64_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0L) };
    inline DescribeDataFlowsRequest& setMaxResults(int64_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribeDataFlowsRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


  protected:
    // The file system ID.
    // 
    // - CPFS: must start with `cpfs-`, such as cpfs-125487\\*\\*\\*\\*.
    // 
    // - CPFS for Lingjun: must start with `bmcpfs-`, such as bmcpfs-0015\\*\\*\\*\\*.
    // 
    // This parameter is required.
    shared_ptr<string> fileSystemId_ {};
    // The filter keys for querying data flows.
    shared_ptr<vector<DescribeDataFlowsRequest::Filters>> filters_ {};
    // The number of results for each query.
    // 
    // Valid values: 10 to 100. Default value: 20.
    shared_ptr<int64_t> maxResults_ {};
    // The pagination token that is used in the next request to retrieve a new page of results. If the return results are truncated, use NextToken to obtain content starting from the truncation point.
    shared_ptr<string> nextToken_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace NAS20170626
#endif
