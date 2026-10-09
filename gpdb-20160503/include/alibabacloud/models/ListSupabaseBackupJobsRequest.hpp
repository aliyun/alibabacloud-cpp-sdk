// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSUPABASEBACKUPJOBSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTSUPABASEBACKUPJOBSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gpdb20160503
{
namespace Models
{
  class ListSupabaseBackupJobsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSupabaseBackupJobsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BackupMode, backupMode_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, ListSupabaseBackupJobsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BackupMode, backupMode_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    ListSupabaseBackupJobsRequest() = default ;
    ListSupabaseBackupJobsRequest(const ListSupabaseBackupJobsRequest &) = default ;
    ListSupabaseBackupJobsRequest(ListSupabaseBackupJobsRequest &&) = default ;
    ListSupabaseBackupJobsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSupabaseBackupJobsRequest() = default ;
    ListSupabaseBackupJobsRequest& operator=(const ListSupabaseBackupJobsRequest &) = default ;
    ListSupabaseBackupJobsRequest& operator=(ListSupabaseBackupJobsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->backupMode_ == nullptr
        && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->projectId_ == nullptr && this->regionId_ == nullptr; };
    // backupMode Field Functions 
    bool hasBackupMode() const { return this->backupMode_ != nullptr;};
    void deleteBackupMode() { this->backupMode_ = nullptr;};
    inline string getBackupMode() const { DARABONBA_PTR_GET_DEFAULT(backupMode_, "") };
    inline ListSupabaseBackupJobsRequest& setBackupMode(string backupMode) { DARABONBA_PTR_SET_VALUE(backupMode_, backupMode) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListSupabaseBackupJobsRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListSupabaseBackupJobsRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline string getProjectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, "") };
    inline ListSupabaseBackupJobsRequest& setProjectId(string projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListSupabaseBackupJobsRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The backup mode. Valid values:
    // 
    // - Automated: automatic backup
    // - Manual: manual backup
    // 
    // If this parameter is not specified, all backup tasks are returned.
    shared_ptr<string> backupMode_ {};
    // The maximum number of entries to return for this request.
    shared_ptr<int32_t> maxResults_ {};
    // The paging token. Do not specify this parameter for the first query. For subsequent queries, specify the NextToken value returned in the previous response.
    shared_ptr<string> nextToken_ {};
    // Instance ID of the Supabase instance. You can obtain instance ID from the Supabase page in the console.
    // 
    // This parameter is required.
    shared_ptr<string> projectId_ {};
    // The region ID.
    // 
    // > You can call the [DescribeRegions](https://help.aliyun.com/document_detail/86912.html) operation to query available region IDs.
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
