// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDIRECTORIESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDIRECTORIESREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class DescribeDirectoriesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDirectoriesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DirectoryId, directoryId_);
      DARABONBA_PTR_TO_JSON(DirectoryStatus, directoryStatus_);
      DARABONBA_PTR_TO_JSON(DirectoryType, directoryType_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDirectoriesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DirectoryId, directoryId_);
      DARABONBA_PTR_FROM_JSON(DirectoryStatus, directoryStatus_);
      DARABONBA_PTR_FROM_JSON(DirectoryType, directoryType_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    DescribeDirectoriesRequest() = default ;
    DescribeDirectoriesRequest(const DescribeDirectoriesRequest &) = default ;
    DescribeDirectoriesRequest(DescribeDirectoriesRequest &&) = default ;
    DescribeDirectoriesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDirectoriesRequest() = default ;
    DescribeDirectoriesRequest& operator=(const DescribeDirectoriesRequest &) = default ;
    DescribeDirectoriesRequest& operator=(DescribeDirectoriesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->directoryId_ == nullptr
        && return this->directoryStatus_ == nullptr && return this->directoryType_ == nullptr && return this->maxResults_ == nullptr && return this->nextToken_ == nullptr && return this->regionId_ == nullptr
        && return this->status_ == nullptr; };
    // directoryId Field Functions 
    bool hasDirectoryId() const { return this->directoryId_ != nullptr;};
    void deleteDirectoryId() { this->directoryId_ = nullptr;};
    inline const vector<string> & directoryId() const { DARABONBA_PTR_GET_CONST(directoryId_, vector<string>) };
    inline vector<string> directoryId() { DARABONBA_PTR_GET(directoryId_, vector<string>) };
    inline DescribeDirectoriesRequest& setDirectoryId(const vector<string> & directoryId) { DARABONBA_PTR_SET_VALUE(directoryId_, directoryId) };
    inline DescribeDirectoriesRequest& setDirectoryId(vector<string> && directoryId) { DARABONBA_PTR_SET_RVALUE(directoryId_, directoryId) };


    // directoryStatus Field Functions 
    bool hasDirectoryStatus() const { return this->directoryStatus_ != nullptr;};
    void deleteDirectoryStatus() { this->directoryStatus_ = nullptr;};
    inline string directoryStatus() const { DARABONBA_PTR_GET_DEFAULT(directoryStatus_, "") };
    inline DescribeDirectoriesRequest& setDirectoryStatus(string directoryStatus) { DARABONBA_PTR_SET_VALUE(directoryStatus_, directoryStatus) };


    // directoryType Field Functions 
    bool hasDirectoryType() const { return this->directoryType_ != nullptr;};
    void deleteDirectoryType() { this->directoryType_ = nullptr;};
    inline string directoryType() const { DARABONBA_PTR_GET_DEFAULT(directoryType_, "") };
    inline DescribeDirectoriesRequest& setDirectoryType(string directoryType) { DARABONBA_PTR_SET_VALUE(directoryType_, directoryType) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline DescribeDirectoriesRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribeDirectoriesRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeDirectoriesRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeDirectoriesRequest& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // Details of directory IDs. You can specify one or more directory IDs.
    std::shared_ptr<vector<string>> directoryId_ = nullptr;
    // The directory status. This parameter is equivalent to `Status`.
    std::shared_ptr<string> directoryStatus_ = nullptr;
    // The directory type.
    // 
    // Valid value:
    // 
    // *   SIMPLE: the convenience directory.
    // *   AD_CONNECTOR: the Active Directory (AD) directory.
    std::shared_ptr<string> directoryType_ = nullptr;
    // The number of entries to return on each page.
    // 
    // Maximum value: 100.
    // 
    // Default value: 10.
    std::shared_ptr<int32_t> maxResults_ = nullptr;
    // The token that determines the start point of the next query. If this parameter is empty, all results are returned.
    std::shared_ptr<string> nextToken_ = nullptr;
    // The region ID. You can call the [DescribeRegions](https://help.aliyun.com/document_detail/196646.html) operation to query the most recent region list.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    // The directory status.
    // 
    // Valid values:
    // 
    // *   REGISTERING: The directory is being registered.
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    // *   DEREGISTERING: The directory is being deregistered.
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    // *   REGISTERED: The directory is registered.
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    // *   NEEDCONFIGTRUST: A trust relationship needs to be configured for the directory.
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    // *   CONFIGTRUSTFAILED: A trust relationship fails to be configured for the directory.
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    // *   DEREGISTERED: The directory is deregistered.
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    // *   ERROR: One or more configurations of the directory are invalid.
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    // *   CONFIGTRUSTING: A trust relationship is being configured.
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    // *   NEEDCONFIGUSER: Users need to be configured for the directory.
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
