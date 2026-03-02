// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_NEURONAPPVERSIONDETAIL_HPP_
#define ALIBABACLOUD_MODELS_NEURONAPPVERSIONDETAIL_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/NeuronAppInfoContent.hpp>
#include <alibabacloud/models/AppPluginInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Neuron20211115
{
namespace Models
{
  class NeuronAppVersionDetail : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const NeuronAppVersionDetail& obj) { 
      DARABONBA_PTR_TO_JSON(appDesc, appDesc_);
      DARABONBA_PTR_TO_JSON(appEntry, appEntry_);
      DARABONBA_PTR_TO_JSON(appId, appId_);
      DARABONBA_PTR_TO_JSON(appName, appName_);
      DARABONBA_PTR_TO_JSON(enterpriseId, enterpriseId_);
      DARABONBA_PTR_TO_JSON(envs, envs_);
      DARABONBA_PTR_TO_JSON(featureDesc, featureDesc_);
      DARABONBA_PTR_TO_JSON(iconUrl, iconUrl_);
      DARABONBA_PTR_TO_JSON(imageUrls, imageUrls_);
      DARABONBA_PTR_TO_JSON(instructionUrl, instructionUrl_);
      DARABONBA_PTR_TO_JSON(manageType, manageType_);
      DARABONBA_PTR_TO_JSON(mobiId, mobiId_);
      DARABONBA_PTR_TO_JSON(owner, owner_);
      DARABONBA_PTR_TO_JSON(pbcs, pbcs_);
      DARABONBA_PTR_TO_JSON(pluginList, pluginList_);
      DARABONBA_PTR_TO_JSON(privateInfo, privateInfo_);
      DARABONBA_PTR_TO_JSON(productId, productId_);
      DARABONBA_PTR_TO_JSON(scopes, scopes_);
      DARABONBA_PTR_TO_JSON(sidebar, sidebar_);
      DARABONBA_PTR_TO_JSON(unbindEffect, unbindEffect_);
      DARABONBA_PTR_TO_JSON(unbindReasons, unbindReasons_);
      DARABONBA_PTR_TO_JSON(updatedFeature, updatedFeature_);
      DARABONBA_PTR_TO_JSON(version, version_);
      DARABONBA_PTR_TO_JSON(versionId, versionId_);
    };
    friend void from_json(const Darabonba::Json& j, NeuronAppVersionDetail& obj) { 
      DARABONBA_PTR_FROM_JSON(appDesc, appDesc_);
      DARABONBA_PTR_FROM_JSON(appEntry, appEntry_);
      DARABONBA_PTR_FROM_JSON(appId, appId_);
      DARABONBA_PTR_FROM_JSON(appName, appName_);
      DARABONBA_PTR_FROM_JSON(enterpriseId, enterpriseId_);
      DARABONBA_PTR_FROM_JSON(envs, envs_);
      DARABONBA_PTR_FROM_JSON(featureDesc, featureDesc_);
      DARABONBA_PTR_FROM_JSON(iconUrl, iconUrl_);
      DARABONBA_PTR_FROM_JSON(imageUrls, imageUrls_);
      DARABONBA_PTR_FROM_JSON(instructionUrl, instructionUrl_);
      DARABONBA_PTR_FROM_JSON(manageType, manageType_);
      DARABONBA_PTR_FROM_JSON(mobiId, mobiId_);
      DARABONBA_PTR_FROM_JSON(owner, owner_);
      DARABONBA_PTR_FROM_JSON(pbcs, pbcs_);
      DARABONBA_PTR_FROM_JSON(pluginList, pluginList_);
      DARABONBA_PTR_FROM_JSON(privateInfo, privateInfo_);
      DARABONBA_PTR_FROM_JSON(productId, productId_);
      DARABONBA_PTR_FROM_JSON(scopes, scopes_);
      DARABONBA_PTR_FROM_JSON(sidebar, sidebar_);
      DARABONBA_PTR_FROM_JSON(unbindEffect, unbindEffect_);
      DARABONBA_PTR_FROM_JSON(unbindReasons, unbindReasons_);
      DARABONBA_PTR_FROM_JSON(updatedFeature, updatedFeature_);
      DARABONBA_PTR_FROM_JSON(version, version_);
      DARABONBA_PTR_FROM_JSON(versionId, versionId_);
    };
    NeuronAppVersionDetail() = default ;
    NeuronAppVersionDetail(const NeuronAppVersionDetail &) = default ;
    NeuronAppVersionDetail(NeuronAppVersionDetail &&) = default ;
    NeuronAppVersionDetail(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~NeuronAppVersionDetail() = default ;
    NeuronAppVersionDetail& operator=(const NeuronAppVersionDetail &) = default ;
    NeuronAppVersionDetail& operator=(NeuronAppVersionDetail &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appDesc_ == nullptr
        && this->appEntry_ == nullptr && this->appId_ == nullptr && this->appName_ == nullptr && this->enterpriseId_ == nullptr && this->envs_ == nullptr
        && this->featureDesc_ == nullptr && this->iconUrl_ == nullptr && this->imageUrls_ == nullptr && this->instructionUrl_ == nullptr && this->manageType_ == nullptr
        && this->mobiId_ == nullptr && this->owner_ == nullptr && this->pbcs_ == nullptr && this->pluginList_ == nullptr && this->privateInfo_ == nullptr
        && this->productId_ == nullptr && this->scopes_ == nullptr && this->sidebar_ == nullptr && this->unbindEffect_ == nullptr && this->unbindReasons_ == nullptr
        && this->updatedFeature_ == nullptr && this->version_ == nullptr && this->versionId_ == nullptr; };
    // appDesc Field Functions 
    bool hasAppDesc() const { return this->appDesc_ != nullptr;};
    void deleteAppDesc() { this->appDesc_ = nullptr;};
    inline string getAppDesc() const { DARABONBA_PTR_GET_DEFAULT(appDesc_, "") };
    inline NeuronAppVersionDetail& setAppDesc(string appDesc) { DARABONBA_PTR_SET_VALUE(appDesc_, appDesc) };


    // appEntry Field Functions 
    bool hasAppEntry() const { return this->appEntry_ != nullptr;};
    void deleteAppEntry() { this->appEntry_ = nullptr;};
    inline string getAppEntry() const { DARABONBA_PTR_GET_DEFAULT(appEntry_, "") };
    inline NeuronAppVersionDetail& setAppEntry(string appEntry) { DARABONBA_PTR_SET_VALUE(appEntry_, appEntry) };


    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline int64_t getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, 0L) };
    inline NeuronAppVersionDetail& setAppId(int64_t appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // appName Field Functions 
    bool hasAppName() const { return this->appName_ != nullptr;};
    void deleteAppName() { this->appName_ = nullptr;};
    inline string getAppName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
    inline NeuronAppVersionDetail& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


    // enterpriseId Field Functions 
    bool hasEnterpriseId() const { return this->enterpriseId_ != nullptr;};
    void deleteEnterpriseId() { this->enterpriseId_ = nullptr;};
    inline int64_t getEnterpriseId() const { DARABONBA_PTR_GET_DEFAULT(enterpriseId_, 0L) };
    inline NeuronAppVersionDetail& setEnterpriseId(int64_t enterpriseId) { DARABONBA_PTR_SET_VALUE(enterpriseId_, enterpriseId) };


    // envs Field Functions 
    bool hasEnvs() const { return this->envs_ != nullptr;};
    void deleteEnvs() { this->envs_ = nullptr;};
    inline const vector<string> & getEnvs() const { DARABONBA_PTR_GET_CONST(envs_, vector<string>) };
    inline vector<string> getEnvs() { DARABONBA_PTR_GET(envs_, vector<string>) };
    inline NeuronAppVersionDetail& setEnvs(const vector<string> & envs) { DARABONBA_PTR_SET_VALUE(envs_, envs) };
    inline NeuronAppVersionDetail& setEnvs(vector<string> && envs) { DARABONBA_PTR_SET_RVALUE(envs_, envs) };


    // featureDesc Field Functions 
    bool hasFeatureDesc() const { return this->featureDesc_ != nullptr;};
    void deleteFeatureDesc() { this->featureDesc_ = nullptr;};
    inline const vector<NeuronAppInfoContent> & getFeatureDesc() const { DARABONBA_PTR_GET_CONST(featureDesc_, vector<NeuronAppInfoContent>) };
    inline vector<NeuronAppInfoContent> getFeatureDesc() { DARABONBA_PTR_GET(featureDesc_, vector<NeuronAppInfoContent>) };
    inline NeuronAppVersionDetail& setFeatureDesc(const vector<NeuronAppInfoContent> & featureDesc) { DARABONBA_PTR_SET_VALUE(featureDesc_, featureDesc) };
    inline NeuronAppVersionDetail& setFeatureDesc(vector<NeuronAppInfoContent> && featureDesc) { DARABONBA_PTR_SET_RVALUE(featureDesc_, featureDesc) };


    // iconUrl Field Functions 
    bool hasIconUrl() const { return this->iconUrl_ != nullptr;};
    void deleteIconUrl() { this->iconUrl_ = nullptr;};
    inline string getIconUrl() const { DARABONBA_PTR_GET_DEFAULT(iconUrl_, "") };
    inline NeuronAppVersionDetail& setIconUrl(string iconUrl) { DARABONBA_PTR_SET_VALUE(iconUrl_, iconUrl) };


    // imageUrls Field Functions 
    bool hasImageUrls() const { return this->imageUrls_ != nullptr;};
    void deleteImageUrls() { this->imageUrls_ = nullptr;};
    inline const vector<string> & getImageUrls() const { DARABONBA_PTR_GET_CONST(imageUrls_, vector<string>) };
    inline vector<string> getImageUrls() { DARABONBA_PTR_GET(imageUrls_, vector<string>) };
    inline NeuronAppVersionDetail& setImageUrls(const vector<string> & imageUrls) { DARABONBA_PTR_SET_VALUE(imageUrls_, imageUrls) };
    inline NeuronAppVersionDetail& setImageUrls(vector<string> && imageUrls) { DARABONBA_PTR_SET_RVALUE(imageUrls_, imageUrls) };


    // instructionUrl Field Functions 
    bool hasInstructionUrl() const { return this->instructionUrl_ != nullptr;};
    void deleteInstructionUrl() { this->instructionUrl_ = nullptr;};
    inline string getInstructionUrl() const { DARABONBA_PTR_GET_DEFAULT(instructionUrl_, "") };
    inline NeuronAppVersionDetail& setInstructionUrl(string instructionUrl) { DARABONBA_PTR_SET_VALUE(instructionUrl_, instructionUrl) };


    // manageType Field Functions 
    bool hasManageType() const { return this->manageType_ != nullptr;};
    void deleteManageType() { this->manageType_ = nullptr;};
    inline string getManageType() const { DARABONBA_PTR_GET_DEFAULT(manageType_, "") };
    inline NeuronAppVersionDetail& setManageType(string manageType) { DARABONBA_PTR_SET_VALUE(manageType_, manageType) };


    // mobiId Field Functions 
    bool hasMobiId() const { return this->mobiId_ != nullptr;};
    void deleteMobiId() { this->mobiId_ = nullptr;};
    inline int64_t getMobiId() const { DARABONBA_PTR_GET_DEFAULT(mobiId_, 0L) };
    inline NeuronAppVersionDetail& setMobiId(int64_t mobiId) { DARABONBA_PTR_SET_VALUE(mobiId_, mobiId) };


    // owner Field Functions 
    bool hasOwner() const { return this->owner_ != nullptr;};
    void deleteOwner() { this->owner_ = nullptr;};
    inline string getOwner() const { DARABONBA_PTR_GET_DEFAULT(owner_, "") };
    inline NeuronAppVersionDetail& setOwner(string owner) { DARABONBA_PTR_SET_VALUE(owner_, owner) };


    // pbcs Field Functions 
    bool hasPbcs() const { return this->pbcs_ != nullptr;};
    void deletePbcs() { this->pbcs_ = nullptr;};
    inline const vector<int64_t> & getPbcs() const { DARABONBA_PTR_GET_CONST(pbcs_, vector<int64_t>) };
    inline vector<int64_t> getPbcs() { DARABONBA_PTR_GET(pbcs_, vector<int64_t>) };
    inline NeuronAppVersionDetail& setPbcs(const vector<int64_t> & pbcs) { DARABONBA_PTR_SET_VALUE(pbcs_, pbcs) };
    inline NeuronAppVersionDetail& setPbcs(vector<int64_t> && pbcs) { DARABONBA_PTR_SET_RVALUE(pbcs_, pbcs) };


    // pluginList Field Functions 
    bool hasPluginList() const { return this->pluginList_ != nullptr;};
    void deletePluginList() { this->pluginList_ = nullptr;};
    inline const vector<AppPluginInfo> & getPluginList() const { DARABONBA_PTR_GET_CONST(pluginList_, vector<AppPluginInfo>) };
    inline vector<AppPluginInfo> getPluginList() { DARABONBA_PTR_GET(pluginList_, vector<AppPluginInfo>) };
    inline NeuronAppVersionDetail& setPluginList(const vector<AppPluginInfo> & pluginList) { DARABONBA_PTR_SET_VALUE(pluginList_, pluginList) };
    inline NeuronAppVersionDetail& setPluginList(vector<AppPluginInfo> && pluginList) { DARABONBA_PTR_SET_RVALUE(pluginList_, pluginList) };


    // privateInfo Field Functions 
    bool hasPrivateInfo() const { return this->privateInfo_ != nullptr;};
    void deletePrivateInfo() { this->privateInfo_ = nullptr;};
    inline const vector<string> & getPrivateInfo() const { DARABONBA_PTR_GET_CONST(privateInfo_, vector<string>) };
    inline vector<string> getPrivateInfo() { DARABONBA_PTR_GET(privateInfo_, vector<string>) };
    inline NeuronAppVersionDetail& setPrivateInfo(const vector<string> & privateInfo) { DARABONBA_PTR_SET_VALUE(privateInfo_, privateInfo) };
    inline NeuronAppVersionDetail& setPrivateInfo(vector<string> && privateInfo) { DARABONBA_PTR_SET_RVALUE(privateInfo_, privateInfo) };


    // productId Field Functions 
    bool hasProductId() const { return this->productId_ != nullptr;};
    void deleteProductId() { this->productId_ = nullptr;};
    inline int64_t getProductId() const { DARABONBA_PTR_GET_DEFAULT(productId_, 0L) };
    inline NeuronAppVersionDetail& setProductId(int64_t productId) { DARABONBA_PTR_SET_VALUE(productId_, productId) };


    // scopes Field Functions 
    bool hasScopes() const { return this->scopes_ != nullptr;};
    void deleteScopes() { this->scopes_ = nullptr;};
    inline const vector<string> & getScopes() const { DARABONBA_PTR_GET_CONST(scopes_, vector<string>) };
    inline vector<string> getScopes() { DARABONBA_PTR_GET(scopes_, vector<string>) };
    inline NeuronAppVersionDetail& setScopes(const vector<string> & scopes) { DARABONBA_PTR_SET_VALUE(scopes_, scopes) };
    inline NeuronAppVersionDetail& setScopes(vector<string> && scopes) { DARABONBA_PTR_SET_RVALUE(scopes_, scopes) };


    // sidebar Field Functions 
    bool hasSidebar() const { return this->sidebar_ != nullptr;};
    void deleteSidebar() { this->sidebar_ = nullptr;};
    inline string getSidebar() const { DARABONBA_PTR_GET_DEFAULT(sidebar_, "") };
    inline NeuronAppVersionDetail& setSidebar(string sidebar) { DARABONBA_PTR_SET_VALUE(sidebar_, sidebar) };


    // unbindEffect Field Functions 
    bool hasUnbindEffect() const { return this->unbindEffect_ != nullptr;};
    void deleteUnbindEffect() { this->unbindEffect_ = nullptr;};
    inline string getUnbindEffect() const { DARABONBA_PTR_GET_DEFAULT(unbindEffect_, "") };
    inline NeuronAppVersionDetail& setUnbindEffect(string unbindEffect) { DARABONBA_PTR_SET_VALUE(unbindEffect_, unbindEffect) };


    // unbindReasons Field Functions 
    bool hasUnbindReasons() const { return this->unbindReasons_ != nullptr;};
    void deleteUnbindReasons() { this->unbindReasons_ = nullptr;};
    inline const vector<string> & getUnbindReasons() const { DARABONBA_PTR_GET_CONST(unbindReasons_, vector<string>) };
    inline vector<string> getUnbindReasons() { DARABONBA_PTR_GET(unbindReasons_, vector<string>) };
    inline NeuronAppVersionDetail& setUnbindReasons(const vector<string> & unbindReasons) { DARABONBA_PTR_SET_VALUE(unbindReasons_, unbindReasons) };
    inline NeuronAppVersionDetail& setUnbindReasons(vector<string> && unbindReasons) { DARABONBA_PTR_SET_RVALUE(unbindReasons_, unbindReasons) };


    // updatedFeature Field Functions 
    bool hasUpdatedFeature() const { return this->updatedFeature_ != nullptr;};
    void deleteUpdatedFeature() { this->updatedFeature_ = nullptr;};
    inline const vector<NeuronAppInfoContent> & getUpdatedFeature() const { DARABONBA_PTR_GET_CONST(updatedFeature_, vector<NeuronAppInfoContent>) };
    inline vector<NeuronAppInfoContent> getUpdatedFeature() { DARABONBA_PTR_GET(updatedFeature_, vector<NeuronAppInfoContent>) };
    inline NeuronAppVersionDetail& setUpdatedFeature(const vector<NeuronAppInfoContent> & updatedFeature) { DARABONBA_PTR_SET_VALUE(updatedFeature_, updatedFeature) };
    inline NeuronAppVersionDetail& setUpdatedFeature(vector<NeuronAppInfoContent> && updatedFeature) { DARABONBA_PTR_SET_RVALUE(updatedFeature_, updatedFeature) };


    // version Field Functions 
    bool hasVersion() const { return this->version_ != nullptr;};
    void deleteVersion() { this->version_ = nullptr;};
    inline string getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
    inline NeuronAppVersionDetail& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


    // versionId Field Functions 
    bool hasVersionId() const { return this->versionId_ != nullptr;};
    void deleteVersionId() { this->versionId_ = nullptr;};
    inline int64_t getVersionId() const { DARABONBA_PTR_GET_DEFAULT(versionId_, 0L) };
    inline NeuronAppVersionDetail& setVersionId(int64_t versionId) { DARABONBA_PTR_SET_VALUE(versionId_, versionId) };


  protected:
    shared_ptr<string> appDesc_ {};
    shared_ptr<string> appEntry_ {};
    // This parameter is required.
    shared_ptr<int64_t> appId_ {};
    // This parameter is required.
    shared_ptr<string> appName_ {};
    shared_ptr<int64_t> enterpriseId_ {};
    shared_ptr<vector<string>> envs_ {};
    shared_ptr<vector<NeuronAppInfoContent>> featureDesc_ {};
    // This parameter is required.
    shared_ptr<string> iconUrl_ {};
    shared_ptr<vector<string>> imageUrls_ {};
    shared_ptr<string> instructionUrl_ {};
    shared_ptr<string> manageType_ {};
    shared_ptr<int64_t> mobiId_ {};
    // This parameter is required.
    shared_ptr<string> owner_ {};
    shared_ptr<vector<int64_t>> pbcs_ {};
    shared_ptr<vector<AppPluginInfo>> pluginList_ {};
    shared_ptr<vector<string>> privateInfo_ {};
    shared_ptr<int64_t> productId_ {};
    shared_ptr<vector<string>> scopes_ {};
    shared_ptr<string> sidebar_ {};
    shared_ptr<string> unbindEffect_ {};
    shared_ptr<vector<string>> unbindReasons_ {};
    shared_ptr<vector<NeuronAppInfoContent>> updatedFeature_ {};
    // This parameter is required.
    shared_ptr<string> version_ {};
    shared_ptr<int64_t> versionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Neuron20211115
#endif
