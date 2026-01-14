// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETREGISTRYMODULEVERSIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETREGISTRYMODULEVERSIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IaCService20210806
{
namespace Models
{
  class GetRegistryModuleVersionResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetRegistryModuleVersionResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(moduleVersion, moduleVersion_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetRegistryModuleVersionResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(moduleVersion, moduleVersion_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    GetRegistryModuleVersionResponseBody() = default ;
    GetRegistryModuleVersionResponseBody(const GetRegistryModuleVersionResponseBody &) = default ;
    GetRegistryModuleVersionResponseBody(GetRegistryModuleVersionResponseBody &&) = default ;
    GetRegistryModuleVersionResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetRegistryModuleVersionResponseBody() = default ;
    GetRegistryModuleVersionResponseBody& operator=(const GetRegistryModuleVersionResponseBody &) = default ;
    GetRegistryModuleVersionResponseBody& operator=(GetRegistryModuleVersionResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ModuleVersion : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ModuleVersion& obj) { 
        DARABONBA_PTR_TO_JSON(createTime, createTime_);
        DARABONBA_PTR_TO_JSON(detailUrl, detailUrl_);
        DARABONBA_PTR_TO_JSON(downloads, downloads_);
        DARABONBA_PTR_TO_JSON(moduleName, moduleName_);
        DARABONBA_PTR_TO_JSON(namespaceName, namespaceName_);
        DARABONBA_PTR_TO_JSON(provider, provider_);
        DARABONBA_PTR_TO_JSON(source, source_);
        DARABONBA_PTR_TO_JSON(sourceUrl, sourceUrl_);
        DARABONBA_PTR_TO_JSON(version, version_);
      };
      friend void from_json(const Darabonba::Json& j, ModuleVersion& obj) { 
        DARABONBA_PTR_FROM_JSON(createTime, createTime_);
        DARABONBA_PTR_FROM_JSON(detailUrl, detailUrl_);
        DARABONBA_PTR_FROM_JSON(downloads, downloads_);
        DARABONBA_PTR_FROM_JSON(moduleName, moduleName_);
        DARABONBA_PTR_FROM_JSON(namespaceName, namespaceName_);
        DARABONBA_PTR_FROM_JSON(provider, provider_);
        DARABONBA_PTR_FROM_JSON(source, source_);
        DARABONBA_PTR_FROM_JSON(sourceUrl, sourceUrl_);
        DARABONBA_PTR_FROM_JSON(version, version_);
      };
      ModuleVersion() = default ;
      ModuleVersion(const ModuleVersion &) = default ;
      ModuleVersion(ModuleVersion &&) = default ;
      ModuleVersion(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ModuleVersion() = default ;
      ModuleVersion& operator=(const ModuleVersion &) = default ;
      ModuleVersion& operator=(ModuleVersion &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->createTime_ == nullptr
        && this->detailUrl_ == nullptr && this->downloads_ == nullptr && this->moduleName_ == nullptr && this->namespaceName_ == nullptr && this->provider_ == nullptr
        && this->source_ == nullptr && this->sourceUrl_ == nullptr && this->version_ == nullptr; };
      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline ModuleVersion& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // detailUrl Field Functions 
      bool hasDetailUrl() const { return this->detailUrl_ != nullptr;};
      void deleteDetailUrl() { this->detailUrl_ = nullptr;};
      inline string getDetailUrl() const { DARABONBA_PTR_GET_DEFAULT(detailUrl_, "") };
      inline ModuleVersion& setDetailUrl(string detailUrl) { DARABONBA_PTR_SET_VALUE(detailUrl_, detailUrl) };


      // downloads Field Functions 
      bool hasDownloads() const { return this->downloads_ != nullptr;};
      void deleteDownloads() { this->downloads_ = nullptr;};
      inline string getDownloads() const { DARABONBA_PTR_GET_DEFAULT(downloads_, "") };
      inline ModuleVersion& setDownloads(string downloads) { DARABONBA_PTR_SET_VALUE(downloads_, downloads) };


      // moduleName Field Functions 
      bool hasModuleName() const { return this->moduleName_ != nullptr;};
      void deleteModuleName() { this->moduleName_ = nullptr;};
      inline string getModuleName() const { DARABONBA_PTR_GET_DEFAULT(moduleName_, "") };
      inline ModuleVersion& setModuleName(string moduleName) { DARABONBA_PTR_SET_VALUE(moduleName_, moduleName) };


      // namespaceName Field Functions 
      bool hasNamespaceName() const { return this->namespaceName_ != nullptr;};
      void deleteNamespaceName() { this->namespaceName_ = nullptr;};
      inline string getNamespaceName() const { DARABONBA_PTR_GET_DEFAULT(namespaceName_, "") };
      inline ModuleVersion& setNamespaceName(string namespaceName) { DARABONBA_PTR_SET_VALUE(namespaceName_, namespaceName) };


      // provider Field Functions 
      bool hasProvider() const { return this->provider_ != nullptr;};
      void deleteProvider() { this->provider_ = nullptr;};
      inline string getProvider() const { DARABONBA_PTR_GET_DEFAULT(provider_, "") };
      inline ModuleVersion& setProvider(string provider) { DARABONBA_PTR_SET_VALUE(provider_, provider) };


      // source Field Functions 
      bool hasSource() const { return this->source_ != nullptr;};
      void deleteSource() { this->source_ = nullptr;};
      inline string getSource() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
      inline ModuleVersion& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


      // sourceUrl Field Functions 
      bool hasSourceUrl() const { return this->sourceUrl_ != nullptr;};
      void deleteSourceUrl() { this->sourceUrl_ = nullptr;};
      inline string getSourceUrl() const { DARABONBA_PTR_GET_DEFAULT(sourceUrl_, "") };
      inline ModuleVersion& setSourceUrl(string sourceUrl) { DARABONBA_PTR_SET_VALUE(sourceUrl_, sourceUrl) };


      // version Field Functions 
      bool hasVersion() const { return this->version_ != nullptr;};
      void deleteVersion() { this->version_ = nullptr;};
      inline string getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
      inline ModuleVersion& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


    protected:
      shared_ptr<string> createTime_ {};
      shared_ptr<string> detailUrl_ {};
      shared_ptr<string> downloads_ {};
      shared_ptr<string> moduleName_ {};
      shared_ptr<string> namespaceName_ {};
      shared_ptr<string> provider_ {};
      shared_ptr<string> source_ {};
      shared_ptr<string> sourceUrl_ {};
      shared_ptr<string> version_ {};
    };

    virtual bool empty() const override { return this->moduleVersion_ == nullptr
        && this->requestId_ == nullptr; };
    // moduleVersion Field Functions 
    bool hasModuleVersion() const { return this->moduleVersion_ != nullptr;};
    void deleteModuleVersion() { this->moduleVersion_ = nullptr;};
    inline const GetRegistryModuleVersionResponseBody::ModuleVersion & getModuleVersion() const { DARABONBA_PTR_GET_CONST(moduleVersion_, GetRegistryModuleVersionResponseBody::ModuleVersion) };
    inline GetRegistryModuleVersionResponseBody::ModuleVersion getModuleVersion() { DARABONBA_PTR_GET(moduleVersion_, GetRegistryModuleVersionResponseBody::ModuleVersion) };
    inline GetRegistryModuleVersionResponseBody& setModuleVersion(const GetRegistryModuleVersionResponseBody::ModuleVersion & moduleVersion) { DARABONBA_PTR_SET_VALUE(moduleVersion_, moduleVersion) };
    inline GetRegistryModuleVersionResponseBody& setModuleVersion(GetRegistryModuleVersionResponseBody::ModuleVersion && moduleVersion) { DARABONBA_PTR_SET_RVALUE(moduleVersion_, moduleVersion) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetRegistryModuleVersionResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<GetRegistryModuleVersionResponseBody::ModuleVersion> moduleVersion_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IaCService20210806
#endif
