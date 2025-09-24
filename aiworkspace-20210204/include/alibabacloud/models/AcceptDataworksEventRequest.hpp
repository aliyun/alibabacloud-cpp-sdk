// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ACCEPTDATAWORKSEVENTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ACCEPTDATAWORKSEVENTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AIWorkSpace20210204
{
namespace Models
{
  class AcceptDataworksEventRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AcceptDataworksEventRequest& obj) { 
      DARABONBA_ANY_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(MessageId, messageId_);
    };
    friend void from_json(const Darabonba::Json& j, AcceptDataworksEventRequest& obj) { 
      DARABONBA_ANY_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(MessageId, messageId_);
    };
    AcceptDataworksEventRequest() = default ;
    AcceptDataworksEventRequest(const AcceptDataworksEventRequest &) = default ;
    AcceptDataworksEventRequest(AcceptDataworksEventRequest &&) = default ;
    AcceptDataworksEventRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AcceptDataworksEventRequest() = default ;
    AcceptDataworksEventRequest& operator=(const AcceptDataworksEventRequest &) = default ;
    AcceptDataworksEventRequest& operator=(AcceptDataworksEventRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->data_ != nullptr
        && this->messageId_ != nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline     const Darabonba::Json & data() const { DARABONBA_GET(data_) };
    Darabonba::Json & data() { DARABONBA_GET(data_) };
    inline AcceptDataworksEventRequest& setData(const Darabonba::Json & data) { DARABONBA_SET_VALUE(data_, data) };
    inline AcceptDataworksEventRequest& setData(Darabonba::Json & data) { DARABONBA_SET_RVALUE(data_, data) };


    // messageId Field Functions 
    bool hasMessageId() const { return this->messageId_ != nullptr;};
    void deleteMessageId() { this->messageId_ = nullptr;};
    inline string messageId() const { DARABONBA_PTR_GET_DEFAULT(messageId_, "") };
    inline AcceptDataworksEventRequest& setMessageId(string messageId) { DARABONBA_PTR_SET_VALUE(messageId_, messageId) };


  protected:
    // The event content in the message.
    Darabonba::Json data_ = nullptr;
    // The message ID. You can obtain the ID from the message received when an extension point event is triggered. For more information about the message format, see [Message formats](https://help.aliyun.com/document_detail/436911.html).
    std::shared_ptr<string> messageId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AIWorkSpace20210204
#endif
