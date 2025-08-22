// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GRAFANAWORKSPACETRANS_HPP_
#define ALIBABACLOUD_MODELS_GRAFANAWORKSPACETRANS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GrafanaWorkspaceTransDetail.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class GrafanaWorkspaceTrans : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GrafanaWorkspaceTrans& obj) { 
      DARABONBA_PTR_TO_JSON(apiUrl, apiUrl_);
      DARABONBA_PTR_TO_JSON(authType, authType_);
      DARABONBA_PTR_TO_JSON(gmtCreate, gmtCreate_);
      DARABONBA_PTR_TO_JSON(gmtModified, gmtModified_);
      DARABONBA_PTR_TO_JSON(grafanaWorkspaceId, grafanaWorkspaceId_);
      DARABONBA_PTR_TO_JSON(id, id_);
      DARABONBA_PTR_TO_JSON(msg, msg_);
      DARABONBA_PTR_TO_JSON(processStatus, processStatus_);
      DARABONBA_PTR_TO_JSON(transDetails, transDetails_);
      DARABONBA_PTR_TO_JSON(userId, userId_);
    };
    friend void from_json(const Darabonba::Json& j, GrafanaWorkspaceTrans& obj) { 
      DARABONBA_PTR_FROM_JSON(apiUrl, apiUrl_);
      DARABONBA_PTR_FROM_JSON(authType, authType_);
      DARABONBA_PTR_FROM_JSON(gmtCreate, gmtCreate_);
      DARABONBA_PTR_FROM_JSON(gmtModified, gmtModified_);
      DARABONBA_PTR_FROM_JSON(grafanaWorkspaceId, grafanaWorkspaceId_);
      DARABONBA_PTR_FROM_JSON(id, id_);
      DARABONBA_PTR_FROM_JSON(msg, msg_);
      DARABONBA_PTR_FROM_JSON(processStatus, processStatus_);
      DARABONBA_PTR_FROM_JSON(transDetails, transDetails_);
      DARABONBA_PTR_FROM_JSON(userId, userId_);
    };
    GrafanaWorkspaceTrans() = default ;
    GrafanaWorkspaceTrans(const GrafanaWorkspaceTrans &) = default ;
    GrafanaWorkspaceTrans(GrafanaWorkspaceTrans &&) = default ;
    GrafanaWorkspaceTrans(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GrafanaWorkspaceTrans() = default ;
    GrafanaWorkspaceTrans& operator=(const GrafanaWorkspaceTrans &) = default ;
    GrafanaWorkspaceTrans& operator=(GrafanaWorkspaceTrans &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->apiUrl_ != nullptr
        && this->authType_ != nullptr && this->gmtCreate_ != nullptr && this->gmtModified_ != nullptr && this->grafanaWorkspaceId_ != nullptr && this->id_ != nullptr
        && this->msg_ != nullptr && this->processStatus_ != nullptr && this->transDetails_ != nullptr && this->userId_ != nullptr; };
    // apiUrl Field Functions 
    bool hasApiUrl() const { return this->apiUrl_ != nullptr;};
    void deleteApiUrl() { this->apiUrl_ = nullptr;};
    inline string apiUrl() const { DARABONBA_PTR_GET_DEFAULT(apiUrl_, "") };
    inline GrafanaWorkspaceTrans& setApiUrl(string apiUrl) { DARABONBA_PTR_SET_VALUE(apiUrl_, apiUrl) };


    // authType Field Functions 
    bool hasAuthType() const { return this->authType_ != nullptr;};
    void deleteAuthType() { this->authType_ = nullptr;};
    inline string authType() const { DARABONBA_PTR_GET_DEFAULT(authType_, "") };
    inline GrafanaWorkspaceTrans& setAuthType(string authType) { DARABONBA_PTR_SET_VALUE(authType_, authType) };


    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline float gmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, 0.0) };
    inline GrafanaWorkspaceTrans& setGmtCreate(float gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    // gmtModified Field Functions 
    bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
    void deleteGmtModified() { this->gmtModified_ = nullptr;};
    inline float gmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, 0.0) };
    inline GrafanaWorkspaceTrans& setGmtModified(float gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


    // grafanaWorkspaceId Field Functions 
    bool hasGrafanaWorkspaceId() const { return this->grafanaWorkspaceId_ != nullptr;};
    void deleteGrafanaWorkspaceId() { this->grafanaWorkspaceId_ = nullptr;};
    inline string grafanaWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(grafanaWorkspaceId_, "") };
    inline GrafanaWorkspaceTrans& setGrafanaWorkspaceId(string grafanaWorkspaceId) { DARABONBA_PTR_SET_VALUE(grafanaWorkspaceId_, grafanaWorkspaceId) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline GrafanaWorkspaceTrans& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // msg Field Functions 
    bool hasMsg() const { return this->msg_ != nullptr;};
    void deleteMsg() { this->msg_ = nullptr;};
    inline string msg() const { DARABONBA_PTR_GET_DEFAULT(msg_, "") };
    inline GrafanaWorkspaceTrans& setMsg(string msg) { DARABONBA_PTR_SET_VALUE(msg_, msg) };


    // processStatus Field Functions 
    bool hasProcessStatus() const { return this->processStatus_ != nullptr;};
    void deleteProcessStatus() { this->processStatus_ = nullptr;};
    inline string processStatus() const { DARABONBA_PTR_GET_DEFAULT(processStatus_, "") };
    inline GrafanaWorkspaceTrans& setProcessStatus(string processStatus) { DARABONBA_PTR_SET_VALUE(processStatus_, processStatus) };


    // transDetails Field Functions 
    bool hasTransDetails() const { return this->transDetails_ != nullptr;};
    void deleteTransDetails() { this->transDetails_ = nullptr;};
    inline const vector<GrafanaWorkspaceTransDetail> & transDetails() const { DARABONBA_PTR_GET_CONST(transDetails_, vector<GrafanaWorkspaceTransDetail>) };
    inline vector<GrafanaWorkspaceTransDetail> transDetails() { DARABONBA_PTR_GET(transDetails_, vector<GrafanaWorkspaceTransDetail>) };
    inline GrafanaWorkspaceTrans& setTransDetails(const vector<GrafanaWorkspaceTransDetail> & transDetails) { DARABONBA_PTR_SET_VALUE(transDetails_, transDetails) };
    inline GrafanaWorkspaceTrans& setTransDetails(vector<GrafanaWorkspaceTransDetail> && transDetails) { DARABONBA_PTR_SET_RVALUE(transDetails_, transDetails) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline GrafanaWorkspaceTrans& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


  protected:
    std::shared_ptr<string> apiUrl_ = nullptr;
    std::shared_ptr<string> authType_ = nullptr;
    std::shared_ptr<float> gmtCreate_ = nullptr;
    std::shared_ptr<float> gmtModified_ = nullptr;
    std::shared_ptr<string> grafanaWorkspaceId_ = nullptr;
    std::shared_ptr<int64_t> id_ = nullptr;
    std::shared_ptr<string> msg_ = nullptr;
    std::shared_ptr<string> processStatus_ = nullptr;
    std::shared_ptr<vector<GrafanaWorkspaceTransDetail>> transDetails_ = nullptr;
    std::shared_ptr<string> userId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
