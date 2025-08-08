// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TOOL_HPP_
#define ALIBABACLOUD_MODELS_TOOL_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devs20230714
{
namespace Models
{
  class Tool : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const Tool& obj) { 
      DARABONBA_PTR_TO_JSON(method, method_);
      DARABONBA_PTR_TO_JSON(path, path_);
      DARABONBA_PTR_TO_JSON(toolId, toolId_);
      DARABONBA_PTR_TO_JSON(toolName, toolName_);
    };
    friend void from_json(const Darabonba::Json& j, Tool& obj) { 
      DARABONBA_PTR_FROM_JSON(method, method_);
      DARABONBA_PTR_FROM_JSON(path, path_);
      DARABONBA_PTR_FROM_JSON(toolId, toolId_);
      DARABONBA_PTR_FROM_JSON(toolName, toolName_);
    };
    Tool() = default ;
    Tool(const Tool &) = default ;
    Tool(Tool &&) = default ;
    Tool(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~Tool() = default ;
    Tool& operator=(const Tool &) = default ;
    Tool& operator=(Tool &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->method_ != nullptr
        && this->path_ != nullptr && this->toolId_ != nullptr && this->toolName_ != nullptr; };
    // method Field Functions 
    bool hasMethod() const { return this->method_ != nullptr;};
    void deleteMethod() { this->method_ = nullptr;};
    inline string method() const { DARABONBA_PTR_GET_DEFAULT(method_, "") };
    inline Tool& setMethod(string method) { DARABONBA_PTR_SET_VALUE(method_, method) };


    // path Field Functions 
    bool hasPath() const { return this->path_ != nullptr;};
    void deletePath() { this->path_ = nullptr;};
    inline string path() const { DARABONBA_PTR_GET_DEFAULT(path_, "") };
    inline Tool& setPath(string path) { DARABONBA_PTR_SET_VALUE(path_, path) };


    // toolId Field Functions 
    bool hasToolId() const { return this->toolId_ != nullptr;};
    void deleteToolId() { this->toolId_ = nullptr;};
    inline string toolId() const { DARABONBA_PTR_GET_DEFAULT(toolId_, "") };
    inline Tool& setToolId(string toolId) { DARABONBA_PTR_SET_VALUE(toolId_, toolId) };


    // toolName Field Functions 
    bool hasToolName() const { return this->toolName_ != nullptr;};
    void deleteToolName() { this->toolName_ = nullptr;};
    inline string toolName() const { DARABONBA_PTR_GET_DEFAULT(toolName_, "") };
    inline Tool& setToolName(string toolName) { DARABONBA_PTR_SET_VALUE(toolName_, toolName) };


  protected:
    std::shared_ptr<string> method_ = nullptr;
    std::shared_ptr<string> path_ = nullptr;
    std::shared_ptr<string> toolId_ = nullptr;
    std::shared_ptr<string> toolName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devs20230714
#endif
