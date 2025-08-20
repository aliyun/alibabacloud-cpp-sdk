// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CLOSECHATINSTANCESESSIONSSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CLOSECHATINSTANCESESSIONSSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace LingMou20250527
{
namespace Models
{
  class CloseChatInstanceSessionsShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CloseChatInstanceSessionsShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(sessionIds, sessionIdsShrink_);
    };
    friend void from_json(const Darabonba::Json& j, CloseChatInstanceSessionsShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(sessionIds, sessionIdsShrink_);
    };
    CloseChatInstanceSessionsShrinkRequest() = default ;
    CloseChatInstanceSessionsShrinkRequest(const CloseChatInstanceSessionsShrinkRequest &) = default ;
    CloseChatInstanceSessionsShrinkRequest(CloseChatInstanceSessionsShrinkRequest &&) = default ;
    CloseChatInstanceSessionsShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CloseChatInstanceSessionsShrinkRequest() = default ;
    CloseChatInstanceSessionsShrinkRequest& operator=(const CloseChatInstanceSessionsShrinkRequest &) = default ;
    CloseChatInstanceSessionsShrinkRequest& operator=(CloseChatInstanceSessionsShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->sessionIdsShrink_ != nullptr; };
    // sessionIdsShrink Field Functions 
    bool hasSessionIdsShrink() const { return this->sessionIdsShrink_ != nullptr;};
    void deleteSessionIdsShrink() { this->sessionIdsShrink_ = nullptr;};
    inline string sessionIdsShrink() const { DARABONBA_PTR_GET_DEFAULT(sessionIdsShrink_, "") };
    inline CloseChatInstanceSessionsShrinkRequest& setSessionIdsShrink(string sessionIdsShrink) { DARABONBA_PTR_SET_VALUE(sessionIdsShrink_, sessionIdsShrink) };


  protected:
    std::shared_ptr<string> sessionIdsShrink_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace LingMou20250527
#endif
