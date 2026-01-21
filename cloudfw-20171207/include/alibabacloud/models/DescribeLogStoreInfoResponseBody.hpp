// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELOGSTOREINFORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELOGSTOREINFORESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class DescribeLogStoreInfoResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLogStoreInfoResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(InfoList, infoList_);
      DARABONBA_PTR_TO_JSON(LogModifyQuota, logModifyQuota_);
      DARABONBA_PTR_TO_JSON(LogStoreName, logStoreName_);
      DARABONBA_PTR_TO_JSON(LogVersion, logVersion_);
      DARABONBA_PTR_TO_JSON(ProjectName, projectName_);
      DARABONBA_PTR_TO_JSON(Quota, quota_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
      DARABONBA_PTR_TO_JSON(TotalQuota, totalQuota_);
      DARABONBA_PTR_TO_JSON(Ttl, ttl_);
      DARABONBA_PTR_TO_JSON(Used, used_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLogStoreInfoResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(InfoList, infoList_);
      DARABONBA_PTR_FROM_JSON(LogModifyQuota, logModifyQuota_);
      DARABONBA_PTR_FROM_JSON(LogStoreName, logStoreName_);
      DARABONBA_PTR_FROM_JSON(LogVersion, logVersion_);
      DARABONBA_PTR_FROM_JSON(ProjectName, projectName_);
      DARABONBA_PTR_FROM_JSON(Quota, quota_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
      DARABONBA_PTR_FROM_JSON(TotalQuota, totalQuota_);
      DARABONBA_PTR_FROM_JSON(Ttl, ttl_);
      DARABONBA_PTR_FROM_JSON(Used, used_);
    };
    DescribeLogStoreInfoResponseBody() = default ;
    DescribeLogStoreInfoResponseBody(const DescribeLogStoreInfoResponseBody &) = default ;
    DescribeLogStoreInfoResponseBody(DescribeLogStoreInfoResponseBody &&) = default ;
    DescribeLogStoreInfoResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLogStoreInfoResponseBody() = default ;
    DescribeLogStoreInfoResponseBody& operator=(const DescribeLogStoreInfoResponseBody &) = default ;
    DescribeLogStoreInfoResponseBody& operator=(DescribeLogStoreInfoResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class InfoList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const InfoList& obj) { 
        DARABONBA_PTR_TO_JSON(LogStoreName, logStoreName_);
        DARABONBA_PTR_TO_JSON(MaxSplitShard, maxSplitShard_);
        DARABONBA_PTR_TO_JSON(ProjectName, projectName_);
        DARABONBA_PTR_TO_JSON(Quota, quota_);
        DARABONBA_PTR_TO_JSON(RegionId, regionId_);
        DARABONBA_PTR_TO_JSON(Shard, shard_);
        DARABONBA_PTR_TO_JSON(Site, site_);
        DARABONBA_PTR_TO_JSON(Ttl, ttl_);
        DARABONBA_PTR_TO_JSON(Used, used_);
      };
      friend void from_json(const Darabonba::Json& j, InfoList& obj) { 
        DARABONBA_PTR_FROM_JSON(LogStoreName, logStoreName_);
        DARABONBA_PTR_FROM_JSON(MaxSplitShard, maxSplitShard_);
        DARABONBA_PTR_FROM_JSON(ProjectName, projectName_);
        DARABONBA_PTR_FROM_JSON(Quota, quota_);
        DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
        DARABONBA_PTR_FROM_JSON(Shard, shard_);
        DARABONBA_PTR_FROM_JSON(Site, site_);
        DARABONBA_PTR_FROM_JSON(Ttl, ttl_);
        DARABONBA_PTR_FROM_JSON(Used, used_);
      };
      InfoList() = default ;
      InfoList(const InfoList &) = default ;
      InfoList(InfoList &&) = default ;
      InfoList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~InfoList() = default ;
      InfoList& operator=(const InfoList &) = default ;
      InfoList& operator=(InfoList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->logStoreName_ == nullptr
        && this->maxSplitShard_ == nullptr && this->projectName_ == nullptr && this->quota_ == nullptr && this->regionId_ == nullptr && this->shard_ == nullptr
        && this->site_ == nullptr && this->ttl_ == nullptr && this->used_ == nullptr; };
      // logStoreName Field Functions 
      bool hasLogStoreName() const { return this->logStoreName_ != nullptr;};
      void deleteLogStoreName() { this->logStoreName_ = nullptr;};
      inline string getLogStoreName() const { DARABONBA_PTR_GET_DEFAULT(logStoreName_, "") };
      inline InfoList& setLogStoreName(string logStoreName) { DARABONBA_PTR_SET_VALUE(logStoreName_, logStoreName) };


      // maxSplitShard Field Functions 
      bool hasMaxSplitShard() const { return this->maxSplitShard_ != nullptr;};
      void deleteMaxSplitShard() { this->maxSplitShard_ = nullptr;};
      inline int32_t getMaxSplitShard() const { DARABONBA_PTR_GET_DEFAULT(maxSplitShard_, 0) };
      inline InfoList& setMaxSplitShard(int32_t maxSplitShard) { DARABONBA_PTR_SET_VALUE(maxSplitShard_, maxSplitShard) };


      // projectName Field Functions 
      bool hasProjectName() const { return this->projectName_ != nullptr;};
      void deleteProjectName() { this->projectName_ = nullptr;};
      inline string getProjectName() const { DARABONBA_PTR_GET_DEFAULT(projectName_, "") };
      inline InfoList& setProjectName(string projectName) { DARABONBA_PTR_SET_VALUE(projectName_, projectName) };


      // quota Field Functions 
      bool hasQuota() const { return this->quota_ != nullptr;};
      void deleteQuota() { this->quota_ = nullptr;};
      inline int64_t getQuota() const { DARABONBA_PTR_GET_DEFAULT(quota_, 0L) };
      inline InfoList& setQuota(int64_t quota) { DARABONBA_PTR_SET_VALUE(quota_, quota) };


      // regionId Field Functions 
      bool hasRegionId() const { return this->regionId_ != nullptr;};
      void deleteRegionId() { this->regionId_ = nullptr;};
      inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
      inline InfoList& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


      // shard Field Functions 
      bool hasShard() const { return this->shard_ != nullptr;};
      void deleteShard() { this->shard_ = nullptr;};
      inline int32_t getShard() const { DARABONBA_PTR_GET_DEFAULT(shard_, 0) };
      inline InfoList& setShard(int32_t shard) { DARABONBA_PTR_SET_VALUE(shard_, shard) };


      // site Field Functions 
      bool hasSite() const { return this->site_ != nullptr;};
      void deleteSite() { this->site_ = nullptr;};
      inline string getSite() const { DARABONBA_PTR_GET_DEFAULT(site_, "") };
      inline InfoList& setSite(string site) { DARABONBA_PTR_SET_VALUE(site_, site) };


      // ttl Field Functions 
      bool hasTtl() const { return this->ttl_ != nullptr;};
      void deleteTtl() { this->ttl_ = nullptr;};
      inline int32_t getTtl() const { DARABONBA_PTR_GET_DEFAULT(ttl_, 0) };
      inline InfoList& setTtl(int32_t ttl) { DARABONBA_PTR_SET_VALUE(ttl_, ttl) };


      // used Field Functions 
      bool hasUsed() const { return this->used_ != nullptr;};
      void deleteUsed() { this->used_ = nullptr;};
      inline int64_t getUsed() const { DARABONBA_PTR_GET_DEFAULT(used_, 0L) };
      inline InfoList& setUsed(int64_t used) { DARABONBA_PTR_SET_VALUE(used_, used) };


    protected:
      shared_ptr<string> logStoreName_ {};
      shared_ptr<int32_t> maxSplitShard_ {};
      shared_ptr<string> projectName_ {};
      shared_ptr<int64_t> quota_ {};
      shared_ptr<string> regionId_ {};
      shared_ptr<int32_t> shard_ {};
      shared_ptr<string> site_ {};
      shared_ptr<int32_t> ttl_ {};
      shared_ptr<int64_t> used_ {};
    };

    virtual bool empty() const override { return this->infoList_ == nullptr
        && this->logModifyQuota_ == nullptr && this->logStoreName_ == nullptr && this->logVersion_ == nullptr && this->projectName_ == nullptr && this->quota_ == nullptr
        && this->regionId_ == nullptr && this->requestId_ == nullptr && this->taskId_ == nullptr && this->totalQuota_ == nullptr && this->ttl_ == nullptr
        && this->used_ == nullptr; };
    // infoList Field Functions 
    bool hasInfoList() const { return this->infoList_ != nullptr;};
    void deleteInfoList() { this->infoList_ = nullptr;};
    inline const vector<DescribeLogStoreInfoResponseBody::InfoList> & getInfoList() const { DARABONBA_PTR_GET_CONST(infoList_, vector<DescribeLogStoreInfoResponseBody::InfoList>) };
    inline vector<DescribeLogStoreInfoResponseBody::InfoList> getInfoList() { DARABONBA_PTR_GET(infoList_, vector<DescribeLogStoreInfoResponseBody::InfoList>) };
    inline DescribeLogStoreInfoResponseBody& setInfoList(const vector<DescribeLogStoreInfoResponseBody::InfoList> & infoList) { DARABONBA_PTR_SET_VALUE(infoList_, infoList) };
    inline DescribeLogStoreInfoResponseBody& setInfoList(vector<DescribeLogStoreInfoResponseBody::InfoList> && infoList) { DARABONBA_PTR_SET_RVALUE(infoList_, infoList) };


    // logModifyQuota Field Functions 
    bool hasLogModifyQuota() const { return this->logModifyQuota_ != nullptr;};
    void deleteLogModifyQuota() { this->logModifyQuota_ = nullptr;};
    inline int32_t getLogModifyQuota() const { DARABONBA_PTR_GET_DEFAULT(logModifyQuota_, 0) };
    inline DescribeLogStoreInfoResponseBody& setLogModifyQuota(int32_t logModifyQuota) { DARABONBA_PTR_SET_VALUE(logModifyQuota_, logModifyQuota) };


    // logStoreName Field Functions 
    bool hasLogStoreName() const { return this->logStoreName_ != nullptr;};
    void deleteLogStoreName() { this->logStoreName_ = nullptr;};
    inline string getLogStoreName() const { DARABONBA_PTR_GET_DEFAULT(logStoreName_, "") };
    inline DescribeLogStoreInfoResponseBody& setLogStoreName(string logStoreName) { DARABONBA_PTR_SET_VALUE(logStoreName_, logStoreName) };


    // logVersion Field Functions 
    bool hasLogVersion() const { return this->logVersion_ != nullptr;};
    void deleteLogVersion() { this->logVersion_ = nullptr;};
    inline int32_t getLogVersion() const { DARABONBA_PTR_GET_DEFAULT(logVersion_, 0) };
    inline DescribeLogStoreInfoResponseBody& setLogVersion(int32_t logVersion) { DARABONBA_PTR_SET_VALUE(logVersion_, logVersion) };


    // projectName Field Functions 
    bool hasProjectName() const { return this->projectName_ != nullptr;};
    void deleteProjectName() { this->projectName_ = nullptr;};
    inline string getProjectName() const { DARABONBA_PTR_GET_DEFAULT(projectName_, "") };
    inline DescribeLogStoreInfoResponseBody& setProjectName(string projectName) { DARABONBA_PTR_SET_VALUE(projectName_, projectName) };


    // quota Field Functions 
    bool hasQuota() const { return this->quota_ != nullptr;};
    void deleteQuota() { this->quota_ = nullptr;};
    inline int64_t getQuota() const { DARABONBA_PTR_GET_DEFAULT(quota_, 0L) };
    inline DescribeLogStoreInfoResponseBody& setQuota(int64_t quota) { DARABONBA_PTR_SET_VALUE(quota_, quota) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeLogStoreInfoResponseBody& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeLogStoreInfoResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline DescribeLogStoreInfoResponseBody& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    // totalQuota Field Functions 
    bool hasTotalQuota() const { return this->totalQuota_ != nullptr;};
    void deleteTotalQuota() { this->totalQuota_ = nullptr;};
    inline int64_t getTotalQuota() const { DARABONBA_PTR_GET_DEFAULT(totalQuota_, 0L) };
    inline DescribeLogStoreInfoResponseBody& setTotalQuota(int64_t totalQuota) { DARABONBA_PTR_SET_VALUE(totalQuota_, totalQuota) };


    // ttl Field Functions 
    bool hasTtl() const { return this->ttl_ != nullptr;};
    void deleteTtl() { this->ttl_ = nullptr;};
    inline int32_t getTtl() const { DARABONBA_PTR_GET_DEFAULT(ttl_, 0) };
    inline DescribeLogStoreInfoResponseBody& setTtl(int32_t ttl) { DARABONBA_PTR_SET_VALUE(ttl_, ttl) };


    // used Field Functions 
    bool hasUsed() const { return this->used_ != nullptr;};
    void deleteUsed() { this->used_ = nullptr;};
    inline int64_t getUsed() const { DARABONBA_PTR_GET_DEFAULT(used_, 0L) };
    inline DescribeLogStoreInfoResponseBody& setUsed(int64_t used) { DARABONBA_PTR_SET_VALUE(used_, used) };


  protected:
    shared_ptr<vector<DescribeLogStoreInfoResponseBody::InfoList>> infoList_ {};
    shared_ptr<int32_t> logModifyQuota_ {};
    // The name of the SLS LogStore in the log service.
    shared_ptr<string> logStoreName_ {};
    shared_ptr<int32_t> logVersion_ {};
    // The Project name of the log service.
    shared_ptr<string> projectName_ {};
    // Available log storage capacity. Unit: Byte.
    shared_ptr<int64_t> quota_ {};
    // The region ID for log delivery.
    shared_ptr<string> regionId_ {};
    // The ID of this request.
    shared_ptr<string> requestId_ {};
    shared_ptr<string> taskId_ {};
    shared_ptr<int64_t> totalQuota_ {};
    // Log storage duration. Unit: days.
    shared_ptr<int32_t> ttl_ {};
    // Used storage capacity. Unit: Byte.
    // 
    // > The statistics of the log service have a delay of approximately two hours.
    shared_ptr<int64_t> used_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
