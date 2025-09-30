// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHATWITHKNOWLEDGEBASEREQUESTMODELPARAMSTOOLS_HPP_
#define ALIBABACLOUD_MODELS_CHATWITHKNOWLEDGEBASEREQUESTMODELPARAMSTOOLS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ChatWithKnowledgeBaseRequestModelParamsToolsFunction.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gpdb20160503
{
namespace Models
{
  class ChatWithKnowledgeBaseRequestModelParamsTools : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ChatWithKnowledgeBaseRequestModelParamsTools& obj) { 
      DARABONBA_PTR_TO_JSON(Function, function_);
    };
    friend void from_json(const Darabonba::Json& j, ChatWithKnowledgeBaseRequestModelParamsTools& obj) { 
      DARABONBA_PTR_FROM_JSON(Function, function_);
    };
    ChatWithKnowledgeBaseRequestModelParamsTools() = default ;
    ChatWithKnowledgeBaseRequestModelParamsTools(const ChatWithKnowledgeBaseRequestModelParamsTools &) = default ;
    ChatWithKnowledgeBaseRequestModelParamsTools(ChatWithKnowledgeBaseRequestModelParamsTools &&) = default ;
    ChatWithKnowledgeBaseRequestModelParamsTools(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ChatWithKnowledgeBaseRequestModelParamsTools() = default ;
    ChatWithKnowledgeBaseRequestModelParamsTools& operator=(const ChatWithKnowledgeBaseRequestModelParamsTools &) = default ;
    ChatWithKnowledgeBaseRequestModelParamsTools& operator=(ChatWithKnowledgeBaseRequestModelParamsTools &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->function_ != nullptr; };
    // function Field Functions 
    bool hasFunction() const { return this->function_ != nullptr;};
    void deleteFunction() { this->function_ = nullptr;};
    inline const Models::ChatWithKnowledgeBaseRequestModelParamsToolsFunction & function() const { DARABONBA_PTR_GET_CONST(function_, Models::ChatWithKnowledgeBaseRequestModelParamsToolsFunction) };
    inline Models::ChatWithKnowledgeBaseRequestModelParamsToolsFunction function() { DARABONBA_PTR_GET(function_, Models::ChatWithKnowledgeBaseRequestModelParamsToolsFunction) };
    inline ChatWithKnowledgeBaseRequestModelParamsTools& setFunction(const Models::ChatWithKnowledgeBaseRequestModelParamsToolsFunction & function) { DARABONBA_PTR_SET_VALUE(function_, function) };
    inline ChatWithKnowledgeBaseRequestModelParamsTools& setFunction(Models::ChatWithKnowledgeBaseRequestModelParamsToolsFunction && function) { DARABONBA_PTR_SET_RVALUE(function_, function) };


  protected:
    std::shared_ptr<Models::ChatWithKnowledgeBaseRequestModelParamsToolsFunction> function_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
