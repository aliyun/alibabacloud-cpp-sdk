// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_STOPAGENTCONVERSATIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_STOPAGENTCONVERSATIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RocketMQ20220801
{
namespace Models
{
  class StopAgentConversationResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const StopAgentConversationResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(stopped, stopped_);
    };
    friend void from_json(const Darabonba::Json& j, StopAgentConversationResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(stopped, stopped_);
    };
    StopAgentConversationResponseBody() = default ;
    StopAgentConversationResponseBody(const StopAgentConversationResponseBody &) = default ;
    StopAgentConversationResponseBody(StopAgentConversationResponseBody &&) = default ;
    StopAgentConversationResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~StopAgentConversationResponseBody() = default ;
    StopAgentConversationResponseBody& operator=(const StopAgentConversationResponseBody &) = default ;
    StopAgentConversationResponseBody& operator=(StopAgentConversationResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->stopped_ == nullptr; };
    // stopped Field Functions 
    bool hasStopped() const { return this->stopped_ != nullptr;};
    void deleteStopped() { this->stopped_ = nullptr;};
    inline bool getStopped() const { DARABONBA_PTR_GET_DEFAULT(stopped_, false) };
    inline StopAgentConversationResponseBody& setStopped(bool stopped) { DARABONBA_PTR_SET_VALUE(stopped_, stopped) };


  protected:
    shared_ptr<bool> stopped_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RocketMQ20220801
#endif
