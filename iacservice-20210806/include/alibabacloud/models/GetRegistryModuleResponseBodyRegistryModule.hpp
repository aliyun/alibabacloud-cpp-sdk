// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETREGISTRYMODULERESPONSEBODYREGISTRYMODULE_HPP_
#define ALIBABACLOUD_MODELS_GETREGISTRYMODULERESPONSEBODYREGISTRYMODULE_HPP_
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
  class GetRegistryModuleResponseBodyRegistryModule : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetRegistryModuleResponseBodyRegistryModule& obj) { 
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
    friend void from_json(const Darabonba::Json& j, GetRegistryModuleResponseBodyRegistryModule& obj) { 
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
    GetRegistryModuleResponseBodyRegistryModule() = default ;
    GetRegistryModuleResponseBodyRegistryModule(const GetRegistryModuleResponseBodyRegistryModule &) = default ;
    GetRegistryModuleResponseBodyRegistryModule(GetRegistryModuleResponseBodyRegistryModule &&) = default ;
    GetRegistryModuleResponseBodyRegistryModule(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetRegistryModuleResponseBodyRegistryModule() = default ;
    GetRegistryModuleResponseBodyRegistryModule& operator=(const GetRegistryModuleResponseBodyRegistryModule &) = default ;
    GetRegistryModuleResponseBodyRegistryModule& operator=(GetRegistryModuleResponseBodyRegistryModule &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->acl_ == nullptr
        && return this->createTime_ == nullptr && return this->description_ == nullptr && return this->downloads_ == nullptr && return this->moduleName_ == nullptr && return this->namespaceName_ == nullptr
        && return this->provider_ == nullptr && return this->sharedAccounts_ == nullptr && return this->source_ == nullptr && return this->sourceUrl_ == nullptr && return this->type_ == nullptr
        && return this->version_ == nullptr; };
    // acl Field Functions 
    bool hasAcl() const { return this->acl_ != nullptr;};
    void deleteAcl() { this->acl_ = nullptr;};
    inline string acl() const { DARABONBA_PTR_GET_DEFAULT(acl_, "") };
    inline GetRegistryModuleResponseBodyRegistryModule& setAcl(string acl) { DARABONBA_PTR_SET_VALUE(acl_, acl) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline GetRegistryModuleResponseBodyRegistryModule& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline GetRegistryModuleResponseBodyRegistryModule& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // downloads Field Functions 
    bool hasDownloads() const { return this->downloads_ != nullptr;};
    void deleteDownloads() { this->downloads_ = nullptr;};
    inline int32_t downloads() const { DARABONBA_PTR_GET_DEFAULT(downloads_, 0) };
    inline GetRegistryModuleResponseBodyRegistryModule& setDownloads(int32_t downloads) { DARABONBA_PTR_SET_VALUE(downloads_, downloads) };


    // moduleName Field Functions 
    bool hasModuleName() const { return this->moduleName_ != nullptr;};
    void deleteModuleName() { this->moduleName_ = nullptr;};
    inline string moduleName() const { DARABONBA_PTR_GET_DEFAULT(moduleName_, "") };
    inline GetRegistryModuleResponseBodyRegistryModule& setModuleName(string moduleName) { DARABONBA_PTR_SET_VALUE(moduleName_, moduleName) };


    // namespaceName Field Functions 
    bool hasNamespaceName() const { return this->namespaceName_ != nullptr;};
    void deleteNamespaceName() { this->namespaceName_ = nullptr;};
    inline string namespaceName() const { DARABONBA_PTR_GET_DEFAULT(namespaceName_, "") };
    inline GetRegistryModuleResponseBodyRegistryModule& setNamespaceName(string namespaceName) { DARABONBA_PTR_SET_VALUE(namespaceName_, namespaceName) };


    // provider Field Functions 
    bool hasProvider() const { return this->provider_ != nullptr;};
    void deleteProvider() { this->provider_ = nullptr;};
    inline string provider() const { DARABONBA_PTR_GET_DEFAULT(provider_, "") };
    inline GetRegistryModuleResponseBodyRegistryModule& setProvider(string provider) { DARABONBA_PTR_SET_VALUE(provider_, provider) };


    // sharedAccounts Field Functions 
    bool hasSharedAccounts() const { return this->sharedAccounts_ != nullptr;};
    void deleteSharedAccounts() { this->sharedAccounts_ = nullptr;};
    inline const vector<int64_t> & sharedAccounts() const { DARABONBA_PTR_GET_CONST(sharedAccounts_, vector<int64_t>) };
    inline vector<int64_t> sharedAccounts() { DARABONBA_PTR_GET(sharedAccounts_, vector<int64_t>) };
    inline GetRegistryModuleResponseBodyRegistryModule& setSharedAccounts(const vector<int64_t> & sharedAccounts) { DARABONBA_PTR_SET_VALUE(sharedAccounts_, sharedAccounts) };
    inline GetRegistryModuleResponseBodyRegistryModule& setSharedAccounts(vector<int64_t> && sharedAccounts) { DARABONBA_PTR_SET_RVALUE(sharedAccounts_, sharedAccounts) };


    // source Field Functions 
    bool hasSource() const { return this->source_ != nullptr;};
    void deleteSource() { this->source_ = nullptr;};
    inline string source() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
    inline GetRegistryModuleResponseBodyRegistryModule& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


    // sourceUrl Field Functions 
    bool hasSourceUrl() const { return this->sourceUrl_ != nullptr;};
    void deleteSourceUrl() { this->sourceUrl_ = nullptr;};
    inline string sourceUrl() const { DARABONBA_PTR_GET_DEFAULT(sourceUrl_, "") };
    inline GetRegistryModuleResponseBodyRegistryModule& setSourceUrl(string sourceUrl) { DARABONBA_PTR_SET_VALUE(sourceUrl_, sourceUrl) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline GetRegistryModuleResponseBodyRegistryModule& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // version Field Functions 
    bool hasVersion() const { return this->version_ != nullptr;};
    void deleteVersion() { this->version_ = nullptr;};
    inline string version() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
    inline GetRegistryModuleResponseBodyRegistryModule& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


  protected:
    std::shared_ptr<string> acl_ = nullptr;
    std::shared_ptr<string> createTime_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<int32_t> downloads_ = nullptr;
    std::shared_ptr<string> moduleName_ = nullptr;
    std::shared_ptr<string> namespaceName_ = nullptr;
    std::shared_ptr<string> provider_ = nullptr;
    std::shared_ptr<vector<int64_t>> sharedAccounts_ = nullptr;
    std::shared_ptr<string> source_ = nullptr;
    std::shared_ptr<string> sourceUrl_ = nullptr;
    std::shared_ptr<string> type_ = nullptr;
    std::shared_ptr<string> version_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IaCService20210806
#endif
