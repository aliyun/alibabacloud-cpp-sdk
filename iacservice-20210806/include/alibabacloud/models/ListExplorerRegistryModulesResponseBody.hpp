// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTEXPLORERREGISTRYMODULESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTEXPLORERREGISTRYMODULESRESPONSEBODY_HPP_
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
  class ListExplorerRegistryModulesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListExplorerRegistryModulesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(explorerRegistryModules, explorerRegistryModules_);
      DARABONBA_PTR_TO_JSON(maxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(nextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(totalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListExplorerRegistryModulesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(explorerRegistryModules, explorerRegistryModules_);
      DARABONBA_PTR_FROM_JSON(maxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(nextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(totalCount, totalCount_);
    };
    ListExplorerRegistryModulesResponseBody() = default ;
    ListExplorerRegistryModulesResponseBody(const ListExplorerRegistryModulesResponseBody &) = default ;
    ListExplorerRegistryModulesResponseBody(ListExplorerRegistryModulesResponseBody &&) = default ;
    ListExplorerRegistryModulesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListExplorerRegistryModulesResponseBody() = default ;
    ListExplorerRegistryModulesResponseBody& operator=(const ListExplorerRegistryModulesResponseBody &) = default ;
    ListExplorerRegistryModulesResponseBody& operator=(ListExplorerRegistryModulesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ExplorerRegistryModules : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ExplorerRegistryModules& obj) { 
        DARABONBA_PTR_TO_JSON(description, description_);
        DARABONBA_PTR_TO_JSON(downloads, downloads_);
        DARABONBA_PTR_TO_JSON(latestVersion, latestVersion_);
        DARABONBA_PTR_TO_JSON(moduleName, moduleName_);
        DARABONBA_PTR_TO_JSON(namespaceName, namespaceName_);
        DARABONBA_PTR_TO_JSON(source, source_);
        DARABONBA_PTR_TO_JSON(status, status_);
      };
      friend void from_json(const Darabonba::Json& j, ExplorerRegistryModules& obj) { 
        DARABONBA_PTR_FROM_JSON(description, description_);
        DARABONBA_PTR_FROM_JSON(downloads, downloads_);
        DARABONBA_PTR_FROM_JSON(latestVersion, latestVersion_);
        DARABONBA_PTR_FROM_JSON(moduleName, moduleName_);
        DARABONBA_PTR_FROM_JSON(namespaceName, namespaceName_);
        DARABONBA_PTR_FROM_JSON(source, source_);
        DARABONBA_PTR_FROM_JSON(status, status_);
      };
      ExplorerRegistryModules() = default ;
      ExplorerRegistryModules(const ExplorerRegistryModules &) = default ;
      ExplorerRegistryModules(ExplorerRegistryModules &&) = default ;
      ExplorerRegistryModules(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ExplorerRegistryModules() = default ;
      ExplorerRegistryModules& operator=(const ExplorerRegistryModules &) = default ;
      ExplorerRegistryModules& operator=(ExplorerRegistryModules &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->description_ == nullptr
        && this->downloads_ == nullptr && this->latestVersion_ == nullptr && this->moduleName_ == nullptr && this->namespaceName_ == nullptr && this->source_ == nullptr
        && this->status_ == nullptr; };
      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline ExplorerRegistryModules& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // downloads Field Functions 
      bool hasDownloads() const { return this->downloads_ != nullptr;};
      void deleteDownloads() { this->downloads_ = nullptr;};
      inline int64_t getDownloads() const { DARABONBA_PTR_GET_DEFAULT(downloads_, 0L) };
      inline ExplorerRegistryModules& setDownloads(int64_t downloads) { DARABONBA_PTR_SET_VALUE(downloads_, downloads) };


      // latestVersion Field Functions 
      bool hasLatestVersion() const { return this->latestVersion_ != nullptr;};
      void deleteLatestVersion() { this->latestVersion_ = nullptr;};
      inline string getLatestVersion() const { DARABONBA_PTR_GET_DEFAULT(latestVersion_, "") };
      inline ExplorerRegistryModules& setLatestVersion(string latestVersion) { DARABONBA_PTR_SET_VALUE(latestVersion_, latestVersion) };


      // moduleName Field Functions 
      bool hasModuleName() const { return this->moduleName_ != nullptr;};
      void deleteModuleName() { this->moduleName_ = nullptr;};
      inline string getModuleName() const { DARABONBA_PTR_GET_DEFAULT(moduleName_, "") };
      inline ExplorerRegistryModules& setModuleName(string moduleName) { DARABONBA_PTR_SET_VALUE(moduleName_, moduleName) };


      // namespaceName Field Functions 
      bool hasNamespaceName() const { return this->namespaceName_ != nullptr;};
      void deleteNamespaceName() { this->namespaceName_ = nullptr;};
      inline string getNamespaceName() const { DARABONBA_PTR_GET_DEFAULT(namespaceName_, "") };
      inline ExplorerRegistryModules& setNamespaceName(string namespaceName) { DARABONBA_PTR_SET_VALUE(namespaceName_, namespaceName) };


      // source Field Functions 
      bool hasSource() const { return this->source_ != nullptr;};
      void deleteSource() { this->source_ = nullptr;};
      inline string getSource() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
      inline ExplorerRegistryModules& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline ExplorerRegistryModules& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    protected:
      shared_ptr<string> description_ {};
      shared_ptr<int64_t> downloads_ {};
      shared_ptr<string> latestVersion_ {};
      shared_ptr<string> moduleName_ {};
      shared_ptr<string> namespaceName_ {};
      shared_ptr<string> source_ {};
      shared_ptr<string> status_ {};
    };

    virtual bool empty() const override { return this->explorerRegistryModules_ == nullptr
        && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // explorerRegistryModules Field Functions 
    bool hasExplorerRegistryModules() const { return this->explorerRegistryModules_ != nullptr;};
    void deleteExplorerRegistryModules() { this->explorerRegistryModules_ = nullptr;};
    inline const vector<ListExplorerRegistryModulesResponseBody::ExplorerRegistryModules> & getExplorerRegistryModules() const { DARABONBA_PTR_GET_CONST(explorerRegistryModules_, vector<ListExplorerRegistryModulesResponseBody::ExplorerRegistryModules>) };
    inline vector<ListExplorerRegistryModulesResponseBody::ExplorerRegistryModules> getExplorerRegistryModules() { DARABONBA_PTR_GET(explorerRegistryModules_, vector<ListExplorerRegistryModulesResponseBody::ExplorerRegistryModules>) };
    inline ListExplorerRegistryModulesResponseBody& setExplorerRegistryModules(const vector<ListExplorerRegistryModulesResponseBody::ExplorerRegistryModules> & explorerRegistryModules) { DARABONBA_PTR_SET_VALUE(explorerRegistryModules_, explorerRegistryModules) };
    inline ListExplorerRegistryModulesResponseBody& setExplorerRegistryModules(vector<ListExplorerRegistryModulesResponseBody::ExplorerRegistryModules> && explorerRegistryModules) { DARABONBA_PTR_SET_RVALUE(explorerRegistryModules_, explorerRegistryModules) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListExplorerRegistryModulesResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListExplorerRegistryModulesResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListExplorerRegistryModulesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ListExplorerRegistryModulesResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    shared_ptr<vector<ListExplorerRegistryModulesResponseBody::ExplorerRegistryModules>> explorerRegistryModules_ {};
    shared_ptr<int32_t> maxResults_ {};
    shared_ptr<string> nextToken_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<int64_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IaCService20210806
#endif
