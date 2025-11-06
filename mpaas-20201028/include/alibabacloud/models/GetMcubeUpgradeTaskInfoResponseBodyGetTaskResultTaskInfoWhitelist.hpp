// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMCUBEUPGRADETASKINFORESPONSEBODYGETTASKRESULTTASKINFOWHITELIST_HPP_
#define ALIBABACLOUD_MODELS_GETMCUBEUPGRADETASKINFORESPONSEBODYGETTASKRESULTTASKINFOWHITELIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MPaaS20201028
{
namespace Models
{
  class GetMcubeUpgradeTaskInfoResponseBodyGetTaskResultTaskInfoWhitelist : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetMcubeUpgradeTaskInfoResponseBodyGetTaskResultTaskInfoWhitelist& obj) { 
      DARABONBA_PTR_TO_JSON(AppCode, appCode_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(IdType, idType_);
      DARABONBA_PTR_TO_JSON(Platform, platform_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(UserType, userType_);
      DARABONBA_PTR_TO_JSON(WhiteListCount, whiteListCount_);
      DARABONBA_PTR_TO_JSON(WhiteListName, whiteListName_);
      DARABONBA_PTR_TO_JSON(WhitelistType, whitelistType_);
    };
    friend void from_json(const Darabonba::Json& j, GetMcubeUpgradeTaskInfoResponseBodyGetTaskResultTaskInfoWhitelist& obj) { 
      DARABONBA_PTR_FROM_JSON(AppCode, appCode_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(IdType, idType_);
      DARABONBA_PTR_FROM_JSON(Platform, platform_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(UserType, userType_);
      DARABONBA_PTR_FROM_JSON(WhiteListCount, whiteListCount_);
      DARABONBA_PTR_FROM_JSON(WhiteListName, whiteListName_);
      DARABONBA_PTR_FROM_JSON(WhitelistType, whitelistType_);
    };
    GetMcubeUpgradeTaskInfoResponseBodyGetTaskResultTaskInfoWhitelist() = default ;
    GetMcubeUpgradeTaskInfoResponseBodyGetTaskResultTaskInfoWhitelist(const GetMcubeUpgradeTaskInfoResponseBodyGetTaskResultTaskInfoWhitelist &) = default ;
    GetMcubeUpgradeTaskInfoResponseBodyGetTaskResultTaskInfoWhitelist(GetMcubeUpgradeTaskInfoResponseBodyGetTaskResultTaskInfoWhitelist &&) = default ;
    GetMcubeUpgradeTaskInfoResponseBodyGetTaskResultTaskInfoWhitelist(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetMcubeUpgradeTaskInfoResponseBodyGetTaskResultTaskInfoWhitelist() = default ;
    GetMcubeUpgradeTaskInfoResponseBodyGetTaskResultTaskInfoWhitelist& operator=(const GetMcubeUpgradeTaskInfoResponseBodyGetTaskResultTaskInfoWhitelist &) = default ;
    GetMcubeUpgradeTaskInfoResponseBodyGetTaskResultTaskInfoWhitelist& operator=(GetMcubeUpgradeTaskInfoResponseBodyGetTaskResultTaskInfoWhitelist &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appCode_ == nullptr
        && return this->id_ == nullptr && return this->idType_ == nullptr && return this->platform_ == nullptr && return this->status_ == nullptr && return this->userType_ == nullptr
        && return this->whiteListCount_ == nullptr && return this->whiteListName_ == nullptr && return this->whitelistType_ == nullptr; };
    // appCode Field Functions 
    bool hasAppCode() const { return this->appCode_ != nullptr;};
    void deleteAppCode() { this->appCode_ = nullptr;};
    inline string appCode() const { DARABONBA_PTR_GET_DEFAULT(appCode_, "") };
    inline GetMcubeUpgradeTaskInfoResponseBodyGetTaskResultTaskInfoWhitelist& setAppCode(string appCode) { DARABONBA_PTR_SET_VALUE(appCode_, appCode) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline GetMcubeUpgradeTaskInfoResponseBodyGetTaskResultTaskInfoWhitelist& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // idType Field Functions 
    bool hasIdType() const { return this->idType_ != nullptr;};
    void deleteIdType() { this->idType_ = nullptr;};
    inline string idType() const { DARABONBA_PTR_GET_DEFAULT(idType_, "") };
    inline GetMcubeUpgradeTaskInfoResponseBodyGetTaskResultTaskInfoWhitelist& setIdType(string idType) { DARABONBA_PTR_SET_VALUE(idType_, idType) };


    // platform Field Functions 
    bool hasPlatform() const { return this->platform_ != nullptr;};
    void deletePlatform() { this->platform_ = nullptr;};
    inline string platform() const { DARABONBA_PTR_GET_DEFAULT(platform_, "") };
    inline GetMcubeUpgradeTaskInfoResponseBodyGetTaskResultTaskInfoWhitelist& setPlatform(string platform) { DARABONBA_PTR_SET_VALUE(platform_, platform) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t status() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline GetMcubeUpgradeTaskInfoResponseBodyGetTaskResultTaskInfoWhitelist& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // userType Field Functions 
    bool hasUserType() const { return this->userType_ != nullptr;};
    void deleteUserType() { this->userType_ = nullptr;};
    inline string userType() const { DARABONBA_PTR_GET_DEFAULT(userType_, "") };
    inline GetMcubeUpgradeTaskInfoResponseBodyGetTaskResultTaskInfoWhitelist& setUserType(string userType) { DARABONBA_PTR_SET_VALUE(userType_, userType) };


    // whiteListCount Field Functions 
    bool hasWhiteListCount() const { return this->whiteListCount_ != nullptr;};
    void deleteWhiteListCount() { this->whiteListCount_ = nullptr;};
    inline int64_t whiteListCount() const { DARABONBA_PTR_GET_DEFAULT(whiteListCount_, 0L) };
    inline GetMcubeUpgradeTaskInfoResponseBodyGetTaskResultTaskInfoWhitelist& setWhiteListCount(int64_t whiteListCount) { DARABONBA_PTR_SET_VALUE(whiteListCount_, whiteListCount) };


    // whiteListName Field Functions 
    bool hasWhiteListName() const { return this->whiteListName_ != nullptr;};
    void deleteWhiteListName() { this->whiteListName_ = nullptr;};
    inline string whiteListName() const { DARABONBA_PTR_GET_DEFAULT(whiteListName_, "") };
    inline GetMcubeUpgradeTaskInfoResponseBodyGetTaskResultTaskInfoWhitelist& setWhiteListName(string whiteListName) { DARABONBA_PTR_SET_VALUE(whiteListName_, whiteListName) };


    // whitelistType Field Functions 
    bool hasWhitelistType() const { return this->whitelistType_ != nullptr;};
    void deleteWhitelistType() { this->whitelistType_ = nullptr;};
    inline string whitelistType() const { DARABONBA_PTR_GET_DEFAULT(whitelistType_, "") };
    inline GetMcubeUpgradeTaskInfoResponseBodyGetTaskResultTaskInfoWhitelist& setWhitelistType(string whitelistType) { DARABONBA_PTR_SET_VALUE(whitelistType_, whitelistType) };


  protected:
    std::shared_ptr<string> appCode_ = nullptr;
    std::shared_ptr<int64_t> id_ = nullptr;
    std::shared_ptr<string> idType_ = nullptr;
    std::shared_ptr<string> platform_ = nullptr;
    std::shared_ptr<int32_t> status_ = nullptr;
    std::shared_ptr<string> userType_ = nullptr;
    std::shared_ptr<int64_t> whiteListCount_ = nullptr;
    std::shared_ptr<string> whiteListName_ = nullptr;
    std::shared_ptr<string> whitelistType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MPaaS20201028
#endif
