// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTREGISTRYMODULESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTREGISTRYMODULESRESPONSEBODY_HPP_
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
  class ListRegistryModulesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListRegistryModulesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(count, count_);
      DARABONBA_PTR_TO_JSON(maxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(nextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(registryModules, registryModules_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListRegistryModulesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(count, count_);
      DARABONBA_PTR_FROM_JSON(maxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(nextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(registryModules, registryModules_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    ListRegistryModulesResponseBody() = default ;
    ListRegistryModulesResponseBody(const ListRegistryModulesResponseBody &) = default ;
    ListRegistryModulesResponseBody(ListRegistryModulesResponseBody &&) = default ;
    ListRegistryModulesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListRegistryModulesResponseBody() = default ;
    ListRegistryModulesResponseBody& operator=(const ListRegistryModulesResponseBody &) = default ;
    ListRegistryModulesResponseBody& operator=(ListRegistryModulesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class RegistryModules : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const RegistryModules& obj) { 
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
      friend void from_json(const Darabonba::Json& j, RegistryModules& obj) { 
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
      RegistryModules() = default ;
      RegistryModules(const RegistryModules &) = default ;
      RegistryModules(RegistryModules &&) = default ;
      RegistryModules(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~RegistryModules() = default ;
      RegistryModules& operator=(const RegistryModules &) = default ;
      RegistryModules& operator=(RegistryModules &&) = default ;
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
      inline RegistryModules& setAcl(string acl) { DARABONBA_PTR_SET_VALUE(acl_, acl) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline RegistryModules& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline RegistryModules& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // downloads Field Functions 
      bool hasDownloads() const { return this->downloads_ != nullptr;};
      void deleteDownloads() { this->downloads_ = nullptr;};
      inline int32_t getDownloads() const { DARABONBA_PTR_GET_DEFAULT(downloads_, 0) };
      inline RegistryModules& setDownloads(int32_t downloads) { DARABONBA_PTR_SET_VALUE(downloads_, downloads) };


      // moduleName Field Functions 
      bool hasModuleName() const { return this->moduleName_ != nullptr;};
      void deleteModuleName() { this->moduleName_ = nullptr;};
      inline string getModuleName() const { DARABONBA_PTR_GET_DEFAULT(moduleName_, "") };
      inline RegistryModules& setModuleName(string moduleName) { DARABONBA_PTR_SET_VALUE(moduleName_, moduleName) };


      // namespaceName Field Functions 
      bool hasNamespaceName() const { return this->namespaceName_ != nullptr;};
      void deleteNamespaceName() { this->namespaceName_ = nullptr;};
      inline string getNamespaceName() const { DARABONBA_PTR_GET_DEFAULT(namespaceName_, "") };
      inline RegistryModules& setNamespaceName(string namespaceName) { DARABONBA_PTR_SET_VALUE(namespaceName_, namespaceName) };


      // provider Field Functions 
      bool hasProvider() const { return this->provider_ != nullptr;};
      void deleteProvider() { this->provider_ = nullptr;};
      inline string getProvider() const { DARABONBA_PTR_GET_DEFAULT(provider_, "") };
      inline RegistryModules& setProvider(string provider) { DARABONBA_PTR_SET_VALUE(provider_, provider) };


      // sharedAccounts Field Functions 
      bool hasSharedAccounts() const { return this->sharedAccounts_ != nullptr;};
      void deleteSharedAccounts() { this->sharedAccounts_ = nullptr;};
      inline const vector<int64_t> & getSharedAccounts() const { DARABONBA_PTR_GET_CONST(sharedAccounts_, vector<int64_t>) };
      inline vector<int64_t> getSharedAccounts() { DARABONBA_PTR_GET(sharedAccounts_, vector<int64_t>) };
      inline RegistryModules& setSharedAccounts(const vector<int64_t> & sharedAccounts) { DARABONBA_PTR_SET_VALUE(sharedAccounts_, sharedAccounts) };
      inline RegistryModules& setSharedAccounts(vector<int64_t> && sharedAccounts) { DARABONBA_PTR_SET_RVALUE(sharedAccounts_, sharedAccounts) };


      // source Field Functions 
      bool hasSource() const { return this->source_ != nullptr;};
      void deleteSource() { this->source_ = nullptr;};
      inline string getSource() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
      inline RegistryModules& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


      // sourceUrl Field Functions 
      bool hasSourceUrl() const { return this->sourceUrl_ != nullptr;};
      void deleteSourceUrl() { this->sourceUrl_ = nullptr;};
      inline string getSourceUrl() const { DARABONBA_PTR_GET_DEFAULT(sourceUrl_, "") };
      inline RegistryModules& setSourceUrl(string sourceUrl) { DARABONBA_PTR_SET_VALUE(sourceUrl_, sourceUrl) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline RegistryModules& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      // version Field Functions 
      bool hasVersion() const { return this->version_ != nullptr;};
      void deleteVersion() { this->version_ = nullptr;};
      inline string getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
      inline RegistryModules& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


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

    virtual bool empty() const override { return this->count_ == nullptr
        && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->registryModules_ == nullptr && this->requestId_ == nullptr; };
    // count Field Functions 
    bool hasCount() const { return this->count_ != nullptr;};
    void deleteCount() { this->count_ = nullptr;};
    inline int64_t getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, 0L) };
    inline ListRegistryModulesResponseBody& setCount(int64_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListRegistryModulesResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListRegistryModulesResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // registryModules Field Functions 
    bool hasRegistryModules() const { return this->registryModules_ != nullptr;};
    void deleteRegistryModules() { this->registryModules_ = nullptr;};
    inline const vector<ListRegistryModulesResponseBody::RegistryModules> & getRegistryModules() const { DARABONBA_PTR_GET_CONST(registryModules_, vector<ListRegistryModulesResponseBody::RegistryModules>) };
    inline vector<ListRegistryModulesResponseBody::RegistryModules> getRegistryModules() { DARABONBA_PTR_GET(registryModules_, vector<ListRegistryModulesResponseBody::RegistryModules>) };
    inline ListRegistryModulesResponseBody& setRegistryModules(const vector<ListRegistryModulesResponseBody::RegistryModules> & registryModules) { DARABONBA_PTR_SET_VALUE(registryModules_, registryModules) };
    inline ListRegistryModulesResponseBody& setRegistryModules(vector<ListRegistryModulesResponseBody::RegistryModules> && registryModules) { DARABONBA_PTR_SET_RVALUE(registryModules_, registryModules) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListRegistryModulesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<int64_t> count_ {};
    shared_ptr<int32_t> maxResults_ {};
    shared_ptr<string> nextToken_ {};
    shared_ptr<vector<ListRegistryModulesResponseBody::RegistryModules>> registryModules_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IaCService20210806
#endif
