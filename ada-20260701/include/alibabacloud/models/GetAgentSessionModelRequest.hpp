// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAGENTSESSIONMODELREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETAGENTSESSIONMODELREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ada20260701
{
namespace Models
{
  class GetAgentSessionModelRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAgentSessionModelRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Jsonrpc, jsonrpc_);
      DARABONBA_ANY_TO_JSON(Params, params_);
    };
    friend void from_json(const Darabonba::Json& j, GetAgentSessionModelRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Jsonrpc, jsonrpc_);
      DARABONBA_ANY_FROM_JSON(Params, params_);
    };
    GetAgentSessionModelRequest() = default ;
    GetAgentSessionModelRequest(const GetAgentSessionModelRequest &) = default ;
    GetAgentSessionModelRequest(GetAgentSessionModelRequest &&) = default ;
    GetAgentSessionModelRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAgentSessionModelRequest() = default ;
    GetAgentSessionModelRequest& operator=(const GetAgentSessionModelRequest &) = default ;
    GetAgentSessionModelRequest& operator=(GetAgentSessionModelRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->id_ == nullptr
        && this->jsonrpc_ == nullptr && this->params_ == nullptr; };
    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline GetAgentSessionModelRequest& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // jsonrpc Field Functions 
    bool hasJsonrpc() const { return this->jsonrpc_ != nullptr;};
    void deleteJsonrpc() { this->jsonrpc_ = nullptr;};
    inline string getJsonrpc() const { DARABONBA_PTR_GET_DEFAULT(jsonrpc_, "") };
    inline GetAgentSessionModelRequest& setJsonrpc(string jsonrpc) { DARABONBA_PTR_SET_VALUE(jsonrpc_, jsonrpc) };


    // params Field Functions 
    bool hasParams() const { return this->params_ != nullptr;};
    void deleteParams() { this->params_ = nullptr;};
    inline     const Darabonba::Json & getParams() const { DARABONBA_GET(params_) };
    Darabonba::Json & getParams() { DARABONBA_GET(params_) };
    inline GetAgentSessionModelRequest& setParams(const Darabonba::Json & params) { DARABONBA_SET_VALUE(params_, params) };
    inline GetAgentSessionModelRequest& setParams(Darabonba::Json && params) { DARABONBA_SET_RVALUE(params_, params) };


  protected:
    // The client request identifier, which is echoed in the response. It is used to correlate this call and does not have idempotent semantics.
    shared_ptr<string> id_ {};
    // The JSON-RPC version. Set the value to `2.0`.
    shared_ptr<string> jsonrpc_ {};
    // The defined business parameter structure. For core nested fields, see the supplementary description.
    // 
    // This parameter is required.
    Darabonba::Json params_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ada20260701
#endif
