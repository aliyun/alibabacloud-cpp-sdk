// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMODULEVERSIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETMODULEVERSIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IaCService20210806
{
namespace Models
{
  class GetModuleVersionResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetModuleVersionResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(version, version_);
    };
    friend void from_json(const Darabonba::Json& j, GetModuleVersionResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(version, version_);
    };
    GetModuleVersionResponseBody() = default ;
    GetModuleVersionResponseBody(const GetModuleVersionResponseBody &) = default ;
    GetModuleVersionResponseBody(GetModuleVersionResponseBody &&) = default ;
    GetModuleVersionResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetModuleVersionResponseBody() = default ;
    GetModuleVersionResponseBody& operator=(const GetModuleVersionResponseBody &) = default ;
    GetModuleVersionResponseBody& operator=(GetModuleVersionResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Version : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Version& obj) { 
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
      friend void from_json(const Darabonba::Json& j, Version& obj) { 
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
      Version() = default ;
      Version(const Version &) = default ;
      Version(Version &&) = default ;
      Version(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Version() = default ;
      Version& operator=(const Version &) = default ;
      Version& operator=(Version &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->createTime_ == nullptr
        && this->description_ == nullptr && this->moduleId_ == nullptr && this->moduleVersion_ == nullptr && this->name_ == nullptr && this->source_ == nullptr
        && this->sourcePath_ == nullptr && this->statePath_ == nullptr && this->terraformContext_ == nullptr && this->versionStrategy_ == nullptr; };
      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline Version& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline Version& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // moduleId Field Functions 
      bool hasModuleId() const { return this->moduleId_ != nullptr;};
      void deleteModuleId() { this->moduleId_ = nullptr;};
      inline string getModuleId() const { DARABONBA_PTR_GET_DEFAULT(moduleId_, "") };
      inline Version& setModuleId(string moduleId) { DARABONBA_PTR_SET_VALUE(moduleId_, moduleId) };


      // moduleVersion Field Functions 
      bool hasModuleVersion() const { return this->moduleVersion_ != nullptr;};
      void deleteModuleVersion() { this->moduleVersion_ = nullptr;};
      inline string getModuleVersion() const { DARABONBA_PTR_GET_DEFAULT(moduleVersion_, "") };
      inline Version& setModuleVersion(string moduleVersion) { DARABONBA_PTR_SET_VALUE(moduleVersion_, moduleVersion) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Version& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // source Field Functions 
      bool hasSource() const { return this->source_ != nullptr;};
      void deleteSource() { this->source_ = nullptr;};
      inline string getSource() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
      inline Version& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


      // sourcePath Field Functions 
      bool hasSourcePath() const { return this->sourcePath_ != nullptr;};
      void deleteSourcePath() { this->sourcePath_ = nullptr;};
      inline string getSourcePath() const { DARABONBA_PTR_GET_DEFAULT(sourcePath_, "") };
      inline Version& setSourcePath(string sourcePath) { DARABONBA_PTR_SET_VALUE(sourcePath_, sourcePath) };


      // statePath Field Functions 
      bool hasStatePath() const { return this->statePath_ != nullptr;};
      void deleteStatePath() { this->statePath_ = nullptr;};
      inline string getStatePath() const { DARABONBA_PTR_GET_DEFAULT(statePath_, "") };
      inline Version& setStatePath(string statePath) { DARABONBA_PTR_SET_VALUE(statePath_, statePath) };


      // terraformContext Field Functions 
      bool hasTerraformContext() const { return this->terraformContext_ != nullptr;};
      void deleteTerraformContext() { this->terraformContext_ = nullptr;};
      inline       const Darabonba::Json & getTerraformContext() const { DARABONBA_GET(terraformContext_) };
      Darabonba::Json & getTerraformContext() { DARABONBA_GET(terraformContext_) };
      inline Version& setTerraformContext(const Darabonba::Json & terraformContext) { DARABONBA_SET_VALUE(terraformContext_, terraformContext) };
      inline Version& setTerraformContext(Darabonba::Json && terraformContext) { DARABONBA_SET_RVALUE(terraformContext_, terraformContext) };


      // versionStrategy Field Functions 
      bool hasVersionStrategy() const { return this->versionStrategy_ != nullptr;};
      void deleteVersionStrategy() { this->versionStrategy_ = nullptr;};
      inline string getVersionStrategy() const { DARABONBA_PTR_GET_DEFAULT(versionStrategy_, "") };
      inline Version& setVersionStrategy(string versionStrategy) { DARABONBA_PTR_SET_VALUE(versionStrategy_, versionStrategy) };


    protected:
      shared_ptr<string> createTime_ {};
      shared_ptr<string> description_ {};
      shared_ptr<string> moduleId_ {};
      shared_ptr<string> moduleVersion_ {};
      shared_ptr<string> name_ {};
      shared_ptr<string> source_ {};
      shared_ptr<string> sourcePath_ {};
      shared_ptr<string> statePath_ {};
      Darabonba::Json terraformContext_ {};
      shared_ptr<string> versionStrategy_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->version_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetModuleVersionResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // version Field Functions 
    bool hasVersion() const { return this->version_ != nullptr;};
    void deleteVersion() { this->version_ = nullptr;};
    inline const GetModuleVersionResponseBody::Version & getVersion() const { DARABONBA_PTR_GET_CONST(version_, GetModuleVersionResponseBody::Version) };
    inline GetModuleVersionResponseBody::Version getVersion() { DARABONBA_PTR_GET(version_, GetModuleVersionResponseBody::Version) };
    inline GetModuleVersionResponseBody& setVersion(const GetModuleVersionResponseBody::Version & version) { DARABONBA_PTR_SET_VALUE(version_, version) };
    inline GetModuleVersionResponseBody& setVersion(GetModuleVersionResponseBody::Version && version) { DARABONBA_PTR_SET_RVALUE(version_, version) };


  protected:
    shared_ptr<string> requestId_ {};
    shared_ptr<GetModuleVersionResponseBody::Version> version_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IaCService20210806
#endif
