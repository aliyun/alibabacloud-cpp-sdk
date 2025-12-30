// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEFOTAPENDINGDESKTOPSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEFOTAPENDINGDESKTOPSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class DescribeFotaPendingDesktopsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeFotaPendingDesktopsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DesktopId, desktopId_);
      DARABONBA_PTR_TO_JSON(DesktopName, desktopName_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(OfficeSiteId, officeSiteId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(TaskUid, taskUid_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeFotaPendingDesktopsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DesktopId, desktopId_);
      DARABONBA_PTR_FROM_JSON(DesktopName, desktopName_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(OfficeSiteId, officeSiteId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(TaskUid, taskUid_);
    };
    DescribeFotaPendingDesktopsRequest() = default ;
    DescribeFotaPendingDesktopsRequest(const DescribeFotaPendingDesktopsRequest &) = default ;
    DescribeFotaPendingDesktopsRequest(DescribeFotaPendingDesktopsRequest &&) = default ;
    DescribeFotaPendingDesktopsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeFotaPendingDesktopsRequest() = default ;
    DescribeFotaPendingDesktopsRequest& operator=(const DescribeFotaPendingDesktopsRequest &) = default ;
    DescribeFotaPendingDesktopsRequest& operator=(DescribeFotaPendingDesktopsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->desktopId_ == nullptr
        && this->desktopName_ == nullptr && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->officeSiteId_ == nullptr && this->regionId_ == nullptr
        && this->taskUid_ == nullptr; };
    // desktopId Field Functions 
    bool hasDesktopId() const { return this->desktopId_ != nullptr;};
    void deleteDesktopId() { this->desktopId_ = nullptr;};
    inline string getDesktopId() const { DARABONBA_PTR_GET_DEFAULT(desktopId_, "") };
    inline DescribeFotaPendingDesktopsRequest& setDesktopId(string desktopId) { DARABONBA_PTR_SET_VALUE(desktopId_, desktopId) };


    // desktopName Field Functions 
    bool hasDesktopName() const { return this->desktopName_ != nullptr;};
    void deleteDesktopName() { this->desktopName_ = nullptr;};
    inline string getDesktopName() const { DARABONBA_PTR_GET_DEFAULT(desktopName_, "") };
    inline DescribeFotaPendingDesktopsRequest& setDesktopName(string desktopName) { DARABONBA_PTR_SET_VALUE(desktopName_, desktopName) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline DescribeFotaPendingDesktopsRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribeFotaPendingDesktopsRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // officeSiteId Field Functions 
    bool hasOfficeSiteId() const { return this->officeSiteId_ != nullptr;};
    void deleteOfficeSiteId() { this->officeSiteId_ = nullptr;};
    inline string getOfficeSiteId() const { DARABONBA_PTR_GET_DEFAULT(officeSiteId_, "") };
    inline DescribeFotaPendingDesktopsRequest& setOfficeSiteId(string officeSiteId) { DARABONBA_PTR_SET_VALUE(officeSiteId_, officeSiteId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeFotaPendingDesktopsRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // taskUid Field Functions 
    bool hasTaskUid() const { return this->taskUid_ != nullptr;};
    void deleteTaskUid() { this->taskUid_ = nullptr;};
    inline string getTaskUid() const { DARABONBA_PTR_GET_DEFAULT(taskUid_, "") };
    inline DescribeFotaPendingDesktopsRequest& setTaskUid(string taskUid) { DARABONBA_PTR_SET_VALUE(taskUid_, taskUid) };


  protected:
    // The ID of the cloud computer.
    shared_ptr<string> desktopId_ {};
    // The name of the cloud computer.
    shared_ptr<string> desktopName_ {};
    // The number of entries per page.
    // 
    // *   Valid values: 1 to 100.
    // *   Default value: 20.
    shared_ptr<int32_t> maxResults_ {};
    // The pagination token that is used in the next request to retrieve a new page of results. You do not need to specify this parameter for the first request. You must specify the token that is obtained from the previous query as the value of `NextToken`.
    shared_ptr<string> nextToken_ {};
    // The ID of the office network. You can call the [DescribeOfficeSites](https://help.aliyun.com/document_detail/216071.html) operation to obtain the value of this parameter.
    shared_ptr<string> officeSiteId_ {};
    // The region ID. You can call the [DescribeRegions](https://help.aliyun.com/document_detail/196646.html) operation to query the regions supported by Elastic Desktop Service.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // The ID of the image update task. You can call the [DescribeFotaTasks](https://help.aliyun.com/document_detail/437001.html) operation to obtain the value of this parameter.
    shared_ptr<string> taskUid_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
