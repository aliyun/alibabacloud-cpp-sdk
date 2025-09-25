// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNCHATRESULTGENERATIONREQUESTTOOLS_HPP_
#define ALIBABACLOUD_MODELS_RUNCHATRESULTGENERATIONREQUESTTOOLS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/RunChatResultGenerationRequestToolsFunction.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DianJin20240628
{
namespace Models
{
  class RunChatResultGenerationRequestTools : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RunChatResultGenerationRequestTools& obj) { 
      DARABONBA_PTR_TO_JSON(function, function_);
      DARABONBA_PTR_TO_JSON(type, type_);
    };
    friend void from_json(const Darabonba::Json& j, RunChatResultGenerationRequestTools& obj) { 
      DARABONBA_PTR_FROM_JSON(function, function_);
      DARABONBA_PTR_FROM_JSON(type, type_);
    };
    RunChatResultGenerationRequestTools() = default ;
    RunChatResultGenerationRequestTools(const RunChatResultGenerationRequestTools &) = default ;
    RunChatResultGenerationRequestTools(RunChatResultGenerationRequestTools &&) = default ;
    RunChatResultGenerationRequestTools(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RunChatResultGenerationRequestTools() = default ;
    RunChatResultGenerationRequestTools& operator=(const RunChatResultGenerationRequestTools &) = default ;
    RunChatResultGenerationRequestTools& operator=(RunChatResultGenerationRequestTools &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->function_ != nullptr
        && this->type_ != nullptr; };
    // function Field Functions 
    bool hasFunction() const { return this->function_ != nullptr;};
    void deleteFunction() { this->function_ = nullptr;};
    inline const Models::RunChatResultGenerationRequestToolsFunction & function() const { DARABONBA_PTR_GET_CONST(function_, Models::RunChatResultGenerationRequestToolsFunction) };
    inline Models::RunChatResultGenerationRequestToolsFunction function() { DARABONBA_PTR_GET(function_, Models::RunChatResultGenerationRequestToolsFunction) };
    inline RunChatResultGenerationRequestTools& setFunction(const Models::RunChatResultGenerationRequestToolsFunction & function) { DARABONBA_PTR_SET_VALUE(function_, function) };
    inline RunChatResultGenerationRequestTools& setFunction(Models::RunChatResultGenerationRequestToolsFunction && function) { DARABONBA_PTR_SET_RVALUE(function_, function) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline RunChatResultGenerationRequestTools& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    std::shared_ptr<Models::RunChatResultGenerationRequestToolsFunction> function_ = nullptr;
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DianJin20240628
#endif
