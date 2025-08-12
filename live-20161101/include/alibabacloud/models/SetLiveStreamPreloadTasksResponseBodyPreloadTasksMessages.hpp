// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SETLIVESTREAMPRELOADTASKSRESPONSEBODYPRELOADTASKSMESSAGES_HPP_
#define ALIBABACLOUD_MODELS_SETLIVESTREAMPRELOADTASKSRESPONSEBODYPRELOADTASKSMESSAGES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/SetLiveStreamPreloadTasksResponseBodyPreloadTasksMessagesPreloadTasksMessage.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class SetLiveStreamPreloadTasksResponseBodyPreloadTasksMessages : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SetLiveStreamPreloadTasksResponseBodyPreloadTasksMessages& obj) { 
      DARABONBA_PTR_TO_JSON(PreloadTasksMessage, preloadTasksMessage_);
    };
    friend void from_json(const Darabonba::Json& j, SetLiveStreamPreloadTasksResponseBodyPreloadTasksMessages& obj) { 
      DARABONBA_PTR_FROM_JSON(PreloadTasksMessage, preloadTasksMessage_);
    };
    SetLiveStreamPreloadTasksResponseBodyPreloadTasksMessages() = default ;
    SetLiveStreamPreloadTasksResponseBodyPreloadTasksMessages(const SetLiveStreamPreloadTasksResponseBodyPreloadTasksMessages &) = default ;
    SetLiveStreamPreloadTasksResponseBodyPreloadTasksMessages(SetLiveStreamPreloadTasksResponseBodyPreloadTasksMessages &&) = default ;
    SetLiveStreamPreloadTasksResponseBodyPreloadTasksMessages(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SetLiveStreamPreloadTasksResponseBodyPreloadTasksMessages() = default ;
    SetLiveStreamPreloadTasksResponseBodyPreloadTasksMessages& operator=(const SetLiveStreamPreloadTasksResponseBodyPreloadTasksMessages &) = default ;
    SetLiveStreamPreloadTasksResponseBodyPreloadTasksMessages& operator=(SetLiveStreamPreloadTasksResponseBodyPreloadTasksMessages &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->preloadTasksMessage_ != nullptr; };
    // preloadTasksMessage Field Functions 
    bool hasPreloadTasksMessage() const { return this->preloadTasksMessage_ != nullptr;};
    void deletePreloadTasksMessage() { this->preloadTasksMessage_ = nullptr;};
    inline const vector<Models::SetLiveStreamPreloadTasksResponseBodyPreloadTasksMessagesPreloadTasksMessage> & preloadTasksMessage() const { DARABONBA_PTR_GET_CONST(preloadTasksMessage_, vector<Models::SetLiveStreamPreloadTasksResponseBodyPreloadTasksMessagesPreloadTasksMessage>) };
    inline vector<Models::SetLiveStreamPreloadTasksResponseBodyPreloadTasksMessagesPreloadTasksMessage> preloadTasksMessage() { DARABONBA_PTR_GET(preloadTasksMessage_, vector<Models::SetLiveStreamPreloadTasksResponseBodyPreloadTasksMessagesPreloadTasksMessage>) };
    inline SetLiveStreamPreloadTasksResponseBodyPreloadTasksMessages& setPreloadTasksMessage(const vector<Models::SetLiveStreamPreloadTasksResponseBodyPreloadTasksMessagesPreloadTasksMessage> & preloadTasksMessage) { DARABONBA_PTR_SET_VALUE(preloadTasksMessage_, preloadTasksMessage) };
    inline SetLiveStreamPreloadTasksResponseBodyPreloadTasksMessages& setPreloadTasksMessage(vector<Models::SetLiveStreamPreloadTasksResponseBodyPreloadTasksMessagesPreloadTasksMessage> && preloadTasksMessage) { DARABONBA_PTR_SET_RVALUE(preloadTasksMessage_, preloadTasksMessage) };


  protected:
    std::shared_ptr<vector<Models::SetLiveStreamPreloadTasksResponseBodyPreloadTasksMessagesPreloadTasksMessage>> preloadTasksMessage_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
