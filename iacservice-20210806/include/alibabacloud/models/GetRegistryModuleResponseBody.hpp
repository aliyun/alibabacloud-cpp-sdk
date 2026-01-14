// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETREGISTRYMODULERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETREGISTRYMODULERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IaCService20210806
{
namespace Models
{
  class GetRegistryModuleResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetRegistryModuleResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(registryModule, registryModule_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetRegistryModuleResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(registryModule, registryModule_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    GetRegistryModuleResponseBody() = default ;
    GetRegistryModuleResponseBody(const GetRegistryModuleResponseBody &) = default ;
    GetRegistryModuleResponseBody(GetRegistryModuleResponseBody &&) = default ;
    GetRegistryModuleResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetRegistryModuleResponseBody() = default ;
    GetRegistryModuleResponseBody& operator=(const GetRegistryModuleResponseBody &) = default ;
    GetRegistryModuleResponseBody& operator=(GetRegistryModuleResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class RegistryModule : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const RegistryModule& obj) { 
        DARABONBA_PTR_TO_JSON(acl, acl_);
        DARABONBA_PTR_TO_JSON(createTime, createTime_);
        DARABONBA_PTR_TO_JSON(description, description_);
        DARABONBA_PTR_TO_JSON(downloads, downloads_);
        DARABONBA_PTR_TO_JSON(moduleName, moduleName_);
        DARABONBA_PTR_TO_JSON(namespaceName, namespaceName_);
        DARABONBA_PTR_TO_JSON(provider, provider_);
        DARABONBA_PTR_TO_JSON(sharedAccounts, sharedAccounts_);
        DARABONBA_PTR_TO_JSON(source, source_);
        DARABONBA_PTR_TO_JSON(sourceUrl, sourceUrl_);
        DARABONBA_PTR_TO_JSON(type, type_);
        DARABONBA_PTR_TO_JSON(version, version_);
      };
      friend void from_json(const Darabonba::Json& j, RegistryModule& obj) { 
        DARABONBA_PTR_FROM_JSON(acl, acl_);
        DARABONBA_PTR_FROM_JSON(createTime, createTime_);
        DARABONBA_PTR_FROM_JSON(description, description_);
        DARABONBA_PTR_FROM_JSON(downloads, downloads_);
        DARABONBA_PTR_FROM_JSON(moduleName, moduleName_);
        DARABONBA_PTR_FROM_JSON(namespaceName, namespaceName_);
        DARABONBA_PTR_FROM_JSON(provider, provider_);
        DARABONBA_PTR_FROM_JSON(sharedAccounts, sharedAccounts_);
        DARABONBA_PTR_FROM_JSON(source, source_);
        DARABONBA_PTR_FROM_JSON(sourceUrl, sourceUrl_);
        DARABONBA_PTR_FROM_JSON(type, type_);
        DARABONBA_PTR_FROM_JSON(version, version_);
      };
      RegistryModule() = default ;
      RegistryModule(const RegistryModule &) = default ;
      RegistryModule(RegistryModule &&) = default ;
      RegistryModule(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~RegistryModule() = default ;
      RegistryModule& operator=(const RegistryModule &) = default ;
      RegistryModule& operator=(RegistryModule &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->acl_ == nullptr
        && this->createTime_ == nullptr && this->description_ == nullptr && this->downloads_ == nullptr && this->moduleName_ == nullptr && this->namespaceName_ == nullptr
        && this->provider_ == nullptr && this->sharedAccounts_ == nullptr && this->source_ == nullptr && this->sourceUrl_ == nullptr && this->type_ == nullptr
        && this->version_ == nullptr; };
      // acl Field Functions 
      bool hasAcl() const { return this->acl_ != nullptr;};
      void deleteAcl() { this->acl_ = nullptr;};
      inline string getAcl() const { DARABONBA_PTR_GET_DEFAULT(acl_, "") };
      inline RegistryModule& setAcl(string acl) { DARABONBA_PTR_SET_VALUE(acl_, acl) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline RegistryModule& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline RegistryModule& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // downloads Field Functions 
      bool hasDownloads() const { return this->downloads_ != nullptr;};
      void deleteDownloads() { this->downloads_ = nullptr;};
      inline int32_t getDownloads() const { DARABONBA_PTR_GET_DEFAULT(downloads_, 0) };
      inline RegistryModule& setDownloads(int32_t downloads) { DARABONBA_PTR_SET_VALUE(downloads_, downloads) };


      // moduleName Field Functions 
      bool hasModuleName() const { return this->moduleName_ != nullptr;};
      void deleteModuleName() { this->moduleName_ = nullptr;};
      inline string getModuleName() const { DARABONBA_PTR_GET_DEFAULT(moduleName_, "") };
      inline RegistryModule& setModuleName(string moduleName) { DARABONBA_PTR_SET_VALUE(moduleName_, moduleName) };


      // namespaceName Field Functions 
      bool hasNamespaceName() const { return this->namespaceName_ != nullptr;};
      void deleteNamespaceName() { this->namespaceName_ = nullptr;};
      inline string getNamespaceName() const { DARABONBA_PTR_GET_DEFAULT(namespaceName_, "") };
      inline RegistryModule& setNamespaceName(string namespaceName) { DARABONBA_PTR_SET_VALUE(namespaceName_, namespaceName) };


      // provider Field Functions 
      bool hasProvider() const { return this->provider_ != nullptr;};
      void deleteProvider() { this->provider_ = nullptr;};
      inline string getProvider() const { DARABONBA_PTR_GET_DEFAULT(provider_, "") };
      inline RegistryModule& setProvider(string provider) { DARABONBA_PTR_SET_VALUE(provider_, provider) };


      // sharedAccounts Field Functions 
      bool hasSharedAccounts() const { return this->sharedAccounts_ != nullptr;};
      void deleteSharedAccounts() { this->sharedAccounts_ = nullptr;};
      inline const vector<int64_t> & getSharedAccounts() const { DARABONBA_PTR_GET_CONST(sharedAccounts_, vector<int64_t>) };
      inline vector<int64_t> getSharedAccounts() { DARABONBA_PTR_GET(sharedAccounts_, vector<int64_t>) };
      inline RegistryModule& setSharedAccounts(const vector<int64_t> & sharedAccounts) { DARABONBA_PTR_SET_VALUE(sharedAccounts_, sharedAccounts) };
      inline RegistryModule& setSharedAccounts(vector<int64_t> && sharedAccounts) { DARABONBA_PTR_SET_RVALUE(sharedAccounts_, sharedAccounts) };


      // source Field Functions 
      bool hasSource() const { return this->source_ != nullptr;};
      void deleteSource() { this->source_ = nullptr;};
      inline string getSource() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
      inline RegistryModule& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


      // sourceUrl Field Functions 
      bool hasSourceUrl() const { return this->sourceUrl_ != nullptr;};
      void deleteSourceUrl() { this->sourceUrl_ = nullptr;};
      inline string getSourceUrl() const { DARABONBA_PTR_GET_DEFAULT(sourceUrl_, "") };
      inline RegistryModule& setSourceUrl(string sourceUrl) { DARABONBA_PTR_SET_VALUE(sourceUrl_, sourceUrl) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline RegistryModule& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      // version Field Functions 
      bool hasVersion() const { return this->version_ != nullptr;};
      void deleteVersion() { this->version_ = nullptr;};
      inline string getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
      inline RegistryModule& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


    protected:
      shared_ptr<string> acl_ {};
      shared_ptr<string> createTime_ {};
      shared_ptr<string> description_ {};
      shared_ptr<int32_t> downloads_ {};
      shared_ptr<string> moduleName_ {};
      shared_ptr<string> namespaceName_ {};
      shared_ptr<string> provider_ {};
      shared_ptr<vector<int64_t>> sharedAccounts_ {};
      shared_ptr<string> source_ {};
      shared_ptr<string> sourceUrl_ {};
      shared_ptr<string> type_ {};
      shared_ptr<string> version_ {};
    };

    virtual bool empty() const override { return this->registryModule_ == nullptr
        && this->requestId_ == nullptr; };
    // registryModule Field Functions 
    bool hasRegistryModule() const { return this->registryModule_ != nullptr;};
    void deleteRegistryModule() { this->registryModule_ = nullptr;};
    inline const GetRegistryModuleResponseBody::RegistryModule & getRegistryModule() const { DARABONBA_PTR_GET_CONST(registryModule_, GetRegistryModuleResponseBody::RegistryModule) };
    inline GetRegistryModuleResponseBody::RegistryModule getRegistryModule() { DARABONBA_PTR_GET(registryModule_, GetRegistryModuleResponseBody::RegistryModule) };
    inline GetRegistryModuleResponseBody& setRegistryModule(const GetRegistryModuleResponseBody::RegistryModule & registryModule) { DARABONBA_PTR_SET_VALUE(registryModule_, registryModule) };
    inline GetRegistryModuleResponseBody& setRegistryModule(GetRegistryModuleResponseBody::RegistryModule && registryModule) { DARABONBA_PTR_SET_RVALUE(registryModule_, registryModule) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetRegistryModuleResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<GetRegistryModuleResponseBody::RegistryModule> registryModule_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IaCService20210806
#endif
