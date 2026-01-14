// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTREGISTRYMODULEVERSIONSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTREGISTRYMODULEVERSIONSRESPONSEBODY_HPP_
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
  class ListRegistryModuleVersionsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListRegistryModuleVersionsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(count, count_);
      DARABONBA_PTR_TO_JSON(maxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(moduleVersions, moduleVersions_);
      DARABONBA_PTR_TO_JSON(nextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListRegistryModuleVersionsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(count, count_);
      DARABONBA_PTR_FROM_JSON(maxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(moduleVersions, moduleVersions_);
      DARABONBA_PTR_FROM_JSON(nextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    ListRegistryModuleVersionsResponseBody() = default ;
    ListRegistryModuleVersionsResponseBody(const ListRegistryModuleVersionsResponseBody &) = default ;
    ListRegistryModuleVersionsResponseBody(ListRegistryModuleVersionsResponseBody &&) = default ;
    ListRegistryModuleVersionsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListRegistryModuleVersionsResponseBody() = default ;
    ListRegistryModuleVersionsResponseBody& operator=(const ListRegistryModuleVersionsResponseBody &) = default ;
    ListRegistryModuleVersionsResponseBody& operator=(ListRegistryModuleVersionsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ModuleVersions : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ModuleVersions& obj) { 
        DARABONBA_PTR_TO_JSON(createTime, createTime_);
        DARABONBA_PTR_TO_JSON(moduleName, moduleName_);
        DARABONBA_PTR_TO_JSON(namespaceName, namespaceName_);
        DARABONBA_PTR_TO_JSON(provider, provider_);
        DARABONBA_PTR_TO_JSON(source, source_);
        DARABONBA_PTR_TO_JSON(sourceUrl, sourceUrl_);
        DARABONBA_PTR_TO_JSON(version, version_);
      };
      friend void from_json(const Darabonba::Json& j, ModuleVersions& obj) { 
        DARABONBA_PTR_FROM_JSON(createTime, createTime_);
        DARABONBA_PTR_FROM_JSON(moduleName, moduleName_);
        DARABONBA_PTR_FROM_JSON(namespaceName, namespaceName_);
        DARABONBA_PTR_FROM_JSON(provider, provider_);
        DARABONBA_PTR_FROM_JSON(source, source_);
        DARABONBA_PTR_FROM_JSON(sourceUrl, sourceUrl_);
        DARABONBA_PTR_FROM_JSON(version, version_);
      };
      ModuleVersions() = default ;
      ModuleVersions(const ModuleVersions &) = default ;
      ModuleVersions(ModuleVersions &&) = default ;
      ModuleVersions(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ModuleVersions() = default ;
      ModuleVersions& operator=(const ModuleVersions &) = default ;
      ModuleVersions& operator=(ModuleVersions &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->createTime_ == nullptr
        && this->moduleName_ == nullptr && this->namespaceName_ == nullptr && this->provider_ == nullptr && this->source_ == nullptr && this->sourceUrl_ == nullptr
        && this->version_ == nullptr; };
      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline ModuleVersions& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // moduleName Field Functions 
      bool hasModuleName() const { return this->moduleName_ != nullptr;};
      void deleteModuleName() { this->moduleName_ = nullptr;};
      inline string getModuleName() const { DARABONBA_PTR_GET_DEFAULT(moduleName_, "") };
      inline ModuleVersions& setModuleName(string moduleName) { DARABONBA_PTR_SET_VALUE(moduleName_, moduleName) };


      // namespaceName Field Functions 
      bool hasNamespaceName() const { return this->namespaceName_ != nullptr;};
      void deleteNamespaceName() { this->namespaceName_ = nullptr;};
      inline string getNamespaceName() const { DARABONBA_PTR_GET_DEFAULT(namespaceName_, "") };
      inline ModuleVersions& setNamespaceName(string namespaceName) { DARABONBA_PTR_SET_VALUE(namespaceName_, namespaceName) };


      // provider Field Functions 
      bool hasProvider() const { return this->provider_ != nullptr;};
      void deleteProvider() { this->provider_ = nullptr;};
      inline string getProvider() const { DARABONBA_PTR_GET_DEFAULT(provider_, "") };
      inline ModuleVersions& setProvider(string provider) { DARABONBA_PTR_SET_VALUE(provider_, provider) };


      // source Field Functions 
      bool hasSource() const { return this->source_ != nullptr;};
      void deleteSource() { this->source_ = nullptr;};
      inline string getSource() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
      inline ModuleVersions& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


      // sourceUrl Field Functions 
      bool hasSourceUrl() const { return this->sourceUrl_ != nullptr;};
      void deleteSourceUrl() { this->sourceUrl_ = nullptr;};
      inline string getSourceUrl() const { DARABONBA_PTR_GET_DEFAULT(sourceUrl_, "") };
      inline ModuleVersions& setSourceUrl(string sourceUrl) { DARABONBA_PTR_SET_VALUE(sourceUrl_, sourceUrl) };


      // version Field Functions 
      bool hasVersion() const { return this->version_ != nullptr;};
      void deleteVersion() { this->version_ = nullptr;};
      inline string getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
      inline ModuleVersions& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


    protected:
      shared_ptr<string> createTime_ {};
      shared_ptr<string> moduleName_ {};
      shared_ptr<string> namespaceName_ {};
      shared_ptr<string> provider_ {};
      shared_ptr<string> source_ {};
      shared_ptr<string> sourceUrl_ {};
      shared_ptr<string> version_ {};
    };

    virtual bool empty() const override { return this->count_ == nullptr
        && this->maxResults_ == nullptr && this->moduleVersions_ == nullptr && this->nextToken_ == nullptr && this->requestId_ == nullptr; };
    // count Field Functions 
    bool hasCount() const { return this->count_ != nullptr;};
    void deleteCount() { this->count_ = nullptr;};
    inline int64_t getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, 0L) };
    inline ListRegistryModuleVersionsResponseBody& setCount(int64_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListRegistryModuleVersionsResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // moduleVersions Field Functions 
    bool hasModuleVersions() const { return this->moduleVersions_ != nullptr;};
    void deleteModuleVersions() { this->moduleVersions_ = nullptr;};
    inline const vector<ListRegistryModuleVersionsResponseBody::ModuleVersions> & getModuleVersions() const { DARABONBA_PTR_GET_CONST(moduleVersions_, vector<ListRegistryModuleVersionsResponseBody::ModuleVersions>) };
    inline vector<ListRegistryModuleVersionsResponseBody::ModuleVersions> getModuleVersions() { DARABONBA_PTR_GET(moduleVersions_, vector<ListRegistryModuleVersionsResponseBody::ModuleVersions>) };
    inline ListRegistryModuleVersionsResponseBody& setModuleVersions(const vector<ListRegistryModuleVersionsResponseBody::ModuleVersions> & moduleVersions) { DARABONBA_PTR_SET_VALUE(moduleVersions_, moduleVersions) };
    inline ListRegistryModuleVersionsResponseBody& setModuleVersions(vector<ListRegistryModuleVersionsResponseBody::ModuleVersions> && moduleVersions) { DARABONBA_PTR_SET_RVALUE(moduleVersions_, moduleVersions) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListRegistryModuleVersionsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListRegistryModuleVersionsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<int64_t> count_ {};
    shared_ptr<int32_t> maxResults_ {};
    shared_ptr<vector<ListRegistryModuleVersionsResponseBody::ModuleVersions>> moduleVersions_ {};
    shared_ptr<string> nextToken_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IaCService20210806
#endif
