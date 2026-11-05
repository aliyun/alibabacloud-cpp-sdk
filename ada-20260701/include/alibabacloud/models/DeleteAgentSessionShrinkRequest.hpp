// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEAGENTSESSIONSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEAGENTSESSIONSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ada20260701
{
namespace Models
{
  class DeleteAgentSessionShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteAgentSessionShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Jsonrpc, jsonrpc_);
      DARABONBA_PTR_TO_JSON(Params, paramsShrink_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteAgentSessionShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Jsonrpc, jsonrpc_);
      DARABONBA_PTR_FROM_JSON(Params, paramsShrink_);
    };
    DeleteAgentSessionShrinkRequest() = default ;
    DeleteAgentSessionShrinkRequest(const DeleteAgentSessionShrinkRequest &) = default ;
    DeleteAgentSessionShrinkRequest(DeleteAgentSessionShrinkRequest &&) = default ;
    DeleteAgentSessionShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteAgentSessionShrinkRequest() = default ;
    DeleteAgentSessionShrinkRequest& operator=(const DeleteAgentSessionShrinkRequest &) = default ;
    DeleteAgentSessionShrinkRequest& operator=(DeleteAgentSessionShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->id_ == nullptr
        && this->jsonrpc_ == nullptr && this->paramsShrink_ == nullptr; };
    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline DeleteAgentSessionShrinkRequest& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // jsonrpc Field Functions 
    bool hasJsonrpc() const { return this->jsonrpc_ != nullptr;};
    void deleteJsonrpc() { this->jsonrpc_ = nullptr;};
    inline string getJsonrpc() const { DARABONBA_PTR_GET_DEFAULT(jsonrpc_, "") };
    inline DeleteAgentSessionShrinkRequest& setJsonrpc(string jsonrpc) { DARABONBA_PTR_SET_VALUE(jsonrpc_, jsonrpc) };


    // paramsShrink Field Functions 
    bool hasParamsShrink() const { return this->paramsShrink_ != nullptr;};
    void deleteParamsShrink() { this->paramsShrink_ = nullptr;};
    inline string getParamsShrink() const { DARABONBA_PTR_GET_DEFAULT(paramsShrink_, "") };
    inline DeleteAgentSessionShrinkRequest& setParamsShrink(string paramsShrink) { DARABONBA_PTR_SET_VALUE(paramsShrink_, paramsShrink) };


  protected:
    // The correlation identifier for this call, which is echoed in the response. It does not provide idempotency guarantees.
    shared_ptr<string> id_ {};
    // The JSON-RPC protocol version. Set the value to `2.0`.
    shared_ptr<string> jsonrpc_ {};
    // The business parameter object. For nested fields, refer to the supplementary description of request parameters.
    // 
    // This parameter is required.
    shared_ptr<string> paramsShrink_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ada20260701
#endif
