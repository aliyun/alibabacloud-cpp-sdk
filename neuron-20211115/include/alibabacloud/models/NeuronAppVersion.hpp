// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_NEURONAPPVERSION_HPP_
#define ALIBABACLOUD_MODELS_NEURONAPPVERSION_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/NeuronAppInfoContent.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Neuron20211115
{
namespace Models
{
  class NeuronAppVersion : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const NeuronAppVersion& obj) { 
      DARABONBA_PTR_TO_JSON(accountId, accountId_);
      DARABONBA_PTR_TO_JSON(appEntry, appEntry_);
      DARABONBA_PTR_TO_JSON(appId, appId_);
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(enterpriseId, enterpriseId_);
      DARABONBA_PTR_TO_JSON(envs, envs_);
      DARABONBA_PTR_TO_JSON(featureDesc, featureDesc_);
      DARABONBA_PTR_TO_JSON(gmtCreate, gmtCreate_);
      DARABONBA_PTR_TO_JSON(gmtModified, gmtModified_);
      DARABONBA_PTR_TO_JSON(id, id_);
      DARABONBA_PTR_TO_JSON(imageUrls, imageUrls_);
      DARABONBA_PTR_TO_JSON(instructionUrl, instructionUrl_);
      DARABONBA_PTR_TO_JSON(isLatest, isLatest_);
      DARABONBA_PTR_TO_JSON(manageType, manageType_);
      DARABONBA_PTR_TO_JSON(mobiCommitId, mobiCommitId_);
      DARABONBA_PTR_TO_JSON(mobiId, mobiId_);
      DARABONBA_PTR_TO_JSON(mobiModuleId, mobiModuleId_);
      DARABONBA_PTR_TO_JSON(mobiUrl, mobiUrl_);
      DARABONBA_PTR_TO_JSON(pbcs, pbcs_);
      DARABONBA_PTR_TO_JSON(privateInfo, privateInfo_);
      DARABONBA_PTR_TO_JSON(productId, productId_);
      DARABONBA_PTR_TO_JSON(scopes, scopes_);
      DARABONBA_PTR_TO_JSON(sidebar, sidebar_);
      DARABONBA_PTR_TO_JSON(status, status_);
      DARABONBA_PTR_TO_JSON(unbindEffect, unbindEffect_);
      DARABONBA_PTR_TO_JSON(unbindReasons, unbindReasons_);
      DARABONBA_PTR_TO_JSON(updatedFeature, updatedFeature_);
      DARABONBA_PTR_TO_JSON(version, version_);
    };
    friend void from_json(const Darabonba::Json& j, NeuronAppVersion& obj) { 
      DARABONBA_PTR_FROM_JSON(accountId, accountId_);
      DARABONBA_PTR_FROM_JSON(appEntry, appEntry_);
      DARABONBA_PTR_FROM_JSON(appId, appId_);
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(enterpriseId, enterpriseId_);
      DARABONBA_PTR_FROM_JSON(envs, envs_);
      DARABONBA_PTR_FROM_JSON(featureDesc, featureDesc_);
      DARABONBA_PTR_FROM_JSON(gmtCreate, gmtCreate_);
      DARABONBA_PTR_FROM_JSON(gmtModified, gmtModified_);
      DARABONBA_PTR_FROM_JSON(id, id_);
      DARABONBA_PTR_FROM_JSON(imageUrls, imageUrls_);
      DARABONBA_PTR_FROM_JSON(instructionUrl, instructionUrl_);
      DARABONBA_PTR_FROM_JSON(isLatest, isLatest_);
      DARABONBA_PTR_FROM_JSON(manageType, manageType_);
      DARABONBA_PTR_FROM_JSON(mobiCommitId, mobiCommitId_);
      DARABONBA_PTR_FROM_JSON(mobiId, mobiId_);
      DARABONBA_PTR_FROM_JSON(mobiModuleId, mobiModuleId_);
      DARABONBA_PTR_FROM_JSON(mobiUrl, mobiUrl_);
      DARABONBA_PTR_FROM_JSON(pbcs, pbcs_);
      DARABONBA_PTR_FROM_JSON(privateInfo, privateInfo_);
      DARABONBA_PTR_FROM_JSON(productId, productId_);
      DARABONBA_PTR_FROM_JSON(scopes, scopes_);
      DARABONBA_PTR_FROM_JSON(sidebar, sidebar_);
      DARABONBA_PTR_FROM_JSON(status, status_);
      DARABONBA_PTR_FROM_JSON(unbindEffect, unbindEffect_);
      DARABONBA_PTR_FROM_JSON(unbindReasons, unbindReasons_);
      DARABONBA_PTR_FROM_JSON(updatedFeature, updatedFeature_);
      DARABONBA_PTR_FROM_JSON(version, version_);
    };
    NeuronAppVersion() = default ;
    NeuronAppVersion(const NeuronAppVersion &) = default ;
    NeuronAppVersion(NeuronAppVersion &&) = default ;
    NeuronAppVersion(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~NeuronAppVersion() = default ;
    NeuronAppVersion& operator=(const NeuronAppVersion &) = default ;
    NeuronAppVersion& operator=(NeuronAppVersion &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accountId_ == nullptr
        && this->appEntry_ == nullptr && this->appId_ == nullptr && this->description_ == nullptr && this->enterpriseId_ == nullptr && this->envs_ == nullptr
        && this->featureDesc_ == nullptr && this->gmtCreate_ == nullptr && this->gmtModified_ == nullptr && this->id_ == nullptr && this->imageUrls_ == nullptr
        && this->instructionUrl_ == nullptr && this->isLatest_ == nullptr && this->manageType_ == nullptr && this->mobiCommitId_ == nullptr && this->mobiId_ == nullptr
        && this->mobiModuleId_ == nullptr && this->mobiUrl_ == nullptr && this->pbcs_ == nullptr && this->privateInfo_ == nullptr && this->productId_ == nullptr
        && this->scopes_ == nullptr && this->sidebar_ == nullptr && this->status_ == nullptr && this->unbindEffect_ == nullptr && this->unbindReasons_ == nullptr
        && this->updatedFeature_ == nullptr && this->version_ == nullptr; };
    // accountId Field Functions 
    bool hasAccountId() const { return this->accountId_ != nullptr;};
    void deleteAccountId() { this->accountId_ = nullptr;};
    inline string getAccountId() const { DARABONBA_PTR_GET_DEFAULT(accountId_, "") };
    inline NeuronAppVersion& setAccountId(string accountId) { DARABONBA_PTR_SET_VALUE(accountId_, accountId) };


    // appEntry Field Functions 
    bool hasAppEntry() const { return this->appEntry_ != nullptr;};
    void deleteAppEntry() { this->appEntry_ = nullptr;};
    inline string getAppEntry() const { DARABONBA_PTR_GET_DEFAULT(appEntry_, "") };
    inline NeuronAppVersion& setAppEntry(string appEntry) { DARABONBA_PTR_SET_VALUE(appEntry_, appEntry) };


    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline int64_t getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, 0L) };
    inline NeuronAppVersion& setAppId(int64_t appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline NeuronAppVersion& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // enterpriseId Field Functions 
    bool hasEnterpriseId() const { return this->enterpriseId_ != nullptr;};
    void deleteEnterpriseId() { this->enterpriseId_ = nullptr;};
    inline int64_t getEnterpriseId() const { DARABONBA_PTR_GET_DEFAULT(enterpriseId_, 0L) };
    inline NeuronAppVersion& setEnterpriseId(int64_t enterpriseId) { DARABONBA_PTR_SET_VALUE(enterpriseId_, enterpriseId) };


    // envs Field Functions 
    bool hasEnvs() const { return this->envs_ != nullptr;};
    void deleteEnvs() { this->envs_ = nullptr;};
    inline const vector<string> & getEnvs() const { DARABONBA_PTR_GET_CONST(envs_, vector<string>) };
    inline vector<string> getEnvs() { DARABONBA_PTR_GET(envs_, vector<string>) };
    inline NeuronAppVersion& setEnvs(const vector<string> & envs) { DARABONBA_PTR_SET_VALUE(envs_, envs) };
    inline NeuronAppVersion& setEnvs(vector<string> && envs) { DARABONBA_PTR_SET_RVALUE(envs_, envs) };


    // featureDesc Field Functions 
    bool hasFeatureDesc() const { return this->featureDesc_ != nullptr;};
    void deleteFeatureDesc() { this->featureDesc_ = nullptr;};
    inline const vector<NeuronAppInfoContent> & getFeatureDesc() const { DARABONBA_PTR_GET_CONST(featureDesc_, vector<NeuronAppInfoContent>) };
    inline vector<NeuronAppInfoContent> getFeatureDesc() { DARABONBA_PTR_GET(featureDesc_, vector<NeuronAppInfoContent>) };
    inline NeuronAppVersion& setFeatureDesc(const vector<NeuronAppInfoContent> & featureDesc) { DARABONBA_PTR_SET_VALUE(featureDesc_, featureDesc) };
    inline NeuronAppVersion& setFeatureDesc(vector<NeuronAppInfoContent> && featureDesc) { DARABONBA_PTR_SET_RVALUE(featureDesc_, featureDesc) };


    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline string getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
    inline NeuronAppVersion& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    // gmtModified Field Functions 
    bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
    void deleteGmtModified() { this->gmtModified_ = nullptr;};
    inline string getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
    inline NeuronAppVersion& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline NeuronAppVersion& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // imageUrls Field Functions 
    bool hasImageUrls() const { return this->imageUrls_ != nullptr;};
    void deleteImageUrls() { this->imageUrls_ = nullptr;};
    inline const vector<string> & getImageUrls() const { DARABONBA_PTR_GET_CONST(imageUrls_, vector<string>) };
    inline vector<string> getImageUrls() { DARABONBA_PTR_GET(imageUrls_, vector<string>) };
    inline NeuronAppVersion& setImageUrls(const vector<string> & imageUrls) { DARABONBA_PTR_SET_VALUE(imageUrls_, imageUrls) };
    inline NeuronAppVersion& setImageUrls(vector<string> && imageUrls) { DARABONBA_PTR_SET_RVALUE(imageUrls_, imageUrls) };


    // instructionUrl Field Functions 
    bool hasInstructionUrl() const { return this->instructionUrl_ != nullptr;};
    void deleteInstructionUrl() { this->instructionUrl_ = nullptr;};
    inline string getInstructionUrl() const { DARABONBA_PTR_GET_DEFAULT(instructionUrl_, "") };
    inline NeuronAppVersion& setInstructionUrl(string instructionUrl) { DARABONBA_PTR_SET_VALUE(instructionUrl_, instructionUrl) };


    // isLatest Field Functions 
    bool hasIsLatest() const { return this->isLatest_ != nullptr;};
    void deleteIsLatest() { this->isLatest_ = nullptr;};
    inline int32_t getIsLatest() const { DARABONBA_PTR_GET_DEFAULT(isLatest_, 0) };
    inline NeuronAppVersion& setIsLatest(int32_t isLatest) { DARABONBA_PTR_SET_VALUE(isLatest_, isLatest) };


    // manageType Field Functions 
    bool hasManageType() const { return this->manageType_ != nullptr;};
    void deleteManageType() { this->manageType_ = nullptr;};
    inline string getManageType() const { DARABONBA_PTR_GET_DEFAULT(manageType_, "") };
    inline NeuronAppVersion& setManageType(string manageType) { DARABONBA_PTR_SET_VALUE(manageType_, manageType) };


    // mobiCommitId Field Functions 
    bool hasMobiCommitId() const { return this->mobiCommitId_ != nullptr;};
    void deleteMobiCommitId() { this->mobiCommitId_ = nullptr;};
    inline string getMobiCommitId() const { DARABONBA_PTR_GET_DEFAULT(mobiCommitId_, "") };
    inline NeuronAppVersion& setMobiCommitId(string mobiCommitId) { DARABONBA_PTR_SET_VALUE(mobiCommitId_, mobiCommitId) };


    // mobiId Field Functions 
    bool hasMobiId() const { return this->mobiId_ != nullptr;};
    void deleteMobiId() { this->mobiId_ = nullptr;};
    inline int64_t getMobiId() const { DARABONBA_PTR_GET_DEFAULT(mobiId_, 0L) };
    inline NeuronAppVersion& setMobiId(int64_t mobiId) { DARABONBA_PTR_SET_VALUE(mobiId_, mobiId) };


    // mobiModuleId Field Functions 
    bool hasMobiModuleId() const { return this->mobiModuleId_ != nullptr;};
    void deleteMobiModuleId() { this->mobiModuleId_ = nullptr;};
    inline string getMobiModuleId() const { DARABONBA_PTR_GET_DEFAULT(mobiModuleId_, "") };
    inline NeuronAppVersion& setMobiModuleId(string mobiModuleId) { DARABONBA_PTR_SET_VALUE(mobiModuleId_, mobiModuleId) };


    // mobiUrl Field Functions 
    bool hasMobiUrl() const { return this->mobiUrl_ != nullptr;};
    void deleteMobiUrl() { this->mobiUrl_ = nullptr;};
    inline string getMobiUrl() const { DARABONBA_PTR_GET_DEFAULT(mobiUrl_, "") };
    inline NeuronAppVersion& setMobiUrl(string mobiUrl) { DARABONBA_PTR_SET_VALUE(mobiUrl_, mobiUrl) };


    // pbcs Field Functions 
    bool hasPbcs() const { return this->pbcs_ != nullptr;};
    void deletePbcs() { this->pbcs_ = nullptr;};
    inline const vector<int64_t> & getPbcs() const { DARABONBA_PTR_GET_CONST(pbcs_, vector<int64_t>) };
    inline vector<int64_t> getPbcs() { DARABONBA_PTR_GET(pbcs_, vector<int64_t>) };
    inline NeuronAppVersion& setPbcs(const vector<int64_t> & pbcs) { DARABONBA_PTR_SET_VALUE(pbcs_, pbcs) };
    inline NeuronAppVersion& setPbcs(vector<int64_t> && pbcs) { DARABONBA_PTR_SET_RVALUE(pbcs_, pbcs) };


    // privateInfo Field Functions 
    bool hasPrivateInfo() const { return this->privateInfo_ != nullptr;};
    void deletePrivateInfo() { this->privateInfo_ = nullptr;};
    inline const vector<string> & getPrivateInfo() const { DARABONBA_PTR_GET_CONST(privateInfo_, vector<string>) };
    inline vector<string> getPrivateInfo() { DARABONBA_PTR_GET(privateInfo_, vector<string>) };
    inline NeuronAppVersion& setPrivateInfo(const vector<string> & privateInfo) { DARABONBA_PTR_SET_VALUE(privateInfo_, privateInfo) };
    inline NeuronAppVersion& setPrivateInfo(vector<string> && privateInfo) { DARABONBA_PTR_SET_RVALUE(privateInfo_, privateInfo) };


    // productId Field Functions 
    bool hasProductId() const { return this->productId_ != nullptr;};
    void deleteProductId() { this->productId_ = nullptr;};
    inline int64_t getProductId() const { DARABONBA_PTR_GET_DEFAULT(productId_, 0L) };
    inline NeuronAppVersion& setProductId(int64_t productId) { DARABONBA_PTR_SET_VALUE(productId_, productId) };


    // scopes Field Functions 
    bool hasScopes() const { return this->scopes_ != nullptr;};
    void deleteScopes() { this->scopes_ = nullptr;};
    inline const vector<string> & getScopes() const { DARABONBA_PTR_GET_CONST(scopes_, vector<string>) };
    inline vector<string> getScopes() { DARABONBA_PTR_GET(scopes_, vector<string>) };
    inline NeuronAppVersion& setScopes(const vector<string> & scopes) { DARABONBA_PTR_SET_VALUE(scopes_, scopes) };
    inline NeuronAppVersion& setScopes(vector<string> && scopes) { DARABONBA_PTR_SET_RVALUE(scopes_, scopes) };


    // sidebar Field Functions 
    bool hasSidebar() const { return this->sidebar_ != nullptr;};
    void deleteSidebar() { this->sidebar_ = nullptr;};
    inline string getSidebar() const { DARABONBA_PTR_GET_DEFAULT(sidebar_, "") };
    inline NeuronAppVersion& setSidebar(string sidebar) { DARABONBA_PTR_SET_VALUE(sidebar_, sidebar) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline NeuronAppVersion& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // unbindEffect Field Functions 
    bool hasUnbindEffect() const { return this->unbindEffect_ != nullptr;};
    void deleteUnbindEffect() { this->unbindEffect_ = nullptr;};
    inline string getUnbindEffect() const { DARABONBA_PTR_GET_DEFAULT(unbindEffect_, "") };
    inline NeuronAppVersion& setUnbindEffect(string unbindEffect) { DARABONBA_PTR_SET_VALUE(unbindEffect_, unbindEffect) };


    // unbindReasons Field Functions 
    bool hasUnbindReasons() const { return this->unbindReasons_ != nullptr;};
    void deleteUnbindReasons() { this->unbindReasons_ = nullptr;};
    inline const vector<string> & getUnbindReasons() const { DARABONBA_PTR_GET_CONST(unbindReasons_, vector<string>) };
    inline vector<string> getUnbindReasons() { DARABONBA_PTR_GET(unbindReasons_, vector<string>) };
    inline NeuronAppVersion& setUnbindReasons(const vector<string> & unbindReasons) { DARABONBA_PTR_SET_VALUE(unbindReasons_, unbindReasons) };
    inline NeuronAppVersion& setUnbindReasons(vector<string> && unbindReasons) { DARABONBA_PTR_SET_RVALUE(unbindReasons_, unbindReasons) };


    // updatedFeature Field Functions 
    bool hasUpdatedFeature() const { return this->updatedFeature_ != nullptr;};
    void deleteUpdatedFeature() { this->updatedFeature_ = nullptr;};
    inline const vector<NeuronAppInfoContent> & getUpdatedFeature() const { DARABONBA_PTR_GET_CONST(updatedFeature_, vector<NeuronAppInfoContent>) };
    inline vector<NeuronAppInfoContent> getUpdatedFeature() { DARABONBA_PTR_GET(updatedFeature_, vector<NeuronAppInfoContent>) };
    inline NeuronAppVersion& setUpdatedFeature(const vector<NeuronAppInfoContent> & updatedFeature) { DARABONBA_PTR_SET_VALUE(updatedFeature_, updatedFeature) };
    inline NeuronAppVersion& setUpdatedFeature(vector<NeuronAppInfoContent> && updatedFeature) { DARABONBA_PTR_SET_RVALUE(updatedFeature_, updatedFeature) };


    // version Field Functions 
    bool hasVersion() const { return this->version_ != nullptr;};
    void deleteVersion() { this->version_ = nullptr;};
    inline string getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
    inline NeuronAppVersion& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


  protected:
    shared_ptr<string> accountId_ {};
    shared_ptr<string> appEntry_ {};
    // This parameter is required.
    shared_ptr<int64_t> appId_ {};
    shared_ptr<string> description_ {};
    shared_ptr<int64_t> enterpriseId_ {};
    shared_ptr<vector<string>> envs_ {};
    shared_ptr<vector<NeuronAppInfoContent>> featureDesc_ {};
    shared_ptr<string> gmtCreate_ {};
    shared_ptr<string> gmtModified_ {};
    // This parameter is required.
    shared_ptr<int64_t> id_ {};
    shared_ptr<vector<string>> imageUrls_ {};
    shared_ptr<string> instructionUrl_ {};
    shared_ptr<int32_t> isLatest_ {};
    shared_ptr<string> manageType_ {};
    shared_ptr<string> mobiCommitId_ {};
    shared_ptr<int64_t> mobiId_ {};
    shared_ptr<string> mobiModuleId_ {};
    shared_ptr<string> mobiUrl_ {};
    shared_ptr<vector<int64_t>> pbcs_ {};
    shared_ptr<vector<string>> privateInfo_ {};
    shared_ptr<int64_t> productId_ {};
    shared_ptr<vector<string>> scopes_ {};
    shared_ptr<string> sidebar_ {};
    shared_ptr<string> status_ {};
    shared_ptr<string> unbindEffect_ {};
    shared_ptr<vector<string>> unbindReasons_ {};
    shared_ptr<vector<NeuronAppInfoContent>> updatedFeature_ {};
    // This parameter is required.
    shared_ptr<string> version_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Neuron20211115
#endif
