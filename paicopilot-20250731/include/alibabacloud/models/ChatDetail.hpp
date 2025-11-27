// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHATDETAIL_HPP_
#define ALIBABACLOUD_MODELS_CHATDETAIL_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ChatDetailUserInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PAICopilot20250731
{
namespace Models
{
  class ChatDetail : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ChatDetail& obj) { 
      DARABONBA_PTR_TO_JSON(Content, content_);
      DARABONBA_PTR_TO_JSON(GmtCreateTime, gmtCreateTime_);
      DARABONBA_PTR_TO_JSON(UserInfo, userInfo_);
    };
    friend void from_json(const Darabonba::Json& j, ChatDetail& obj) { 
      DARABONBA_PTR_FROM_JSON(Content, content_);
      DARABONBA_PTR_FROM_JSON(GmtCreateTime, gmtCreateTime_);
      DARABONBA_PTR_FROM_JSON(UserInfo, userInfo_);
    };
    ChatDetail() = default ;
    ChatDetail(const ChatDetail &) = default ;
    ChatDetail(ChatDetail &&) = default ;
    ChatDetail(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ChatDetail() = default ;
    ChatDetail& operator=(const ChatDetail &) = default ;
    ChatDetail& operator=(ChatDetail &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->content_ == nullptr
        && return this->gmtCreateTime_ == nullptr && return this->userInfo_ == nullptr; };
    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline string content() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
    inline ChatDetail& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


    // gmtCreateTime Field Functions 
    bool hasGmtCreateTime() const { return this->gmtCreateTime_ != nullptr;};
    void deleteGmtCreateTime() { this->gmtCreateTime_ = nullptr;};
    inline string gmtCreateTime() const { DARABONBA_PTR_GET_DEFAULT(gmtCreateTime_, "") };
    inline ChatDetail& setGmtCreateTime(string gmtCreateTime) { DARABONBA_PTR_SET_VALUE(gmtCreateTime_, gmtCreateTime) };


    // userInfo Field Functions 
    bool hasUserInfo() const { return this->userInfo_ != nullptr;};
    void deleteUserInfo() { this->userInfo_ = nullptr;};
    inline const ChatDetailUserInfo & userInfo() const { DARABONBA_PTR_GET_CONST(userInfo_, ChatDetailUserInfo) };
    inline ChatDetailUserInfo userInfo() { DARABONBA_PTR_GET(userInfo_, ChatDetailUserInfo) };
    inline ChatDetail& setUserInfo(const ChatDetailUserInfo & userInfo) { DARABONBA_PTR_SET_VALUE(userInfo_, userInfo) };
    inline ChatDetail& setUserInfo(ChatDetailUserInfo && userInfo) { DARABONBA_PTR_SET_RVALUE(userInfo_, userInfo) };


  protected:
    std::shared_ptr<string> content_ = nullptr;
    // Use the UTC time format: yyyy-MM-ddTHH:mm:ss.SSSZ
    std::shared_ptr<string> gmtCreateTime_ = nullptr;
    std::shared_ptr<ChatDetailUserInfo> userInfo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PAICopilot20250731
#endif
