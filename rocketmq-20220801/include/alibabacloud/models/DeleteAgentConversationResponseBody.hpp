// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEAGENTCONVERSATIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DELETEAGENTCONVERSATIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RocketMQ20220801
{
namespace Models
{
  class DeleteAgentConversationResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteAgentConversationResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ok, ok_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteAgentConversationResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ok, ok_);
    };
    DeleteAgentConversationResponseBody() = default ;
    DeleteAgentConversationResponseBody(const DeleteAgentConversationResponseBody &) = default ;
    DeleteAgentConversationResponseBody(DeleteAgentConversationResponseBody &&) = default ;
    DeleteAgentConversationResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteAgentConversationResponseBody() = default ;
    DeleteAgentConversationResponseBody& operator=(const DeleteAgentConversationResponseBody &) = default ;
    DeleteAgentConversationResponseBody& operator=(DeleteAgentConversationResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->ok_ == nullptr; };
    // ok Field Functions 
    bool hasOk() const { return this->ok_ != nullptr;};
    void deleteOk() { this->ok_ = nullptr;};
    inline bool getOk() const { DARABONBA_PTR_GET_DEFAULT(ok_, false) };
    inline DeleteAgentConversationResponseBody& setOk(bool ok) { DARABONBA_PTR_SET_VALUE(ok_, ok) };


  protected:
    shared_ptr<bool> ok_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RocketMQ20220801
#endif
