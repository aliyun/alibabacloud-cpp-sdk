// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTEXPLORERREGISTRYMODULEVERSIONSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTEXPLORERREGISTRYMODULEVERSIONSRESPONSEBODY_HPP_
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
  class ListExplorerRegistryModuleVersionsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListExplorerRegistryModuleVersionsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(explorerRegistryModuleVersions, explorerRegistryModuleVersions_);
      DARABONBA_PTR_TO_JSON(maxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(nextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(totalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListExplorerRegistryModuleVersionsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(explorerRegistryModuleVersions, explorerRegistryModuleVersions_);
      DARABONBA_PTR_FROM_JSON(maxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(nextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(totalCount, totalCount_);
    };
    ListExplorerRegistryModuleVersionsResponseBody() = default ;
    ListExplorerRegistryModuleVersionsResponseBody(const ListExplorerRegistryModuleVersionsResponseBody &) = default ;
    ListExplorerRegistryModuleVersionsResponseBody(ListExplorerRegistryModuleVersionsResponseBody &&) = default ;
    ListExplorerRegistryModuleVersionsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListExplorerRegistryModuleVersionsResponseBody() = default ;
    ListExplorerRegistryModuleVersionsResponseBody& operator=(const ListExplorerRegistryModuleVersionsResponseBody &) = default ;
    ListExplorerRegistryModuleVersionsResponseBody& operator=(ListExplorerRegistryModuleVersionsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ExplorerRegistryModuleVersions : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ExplorerRegistryModuleVersions& obj) { 
        DARABONBA_ANY_TO_JSON(moduleDetail, moduleDetail_);
        DARABONBA_ANY_TO_JSON(moduleFile, moduleFile_);
        DARABONBA_PTR_TO_JSON(moduleName, moduleName_);
        DARABONBA_PTR_TO_JSON(namespaceName, namespaceName_);
        DARABONBA_ANY_TO_JSON(properties, properties_);
        DARABONBA_PTR_TO_JSON(source, source_);
        DARABONBA_PTR_TO_JSON(version, version_);
      };
      friend void from_json(const Darabonba::Json& j, ExplorerRegistryModuleVersions& obj) { 
        DARABONBA_ANY_FROM_JSON(moduleDetail, moduleDetail_);
        DARABONBA_ANY_FROM_JSON(moduleFile, moduleFile_);
        DARABONBA_PTR_FROM_JSON(moduleName, moduleName_);
        DARABONBA_PTR_FROM_JSON(namespaceName, namespaceName_);
        DARABONBA_ANY_FROM_JSON(properties, properties_);
        DARABONBA_PTR_FROM_JSON(source, source_);
        DARABONBA_PTR_FROM_JSON(version, version_);
      };
      ExplorerRegistryModuleVersions() = default ;
      ExplorerRegistryModuleVersions(const ExplorerRegistryModuleVersions &) = default ;
      ExplorerRegistryModuleVersions(ExplorerRegistryModuleVersions &&) = default ;
      ExplorerRegistryModuleVersions(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ExplorerRegistryModuleVersions() = default ;
      ExplorerRegistryModuleVersions& operator=(const ExplorerRegistryModuleVersions &) = default ;
      ExplorerRegistryModuleVersions& operator=(ExplorerRegistryModuleVersions &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->moduleDetail_ == nullptr
        && this->moduleFile_ == nullptr && this->moduleName_ == nullptr && this->namespaceName_ == nullptr && this->properties_ == nullptr && this->source_ == nullptr
        && this->version_ == nullptr; };
      // moduleDetail Field Functions 
      bool hasModuleDetail() const { return this->moduleDetail_ != nullptr;};
      void deleteModuleDetail() { this->moduleDetail_ = nullptr;};
      inline       const Darabonba::Json & getModuleDetail() const { DARABONBA_GET(moduleDetail_) };
      Darabonba::Json & getModuleDetail() { DARABONBA_GET(moduleDetail_) };
      inline ExplorerRegistryModuleVersions& setModuleDetail(const Darabonba::Json & moduleDetail) { DARABONBA_SET_VALUE(moduleDetail_, moduleDetail) };
      inline ExplorerRegistryModuleVersions& setModuleDetail(Darabonba::Json && moduleDetail) { DARABONBA_SET_RVALUE(moduleDetail_, moduleDetail) };


      // moduleFile Field Functions 
      bool hasModuleFile() const { return this->moduleFile_ != nullptr;};
      void deleteModuleFile() { this->moduleFile_ = nullptr;};
      inline       const Darabonba::Json & getModuleFile() const { DARABONBA_GET(moduleFile_) };
      Darabonba::Json & getModuleFile() { DARABONBA_GET(moduleFile_) };
      inline ExplorerRegistryModuleVersions& setModuleFile(const Darabonba::Json & moduleFile) { DARABONBA_SET_VALUE(moduleFile_, moduleFile) };
      inline ExplorerRegistryModuleVersions& setModuleFile(Darabonba::Json && moduleFile) { DARABONBA_SET_RVALUE(moduleFile_, moduleFile) };


      // moduleName Field Functions 
      bool hasModuleName() const { return this->moduleName_ != nullptr;};
      void deleteModuleName() { this->moduleName_ = nullptr;};
      inline string getModuleName() const { DARABONBA_PTR_GET_DEFAULT(moduleName_, "") };
      inline ExplorerRegistryModuleVersions& setModuleName(string moduleName) { DARABONBA_PTR_SET_VALUE(moduleName_, moduleName) };


      // namespaceName Field Functions 
      bool hasNamespaceName() const { return this->namespaceName_ != nullptr;};
      void deleteNamespaceName() { this->namespaceName_ = nullptr;};
      inline string getNamespaceName() const { DARABONBA_PTR_GET_DEFAULT(namespaceName_, "") };
      inline ExplorerRegistryModuleVersions& setNamespaceName(string namespaceName) { DARABONBA_PTR_SET_VALUE(namespaceName_, namespaceName) };


      // properties Field Functions 
      bool hasProperties() const { return this->properties_ != nullptr;};
      void deleteProperties() { this->properties_ = nullptr;};
      inline       const Darabonba::Json & getProperties() const { DARABONBA_GET(properties_) };
      Darabonba::Json & getProperties() { DARABONBA_GET(properties_) };
      inline ExplorerRegistryModuleVersions& setProperties(const Darabonba::Json & properties) { DARABONBA_SET_VALUE(properties_, properties) };
      inline ExplorerRegistryModuleVersions& setProperties(Darabonba::Json && properties) { DARABONBA_SET_RVALUE(properties_, properties) };


      // source Field Functions 
      bool hasSource() const { return this->source_ != nullptr;};
      void deleteSource() { this->source_ = nullptr;};
      inline string getSource() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
      inline ExplorerRegistryModuleVersions& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


      // version Field Functions 
      bool hasVersion() const { return this->version_ != nullptr;};
      void deleteVersion() { this->version_ = nullptr;};
      inline string getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
      inline ExplorerRegistryModuleVersions& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


    protected:
      Darabonba::Json moduleDetail_ {};
      Darabonba::Json moduleFile_ {};
      shared_ptr<string> moduleName_ {};
      shared_ptr<string> namespaceName_ {};
      Darabonba::Json properties_ {};
      shared_ptr<string> source_ {};
      shared_ptr<string> version_ {};
    };

    virtual bool empty() const override { return this->explorerRegistryModuleVersions_ == nullptr
        && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // explorerRegistryModuleVersions Field Functions 
    bool hasExplorerRegistryModuleVersions() const { return this->explorerRegistryModuleVersions_ != nullptr;};
    void deleteExplorerRegistryModuleVersions() { this->explorerRegistryModuleVersions_ = nullptr;};
    inline const vector<ListExplorerRegistryModuleVersionsResponseBody::ExplorerRegistryModuleVersions> & getExplorerRegistryModuleVersions() const { DARABONBA_PTR_GET_CONST(explorerRegistryModuleVersions_, vector<ListExplorerRegistryModuleVersionsResponseBody::ExplorerRegistryModuleVersions>) };
    inline vector<ListExplorerRegistryModuleVersionsResponseBody::ExplorerRegistryModuleVersions> getExplorerRegistryModuleVersions() { DARABONBA_PTR_GET(explorerRegistryModuleVersions_, vector<ListExplorerRegistryModuleVersionsResponseBody::ExplorerRegistryModuleVersions>) };
    inline ListExplorerRegistryModuleVersionsResponseBody& setExplorerRegistryModuleVersions(const vector<ListExplorerRegistryModuleVersionsResponseBody::ExplorerRegistryModuleVersions> & explorerRegistryModuleVersions) { DARABONBA_PTR_SET_VALUE(explorerRegistryModuleVersions_, explorerRegistryModuleVersions) };
    inline ListExplorerRegistryModuleVersionsResponseBody& setExplorerRegistryModuleVersions(vector<ListExplorerRegistryModuleVersionsResponseBody::ExplorerRegistryModuleVersions> && explorerRegistryModuleVersions) { DARABONBA_PTR_SET_RVALUE(explorerRegistryModuleVersions_, explorerRegistryModuleVersions) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListExplorerRegistryModuleVersionsResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListExplorerRegistryModuleVersionsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListExplorerRegistryModuleVersionsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ListExplorerRegistryModuleVersionsResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    shared_ptr<vector<ListExplorerRegistryModuleVersionsResponseBody::ExplorerRegistryModuleVersions>> explorerRegistryModuleVersions_ {};
    shared_ptr<int32_t> maxResults_ {};
    shared_ptr<string> nextToken_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<int64_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IaCService20210806
#endif
