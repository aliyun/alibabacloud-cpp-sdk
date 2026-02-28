// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECALLRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECALLRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rtc20180111
{
namespace Models
{
  class DescribeCallResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCallResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CallInfo, callInfo_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(UserDetailList, userDetailList_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCallResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CallInfo, callInfo_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(UserDetailList, userDetailList_);
    };
    DescribeCallResponseBody() = default ;
    DescribeCallResponseBody(const DescribeCallResponseBody &) = default ;
    DescribeCallResponseBody(DescribeCallResponseBody &&) = default ;
    DescribeCallResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCallResponseBody() = default ;
    DescribeCallResponseBody& operator=(const DescribeCallResponseBody &) = default ;
    DescribeCallResponseBody& operator=(DescribeCallResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class UserDetailList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const UserDetailList& obj) { 
        DARABONBA_PTR_TO_JSON(CallExp, callExp_);
        DARABONBA_PTR_TO_JSON(CreatedTs, createdTs_);
        DARABONBA_PTR_TO_JSON(DestroyedTs, destroyedTs_);
        DARABONBA_PTR_TO_JSON(DurMetricStatData, durMetricStatData_);
        DARABONBA_PTR_TO_JSON(Duration, duration_);
        DARABONBA_PTR_TO_JSON(Location, location_);
        DARABONBA_PTR_TO_JSON(Network, network_);
        DARABONBA_PTR_TO_JSON(NetworkList, networkList_);
        DARABONBA_PTR_TO_JSON(OnlineDuration, onlineDuration_);
        DARABONBA_PTR_TO_JSON(OnlinePeriods, onlinePeriods_);
        DARABONBA_PTR_TO_JSON(Os, os_);
        DARABONBA_PTR_TO_JSON(OsList, osList_);
        DARABONBA_PTR_TO_JSON(Roles, roles_);
        DARABONBA_PTR_TO_JSON(SdkVersion, sdkVersion_);
        DARABONBA_PTR_TO_JSON(SdkVersionList, sdkVersionList_);
        DARABONBA_PTR_TO_JSON(UserId, userId_);
      };
      friend void from_json(const Darabonba::Json& j, UserDetailList& obj) { 
        DARABONBA_PTR_FROM_JSON(CallExp, callExp_);
        DARABONBA_PTR_FROM_JSON(CreatedTs, createdTs_);
        DARABONBA_PTR_FROM_JSON(DestroyedTs, destroyedTs_);
        DARABONBA_PTR_FROM_JSON(DurMetricStatData, durMetricStatData_);
        DARABONBA_PTR_FROM_JSON(Duration, duration_);
        DARABONBA_PTR_FROM_JSON(Location, location_);
        DARABONBA_PTR_FROM_JSON(Network, network_);
        DARABONBA_PTR_FROM_JSON(NetworkList, networkList_);
        DARABONBA_PTR_FROM_JSON(OnlineDuration, onlineDuration_);
        DARABONBA_PTR_FROM_JSON(OnlinePeriods, onlinePeriods_);
        DARABONBA_PTR_FROM_JSON(Os, os_);
        DARABONBA_PTR_FROM_JSON(OsList, osList_);
        DARABONBA_PTR_FROM_JSON(Roles, roles_);
        DARABONBA_PTR_FROM_JSON(SdkVersion, sdkVersion_);
        DARABONBA_PTR_FROM_JSON(SdkVersionList, sdkVersionList_);
        DARABONBA_PTR_FROM_JSON(UserId, userId_);
      };
      UserDetailList() = default ;
      UserDetailList(const UserDetailList &) = default ;
      UserDetailList(UserDetailList &&) = default ;
      UserDetailList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~UserDetailList() = default ;
      UserDetailList& operator=(const UserDetailList &) = default ;
      UserDetailList& operator=(UserDetailList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class OnlinePeriods : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const OnlinePeriods& obj) { 
          DARABONBA_PTR_TO_JSON(JoinTs, joinTs_);
          DARABONBA_PTR_TO_JSON(LeaveTs, leaveTs_);
        };
        friend void from_json(const Darabonba::Json& j, OnlinePeriods& obj) { 
          DARABONBA_PTR_FROM_JSON(JoinTs, joinTs_);
          DARABONBA_PTR_FROM_JSON(LeaveTs, leaveTs_);
        };
        OnlinePeriods() = default ;
        OnlinePeriods(const OnlinePeriods &) = default ;
        OnlinePeriods(OnlinePeriods &&) = default ;
        OnlinePeriods(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~OnlinePeriods() = default ;
        OnlinePeriods& operator=(const OnlinePeriods &) = default ;
        OnlinePeriods& operator=(OnlinePeriods &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->joinTs_ == nullptr
        && this->leaveTs_ == nullptr; };
        // joinTs Field Functions 
        bool hasJoinTs() const { return this->joinTs_ != nullptr;};
        void deleteJoinTs() { this->joinTs_ = nullptr;};
        inline int64_t getJoinTs() const { DARABONBA_PTR_GET_DEFAULT(joinTs_, 0L) };
        inline OnlinePeriods& setJoinTs(int64_t joinTs) { DARABONBA_PTR_SET_VALUE(joinTs_, joinTs) };


        // leaveTs Field Functions 
        bool hasLeaveTs() const { return this->leaveTs_ != nullptr;};
        void deleteLeaveTs() { this->leaveTs_ = nullptr;};
        inline int64_t getLeaveTs() const { DARABONBA_PTR_GET_DEFAULT(leaveTs_, 0L) };
        inline OnlinePeriods& setLeaveTs(int64_t leaveTs) { DARABONBA_PTR_SET_VALUE(leaveTs_, leaveTs) };


      protected:
        shared_ptr<int64_t> joinTs_ {};
        shared_ptr<int64_t> leaveTs_ {};
      };

      class DurMetricStatData : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const DurMetricStatData& obj) { 
          DARABONBA_PTR_TO_JSON(PubAudio, pubAudio_);
          DARABONBA_PTR_TO_JSON(PubVideo1080, pubVideo1080_);
          DARABONBA_PTR_TO_JSON(PubVideo360, pubVideo360_);
          DARABONBA_PTR_TO_JSON(PubVideo720, pubVideo720_);
          DARABONBA_PTR_TO_JSON(PubVideoScreenShare, pubVideoScreenShare_);
          DARABONBA_PTR_TO_JSON(SubAudio, subAudio_);
          DARABONBA_PTR_TO_JSON(SubVideo1080, subVideo1080_);
          DARABONBA_PTR_TO_JSON(SubVideo360, subVideo360_);
          DARABONBA_PTR_TO_JSON(SubVideo720, subVideo720_);
          DARABONBA_PTR_TO_JSON(SubVideoScreenShare, subVideoScreenShare_);
        };
        friend void from_json(const Darabonba::Json& j, DurMetricStatData& obj) { 
          DARABONBA_PTR_FROM_JSON(PubAudio, pubAudio_);
          DARABONBA_PTR_FROM_JSON(PubVideo1080, pubVideo1080_);
          DARABONBA_PTR_FROM_JSON(PubVideo360, pubVideo360_);
          DARABONBA_PTR_FROM_JSON(PubVideo720, pubVideo720_);
          DARABONBA_PTR_FROM_JSON(PubVideoScreenShare, pubVideoScreenShare_);
          DARABONBA_PTR_FROM_JSON(SubAudio, subAudio_);
          DARABONBA_PTR_FROM_JSON(SubVideo1080, subVideo1080_);
          DARABONBA_PTR_FROM_JSON(SubVideo360, subVideo360_);
          DARABONBA_PTR_FROM_JSON(SubVideo720, subVideo720_);
          DARABONBA_PTR_FROM_JSON(SubVideoScreenShare, subVideoScreenShare_);
        };
        DurMetricStatData() = default ;
        DurMetricStatData(const DurMetricStatData &) = default ;
        DurMetricStatData(DurMetricStatData &&) = default ;
        DurMetricStatData(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~DurMetricStatData() = default ;
        DurMetricStatData& operator=(const DurMetricStatData &) = default ;
        DurMetricStatData& operator=(DurMetricStatData &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->pubAudio_ == nullptr
        && this->pubVideo1080_ == nullptr && this->pubVideo360_ == nullptr && this->pubVideo720_ == nullptr && this->pubVideoScreenShare_ == nullptr && this->subAudio_ == nullptr
        && this->subVideo1080_ == nullptr && this->subVideo360_ == nullptr && this->subVideo720_ == nullptr && this->subVideoScreenShare_ == nullptr; };
        // pubAudio Field Functions 
        bool hasPubAudio() const { return this->pubAudio_ != nullptr;};
        void deletePubAudio() { this->pubAudio_ = nullptr;};
        inline int64_t getPubAudio() const { DARABONBA_PTR_GET_DEFAULT(pubAudio_, 0L) };
        inline DurMetricStatData& setPubAudio(int64_t pubAudio) { DARABONBA_PTR_SET_VALUE(pubAudio_, pubAudio) };


        // pubVideo1080 Field Functions 
        bool hasPubVideo1080() const { return this->pubVideo1080_ != nullptr;};
        void deletePubVideo1080() { this->pubVideo1080_ = nullptr;};
        inline int64_t getPubVideo1080() const { DARABONBA_PTR_GET_DEFAULT(pubVideo1080_, 0L) };
        inline DurMetricStatData& setPubVideo1080(int64_t pubVideo1080) { DARABONBA_PTR_SET_VALUE(pubVideo1080_, pubVideo1080) };


        // pubVideo360 Field Functions 
        bool hasPubVideo360() const { return this->pubVideo360_ != nullptr;};
        void deletePubVideo360() { this->pubVideo360_ = nullptr;};
        inline int64_t getPubVideo360() const { DARABONBA_PTR_GET_DEFAULT(pubVideo360_, 0L) };
        inline DurMetricStatData& setPubVideo360(int64_t pubVideo360) { DARABONBA_PTR_SET_VALUE(pubVideo360_, pubVideo360) };


        // pubVideo720 Field Functions 
        bool hasPubVideo720() const { return this->pubVideo720_ != nullptr;};
        void deletePubVideo720() { this->pubVideo720_ = nullptr;};
        inline int64_t getPubVideo720() const { DARABONBA_PTR_GET_DEFAULT(pubVideo720_, 0L) };
        inline DurMetricStatData& setPubVideo720(int64_t pubVideo720) { DARABONBA_PTR_SET_VALUE(pubVideo720_, pubVideo720) };


        // pubVideoScreenShare Field Functions 
        bool hasPubVideoScreenShare() const { return this->pubVideoScreenShare_ != nullptr;};
        void deletePubVideoScreenShare() { this->pubVideoScreenShare_ = nullptr;};
        inline int64_t getPubVideoScreenShare() const { DARABONBA_PTR_GET_DEFAULT(pubVideoScreenShare_, 0L) };
        inline DurMetricStatData& setPubVideoScreenShare(int64_t pubVideoScreenShare) { DARABONBA_PTR_SET_VALUE(pubVideoScreenShare_, pubVideoScreenShare) };


        // subAudio Field Functions 
        bool hasSubAudio() const { return this->subAudio_ != nullptr;};
        void deleteSubAudio() { this->subAudio_ = nullptr;};
        inline int64_t getSubAudio() const { DARABONBA_PTR_GET_DEFAULT(subAudio_, 0L) };
        inline DurMetricStatData& setSubAudio(int64_t subAudio) { DARABONBA_PTR_SET_VALUE(subAudio_, subAudio) };


        // subVideo1080 Field Functions 
        bool hasSubVideo1080() const { return this->subVideo1080_ != nullptr;};
        void deleteSubVideo1080() { this->subVideo1080_ = nullptr;};
        inline int64_t getSubVideo1080() const { DARABONBA_PTR_GET_DEFAULT(subVideo1080_, 0L) };
        inline DurMetricStatData& setSubVideo1080(int64_t subVideo1080) { DARABONBA_PTR_SET_VALUE(subVideo1080_, subVideo1080) };


        // subVideo360 Field Functions 
        bool hasSubVideo360() const { return this->subVideo360_ != nullptr;};
        void deleteSubVideo360() { this->subVideo360_ = nullptr;};
        inline int64_t getSubVideo360() const { DARABONBA_PTR_GET_DEFAULT(subVideo360_, 0L) };
        inline DurMetricStatData& setSubVideo360(int64_t subVideo360) { DARABONBA_PTR_SET_VALUE(subVideo360_, subVideo360) };


        // subVideo720 Field Functions 
        bool hasSubVideo720() const { return this->subVideo720_ != nullptr;};
        void deleteSubVideo720() { this->subVideo720_ = nullptr;};
        inline int64_t getSubVideo720() const { DARABONBA_PTR_GET_DEFAULT(subVideo720_, 0L) };
        inline DurMetricStatData& setSubVideo720(int64_t subVideo720) { DARABONBA_PTR_SET_VALUE(subVideo720_, subVideo720) };


        // subVideoScreenShare Field Functions 
        bool hasSubVideoScreenShare() const { return this->subVideoScreenShare_ != nullptr;};
        void deleteSubVideoScreenShare() { this->subVideoScreenShare_ = nullptr;};
        inline int64_t getSubVideoScreenShare() const { DARABONBA_PTR_GET_DEFAULT(subVideoScreenShare_, 0L) };
        inline DurMetricStatData& setSubVideoScreenShare(int64_t subVideoScreenShare) { DARABONBA_PTR_SET_VALUE(subVideoScreenShare_, subVideoScreenShare) };


      protected:
        shared_ptr<int64_t> pubAudio_ {};
        shared_ptr<int64_t> pubVideo1080_ {};
        shared_ptr<int64_t> pubVideo360_ {};
        shared_ptr<int64_t> pubVideo720_ {};
        shared_ptr<int64_t> pubVideoScreenShare_ {};
        shared_ptr<int64_t> subAudio_ {};
        shared_ptr<int64_t> subVideo1080_ {};
        shared_ptr<int64_t> subVideo360_ {};
        shared_ptr<int64_t> subVideo720_ {};
        shared_ptr<int64_t> subVideoScreenShare_ {};
      };

      virtual bool empty() const override { return this->callExp_ == nullptr
        && this->createdTs_ == nullptr && this->destroyedTs_ == nullptr && this->durMetricStatData_ == nullptr && this->duration_ == nullptr && this->location_ == nullptr
        && this->network_ == nullptr && this->networkList_ == nullptr && this->onlineDuration_ == nullptr && this->onlinePeriods_ == nullptr && this->os_ == nullptr
        && this->osList_ == nullptr && this->roles_ == nullptr && this->sdkVersion_ == nullptr && this->sdkVersionList_ == nullptr && this->userId_ == nullptr; };
      // callExp Field Functions 
      bool hasCallExp() const { return this->callExp_ != nullptr;};
      void deleteCallExp() { this->callExp_ = nullptr;};
      inline string getCallExp() const { DARABONBA_PTR_GET_DEFAULT(callExp_, "") };
      inline UserDetailList& setCallExp(string callExp) { DARABONBA_PTR_SET_VALUE(callExp_, callExp) };


      // createdTs Field Functions 
      bool hasCreatedTs() const { return this->createdTs_ != nullptr;};
      void deleteCreatedTs() { this->createdTs_ = nullptr;};
      inline int64_t getCreatedTs() const { DARABONBA_PTR_GET_DEFAULT(createdTs_, 0L) };
      inline UserDetailList& setCreatedTs(int64_t createdTs) { DARABONBA_PTR_SET_VALUE(createdTs_, createdTs) };


      // destroyedTs Field Functions 
      bool hasDestroyedTs() const { return this->destroyedTs_ != nullptr;};
      void deleteDestroyedTs() { this->destroyedTs_ = nullptr;};
      inline int64_t getDestroyedTs() const { DARABONBA_PTR_GET_DEFAULT(destroyedTs_, 0L) };
      inline UserDetailList& setDestroyedTs(int64_t destroyedTs) { DARABONBA_PTR_SET_VALUE(destroyedTs_, destroyedTs) };


      // durMetricStatData Field Functions 
      bool hasDurMetricStatData() const { return this->durMetricStatData_ != nullptr;};
      void deleteDurMetricStatData() { this->durMetricStatData_ = nullptr;};
      inline const UserDetailList::DurMetricStatData & getDurMetricStatData() const { DARABONBA_PTR_GET_CONST(durMetricStatData_, UserDetailList::DurMetricStatData) };
      inline UserDetailList::DurMetricStatData getDurMetricStatData() { DARABONBA_PTR_GET(durMetricStatData_, UserDetailList::DurMetricStatData) };
      inline UserDetailList& setDurMetricStatData(const UserDetailList::DurMetricStatData & durMetricStatData) { DARABONBA_PTR_SET_VALUE(durMetricStatData_, durMetricStatData) };
      inline UserDetailList& setDurMetricStatData(UserDetailList::DurMetricStatData && durMetricStatData) { DARABONBA_PTR_SET_RVALUE(durMetricStatData_, durMetricStatData) };


      // duration Field Functions 
      bool hasDuration() const { return this->duration_ != nullptr;};
      void deleteDuration() { this->duration_ = nullptr;};
      inline int64_t getDuration() const { DARABONBA_PTR_GET_DEFAULT(duration_, 0L) };
      inline UserDetailList& setDuration(int64_t duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


      // location Field Functions 
      bool hasLocation() const { return this->location_ != nullptr;};
      void deleteLocation() { this->location_ = nullptr;};
      inline string getLocation() const { DARABONBA_PTR_GET_DEFAULT(location_, "") };
      inline UserDetailList& setLocation(string location) { DARABONBA_PTR_SET_VALUE(location_, location) };


      // network Field Functions 
      bool hasNetwork() const { return this->network_ != nullptr;};
      void deleteNetwork() { this->network_ = nullptr;};
      inline string getNetwork() const { DARABONBA_PTR_GET_DEFAULT(network_, "") };
      inline UserDetailList& setNetwork(string network) { DARABONBA_PTR_SET_VALUE(network_, network) };


      // networkList Field Functions 
      bool hasNetworkList() const { return this->networkList_ != nullptr;};
      void deleteNetworkList() { this->networkList_ = nullptr;};
      inline const vector<string> & getNetworkList() const { DARABONBA_PTR_GET_CONST(networkList_, vector<string>) };
      inline vector<string> getNetworkList() { DARABONBA_PTR_GET(networkList_, vector<string>) };
      inline UserDetailList& setNetworkList(const vector<string> & networkList) { DARABONBA_PTR_SET_VALUE(networkList_, networkList) };
      inline UserDetailList& setNetworkList(vector<string> && networkList) { DARABONBA_PTR_SET_RVALUE(networkList_, networkList) };


      // onlineDuration Field Functions 
      bool hasOnlineDuration() const { return this->onlineDuration_ != nullptr;};
      void deleteOnlineDuration() { this->onlineDuration_ = nullptr;};
      inline int64_t getOnlineDuration() const { DARABONBA_PTR_GET_DEFAULT(onlineDuration_, 0L) };
      inline UserDetailList& setOnlineDuration(int64_t onlineDuration) { DARABONBA_PTR_SET_VALUE(onlineDuration_, onlineDuration) };


      // onlinePeriods Field Functions 
      bool hasOnlinePeriods() const { return this->onlinePeriods_ != nullptr;};
      void deleteOnlinePeriods() { this->onlinePeriods_ = nullptr;};
      inline const vector<UserDetailList::OnlinePeriods> & getOnlinePeriods() const { DARABONBA_PTR_GET_CONST(onlinePeriods_, vector<UserDetailList::OnlinePeriods>) };
      inline vector<UserDetailList::OnlinePeriods> getOnlinePeriods() { DARABONBA_PTR_GET(onlinePeriods_, vector<UserDetailList::OnlinePeriods>) };
      inline UserDetailList& setOnlinePeriods(const vector<UserDetailList::OnlinePeriods> & onlinePeriods) { DARABONBA_PTR_SET_VALUE(onlinePeriods_, onlinePeriods) };
      inline UserDetailList& setOnlinePeriods(vector<UserDetailList::OnlinePeriods> && onlinePeriods) { DARABONBA_PTR_SET_RVALUE(onlinePeriods_, onlinePeriods) };


      // os Field Functions 
      bool hasOs() const { return this->os_ != nullptr;};
      void deleteOs() { this->os_ = nullptr;};
      inline string getOs() const { DARABONBA_PTR_GET_DEFAULT(os_, "") };
      inline UserDetailList& setOs(string os) { DARABONBA_PTR_SET_VALUE(os_, os) };


      // osList Field Functions 
      bool hasOsList() const { return this->osList_ != nullptr;};
      void deleteOsList() { this->osList_ = nullptr;};
      inline const vector<string> & getOsList() const { DARABONBA_PTR_GET_CONST(osList_, vector<string>) };
      inline vector<string> getOsList() { DARABONBA_PTR_GET(osList_, vector<string>) };
      inline UserDetailList& setOsList(const vector<string> & osList) { DARABONBA_PTR_SET_VALUE(osList_, osList) };
      inline UserDetailList& setOsList(vector<string> && osList) { DARABONBA_PTR_SET_RVALUE(osList_, osList) };


      // roles Field Functions 
      bool hasRoles() const { return this->roles_ != nullptr;};
      void deleteRoles() { this->roles_ = nullptr;};
      inline const vector<string> & getRoles() const { DARABONBA_PTR_GET_CONST(roles_, vector<string>) };
      inline vector<string> getRoles() { DARABONBA_PTR_GET(roles_, vector<string>) };
      inline UserDetailList& setRoles(const vector<string> & roles) { DARABONBA_PTR_SET_VALUE(roles_, roles) };
      inline UserDetailList& setRoles(vector<string> && roles) { DARABONBA_PTR_SET_RVALUE(roles_, roles) };


      // sdkVersion Field Functions 
      bool hasSdkVersion() const { return this->sdkVersion_ != nullptr;};
      void deleteSdkVersion() { this->sdkVersion_ = nullptr;};
      inline string getSdkVersion() const { DARABONBA_PTR_GET_DEFAULT(sdkVersion_, "") };
      inline UserDetailList& setSdkVersion(string sdkVersion) { DARABONBA_PTR_SET_VALUE(sdkVersion_, sdkVersion) };


      // sdkVersionList Field Functions 
      bool hasSdkVersionList() const { return this->sdkVersionList_ != nullptr;};
      void deleteSdkVersionList() { this->sdkVersionList_ = nullptr;};
      inline const vector<string> & getSdkVersionList() const { DARABONBA_PTR_GET_CONST(sdkVersionList_, vector<string>) };
      inline vector<string> getSdkVersionList() { DARABONBA_PTR_GET(sdkVersionList_, vector<string>) };
      inline UserDetailList& setSdkVersionList(const vector<string> & sdkVersionList) { DARABONBA_PTR_SET_VALUE(sdkVersionList_, sdkVersionList) };
      inline UserDetailList& setSdkVersionList(vector<string> && sdkVersionList) { DARABONBA_PTR_SET_RVALUE(sdkVersionList_, sdkVersionList) };


      // userId Field Functions 
      bool hasUserId() const { return this->userId_ != nullptr;};
      void deleteUserId() { this->userId_ = nullptr;};
      inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
      inline UserDetailList& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


    protected:
      shared_ptr<string> callExp_ {};
      shared_ptr<int64_t> createdTs_ {};
      shared_ptr<int64_t> destroyedTs_ {};
      shared_ptr<UserDetailList::DurMetricStatData> durMetricStatData_ {};
      shared_ptr<int64_t> duration_ {};
      shared_ptr<string> location_ {};
      shared_ptr<string> network_ {};
      shared_ptr<vector<string>> networkList_ {};
      shared_ptr<int64_t> onlineDuration_ {};
      shared_ptr<vector<UserDetailList::OnlinePeriods>> onlinePeriods_ {};
      shared_ptr<string> os_ {};
      shared_ptr<vector<string>> osList_ {};
      shared_ptr<vector<string>> roles_ {};
      shared_ptr<string> sdkVersion_ {};
      shared_ptr<vector<string>> sdkVersionList_ {};
      shared_ptr<string> userId_ {};
    };

    class CallInfo : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const CallInfo& obj) { 
        DARABONBA_PTR_TO_JSON(AppId, appId_);
        DARABONBA_PTR_TO_JSON(CallStatus, callStatus_);
        DARABONBA_PTR_TO_JSON(ChannelId, channelId_);
        DARABONBA_PTR_TO_JSON(CreatedTs, createdTs_);
        DARABONBA_PTR_TO_JSON(DestroyedTs, destroyedTs_);
        DARABONBA_PTR_TO_JSON(Duration, duration_);
      };
      friend void from_json(const Darabonba::Json& j, CallInfo& obj) { 
        DARABONBA_PTR_FROM_JSON(AppId, appId_);
        DARABONBA_PTR_FROM_JSON(CallStatus, callStatus_);
        DARABONBA_PTR_FROM_JSON(ChannelId, channelId_);
        DARABONBA_PTR_FROM_JSON(CreatedTs, createdTs_);
        DARABONBA_PTR_FROM_JSON(DestroyedTs, destroyedTs_);
        DARABONBA_PTR_FROM_JSON(Duration, duration_);
      };
      CallInfo() = default ;
      CallInfo(const CallInfo &) = default ;
      CallInfo(CallInfo &&) = default ;
      CallInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~CallInfo() = default ;
      CallInfo& operator=(const CallInfo &) = default ;
      CallInfo& operator=(CallInfo &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->appId_ == nullptr
        && this->callStatus_ == nullptr && this->channelId_ == nullptr && this->createdTs_ == nullptr && this->destroyedTs_ == nullptr && this->duration_ == nullptr; };
      // appId Field Functions 
      bool hasAppId() const { return this->appId_ != nullptr;};
      void deleteAppId() { this->appId_ = nullptr;};
      inline string getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
      inline CallInfo& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


      // callStatus Field Functions 
      bool hasCallStatus() const { return this->callStatus_ != nullptr;};
      void deleteCallStatus() { this->callStatus_ = nullptr;};
      inline string getCallStatus() const { DARABONBA_PTR_GET_DEFAULT(callStatus_, "") };
      inline CallInfo& setCallStatus(string callStatus) { DARABONBA_PTR_SET_VALUE(callStatus_, callStatus) };


      // channelId Field Functions 
      bool hasChannelId() const { return this->channelId_ != nullptr;};
      void deleteChannelId() { this->channelId_ = nullptr;};
      inline string getChannelId() const { DARABONBA_PTR_GET_DEFAULT(channelId_, "") };
      inline CallInfo& setChannelId(string channelId) { DARABONBA_PTR_SET_VALUE(channelId_, channelId) };


      // createdTs Field Functions 
      bool hasCreatedTs() const { return this->createdTs_ != nullptr;};
      void deleteCreatedTs() { this->createdTs_ = nullptr;};
      inline int64_t getCreatedTs() const { DARABONBA_PTR_GET_DEFAULT(createdTs_, 0L) };
      inline CallInfo& setCreatedTs(int64_t createdTs) { DARABONBA_PTR_SET_VALUE(createdTs_, createdTs) };


      // destroyedTs Field Functions 
      bool hasDestroyedTs() const { return this->destroyedTs_ != nullptr;};
      void deleteDestroyedTs() { this->destroyedTs_ = nullptr;};
      inline int64_t getDestroyedTs() const { DARABONBA_PTR_GET_DEFAULT(destroyedTs_, 0L) };
      inline CallInfo& setDestroyedTs(int64_t destroyedTs) { DARABONBA_PTR_SET_VALUE(destroyedTs_, destroyedTs) };


      // duration Field Functions 
      bool hasDuration() const { return this->duration_ != nullptr;};
      void deleteDuration() { this->duration_ = nullptr;};
      inline int64_t getDuration() const { DARABONBA_PTR_GET_DEFAULT(duration_, 0L) };
      inline CallInfo& setDuration(int64_t duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


    protected:
      // App ID。
      shared_ptr<string> appId_ {};
      shared_ptr<string> callStatus_ {};
      shared_ptr<string> channelId_ {};
      shared_ptr<int64_t> createdTs_ {};
      shared_ptr<int64_t> destroyedTs_ {};
      shared_ptr<int64_t> duration_ {};
    };

    virtual bool empty() const override { return this->callInfo_ == nullptr
        && this->requestId_ == nullptr && this->userDetailList_ == nullptr; };
    // callInfo Field Functions 
    bool hasCallInfo() const { return this->callInfo_ != nullptr;};
    void deleteCallInfo() { this->callInfo_ = nullptr;};
    inline const DescribeCallResponseBody::CallInfo & getCallInfo() const { DARABONBA_PTR_GET_CONST(callInfo_, DescribeCallResponseBody::CallInfo) };
    inline DescribeCallResponseBody::CallInfo getCallInfo() { DARABONBA_PTR_GET(callInfo_, DescribeCallResponseBody::CallInfo) };
    inline DescribeCallResponseBody& setCallInfo(const DescribeCallResponseBody::CallInfo & callInfo) { DARABONBA_PTR_SET_VALUE(callInfo_, callInfo) };
    inline DescribeCallResponseBody& setCallInfo(DescribeCallResponseBody::CallInfo && callInfo) { DARABONBA_PTR_SET_RVALUE(callInfo_, callInfo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeCallResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // userDetailList Field Functions 
    bool hasUserDetailList() const { return this->userDetailList_ != nullptr;};
    void deleteUserDetailList() { this->userDetailList_ = nullptr;};
    inline const vector<DescribeCallResponseBody::UserDetailList> & getUserDetailList() const { DARABONBA_PTR_GET_CONST(userDetailList_, vector<DescribeCallResponseBody::UserDetailList>) };
    inline vector<DescribeCallResponseBody::UserDetailList> getUserDetailList() { DARABONBA_PTR_GET(userDetailList_, vector<DescribeCallResponseBody::UserDetailList>) };
    inline DescribeCallResponseBody& setUserDetailList(const vector<DescribeCallResponseBody::UserDetailList> & userDetailList) { DARABONBA_PTR_SET_VALUE(userDetailList_, userDetailList) };
    inline DescribeCallResponseBody& setUserDetailList(vector<DescribeCallResponseBody::UserDetailList> && userDetailList) { DARABONBA_PTR_SET_RVALUE(userDetailList_, userDetailList) };


  protected:
    shared_ptr<DescribeCallResponseBody::CallInfo> callInfo_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<vector<DescribeCallResponseBody::UserDetailList>> userDetailList_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rtc20180111
#endif
