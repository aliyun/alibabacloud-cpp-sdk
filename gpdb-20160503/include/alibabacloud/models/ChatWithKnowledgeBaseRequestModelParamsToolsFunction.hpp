// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHATWITHKNOWLEDGEBASEREQUESTMODELPARAMSTOOLSFUNCTION_HPP_
#define ALIBABACLOUD_MODELS_CHATWITHKNOWLEDGEBASEREQUESTMODELPARAMSTOOLSFUNCTION_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gpdb20160503
{
namespace Models
{
  class ChatWithKnowledgeBaseRequestModelParamsToolsFunction : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ChatWithKnowledgeBaseRequestModelParamsToolsFunction& obj) { 
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_ANY_TO_JSON(Parameters, parameters_);
    };
    friend void from_json(const Darabonba::Json& j, ChatWithKnowledgeBaseRequestModelParamsToolsFunction& obj) { 
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_ANY_FROM_JSON(Parameters, parameters_);
    };
    ChatWithKnowledgeBaseRequestModelParamsToolsFunction() = default ;
    ChatWithKnowledgeBaseRequestModelParamsToolsFunction(const ChatWithKnowledgeBaseRequestModelParamsToolsFunction &) = default ;
    ChatWithKnowledgeBaseRequestModelParamsToolsFunction(ChatWithKnowledgeBaseRequestModelParamsToolsFunction &&) = default ;
    ChatWithKnowledgeBaseRequestModelParamsToolsFunction(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ChatWithKnowledgeBaseRequestModelParamsToolsFunction() = default ;
    ChatWithKnowledgeBaseRequestModelParamsToolsFunction& operator=(const ChatWithKnowledgeBaseRequestModelParamsToolsFunction &) = default ;
    ChatWithKnowledgeBaseRequestModelParamsToolsFunction& operator=(ChatWithKnowledgeBaseRequestModelParamsToolsFunction &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->description_ != nullptr
        && this->name_ != nullptr && this->parameters_ != nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ChatWithKnowledgeBaseRequestModelParamsToolsFunction& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ChatWithKnowledgeBaseRequestModelParamsToolsFunction& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // parameters Field Functions 
    bool hasParameters() const { return this->parameters_ != nullptr;};
    void deleteParameters() { this->parameters_ = nullptr;};
    inline     const Darabonba::Json & parameters() const { DARABONBA_GET(parameters_) };
    Darabonba::Json & parameters() { DARABONBA_GET(parameters_) };
    inline ChatWithKnowledgeBaseRequestModelParamsToolsFunction& setParameters(const Darabonba::Json & parameters) { DARABONBA_SET_VALUE(parameters_, parameters) };
    inline ChatWithKnowledgeBaseRequestModelParamsToolsFunction& setParameters(Darabonba::Json & parameters) { DARABONBA_SET_RVALUE(parameters_, parameters) };


  protected:
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    Darabonba::Json parameters_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
