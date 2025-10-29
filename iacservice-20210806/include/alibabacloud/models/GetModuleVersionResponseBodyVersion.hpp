// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMODULEVERSIONRESPONSEBODYVERSION_HPP_
#define ALIBABACLOUD_MODELS_GETMODULEVERSIONRESPONSEBODYVERSION_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IaCService20210806
{
namespace Models
{
  class GetModuleVersionResponseBodyVersion : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetModuleVersionResponseBodyVersion& obj) { 
      DARABONBA_PTR_TO_JSON(createTime, createTime_);
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(moduleId, moduleId_);
      DARABONBA_PTR_TO_JSON(moduleVersion, moduleVersion_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(source, source_);
      DARABONBA_PTR_TO_JSON(sourcePath, sourcePath_);
      DARABONBA_PTR_TO_JSON(statePath, statePath_);
      DARABONBA_ANY_TO_JSON(terraformContext, terraformContext_);
      DARABONBA_PTR_TO_JSON(versionStrategy, versionStrategy_);
    };
    friend void from_json(const Darabonba::Json& j, GetModuleVersionResponseBodyVersion& obj) { 
      DARABONBA_PTR_FROM_JSON(createTime, createTime_);
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(moduleId, moduleId_);
      DARABONBA_PTR_FROM_JSON(moduleVersion, moduleVersion_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(source, source_);
      DARABONBA_PTR_FROM_JSON(sourcePath, sourcePath_);
      DARABONBA_PTR_FROM_JSON(statePath, statePath_);
      DARABONBA_ANY_FROM_JSON(terraformContext, terraformContext_);
      DARABONBA_PTR_FROM_JSON(versionStrategy, versionStrategy_);
    };
    GetModuleVersionResponseBodyVersion() = default ;
    GetModuleVersionResponseBodyVersion(const GetModuleVersionResponseBodyVersion &) = default ;
    GetModuleVersionResponseBodyVersion(GetModuleVersionResponseBodyVersion &&) = default ;
    GetModuleVersionResponseBodyVersion(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetModuleVersionResponseBodyVersion() = default ;
    GetModuleVersionResponseBodyVersion& operator=(const GetModuleVersionResponseBodyVersion &) = default ;
    GetModuleVersionResponseBodyVersion& operator=(GetModuleVersionResponseBodyVersion &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->createTime_ == nullptr
        && return this->description_ == nullptr && return this->moduleId_ == nullptr && return this->moduleVersion_ == nullptr && return this->name_ == nullptr && return this->source_ == nullptr
        && return this->sourcePath_ == nullptr && return this->statePath_ == nullptr && return this->terraformContext_ == nullptr && return this->versionStrategy_ == nullptr; };
    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline GetModuleVersionResponseBodyVersion& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline GetModuleVersionResponseBodyVersion& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // moduleId Field Functions 
    bool hasModuleId() const { return this->moduleId_ != nullptr;};
    void deleteModuleId() { this->moduleId_ = nullptr;};
    inline string moduleId() const { DARABONBA_PTR_GET_DEFAULT(moduleId_, "") };
    inline GetModuleVersionResponseBodyVersion& setModuleId(string moduleId) { DARABONBA_PTR_SET_VALUE(moduleId_, moduleId) };


    // moduleVersion Field Functions 
    bool hasModuleVersion() const { return this->moduleVersion_ != nullptr;};
    void deleteModuleVersion() { this->moduleVersion_ = nullptr;};
    inline string moduleVersion() const { DARABONBA_PTR_GET_DEFAULT(moduleVersion_, "") };
    inline GetModuleVersionResponseBodyVersion& setModuleVersion(string moduleVersion) { DARABONBA_PTR_SET_VALUE(moduleVersion_, moduleVersion) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline GetModuleVersionResponseBodyVersion& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // source Field Functions 
    bool hasSource() const { return this->source_ != nullptr;};
    void deleteSource() { this->source_ = nullptr;};
    inline string source() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
    inline GetModuleVersionResponseBodyVersion& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


    // sourcePath Field Functions 
    bool hasSourcePath() const { return this->sourcePath_ != nullptr;};
    void deleteSourcePath() { this->sourcePath_ = nullptr;};
    inline string sourcePath() const { DARABONBA_PTR_GET_DEFAULT(sourcePath_, "") };
    inline GetModuleVersionResponseBodyVersion& setSourcePath(string sourcePath) { DARABONBA_PTR_SET_VALUE(sourcePath_, sourcePath) };


    // statePath Field Functions 
    bool hasStatePath() const { return this->statePath_ != nullptr;};
    void deleteStatePath() { this->statePath_ = nullptr;};
    inline string statePath() const { DARABONBA_PTR_GET_DEFAULT(statePath_, "") };
    inline GetModuleVersionResponseBodyVersion& setStatePath(string statePath) { DARABONBA_PTR_SET_VALUE(statePath_, statePath) };


    // terraformContext Field Functions 
    bool hasTerraformContext() const { return this->terraformContext_ != nullptr;};
    void deleteTerraformContext() { this->terraformContext_ = nullptr;};
    inline     const Darabonba::Json & terraformContext() const { DARABONBA_GET(terraformContext_) };
    Darabonba::Json & terraformContext() { DARABONBA_GET(terraformContext_) };
    inline GetModuleVersionResponseBodyVersion& setTerraformContext(const Darabonba::Json & terraformContext) { DARABONBA_SET_VALUE(terraformContext_, terraformContext) };
    inline GetModuleVersionResponseBodyVersion& setTerraformContext(Darabonba::Json & terraformContext) { DARABONBA_SET_RVALUE(terraformContext_, terraformContext) };


    // versionStrategy Field Functions 
    bool hasVersionStrategy() const { return this->versionStrategy_ != nullptr;};
    void deleteVersionStrategy() { this->versionStrategy_ = nullptr;};
    inline string versionStrategy() const { DARABONBA_PTR_GET_DEFAULT(versionStrategy_, "") };
    inline GetModuleVersionResponseBodyVersion& setVersionStrategy(string versionStrategy) { DARABONBA_PTR_SET_VALUE(versionStrategy_, versionStrategy) };


  protected:
    std::shared_ptr<string> createTime_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<string> moduleId_ = nullptr;
    std::shared_ptr<string> moduleVersion_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> source_ = nullptr;
    std::shared_ptr<string> sourcePath_ = nullptr;
    std::shared_ptr<string> statePath_ = nullptr;
    Darabonba::Json terraformContext_ = nullptr;
    std::shared_ptr<string> versionStrategy_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IaCService20210806
#endif
