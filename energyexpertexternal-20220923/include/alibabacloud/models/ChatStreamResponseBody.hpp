// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHATSTREAMRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CHATSTREAMRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ChatItem.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EnergyExpertExternal20220923
{
namespace Models
{
  class ChatStreamResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ChatStreamResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ChatStreamResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    ChatStreamResponseBody() = default ;
    ChatStreamResponseBody(const ChatStreamResponseBody &) = default ;
    ChatStreamResponseBody(ChatStreamResponseBody &&) = default ;
    ChatStreamResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ChatStreamResponseBody() = default ;
    ChatStreamResponseBody& operator=(const ChatStreamResponseBody &) = default ;
    ChatStreamResponseBody& operator=(ChatStreamResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->data_ == nullptr
        && return this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ChatItem & data() const { DARABONBA_PTR_GET_CONST(data_, ChatItem) };
    inline ChatItem data() { DARABONBA_PTR_GET(data_, ChatItem) };
    inline ChatStreamResponseBody& setData(const ChatItem & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ChatStreamResponseBody& setData(ChatItem && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ChatStreamResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // Q&A content.
    std::shared_ptr<ChatItem> data_ = nullptr;
    // Request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EnergyExpertExternal20220923
#endif
