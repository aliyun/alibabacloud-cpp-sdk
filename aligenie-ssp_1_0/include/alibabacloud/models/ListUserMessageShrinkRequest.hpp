// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTUSERMESSAGESHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTUSERMESSAGESHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliGeniessp_1_0
{
namespace Models
{
  class ListUserMessageShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListUserMessageShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BeforeTime, beforeTime_);
      DARABONBA_PTR_TO_JSON(UserInfo, userInfoShrink_);
      DARABONBA_PTR_TO_JSON(limit, limit_);
    };
    friend void from_json(const Darabonba::Json& j, ListUserMessageShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BeforeTime, beforeTime_);
      DARABONBA_PTR_FROM_JSON(UserInfo, userInfoShrink_);
      DARABONBA_PTR_FROM_JSON(limit, limit_);
    };
    ListUserMessageShrinkRequest() = default ;
    ListUserMessageShrinkRequest(const ListUserMessageShrinkRequest &) = default ;
    ListUserMessageShrinkRequest(ListUserMessageShrinkRequest &&) = default ;
    ListUserMessageShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListUserMessageShrinkRequest() = default ;
    ListUserMessageShrinkRequest& operator=(const ListUserMessageShrinkRequest &) = default ;
    ListUserMessageShrinkRequest& operator=(ListUserMessageShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->beforeTime_ != nullptr
        && this->userInfoShrink_ != nullptr && this->limit_ != nullptr; };
    // beforeTime Field Functions 
    bool hasBeforeTime() const { return this->beforeTime_ != nullptr;};
    void deleteBeforeTime() { this->beforeTime_ = nullptr;};
    inline string beforeTime() const { DARABONBA_PTR_GET_DEFAULT(beforeTime_, "") };
    inline ListUserMessageShrinkRequest& setBeforeTime(string beforeTime) { DARABONBA_PTR_SET_VALUE(beforeTime_, beforeTime) };


    // userInfoShrink Field Functions 
    bool hasUserInfoShrink() const { return this->userInfoShrink_ != nullptr;};
    void deleteUserInfoShrink() { this->userInfoShrink_ = nullptr;};
    inline string userInfoShrink() const { DARABONBA_PTR_GET_DEFAULT(userInfoShrink_, "") };
    inline ListUserMessageShrinkRequest& setUserInfoShrink(string userInfoShrink) { DARABONBA_PTR_SET_VALUE(userInfoShrink_, userInfoShrink) };


    // limit Field Functions 
    bool hasLimit() const { return this->limit_ != nullptr;};
    void deleteLimit() { this->limit_ = nullptr;};
    inline int32_t limit() const { DARABONBA_PTR_GET_DEFAULT(limit_, 0) };
    inline ListUserMessageShrinkRequest& setLimit(int32_t limit) { DARABONBA_PTR_SET_VALUE(limit_, limit) };


  protected:
    std::shared_ptr<string> beforeTime_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> userInfoShrink_ = nullptr;
    std::shared_ptr<int32_t> limit_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGeniessp_1_0
#endif
