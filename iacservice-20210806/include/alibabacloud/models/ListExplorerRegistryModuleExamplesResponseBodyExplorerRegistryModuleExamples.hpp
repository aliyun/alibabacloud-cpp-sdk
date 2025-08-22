// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTEXPLORERREGISTRYMODULEEXAMPLESRESPONSEBODYEXPLORERREGISTRYMODULEEXAMPLES_HPP_
#define ALIBABACLOUD_MODELS_LISTEXPLORERREGISTRYMODULEEXAMPLESRESPONSEBODYEXPLORERREGISTRYMODULEEXAMPLES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IaCService20210806
{
namespace Models
{
  class ListExplorerRegistryModuleExamplesResponseBodyExplorerRegistryModuleExamples : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListExplorerRegistryModuleExamplesResponseBodyExplorerRegistryModuleExamples& obj) { 
      DARABONBA_PTR_TO_JSON(exampleName, exampleName_);
      DARABONBA_PTR_TO_JSON(examplePath, examplePath_);
      DARABONBA_ANY_TO_JSON(exampleSchema, exampleSchema_);
      DARABONBA_PTR_TO_JSON(moduleName, moduleName_);
      DARABONBA_PTR_TO_JSON(moduleVersion, moduleVersion_);
      DARABONBA_PTR_TO_JSON(namespaceName, namespaceName_);
      DARABONBA_PTR_TO_JSON(status, status_);
    };
    friend void from_json(const Darabonba::Json& j, ListExplorerRegistryModuleExamplesResponseBodyExplorerRegistryModuleExamples& obj) { 
      DARABONBA_PTR_FROM_JSON(exampleName, exampleName_);
      DARABONBA_PTR_FROM_JSON(examplePath, examplePath_);
      DARABONBA_ANY_FROM_JSON(exampleSchema, exampleSchema_);
      DARABONBA_PTR_FROM_JSON(moduleName, moduleName_);
      DARABONBA_PTR_FROM_JSON(moduleVersion, moduleVersion_);
      DARABONBA_PTR_FROM_JSON(namespaceName, namespaceName_);
      DARABONBA_PTR_FROM_JSON(status, status_);
    };
    ListExplorerRegistryModuleExamplesResponseBodyExplorerRegistryModuleExamples() = default ;
    ListExplorerRegistryModuleExamplesResponseBodyExplorerRegistryModuleExamples(const ListExplorerRegistryModuleExamplesResponseBodyExplorerRegistryModuleExamples &) = default ;
    ListExplorerRegistryModuleExamplesResponseBodyExplorerRegistryModuleExamples(ListExplorerRegistryModuleExamplesResponseBodyExplorerRegistryModuleExamples &&) = default ;
    ListExplorerRegistryModuleExamplesResponseBodyExplorerRegistryModuleExamples(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListExplorerRegistryModuleExamplesResponseBodyExplorerRegistryModuleExamples() = default ;
    ListExplorerRegistryModuleExamplesResponseBodyExplorerRegistryModuleExamples& operator=(const ListExplorerRegistryModuleExamplesResponseBodyExplorerRegistryModuleExamples &) = default ;
    ListExplorerRegistryModuleExamplesResponseBodyExplorerRegistryModuleExamples& operator=(ListExplorerRegistryModuleExamplesResponseBodyExplorerRegistryModuleExamples &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->exampleName_ != nullptr
        && this->examplePath_ != nullptr && this->exampleSchema_ != nullptr && this->moduleName_ != nullptr && this->moduleVersion_ != nullptr && this->namespaceName_ != nullptr
        && this->status_ != nullptr; };
    // exampleName Field Functions 
    bool hasExampleName() const { return this->exampleName_ != nullptr;};
    void deleteExampleName() { this->exampleName_ = nullptr;};
    inline string exampleName() const { DARABONBA_PTR_GET_DEFAULT(exampleName_, "") };
    inline ListExplorerRegistryModuleExamplesResponseBodyExplorerRegistryModuleExamples& setExampleName(string exampleName) { DARABONBA_PTR_SET_VALUE(exampleName_, exampleName) };


    // examplePath Field Functions 
    bool hasExamplePath() const { return this->examplePath_ != nullptr;};
    void deleteExamplePath() { this->examplePath_ = nullptr;};
    inline string examplePath() const { DARABONBA_PTR_GET_DEFAULT(examplePath_, "") };
    inline ListExplorerRegistryModuleExamplesResponseBodyExplorerRegistryModuleExamples& setExamplePath(string examplePath) { DARABONBA_PTR_SET_VALUE(examplePath_, examplePath) };


    // exampleSchema Field Functions 
    bool hasExampleSchema() const { return this->exampleSchema_ != nullptr;};
    void deleteExampleSchema() { this->exampleSchema_ = nullptr;};
    inline     const Darabonba::Json & exampleSchema() const { DARABONBA_GET(exampleSchema_) };
    Darabonba::Json & exampleSchema() { DARABONBA_GET(exampleSchema_) };
    inline ListExplorerRegistryModuleExamplesResponseBodyExplorerRegistryModuleExamples& setExampleSchema(const Darabonba::Json & exampleSchema) { DARABONBA_SET_VALUE(exampleSchema_, exampleSchema) };
    inline ListExplorerRegistryModuleExamplesResponseBodyExplorerRegistryModuleExamples& setExampleSchema(Darabonba::Json & exampleSchema) { DARABONBA_SET_RVALUE(exampleSchema_, exampleSchema) };


    // moduleName Field Functions 
    bool hasModuleName() const { return this->moduleName_ != nullptr;};
    void deleteModuleName() { this->moduleName_ = nullptr;};
    inline string moduleName() const { DARABONBA_PTR_GET_DEFAULT(moduleName_, "") };
    inline ListExplorerRegistryModuleExamplesResponseBodyExplorerRegistryModuleExamples& setModuleName(string moduleName) { DARABONBA_PTR_SET_VALUE(moduleName_, moduleName) };


    // moduleVersion Field Functions 
    bool hasModuleVersion() const { return this->moduleVersion_ != nullptr;};
    void deleteModuleVersion() { this->moduleVersion_ = nullptr;};
    inline string moduleVersion() const { DARABONBA_PTR_GET_DEFAULT(moduleVersion_, "") };
    inline ListExplorerRegistryModuleExamplesResponseBodyExplorerRegistryModuleExamples& setModuleVersion(string moduleVersion) { DARABONBA_PTR_SET_VALUE(moduleVersion_, moduleVersion) };


    // namespaceName Field Functions 
    bool hasNamespaceName() const { return this->namespaceName_ != nullptr;};
    void deleteNamespaceName() { this->namespaceName_ = nullptr;};
    inline string namespaceName() const { DARABONBA_PTR_GET_DEFAULT(namespaceName_, "") };
    inline ListExplorerRegistryModuleExamplesResponseBodyExplorerRegistryModuleExamples& setNamespaceName(string namespaceName) { DARABONBA_PTR_SET_VALUE(namespaceName_, namespaceName) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListExplorerRegistryModuleExamplesResponseBodyExplorerRegistryModuleExamples& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    std::shared_ptr<string> exampleName_ = nullptr;
    std::shared_ptr<string> examplePath_ = nullptr;
    Darabonba::Json exampleSchema_ = nullptr;
    std::shared_ptr<string> moduleName_ = nullptr;
    std::shared_ptr<string> moduleVersion_ = nullptr;
    std::shared_ptr<string> namespaceName_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IaCService20210806
#endif
