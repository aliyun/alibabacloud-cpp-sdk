// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTLIVEPACKAGEORIGINENDPOINTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTLIVEPACKAGEORIGINENDPOINTSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class ListLivePackageOriginEndpointsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListLivePackageOriginEndpointsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(LivePackageOriginEndpoints, livePackageOriginEndpoints_);
      DARABONBA_PTR_TO_JSON(PageNo, pageNo_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SortBy, sortBy_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListLivePackageOriginEndpointsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(LivePackageOriginEndpoints, livePackageOriginEndpoints_);
      DARABONBA_PTR_FROM_JSON(PageNo, pageNo_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SortBy, sortBy_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListLivePackageOriginEndpointsResponseBody() = default ;
    ListLivePackageOriginEndpointsResponseBody(const ListLivePackageOriginEndpointsResponseBody &) = default ;
    ListLivePackageOriginEndpointsResponseBody(ListLivePackageOriginEndpointsResponseBody &&) = default ;
    ListLivePackageOriginEndpointsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListLivePackageOriginEndpointsResponseBody() = default ;
    ListLivePackageOriginEndpointsResponseBody& operator=(const ListLivePackageOriginEndpointsResponseBody &) = default ;
    ListLivePackageOriginEndpointsResponseBody& operator=(ListLivePackageOriginEndpointsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class LivePackageOriginEndpoints : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const LivePackageOriginEndpoints& obj) { 
        DARABONBA_PTR_TO_JSON(AuthorizationCode, authorizationCode_);
        DARABONBA_PTR_TO_JSON(ChannelName, channelName_);
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(EndpointName, endpointName_);
        DARABONBA_PTR_TO_JSON(EndpointUrl, endpointUrl_);
        DARABONBA_PTR_TO_JSON(GroupName, groupName_);
        DARABONBA_PTR_TO_JSON(IpBlacklist, ipBlacklist_);
        DARABONBA_PTR_TO_JSON(IpWhitelist, ipWhitelist_);
        DARABONBA_PTR_TO_JSON(LastModified, lastModified_);
        DARABONBA_PTR_TO_JSON(ManifestName, manifestName_);
        DARABONBA_PTR_TO_JSON(Protocol, protocol_);
        DARABONBA_PTR_TO_JSON(TimeshiftVision, timeshiftVision_);
      };
      friend void from_json(const Darabonba::Json& j, LivePackageOriginEndpoints& obj) { 
        DARABONBA_PTR_FROM_JSON(AuthorizationCode, authorizationCode_);
        DARABONBA_PTR_FROM_JSON(ChannelName, channelName_);
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(EndpointName, endpointName_);
        DARABONBA_PTR_FROM_JSON(EndpointUrl, endpointUrl_);
        DARABONBA_PTR_FROM_JSON(GroupName, groupName_);
        DARABONBA_PTR_FROM_JSON(IpBlacklist, ipBlacklist_);
        DARABONBA_PTR_FROM_JSON(IpWhitelist, ipWhitelist_);
        DARABONBA_PTR_FROM_JSON(LastModified, lastModified_);
        DARABONBA_PTR_FROM_JSON(ManifestName, manifestName_);
        DARABONBA_PTR_FROM_JSON(Protocol, protocol_);
        DARABONBA_PTR_FROM_JSON(TimeshiftVision, timeshiftVision_);
      };
      LivePackageOriginEndpoints() = default ;
      LivePackageOriginEndpoints(const LivePackageOriginEndpoints &) = default ;
      LivePackageOriginEndpoints(LivePackageOriginEndpoints &&) = default ;
      LivePackageOriginEndpoints(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~LivePackageOriginEndpoints() = default ;
      LivePackageOriginEndpoints& operator=(const LivePackageOriginEndpoints &) = default ;
      LivePackageOriginEndpoints& operator=(LivePackageOriginEndpoints &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->authorizationCode_ == nullptr
        && this->channelName_ == nullptr && this->createTime_ == nullptr && this->description_ == nullptr && this->endpointName_ == nullptr && this->endpointUrl_ == nullptr
        && this->groupName_ == nullptr && this->ipBlacklist_ == nullptr && this->ipWhitelist_ == nullptr && this->lastModified_ == nullptr && this->manifestName_ == nullptr
        && this->protocol_ == nullptr && this->timeshiftVision_ == nullptr; };
      // authorizationCode Field Functions 
      bool hasAuthorizationCode() const { return this->authorizationCode_ != nullptr;};
      void deleteAuthorizationCode() { this->authorizationCode_ = nullptr;};
      inline string getAuthorizationCode() const { DARABONBA_PTR_GET_DEFAULT(authorizationCode_, "") };
      inline LivePackageOriginEndpoints& setAuthorizationCode(string authorizationCode) { DARABONBA_PTR_SET_VALUE(authorizationCode_, authorizationCode) };


      // channelName Field Functions 
      bool hasChannelName() const { return this->channelName_ != nullptr;};
      void deleteChannelName() { this->channelName_ = nullptr;};
      inline string getChannelName() const { DARABONBA_PTR_GET_DEFAULT(channelName_, "") };
      inline LivePackageOriginEndpoints& setChannelName(string channelName) { DARABONBA_PTR_SET_VALUE(channelName_, channelName) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline LivePackageOriginEndpoints& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline LivePackageOriginEndpoints& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // endpointName Field Functions 
      bool hasEndpointName() const { return this->endpointName_ != nullptr;};
      void deleteEndpointName() { this->endpointName_ = nullptr;};
      inline string getEndpointName() const { DARABONBA_PTR_GET_DEFAULT(endpointName_, "") };
      inline LivePackageOriginEndpoints& setEndpointName(string endpointName) { DARABONBA_PTR_SET_VALUE(endpointName_, endpointName) };


      // endpointUrl Field Functions 
      bool hasEndpointUrl() const { return this->endpointUrl_ != nullptr;};
      void deleteEndpointUrl() { this->endpointUrl_ = nullptr;};
      inline string getEndpointUrl() const { DARABONBA_PTR_GET_DEFAULT(endpointUrl_, "") };
      inline LivePackageOriginEndpoints& setEndpointUrl(string endpointUrl) { DARABONBA_PTR_SET_VALUE(endpointUrl_, endpointUrl) };


      // groupName Field Functions 
      bool hasGroupName() const { return this->groupName_ != nullptr;};
      void deleteGroupName() { this->groupName_ = nullptr;};
      inline string getGroupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
      inline LivePackageOriginEndpoints& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


      // ipBlacklist Field Functions 
      bool hasIpBlacklist() const { return this->ipBlacklist_ != nullptr;};
      void deleteIpBlacklist() { this->ipBlacklist_ = nullptr;};
      inline string getIpBlacklist() const { DARABONBA_PTR_GET_DEFAULT(ipBlacklist_, "") };
      inline LivePackageOriginEndpoints& setIpBlacklist(string ipBlacklist) { DARABONBA_PTR_SET_VALUE(ipBlacklist_, ipBlacklist) };


      // ipWhitelist Field Functions 
      bool hasIpWhitelist() const { return this->ipWhitelist_ != nullptr;};
      void deleteIpWhitelist() { this->ipWhitelist_ = nullptr;};
      inline string getIpWhitelist() const { DARABONBA_PTR_GET_DEFAULT(ipWhitelist_, "") };
      inline LivePackageOriginEndpoints& setIpWhitelist(string ipWhitelist) { DARABONBA_PTR_SET_VALUE(ipWhitelist_, ipWhitelist) };


      // lastModified Field Functions 
      bool hasLastModified() const { return this->lastModified_ != nullptr;};
      void deleteLastModified() { this->lastModified_ = nullptr;};
      inline string getLastModified() const { DARABONBA_PTR_GET_DEFAULT(lastModified_, "") };
      inline LivePackageOriginEndpoints& setLastModified(string lastModified) { DARABONBA_PTR_SET_VALUE(lastModified_, lastModified) };


      // manifestName Field Functions 
      bool hasManifestName() const { return this->manifestName_ != nullptr;};
      void deleteManifestName() { this->manifestName_ = nullptr;};
      inline string getManifestName() const { DARABONBA_PTR_GET_DEFAULT(manifestName_, "") };
      inline LivePackageOriginEndpoints& setManifestName(string manifestName) { DARABONBA_PTR_SET_VALUE(manifestName_, manifestName) };


      // protocol Field Functions 
      bool hasProtocol() const { return this->protocol_ != nullptr;};
      void deleteProtocol() { this->protocol_ = nullptr;};
      inline string getProtocol() const { DARABONBA_PTR_GET_DEFAULT(protocol_, "") };
      inline LivePackageOriginEndpoints& setProtocol(string protocol) { DARABONBA_PTR_SET_VALUE(protocol_, protocol) };


      // timeshiftVision Field Functions 
      bool hasTimeshiftVision() const { return this->timeshiftVision_ != nullptr;};
      void deleteTimeshiftVision() { this->timeshiftVision_ = nullptr;};
      inline int32_t getTimeshiftVision() const { DARABONBA_PTR_GET_DEFAULT(timeshiftVision_, 0) };
      inline LivePackageOriginEndpoints& setTimeshiftVision(int32_t timeshiftVision) { DARABONBA_PTR_SET_VALUE(timeshiftVision_, timeshiftVision) };


    protected:
      // The authorization code.
      shared_ptr<string> authorizationCode_ {};
      // The channel name.
      shared_ptr<string> channelName_ {};
      // The time when the endpoint was created.
      shared_ptr<string> createTime_ {};
      // The endpoint description.
      shared_ptr<string> description_ {};
      // The endpoint name.
      shared_ptr<string> endpointName_ {};
      // The endpoint URL.
      shared_ptr<string> endpointUrl_ {};
      // The channel group name.
      shared_ptr<string> groupName_ {};
      // The IP address blacklist.
      shared_ptr<string> ipBlacklist_ {};
      // The IP address whitelist.
      shared_ptr<string> ipWhitelist_ {};
      // The time when the endpoint was last modified.
      shared_ptr<string> lastModified_ {};
      // The playlist name.
      shared_ptr<string> manifestName_ {};
      // The distribution protocol.
      shared_ptr<string> protocol_ {};
      // The number of days that time-shifted content is available.
      shared_ptr<int32_t> timeshiftVision_ {};
    };

    virtual bool empty() const override { return this->livePackageOriginEndpoints_ == nullptr
        && this->pageNo_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->sortBy_ == nullptr && this->totalCount_ == nullptr; };
    // livePackageOriginEndpoints Field Functions 
    bool hasLivePackageOriginEndpoints() const { return this->livePackageOriginEndpoints_ != nullptr;};
    void deleteLivePackageOriginEndpoints() { this->livePackageOriginEndpoints_ = nullptr;};
    inline const vector<ListLivePackageOriginEndpointsResponseBody::LivePackageOriginEndpoints> & getLivePackageOriginEndpoints() const { DARABONBA_PTR_GET_CONST(livePackageOriginEndpoints_, vector<ListLivePackageOriginEndpointsResponseBody::LivePackageOriginEndpoints>) };
    inline vector<ListLivePackageOriginEndpointsResponseBody::LivePackageOriginEndpoints> getLivePackageOriginEndpoints() { DARABONBA_PTR_GET(livePackageOriginEndpoints_, vector<ListLivePackageOriginEndpointsResponseBody::LivePackageOriginEndpoints>) };
    inline ListLivePackageOriginEndpointsResponseBody& setLivePackageOriginEndpoints(const vector<ListLivePackageOriginEndpointsResponseBody::LivePackageOriginEndpoints> & livePackageOriginEndpoints) { DARABONBA_PTR_SET_VALUE(livePackageOriginEndpoints_, livePackageOriginEndpoints) };
    inline ListLivePackageOriginEndpointsResponseBody& setLivePackageOriginEndpoints(vector<ListLivePackageOriginEndpointsResponseBody::LivePackageOriginEndpoints> && livePackageOriginEndpoints) { DARABONBA_PTR_SET_RVALUE(livePackageOriginEndpoints_, livePackageOriginEndpoints) };


    // pageNo Field Functions 
    bool hasPageNo() const { return this->pageNo_ != nullptr;};
    void deletePageNo() { this->pageNo_ = nullptr;};
    inline int64_t getPageNo() const { DARABONBA_PTR_GET_DEFAULT(pageNo_, 0L) };
    inline ListLivePackageOriginEndpointsResponseBody& setPageNo(int64_t pageNo) { DARABONBA_PTR_SET_VALUE(pageNo_, pageNo) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline ListLivePackageOriginEndpointsResponseBody& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListLivePackageOriginEndpointsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // sortBy Field Functions 
    bool hasSortBy() const { return this->sortBy_ != nullptr;};
    void deleteSortBy() { this->sortBy_ = nullptr;};
    inline string getSortBy() const { DARABONBA_PTR_GET_DEFAULT(sortBy_, "") };
    inline ListLivePackageOriginEndpointsResponseBody& setSortBy(string sortBy) { DARABONBA_PTR_SET_VALUE(sortBy_, sortBy) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ListLivePackageOriginEndpointsResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The origin endpoints returned.
    shared_ptr<vector<ListLivePackageOriginEndpointsResponseBody::LivePackageOriginEndpoints>> livePackageOriginEndpoints_ {};
    // The page number.
    shared_ptr<int64_t> pageNo_ {};
    // The number of entries per page.
    shared_ptr<int64_t> pageSize_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The sort order. Valid values: `asc` and `desc` (default).
    shared_ptr<string> sortBy_ {};
    // The total number of entries returned.
    shared_ptr<int64_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
