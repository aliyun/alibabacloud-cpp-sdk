// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEAGENTIMCHANNELRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DELETEAGENTIMCHANNELRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentCore20260804
{
namespace Models
{
  class DeleteAgentIMChannelResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteAgentIMChannelResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteAgentIMChannelResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    DeleteAgentIMChannelResponseBody() = default ;
    DeleteAgentIMChannelResponseBody(const DeleteAgentIMChannelResponseBody &) = default ;
    DeleteAgentIMChannelResponseBody(DeleteAgentIMChannelResponseBody &&) = default ;
    DeleteAgentIMChannelResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteAgentIMChannelResponseBody() = default ;
    DeleteAgentIMChannelResponseBody& operator=(const DeleteAgentIMChannelResponseBody &) = default ;
    DeleteAgentIMChannelResponseBody& operator=(DeleteAgentIMChannelResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DeleteAgentIMChannelResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentCore20260804
#endif
