// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESAMPLEDATAREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATESAMPLEDATAREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Xtee20210910
{
namespace Models
{
  class CreateSampleDataRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateSampleDataRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(encryptType, encryptType_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(regId, regId_);
      DARABONBA_PTR_TO_JSON(riskValue, riskValue_);
      DARABONBA_PTR_TO_JSON(scene, scene_);
      DARABONBA_PTR_TO_JSON(storePath, storePath_);
      DARABONBA_PTR_TO_JSON(storeType, storeType_);
    };
    friend void from_json(const Darabonba::Json& j, CreateSampleDataRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(encryptType, encryptType_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(regId, regId_);
      DARABONBA_PTR_FROM_JSON(riskValue, riskValue_);
      DARABONBA_PTR_FROM_JSON(scene, scene_);
      DARABONBA_PTR_FROM_JSON(storePath, storePath_);
      DARABONBA_PTR_FROM_JSON(storeType, storeType_);
    };
    CreateSampleDataRequest() = default ;
    CreateSampleDataRequest(const CreateSampleDataRequest &) = default ;
    CreateSampleDataRequest(CreateSampleDataRequest &&) = default ;
    CreateSampleDataRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateSampleDataRequest() = default ;
    CreateSampleDataRequest& operator=(const CreateSampleDataRequest &) = default ;
    CreateSampleDataRequest& operator=(CreateSampleDataRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->lang_ == nullptr
        && return this->description_ == nullptr && return this->encryptType_ == nullptr && return this->name_ == nullptr && return this->regId_ == nullptr && return this->riskValue_ == nullptr
        && return this->scene_ == nullptr && return this->storePath_ == nullptr && return this->storeType_ == nullptr; };
    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string lang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline CreateSampleDataRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateSampleDataRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // encryptType Field Functions 
    bool hasEncryptType() const { return this->encryptType_ != nullptr;};
    void deleteEncryptType() { this->encryptType_ = nullptr;};
    inline string encryptType() const { DARABONBA_PTR_GET_DEFAULT(encryptType_, "") };
    inline CreateSampleDataRequest& setEncryptType(string encryptType) { DARABONBA_PTR_SET_VALUE(encryptType_, encryptType) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateSampleDataRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // regId Field Functions 
    bool hasRegId() const { return this->regId_ != nullptr;};
    void deleteRegId() { this->regId_ = nullptr;};
    inline string regId() const { DARABONBA_PTR_GET_DEFAULT(regId_, "") };
    inline CreateSampleDataRequest& setRegId(string regId) { DARABONBA_PTR_SET_VALUE(regId_, regId) };


    // riskValue Field Functions 
    bool hasRiskValue() const { return this->riskValue_ != nullptr;};
    void deleteRiskValue() { this->riskValue_ = nullptr;};
    inline string riskValue() const { DARABONBA_PTR_GET_DEFAULT(riskValue_, "") };
    inline CreateSampleDataRequest& setRiskValue(string riskValue) { DARABONBA_PTR_SET_VALUE(riskValue_, riskValue) };


    // scene Field Functions 
    bool hasScene() const { return this->scene_ != nullptr;};
    void deleteScene() { this->scene_ = nullptr;};
    inline string scene() const { DARABONBA_PTR_GET_DEFAULT(scene_, "") };
    inline CreateSampleDataRequest& setScene(string scene) { DARABONBA_PTR_SET_VALUE(scene_, scene) };


    // storePath Field Functions 
    bool hasStorePath() const { return this->storePath_ != nullptr;};
    void deleteStorePath() { this->storePath_ = nullptr;};
    inline string storePath() const { DARABONBA_PTR_GET_DEFAULT(storePath_, "") };
    inline CreateSampleDataRequest& setStorePath(string storePath) { DARABONBA_PTR_SET_VALUE(storePath_, storePath) };


    // storeType Field Functions 
    bool hasStoreType() const { return this->storeType_ != nullptr;};
    void deleteStoreType() { this->storeType_ = nullptr;};
    inline string storeType() const { DARABONBA_PTR_GET_DEFAULT(storeType_, "") };
    inline CreateSampleDataRequest& setStoreType(string storeType) { DARABONBA_PTR_SET_VALUE(storeType_, storeType) };


  protected:
    // Set the language type for requests and received messages, default value is **zh**. Values:
    // - **zh**: Chinese
    // - **en**: English
    std::shared_ptr<string> lang_ = nullptr;
    // Description.
    std::shared_ptr<string> description_ = nullptr;
    // Encryption type
    std::shared_ptr<string> encryptType_ = nullptr;
    // Name
    std::shared_ptr<string> name_ = nullptr;
    // Region code
    std::shared_ptr<string> regId_ = nullptr;
    // Specified risk value
    std::shared_ptr<string> riskValue_ = nullptr;
    // Scene
    std::shared_ptr<string> scene_ = nullptr;
    // Storage path
    std::shared_ptr<string> storePath_ = nullptr;
    // Storage type
    std::shared_ptr<string> storeType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Xtee20210910
#endif
