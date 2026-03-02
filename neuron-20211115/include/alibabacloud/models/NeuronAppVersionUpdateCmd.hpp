// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_NEURONAPPVERSIONUPDATECMD_HPP_
#define ALIBABACLOUD_MODELS_NEURONAPPVERSIONUPDATECMD_HPP_
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
  class NeuronAppVersionUpdateCmd : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const NeuronAppVersionUpdateCmd& obj) { 
      DARABONBA_PTR_TO_JSON(appEntry, appEntry_);
      DARABONBA_PTR_TO_JSON(desc, desc_);
      DARABONBA_PTR_TO_JSON(envs, envs_);
      DARABONBA_PTR_TO_JSON(featureDesc, featureDesc_);
      DARABONBA_PTR_TO_JSON(id, id_);
      DARABONBA_PTR_TO_JSON(imageUrls, imageUrls_);
      DARABONBA_PTR_TO_JSON(instructionUrl, instructionUrl_);
      DARABONBA_PTR_TO_JSON(manageType, manageType_);
      DARABONBA_PTR_TO_JSON(mobiId, mobiId_);
      DARABONBA_PTR_TO_JSON(pbcs, pbcs_);
      DARABONBA_PTR_TO_JSON(privateInfo, privateInfo_);
      DARABONBA_PTR_TO_JSON(scopes, scopes_);
      DARABONBA_PTR_TO_JSON(sidebar, sidebar_);
      DARABONBA_PTR_TO_JSON(status, status_);
      DARABONBA_PTR_TO_JSON(unbindEffect, unbindEffect_);
      DARABONBA_PTR_TO_JSON(unbindReasons, unbindReasons_);
      DARABONBA_PTR_TO_JSON(updatedFeature, updatedFeature_);
    };
    friend void from_json(const Darabonba::Json& j, NeuronAppVersionUpdateCmd& obj) { 
      DARABONBA_PTR_FROM_JSON(appEntry, appEntry_);
      DARABONBA_PTR_FROM_JSON(desc, desc_);
      DARABONBA_PTR_FROM_JSON(envs, envs_);
      DARABONBA_PTR_FROM_JSON(featureDesc, featureDesc_);
      DARABONBA_PTR_FROM_JSON(id, id_);
      DARABONBA_PTR_FROM_JSON(imageUrls, imageUrls_);
      DARABONBA_PTR_FROM_JSON(instructionUrl, instructionUrl_);
      DARABONBA_PTR_FROM_JSON(manageType, manageType_);
      DARABONBA_PTR_FROM_JSON(mobiId, mobiId_);
      DARABONBA_PTR_FROM_JSON(pbcs, pbcs_);
      DARABONBA_PTR_FROM_JSON(privateInfo, privateInfo_);
      DARABONBA_PTR_FROM_JSON(scopes, scopes_);
      DARABONBA_PTR_FROM_JSON(sidebar, sidebar_);
      DARABONBA_PTR_FROM_JSON(status, status_);
      DARABONBA_PTR_FROM_JSON(unbindEffect, unbindEffect_);
      DARABONBA_PTR_FROM_JSON(unbindReasons, unbindReasons_);
      DARABONBA_PTR_FROM_JSON(updatedFeature, updatedFeature_);
    };
    NeuronAppVersionUpdateCmd() = default ;
    NeuronAppVersionUpdateCmd(const NeuronAppVersionUpdateCmd &) = default ;
    NeuronAppVersionUpdateCmd(NeuronAppVersionUpdateCmd &&) = default ;
    NeuronAppVersionUpdateCmd(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~NeuronAppVersionUpdateCmd() = default ;
    NeuronAppVersionUpdateCmd& operator=(const NeuronAppVersionUpdateCmd &) = default ;
    NeuronAppVersionUpdateCmd& operator=(NeuronAppVersionUpdateCmd &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appEntry_ == nullptr
        && this->desc_ == nullptr && this->envs_ == nullptr && this->featureDesc_ == nullptr && this->id_ == nullptr && this->imageUrls_ == nullptr
        && this->instructionUrl_ == nullptr && this->manageType_ == nullptr && this->mobiId_ == nullptr && this->pbcs_ == nullptr && this->privateInfo_ == nullptr
        && this->scopes_ == nullptr && this->sidebar_ == nullptr && this->status_ == nullptr && this->unbindEffect_ == nullptr && this->unbindReasons_ == nullptr
        && this->updatedFeature_ == nullptr; };
    // appEntry Field Functions 
    bool hasAppEntry() const { return this->appEntry_ != nullptr;};
    void deleteAppEntry() { this->appEntry_ = nullptr;};
    inline string getAppEntry() const { DARABONBA_PTR_GET_DEFAULT(appEntry_, "") };
    inline NeuronAppVersionUpdateCmd& setAppEntry(string appEntry) { DARABONBA_PTR_SET_VALUE(appEntry_, appEntry) };


    // desc Field Functions 
    bool hasDesc() const { return this->desc_ != nullptr;};
    void deleteDesc() { this->desc_ = nullptr;};
    inline string getDesc() const { DARABONBA_PTR_GET_DEFAULT(desc_, "") };
    inline NeuronAppVersionUpdateCmd& setDesc(string desc) { DARABONBA_PTR_SET_VALUE(desc_, desc) };


    // envs Field Functions 
    bool hasEnvs() const { return this->envs_ != nullptr;};
    void deleteEnvs() { this->envs_ = nullptr;};
    inline const vector<string> & getEnvs() const { DARABONBA_PTR_GET_CONST(envs_, vector<string>) };
    inline vector<string> getEnvs() { DARABONBA_PTR_GET(envs_, vector<string>) };
    inline NeuronAppVersionUpdateCmd& setEnvs(const vector<string> & envs) { DARABONBA_PTR_SET_VALUE(envs_, envs) };
    inline NeuronAppVersionUpdateCmd& setEnvs(vector<string> && envs) { DARABONBA_PTR_SET_RVALUE(envs_, envs) };


    // featureDesc Field Functions 
    bool hasFeatureDesc() const { return this->featureDesc_ != nullptr;};
    void deleteFeatureDesc() { this->featureDesc_ = nullptr;};
    inline const vector<NeuronAppInfoContent> & getFeatureDesc() const { DARABONBA_PTR_GET_CONST(featureDesc_, vector<NeuronAppInfoContent>) };
    inline vector<NeuronAppInfoContent> getFeatureDesc() { DARABONBA_PTR_GET(featureDesc_, vector<NeuronAppInfoContent>) };
    inline NeuronAppVersionUpdateCmd& setFeatureDesc(const vector<NeuronAppInfoContent> & featureDesc) { DARABONBA_PTR_SET_VALUE(featureDesc_, featureDesc) };
    inline NeuronAppVersionUpdateCmd& setFeatureDesc(vector<NeuronAppInfoContent> && featureDesc) { DARABONBA_PTR_SET_RVALUE(featureDesc_, featureDesc) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline NeuronAppVersionUpdateCmd& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // imageUrls Field Functions 
    bool hasImageUrls() const { return this->imageUrls_ != nullptr;};
    void deleteImageUrls() { this->imageUrls_ = nullptr;};
    inline const vector<string> & getImageUrls() const { DARABONBA_PTR_GET_CONST(imageUrls_, vector<string>) };
    inline vector<string> getImageUrls() { DARABONBA_PTR_GET(imageUrls_, vector<string>) };
    inline NeuronAppVersionUpdateCmd& setImageUrls(const vector<string> & imageUrls) { DARABONBA_PTR_SET_VALUE(imageUrls_, imageUrls) };
    inline NeuronAppVersionUpdateCmd& setImageUrls(vector<string> && imageUrls) { DARABONBA_PTR_SET_RVALUE(imageUrls_, imageUrls) };


    // instructionUrl Field Functions 
    bool hasInstructionUrl() const { return this->instructionUrl_ != nullptr;};
    void deleteInstructionUrl() { this->instructionUrl_ = nullptr;};
    inline string getInstructionUrl() const { DARABONBA_PTR_GET_DEFAULT(instructionUrl_, "") };
    inline NeuronAppVersionUpdateCmd& setInstructionUrl(string instructionUrl) { DARABONBA_PTR_SET_VALUE(instructionUrl_, instructionUrl) };


    // manageType Field Functions 
    bool hasManageType() const { return this->manageType_ != nullptr;};
    void deleteManageType() { this->manageType_ = nullptr;};
    inline string getManageType() const { DARABONBA_PTR_GET_DEFAULT(manageType_, "") };
    inline NeuronAppVersionUpdateCmd& setManageType(string manageType) { DARABONBA_PTR_SET_VALUE(manageType_, manageType) };


    // mobiId Field Functions 
    bool hasMobiId() const { return this->mobiId_ != nullptr;};
    void deleteMobiId() { this->mobiId_ = nullptr;};
    inline int64_t getMobiId() const { DARABONBA_PTR_GET_DEFAULT(mobiId_, 0L) };
    inline NeuronAppVersionUpdateCmd& setMobiId(int64_t mobiId) { DARABONBA_PTR_SET_VALUE(mobiId_, mobiId) };


    // pbcs Field Functions 
    bool hasPbcs() const { return this->pbcs_ != nullptr;};
    void deletePbcs() { this->pbcs_ = nullptr;};
    inline const vector<int64_t> & getPbcs() const { DARABONBA_PTR_GET_CONST(pbcs_, vector<int64_t>) };
    inline vector<int64_t> getPbcs() { DARABONBA_PTR_GET(pbcs_, vector<int64_t>) };
    inline NeuronAppVersionUpdateCmd& setPbcs(const vector<int64_t> & pbcs) { DARABONBA_PTR_SET_VALUE(pbcs_, pbcs) };
    inline NeuronAppVersionUpdateCmd& setPbcs(vector<int64_t> && pbcs) { DARABONBA_PTR_SET_RVALUE(pbcs_, pbcs) };


    // privateInfo Field Functions 
    bool hasPrivateInfo() const { return this->privateInfo_ != nullptr;};
    void deletePrivateInfo() { this->privateInfo_ = nullptr;};
    inline const vector<string> & getPrivateInfo() const { DARABONBA_PTR_GET_CONST(privateInfo_, vector<string>) };
    inline vector<string> getPrivateInfo() { DARABONBA_PTR_GET(privateInfo_, vector<string>) };
    inline NeuronAppVersionUpdateCmd& setPrivateInfo(const vector<string> & privateInfo) { DARABONBA_PTR_SET_VALUE(privateInfo_, privateInfo) };
    inline NeuronAppVersionUpdateCmd& setPrivateInfo(vector<string> && privateInfo) { DARABONBA_PTR_SET_RVALUE(privateInfo_, privateInfo) };


    // scopes Field Functions 
    bool hasScopes() const { return this->scopes_ != nullptr;};
    void deleteScopes() { this->scopes_ = nullptr;};
    inline const vector<string> & getScopes() const { DARABONBA_PTR_GET_CONST(scopes_, vector<string>) };
    inline vector<string> getScopes() { DARABONBA_PTR_GET(scopes_, vector<string>) };
    inline NeuronAppVersionUpdateCmd& setScopes(const vector<string> & scopes) { DARABONBA_PTR_SET_VALUE(scopes_, scopes) };
    inline NeuronAppVersionUpdateCmd& setScopes(vector<string> && scopes) { DARABONBA_PTR_SET_RVALUE(scopes_, scopes) };


    // sidebar Field Functions 
    bool hasSidebar() const { return this->sidebar_ != nullptr;};
    void deleteSidebar() { this->sidebar_ = nullptr;};
    inline string getSidebar() const { DARABONBA_PTR_GET_DEFAULT(sidebar_, "") };
    inline NeuronAppVersionUpdateCmd& setSidebar(string sidebar) { DARABONBA_PTR_SET_VALUE(sidebar_, sidebar) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline NeuronAppVersionUpdateCmd& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // unbindEffect Field Functions 
    bool hasUnbindEffect() const { return this->unbindEffect_ != nullptr;};
    void deleteUnbindEffect() { this->unbindEffect_ = nullptr;};
    inline string getUnbindEffect() const { DARABONBA_PTR_GET_DEFAULT(unbindEffect_, "") };
    inline NeuronAppVersionUpdateCmd& setUnbindEffect(string unbindEffect) { DARABONBA_PTR_SET_VALUE(unbindEffect_, unbindEffect) };


    // unbindReasons Field Functions 
    bool hasUnbindReasons() const { return this->unbindReasons_ != nullptr;};
    void deleteUnbindReasons() { this->unbindReasons_ = nullptr;};
    inline const vector<string> & getUnbindReasons() const { DARABONBA_PTR_GET_CONST(unbindReasons_, vector<string>) };
    inline vector<string> getUnbindReasons() { DARABONBA_PTR_GET(unbindReasons_, vector<string>) };
    inline NeuronAppVersionUpdateCmd& setUnbindReasons(const vector<string> & unbindReasons) { DARABONBA_PTR_SET_VALUE(unbindReasons_, unbindReasons) };
    inline NeuronAppVersionUpdateCmd& setUnbindReasons(vector<string> && unbindReasons) { DARABONBA_PTR_SET_RVALUE(unbindReasons_, unbindReasons) };


    // updatedFeature Field Functions 
    bool hasUpdatedFeature() const { return this->updatedFeature_ != nullptr;};
    void deleteUpdatedFeature() { this->updatedFeature_ = nullptr;};
    inline const vector<NeuronAppInfoContent> & getUpdatedFeature() const { DARABONBA_PTR_GET_CONST(updatedFeature_, vector<NeuronAppInfoContent>) };
    inline vector<NeuronAppInfoContent> getUpdatedFeature() { DARABONBA_PTR_GET(updatedFeature_, vector<NeuronAppInfoContent>) };
    inline NeuronAppVersionUpdateCmd& setUpdatedFeature(const vector<NeuronAppInfoContent> & updatedFeature) { DARABONBA_PTR_SET_VALUE(updatedFeature_, updatedFeature) };
    inline NeuronAppVersionUpdateCmd& setUpdatedFeature(vector<NeuronAppInfoContent> && updatedFeature) { DARABONBA_PTR_SET_RVALUE(updatedFeature_, updatedFeature) };


  protected:
    shared_ptr<string> appEntry_ {};
    shared_ptr<string> desc_ {};
    shared_ptr<vector<string>> envs_ {};
    shared_ptr<vector<NeuronAppInfoContent>> featureDesc_ {};
    // This parameter is required.
    shared_ptr<int64_t> id_ {};
    shared_ptr<vector<string>> imageUrls_ {};
    shared_ptr<string> instructionUrl_ {};
    shared_ptr<string> manageType_ {};
    shared_ptr<int64_t> mobiId_ {};
    shared_ptr<vector<int64_t>> pbcs_ {};
    shared_ptr<vector<string>> privateInfo_ {};
    shared_ptr<vector<string>> scopes_ {};
    shared_ptr<string> sidebar_ {};
    shared_ptr<string> status_ {};
    shared_ptr<string> unbindEffect_ {};
    shared_ptr<vector<string>> unbindReasons_ {};
    shared_ptr<vector<NeuronAppInfoContent>> updatedFeature_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Neuron20211115
#endif
