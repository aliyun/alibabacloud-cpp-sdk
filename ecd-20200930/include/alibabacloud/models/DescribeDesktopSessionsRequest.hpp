// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDESKTOPSESSIONSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDESKTOPSESSIONSREQUEST_HPP_
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
  class DescribeDesktopSessionsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDesktopSessionsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CheckOsSession, checkOsSession_);
      DARABONBA_PTR_TO_JSON(DesktopId, desktopId_);
      DARABONBA_PTR_TO_JSON(DesktopName, desktopName_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(EndUserId, endUserId_);
      DARABONBA_PTR_TO_JSON(EndUserIdFilter, endUserIdFilter_);
      DARABONBA_PTR_TO_JSON(FillHardwareInfo, fillHardwareInfo_);
      DARABONBA_PTR_TO_JSON(Language, language_);
      DARABONBA_PTR_TO_JSON(OfficeSiteId, officeSiteId_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(SessionStatus, sessionStatus_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(SubPayType, subPayType_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDesktopSessionsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CheckOsSession, checkOsSession_);
      DARABONBA_PTR_FROM_JSON(DesktopId, desktopId_);
      DARABONBA_PTR_FROM_JSON(DesktopName, desktopName_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(EndUserId, endUserId_);
      DARABONBA_PTR_FROM_JSON(EndUserIdFilter, endUserIdFilter_);
      DARABONBA_PTR_FROM_JSON(FillHardwareInfo, fillHardwareInfo_);
      DARABONBA_PTR_FROM_JSON(Language, language_);
      DARABONBA_PTR_FROM_JSON(OfficeSiteId, officeSiteId_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(SessionStatus, sessionStatus_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(SubPayType, subPayType_);
    };
    DescribeDesktopSessionsRequest() = default ;
    DescribeDesktopSessionsRequest(const DescribeDesktopSessionsRequest &) = default ;
    DescribeDesktopSessionsRequest(DescribeDesktopSessionsRequest &&) = default ;
    DescribeDesktopSessionsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDesktopSessionsRequest() = default ;
    DescribeDesktopSessionsRequest& operator=(const DescribeDesktopSessionsRequest &) = default ;
    DescribeDesktopSessionsRequest& operator=(DescribeDesktopSessionsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->checkOsSession_ == nullptr
        && return this->desktopId_ == nullptr && return this->desktopName_ == nullptr && return this->endTime_ == nullptr && return this->endUserId_ == nullptr && return this->endUserIdFilter_ == nullptr
        && return this->fillHardwareInfo_ == nullptr && return this->language_ == nullptr && return this->officeSiteId_ == nullptr && return this->pageNumber_ == nullptr && return this->pageSize_ == nullptr
        && return this->regionId_ == nullptr && return this->resourceGroupId_ == nullptr && return this->sessionStatus_ == nullptr && return this->startTime_ == nullptr && return this->subPayType_ == nullptr; };
    // checkOsSession Field Functions 
    bool hasCheckOsSession() const { return this->checkOsSession_ != nullptr;};
    void deleteCheckOsSession() { this->checkOsSession_ = nullptr;};
    inline bool checkOsSession() const { DARABONBA_PTR_GET_DEFAULT(checkOsSession_, false) };
    inline DescribeDesktopSessionsRequest& setCheckOsSession(bool checkOsSession) { DARABONBA_PTR_SET_VALUE(checkOsSession_, checkOsSession) };


    // desktopId Field Functions 
    bool hasDesktopId() const { return this->desktopId_ != nullptr;};
    void deleteDesktopId() { this->desktopId_ = nullptr;};
    inline const vector<string> & desktopId() const { DARABONBA_PTR_GET_CONST(desktopId_, vector<string>) };
    inline vector<string> desktopId() { DARABONBA_PTR_GET(desktopId_, vector<string>) };
    inline DescribeDesktopSessionsRequest& setDesktopId(const vector<string> & desktopId) { DARABONBA_PTR_SET_VALUE(desktopId_, desktopId) };
    inline DescribeDesktopSessionsRequest& setDesktopId(vector<string> && desktopId) { DARABONBA_PTR_SET_RVALUE(desktopId_, desktopId) };


    // desktopName Field Functions 
    bool hasDesktopName() const { return this->desktopName_ != nullptr;};
    void deleteDesktopName() { this->desktopName_ = nullptr;};
    inline string desktopName() const { DARABONBA_PTR_GET_DEFAULT(desktopName_, "") };
    inline DescribeDesktopSessionsRequest& setDesktopName(string desktopName) { DARABONBA_PTR_SET_VALUE(desktopName_, desktopName) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline DescribeDesktopSessionsRequest& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // endUserId Field Functions 
    bool hasEndUserId() const { return this->endUserId_ != nullptr;};
    void deleteEndUserId() { this->endUserId_ = nullptr;};
    inline string endUserId() const { DARABONBA_PTR_GET_DEFAULT(endUserId_, "") };
    inline DescribeDesktopSessionsRequest& setEndUserId(string endUserId) { DARABONBA_PTR_SET_VALUE(endUserId_, endUserId) };


    // endUserIdFilter Field Functions 
    bool hasEndUserIdFilter() const { return this->endUserIdFilter_ != nullptr;};
    void deleteEndUserIdFilter() { this->endUserIdFilter_ = nullptr;};
    inline string endUserIdFilter() const { DARABONBA_PTR_GET_DEFAULT(endUserIdFilter_, "") };
    inline DescribeDesktopSessionsRequest& setEndUserIdFilter(string endUserIdFilter) { DARABONBA_PTR_SET_VALUE(endUserIdFilter_, endUserIdFilter) };


    // fillHardwareInfo Field Functions 
    bool hasFillHardwareInfo() const { return this->fillHardwareInfo_ != nullptr;};
    void deleteFillHardwareInfo() { this->fillHardwareInfo_ = nullptr;};
    inline bool fillHardwareInfo() const { DARABONBA_PTR_GET_DEFAULT(fillHardwareInfo_, false) };
    inline DescribeDesktopSessionsRequest& setFillHardwareInfo(bool fillHardwareInfo) { DARABONBA_PTR_SET_VALUE(fillHardwareInfo_, fillHardwareInfo) };


    // language Field Functions 
    bool hasLanguage() const { return this->language_ != nullptr;};
    void deleteLanguage() { this->language_ = nullptr;};
    inline string language() const { DARABONBA_PTR_GET_DEFAULT(language_, "") };
    inline DescribeDesktopSessionsRequest& setLanguage(string language) { DARABONBA_PTR_SET_VALUE(language_, language) };


    // officeSiteId Field Functions 
    bool hasOfficeSiteId() const { return this->officeSiteId_ != nullptr;};
    void deleteOfficeSiteId() { this->officeSiteId_ = nullptr;};
    inline string officeSiteId() const { DARABONBA_PTR_GET_DEFAULT(officeSiteId_, "") };
    inline DescribeDesktopSessionsRequest& setOfficeSiteId(string officeSiteId) { DARABONBA_PTR_SET_VALUE(officeSiteId_, officeSiteId) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeDesktopSessionsRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeDesktopSessionsRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeDesktopSessionsRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline DescribeDesktopSessionsRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // sessionStatus Field Functions 
    bool hasSessionStatus() const { return this->sessionStatus_ != nullptr;};
    void deleteSessionStatus() { this->sessionStatus_ = nullptr;};
    inline string sessionStatus() const { DARABONBA_PTR_GET_DEFAULT(sessionStatus_, "") };
    inline DescribeDesktopSessionsRequest& setSessionStatus(string sessionStatus) { DARABONBA_PTR_SET_VALUE(sessionStatus_, sessionStatus) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline DescribeDesktopSessionsRequest& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // subPayType Field Functions 
    bool hasSubPayType() const { return this->subPayType_ != nullptr;};
    void deleteSubPayType() { this->subPayType_ = nullptr;};
    inline string subPayType() const { DARABONBA_PTR_GET_DEFAULT(subPayType_, "") };
    inline DescribeDesktopSessionsRequest& setSubPayType(string subPayType) { DARABONBA_PTR_SET_VALUE(subPayType_, subPayType) };


  protected:
    // Specifies whether to turn on the switch to check session status of cloud computers.
    std::shared_ptr<bool> checkOsSession_ = nullptr;
    // The IDs of the cloud computers. You can specify the IDs of 1 to 100 cloud computers.
    std::shared_ptr<vector<string>> desktopId_ = nullptr;
    // The name of the cloud computer.
    std::shared_ptr<string> desktopName_ = nullptr;
    // The end of the time range to query.
    std::shared_ptr<string> endTime_ = nullptr;
    // The ID of the end user.
    std::shared_ptr<string> endUserId_ = nullptr;
    // The user ID. This parameter functions the same as the `EndUserId` parameter. You only need to include one of them in your request.
    std::shared_ptr<string> endUserIdFilter_ = nullptr;
    std::shared_ptr<bool> fillHardwareInfo_ = nullptr;
    std::shared_ptr<string> language_ = nullptr;
    // The office network ID.
    std::shared_ptr<string> officeSiteId_ = nullptr;
    // The page number.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The number of entries returned per page.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The region ID. You can call the [DescribeRegions](~~DescribeRegions~~) operation to query the regions supported by Elastic Desktop Service (EDS).
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    // The state of the session.
    // 
    // Valid values:
    // 
    // *   Connected
    // *   Disconnected
    std::shared_ptr<string> sessionStatus_ = nullptr;
    // The start of the time range to query.
    std::shared_ptr<string> startTime_ = nullptr;
    // The billing method of cloud computers.
    // 
    // Valid values:
    // 
    // *   duration: hourly plan (available for users in the whitelist)
    // *   postPaid: pay-as-you-go
    // *   monthPackage: monthly subscription (the 120-hour/250-hour computing plan)
    // *   prePaid: monthly subscription (the Unlimited computing plan)
    std::shared_ptr<string> subPayType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
