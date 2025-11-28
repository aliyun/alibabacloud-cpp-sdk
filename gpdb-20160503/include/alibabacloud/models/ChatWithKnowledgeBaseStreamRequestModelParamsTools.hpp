// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHATWITHKNOWLEDGEBASESTREAMREQUESTMODELPARAMSTOOLS_HPP_
#define ALIBABACLOUD_MODELS_CHATWITHKNOWLEDGEBASESTREAMREQUESTMODELPARAMSTOOLS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ChatWithKnowledgeBaseStreamRequestModelParamsToolsFunction.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gpdb20160503
{
namespace Models
{
  class ChatWithKnowledgeBaseStreamRequestModelParamsTools : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ChatWithKnowledgeBaseStreamRequestModelParamsTools& obj) { 
      DARABONBA_PTR_TO_JSON(Function, function_);
    };
    friend void from_json(const Darabonba::Json& j, ChatWithKnowledgeBaseStreamRequestModelParamsTools& obj) { 
      DARABONBA_PTR_FROM_JSON(Function, function_);
    };
    ChatWithKnowledgeBaseStreamRequestModelParamsTools() = default ;
    ChatWithKnowledgeBaseStreamRequestModelParamsTools(const ChatWithKnowledgeBaseStreamRequestModelParamsTools &) = default ;
    ChatWithKnowledgeBaseStreamRequestModelParamsTools(ChatWithKnowledgeBaseStreamRequestModelParamsTools &&) = default ;
    ChatWithKnowledgeBaseStreamRequestModelParamsTools(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ChatWithKnowledgeBaseStreamRequestModelParamsTools() = default ;
    ChatWithKnowledgeBaseStreamRequestModelParamsTools& operator=(const ChatWithKnowledgeBaseStreamRequestModelParamsTools &) = default ;
    ChatWithKnowledgeBaseStreamRequestModelParamsTools& operator=(ChatWithKnowledgeBaseStreamRequestModelParamsTools &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->function_ == nullptr; };
    // function Field Functions 
    bool hasFunction() const { return this->function_ != nullptr;};
    void deleteFunction() { this->function_ = nullptr;};
    inline const Models::ChatWithKnowledgeBaseStreamRequestModelParamsToolsFunction & function() const { DARABONBA_PTR_GET_CONST(function_, Models::ChatWithKnowledgeBaseStreamRequestModelParamsToolsFunction) };
    inline Models::ChatWithKnowledgeBaseStreamRequestModelParamsToolsFunction function() { DARABONBA_PTR_GET(function_, Models::ChatWithKnowledgeBaseStreamRequestModelParamsToolsFunction) };
    inline ChatWithKnowledgeBaseStreamRequestModelParamsTools& setFunction(const Models::ChatWithKnowledgeBaseStreamRequestModelParamsToolsFunction & function) { DARABONBA_PTR_SET_VALUE(function_, function) };
    inline ChatWithKnowledgeBaseStreamRequestModelParamsTools& setFunction(Models::ChatWithKnowledgeBaseStreamRequestModelParamsToolsFunction && function) { DARABONBA_PTR_SET_RVALUE(function_, function) };


  protected:
    // The information about a function.
    std::shared_ptr<Models::ChatWithKnowledgeBaseStreamRequestModelParamsToolsFunction> function_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
