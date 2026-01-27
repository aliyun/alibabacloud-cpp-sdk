// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_IDPSYNCCONFIG_HPP_
#define ALIBABACLOUD_MODELS_IDPSYNCCONFIG_HPP_
#include <darabonba/Core.hpp>
#include <vector>
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
    class IdpDepartmentInfos : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const IdpDepartmentInfos& obj) { 
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(Name, name_);
      };
      friend void from_json(const Darabonba::Json& j, IdpDepartmentInfos& obj) { 
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
      };
      IdpDepartmentInfos() = default ;
      IdpDepartmentInfos(const IdpDepartmentInfos &) = default ;
      IdpDepartmentInfos(IdpDepartmentInfos &&) = default ;
      IdpDepartmentInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~IdpDepartmentInfos() = default ;
      IdpDepartmentInfos& operator=(const IdpDepartmentInfos &) = default ;
      IdpDepartmentInfos& operator=(IdpDepartmentInfos &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->id_ == nullptr
        && this->name_ == nullptr; };
      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
      inline IdpDepartmentInfos& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline IdpDepartmentInfos& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    protected:
      shared_ptr<string> id_ {};
      shared_ptr<string> name_ {};
    };

    virtual bool empty() const override { return this->autoSyncEnabled_ == nullptr
        && this->idpDepartmentInfos_ == nullptr && this->scheduleSyncIntervalSecond_ == nullptr && this->userSyncEnabled_ == nullptr; };
    // autoSyncEnabled Field Functions 
    bool hasAutoSyncEnabled() const { return this->autoSyncEnabled_ != nullptr;};
    void deleteAutoSyncEnabled() { this->autoSyncEnabled_ = nullptr;};
    inline bool getAutoSyncEnabled() const { DARABONBA_PTR_GET_DEFAULT(autoSyncEnabled_, false) };
    inline IdpSyncConfig& setAutoSyncEnabled(bool autoSyncEnabled) { DARABONBA_PTR_SET_VALUE(autoSyncEnabled_, autoSyncEnabled) };


    // idpDepartmentInfos Field Functions 
    bool hasIdpDepartmentInfos() const { return this->idpDepartmentInfos_ != nullptr;};
    void deleteIdpDepartmentInfos() { this->idpDepartmentInfos_ = nullptr;};
    inline const vector<IdpSyncConfig::IdpDepartmentInfos> & getIdpDepartmentInfos() const { DARABONBA_PTR_GET_CONST(idpDepartmentInfos_, vector<IdpSyncConfig::IdpDepartmentInfos>) };
    inline vector<IdpSyncConfig::IdpDepartmentInfos> getIdpDepartmentInfos() { DARABONBA_PTR_GET(idpDepartmentInfos_, vector<IdpSyncConfig::IdpDepartmentInfos>) };
    inline IdpSyncConfig& setIdpDepartmentInfos(const vector<IdpSyncConfig::IdpDepartmentInfos> & idpDepartmentInfos) { DARABONBA_PTR_SET_VALUE(idpDepartmentInfos_, idpDepartmentInfos) };
    inline IdpSyncConfig& setIdpDepartmentInfos(vector<IdpSyncConfig::IdpDepartmentInfos> && idpDepartmentInfos) { DARABONBA_PTR_SET_RVALUE(idpDepartmentInfos_, idpDepartmentInfos) };


    // scheduleSyncIntervalSecond Field Functions 
    bool hasScheduleSyncIntervalSecond() const { return this->scheduleSyncIntervalSecond_ != nullptr;};
    void deleteScheduleSyncIntervalSecond() { this->scheduleSyncIntervalSecond_ = nullptr;};
    inline int64_t getScheduleSyncIntervalSecond() const { DARABONBA_PTR_GET_DEFAULT(scheduleSyncIntervalSecond_, 0L) };
    inline IdpSyncConfig& setScheduleSyncIntervalSecond(int64_t scheduleSyncIntervalSecond) { DARABONBA_PTR_SET_VALUE(scheduleSyncIntervalSecond_, scheduleSyncIntervalSecond) };


    // userSyncEnabled Field Functions 
    bool hasUserSyncEnabled() const { return this->userSyncEnabled_ != nullptr;};
    void deleteUserSyncEnabled() { this->userSyncEnabled_ = nullptr;};
    inline bool getUserSyncEnabled() const { DARABONBA_PTR_GET_DEFAULT(userSyncEnabled_, false) };
    inline IdpSyncConfig& setUserSyncEnabled(bool userSyncEnabled) { DARABONBA_PTR_SET_VALUE(userSyncEnabled_, userSyncEnabled) };


  protected:
    shared_ptr<bool> autoSyncEnabled_ {};
    shared_ptr<vector<IdpSyncConfig::IdpDepartmentInfos>> idpDepartmentInfos_ {};
    shared_ptr<int64_t> scheduleSyncIntervalSecond_ {};
    shared_ptr<bool> userSyncEnabled_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
