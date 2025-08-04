// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDESKTOPSINGROUPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDESKTOPSINGROUPREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class DescribeDesktopsInGroupRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDesktopsInGroupRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CustomEndTimePeriod, customEndTimePeriod_);
      DARABONBA_PTR_TO_JSON(CustomStartTimePeriod, customStartTimePeriod_);
      DARABONBA_PTR_TO_JSON(DesktopGroupId, desktopGroupId_);
      DARABONBA_PTR_TO_JSON(IgnoreDeleted, ignoreDeleted_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(PayType, payType_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDesktopsInGroupRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CustomEndTimePeriod, customEndTimePeriod_);
      DARABONBA_PTR_FROM_JSON(CustomStartTimePeriod, customStartTimePeriod_);
      DARABONBA_PTR_FROM_JSON(DesktopGroupId, desktopGroupId_);
      DARABONBA_PTR_FROM_JSON(IgnoreDeleted, ignoreDeleted_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(PayType, payType_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    DescribeDesktopsInGroupRequest() = default ;
    DescribeDesktopsInGroupRequest(const DescribeDesktopsInGroupRequest &) = default ;
    DescribeDesktopsInGroupRequest(DescribeDesktopsInGroupRequest &&) = default ;
    DescribeDesktopsInGroupRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDesktopsInGroupRequest() = default ;
    DescribeDesktopsInGroupRequest& operator=(const DescribeDesktopsInGroupRequest &) = default ;
    DescribeDesktopsInGroupRequest& operator=(DescribeDesktopsInGroupRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->customEndTimePeriod_ != nullptr
        && this->customStartTimePeriod_ != nullptr && this->desktopGroupId_ != nullptr && this->ignoreDeleted_ != nullptr && this->maxResults_ != nullptr && this->nextToken_ != nullptr
        && this->payType_ != nullptr && this->regionId_ != nullptr; };
    // customEndTimePeriod Field Functions 
    bool hasCustomEndTimePeriod() const { return this->customEndTimePeriod_ != nullptr;};
    void deleteCustomEndTimePeriod() { this->customEndTimePeriod_ = nullptr;};
    inline int64_t customEndTimePeriod() const { DARABONBA_PTR_GET_DEFAULT(customEndTimePeriod_, 0L) };
    inline DescribeDesktopsInGroupRequest& setCustomEndTimePeriod(int64_t customEndTimePeriod) { DARABONBA_PTR_SET_VALUE(customEndTimePeriod_, customEndTimePeriod) };


    // customStartTimePeriod Field Functions 
    bool hasCustomStartTimePeriod() const { return this->customStartTimePeriod_ != nullptr;};
    void deleteCustomStartTimePeriod() { this->customStartTimePeriod_ = nullptr;};
    inline int64_t customStartTimePeriod() const { DARABONBA_PTR_GET_DEFAULT(customStartTimePeriod_, 0L) };
    inline DescribeDesktopsInGroupRequest& setCustomStartTimePeriod(int64_t customStartTimePeriod) { DARABONBA_PTR_SET_VALUE(customStartTimePeriod_, customStartTimePeriod) };


    // desktopGroupId Field Functions 
    bool hasDesktopGroupId() const { return this->desktopGroupId_ != nullptr;};
    void deleteDesktopGroupId() { this->desktopGroupId_ = nullptr;};
    inline string desktopGroupId() const { DARABONBA_PTR_GET_DEFAULT(desktopGroupId_, "") };
    inline DescribeDesktopsInGroupRequest& setDesktopGroupId(string desktopGroupId) { DARABONBA_PTR_SET_VALUE(desktopGroupId_, desktopGroupId) };


    // ignoreDeleted Field Functions 
    bool hasIgnoreDeleted() const { return this->ignoreDeleted_ != nullptr;};
    void deleteIgnoreDeleted() { this->ignoreDeleted_ = nullptr;};
    inline bool ignoreDeleted() const { DARABONBA_PTR_GET_DEFAULT(ignoreDeleted_, false) };
    inline DescribeDesktopsInGroupRequest& setIgnoreDeleted(bool ignoreDeleted) { DARABONBA_PTR_SET_VALUE(ignoreDeleted_, ignoreDeleted) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline DescribeDesktopsInGroupRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribeDesktopsInGroupRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // payType Field Functions 
    bool hasPayType() const { return this->payType_ != nullptr;};
    void deletePayType() { this->payType_ = nullptr;};
    inline string payType() const { DARABONBA_PTR_GET_DEFAULT(payType_, "") };
    inline DescribeDesktopsInGroupRequest& setPayType(string payType) { DARABONBA_PTR_SET_VALUE(payType_, payType) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeDesktopsInGroupRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    std::shared_ptr<int64_t> customEndTimePeriod_ = nullptr;
    std::shared_ptr<int64_t> customStartTimePeriod_ = nullptr;
    // The ID of the cloud computer share.
    // 
    // This parameter is required.
    std::shared_ptr<string> desktopGroupId_ = nullptr;
    // Specifies whether to ignore deletion flags.
    // 
    // Default value: true. Valid values:
    // 
    // *   true: ignores deletion flags. The cloud computers that were deleted are returned.
    // *   false: does not ignore deletion flags. The cloud computers that were deleted are not returned.
    std::shared_ptr<bool> ignoreDeleted_ = nullptr;
    // The maximum number of entries per page.
    // 
    // *   Default value: 10.
    // *   Maximum value: 100.
    std::shared_ptr<int32_t> maxResults_ = nullptr;
    // The pagination token that is used in the next request to retrieve a new page of results. You do not need to specify this parameter for the first request. You must specify the token that is obtained from the previous query as the value of NextToken.
    std::shared_ptr<string> nextToken_ = nullptr;
    // The billing method of the cloud computer share.
    std::shared_ptr<string> payType_ = nullptr;
    // The region ID. You can call the [DescribeRegions](https://help.aliyun.com/document_detail/196646.html) operation to query the most recent region list.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
