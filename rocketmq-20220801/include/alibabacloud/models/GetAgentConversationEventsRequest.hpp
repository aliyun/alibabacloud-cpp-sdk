// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAGENTCONVERSATIONEVENTSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETAGENTCONVERSATIONEVENTSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RocketMQ20220801
{
namespace Models
{
  class GetAgentConversationEventsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAgentConversationEventsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(after, after_);
    };
    friend void from_json(const Darabonba::Json& j, GetAgentConversationEventsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(after, after_);
    };
    GetAgentConversationEventsRequest() = default ;
    GetAgentConversationEventsRequest(const GetAgentConversationEventsRequest &) = default ;
    GetAgentConversationEventsRequest(GetAgentConversationEventsRequest &&) = default ;
    GetAgentConversationEventsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAgentConversationEventsRequest() = default ;
    GetAgentConversationEventsRequest& operator=(const GetAgentConversationEventsRequest &) = default ;
    GetAgentConversationEventsRequest& operator=(GetAgentConversationEventsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->after_ == nullptr; };
    // after Field Functions 
    bool hasAfter() const { return this->after_ != nullptr;};
    void deleteAfter() { this->after_ = nullptr;};
    inline int64_t getAfter() const { DARABONBA_PTR_GET_DEFAULT(after_, 0L) };
    inline GetAgentConversationEventsRequest& setAfter(int64_t after) { DARABONBA_PTR_SET_VALUE(after_, after) };


  protected:
    shared_ptr<int64_t> after_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RocketMQ20220801
#endif
