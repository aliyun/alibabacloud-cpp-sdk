// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHATDETAIL_HPP_
#define ALIBABACLOUD_MODELS_CHATDETAIL_HPP_
#include <darabonba/Core.hpp>
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
    class UserInfo : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const UserInfo& obj) { 
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(Role, role_);
      };
      friend void from_json(const Darabonba::Json& j, UserInfo& obj) { 
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(Role, role_);
      };
      UserInfo() = default ;
      UserInfo(const UserInfo &) = default ;
      UserInfo(UserInfo &&) = default ;
      UserInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~UserInfo() = default ;
      UserInfo& operator=(const UserInfo &) = default ;
      UserInfo& operator=(UserInfo &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->name_ == nullptr
        && this->role_ == nullptr; };
      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline UserInfo& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // role Field Functions 
      bool hasRole() const { return this->role_ != nullptr;};
      void deleteRole() { this->role_ = nullptr;};
      inline string getRole() const { DARABONBA_PTR_GET_DEFAULT(role_, "") };
      inline UserInfo& setRole(string role) { DARABONBA_PTR_SET_VALUE(role_, role) };


    protected:
      shared_ptr<string> name_ {};
      shared_ptr<string> role_ {};
    };

    virtual bool empty() const override { return this->content_ == nullptr
        && this->gmtCreateTime_ == nullptr && this->userInfo_ == nullptr; };
    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline string getContent() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
    inline ChatDetail& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


    // gmtCreateTime Field Functions 
    bool hasGmtCreateTime() const { return this->gmtCreateTime_ != nullptr;};
    void deleteGmtCreateTime() { this->gmtCreateTime_ = nullptr;};
    inline string getGmtCreateTime() const { DARABONBA_PTR_GET_DEFAULT(gmtCreateTime_, "") };
    inline ChatDetail& setGmtCreateTime(string gmtCreateTime) { DARABONBA_PTR_SET_VALUE(gmtCreateTime_, gmtCreateTime) };


    // userInfo Field Functions 
    bool hasUserInfo() const { return this->userInfo_ != nullptr;};
    void deleteUserInfo() { this->userInfo_ = nullptr;};
    inline const ChatDetail::UserInfo & getUserInfo() const { DARABONBA_PTR_GET_CONST(userInfo_, ChatDetail::UserInfo) };
    inline ChatDetail::UserInfo getUserInfo() { DARABONBA_PTR_GET(userInfo_, ChatDetail::UserInfo) };
    inline ChatDetail& setUserInfo(const ChatDetail::UserInfo & userInfo) { DARABONBA_PTR_SET_VALUE(userInfo_, userInfo) };
    inline ChatDetail& setUserInfo(ChatDetail::UserInfo && userInfo) { DARABONBA_PTR_SET_RVALUE(userInfo_, userInfo) };


  protected:
    shared_ptr<string> content_ {};
    // Use the UTC time format: yyyy-MM-ddTHH:mm:ss.SSSZ
    shared_ptr<string> gmtCreateTime_ {};
    shared_ptr<ChatDetail::UserInfo> userInfo_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PAICopilot20250731
#endif
