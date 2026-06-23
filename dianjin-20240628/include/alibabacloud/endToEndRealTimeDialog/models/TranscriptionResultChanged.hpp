// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_ENDTOENDREALTIMEDIALOG_MODELS_TRANSCRIPTIONRESULTCHANGED_HPP_
#define ALIBABACLOUD_ENDTOENDREALTIMEDIALOG_MODELS_TRANSCRIPTIONRESULTCHANGED_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DianJin20240628
{
namespace EndToEndRealTimeDialog
{
namespace Models
{
  class TranscriptionResultChanged : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TranscriptionResultChanged& obj) { 
      DARABONBA_PTR_TO_JSON(messageId, messageId_);
      DARABONBA_PTR_TO_JSON(content, content_);
    };
    friend void from_json(const Darabonba::Json& j, TranscriptionResultChanged& obj) { 
      DARABONBA_PTR_FROM_JSON(messageId, messageId_);
      DARABONBA_PTR_FROM_JSON(content, content_);
    };
    TranscriptionResultChanged() = default ;
    TranscriptionResultChanged(const TranscriptionResultChanged &) = default ;
    TranscriptionResultChanged(TranscriptionResultChanged &&) = default ;
    TranscriptionResultChanged(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TranscriptionResultChanged() = default ;
    TranscriptionResultChanged& operator=(const TranscriptionResultChanged &) = default ;
    TranscriptionResultChanged& operator=(TranscriptionResultChanged &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->messageId_ == nullptr
        && this->content_ == nullptr; };
    // messageId Field Functions 
    bool hasMessageId() const { return this->messageId_ != nullptr;};
    void deleteMessageId() { this->messageId_ = nullptr;};
    inline string getMessageId() const { DARABONBA_PTR_GET_DEFAULT(messageId_, "") };
    inline TranscriptionResultChanged& setMessageId(string messageId) { DARABONBA_PTR_SET_VALUE(messageId_, messageId) };


    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline string getContent() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
    inline TranscriptionResultChanged& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


  protected:
    shared_ptr<string> messageId_ {};
    shared_ptr<string> content_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DianJin20240628
} // namespace EndToEndRealTimeDialog
#endif
