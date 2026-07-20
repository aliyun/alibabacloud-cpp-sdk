// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_FUNCTIONDEFINITION_HPP_
#define ALIBABACLOUD_MODELS_FUNCTIONDEFINITION_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/FunctionFileResource.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DlfNext20250310
{
namespace Models
{
  class FunctionDefinition : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const FunctionDefinition& obj) { 
      DARABONBA_PTR_TO_JSON(className, className_);
      DARABONBA_PTR_TO_JSON(definition, definition_);
      DARABONBA_PTR_TO_JSON(fileResources, fileResources_);
      DARABONBA_PTR_TO_JSON(functionName, functionName_);
      DARABONBA_PTR_TO_JSON(language, language_);
      DARABONBA_PTR_TO_JSON(type, type_);
    };
    friend void from_json(const Darabonba::Json& j, FunctionDefinition& obj) { 
      DARABONBA_PTR_FROM_JSON(className, className_);
      DARABONBA_PTR_FROM_JSON(definition, definition_);
      DARABONBA_PTR_FROM_JSON(fileResources, fileResources_);
      DARABONBA_PTR_FROM_JSON(functionName, functionName_);
      DARABONBA_PTR_FROM_JSON(language, language_);
      DARABONBA_PTR_FROM_JSON(type, type_);
    };
    FunctionDefinition() = default ;
    FunctionDefinition(const FunctionDefinition &) = default ;
    FunctionDefinition(FunctionDefinition &&) = default ;
    FunctionDefinition(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~FunctionDefinition() = default ;
    FunctionDefinition& operator=(const FunctionDefinition &) = default ;
    FunctionDefinition& operator=(FunctionDefinition &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->className_ == nullptr
        && this->definition_ == nullptr && this->fileResources_ == nullptr && this->functionName_ == nullptr && this->language_ == nullptr && this->type_ == nullptr; };
    // className Field Functions 
    bool hasClassName() const { return this->className_ != nullptr;};
    void deleteClassName() { this->className_ = nullptr;};
    inline string getClassName() const { DARABONBA_PTR_GET_DEFAULT(className_, "") };
    inline FunctionDefinition& setClassName(string className) { DARABONBA_PTR_SET_VALUE(className_, className) };


    // definition Field Functions 
    bool hasDefinition() const { return this->definition_ != nullptr;};
    void deleteDefinition() { this->definition_ = nullptr;};
    inline string getDefinition() const { DARABONBA_PTR_GET_DEFAULT(definition_, "") };
    inline FunctionDefinition& setDefinition(string definition) { DARABONBA_PTR_SET_VALUE(definition_, definition) };


    // fileResources Field Functions 
    bool hasFileResources() const { return this->fileResources_ != nullptr;};
    void deleteFileResources() { this->fileResources_ = nullptr;};
    inline const vector<FunctionFileResource> & getFileResources() const { DARABONBA_PTR_GET_CONST(fileResources_, vector<FunctionFileResource>) };
    inline vector<FunctionFileResource> getFileResources() { DARABONBA_PTR_GET(fileResources_, vector<FunctionFileResource>) };
    inline FunctionDefinition& setFileResources(const vector<FunctionFileResource> & fileResources) { DARABONBA_PTR_SET_VALUE(fileResources_, fileResources) };
    inline FunctionDefinition& setFileResources(vector<FunctionFileResource> && fileResources) { DARABONBA_PTR_SET_RVALUE(fileResources_, fileResources) };


    // functionName Field Functions 
    bool hasFunctionName() const { return this->functionName_ != nullptr;};
    void deleteFunctionName() { this->functionName_ = nullptr;};
    inline string getFunctionName() const { DARABONBA_PTR_GET_DEFAULT(functionName_, "") };
    inline FunctionDefinition& setFunctionName(string functionName) { DARABONBA_PTR_SET_VALUE(functionName_, functionName) };


    // language Field Functions 
    bool hasLanguage() const { return this->language_ != nullptr;};
    void deleteLanguage() { this->language_ = nullptr;};
    inline string getLanguage() const { DARABONBA_PTR_GET_DEFAULT(language_, "") };
    inline FunctionDefinition& setLanguage(string language) { DARABONBA_PTR_SET_VALUE(language_, language) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline FunctionDefinition& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // required in FileFunctionDefinition
    shared_ptr<string> className_ {};
    // required in SQLFunctionDefinition/LambdaFunctionDefinition
    shared_ptr<string> definition_ {};
    // required in FileFunctionDefinition
    shared_ptr<vector<FunctionFileResource>> fileResources_ {};
    // required in FileFunctionDefinition
    shared_ptr<string> functionName_ {};
    // required in LambdaFunctionDefinition/FileFunctionDefinition
    shared_ptr<string> language_ {};
    shared_ptr<string> type_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DlfNext20250310
#endif
