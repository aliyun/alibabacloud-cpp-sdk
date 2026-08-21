// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_A2AREQUEST_HPP_
#define ALIBABACLOUD_MODELS_A2AREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OssAgent20260810
{
namespace Models
{
  class A2aRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const A2aRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Env, env_);
      DARABONBA_PTR_TO_JSON(id, id_);
      DARABONBA_PTR_TO_JSON(jsonrpc, jsonrpc_);
      DARABONBA_PTR_TO_JSON(method, method_);
      DARABONBA_ANY_TO_JSON(params, params_);
    };
    friend void from_json(const Darabonba::Json& j, A2aRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Env, env_);
      DARABONBA_PTR_FROM_JSON(id, id_);
      DARABONBA_PTR_FROM_JSON(jsonrpc, jsonrpc_);
      DARABONBA_PTR_FROM_JSON(method, method_);
      DARABONBA_ANY_FROM_JSON(params, params_);
    };
    A2aRequest() = default ;
    A2aRequest(const A2aRequest &) = default ;
    A2aRequest(A2aRequest &&) = default ;
    A2aRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~A2aRequest() = default ;
    A2aRequest& operator=(const A2aRequest &) = default ;
    A2aRequest& operator=(A2aRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->env_ == nullptr
        && this->id_ == nullptr && this->jsonrpc_ == nullptr && this->method_ == nullptr && this->params_ == nullptr; };
    // env Field Functions 
    bool hasEnv() const { return this->env_ != nullptr;};
    void deleteEnv() { this->env_ = nullptr;};
    inline string getEnv() const { DARABONBA_PTR_GET_DEFAULT(env_, "") };
    inline A2aRequest& setEnv(string env) { DARABONBA_PTR_SET_VALUE(env_, env) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline A2aRequest& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // jsonrpc Field Functions 
    bool hasJsonrpc() const { return this->jsonrpc_ != nullptr;};
    void deleteJsonrpc() { this->jsonrpc_ = nullptr;};
    inline string getJsonrpc() const { DARABONBA_PTR_GET_DEFAULT(jsonrpc_, "") };
    inline A2aRequest& setJsonrpc(string jsonrpc) { DARABONBA_PTR_SET_VALUE(jsonrpc_, jsonrpc) };


    // method Field Functions 
    bool hasMethod() const { return this->method_ != nullptr;};
    void deleteMethod() { this->method_ = nullptr;};
    inline string getMethod() const { DARABONBA_PTR_GET_DEFAULT(method_, "") };
    inline A2aRequest& setMethod(string method) { DARABONBA_PTR_SET_VALUE(method_, method) };


    // params Field Functions 
    bool hasParams() const { return this->params_ != nullptr;};
    void deleteParams() { this->params_ = nullptr;};
    inline     const Darabonba::Json & getParams() const { DARABONBA_GET(params_) };
    Darabonba::Json & getParams() { DARABONBA_GET(params_) };
    inline A2aRequest& setParams(const Darabonba::Json & params) { DARABONBA_SET_VALUE(params_, params) };
    inline A2aRequest& setParams(Darabonba::Json && params) { DARABONBA_SET_RVALUE(params_, params) };


  protected:
    shared_ptr<string> env_ {};
    shared_ptr<string> id_ {};
    shared_ptr<string> jsonrpc_ {};
    shared_ptr<string> method_ {};
    Darabonba::Json params_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OssAgent20260810
#endif
