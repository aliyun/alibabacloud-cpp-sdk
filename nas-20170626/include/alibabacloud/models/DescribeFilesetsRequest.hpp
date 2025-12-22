// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEFILESETSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEFILESETSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeFilesetsRequestFilters.hpp>
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
    virtual bool empty() const override { return this->fileSystemId_ == nullptr
        && return this->filters_ == nullptr && return this->maxResults_ == nullptr && return this->nextToken_ == nullptr && return this->orderByField_ == nullptr && return this->sortOrder_ == nullptr; };
    // fileSystemId Field Functions 
    bool hasFileSystemId() const { return this->fileSystemId_ != nullptr;};
    void deleteFileSystemId() { this->fileSystemId_ = nullptr;};
    inline string fileSystemId() const { DARABONBA_PTR_GET_DEFAULT(fileSystemId_, "") };
    inline DescribeFilesetsRequest& setFileSystemId(string fileSystemId) { DARABONBA_PTR_SET_VALUE(fileSystemId_, fileSystemId) };


    // filters Field Functions 
    bool hasFilters() const { return this->filters_ != nullptr;};
    void deleteFilters() { this->filters_ = nullptr;};
    inline const vector<DescribeFilesetsRequestFilters> & filters() const { DARABONBA_PTR_GET_CONST(filters_, vector<DescribeFilesetsRequestFilters>) };
    inline vector<DescribeFilesetsRequestFilters> filters() { DARABONBA_PTR_GET(filters_, vector<DescribeFilesetsRequestFilters>) };
    inline DescribeFilesetsRequest& setFilters(const vector<DescribeFilesetsRequestFilters> & filters) { DARABONBA_PTR_SET_VALUE(filters_, filters) };
    inline DescribeFilesetsRequest& setFilters(vector<DescribeFilesetsRequestFilters> && filters) { DARABONBA_PTR_SET_RVALUE(filters_, filters) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int64_t maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0L) };
    inline DescribeFilesetsRequest& setMaxResults(int64_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribeFilesetsRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // orderByField Field Functions 
    bool hasOrderByField() const { return this->orderByField_ != nullptr;};
    void deleteOrderByField() { this->orderByField_ = nullptr;};
    inline string orderByField() const { DARABONBA_PTR_GET_DEFAULT(orderByField_, "") };
    inline DescribeFilesetsRequest& setOrderByField(string orderByField) { DARABONBA_PTR_SET_VALUE(orderByField_, orderByField) };


    // sortOrder Field Functions 
    bool hasSortOrder() const { return this->sortOrder_ != nullptr;};
    void deleteSortOrder() { this->sortOrder_ = nullptr;};
    inline string sortOrder() const { DARABONBA_PTR_GET_DEFAULT(sortOrder_, "") };
    inline DescribeFilesetsRequest& setSortOrder(string sortOrder) { DARABONBA_PTR_SET_VALUE(sortOrder_, sortOrder) };


  protected:
    // The ID of the file system.
    // 
    // *   The IDs of CPFS file systems must start with `cpfs-`. Example: cpfs-099394bd928c\\*\\*\\*\\*.
    // *   The IDs of CPFS for LINGJUN file systems must start with `bmcpfs-`. Example: bmcpfs-290w65p03ok64ya\\*\\*\\*\\*.
    // 
    // This parameter is required.
    std::shared_ptr<string> fileSystemId_ = nullptr;
    // The filter that is used to query filesets.
    std::shared_ptr<vector<DescribeFilesetsRequestFilters>> filters_ = nullptr;
    // The number of results for each query.
    // 
    // Valid values: 10 to 100. Default value: 20.
    std::shared_ptr<int64_t> maxResults_ = nullptr;
    // The pagination token that is used in the next request to retrieve a new page of results. You do not need to specify this parameter for the first request. You must specify the token that is obtained from the previous query as the value of NextToken.
    std::shared_ptr<string> nextToken_ = nullptr;
    // The condition by which the results are sorted. Valid values:
    // 
    // *   FileCountLimit: the file quantity quota
    // *   SizeLimit: the capacity quota
    // *   FileCountUsage: the usage of the file quantity quota
    // *   SpaceUsage: the capacity usage
    std::shared_ptr<string> orderByField_ = nullptr;
    // The order in which you want to sort the results. Valid values:
    // 
    // *   asc (default): ascending order
    // *   desc: descending order
    // 
    // >  This parameter takes effect only if you specify the OrderByField parameter.
    std::shared_ptr<string> sortOrder_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace NAS20170626
#endif
