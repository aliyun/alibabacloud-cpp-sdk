// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PATHCONFIG_HPP_
#define ALIBABACLOUD_MODELS_PATHCONFIG_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/RewriteConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace FC20230330
{
namespace Models
{
  class PathConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PathConfig& obj) { 
      DARABONBA_PTR_TO_JSON(functionName, functionName_);
      DARABONBA_PTR_TO_JSON(methods, methods_);
      DARABONBA_PTR_TO_JSON(path, path_);
      DARABONBA_PTR_TO_JSON(qualifier, qualifier_);
      DARABONBA_PTR_TO_JSON(rewriteConfig, rewriteConfig_);
    };
    friend void from_json(const Darabonba::Json& j, PathConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(functionName, functionName_);
      DARABONBA_PTR_FROM_JSON(methods, methods_);
      DARABONBA_PTR_FROM_JSON(path, path_);
      DARABONBA_PTR_FROM_JSON(qualifier, qualifier_);
      DARABONBA_PTR_FROM_JSON(rewriteConfig, rewriteConfig_);
    };
    PathConfig() = default ;
    PathConfig(const PathConfig &) = default ;
    PathConfig(PathConfig &&) = default ;
    PathConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PathConfig() = default ;
    PathConfig& operator=(const PathConfig &) = default ;
    PathConfig& operator=(PathConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->functionName_ == nullptr
        && this->methods_ == nullptr && this->path_ == nullptr && this->qualifier_ == nullptr && this->rewriteConfig_ == nullptr; };
    // functionName Field Functions 
    bool hasFunctionName() const { return this->functionName_ != nullptr;};
    void deleteFunctionName() { this->functionName_ = nullptr;};
    inline string getFunctionName() const { DARABONBA_PTR_GET_DEFAULT(functionName_, "") };
    inline PathConfig& setFunctionName(string functionName) { DARABONBA_PTR_SET_VALUE(functionName_, functionName) };


    // methods Field Functions 
    bool hasMethods() const { return this->methods_ != nullptr;};
    void deleteMethods() { this->methods_ = nullptr;};
    inline const vector<string> & getMethods() const { DARABONBA_PTR_GET_CONST(methods_, vector<string>) };
    inline vector<string> getMethods() { DARABONBA_PTR_GET(methods_, vector<string>) };
    inline PathConfig& setMethods(const vector<string> & methods) { DARABONBA_PTR_SET_VALUE(methods_, methods) };
    inline PathConfig& setMethods(vector<string> && methods) { DARABONBA_PTR_SET_RVALUE(methods_, methods) };


    // path Field Functions 
    bool hasPath() const { return this->path_ != nullptr;};
    void deletePath() { this->path_ = nullptr;};
    inline string getPath() const { DARABONBA_PTR_GET_DEFAULT(path_, "") };
    inline PathConfig& setPath(string path) { DARABONBA_PTR_SET_VALUE(path_, path) };


    // qualifier Field Functions 
    bool hasQualifier() const { return this->qualifier_ != nullptr;};
    void deleteQualifier() { this->qualifier_ = nullptr;};
    inline string getQualifier() const { DARABONBA_PTR_GET_DEFAULT(qualifier_, "") };
    inline PathConfig& setQualifier(string qualifier) { DARABONBA_PTR_SET_VALUE(qualifier_, qualifier) };


    // rewriteConfig Field Functions 
    bool hasRewriteConfig() const { return this->rewriteConfig_ != nullptr;};
    void deleteRewriteConfig() { this->rewriteConfig_ = nullptr;};
    inline const RewriteConfig & getRewriteConfig() const { DARABONBA_PTR_GET_CONST(rewriteConfig_, RewriteConfig) };
    inline RewriteConfig getRewriteConfig() { DARABONBA_PTR_GET(rewriteConfig_, RewriteConfig) };
    inline PathConfig& setRewriteConfig(const RewriteConfig & rewriteConfig) { DARABONBA_PTR_SET_VALUE(rewriteConfig_, rewriteConfig) };
    inline PathConfig& setRewriteConfig(RewriteConfig && rewriteConfig) { DARABONBA_PTR_SET_RVALUE(rewriteConfig_, rewriteConfig) };


  protected:
    // This parameter is required.
    shared_ptr<string> functionName_ {};
    shared_ptr<vector<string>> methods_ {};
    // This parameter is required.
    shared_ptr<string> path_ {};
    shared_ptr<string> qualifier_ {};
    shared_ptr<RewriteConfig> rewriteConfig_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace FC20230330
#endif
