// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEFPSHOTDBRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEFPSHOTDBRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mts20140618
{
namespace Models
{
  class CreateFpShotDBResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateFpShotDBResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(FpShotDB, fpShotDB_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateFpShotDBResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(FpShotDB, fpShotDB_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CreateFpShotDBResponseBody() = default ;
    CreateFpShotDBResponseBody(const CreateFpShotDBResponseBody &) = default ;
    CreateFpShotDBResponseBody(CreateFpShotDBResponseBody &&) = default ;
    CreateFpShotDBResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateFpShotDBResponseBody() = default ;
    CreateFpShotDBResponseBody& operator=(const CreateFpShotDBResponseBody &) = default ;
    CreateFpShotDBResponseBody& operator=(CreateFpShotDBResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class FpShotDB : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const FpShotDB& obj) { 
        DARABONBA_PTR_TO_JSON(Config, config_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(FpDBId, fpDBId_);
        DARABONBA_PTR_TO_JSON(ModelId, modelId_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(State, state_);
      };
      friend void from_json(const Darabonba::Json& j, FpShotDB& obj) { 
        DARABONBA_PTR_FROM_JSON(Config, config_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(FpDBId, fpDBId_);
        DARABONBA_PTR_FROM_JSON(ModelId, modelId_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(State, state_);
      };
      FpShotDB() = default ;
      FpShotDB(const FpShotDB &) = default ;
      FpShotDB(FpShotDB &&) = default ;
      FpShotDB(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~FpShotDB() = default ;
      FpShotDB& operator=(const FpShotDB &) = default ;
      FpShotDB& operator=(FpShotDB &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->config_ == nullptr
        && this->description_ == nullptr && this->fpDBId_ == nullptr && this->modelId_ == nullptr && this->name_ == nullptr && this->state_ == nullptr; };
      // config Field Functions 
      bool hasConfig() const { return this->config_ != nullptr;};
      void deleteConfig() { this->config_ = nullptr;};
      inline string getConfig() const { DARABONBA_PTR_GET_DEFAULT(config_, "") };
      inline FpShotDB& setConfig(string config) { DARABONBA_PTR_SET_VALUE(config_, config) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline FpShotDB& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // fpDBId Field Functions 
      bool hasFpDBId() const { return this->fpDBId_ != nullptr;};
      void deleteFpDBId() { this->fpDBId_ = nullptr;};
      inline string getFpDBId() const { DARABONBA_PTR_GET_DEFAULT(fpDBId_, "") };
      inline FpShotDB& setFpDBId(string fpDBId) { DARABONBA_PTR_SET_VALUE(fpDBId_, fpDBId) };


      // modelId Field Functions 
      bool hasModelId() const { return this->modelId_ != nullptr;};
      void deleteModelId() { this->modelId_ = nullptr;};
      inline int32_t getModelId() const { DARABONBA_PTR_GET_DEFAULT(modelId_, 0) };
      inline FpShotDB& setModelId(int32_t modelId) { DARABONBA_PTR_SET_VALUE(modelId_, modelId) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline FpShotDB& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // state Field Functions 
      bool hasState() const { return this->state_ != nullptr;};
      void deleteState() { this->state_ = nullptr;};
      inline string getState() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
      inline FpShotDB& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


    protected:
      // The configurations of the media fingerprint library.
      shared_ptr<string> config_ {};
      // The description of the media fingerprint library.
      shared_ptr<string> description_ {};
      // The ID of the media fingerprint library. We recommend that you keep this ID for subsequent operation calls.
      shared_ptr<string> fpDBId_ {};
      // The model ID of the media fingerprint library.
      shared_ptr<int32_t> modelId_ {};
      // The name of the media fingerprint library.
      shared_ptr<string> name_ {};
      // The status of the media fingerprint library. After the media fingerprint library is created, it enters the **offline** state. After the media fingerprint library is processed at the backend, it enters the **active** state.
      shared_ptr<string> state_ {};
    };

    virtual bool empty() const override { return this->fpShotDB_ == nullptr
        && this->requestId_ == nullptr; };
    // fpShotDB Field Functions 
    bool hasFpShotDB() const { return this->fpShotDB_ != nullptr;};
    void deleteFpShotDB() { this->fpShotDB_ = nullptr;};
    inline const CreateFpShotDBResponseBody::FpShotDB & getFpShotDB() const { DARABONBA_PTR_GET_CONST(fpShotDB_, CreateFpShotDBResponseBody::FpShotDB) };
    inline CreateFpShotDBResponseBody::FpShotDB getFpShotDB() { DARABONBA_PTR_GET(fpShotDB_, CreateFpShotDBResponseBody::FpShotDB) };
    inline CreateFpShotDBResponseBody& setFpShotDB(const CreateFpShotDBResponseBody::FpShotDB & fpShotDB) { DARABONBA_PTR_SET_VALUE(fpShotDB_, fpShotDB) };
    inline CreateFpShotDBResponseBody& setFpShotDB(CreateFpShotDBResponseBody::FpShotDB && fpShotDB) { DARABONBA_PTR_SET_RVALUE(fpShotDB_, fpShotDB) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateFpShotDBResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The details of the media fingerprint library.
    shared_ptr<CreateFpShotDBResponseBody::FpShotDB> fpShotDB_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mts20140618
#endif
