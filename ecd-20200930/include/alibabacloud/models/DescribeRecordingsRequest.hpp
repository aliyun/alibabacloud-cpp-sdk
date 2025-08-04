// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERECORDINGSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERECORDINGSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class DescribeRecordingsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRecordingsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DesktopId, desktopId_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NeedSignedUrl, needSignedUrl_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(PolicyGroupId, policyGroupId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(SignedUrlExpireMinutes, signedUrlExpireMinutes_);
      DARABONBA_PTR_TO_JSON(StandardEndTime, standardEndTime_);
      DARABONBA_PTR_TO_JSON(StandardStartTime, standardStartTime_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRecordingsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DesktopId, desktopId_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NeedSignedUrl, needSignedUrl_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(PolicyGroupId, policyGroupId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(SignedUrlExpireMinutes, signedUrlExpireMinutes_);
      DARABONBA_PTR_FROM_JSON(StandardEndTime, standardEndTime_);
      DARABONBA_PTR_FROM_JSON(StandardStartTime, standardStartTime_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
    };
    DescribeRecordingsRequest() = default ;
    DescribeRecordingsRequest(const DescribeRecordingsRequest &) = default ;
    DescribeRecordingsRequest(DescribeRecordingsRequest &&) = default ;
    DescribeRecordingsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRecordingsRequest() = default ;
    DescribeRecordingsRequest& operator=(const DescribeRecordingsRequest &) = default ;
    DescribeRecordingsRequest& operator=(DescribeRecordingsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->desktopId_ != nullptr
        && this->endTime_ != nullptr && this->maxResults_ != nullptr && this->needSignedUrl_ != nullptr && this->nextToken_ != nullptr && this->policyGroupId_ != nullptr
        && this->regionId_ != nullptr && this->signedUrlExpireMinutes_ != nullptr && this->standardEndTime_ != nullptr && this->standardStartTime_ != nullptr && this->startTime_ != nullptr; };
    // desktopId Field Functions 
    bool hasDesktopId() const { return this->desktopId_ != nullptr;};
    void deleteDesktopId() { this->desktopId_ = nullptr;};
    inline string desktopId() const { DARABONBA_PTR_GET_DEFAULT(desktopId_, "") };
    inline DescribeRecordingsRequest& setDesktopId(string desktopId) { DARABONBA_PTR_SET_VALUE(desktopId_, desktopId) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline DescribeRecordingsRequest& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline DescribeRecordingsRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // needSignedUrl Field Functions 
    bool hasNeedSignedUrl() const { return this->needSignedUrl_ != nullptr;};
    void deleteNeedSignedUrl() { this->needSignedUrl_ = nullptr;};
    inline bool needSignedUrl() const { DARABONBA_PTR_GET_DEFAULT(needSignedUrl_, false) };
    inline DescribeRecordingsRequest& setNeedSignedUrl(bool needSignedUrl) { DARABONBA_PTR_SET_VALUE(needSignedUrl_, needSignedUrl) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribeRecordingsRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // policyGroupId Field Functions 
    bool hasPolicyGroupId() const { return this->policyGroupId_ != nullptr;};
    void deletePolicyGroupId() { this->policyGroupId_ = nullptr;};
    inline string policyGroupId() const { DARABONBA_PTR_GET_DEFAULT(policyGroupId_, "") };
    inline DescribeRecordingsRequest& setPolicyGroupId(string policyGroupId) { DARABONBA_PTR_SET_VALUE(policyGroupId_, policyGroupId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeRecordingsRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // signedUrlExpireMinutes Field Functions 
    bool hasSignedUrlExpireMinutes() const { return this->signedUrlExpireMinutes_ != nullptr;};
    void deleteSignedUrlExpireMinutes() { this->signedUrlExpireMinutes_ = nullptr;};
    inline int32_t signedUrlExpireMinutes() const { DARABONBA_PTR_GET_DEFAULT(signedUrlExpireMinutes_, 0) };
    inline DescribeRecordingsRequest& setSignedUrlExpireMinutes(int32_t signedUrlExpireMinutes) { DARABONBA_PTR_SET_VALUE(signedUrlExpireMinutes_, signedUrlExpireMinutes) };


    // standardEndTime Field Functions 
    bool hasStandardEndTime() const { return this->standardEndTime_ != nullptr;};
    void deleteStandardEndTime() { this->standardEndTime_ = nullptr;};
    inline string standardEndTime() const { DARABONBA_PTR_GET_DEFAULT(standardEndTime_, "") };
    inline DescribeRecordingsRequest& setStandardEndTime(string standardEndTime) { DARABONBA_PTR_SET_VALUE(standardEndTime_, standardEndTime) };


    // standardStartTime Field Functions 
    bool hasStandardStartTime() const { return this->standardStartTime_ != nullptr;};
    void deleteStandardStartTime() { this->standardStartTime_ = nullptr;};
    inline string standardStartTime() const { DARABONBA_PTR_GET_DEFAULT(standardStartTime_, "") };
    inline DescribeRecordingsRequest& setStandardStartTime(string standardStartTime) { DARABONBA_PTR_SET_VALUE(standardStartTime_, standardStartTime) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline DescribeRecordingsRequest& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    // The cloud computer ID. If this parameter is not specified, the screen recording files on all cloud computers in the designated region will be queried.
    std::shared_ptr<string> desktopId_ = nullptr;
    // The end time of the query. Specify the time in the `YYYYMMDDhhmmss` format. The time must be in UTC+8.
    std::shared_ptr<string> endTime_ = nullptr;
    // The maximum number of entries per page.
    // 
    // Maximum value: 100.
    // 
    // Default value: 10.
    std::shared_ptr<int32_t> maxResults_ = nullptr;
    // Specifies whether to return a URL.
    // 
    // Valid values:
    // 
    // *   true
    // *   false (default)
    std::shared_ptr<bool> needSignedUrl_ = nullptr;
    // The pagination token that is used in the request to retrieve a new page of results. You do not need to specify this parameter for the first request. You must specify the token that is obtained from the previous query as the value of `NextToken`.
    std::shared_ptr<string> nextToken_ = nullptr;
    // The policy ID.
    std::shared_ptr<string> policyGroupId_ = nullptr;
    // The region ID. You can call the [DescribeRegions](~~DescribeRegions~~) operation to query the list of regions where Elastic Desktop Service (EDS) Enterprise is available.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    // The validity period of the returned URL. Unit: minutes.
    std::shared_ptr<int32_t> signedUrlExpireMinutes_ = nullptr;
    // The end time of the query. Specify the time in the ISO 8601 standard in the `yyyy-mm-ddthh:mm:ssz` format. The time must be in UTC+0.
    std::shared_ptr<string> standardEndTime_ = nullptr;
    // The start time of the query. Specify the time in the ISO 8601 standard in the `yyyy-mm-ddthh:mm:ssz` format. The time must be in UTC+0.
    std::shared_ptr<string> standardStartTime_ = nullptr;
    // The start time of the query. Specify the time in the `YYYYMMDDhhmmss` format. The time must be in UTC+8.
    std::shared_ptr<string> startTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
