// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEFOTATASKSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEFOTATASKSREQUEST_HPP_
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
  class DescribeFotaTasksRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeFotaTasksRequest& obj) { 
      DARABONBA_PTR_TO_JSON(FotaStatus, fotaStatus_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(TaskUid, taskUid_);
      DARABONBA_PTR_TO_JSON(UserStatus, userStatus_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeFotaTasksRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(FotaStatus, fotaStatus_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(TaskUid, taskUid_);
      DARABONBA_PTR_FROM_JSON(UserStatus, userStatus_);
    };
    DescribeFotaTasksRequest() = default ;
    DescribeFotaTasksRequest(const DescribeFotaTasksRequest &) = default ;
    DescribeFotaTasksRequest(DescribeFotaTasksRequest &&) = default ;
    DescribeFotaTasksRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeFotaTasksRequest() = default ;
    DescribeFotaTasksRequest& operator=(const DescribeFotaTasksRequest &) = default ;
    DescribeFotaTasksRequest& operator=(DescribeFotaTasksRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->fotaStatus_ != nullptr
        && this->lang_ != nullptr && this->maxResults_ != nullptr && this->nextToken_ != nullptr && this->regionId_ != nullptr && this->taskUid_ != nullptr
        && this->userStatus_ != nullptr; };
    // fotaStatus Field Functions 
    bool hasFotaStatus() const { return this->fotaStatus_ != nullptr;};
    void deleteFotaStatus() { this->fotaStatus_ = nullptr;};
    inline string fotaStatus() const { DARABONBA_PTR_GET_DEFAULT(fotaStatus_, "") };
    inline DescribeFotaTasksRequest& setFotaStatus(string fotaStatus) { DARABONBA_PTR_SET_VALUE(fotaStatus_, fotaStatus) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string lang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline DescribeFotaTasksRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline DescribeFotaTasksRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribeFotaTasksRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeFotaTasksRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // taskUid Field Functions 
    bool hasTaskUid() const { return this->taskUid_ != nullptr;};
    void deleteTaskUid() { this->taskUid_ = nullptr;};
    inline const vector<string> & taskUid() const { DARABONBA_PTR_GET_CONST(taskUid_, vector<string>) };
    inline vector<string> taskUid() { DARABONBA_PTR_GET(taskUid_, vector<string>) };
    inline DescribeFotaTasksRequest& setTaskUid(const vector<string> & taskUid) { DARABONBA_PTR_SET_VALUE(taskUid_, taskUid) };
    inline DescribeFotaTasksRequest& setTaskUid(vector<string> && taskUid) { DARABONBA_PTR_SET_RVALUE(taskUid_, taskUid) };


    // userStatus Field Functions 
    bool hasUserStatus() const { return this->userStatus_ != nullptr;};
    void deleteUserStatus() { this->userStatus_ = nullptr;};
    inline string userStatus() const { DARABONBA_PTR_GET_DEFAULT(userStatus_, "") };
    inline DescribeFotaTasksRequest& setUserStatus(string userStatus) { DARABONBA_PTR_SET_VALUE(userStatus_, userStatus) };


  protected:
    // >  This parameter is not publicly available.
    std::shared_ptr<string> fotaStatus_ = nullptr;
    // The language of the image version to update.
    // 
    // Valid values:
    // 
    // *   en: English.
    // *   zh: Simplified Chinese.
    std::shared_ptr<string> lang_ = nullptr;
    // The number of entries per page.
    // 
    // *   Valid values: 1 to 100
    // *   Default value: 20
    std::shared_ptr<int32_t> maxResults_ = nullptr;
    // The pagination token that is used in the next request to retrieve a new page of results. If the NextToken parameter is empty, no next page exists.
    std::shared_ptr<string> nextToken_ = nullptr;
    // The region ID. You can call the [DescribeRegions](https://help.aliyun.com/document_detail/196646.html) operation to query the regions supported by Elastic Desktop Service.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    // The IDs of the image update tasks.
    std::shared_ptr<vector<string>> taskUid_ = nullptr;
    // Specifies whether to automatically push the image update task.
    // 
    // Valid values:
    // 
    // *   Running: automatically pushes the image update task.
    // *   Pending: does not automatically push the image update task.
    std::shared_ptr<string> userStatus_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
