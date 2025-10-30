// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_IDPSYNCCONFIG_HPP_
#define ALIBABACLOUD_MODELS_IDPSYNCCONFIG_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/IdpSyncConfigIdpDepartmentInfos.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Csas20230120
{
namespace Models
{
  class IdpSyncConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const IdpSyncConfig& obj) { 
      DARABONBA_PTR_TO_JSON(AutoSyncEnabled, autoSyncEnabled_);
      DARABONBA_PTR_TO_JSON(IdpDepartmentInfos, idpDepartmentInfos_);
      DARABONBA_PTR_TO_JSON(ScheduleSyncIntervalSecond, scheduleSyncIntervalSecond_);
      DARABONBA_PTR_TO_JSON(UserSyncEnabled, userSyncEnabled_);
    };
    friend void from_json(const Darabonba::Json& j, IdpSyncConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(AutoSyncEnabled, autoSyncEnabled_);
      DARABONBA_PTR_FROM_JSON(IdpDepartmentInfos, idpDepartmentInfos_);
      DARABONBA_PTR_FROM_JSON(ScheduleSyncIntervalSecond, scheduleSyncIntervalSecond_);
      DARABONBA_PTR_FROM_JSON(UserSyncEnabled, userSyncEnabled_);
    };
    IdpSyncConfig() = default ;
    IdpSyncConfig(const IdpSyncConfig &) = default ;
    IdpSyncConfig(IdpSyncConfig &&) = default ;
    IdpSyncConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~IdpSyncConfig() = default ;
    IdpSyncConfig& operator=(const IdpSyncConfig &) = default ;
    IdpSyncConfig& operator=(IdpSyncConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->autoSyncEnabled_ == nullptr
        && return this->idpDepartmentInfos_ == nullptr && return this->scheduleSyncIntervalSecond_ == nullptr && return this->userSyncEnabled_ == nullptr; };
    // autoSyncEnabled Field Functions 
    bool hasAutoSyncEnabled() const { return this->autoSyncEnabled_ != nullptr;};
    void deleteAutoSyncEnabled() { this->autoSyncEnabled_ = nullptr;};
    inline bool autoSyncEnabled() const { DARABONBA_PTR_GET_DEFAULT(autoSyncEnabled_, false) };
    inline IdpSyncConfig& setAutoSyncEnabled(bool autoSyncEnabled) { DARABONBA_PTR_SET_VALUE(autoSyncEnabled_, autoSyncEnabled) };


    // idpDepartmentInfos Field Functions 
    bool hasIdpDepartmentInfos() const { return this->idpDepartmentInfos_ != nullptr;};
    void deleteIdpDepartmentInfos() { this->idpDepartmentInfos_ = nullptr;};
    inline const vector<IdpSyncConfigIdpDepartmentInfos> & idpDepartmentInfos() const { DARABONBA_PTR_GET_CONST(idpDepartmentInfos_, vector<IdpSyncConfigIdpDepartmentInfos>) };
    inline vector<IdpSyncConfigIdpDepartmentInfos> idpDepartmentInfos() { DARABONBA_PTR_GET(idpDepartmentInfos_, vector<IdpSyncConfigIdpDepartmentInfos>) };
    inline IdpSyncConfig& setIdpDepartmentInfos(const vector<IdpSyncConfigIdpDepartmentInfos> & idpDepartmentInfos) { DARABONBA_PTR_SET_VALUE(idpDepartmentInfos_, idpDepartmentInfos) };
    inline IdpSyncConfig& setIdpDepartmentInfos(vector<IdpSyncConfigIdpDepartmentInfos> && idpDepartmentInfos) { DARABONBA_PTR_SET_RVALUE(idpDepartmentInfos_, idpDepartmentInfos) };


    // scheduleSyncIntervalSecond Field Functions 
    bool hasScheduleSyncIntervalSecond() const { return this->scheduleSyncIntervalSecond_ != nullptr;};
    void deleteScheduleSyncIntervalSecond() { this->scheduleSyncIntervalSecond_ = nullptr;};
    inline int64_t scheduleSyncIntervalSecond() const { DARABONBA_PTR_GET_DEFAULT(scheduleSyncIntervalSecond_, 0L) };
    inline IdpSyncConfig& setScheduleSyncIntervalSecond(int64_t scheduleSyncIntervalSecond) { DARABONBA_PTR_SET_VALUE(scheduleSyncIntervalSecond_, scheduleSyncIntervalSecond) };


    // userSyncEnabled Field Functions 
    bool hasUserSyncEnabled() const { return this->userSyncEnabled_ != nullptr;};
    void deleteUserSyncEnabled() { this->userSyncEnabled_ = nullptr;};
    inline bool userSyncEnabled() const { DARABONBA_PTR_GET_DEFAULT(userSyncEnabled_, false) };
    inline IdpSyncConfig& setUserSyncEnabled(bool userSyncEnabled) { DARABONBA_PTR_SET_VALUE(userSyncEnabled_, userSyncEnabled) };


  protected:
    std::shared_ptr<bool> autoSyncEnabled_ = nullptr;
    std::shared_ptr<vector<IdpSyncConfigIdpDepartmentInfos>> idpDepartmentInfos_ = nullptr;
    std::shared_ptr<int64_t> scheduleSyncIntervalSecond_ = nullptr;
    std::shared_ptr<bool> userSyncEnabled_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
