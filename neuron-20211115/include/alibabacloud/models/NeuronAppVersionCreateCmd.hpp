// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_NEURONAPPVERSIONCREATECMD_HPP_
#define ALIBABACLOUD_MODELS_NEURONAPPVERSIONCREATECMD_HPP_
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
  class NeuronAppVersionCreateCmd : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const NeuronAppVersionCreateCmd& obj) { 
      DARABONBA_PTR_TO_JSON(accountId, accountId_);
      DARABONBA_PTR_TO_JSON(appEntry, appEntry_);
      DARABONBA_PTR_TO_JSON(appId, appId_);
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(envs, envs_);
      DARABONBA_PTR_TO_JSON(featureDesc, featureDesc_);
      DARABONBA_PTR_TO_JSON(imageUrls, imageUrls_);
      DARABONBA_PTR_TO_JSON(instructionUrl, instructionUrl_);
      DARABONBA_PTR_TO_JSON(manageType, manageType_);
      DARABONBA_PTR_TO_JSON(mobiId, mobiId_);
      DARABONBA_PTR_TO_JSON(pbcs, pbcs_);
      DARABONBA_PTR_TO_JSON(pluginList, pluginList_);
      DARABONBA_PTR_TO_JSON(privateInfo, privateInfo_);
      DARABONBA_PTR_TO_JSON(scopes, scopes_);
      DARABONBA_PTR_TO_JSON(sidebar, sidebar_);
      DARABONBA_PTR_TO_JSON(unbindEffect, unbindEffect_);
      DARABONBA_PTR_TO_JSON(unbindReasons, unbindReasons_);
      DARABONBA_PTR_TO_JSON(updatedFeature, updatedFeature_);
      DARABONBA_PTR_TO_JSON(version, version_);
    };
    friend void from_json(const Darabonba::Json& j, NeuronAppVersionCreateCmd& obj) { 
      DARABONBA_PTR_FROM_JSON(accountId, accountId_);
      DARABONBA_PTR_FROM_JSON(appEntry, appEntry_);
      DARABONBA_PTR_FROM_JSON(appId, appId_);
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(envs, envs_);
      DARABONBA_PTR_FROM_JSON(featureDesc, featureDesc_);
      DARABONBA_PTR_FROM_JSON(imageUrls, imageUrls_);
      DARABONBA_PTR_FROM_JSON(instructionUrl, instructionUrl_);
      DARABONBA_PTR_FROM_JSON(manageType, manageType_);
      DARABONBA_PTR_FROM_JSON(mobiId, mobiId_);
      DARABONBA_PTR_FROM_JSON(pbcs, pbcs_);
      DARABONBA_PTR_FROM_JSON(pluginList, pluginList_);
      DARABONBA_PTR_FROM_JSON(privateInfo, privateInfo_);
      DARABONBA_PTR_FROM_JSON(scopes, scopes_);
      DARABONBA_PTR_FROM_JSON(sidebar, sidebar_);
      DARABONBA_PTR_FROM_JSON(unbindEffect, unbindEffect_);
      DARABONBA_PTR_FROM_JSON(unbindReasons, unbindReasons_);
      DARABONBA_PTR_FROM_JSON(updatedFeature, updatedFeature_);
      DARABONBA_PTR_FROM_JSON(version, version_);
    };
    NeuronAppVersionCreateCmd() = default ;
    NeuronAppVersionCreateCmd(const NeuronAppVersionCreateCmd &) = default ;
    NeuronAppVersionCreateCmd(NeuronAppVersionCreateCmd &&) = default ;
    NeuronAppVersionCreateCmd(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~NeuronAppVersionCreateCmd() = default ;
    NeuronAppVersionCreateCmd& operator=(const NeuronAppVersionCreateCmd &) = default ;
    NeuronAppVersionCreateCmd& operator=(NeuronAppVersionCreateCmd &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accountId_ == nullptr
        && this->appEntry_ == nullptr && this->appId_ == nullptr && this->description_ == nullptr && this->envs_ == nullptr && this->featureDesc_ == nullptr
        && this->imageUrls_ == nullptr && this->instructionUrl_ == nullptr && this->manageType_ == nullptr && this->mobiId_ == nullptr && this->pbcs_ == nullptr
        && this->pluginList_ == nullptr && this->privateInfo_ == nullptr && this->scopes_ == nullptr && this->sidebar_ == nullptr && this->unbindEffect_ == nullptr
        && this->unbindReasons_ == nullptr && this->updatedFeature_ == nullptr && this->version_ == nullptr; };
    // accountId Field Functions 
    bool hasAccountId() const { return this->accountId_ != nullptr;};
    void deleteAccountId() { this->accountId_ = nullptr;};
    inline string getAccountId() const { DARABONBA_PTR_GET_DEFAULT(accountId_, "") };
    inline NeuronAppVersionCreateCmd& setAccountId(string accountId) { DARABONBA_PTR_SET_VALUE(accountId_, accountId) };


    // appEntry Field Functions 
    bool hasAppEntry() const { return this->appEntry_ != nullptr;};
    void deleteAppEntry() { this->appEntry_ = nullptr;};
    inline string getAppEntry() const { DARABONBA_PTR_GET_DEFAULT(appEntry_, "") };
    inline NeuronAppVersionCreateCmd& setAppEntry(string appEntry) { DARABONBA_PTR_SET_VALUE(appEntry_, appEntry) };


    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline int64_t getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, 0L) };
    inline NeuronAppVersionCreateCmd& setAppId(int64_t appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline NeuronAppVersionCreateCmd& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // envs Field Functions 
    bool hasEnvs() const { return this->envs_ != nullptr;};
    void deleteEnvs() { this->envs_ = nullptr;};
    inline const vector<string> & getEnvs() const { DARABONBA_PTR_GET_CONST(envs_, vector<string>) };
    inline vector<string> getEnvs() { DARABONBA_PTR_GET(envs_, vector<string>) };
    inline NeuronAppVersionCreateCmd& setEnvs(const vector<string> & envs) { DARABONBA_PTR_SET_VALUE(envs_, envs) };
    inline NeuronAppVersionCreateCmd& setEnvs(vector<string> && envs) { DARABONBA_PTR_SET_RVALUE(envs_, envs) };


    // featureDesc Field Functions 
    bool hasFeatureDesc() const { return this->featureDesc_ != nullptr;};
    void deleteFeatureDesc() { this->featureDesc_ = nullptr;};
    inline const vector<NeuronAppInfoContent> & getFeatureDesc() const { DARABONBA_PTR_GET_CONST(featureDesc_, vector<NeuronAppInfoContent>) };
    inline vector<NeuronAppInfoContent> getFeatureDesc() { DARABONBA_PTR_GET(featureDesc_, vector<NeuronAppInfoContent>) };
    inline NeuronAppVersionCreateCmd& setFeatureDesc(const vector<NeuronAppInfoContent> & featureDesc) { DARABONBA_PTR_SET_VALUE(featureDesc_, featureDesc) };
    inline NeuronAppVersionCreateCmd& setFeatureDesc(vector<NeuronAppInfoContent> && featureDesc) { DARABONBA_PTR_SET_RVALUE(featureDesc_, featureDesc) };


    // imageUrls Field Functions 
    bool hasImageUrls() const { return this->imageUrls_ != nullptr;};
    void deleteImageUrls() { this->imageUrls_ = nullptr;};
    inline const vector<string> & getImageUrls() const { DARABONBA_PTR_GET_CONST(imageUrls_, vector<string>) };
    inline vector<string> getImageUrls() { DARABONBA_PTR_GET(imageUrls_, vector<string>) };
    inline NeuronAppVersionCreateCmd& setImageUrls(const vector<string> & imageUrls) { DARABONBA_PTR_SET_VALUE(imageUrls_, imageUrls) };
    inline NeuronAppVersionCreateCmd& setImageUrls(vector<string> && imageUrls) { DARABONBA_PTR_SET_RVALUE(imageUrls_, imageUrls) };


    // instructionUrl Field Functions 
    bool hasInstructionUrl() const { return this->instructionUrl_ != nullptr;};
    void deleteInstructionUrl() { this->instructionUrl_ = nullptr;};
    inline string getInstructionUrl() const { DARABONBA_PTR_GET_DEFAULT(instructionUrl_, "") };
    inline NeuronAppVersionCreateCmd& setInstructionUrl(string instructionUrl) { DARABONBA_PTR_SET_VALUE(instructionUrl_, instructionUrl) };


    // manageType Field Functions 
    bool hasManageType() const { return this->manageType_ != nullptr;};
    void deleteManageType() { this->manageType_ = nullptr;};
    inline string getManageType() const { DARABONBA_PTR_GET_DEFAULT(manageType_, "") };
    inline NeuronAppVersionCreateCmd& setManageType(string manageType) { DARABONBA_PTR_SET_VALUE(manageType_, manageType) };


    // mobiId Field Functions 
    bool hasMobiId() const { return this->mobiId_ != nullptr;};
    void deleteMobiId() { this->mobiId_ = nullptr;};
    inline int64_t getMobiId() const { DARABONBA_PTR_GET_DEFAULT(mobiId_, 0L) };
    inline NeuronAppVersionCreateCmd& setMobiId(int64_t mobiId) { DARABONBA_PTR_SET_VALUE(mobiId_, mobiId) };


    // pbcs Field Functions 
    bool hasPbcs() const { return this->pbcs_ != nullptr;};
    void deletePbcs() { this->pbcs_ = nullptr;};
    inline const vector<int64_t> & getPbcs() const { DARABONBA_PTR_GET_CONST(pbcs_, vector<int64_t>) };
    inline vector<int64_t> getPbcs() { DARABONBA_PTR_GET(pbcs_, vector<int64_t>) };
    inline NeuronAppVersionCreateCmd& setPbcs(const vector<int64_t> & pbcs) { DARABONBA_PTR_SET_VALUE(pbcs_, pbcs) };
    inline NeuronAppVersionCreateCmd& setPbcs(vector<int64_t> && pbcs) { DARABONBA_PTR_SET_RVALUE(pbcs_, pbcs) };


    // pluginList Field Functions 
    bool hasPluginList() const { return this->pluginList_ != nullptr;};
    void deletePluginList() { this->pluginList_ = nullptr;};
    inline const vector<AppPluginInfo> & getPluginList() const { DARABONBA_PTR_GET_CONST(pluginList_, vector<AppPluginInfo>) };
    inline vector<AppPluginInfo> getPluginList() { DARABONBA_PTR_GET(pluginList_, vector<AppPluginInfo>) };
    inline NeuronAppVersionCreateCmd& setPluginList(const vector<AppPluginInfo> & pluginList) { DARABONBA_PTR_SET_VALUE(pluginList_, pluginList) };
    inline NeuronAppVersionCreateCmd& setPluginList(vector<AppPluginInfo> && pluginList) { DARABONBA_PTR_SET_RVALUE(pluginList_, pluginList) };


    // privateInfo Field Functions 
    bool hasPrivateInfo() const { return this->privateInfo_ != nullptr;};
    void deletePrivateInfo() { this->privateInfo_ = nullptr;};
    inline const vector<string> & getPrivateInfo() const { DARABONBA_PTR_GET_CONST(privateInfo_, vector<string>) };
    inline vector<string> getPrivateInfo() { DARABONBA_PTR_GET(privateInfo_, vector<string>) };
    inline NeuronAppVersionCreateCmd& setPrivateInfo(const vector<string> & privateInfo) { DARABONBA_PTR_SET_VALUE(privateInfo_, privateInfo) };
    inline NeuronAppVersionCreateCmd& setPrivateInfo(vector<string> && privateInfo) { DARABONBA_PTR_SET_RVALUE(privateInfo_, privateInfo) };


    // scopes Field Functions 
    bool hasScopes() const { return this->scopes_ != nullptr;};
    void deleteScopes() { this->scopes_ = nullptr;};
    inline const vector<string> & getScopes() const { DARABONBA_PTR_GET_CONST(scopes_, vector<string>) };
    inline vector<string> getScopes() { DARABONBA_PTR_GET(scopes_, vector<string>) };
    inline NeuronAppVersionCreateCmd& setScopes(const vector<string> & scopes) { DARABONBA_PTR_SET_VALUE(scopes_, scopes) };
    inline NeuronAppVersionCreateCmd& setScopes(vector<string> && scopes) { DARABONBA_PTR_SET_RVALUE(scopes_, scopes) };


    // sidebar Field Functions 
    bool hasSidebar() const { return this->sidebar_ != nullptr;};
    void deleteSidebar() { this->sidebar_ = nullptr;};
    inline string getSidebar() const { DARABONBA_PTR_GET_DEFAULT(sidebar_, "") };
    inline NeuronAppVersionCreateCmd& setSidebar(string sidebar) { DARABONBA_PTR_SET_VALUE(sidebar_, sidebar) };


    // unbindEffect Field Functions 
    bool hasUnbindEffect() const { return this->unbindEffect_ != nullptr;};
    void deleteUnbindEffect() { this->unbindEffect_ = nullptr;};
    inline string getUnbindEffect() const { DARABONBA_PTR_GET_DEFAULT(unbindEffect_, "") };
    inline NeuronAppVersionCreateCmd& setUnbindEffect(string unbindEffect) { DARABONBA_PTR_SET_VALUE(unbindEffect_, unbindEffect) };


    // unbindReasons Field Functions 
    bool hasUnbindReasons() const { return this->unbindReasons_ != nullptr;};
    void deleteUnbindReasons() { this->unbindReasons_ = nullptr;};
    inline const vector<string> & getUnbindReasons() const { DARABONBA_PTR_GET_CONST(unbindReasons_, vector<string>) };
    inline vector<string> getUnbindReasons() { DARABONBA_PTR_GET(unbindReasons_, vector<string>) };
    inline NeuronAppVersionCreateCmd& setUnbindReasons(const vector<string> & unbindReasons) { DARABONBA_PTR_SET_VALUE(unbindReasons_, unbindReasons) };
    inline NeuronAppVersionCreateCmd& setUnbindReasons(vector<string> && unbindReasons) { DARABONBA_PTR_SET_RVALUE(unbindReasons_, unbindReasons) };


    // updatedFeature Field Functions 
    bool hasUpdatedFeature() const { return this->updatedFeature_ != nullptr;};
    void deleteUpdatedFeature() { this->updatedFeature_ = nullptr;};
    inline const vector<NeuronAppInfoContent> & getUpdatedFeature() const { DARABONBA_PTR_GET_CONST(updatedFeature_, vector<NeuronAppInfoContent>) };
    inline vector<NeuronAppInfoContent> getUpdatedFeature() { DARABONBA_PTR_GET(updatedFeature_, vector<NeuronAppInfoContent>) };
    inline NeuronAppVersionCreateCmd& setUpdatedFeature(const vector<NeuronAppInfoContent> & updatedFeature) { DARABONBA_PTR_SET_VALUE(updatedFeature_, updatedFeature) };
    inline NeuronAppVersionCreateCmd& setUpdatedFeature(vector<NeuronAppInfoContent> && updatedFeature) { DARABONBA_PTR_SET_RVALUE(updatedFeature_, updatedFeature) };


    // version Field Functions 
    bool hasVersion() const { return this->version_ != nullptr;};
    void deleteVersion() { this->version_ = nullptr;};
    inline string getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
    inline NeuronAppVersionCreateCmd& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


  protected:
    shared_ptr<string> accountId_ {};
    shared_ptr<string> appEntry_ {};
    // This parameter is required.
    shared_ptr<int64_t> appId_ {};
    shared_ptr<string> description_ {};
    shared_ptr<vector<string>> envs_ {};
    shared_ptr<vector<NeuronAppInfoContent>> featureDesc_ {};
    shared_ptr<vector<string>> imageUrls_ {};
    shared_ptr<string> instructionUrl_ {};
    shared_ptr<string> manageType_ {};
    shared_ptr<int64_t> mobiId_ {};
    shared_ptr<vector<int64_t>> pbcs_ {};
    shared_ptr<vector<AppPluginInfo>> pluginList_ {};
    shared_ptr<vector<string>> privateInfo_ {};
    shared_ptr<vector<string>> scopes_ {};
    shared_ptr<string> sidebar_ {};
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
