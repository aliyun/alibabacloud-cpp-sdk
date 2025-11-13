// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_STARTCHATRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_STARTCHATRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CCC20200701
{
namespace Models
{
  class StartChatResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const StartChatResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(ChatConversationId, chatConversationId_);
      DARABONBA_PTR_TO_JSON(JobId, jobId_);
    };
    friend void from_json(const Darabonba::Json& j, StartChatResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(ChatConversationId, chatConversationId_);
      DARABONBA_PTR_FROM_JSON(JobId, jobId_);
    };
    StartChatResponseBodyData() = default ;
    StartChatResponseBodyData(const StartChatResponseBodyData &) = default ;
    StartChatResponseBodyData(StartChatResponseBodyData &&) = default ;
    StartChatResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~StartChatResponseBodyData() = default ;
    StartChatResponseBodyData& operator=(const StartChatResponseBodyData &) = default ;
    StartChatResponseBodyData& operator=(StartChatResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->chatConversationId_ == nullptr
        && return this->jobId_ == nullptr; };
    // chatConversationId Field Functions 
    bool hasChatConversationId() const { return this->chatConversationId_ != nullptr;};
    void deleteChatConversationId() { this->chatConversationId_ = nullptr;};
    inline string chatConversationId() const { DARABONBA_PTR_GET_DEFAULT(chatConversationId_, "") };
    inline StartChatResponseBodyData& setChatConversationId(string chatConversationId) { DARABONBA_PTR_SET_VALUE(chatConversationId_, chatConversationId) };


    // jobId Field Functions 
    bool hasJobId() const { return this->jobId_ != nullptr;};
    void deleteJobId() { this->jobId_ = nullptr;};
    inline string jobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, "") };
    inline StartChatResponseBodyData& setJobId(string jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


  protected:
    std::shared_ptr<string> chatConversationId_ = nullptr;
    std::shared_ptr<string> jobId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CCC20200701
#endif
