// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GRAFANAWORKSPACEDATABACKUP_HPP_
#define ALIBABACLOUD_MODELS_GRAFANAWORKSPACEDATABACKUP_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class GrafanaWorkspaceDataBackup : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GrafanaWorkspaceDataBackup& obj) { 
      DARABONBA_PTR_TO_JSON(gmtCreate, gmtCreate_);
      DARABONBA_PTR_TO_JSON(gmtModified, gmtModified_);
      DARABONBA_PTR_TO_JSON(grafanaWorkspaceId, grafanaWorkspaceId_);
      DARABONBA_PTR_TO_JSON(id, id_);
      DARABONBA_PTR_TO_JSON(msg, msg_);
      DARABONBA_PTR_TO_JSON(processName, processName_);
      DARABONBA_PTR_TO_JSON(processStatus, processStatus_);
      DARABONBA_PTR_TO_JSON(subType, subType_);
      DARABONBA_PTR_TO_JSON(userId, userId_);
    };
    friend void from_json(const Darabonba::Json& j, GrafanaWorkspaceDataBackup& obj) { 
      DARABONBA_PTR_FROM_JSON(gmtCreate, gmtCreate_);
      DARABONBA_PTR_FROM_JSON(gmtModified, gmtModified_);
      DARABONBA_PTR_FROM_JSON(grafanaWorkspaceId, grafanaWorkspaceId_);
      DARABONBA_PTR_FROM_JSON(id, id_);
      DARABONBA_PTR_FROM_JSON(msg, msg_);
      DARABONBA_PTR_FROM_JSON(processName, processName_);
      DARABONBA_PTR_FROM_JSON(processStatus, processStatus_);
      DARABONBA_PTR_FROM_JSON(subType, subType_);
      DARABONBA_PTR_FROM_JSON(userId, userId_);
    };
    GrafanaWorkspaceDataBackup() = default ;
    GrafanaWorkspaceDataBackup(const GrafanaWorkspaceDataBackup &) = default ;
    GrafanaWorkspaceDataBackup(GrafanaWorkspaceDataBackup &&) = default ;
    GrafanaWorkspaceDataBackup(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GrafanaWorkspaceDataBackup() = default ;
    GrafanaWorkspaceDataBackup& operator=(const GrafanaWorkspaceDataBackup &) = default ;
    GrafanaWorkspaceDataBackup& operator=(GrafanaWorkspaceDataBackup &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->gmtCreate_ != nullptr
        && this->gmtModified_ != nullptr && this->grafanaWorkspaceId_ != nullptr && this->id_ != nullptr && this->msg_ != nullptr && this->processName_ != nullptr
        && this->processStatus_ != nullptr && this->subType_ != nullptr && this->userId_ != nullptr; };
    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline int64_t gmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, 0L) };
    inline GrafanaWorkspaceDataBackup& setGmtCreate(int64_t gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    // gmtModified Field Functions 
    bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
    void deleteGmtModified() { this->gmtModified_ = nullptr;};
    inline int64_t gmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, 0L) };
    inline GrafanaWorkspaceDataBackup& setGmtModified(int64_t gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


    // grafanaWorkspaceId Field Functions 
    bool hasGrafanaWorkspaceId() const { return this->grafanaWorkspaceId_ != nullptr;};
    void deleteGrafanaWorkspaceId() { this->grafanaWorkspaceId_ = nullptr;};
    inline string grafanaWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(grafanaWorkspaceId_, "") };
    inline GrafanaWorkspaceDataBackup& setGrafanaWorkspaceId(string grafanaWorkspaceId) { DARABONBA_PTR_SET_VALUE(grafanaWorkspaceId_, grafanaWorkspaceId) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline GrafanaWorkspaceDataBackup& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // msg Field Functions 
    bool hasMsg() const { return this->msg_ != nullptr;};
    void deleteMsg() { this->msg_ = nullptr;};
    inline string msg() const { DARABONBA_PTR_GET_DEFAULT(msg_, "") };
    inline GrafanaWorkspaceDataBackup& setMsg(string msg) { DARABONBA_PTR_SET_VALUE(msg_, msg) };


    // processName Field Functions 
    bool hasProcessName() const { return this->processName_ != nullptr;};
    void deleteProcessName() { this->processName_ = nullptr;};
    inline string processName() const { DARABONBA_PTR_GET_DEFAULT(processName_, "") };
    inline GrafanaWorkspaceDataBackup& setProcessName(string processName) { DARABONBA_PTR_SET_VALUE(processName_, processName) };


    // processStatus Field Functions 
    bool hasProcessStatus() const { return this->processStatus_ != nullptr;};
    void deleteProcessStatus() { this->processStatus_ = nullptr;};
    inline string processStatus() const { DARABONBA_PTR_GET_DEFAULT(processStatus_, "") };
    inline GrafanaWorkspaceDataBackup& setProcessStatus(string processStatus) { DARABONBA_PTR_SET_VALUE(processStatus_, processStatus) };


    // subType Field Functions 
    bool hasSubType() const { return this->subType_ != nullptr;};
    void deleteSubType() { this->subType_ = nullptr;};
    inline string subType() const { DARABONBA_PTR_GET_DEFAULT(subType_, "") };
    inline GrafanaWorkspaceDataBackup& setSubType(string subType) { DARABONBA_PTR_SET_VALUE(subType_, subType) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline GrafanaWorkspaceDataBackup& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


  protected:
    std::shared_ptr<int64_t> gmtCreate_ = nullptr;
    std::shared_ptr<int64_t> gmtModified_ = nullptr;
    std::shared_ptr<string> grafanaWorkspaceId_ = nullptr;
    std::shared_ptr<int64_t> id_ = nullptr;
    std::shared_ptr<string> msg_ = nullptr;
    std::shared_ptr<string> processName_ = nullptr;
    std::shared_ptr<string> processStatus_ = nullptr;
    std::shared_ptr<string> subType_ = nullptr;
    std::shared_ptr<string> userId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
