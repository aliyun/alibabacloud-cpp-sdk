// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDESKTOPGROUPSESSIONSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDESKTOPGROUPSESSIONSREQUEST_HPP_
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
  class DescribeDesktopGroupSessionsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDesktopGroupSessionsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DesktopGroupIds, desktopGroupIds_);
      DARABONBA_PTR_TO_JSON(DesktopGroupName, desktopGroupName_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(EndUserId, endUserId_);
      DARABONBA_PTR_TO_JSON(FillTerminalInfo, fillTerminalInfo_);
      DARABONBA_PTR_TO_JSON(Language, language_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(OwnType, ownType_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(SessionStatus, sessionStatus_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDesktopGroupSessionsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DesktopGroupIds, desktopGroupIds_);
      DARABONBA_PTR_FROM_JSON(DesktopGroupName, desktopGroupName_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(EndUserId, endUserId_);
      DARABONBA_PTR_FROM_JSON(FillTerminalInfo, fillTerminalInfo_);
      DARABONBA_PTR_FROM_JSON(Language, language_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(OwnType, ownType_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(SessionStatus, sessionStatus_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
    };
    DescribeDesktopGroupSessionsRequest() = default ;
    DescribeDesktopGroupSessionsRequest(const DescribeDesktopGroupSessionsRequest &) = default ;
    DescribeDesktopGroupSessionsRequest(DescribeDesktopGroupSessionsRequest &&) = default ;
    DescribeDesktopGroupSessionsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDesktopGroupSessionsRequest() = default ;
    DescribeDesktopGroupSessionsRequest& operator=(const DescribeDesktopGroupSessionsRequest &) = default ;
    DescribeDesktopGroupSessionsRequest& operator=(DescribeDesktopGroupSessionsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->desktopGroupIds_ == nullptr
        && this->desktopGroupName_ == nullptr && this->endTime_ == nullptr && this->endUserId_ == nullptr && this->fillTerminalInfo_ == nullptr && this->language_ == nullptr
        && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->ownType_ == nullptr && this->regionId_ == nullptr && this->sessionStatus_ == nullptr
        && this->startTime_ == nullptr; };
    // desktopGroupIds Field Functions 
    bool hasDesktopGroupIds() const { return this->desktopGroupIds_ != nullptr;};
    void deleteDesktopGroupIds() { this->desktopGroupIds_ = nullptr;};
    inline const vector<string> & getDesktopGroupIds() const { DARABONBA_PTR_GET_CONST(desktopGroupIds_, vector<string>) };
    inline vector<string> getDesktopGroupIds() { DARABONBA_PTR_GET(desktopGroupIds_, vector<string>) };
    inline DescribeDesktopGroupSessionsRequest& setDesktopGroupIds(const vector<string> & desktopGroupIds) { DARABONBA_PTR_SET_VALUE(desktopGroupIds_, desktopGroupIds) };
    inline DescribeDesktopGroupSessionsRequest& setDesktopGroupIds(vector<string> && desktopGroupIds) { DARABONBA_PTR_SET_RVALUE(desktopGroupIds_, desktopGroupIds) };


    // desktopGroupName Field Functions 
    bool hasDesktopGroupName() const { return this->desktopGroupName_ != nullptr;};
    void deleteDesktopGroupName() { this->desktopGroupName_ = nullptr;};
    inline string getDesktopGroupName() const { DARABONBA_PTR_GET_DEFAULT(desktopGroupName_, "") };
    inline DescribeDesktopGroupSessionsRequest& setDesktopGroupName(string desktopGroupName) { DARABONBA_PTR_SET_VALUE(desktopGroupName_, desktopGroupName) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline DescribeDesktopGroupSessionsRequest& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // endUserId Field Functions 
    bool hasEndUserId() const { return this->endUserId_ != nullptr;};
    void deleteEndUserId() { this->endUserId_ = nullptr;};
    inline string getEndUserId() const { DARABONBA_PTR_GET_DEFAULT(endUserId_, "") };
    inline DescribeDesktopGroupSessionsRequest& setEndUserId(string endUserId) { DARABONBA_PTR_SET_VALUE(endUserId_, endUserId) };


    // fillTerminalInfo Field Functions 
    bool hasFillTerminalInfo() const { return this->fillTerminalInfo_ != nullptr;};
    void deleteFillTerminalInfo() { this->fillTerminalInfo_ = nullptr;};
    inline bool getFillTerminalInfo() const { DARABONBA_PTR_GET_DEFAULT(fillTerminalInfo_, false) };
    inline DescribeDesktopGroupSessionsRequest& setFillTerminalInfo(bool fillTerminalInfo) { DARABONBA_PTR_SET_VALUE(fillTerminalInfo_, fillTerminalInfo) };


    // language Field Functions 
    bool hasLanguage() const { return this->language_ != nullptr;};
    void deleteLanguage() { this->language_ = nullptr;};
    inline string getLanguage() const { DARABONBA_PTR_GET_DEFAULT(language_, "") };
    inline DescribeDesktopGroupSessionsRequest& setLanguage(string language) { DARABONBA_PTR_SET_VALUE(language_, language) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline DescribeDesktopGroupSessionsRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribeDesktopGroupSessionsRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // ownType Field Functions 
    bool hasOwnType() const { return this->ownType_ != nullptr;};
    void deleteOwnType() { this->ownType_ = nullptr;};
    inline int32_t getOwnType() const { DARABONBA_PTR_GET_DEFAULT(ownType_, 0) };
    inline DescribeDesktopGroupSessionsRequest& setOwnType(int32_t ownType) { DARABONBA_PTR_SET_VALUE(ownType_, ownType) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeDesktopGroupSessionsRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // sessionStatus Field Functions 
    bool hasSessionStatus() const { return this->sessionStatus_ != nullptr;};
    void deleteSessionStatus() { this->sessionStatus_ = nullptr;};
    inline string getSessionStatus() const { DARABONBA_PTR_GET_DEFAULT(sessionStatus_, "") };
    inline DescribeDesktopGroupSessionsRequest& setSessionStatus(string sessionStatus) { DARABONBA_PTR_SET_VALUE(sessionStatus_, sessionStatus) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline DescribeDesktopGroupSessionsRequest& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    // The IDs of shared desktop groups.
    shared_ptr<vector<string>> desktopGroupIds_ {};
    // The name of the shared desktop.
    shared_ptr<string> desktopGroupName_ {};
    // The end of the time range to query.
    shared_ptr<string> endTime_ {};
    // The user ID of the terminal that connects to the session.
    shared_ptr<string> endUserId_ {};
    // Whether to supplement terminal information.
    shared_ptr<bool> fillTerminalInfo_ {};
    // The language of the response.
    shared_ptr<string> language_ {};
    // The number of entries per page.
    shared_ptr<int32_t> maxResults_ {};
    // A pagination token. It can be used in the next request to retrieve a new page of results.
    shared_ptr<string> nextToken_ {};
    // The type of the session.
    // 
    // Valid values:
    // 
    // *   0: single-session
    // *   1: multi-session
    shared_ptr<int32_t> ownType_ {};
    // The ID of the region. You can call the [DescribeRegions](~~DescribeRegions~~) operation to query the list of regions where Elastic Desktop Service (EDS) Enterprise is available.
    shared_ptr<string> regionId_ {};
    // The status of the session.
    // 
    // Valid values:
    // 
    // *   Connected
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    // *   Disconnected
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    shared_ptr<string> sessionStatus_ {};
    // The beginning of the time range to query.
    shared_ptr<string> startTime_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
