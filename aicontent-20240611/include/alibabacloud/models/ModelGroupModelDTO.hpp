// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODELGROUPMODELDTO_HPP_
#define ALIBABACLOUD_MODELS_MODELGROUPMODELDTO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiContent20240611
{
namespace Models
{
  class ModelGroupModelDTO : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModelGroupModelDTO& obj) { 
      DARABONBA_PTR_TO_JSON(id, id_);
      DARABONBA_PTR_TO_JSON(modelCode, modelCode_);
      DARABONBA_PTR_TO_JSON(modelType, modelType_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(platform, platform_);
      DARABONBA_PTR_TO_JSON(version, version_);
    };
    friend void from_json(const Darabonba::Json& j, ModelGroupModelDTO& obj) { 
      DARABONBA_PTR_FROM_JSON(id, id_);
      DARABONBA_PTR_FROM_JSON(modelCode, modelCode_);
      DARABONBA_PTR_FROM_JSON(modelType, modelType_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(platform, platform_);
      DARABONBA_PTR_FROM_JSON(version, version_);
    };
    ModelGroupModelDTO() = default ;
    ModelGroupModelDTO(const ModelGroupModelDTO &) = default ;
    ModelGroupModelDTO(ModelGroupModelDTO &&) = default ;
    ModelGroupModelDTO(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModelGroupModelDTO() = default ;
    ModelGroupModelDTO& operator=(const ModelGroupModelDTO &) = default ;
    ModelGroupModelDTO& operator=(ModelGroupModelDTO &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->id_ == nullptr
        && this->modelCode_ == nullptr && this->modelType_ == nullptr && this->name_ == nullptr && this->platform_ == nullptr && this->version_ == nullptr; };
    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline ModelGroupModelDTO& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // modelCode Field Functions 
    bool hasModelCode() const { return this->modelCode_ != nullptr;};
    void deleteModelCode() { this->modelCode_ = nullptr;};
    inline string getModelCode() const { DARABONBA_PTR_GET_DEFAULT(modelCode_, "") };
    inline ModelGroupModelDTO& setModelCode(string modelCode) { DARABONBA_PTR_SET_VALUE(modelCode_, modelCode) };


    // modelType Field Functions 
    bool hasModelType() const { return this->modelType_ != nullptr;};
    void deleteModelType() { this->modelType_ = nullptr;};
    inline string getModelType() const { DARABONBA_PTR_GET_DEFAULT(modelType_, "") };
    inline ModelGroupModelDTO& setModelType(string modelType) { DARABONBA_PTR_SET_VALUE(modelType_, modelType) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ModelGroupModelDTO& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // platform Field Functions 
    bool hasPlatform() const { return this->platform_ != nullptr;};
    void deletePlatform() { this->platform_ = nullptr;};
    inline string getPlatform() const { DARABONBA_PTR_GET_DEFAULT(platform_, "") };
    inline ModelGroupModelDTO& setPlatform(string platform) { DARABONBA_PTR_SET_VALUE(platform_, platform) };


    // version Field Functions 
    bool hasVersion() const { return this->version_ != nullptr;};
    void deleteVersion() { this->version_ = nullptr;};
    inline string getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
    inline ModelGroupModelDTO& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


  protected:
    shared_ptr<int64_t> id_ {};
    shared_ptr<string> modelCode_ {};
    shared_ptr<string> modelType_ {};
    shared_ptr<string> name_ {};
    shared_ptr<string> platform_ {};
    shared_ptr<string> version_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiContent20240611
#endif
