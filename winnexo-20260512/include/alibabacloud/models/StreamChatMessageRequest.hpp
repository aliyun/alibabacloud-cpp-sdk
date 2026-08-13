// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_STREAMCHATMESSAGEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_STREAMCHATMESSAGEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WinNexo20260512
{
namespace Models
{
  class StreamChatMessageRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const StreamChatMessageRequest& obj) { 
      DARABONBA_PTR_TO_JSON(lastEventId, lastEventId_);
      DARABONBA_PTR_TO_JSON(tenantId, tenantId_);
    };
    friend void from_json(const Darabonba::Json& j, StreamChatMessageRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(lastEventId, lastEventId_);
      DARABONBA_PTR_FROM_JSON(tenantId, tenantId_);
    };
    StreamChatMessageRequest() = default ;
    StreamChatMessageRequest(const StreamChatMessageRequest &) = default ;
    StreamChatMessageRequest(StreamChatMessageRequest &&) = default ;
    StreamChatMessageRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~StreamChatMessageRequest() = default ;
    StreamChatMessageRequest& operator=(const StreamChatMessageRequest &) = default ;
    StreamChatMessageRequest& operator=(StreamChatMessageRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->lastEventId_ == nullptr
        && this->tenantId_ == nullptr; };
    // lastEventId Field Functions 
    bool hasLastEventId() const { return this->lastEventId_ != nullptr;};
    void deleteLastEventId() { this->lastEventId_ = nullptr;};
    inline string getLastEventId() const { DARABONBA_PTR_GET_DEFAULT(lastEventId_, "") };
    inline StreamChatMessageRequest& setLastEventId(string lastEventId) { DARABONBA_PTR_SET_VALUE(lastEventId_, lastEventId) };


    // tenantId Field Functions 
    bool hasTenantId() const { return this->tenantId_ != nullptr;};
    void deleteTenantId() { this->tenantId_ = nullptr;};
    inline string getTenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
    inline StreamChatMessageRequest& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


  protected:
    // 上次接收到的 SSE event id，用于断线续推；不传则从头全量回放
    shared_ptr<string> lastEventId_ {};
    // 租户ID，公共参数，缺省时使用调用方默认租户
    shared_ptr<string> tenantId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WinNexo20260512
#endif
