// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTEXPLORERREGISTRYMODULEEXAMPLESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTEXPLORERREGISTRYMODULEEXAMPLESRESPONSEBODY_HPP_
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
  class ListExplorerRegistryModuleExamplesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListExplorerRegistryModuleExamplesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(explorerRegistryModuleExamples, explorerRegistryModuleExamples_);
      DARABONBA_PTR_TO_JSON(maxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(nextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(totalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListExplorerRegistryModuleExamplesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(explorerRegistryModuleExamples, explorerRegistryModuleExamples_);
      DARABONBA_PTR_FROM_JSON(maxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(nextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(totalCount, totalCount_);
    };
    ListExplorerRegistryModuleExamplesResponseBody() = default ;
    ListExplorerRegistryModuleExamplesResponseBody(const ListExplorerRegistryModuleExamplesResponseBody &) = default ;
    ListExplorerRegistryModuleExamplesResponseBody(ListExplorerRegistryModuleExamplesResponseBody &&) = default ;
    ListExplorerRegistryModuleExamplesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListExplorerRegistryModuleExamplesResponseBody() = default ;
    ListExplorerRegistryModuleExamplesResponseBody& operator=(const ListExplorerRegistryModuleExamplesResponseBody &) = default ;
    ListExplorerRegistryModuleExamplesResponseBody& operator=(ListExplorerRegistryModuleExamplesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ExplorerRegistryModuleExamples : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ExplorerRegistryModuleExamples& obj) { 
        DARABONBA_PTR_TO_JSON(exampleName, exampleName_);
        DARABONBA_PTR_TO_JSON(examplePath, examplePath_);
        DARABONBA_ANY_TO_JSON(exampleSchema, exampleSchema_);
        DARABONBA_PTR_TO_JSON(moduleName, moduleName_);
        DARABONBA_PTR_TO_JSON(moduleVersion, moduleVersion_);
        DARABONBA_PTR_TO_JSON(namespaceName, namespaceName_);
        DARABONBA_PTR_TO_JSON(status, status_);
      };
      friend void from_json(const Darabonba::Json& j, ExplorerRegistryModuleExamples& obj) { 
        DARABONBA_PTR_FROM_JSON(exampleName, exampleName_);
        DARABONBA_PTR_FROM_JSON(examplePath, examplePath_);
        DARABONBA_ANY_FROM_JSON(exampleSchema, exampleSchema_);
        DARABONBA_PTR_FROM_JSON(moduleName, moduleName_);
        DARABONBA_PTR_FROM_JSON(moduleVersion, moduleVersion_);
        DARABONBA_PTR_FROM_JSON(namespaceName, namespaceName_);
        DARABONBA_PTR_FROM_JSON(status, status_);
      };
      ExplorerRegistryModuleExamples() = default ;
      ExplorerRegistryModuleExamples(const ExplorerRegistryModuleExamples &) = default ;
      ExplorerRegistryModuleExamples(ExplorerRegistryModuleExamples &&) = default ;
      ExplorerRegistryModuleExamples(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ExplorerRegistryModuleExamples() = default ;
      ExplorerRegistryModuleExamples& operator=(const ExplorerRegistryModuleExamples &) = default ;
      ExplorerRegistryModuleExamples& operator=(ExplorerRegistryModuleExamples &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->exampleName_ == nullptr
        && this->examplePath_ == nullptr && this->exampleSchema_ == nullptr && this->moduleName_ == nullptr && this->moduleVersion_ == nullptr && this->namespaceName_ == nullptr
        && this->status_ == nullptr; };
      // exampleName Field Functions 
      bool hasExampleName() const { return this->exampleName_ != nullptr;};
      void deleteExampleName() { this->exampleName_ = nullptr;};
      inline string getExampleName() const { DARABONBA_PTR_GET_DEFAULT(exampleName_, "") };
      inline ExplorerRegistryModuleExamples& setExampleName(string exampleName) { DARABONBA_PTR_SET_VALUE(exampleName_, exampleName) };


      // examplePath Field Functions 
      bool hasExamplePath() const { return this->examplePath_ != nullptr;};
      void deleteExamplePath() { this->examplePath_ = nullptr;};
      inline string getExamplePath() const { DARABONBA_PTR_GET_DEFAULT(examplePath_, "") };
      inline ExplorerRegistryModuleExamples& setExamplePath(string examplePath) { DARABONBA_PTR_SET_VALUE(examplePath_, examplePath) };


      // exampleSchema Field Functions 
      bool hasExampleSchema() const { return this->exampleSchema_ != nullptr;};
      void deleteExampleSchema() { this->exampleSchema_ = nullptr;};
      inline       const Darabonba::Json & getExampleSchema() const { DARABONBA_GET(exampleSchema_) };
      Darabonba::Json & getExampleSchema() { DARABONBA_GET(exampleSchema_) };
      inline ExplorerRegistryModuleExamples& setExampleSchema(const Darabonba::Json & exampleSchema) { DARABONBA_SET_VALUE(exampleSchema_, exampleSchema) };
      inline ExplorerRegistryModuleExamples& setExampleSchema(Darabonba::Json && exampleSchema) { DARABONBA_SET_RVALUE(exampleSchema_, exampleSchema) };


      // moduleName Field Functions 
      bool hasModuleName() const { return this->moduleName_ != nullptr;};
      void deleteModuleName() { this->moduleName_ = nullptr;};
      inline string getModuleName() const { DARABONBA_PTR_GET_DEFAULT(moduleName_, "") };
      inline ExplorerRegistryModuleExamples& setModuleName(string moduleName) { DARABONBA_PTR_SET_VALUE(moduleName_, moduleName) };


      // moduleVersion Field Functions 
      bool hasModuleVersion() const { return this->moduleVersion_ != nullptr;};
      void deleteModuleVersion() { this->moduleVersion_ = nullptr;};
      inline string getModuleVersion() const { DARABONBA_PTR_GET_DEFAULT(moduleVersion_, "") };
      inline ExplorerRegistryModuleExamples& setModuleVersion(string moduleVersion) { DARABONBA_PTR_SET_VALUE(moduleVersion_, moduleVersion) };


      // namespaceName Field Functions 
      bool hasNamespaceName() const { return this->namespaceName_ != nullptr;};
      void deleteNamespaceName() { this->namespaceName_ = nullptr;};
      inline string getNamespaceName() const { DARABONBA_PTR_GET_DEFAULT(namespaceName_, "") };
      inline ExplorerRegistryModuleExamples& setNamespaceName(string namespaceName) { DARABONBA_PTR_SET_VALUE(namespaceName_, namespaceName) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline ExplorerRegistryModuleExamples& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    protected:
      shared_ptr<string> exampleName_ {};
      shared_ptr<string> examplePath_ {};
      Darabonba::Json exampleSchema_ {};
      shared_ptr<string> moduleName_ {};
      shared_ptr<string> moduleVersion_ {};
      shared_ptr<string> namespaceName_ {};
      shared_ptr<string> status_ {};
    };

    virtual bool empty() const override { return this->explorerRegistryModuleExamples_ == nullptr
        && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // explorerRegistryModuleExamples Field Functions 
    bool hasExplorerRegistryModuleExamples() const { return this->explorerRegistryModuleExamples_ != nullptr;};
    void deleteExplorerRegistryModuleExamples() { this->explorerRegistryModuleExamples_ = nullptr;};
    inline const vector<ListExplorerRegistryModuleExamplesResponseBody::ExplorerRegistryModuleExamples> & getExplorerRegistryModuleExamples() const { DARABONBA_PTR_GET_CONST(explorerRegistryModuleExamples_, vector<ListExplorerRegistryModuleExamplesResponseBody::ExplorerRegistryModuleExamples>) };
    inline vector<ListExplorerRegistryModuleExamplesResponseBody::ExplorerRegistryModuleExamples> getExplorerRegistryModuleExamples() { DARABONBA_PTR_GET(explorerRegistryModuleExamples_, vector<ListExplorerRegistryModuleExamplesResponseBody::ExplorerRegistryModuleExamples>) };
    inline ListExplorerRegistryModuleExamplesResponseBody& setExplorerRegistryModuleExamples(const vector<ListExplorerRegistryModuleExamplesResponseBody::ExplorerRegistryModuleExamples> & explorerRegistryModuleExamples) { DARABONBA_PTR_SET_VALUE(explorerRegistryModuleExamples_, explorerRegistryModuleExamples) };
    inline ListExplorerRegistryModuleExamplesResponseBody& setExplorerRegistryModuleExamples(vector<ListExplorerRegistryModuleExamplesResponseBody::ExplorerRegistryModuleExamples> && explorerRegistryModuleExamples) { DARABONBA_PTR_SET_RVALUE(explorerRegistryModuleExamples_, explorerRegistryModuleExamples) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListExplorerRegistryModuleExamplesResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListExplorerRegistryModuleExamplesResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListExplorerRegistryModuleExamplesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ListExplorerRegistryModuleExamplesResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    shared_ptr<vector<ListExplorerRegistryModuleExamplesResponseBody::ExplorerRegistryModuleExamples>> explorerRegistryModuleExamples_ {};
    shared_ptr<int32_t> maxResults_ {};
    shared_ptr<string> nextToken_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<int64_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IaCService20210806
#endif
