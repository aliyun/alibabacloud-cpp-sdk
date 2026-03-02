// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_NEURONAPPMOBI_HPP_
#define ALIBABACLOUD_MODELS_NEURONAPPMOBI_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Neuron20211115
{
namespace Models
{
  class NeuronAppMobi : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const NeuronAppMobi& obj) { 
      DARABONBA_PTR_TO_JSON(appId, appId_);
      DARABONBA_PTR_TO_JSON(artifactUrl, artifactUrl_);
      DARABONBA_PTR_TO_JSON(commitId, commitId_);
      DARABONBA_PTR_TO_JSON(enterpriseId, enterpriseId_);
      DARABONBA_PTR_TO_JSON(gmtCreate, gmtCreate_);
      DARABONBA_PTR_TO_JSON(gmtModified, gmtModified_);
      DARABONBA_PTR_TO_JSON(id, id_);
      DARABONBA_PTR_TO_JSON(mobiUserId, mobiUserId_);
      DARABONBA_PTR_TO_JSON(moduleId, moduleId_);
      DARABONBA_PTR_TO_JSON(moduleName, moduleName_);
      DARABONBA_PTR_TO_JSON(schemaVersion, schemaVersion_);
      DARABONBA_PTR_TO_JSON(status, status_);
      DARABONBA_PTR_TO_JSON(storeUrl, storeUrl_);
      DARABONBA_PTR_TO_JSON(token, token_);
      DARABONBA_PTR_TO_JSON(version, version_);
    };
    friend void from_json(const Darabonba::Json& j, NeuronAppMobi& obj) { 
      DARABONBA_PTR_FROM_JSON(appId, appId_);
      DARABONBA_PTR_FROM_JSON(artifactUrl, artifactUrl_);
      DARABONBA_PTR_FROM_JSON(commitId, commitId_);
      DARABONBA_PTR_FROM_JSON(enterpriseId, enterpriseId_);
      DARABONBA_PTR_FROM_JSON(gmtCreate, gmtCreate_);
      DARABONBA_PTR_FROM_JSON(gmtModified, gmtModified_);
      DARABONBA_PTR_FROM_JSON(id, id_);
      DARABONBA_PTR_FROM_JSON(mobiUserId, mobiUserId_);
      DARABONBA_PTR_FROM_JSON(moduleId, moduleId_);
      DARABONBA_PTR_FROM_JSON(moduleName, moduleName_);
      DARABONBA_PTR_FROM_JSON(schemaVersion, schemaVersion_);
      DARABONBA_PTR_FROM_JSON(status, status_);
      DARABONBA_PTR_FROM_JSON(storeUrl, storeUrl_);
      DARABONBA_PTR_FROM_JSON(token, token_);
      DARABONBA_PTR_FROM_JSON(version, version_);
    };
    NeuronAppMobi() = default ;
    NeuronAppMobi(const NeuronAppMobi &) = default ;
    NeuronAppMobi(NeuronAppMobi &&) = default ;
    NeuronAppMobi(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~NeuronAppMobi() = default ;
    NeuronAppMobi& operator=(const NeuronAppMobi &) = default ;
    NeuronAppMobi& operator=(NeuronAppMobi &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appId_ == nullptr
        && this->artifactUrl_ == nullptr && this->commitId_ == nullptr && this->enterpriseId_ == nullptr && this->gmtCreate_ == nullptr && this->gmtModified_ == nullptr
        && this->id_ == nullptr && this->mobiUserId_ == nullptr && this->moduleId_ == nullptr && this->moduleName_ == nullptr && this->schemaVersion_ == nullptr
        && this->status_ == nullptr && this->storeUrl_ == nullptr && this->token_ == nullptr && this->version_ == nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline int64_t getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, 0L) };
    inline NeuronAppMobi& setAppId(int64_t appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // artifactUrl Field Functions 
    bool hasArtifactUrl() const { return this->artifactUrl_ != nullptr;};
    void deleteArtifactUrl() { this->artifactUrl_ = nullptr;};
    inline string getArtifactUrl() const { DARABONBA_PTR_GET_DEFAULT(artifactUrl_, "") };
    inline NeuronAppMobi& setArtifactUrl(string artifactUrl) { DARABONBA_PTR_SET_VALUE(artifactUrl_, artifactUrl) };


    // commitId Field Functions 
    bool hasCommitId() const { return this->commitId_ != nullptr;};
    void deleteCommitId() { this->commitId_ = nullptr;};
    inline string getCommitId() const { DARABONBA_PTR_GET_DEFAULT(commitId_, "") };
    inline NeuronAppMobi& setCommitId(string commitId) { DARABONBA_PTR_SET_VALUE(commitId_, commitId) };


    // enterpriseId Field Functions 
    bool hasEnterpriseId() const { return this->enterpriseId_ != nullptr;};
    void deleteEnterpriseId() { this->enterpriseId_ = nullptr;};
    inline int64_t getEnterpriseId() const { DARABONBA_PTR_GET_DEFAULT(enterpriseId_, 0L) };
    inline NeuronAppMobi& setEnterpriseId(int64_t enterpriseId) { DARABONBA_PTR_SET_VALUE(enterpriseId_, enterpriseId) };


    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline string getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
    inline NeuronAppMobi& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    // gmtModified Field Functions 
    bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
    void deleteGmtModified() { this->gmtModified_ = nullptr;};
    inline string getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
    inline NeuronAppMobi& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline NeuronAppMobi& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // mobiUserId Field Functions 
    bool hasMobiUserId() const { return this->mobiUserId_ != nullptr;};
    void deleteMobiUserId() { this->mobiUserId_ = nullptr;};
    inline string getMobiUserId() const { DARABONBA_PTR_GET_DEFAULT(mobiUserId_, "") };
    inline NeuronAppMobi& setMobiUserId(string mobiUserId) { DARABONBA_PTR_SET_VALUE(mobiUserId_, mobiUserId) };


    // moduleId Field Functions 
    bool hasModuleId() const { return this->moduleId_ != nullptr;};
    void deleteModuleId() { this->moduleId_ = nullptr;};
    inline string getModuleId() const { DARABONBA_PTR_GET_DEFAULT(moduleId_, "") };
    inline NeuronAppMobi& setModuleId(string moduleId) { DARABONBA_PTR_SET_VALUE(moduleId_, moduleId) };


    // moduleName Field Functions 
    bool hasModuleName() const { return this->moduleName_ != nullptr;};
    void deleteModuleName() { this->moduleName_ = nullptr;};
    inline string getModuleName() const { DARABONBA_PTR_GET_DEFAULT(moduleName_, "") };
    inline NeuronAppMobi& setModuleName(string moduleName) { DARABONBA_PTR_SET_VALUE(moduleName_, moduleName) };


    // schemaVersion Field Functions 
    bool hasSchemaVersion() const { return this->schemaVersion_ != nullptr;};
    void deleteSchemaVersion() { this->schemaVersion_ = nullptr;};
    inline string getSchemaVersion() const { DARABONBA_PTR_GET_DEFAULT(schemaVersion_, "") };
    inline NeuronAppMobi& setSchemaVersion(string schemaVersion) { DARABONBA_PTR_SET_VALUE(schemaVersion_, schemaVersion) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline NeuronAppMobi& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // storeUrl Field Functions 
    bool hasStoreUrl() const { return this->storeUrl_ != nullptr;};
    void deleteStoreUrl() { this->storeUrl_ = nullptr;};
    inline string getStoreUrl() const { DARABONBA_PTR_GET_DEFAULT(storeUrl_, "") };
    inline NeuronAppMobi& setStoreUrl(string storeUrl) { DARABONBA_PTR_SET_VALUE(storeUrl_, storeUrl) };


    // token Field Functions 
    bool hasToken() const { return this->token_ != nullptr;};
    void deleteToken() { this->token_ = nullptr;};
    inline string getToken() const { DARABONBA_PTR_GET_DEFAULT(token_, "") };
    inline NeuronAppMobi& setToken(string token) { DARABONBA_PTR_SET_VALUE(token_, token) };


    // version Field Functions 
    bool hasVersion() const { return this->version_ != nullptr;};
    void deleteVersion() { this->version_ = nullptr;};
    inline string getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
    inline NeuronAppMobi& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


  protected:
    shared_ptr<int64_t> appId_ {};
    // This parameter is required.
    shared_ptr<string> artifactUrl_ {};
    // This parameter is required.
    shared_ptr<string> commitId_ {};
    shared_ptr<int64_t> enterpriseId_ {};
    shared_ptr<string> gmtCreate_ {};
    shared_ptr<string> gmtModified_ {};
    shared_ptr<int64_t> id_ {};
    shared_ptr<string> mobiUserId_ {};
    shared_ptr<string> moduleId_ {};
    shared_ptr<string> moduleName_ {};
    shared_ptr<string> schemaVersion_ {};
    shared_ptr<string> status_ {};
    shared_ptr<string> storeUrl_ {};
    // This parameter is required.
    shared_ptr<string> token_ {};
    shared_ptr<string> version_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Neuron20211115
#endif
