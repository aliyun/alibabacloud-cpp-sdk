// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEFPSHOTDBRESPONSEBODYFPSHOTDB_HPP_
#define ALIBABACLOUD_MODELS_CREATEFPSHOTDBRESPONSEBODYFPSHOTDB_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mts20140618
{
namespace Models
{
  class CreateFpShotDBResponseBodyFpShotDB : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateFpShotDBResponseBodyFpShotDB& obj) { 
      DARABONBA_PTR_TO_JSON(Config, config_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(FpDBId, fpDBId_);
      DARABONBA_PTR_TO_JSON(ModelId, modelId_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(State, state_);
    };
    friend void from_json(const Darabonba::Json& j, CreateFpShotDBResponseBodyFpShotDB& obj) { 
      DARABONBA_PTR_FROM_JSON(Config, config_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(FpDBId, fpDBId_);
      DARABONBA_PTR_FROM_JSON(ModelId, modelId_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(State, state_);
    };
    CreateFpShotDBResponseBodyFpShotDB() = default ;
    CreateFpShotDBResponseBodyFpShotDB(const CreateFpShotDBResponseBodyFpShotDB &) = default ;
    CreateFpShotDBResponseBodyFpShotDB(CreateFpShotDBResponseBodyFpShotDB &&) = default ;
    CreateFpShotDBResponseBodyFpShotDB(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateFpShotDBResponseBodyFpShotDB() = default ;
    CreateFpShotDBResponseBodyFpShotDB& operator=(const CreateFpShotDBResponseBodyFpShotDB &) = default ;
    CreateFpShotDBResponseBodyFpShotDB& operator=(CreateFpShotDBResponseBodyFpShotDB &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->config_ == nullptr
        && return this->description_ == nullptr && return this->fpDBId_ == nullptr && return this->modelId_ == nullptr && return this->name_ == nullptr && return this->state_ == nullptr; };
    // config Field Functions 
    bool hasConfig() const { return this->config_ != nullptr;};
    void deleteConfig() { this->config_ = nullptr;};
    inline string config() const { DARABONBA_PTR_GET_DEFAULT(config_, "") };
    inline CreateFpShotDBResponseBodyFpShotDB& setConfig(string config) { DARABONBA_PTR_SET_VALUE(config_, config) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateFpShotDBResponseBodyFpShotDB& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // fpDBId Field Functions 
    bool hasFpDBId() const { return this->fpDBId_ != nullptr;};
    void deleteFpDBId() { this->fpDBId_ = nullptr;};
    inline string fpDBId() const { DARABONBA_PTR_GET_DEFAULT(fpDBId_, "") };
    inline CreateFpShotDBResponseBodyFpShotDB& setFpDBId(string fpDBId) { DARABONBA_PTR_SET_VALUE(fpDBId_, fpDBId) };


    // modelId Field Functions 
    bool hasModelId() const { return this->modelId_ != nullptr;};
    void deleteModelId() { this->modelId_ = nullptr;};
    inline int32_t modelId() const { DARABONBA_PTR_GET_DEFAULT(modelId_, 0) };
    inline CreateFpShotDBResponseBodyFpShotDB& setModelId(int32_t modelId) { DARABONBA_PTR_SET_VALUE(modelId_, modelId) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateFpShotDBResponseBodyFpShotDB& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // state Field Functions 
    bool hasState() const { return this->state_ != nullptr;};
    void deleteState() { this->state_ = nullptr;};
    inline string state() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
    inline CreateFpShotDBResponseBodyFpShotDB& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


  protected:
    // The configurations of the media fingerprint library.
    std::shared_ptr<string> config_ = nullptr;
    // The description of the media fingerprint library.
    std::shared_ptr<string> description_ = nullptr;
    // The ID of the media fingerprint library. We recommend that you keep this ID for subsequent operation calls.
    std::shared_ptr<string> fpDBId_ = nullptr;
    // The model ID of the media fingerprint library.
    std::shared_ptr<int32_t> modelId_ = nullptr;
    // The name of the media fingerprint library.
    std::shared_ptr<string> name_ = nullptr;
    // The status of the media fingerprint library. After the media fingerprint library is created, it enters the **offline** state. After the media fingerprint library is processed at the backend, it enters the **active** state.
    std::shared_ptr<string> state_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mts20140618
#endif
