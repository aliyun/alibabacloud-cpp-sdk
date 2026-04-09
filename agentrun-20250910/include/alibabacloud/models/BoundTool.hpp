// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BOUNDTOOL_HPP_
#define ALIBABACLOUD_MODELS_BOUNDTOOL_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/BoundToolApi.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentRun20250910
{
namespace Models
{
  class BoundTool : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BoundTool& obj) { 
      DARABONBA_PTR_TO_JSON(apis, apis_);
      DARABONBA_PTR_TO_JSON(method, method_);
      DARABONBA_PTR_TO_JSON(path, path_);
      DARABONBA_PTR_TO_JSON(toolName, toolName_);
    };
    friend void from_json(const Darabonba::Json& j, BoundTool& obj) { 
      DARABONBA_PTR_FROM_JSON(apis, apis_);
      DARABONBA_PTR_FROM_JSON(method, method_);
      DARABONBA_PTR_FROM_JSON(path, path_);
      DARABONBA_PTR_FROM_JSON(toolName, toolName_);
    };
    BoundTool() = default ;
    BoundTool(const BoundTool &) = default ;
    BoundTool(BoundTool &&) = default ;
    BoundTool(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BoundTool() = default ;
    BoundTool& operator=(const BoundTool &) = default ;
    BoundTool& operator=(BoundTool &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->apis_ == nullptr
        && this->method_ == nullptr && this->path_ == nullptr && this->toolName_ == nullptr; };
    // apis Field Functions 
    bool hasApis() const { return this->apis_ != nullptr;};
    void deleteApis() { this->apis_ = nullptr;};
    inline const vector<BoundToolApi> & getApis() const { DARABONBA_PTR_GET_CONST(apis_, vector<BoundToolApi>) };
    inline vector<BoundToolApi> getApis() { DARABONBA_PTR_GET(apis_, vector<BoundToolApi>) };
    inline BoundTool& setApis(const vector<BoundToolApi> & apis) { DARABONBA_PTR_SET_VALUE(apis_, apis) };
    inline BoundTool& setApis(vector<BoundToolApi> && apis) { DARABONBA_PTR_SET_RVALUE(apis_, apis) };


    // method Field Functions 
    bool hasMethod() const { return this->method_ != nullptr;};
    void deleteMethod() { this->method_ = nullptr;};
    inline string getMethod() const { DARABONBA_PTR_GET_DEFAULT(method_, "") };
    inline BoundTool& setMethod(string method) { DARABONBA_PTR_SET_VALUE(method_, method) };


    // path Field Functions 
    bool hasPath() const { return this->path_ != nullptr;};
    void deletePath() { this->path_ = nullptr;};
    inline string getPath() const { DARABONBA_PTR_GET_DEFAULT(path_, "") };
    inline BoundTool& setPath(string path) { DARABONBA_PTR_SET_VALUE(path_, path) };


    // toolName Field Functions 
    bool hasToolName() const { return this->toolName_ != nullptr;};
    void deleteToolName() { this->toolName_ = nullptr;};
    inline string getToolName() const { DARABONBA_PTR_GET_DEFAULT(toolName_, "") };
    inline BoundTool& setToolName(string toolName) { DARABONBA_PTR_SET_VALUE(toolName_, toolName) };


  protected:
    shared_ptr<vector<BoundToolApi>> apis_ {};
    // 绑定的 HTTP 请求方法，支持：GET、PUT、POST、PATCH、DELETE、OPTIONS
    shared_ptr<string> method_ {};
    // 绑定的 URL 路径，用于路由匹配
    shared_ptr<string> path_ {};
    // 要绑定的工具名称
    shared_ptr<string> toolName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentRun20250910
#endif
