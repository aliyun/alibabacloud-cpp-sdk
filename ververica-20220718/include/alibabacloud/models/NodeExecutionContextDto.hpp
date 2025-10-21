// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_NODEEXECUTIONCONTEXTDTO_HPP_
#define ALIBABACLOUD_MODELS_NODEEXECUTIONCONTEXTDTO_HPP_
#include <darabonba/Core.hpp>
#include <map>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ververica20220718
{
namespace Models
{
  class NodeExecutionContextDTO : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const NodeExecutionContextDTO& obj) { 
      DARABONBA_PTR_TO_JSON(context, context_);
    };
    friend void from_json(const Darabonba::Json& j, NodeExecutionContextDTO& obj) { 
      DARABONBA_PTR_FROM_JSON(context, context_);
    };
    NodeExecutionContextDTO() = default ;
    NodeExecutionContextDTO(const NodeExecutionContextDTO &) = default ;
    NodeExecutionContextDTO(NodeExecutionContextDTO &&) = default ;
    NodeExecutionContextDTO(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~NodeExecutionContextDTO() = default ;
    NodeExecutionContextDTO& operator=(const NodeExecutionContextDTO &) = default ;
    NodeExecutionContextDTO& operator=(NodeExecutionContextDTO &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->context_ == nullptr; };
    // context Field Functions 
    bool hasContext() const { return this->context_ != nullptr;};
    void deleteContext() { this->context_ = nullptr;};
    inline const map<string, string> & context() const { DARABONBA_PTR_GET_CONST(context_, map<string, string>) };
    inline map<string, string> context() { DARABONBA_PTR_GET(context_, map<string, string>) };
    inline NodeExecutionContextDTO& setContext(const map<string, string> & context) { DARABONBA_PTR_SET_VALUE(context_, context) };
    inline NodeExecutionContextDTO& setContext(map<string, string> && context) { DARABONBA_PTR_SET_RVALUE(context_, context) };


  protected:
    std::shared_ptr<map<string, string>> context_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ververica20220718
#endif
