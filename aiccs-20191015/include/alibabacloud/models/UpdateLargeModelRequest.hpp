// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATELARGEMODELREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATELARGEMODELREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aiccs20191015
{
namespace Models
{
  class UpdateLargeModelRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateLargeModelRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AuthCode, authCode_);
      DARABONBA_PTR_TO_JSON(BaseModel, baseModel_);
      DARABONBA_PTR_TO_JSON(ModelCode, modelCode_);
      DARABONBA_PTR_TO_JSON(ModelName, modelName_);
      DARABONBA_PTR_TO_JSON(ModelUrl, modelUrl_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(Temperature, temperature_);
      DARABONBA_PTR_TO_JSON(TopK, topK_);
      DARABONBA_PTR_TO_JSON(TopP, topP_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateLargeModelRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AuthCode, authCode_);
      DARABONBA_PTR_FROM_JSON(BaseModel, baseModel_);
      DARABONBA_PTR_FROM_JSON(ModelCode, modelCode_);
      DARABONBA_PTR_FROM_JSON(ModelName, modelName_);
      DARABONBA_PTR_FROM_JSON(ModelUrl, modelUrl_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(Temperature, temperature_);
      DARABONBA_PTR_FROM_JSON(TopK, topK_);
      DARABONBA_PTR_FROM_JSON(TopP, topP_);
    };
    UpdateLargeModelRequest() = default ;
    UpdateLargeModelRequest(const UpdateLargeModelRequest &) = default ;
    UpdateLargeModelRequest(UpdateLargeModelRequest &&) = default ;
    UpdateLargeModelRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateLargeModelRequest() = default ;
    UpdateLargeModelRequest& operator=(const UpdateLargeModelRequest &) = default ;
    UpdateLargeModelRequest& operator=(UpdateLargeModelRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->authCode_ == nullptr
        && this->baseModel_ == nullptr && this->modelCode_ == nullptr && this->modelName_ == nullptr && this->modelUrl_ == nullptr && this->ownerId_ == nullptr
        && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr && this->temperature_ == nullptr && this->topK_ == nullptr && this->topP_ == nullptr; };
    // authCode Field Functions 
    bool hasAuthCode() const { return this->authCode_ != nullptr;};
    void deleteAuthCode() { this->authCode_ = nullptr;};
    inline string getAuthCode() const { DARABONBA_PTR_GET_DEFAULT(authCode_, "") };
    inline UpdateLargeModelRequest& setAuthCode(string authCode) { DARABONBA_PTR_SET_VALUE(authCode_, authCode) };


    // baseModel Field Functions 
    bool hasBaseModel() const { return this->baseModel_ != nullptr;};
    void deleteBaseModel() { this->baseModel_ = nullptr;};
    inline const vector<string> & getBaseModel() const { DARABONBA_PTR_GET_CONST(baseModel_, vector<string>) };
    inline vector<string> getBaseModel() { DARABONBA_PTR_GET(baseModel_, vector<string>) };
    inline UpdateLargeModelRequest& setBaseModel(const vector<string> & baseModel) { DARABONBA_PTR_SET_VALUE(baseModel_, baseModel) };
    inline UpdateLargeModelRequest& setBaseModel(vector<string> && baseModel) { DARABONBA_PTR_SET_RVALUE(baseModel_, baseModel) };


    // modelCode Field Functions 
    bool hasModelCode() const { return this->modelCode_ != nullptr;};
    void deleteModelCode() { this->modelCode_ = nullptr;};
    inline string getModelCode() const { DARABONBA_PTR_GET_DEFAULT(modelCode_, "") };
    inline UpdateLargeModelRequest& setModelCode(string modelCode) { DARABONBA_PTR_SET_VALUE(modelCode_, modelCode) };


    // modelName Field Functions 
    bool hasModelName() const { return this->modelName_ != nullptr;};
    void deleteModelName() { this->modelName_ = nullptr;};
    inline string getModelName() const { DARABONBA_PTR_GET_DEFAULT(modelName_, "") };
    inline UpdateLargeModelRequest& setModelName(string modelName) { DARABONBA_PTR_SET_VALUE(modelName_, modelName) };


    // modelUrl Field Functions 
    bool hasModelUrl() const { return this->modelUrl_ != nullptr;};
    void deleteModelUrl() { this->modelUrl_ = nullptr;};
    inline string getModelUrl() const { DARABONBA_PTR_GET_DEFAULT(modelUrl_, "") };
    inline UpdateLargeModelRequest& setModelUrl(string modelUrl) { DARABONBA_PTR_SET_VALUE(modelUrl_, modelUrl) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline UpdateLargeModelRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline UpdateLargeModelRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline UpdateLargeModelRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // temperature Field Functions 
    bool hasTemperature() const { return this->temperature_ != nullptr;};
    void deleteTemperature() { this->temperature_ = nullptr;};
    inline double getTemperature() const { DARABONBA_PTR_GET_DEFAULT(temperature_, 0.0) };
    inline UpdateLargeModelRequest& setTemperature(double temperature) { DARABONBA_PTR_SET_VALUE(temperature_, temperature) };


    // topK Field Functions 
    bool hasTopK() const { return this->topK_ != nullptr;};
    void deleteTopK() { this->topK_ = nullptr;};
    inline int64_t getTopK() const { DARABONBA_PTR_GET_DEFAULT(topK_, 0L) };
    inline UpdateLargeModelRequest& setTopK(int64_t topK) { DARABONBA_PTR_SET_VALUE(topK_, topK) };


    // topP Field Functions 
    bool hasTopP() const { return this->topP_ != nullptr;};
    void deleteTopP() { this->topP_ = nullptr;};
    inline double getTopP() const { DARABONBA_PTR_GET_DEFAULT(topP_, 0.0) };
    inline UpdateLargeModelRequest& setTopP(double topP) { DARABONBA_PTR_SET_VALUE(topP_, topP) };


  protected:
    // The authorization code.
    shared_ptr<string> authCode_ {};
    // A list of base models.
    shared_ptr<vector<string>> baseModel_ {};
    // The model code.
    shared_ptr<string> modelCode_ {};
    // The model name.
    shared_ptr<string> modelName_ {};
    // The model URL.
    shared_ptr<string> modelUrl_ {};
    shared_ptr<int64_t> ownerId_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    // Controls the randomness of the model\\"s output. A higher value increases randomness, and a lower value makes the output more deterministic.
    shared_ptr<double> temperature_ {};
    // Restricts token selection to the top k most probable tokens.
    shared_ptr<int64_t> topK_ {};
    // Controls output diversity by using nucleus sampling. It defines a cumulative probability threshold for token selection, considering only the most likely tokens.
    shared_ptr<double> topP_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aiccs20191015
#endif
