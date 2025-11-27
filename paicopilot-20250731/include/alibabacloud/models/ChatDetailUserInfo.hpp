// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHATDETAILUSERINFO_HPP_
#define ALIBABACLOUD_MODELS_CHATDETAILUSERINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PAICopilot20250731
{
namespace Models
{
  class ChatDetailUserInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ChatDetailUserInfo& obj) { 
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Role, role_);
    };
    friend void from_json(const Darabonba::Json& j, ChatDetailUserInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Role, role_);
    };
    ChatDetailUserInfo() = default ;
    ChatDetailUserInfo(const ChatDetailUserInfo &) = default ;
    ChatDetailUserInfo(ChatDetailUserInfo &&) = default ;
    ChatDetailUserInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ChatDetailUserInfo() = default ;
    ChatDetailUserInfo& operator=(const ChatDetailUserInfo &) = default ;
    ChatDetailUserInfo& operator=(ChatDetailUserInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->name_ == nullptr
        && return this->role_ == nullptr; };
    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ChatDetailUserInfo& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // role Field Functions 
    bool hasRole() const { return this->role_ != nullptr;};
    void deleteRole() { this->role_ = nullptr;};
    inline string role() const { DARABONBA_PTR_GET_DEFAULT(role_, "") };
    inline ChatDetailUserInfo& setRole(string role) { DARABONBA_PTR_SET_VALUE(role_, role) };


  protected:
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> role_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PAICopilot20250731
#endif
