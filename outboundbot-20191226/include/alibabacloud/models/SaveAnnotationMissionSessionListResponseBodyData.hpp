// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SAVEANNOTATIONMISSIONSESSIONLISTRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_SAVEANNOTATIONMISSIONSESSIONLISTRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/SaveAnnotationMissionSessionListResponseBodyDataSaveAnnotationMissionSessionListRequest.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OutboundBot20191226
{
namespace Models
{
  class SaveAnnotationMissionSessionListResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SaveAnnotationMissionSessionListResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(MessageList, messageList_);
      DARABONBA_PTR_TO_JSON(SaveAnnotationMissionSessionListRequest, saveAnnotationMissionSessionListRequest_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, SaveAnnotationMissionSessionListResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(MessageList, messageList_);
      DARABONBA_PTR_FROM_JSON(SaveAnnotationMissionSessionListRequest, saveAnnotationMissionSessionListRequest_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    SaveAnnotationMissionSessionListResponseBodyData() = default ;
    SaveAnnotationMissionSessionListResponseBodyData(const SaveAnnotationMissionSessionListResponseBodyData &) = default ;
    SaveAnnotationMissionSessionListResponseBodyData(SaveAnnotationMissionSessionListResponseBodyData &&) = default ;
    SaveAnnotationMissionSessionListResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SaveAnnotationMissionSessionListResponseBodyData() = default ;
    SaveAnnotationMissionSessionListResponseBodyData& operator=(const SaveAnnotationMissionSessionListResponseBodyData &) = default ;
    SaveAnnotationMissionSessionListResponseBodyData& operator=(SaveAnnotationMissionSessionListResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->message_ == nullptr
        && return this->messageList_ == nullptr && return this->saveAnnotationMissionSessionListRequest_ == nullptr && return this->success_ == nullptr; };
    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline SaveAnnotationMissionSessionListResponseBodyData& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // messageList Field Functions 
    bool hasMessageList() const { return this->messageList_ != nullptr;};
    void deleteMessageList() { this->messageList_ = nullptr;};
    inline const vector<string> & messageList() const { DARABONBA_PTR_GET_CONST(messageList_, vector<string>) };
    inline vector<string> messageList() { DARABONBA_PTR_GET(messageList_, vector<string>) };
    inline SaveAnnotationMissionSessionListResponseBodyData& setMessageList(const vector<string> & messageList) { DARABONBA_PTR_SET_VALUE(messageList_, messageList) };
    inline SaveAnnotationMissionSessionListResponseBodyData& setMessageList(vector<string> && messageList) { DARABONBA_PTR_SET_RVALUE(messageList_, messageList) };


    // saveAnnotationMissionSessionListRequest Field Functions 
    bool hasSaveAnnotationMissionSessionListRequest() const { return this->saveAnnotationMissionSessionListRequest_ != nullptr;};
    void deleteSaveAnnotationMissionSessionListRequest() { this->saveAnnotationMissionSessionListRequest_ = nullptr;};
    inline const Models::SaveAnnotationMissionSessionListResponseBodyDataSaveAnnotationMissionSessionListRequest & saveAnnotationMissionSessionListRequest() const { DARABONBA_PTR_GET_CONST(saveAnnotationMissionSessionListRequest_, Models::SaveAnnotationMissionSessionListResponseBodyDataSaveAnnotationMissionSessionListRequest) };
    inline Models::SaveAnnotationMissionSessionListResponseBodyDataSaveAnnotationMissionSessionListRequest saveAnnotationMissionSessionListRequest() { DARABONBA_PTR_GET(saveAnnotationMissionSessionListRequest_, Models::SaveAnnotationMissionSessionListResponseBodyDataSaveAnnotationMissionSessionListRequest) };
    inline SaveAnnotationMissionSessionListResponseBodyData& setSaveAnnotationMissionSessionListRequest(const Models::SaveAnnotationMissionSessionListResponseBodyDataSaveAnnotationMissionSessionListRequest & saveAnnotationMissionSessionListRequest) { DARABONBA_PTR_SET_VALUE(saveAnnotationMissionSessionListRequest_, saveAnnotationMissionSessionListRequest) };
    inline SaveAnnotationMissionSessionListResponseBodyData& setSaveAnnotationMissionSessionListRequest(Models::SaveAnnotationMissionSessionListResponseBodyDataSaveAnnotationMissionSessionListRequest && saveAnnotationMissionSessionListRequest) { DARABONBA_PTR_SET_RVALUE(saveAnnotationMissionSessionListRequest_, saveAnnotationMissionSessionListRequest) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline SaveAnnotationMissionSessionListResponseBodyData& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    std::shared_ptr<string> message_ = nullptr;
    std::shared_ptr<vector<string>> messageList_ = nullptr;
    std::shared_ptr<Models::SaveAnnotationMissionSessionListResponseBodyDataSaveAnnotationMissionSessionListRequest> saveAnnotationMissionSessionListRequest_ = nullptr;
    std::shared_ptr<bool> success_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OutboundBot20191226
#endif
