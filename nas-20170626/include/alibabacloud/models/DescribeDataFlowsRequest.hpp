// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDATAFLOWSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDATAFLOWSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDataFlowsRequestFilters.hpp>
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
    virtual bool empty() const override { return this->fileSystemId_ == nullptr
        && return this->filters_ == nullptr && return this->maxResults_ == nullptr && return this->nextToken_ == nullptr; };
    // fileSystemId Field Functions 
    bool hasFileSystemId() const { return this->fileSystemId_ != nullptr;};
    void deleteFileSystemId() { this->fileSystemId_ = nullptr;};
    inline string fileSystemId() const { DARABONBA_PTR_GET_DEFAULT(fileSystemId_, "") };
    inline DescribeDataFlowsRequest& setFileSystemId(string fileSystemId) { DARABONBA_PTR_SET_VALUE(fileSystemId_, fileSystemId) };


    // filters Field Functions 
    bool hasFilters() const { return this->filters_ != nullptr;};
    void deleteFilters() { this->filters_ = nullptr;};
    inline const vector<DescribeDataFlowsRequestFilters> & filters() const { DARABONBA_PTR_GET_CONST(filters_, vector<DescribeDataFlowsRequestFilters>) };
    inline vector<DescribeDataFlowsRequestFilters> filters() { DARABONBA_PTR_GET(filters_, vector<DescribeDataFlowsRequestFilters>) };
    inline DescribeDataFlowsRequest& setFilters(const vector<DescribeDataFlowsRequestFilters> & filters) { DARABONBA_PTR_SET_VALUE(filters_, filters) };
    inline DescribeDataFlowsRequest& setFilters(vector<DescribeDataFlowsRequestFilters> && filters) { DARABONBA_PTR_SET_RVALUE(filters_, filters) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int64_t maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0L) };
    inline DescribeDataFlowsRequest& setMaxResults(int64_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribeDataFlowsRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


  protected:
    // The ID of the file system.
    // 
    // *   The IDs of CPFS file systems must start with `cpfs-`. Example: cpfs-125487\\*\\*\\*\\*.
    // *   The IDs of CPFS for Lingjun file systems must start with `bmcpfs-`. Example: bmcpfs-0015\\*\\*\\*\\*.
    // 
    // This parameter is required.
    std::shared_ptr<string> fileSystemId_ = nullptr;
    // The filter that is used to query dataflows.
    std::shared_ptr<vector<DescribeDataFlowsRequestFilters>> filters_ = nullptr;
    // The number of results for each query.
    // 
    // Valid values: 10 to 100. Default value: 20.
    std::shared_ptr<int64_t> maxResults_ = nullptr;
    // The pagination token that is used in the next request to retrieve a new page of results. You do not need to specify this parameter for the first request. You must specify the token that is obtained from the previous query as the value of NextToken.
    std::shared_ptr<string> nextToken_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace NAS20170626
#endif
