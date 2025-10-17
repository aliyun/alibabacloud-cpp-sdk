// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPUBUSERLISTBYSUBUSERRESPONSEBODYPUBUSERDETAILLIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPUBUSERLISTBYSUBUSERRESPONSEBODYPUBUSERDETAILLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribePubUserListBySubUserResponseBodyPubUserDetailListOnlinePeriods.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rtc20180111
{
namespace Models
{
  class DescribePubUserListBySubUserResponseBodyPubUserDetailList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePubUserListBySubUserResponseBodyPubUserDetailList& obj) { 
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
    friend void from_json(const Darabonba::Json& j, DescribePubUserListBySubUserResponseBodyPubUserDetailList& obj) { 
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
    DescribePubUserListBySubUserResponseBodyPubUserDetailList() = default ;
    DescribePubUserListBySubUserResponseBodyPubUserDetailList(const DescribePubUserListBySubUserResponseBodyPubUserDetailList &) = default ;
    DescribePubUserListBySubUserResponseBodyPubUserDetailList(DescribePubUserListBySubUserResponseBodyPubUserDetailList &&) = default ;
    DescribePubUserListBySubUserResponseBodyPubUserDetailList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePubUserListBySubUserResponseBodyPubUserDetailList() = default ;
    DescribePubUserListBySubUserResponseBodyPubUserDetailList& operator=(const DescribePubUserListBySubUserResponseBodyPubUserDetailList &) = default ;
    DescribePubUserListBySubUserResponseBodyPubUserDetailList& operator=(DescribePubUserListBySubUserResponseBodyPubUserDetailList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->callIdList_ == nullptr
        && return this->clientType_ == nullptr && return this->createdTs_ == nullptr && return this->destroyedTs_ == nullptr && return this->duration_ == nullptr && return this->location_ == nullptr
        && return this->network_ == nullptr && return this->networkList_ == nullptr && return this->onlineDuration_ == nullptr && return this->onlinePeriods_ == nullptr && return this->os_ == nullptr
        && return this->osList_ == nullptr && return this->roles_ == nullptr && return this->sdkVersion_ == nullptr && return this->sdkVersionList_ == nullptr && return this->userId_ == nullptr
        && return this->userIdAlias_ == nullptr; };
    // callIdList Field Functions 
    bool hasCallIdList() const { return this->callIdList_ != nullptr;};
    void deleteCallIdList() { this->callIdList_ = nullptr;};
    inline const vector<string> & callIdList() const { DARABONBA_PTR_GET_CONST(callIdList_, vector<string>) };
    inline vector<string> callIdList() { DARABONBA_PTR_GET(callIdList_, vector<string>) };
    inline DescribePubUserListBySubUserResponseBodyPubUserDetailList& setCallIdList(const vector<string> & callIdList) { DARABONBA_PTR_SET_VALUE(callIdList_, callIdList) };
    inline DescribePubUserListBySubUserResponseBodyPubUserDetailList& setCallIdList(vector<string> && callIdList) { DARABONBA_PTR_SET_RVALUE(callIdList_, callIdList) };


    // clientType Field Functions 
    bool hasClientType() const { return this->clientType_ != nullptr;};
    void deleteClientType() { this->clientType_ = nullptr;};
    inline string clientType() const { DARABONBA_PTR_GET_DEFAULT(clientType_, "") };
    inline DescribePubUserListBySubUserResponseBodyPubUserDetailList& setClientType(string clientType) { DARABONBA_PTR_SET_VALUE(clientType_, clientType) };


    // createdTs Field Functions 
    bool hasCreatedTs() const { return this->createdTs_ != nullptr;};
    void deleteCreatedTs() { this->createdTs_ = nullptr;};
    inline int64_t createdTs() const { DARABONBA_PTR_GET_DEFAULT(createdTs_, 0L) };
    inline DescribePubUserListBySubUserResponseBodyPubUserDetailList& setCreatedTs(int64_t createdTs) { DARABONBA_PTR_SET_VALUE(createdTs_, createdTs) };


    // destroyedTs Field Functions 
    bool hasDestroyedTs() const { return this->destroyedTs_ != nullptr;};
    void deleteDestroyedTs() { this->destroyedTs_ = nullptr;};
    inline int64_t destroyedTs() const { DARABONBA_PTR_GET_DEFAULT(destroyedTs_, 0L) };
    inline DescribePubUserListBySubUserResponseBodyPubUserDetailList& setDestroyedTs(int64_t destroyedTs) { DARABONBA_PTR_SET_VALUE(destroyedTs_, destroyedTs) };


    // duration Field Functions 
    bool hasDuration() const { return this->duration_ != nullptr;};
    void deleteDuration() { this->duration_ = nullptr;};
    inline int64_t duration() const { DARABONBA_PTR_GET_DEFAULT(duration_, 0L) };
    inline DescribePubUserListBySubUserResponseBodyPubUserDetailList& setDuration(int64_t duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


    // location Field Functions 
    bool hasLocation() const { return this->location_ != nullptr;};
    void deleteLocation() { this->location_ = nullptr;};
    inline string location() const { DARABONBA_PTR_GET_DEFAULT(location_, "") };
    inline DescribePubUserListBySubUserResponseBodyPubUserDetailList& setLocation(string location) { DARABONBA_PTR_SET_VALUE(location_, location) };


    // network Field Functions 
    bool hasNetwork() const { return this->network_ != nullptr;};
    void deleteNetwork() { this->network_ = nullptr;};
    inline string network() const { DARABONBA_PTR_GET_DEFAULT(network_, "") };
    inline DescribePubUserListBySubUserResponseBodyPubUserDetailList& setNetwork(string network) { DARABONBA_PTR_SET_VALUE(network_, network) };


    // networkList Field Functions 
    bool hasNetworkList() const { return this->networkList_ != nullptr;};
    void deleteNetworkList() { this->networkList_ = nullptr;};
    inline const vector<string> & networkList() const { DARABONBA_PTR_GET_CONST(networkList_, vector<string>) };
    inline vector<string> networkList() { DARABONBA_PTR_GET(networkList_, vector<string>) };
    inline DescribePubUserListBySubUserResponseBodyPubUserDetailList& setNetworkList(const vector<string> & networkList) { DARABONBA_PTR_SET_VALUE(networkList_, networkList) };
    inline DescribePubUserListBySubUserResponseBodyPubUserDetailList& setNetworkList(vector<string> && networkList) { DARABONBA_PTR_SET_RVALUE(networkList_, networkList) };


    // onlineDuration Field Functions 
    bool hasOnlineDuration() const { return this->onlineDuration_ != nullptr;};
    void deleteOnlineDuration() { this->onlineDuration_ = nullptr;};
    inline int64_t onlineDuration() const { DARABONBA_PTR_GET_DEFAULT(onlineDuration_, 0L) };
    inline DescribePubUserListBySubUserResponseBodyPubUserDetailList& setOnlineDuration(int64_t onlineDuration) { DARABONBA_PTR_SET_VALUE(onlineDuration_, onlineDuration) };


    // onlinePeriods Field Functions 
    bool hasOnlinePeriods() const { return this->onlinePeriods_ != nullptr;};
    void deleteOnlinePeriods() { this->onlinePeriods_ = nullptr;};
    inline const vector<Models::DescribePubUserListBySubUserResponseBodyPubUserDetailListOnlinePeriods> & onlinePeriods() const { DARABONBA_PTR_GET_CONST(onlinePeriods_, vector<Models::DescribePubUserListBySubUserResponseBodyPubUserDetailListOnlinePeriods>) };
    inline vector<Models::DescribePubUserListBySubUserResponseBodyPubUserDetailListOnlinePeriods> onlinePeriods() { DARABONBA_PTR_GET(onlinePeriods_, vector<Models::DescribePubUserListBySubUserResponseBodyPubUserDetailListOnlinePeriods>) };
    inline DescribePubUserListBySubUserResponseBodyPubUserDetailList& setOnlinePeriods(const vector<Models::DescribePubUserListBySubUserResponseBodyPubUserDetailListOnlinePeriods> & onlinePeriods) { DARABONBA_PTR_SET_VALUE(onlinePeriods_, onlinePeriods) };
    inline DescribePubUserListBySubUserResponseBodyPubUserDetailList& setOnlinePeriods(vector<Models::DescribePubUserListBySubUserResponseBodyPubUserDetailListOnlinePeriods> && onlinePeriods) { DARABONBA_PTR_SET_RVALUE(onlinePeriods_, onlinePeriods) };


    // os Field Functions 
    bool hasOs() const { return this->os_ != nullptr;};
    void deleteOs() { this->os_ = nullptr;};
    inline string os() const { DARABONBA_PTR_GET_DEFAULT(os_, "") };
    inline DescribePubUserListBySubUserResponseBodyPubUserDetailList& setOs(string os) { DARABONBA_PTR_SET_VALUE(os_, os) };


    // osList Field Functions 
    bool hasOsList() const { return this->osList_ != nullptr;};
    void deleteOsList() { this->osList_ = nullptr;};
    inline const vector<string> & osList() const { DARABONBA_PTR_GET_CONST(osList_, vector<string>) };
    inline vector<string> osList() { DARABONBA_PTR_GET(osList_, vector<string>) };
    inline DescribePubUserListBySubUserResponseBodyPubUserDetailList& setOsList(const vector<string> & osList) { DARABONBA_PTR_SET_VALUE(osList_, osList) };
    inline DescribePubUserListBySubUserResponseBodyPubUserDetailList& setOsList(vector<string> && osList) { DARABONBA_PTR_SET_RVALUE(osList_, osList) };


    // roles Field Functions 
    bool hasRoles() const { return this->roles_ != nullptr;};
    void deleteRoles() { this->roles_ = nullptr;};
    inline const vector<string> & roles() const { DARABONBA_PTR_GET_CONST(roles_, vector<string>) };
    inline vector<string> roles() { DARABONBA_PTR_GET(roles_, vector<string>) };
    inline DescribePubUserListBySubUserResponseBodyPubUserDetailList& setRoles(const vector<string> & roles) { DARABONBA_PTR_SET_VALUE(roles_, roles) };
    inline DescribePubUserListBySubUserResponseBodyPubUserDetailList& setRoles(vector<string> && roles) { DARABONBA_PTR_SET_RVALUE(roles_, roles) };


    // sdkVersion Field Functions 
    bool hasSdkVersion() const { return this->sdkVersion_ != nullptr;};
    void deleteSdkVersion() { this->sdkVersion_ = nullptr;};
    inline string sdkVersion() const { DARABONBA_PTR_GET_DEFAULT(sdkVersion_, "") };
    inline DescribePubUserListBySubUserResponseBodyPubUserDetailList& setSdkVersion(string sdkVersion) { DARABONBA_PTR_SET_VALUE(sdkVersion_, sdkVersion) };


    // sdkVersionList Field Functions 
    bool hasSdkVersionList() const { return this->sdkVersionList_ != nullptr;};
    void deleteSdkVersionList() { this->sdkVersionList_ = nullptr;};
    inline const vector<string> & sdkVersionList() const { DARABONBA_PTR_GET_CONST(sdkVersionList_, vector<string>) };
    inline vector<string> sdkVersionList() { DARABONBA_PTR_GET(sdkVersionList_, vector<string>) };
    inline DescribePubUserListBySubUserResponseBodyPubUserDetailList& setSdkVersionList(const vector<string> & sdkVersionList) { DARABONBA_PTR_SET_VALUE(sdkVersionList_, sdkVersionList) };
    inline DescribePubUserListBySubUserResponseBodyPubUserDetailList& setSdkVersionList(vector<string> && sdkVersionList) { DARABONBA_PTR_SET_RVALUE(sdkVersionList_, sdkVersionList) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline DescribePubUserListBySubUserResponseBodyPubUserDetailList& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


    // userIdAlias Field Functions 
    bool hasUserIdAlias() const { return this->userIdAlias_ != nullptr;};
    void deleteUserIdAlias() { this->userIdAlias_ = nullptr;};
    inline string userIdAlias() const { DARABONBA_PTR_GET_DEFAULT(userIdAlias_, "") };
    inline DescribePubUserListBySubUserResponseBodyPubUserDetailList& setUserIdAlias(string userIdAlias) { DARABONBA_PTR_SET_VALUE(userIdAlias_, userIdAlias) };


  protected:
    std::shared_ptr<vector<string>> callIdList_ = nullptr;
    std::shared_ptr<string> clientType_ = nullptr;
    std::shared_ptr<int64_t> createdTs_ = nullptr;
    std::shared_ptr<int64_t> destroyedTs_ = nullptr;
    std::shared_ptr<int64_t> duration_ = nullptr;
    std::shared_ptr<string> location_ = nullptr;
    std::shared_ptr<string> network_ = nullptr;
    std::shared_ptr<vector<string>> networkList_ = nullptr;
    std::shared_ptr<int64_t> onlineDuration_ = nullptr;
    std::shared_ptr<vector<Models::DescribePubUserListBySubUserResponseBodyPubUserDetailListOnlinePeriods>> onlinePeriods_ = nullptr;
    std::shared_ptr<string> os_ = nullptr;
    std::shared_ptr<vector<string>> osList_ = nullptr;
    std::shared_ptr<vector<string>> roles_ = nullptr;
    std::shared_ptr<string> sdkVersion_ = nullptr;
    std::shared_ptr<vector<string>> sdkVersionList_ = nullptr;
    std::shared_ptr<string> userId_ = nullptr;
    std::shared_ptr<string> userIdAlias_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rtc20180111
#endif
