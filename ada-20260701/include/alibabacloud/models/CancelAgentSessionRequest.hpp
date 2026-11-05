// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CANCELAGENTSESSIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CANCELAGENTSESSIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ada20260701
{
namespace Models
{
  class CancelAgentSessionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CancelAgentSessionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Jsonrpc, jsonrpc_);
      DARABONBA_ANY_TO_JSON(Params, params_);
    };
    friend void from_json(const Darabonba::Json& j, CancelAgentSessionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Jsonrpc, jsonrpc_);
      DARABONBA_ANY_FROM_JSON(Params, params_);
    };
    CancelAgentSessionRequest() = default ;
    CancelAgentSessionRequest(const CancelAgentSessionRequest &) = default ;
    CancelAgentSessionRequest(CancelAgentSessionRequest &&) = default ;
    CancelAgentSessionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CancelAgentSessionRequest() = default ;
    CancelAgentSessionRequest& operator=(const CancelAgentSessionRequest &) = default ;
    CancelAgentSessionRequest& operator=(CancelAgentSessionRequest &&) = default ;
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
    inline CancelAgentSessionRequest& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // jsonrpc Field Functions 
    bool hasJsonrpc() const { return this->jsonrpc_ != nullptr;};
    void deleteJsonrpc() { this->jsonrpc_ = nullptr;};
    inline string getJsonrpc() const { DARABONBA_PTR_GET_DEFAULT(jsonrpc_, "") };
    inline CancelAgentSessionRequest& setJsonrpc(string jsonrpc) { DARABONBA_PTR_SET_VALUE(jsonrpc_, jsonrpc) };


    // params Field Functions 
    bool hasParams() const { return this->params_ != nullptr;};
    void deleteParams() { this->params_ = nullptr;};
    inline     const Darabonba::Json & getParams() const { DARABONBA_GET(params_) };
    Darabonba::Json & getParams() { DARABONBA_GET(params_) };
    inline CancelAgentSessionRequest& setParams(const Darabonba::Json & params) { DARABONBA_SET_VALUE(params_, params) };
    inline CancelAgentSessionRequest& setParams(Darabonba::Json && params) { DARABONBA_SET_RVALUE(params_, params) };


  protected:
    // The correlation identifier for this call, which is echoed in the response. This parameter does not provide idempotence guarantees.
    shared_ptr<string> id_ {};
    // The JSON-RPC protocol version. Set this parameter to 2.0.
    shared_ptr<string> jsonrpc_ {};
    // The business parameter object. For nested fields, refer to the supplementary description of request parameters.
    // 
    // This parameter is required.
    Darabonba::Json params_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ada20260701
#endif
