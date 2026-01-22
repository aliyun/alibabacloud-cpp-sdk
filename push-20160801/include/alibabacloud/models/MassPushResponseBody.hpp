// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MASSPUSHRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_MASSPUSHRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Push20160801
{
namespace Models
{
  class MassPushResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const MassPushResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(MessageIds, messageIds_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, MassPushResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(MessageIds, messageIds_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    MassPushResponseBody() = default ;
    MassPushResponseBody(const MassPushResponseBody &) = default ;
    MassPushResponseBody(MassPushResponseBody &&) = default ;
    MassPushResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~MassPushResponseBody() = default ;
    MassPushResponseBody& operator=(const MassPushResponseBody &) = default ;
    MassPushResponseBody& operator=(MassPushResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class MessageIds : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const MessageIds& obj) { 
        DARABONBA_PTR_TO_JSON(MessageId, messageId_);
      };
      friend void from_json(const Darabonba::Json& j, MessageIds& obj) { 
        DARABONBA_PTR_FROM_JSON(MessageId, messageId_);
      };
      MessageIds() = default ;
      MessageIds(const MessageIds &) = default ;
      MessageIds(MessageIds &&) = default ;
      MessageIds(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~MessageIds() = default ;
      MessageIds& operator=(const MessageIds &) = default ;
      MessageIds& operator=(MessageIds &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->messageId_ == nullptr; };
      // messageId Field Functions 
      bool hasMessageId() const { return this->messageId_ != nullptr;};
      void deleteMessageId() { this->messageId_ = nullptr;};
      inline const vector<string> & getMessageId() const { DARABONBA_PTR_GET_CONST(messageId_, vector<string>) };
      inline vector<string> getMessageId() { DARABONBA_PTR_GET(messageId_, vector<string>) };
      inline MessageIds& setMessageId(const vector<string> & messageId) { DARABONBA_PTR_SET_VALUE(messageId_, messageId) };
      inline MessageIds& setMessageId(vector<string> && messageId) { DARABONBA_PTR_SET_RVALUE(messageId_, messageId) };


    protected:
      shared_ptr<vector<string>> messageId_ {};
    };

    virtual bool empty() const override { return this->messageIds_ == nullptr
        && this->requestId_ == nullptr; };
    // messageIds Field Functions 
    bool hasMessageIds() const { return this->messageIds_ != nullptr;};
    void deleteMessageIds() { this->messageIds_ = nullptr;};
    inline const MassPushResponseBody::MessageIds & getMessageIds() const { DARABONBA_PTR_GET_CONST(messageIds_, MassPushResponseBody::MessageIds) };
    inline MassPushResponseBody::MessageIds getMessageIds() { DARABONBA_PTR_GET(messageIds_, MassPushResponseBody::MessageIds) };
    inline MassPushResponseBody& setMessageIds(const MassPushResponseBody::MessageIds & messageIds) { DARABONBA_PTR_SET_VALUE(messageIds_, messageIds) };
    inline MassPushResponseBody& setMessageIds(MassPushResponseBody::MessageIds && messageIds) { DARABONBA_PTR_SET_RVALUE(messageIds_, messageIds) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline MassPushResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<MassPushResponseBody::MessageIds> messageIds_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Push20160801
#endif
