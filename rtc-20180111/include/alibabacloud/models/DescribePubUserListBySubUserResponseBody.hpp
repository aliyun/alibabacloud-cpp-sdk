// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPUBUSERLISTBYSUBUSERRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPUBUSERLISTBYSUBUSERRESPONSEBODY_HPP_
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
  class DescribePubUserListBySubUserResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePubUserListBySubUserResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CallStatus, callStatus_);
      DARABONBA_PTR_TO_JSON(PubUserDetailList, pubUserDetailList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SubUserDetail, subUserDetail_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePubUserListBySubUserResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CallStatus, callStatus_);
      DARABONBA_PTR_FROM_JSON(PubUserDetailList, pubUserDetailList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SubUserDetail, subUserDetail_);
    };
    DescribePubUserListBySubUserResponseBody() = default ;
    DescribePubUserListBySubUserResponseBody(const DescribePubUserListBySubUserResponseBody &) = default ;
    DescribePubUserListBySubUserResponseBody(DescribePubUserListBySubUserResponseBody &&) = default ;
    DescribePubUserListBySubUserResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePubUserListBySubUserResponseBody() = default ;
    DescribePubUserListBySubUserResponseBody& operator=(const DescribePubUserListBySubUserResponseBody &) = default ;
    DescribePubUserListBySubUserResponseBody& operator=(DescribePubUserListBySubUserResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class SubUserDetail : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SubUserDetail& obj) { 
        DARABONBA_PTR_TO_JSON(ClientType, clientType_);
        DARABONBA_PTR_TO_JSON(CreatedTs, createdTs_);
        DARABONBA_PTR_TO_JSON(DestroyedTs, destroyedTs_);
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
        DARABONBA_PTR_TO_JSON(UserIdAlias, userIdAlias_);
      };
      friend void from_json(const Darabonba::Json& j, SubUserDetail& obj) { 
        DARABONBA_PTR_FROM_JSON(ClientType, clientType_);
        DARABONBA_PTR_FROM_JSON(CreatedTs, createdTs_);
        DARABONBA_PTR_FROM_JSON(DestroyedTs, destroyedTs_);
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
        DARABONBA_PTR_FROM_JSON(UserIdAlias, userIdAlias_);
      };
      SubUserDetail() = default ;
      SubUserDetail(const SubUserDetail &) = default ;
      SubUserDetail(SubUserDetail &&) = default ;
      SubUserDetail(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SubUserDetail() = default ;
      SubUserDetail& operator=(const SubUserDetail &) = default ;
      SubUserDetail& operator=(SubUserDetail &&) = default ;
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

      virtual bool empty() const override { return this->clientType_ == nullptr
        && this->createdTs_ == nullptr && this->destroyedTs_ == nullptr && this->duration_ == nullptr && this->location_ == nullptr && this->network_ == nullptr
        && this->networkList_ == nullptr && this->onlineDuration_ == nullptr && this->onlinePeriods_ == nullptr && this->os_ == nullptr && this->osList_ == nullptr
        && this->roles_ == nullptr && this->sdkVersion_ == nullptr && this->sdkVersionList_ == nullptr && this->userId_ == nullptr && this->userIdAlias_ == nullptr; };
      // clientType Field Functions 
      bool hasClientType() const { return this->clientType_ != nullptr;};
      void deleteClientType() { this->clientType_ = nullptr;};
      inline string getClientType() const { DARABONBA_PTR_GET_DEFAULT(clientType_, "") };
      inline SubUserDetail& setClientType(string clientType) { DARABONBA_PTR_SET_VALUE(clientType_, clientType) };


      // createdTs Field Functions 
      bool hasCreatedTs() const { return this->createdTs_ != nullptr;};
      void deleteCreatedTs() { this->createdTs_ = nullptr;};
      inline int64_t getCreatedTs() const { DARABONBA_PTR_GET_DEFAULT(createdTs_, 0L) };
      inline SubUserDetail& setCreatedTs(int64_t createdTs) { DARABONBA_PTR_SET_VALUE(createdTs_, createdTs) };


      // destroyedTs Field Functions 
      bool hasDestroyedTs() const { return this->destroyedTs_ != nullptr;};
      void deleteDestroyedTs() { this->destroyedTs_ = nullptr;};
      inline int64_t getDestroyedTs() const { DARABONBA_PTR_GET_DEFAULT(destroyedTs_, 0L) };
      inline SubUserDetail& setDestroyedTs(int64_t destroyedTs) { DARABONBA_PTR_SET_VALUE(destroyedTs_, destroyedTs) };


      // duration Field Functions 
      bool hasDuration() const { return this->duration_ != nullptr;};
      void deleteDuration() { this->duration_ = nullptr;};
      inline int64_t getDuration() const { DARABONBA_PTR_GET_DEFAULT(duration_, 0L) };
      inline SubUserDetail& setDuration(int64_t duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


      // location Field Functions 
      bool hasLocation() const { return this->location_ != nullptr;};
      void deleteLocation() { this->location_ = nullptr;};
      inline string getLocation() const { DARABONBA_PTR_GET_DEFAULT(location_, "") };
      inline SubUserDetail& setLocation(string location) { DARABONBA_PTR_SET_VALUE(location_, location) };


      // network Field Functions 
      bool hasNetwork() const { return this->network_ != nullptr;};
      void deleteNetwork() { this->network_ = nullptr;};
      inline string getNetwork() const { DARABONBA_PTR_GET_DEFAULT(network_, "") };
      inline SubUserDetail& setNetwork(string network) { DARABONBA_PTR_SET_VALUE(network_, network) };


      // networkList Field Functions 
      bool hasNetworkList() const { return this->networkList_ != nullptr;};
      void deleteNetworkList() { this->networkList_ = nullptr;};
      inline const vector<string> & getNetworkList() const { DARABONBA_PTR_GET_CONST(networkList_, vector<string>) };
      inline vector<string> getNetworkList() { DARABONBA_PTR_GET(networkList_, vector<string>) };
      inline SubUserDetail& setNetworkList(const vector<string> & networkList) { DARABONBA_PTR_SET_VALUE(networkList_, networkList) };
      inline SubUserDetail& setNetworkList(vector<string> && networkList) { DARABONBA_PTR_SET_RVALUE(networkList_, networkList) };


      // onlineDuration Field Functions 
      bool hasOnlineDuration() const { return this->onlineDuration_ != nullptr;};
      void deleteOnlineDuration() { this->onlineDuration_ = nullptr;};
      inline int64_t getOnlineDuration() const { DARABONBA_PTR_GET_DEFAULT(onlineDuration_, 0L) };
      inline SubUserDetail& setOnlineDuration(int64_t onlineDuration) { DARABONBA_PTR_SET_VALUE(onlineDuration_, onlineDuration) };


      // onlinePeriods Field Functions 
      bool hasOnlinePeriods() const { return this->onlinePeriods_ != nullptr;};
      void deleteOnlinePeriods() { this->onlinePeriods_ = nullptr;};
      inline const vector<SubUserDetail::OnlinePeriods> & getOnlinePeriods() const { DARABONBA_PTR_GET_CONST(onlinePeriods_, vector<SubUserDetail::OnlinePeriods>) };
      inline vector<SubUserDetail::OnlinePeriods> getOnlinePeriods() { DARABONBA_PTR_GET(onlinePeriods_, vector<SubUserDetail::OnlinePeriods>) };
      inline SubUserDetail& setOnlinePeriods(const vector<SubUserDetail::OnlinePeriods> & onlinePeriods) { DARABONBA_PTR_SET_VALUE(onlinePeriods_, onlinePeriods) };
      inline SubUserDetail& setOnlinePeriods(vector<SubUserDetail::OnlinePeriods> && onlinePeriods) { DARABONBA_PTR_SET_RVALUE(onlinePeriods_, onlinePeriods) };


      // os Field Functions 
      bool hasOs() const { return this->os_ != nullptr;};
      void deleteOs() { this->os_ = nullptr;};
      inline string getOs() const { DARABONBA_PTR_GET_DEFAULT(os_, "") };
      inline SubUserDetail& setOs(string os) { DARABONBA_PTR_SET_VALUE(os_, os) };


      // osList Field Functions 
      bool hasOsList() const { return this->osList_ != nullptr;};
      void deleteOsList() { this->osList_ = nullptr;};
      inline const vector<string> & getOsList() const { DARABONBA_PTR_GET_CONST(osList_, vector<string>) };
      inline vector<string> getOsList() { DARABONBA_PTR_GET(osList_, vector<string>) };
      inline SubUserDetail& setOsList(const vector<string> & osList) { DARABONBA_PTR_SET_VALUE(osList_, osList) };
      inline SubUserDetail& setOsList(vector<string> && osList) { DARABONBA_PTR_SET_RVALUE(osList_, osList) };


      // roles Field Functions 
      bool hasRoles() const { return this->roles_ != nullptr;};
      void deleteRoles() { this->roles_ = nullptr;};
      inline const vector<string> & getRoles() const { DARABONBA_PTR_GET_CONST(roles_, vector<string>) };
      inline vector<string> getRoles() { DARABONBA_PTR_GET(roles_, vector<string>) };
      inline SubUserDetail& setRoles(const vector<string> & roles) { DARABONBA_PTR_SET_VALUE(roles_, roles) };
      inline SubUserDetail& setRoles(vector<string> && roles) { DARABONBA_PTR_SET_RVALUE(roles_, roles) };


      // sdkVersion Field Functions 
      bool hasSdkVersion() const { return this->sdkVersion_ != nullptr;};
      void deleteSdkVersion() { this->sdkVersion_ = nullptr;};
      inline string getSdkVersion() const { DARABONBA_PTR_GET_DEFAULT(sdkVersion_, "") };
      inline SubUserDetail& setSdkVersion(string sdkVersion) { DARABONBA_PTR_SET_VALUE(sdkVersion_, sdkVersion) };


      // sdkVersionList Field Functions 
      bool hasSdkVersionList() const { return this->sdkVersionList_ != nullptr;};
      void deleteSdkVersionList() { this->sdkVersionList_ = nullptr;};
      inline const vector<string> & getSdkVersionList() const { DARABONBA_PTR_GET_CONST(sdkVersionList_, vector<string>) };
      inline vector<string> getSdkVersionList() { DARABONBA_PTR_GET(sdkVersionList_, vector<string>) };
      inline SubUserDetail& setSdkVersionList(const vector<string> & sdkVersionList) { DARABONBA_PTR_SET_VALUE(sdkVersionList_, sdkVersionList) };
      inline SubUserDetail& setSdkVersionList(vector<string> && sdkVersionList) { DARABONBA_PTR_SET_RVALUE(sdkVersionList_, sdkVersionList) };


      // userId Field Functions 
      bool hasUserId() const { return this->userId_ != nullptr;};
      void deleteUserId() { this->userId_ = nullptr;};
      inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
      inline SubUserDetail& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


      // userIdAlias Field Functions 
      bool hasUserIdAlias() const { return this->userIdAlias_ != nullptr;};
      void deleteUserIdAlias() { this->userIdAlias_ = nullptr;};
      inline string getUserIdAlias() const { DARABONBA_PTR_GET_DEFAULT(userIdAlias_, "") };
      inline SubUserDetail& setUserIdAlias(string userIdAlias) { DARABONBA_PTR_SET_VALUE(userIdAlias_, userIdAlias) };


    protected:
      shared_ptr<string> clientType_ {};
      shared_ptr<int64_t> createdTs_ {};
      shared_ptr<int64_t> destroyedTs_ {};
      shared_ptr<int64_t> duration_ {};
      shared_ptr<string> location_ {};
      shared_ptr<string> network_ {};
      shared_ptr<vector<string>> networkList_ {};
      shared_ptr<int64_t> onlineDuration_ {};
      shared_ptr<vector<SubUserDetail::OnlinePeriods>> onlinePeriods_ {};
      shared_ptr<string> os_ {};
      shared_ptr<vector<string>> osList_ {};
      shared_ptr<vector<string>> roles_ {};
      shared_ptr<string> sdkVersion_ {};
      shared_ptr<vector<string>> sdkVersionList_ {};
      shared_ptr<string> userId_ {};
      shared_ptr<string> userIdAlias_ {};
    };

    class PubUserDetailList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PubUserDetailList& obj) { 
        DARABONBA_PTR_TO_JSON(CallIdList, callIdList_);
        DARABONBA_PTR_TO_JSON(ClientType, clientType_);
        DARABONBA_PTR_TO_JSON(CreatedTs, createdTs_);
        DARABONBA_PTR_TO_JSON(DestroyedTs, destroyedTs_);
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
        DARABONBA_PTR_TO_JSON(UserIdAlias, userIdAlias_);
      };
      friend void from_json(const Darabonba::Json& j, PubUserDetailList& obj) { 
        DARABONBA_PTR_FROM_JSON(CallIdList, callIdList_);
        DARABONBA_PTR_FROM_JSON(ClientType, clientType_);
        DARABONBA_PTR_FROM_JSON(CreatedTs, createdTs_);
        DARABONBA_PTR_FROM_JSON(DestroyedTs, destroyedTs_);
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
        DARABONBA_PTR_FROM_JSON(UserIdAlias, userIdAlias_);
      };
      PubUserDetailList() = default ;
      PubUserDetailList(const PubUserDetailList &) = default ;
      PubUserDetailList(PubUserDetailList &&) = default ;
      PubUserDetailList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~PubUserDetailList() = default ;
      PubUserDetailList& operator=(const PubUserDetailList &) = default ;
      PubUserDetailList& operator=(PubUserDetailList &&) = default ;
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

      virtual bool empty() const override { return this->callIdList_ == nullptr
        && this->clientType_ == nullptr && this->createdTs_ == nullptr && this->destroyedTs_ == nullptr && this->duration_ == nullptr && this->location_ == nullptr
        && this->network_ == nullptr && this->networkList_ == nullptr && this->onlineDuration_ == nullptr && this->onlinePeriods_ == nullptr && this->os_ == nullptr
        && this->osList_ == nullptr && this->roles_ == nullptr && this->sdkVersion_ == nullptr && this->sdkVersionList_ == nullptr && this->userId_ == nullptr
        && this->userIdAlias_ == nullptr; };
      // callIdList Field Functions 
      bool hasCallIdList() const { return this->callIdList_ != nullptr;};
      void deleteCallIdList() { this->callIdList_ = nullptr;};
      inline const vector<string> & getCallIdList() const { DARABONBA_PTR_GET_CONST(callIdList_, vector<string>) };
      inline vector<string> getCallIdList() { DARABONBA_PTR_GET(callIdList_, vector<string>) };
      inline PubUserDetailList& setCallIdList(const vector<string> & callIdList) { DARABONBA_PTR_SET_VALUE(callIdList_, callIdList) };
      inline PubUserDetailList& setCallIdList(vector<string> && callIdList) { DARABONBA_PTR_SET_RVALUE(callIdList_, callIdList) };


      // clientType Field Functions 
      bool hasClientType() const { return this->clientType_ != nullptr;};
      void deleteClientType() { this->clientType_ = nullptr;};
      inline string getClientType() const { DARABONBA_PTR_GET_DEFAULT(clientType_, "") };
      inline PubUserDetailList& setClientType(string clientType) { DARABONBA_PTR_SET_VALUE(clientType_, clientType) };


      // createdTs Field Functions 
      bool hasCreatedTs() const { return this->createdTs_ != nullptr;};
      void deleteCreatedTs() { this->createdTs_ = nullptr;};
      inline int64_t getCreatedTs() const { DARABONBA_PTR_GET_DEFAULT(createdTs_, 0L) };
      inline PubUserDetailList& setCreatedTs(int64_t createdTs) { DARABONBA_PTR_SET_VALUE(createdTs_, createdTs) };


      // destroyedTs Field Functions 
      bool hasDestroyedTs() const { return this->destroyedTs_ != nullptr;};
      void deleteDestroyedTs() { this->destroyedTs_ = nullptr;};
      inline int64_t getDestroyedTs() const { DARABONBA_PTR_GET_DEFAULT(destroyedTs_, 0L) };
      inline PubUserDetailList& setDestroyedTs(int64_t destroyedTs) { DARABONBA_PTR_SET_VALUE(destroyedTs_, destroyedTs) };


      // duration Field Functions 
      bool hasDuration() const { return this->duration_ != nullptr;};
      void deleteDuration() { this->duration_ = nullptr;};
      inline int64_t getDuration() const { DARABONBA_PTR_GET_DEFAULT(duration_, 0L) };
      inline PubUserDetailList& setDuration(int64_t duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


      // location Field Functions 
      bool hasLocation() const { return this->location_ != nullptr;};
      void deleteLocation() { this->location_ = nullptr;};
      inline string getLocation() const { DARABONBA_PTR_GET_DEFAULT(location_, "") };
      inline PubUserDetailList& setLocation(string location) { DARABONBA_PTR_SET_VALUE(location_, location) };


      // network Field Functions 
      bool hasNetwork() const { return this->network_ != nullptr;};
      void deleteNetwork() { this->network_ = nullptr;};
      inline string getNetwork() const { DARABONBA_PTR_GET_DEFAULT(network_, "") };
      inline PubUserDetailList& setNetwork(string network) { DARABONBA_PTR_SET_VALUE(network_, network) };


      // networkList Field Functions 
      bool hasNetworkList() const { return this->networkList_ != nullptr;};
      void deleteNetworkList() { this->networkList_ = nullptr;};
      inline const vector<string> & getNetworkList() const { DARABONBA_PTR_GET_CONST(networkList_, vector<string>) };
      inline vector<string> getNetworkList() { DARABONBA_PTR_GET(networkList_, vector<string>) };
      inline PubUserDetailList& setNetworkList(const vector<string> & networkList) { DARABONBA_PTR_SET_VALUE(networkList_, networkList) };
      inline PubUserDetailList& setNetworkList(vector<string> && networkList) { DARABONBA_PTR_SET_RVALUE(networkList_, networkList) };


      // onlineDuration Field Functions 
      bool hasOnlineDuration() const { return this->onlineDuration_ != nullptr;};
      void deleteOnlineDuration() { this->onlineDuration_ = nullptr;};
      inline int64_t getOnlineDuration() const { DARABONBA_PTR_GET_DEFAULT(onlineDuration_, 0L) };
      inline PubUserDetailList& setOnlineDuration(int64_t onlineDuration) { DARABONBA_PTR_SET_VALUE(onlineDuration_, onlineDuration) };


      // onlinePeriods Field Functions 
      bool hasOnlinePeriods() const { return this->onlinePeriods_ != nullptr;};
      void deleteOnlinePeriods() { this->onlinePeriods_ = nullptr;};
      inline const vector<PubUserDetailList::OnlinePeriods> & getOnlinePeriods() const { DARABONBA_PTR_GET_CONST(onlinePeriods_, vector<PubUserDetailList::OnlinePeriods>) };
      inline vector<PubUserDetailList::OnlinePeriods> getOnlinePeriods() { DARABONBA_PTR_GET(onlinePeriods_, vector<PubUserDetailList::OnlinePeriods>) };
      inline PubUserDetailList& setOnlinePeriods(const vector<PubUserDetailList::OnlinePeriods> & onlinePeriods) { DARABONBA_PTR_SET_VALUE(onlinePeriods_, onlinePeriods) };
      inline PubUserDetailList& setOnlinePeriods(vector<PubUserDetailList::OnlinePeriods> && onlinePeriods) { DARABONBA_PTR_SET_RVALUE(onlinePeriods_, onlinePeriods) };


      // os Field Functions 
      bool hasOs() const { return this->os_ != nullptr;};
      void deleteOs() { this->os_ = nullptr;};
      inline string getOs() const { DARABONBA_PTR_GET_DEFAULT(os_, "") };
      inline PubUserDetailList& setOs(string os) { DARABONBA_PTR_SET_VALUE(os_, os) };


      // osList Field Functions 
      bool hasOsList() const { return this->osList_ != nullptr;};
      void deleteOsList() { this->osList_ = nullptr;};
      inline const vector<string> & getOsList() const { DARABONBA_PTR_GET_CONST(osList_, vector<string>) };
      inline vector<string> getOsList() { DARABONBA_PTR_GET(osList_, vector<string>) };
      inline PubUserDetailList& setOsList(const vector<string> & osList) { DARABONBA_PTR_SET_VALUE(osList_, osList) };
      inline PubUserDetailList& setOsList(vector<string> && osList) { DARABONBA_PTR_SET_RVALUE(osList_, osList) };


      // roles Field Functions 
      bool hasRoles() const { return this->roles_ != nullptr;};
      void deleteRoles() { this->roles_ = nullptr;};
      inline const vector<string> & getRoles() const { DARABONBA_PTR_GET_CONST(roles_, vector<string>) };
      inline vector<string> getRoles() { DARABONBA_PTR_GET(roles_, vector<string>) };
      inline PubUserDetailList& setRoles(const vector<string> & roles) { DARABONBA_PTR_SET_VALUE(roles_, roles) };
      inline PubUserDetailList& setRoles(vector<string> && roles) { DARABONBA_PTR_SET_RVALUE(roles_, roles) };


      // sdkVersion Field Functions 
      bool hasSdkVersion() const { return this->sdkVersion_ != nullptr;};
      void deleteSdkVersion() { this->sdkVersion_ = nullptr;};
      inline string getSdkVersion() const { DARABONBA_PTR_GET_DEFAULT(sdkVersion_, "") };
      inline PubUserDetailList& setSdkVersion(string sdkVersion) { DARABONBA_PTR_SET_VALUE(sdkVersion_, sdkVersion) };


      // sdkVersionList Field Functions 
      bool hasSdkVersionList() const { return this->sdkVersionList_ != nullptr;};
      void deleteSdkVersionList() { this->sdkVersionList_ = nullptr;};
      inline const vector<string> & getSdkVersionList() const { DARABONBA_PTR_GET_CONST(sdkVersionList_, vector<string>) };
      inline vector<string> getSdkVersionList() { DARABONBA_PTR_GET(sdkVersionList_, vector<string>) };
      inline PubUserDetailList& setSdkVersionList(const vector<string> & sdkVersionList) { DARABONBA_PTR_SET_VALUE(sdkVersionList_, sdkVersionList) };
      inline PubUserDetailList& setSdkVersionList(vector<string> && sdkVersionList) { DARABONBA_PTR_SET_RVALUE(sdkVersionList_, sdkVersionList) };


      // userId Field Functions 
      bool hasUserId() const { return this->userId_ != nullptr;};
      void deleteUserId() { this->userId_ = nullptr;};
      inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
      inline PubUserDetailList& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


      // userIdAlias Field Functions 
      bool hasUserIdAlias() const { return this->userIdAlias_ != nullptr;};
      void deleteUserIdAlias() { this->userIdAlias_ = nullptr;};
      inline string getUserIdAlias() const { DARABONBA_PTR_GET_DEFAULT(userIdAlias_, "") };
      inline PubUserDetailList& setUserIdAlias(string userIdAlias) { DARABONBA_PTR_SET_VALUE(userIdAlias_, userIdAlias) };


    protected:
      shared_ptr<vector<string>> callIdList_ {};
      shared_ptr<string> clientType_ {};
      shared_ptr<int64_t> createdTs_ {};
      shared_ptr<int64_t> destroyedTs_ {};
      shared_ptr<int64_t> duration_ {};
      shared_ptr<string> location_ {};
      shared_ptr<string> network_ {};
      shared_ptr<vector<string>> networkList_ {};
      shared_ptr<int64_t> onlineDuration_ {};
      shared_ptr<vector<PubUserDetailList::OnlinePeriods>> onlinePeriods_ {};
      shared_ptr<string> os_ {};
      shared_ptr<vector<string>> osList_ {};
      shared_ptr<vector<string>> roles_ {};
      shared_ptr<string> sdkVersion_ {};
      shared_ptr<vector<string>> sdkVersionList_ {};
      shared_ptr<string> userId_ {};
      shared_ptr<string> userIdAlias_ {};
    };

    virtual bool empty() const override { return this->callStatus_ == nullptr
        && this->pubUserDetailList_ == nullptr && this->requestId_ == nullptr && this->subUserDetail_ == nullptr; };
    // callStatus Field Functions 
    bool hasCallStatus() const { return this->callStatus_ != nullptr;};
    void deleteCallStatus() { this->callStatus_ = nullptr;};
    inline string getCallStatus() const { DARABONBA_PTR_GET_DEFAULT(callStatus_, "") };
    inline DescribePubUserListBySubUserResponseBody& setCallStatus(string callStatus) { DARABONBA_PTR_SET_VALUE(callStatus_, callStatus) };


    // pubUserDetailList Field Functions 
    bool hasPubUserDetailList() const { return this->pubUserDetailList_ != nullptr;};
    void deletePubUserDetailList() { this->pubUserDetailList_ = nullptr;};
    inline const vector<DescribePubUserListBySubUserResponseBody::PubUserDetailList> & getPubUserDetailList() const { DARABONBA_PTR_GET_CONST(pubUserDetailList_, vector<DescribePubUserListBySubUserResponseBody::PubUserDetailList>) };
    inline vector<DescribePubUserListBySubUserResponseBody::PubUserDetailList> getPubUserDetailList() { DARABONBA_PTR_GET(pubUserDetailList_, vector<DescribePubUserListBySubUserResponseBody::PubUserDetailList>) };
    inline DescribePubUserListBySubUserResponseBody& setPubUserDetailList(const vector<DescribePubUserListBySubUserResponseBody::PubUserDetailList> & pubUserDetailList) { DARABONBA_PTR_SET_VALUE(pubUserDetailList_, pubUserDetailList) };
    inline DescribePubUserListBySubUserResponseBody& setPubUserDetailList(vector<DescribePubUserListBySubUserResponseBody::PubUserDetailList> && pubUserDetailList) { DARABONBA_PTR_SET_RVALUE(pubUserDetailList_, pubUserDetailList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribePubUserListBySubUserResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // subUserDetail Field Functions 
    bool hasSubUserDetail() const { return this->subUserDetail_ != nullptr;};
    void deleteSubUserDetail() { this->subUserDetail_ = nullptr;};
    inline const DescribePubUserListBySubUserResponseBody::SubUserDetail & getSubUserDetail() const { DARABONBA_PTR_GET_CONST(subUserDetail_, DescribePubUserListBySubUserResponseBody::SubUserDetail) };
    inline DescribePubUserListBySubUserResponseBody::SubUserDetail getSubUserDetail() { DARABONBA_PTR_GET(subUserDetail_, DescribePubUserListBySubUserResponseBody::SubUserDetail) };
    inline DescribePubUserListBySubUserResponseBody& setSubUserDetail(const DescribePubUserListBySubUserResponseBody::SubUserDetail & subUserDetail) { DARABONBA_PTR_SET_VALUE(subUserDetail_, subUserDetail) };
    inline DescribePubUserListBySubUserResponseBody& setSubUserDetail(DescribePubUserListBySubUserResponseBody::SubUserDetail && subUserDetail) { DARABONBA_PTR_SET_RVALUE(subUserDetail_, subUserDetail) };


  protected:
    shared_ptr<string> callStatus_ {};
    shared_ptr<vector<DescribePubUserListBySubUserResponseBody::PubUserDetailList>> pubUserDetailList_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<DescribePubUserListBySubUserResponseBody::SubUserDetail> subUserDetail_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rtc20180111
#endif
