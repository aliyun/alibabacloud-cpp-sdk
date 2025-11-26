// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTBEEBOTINTENTUSERSAYRESPONSEBODYUSERSAYS_HPP_
#define ALIBABACLOUD_MODELS_LISTBEEBOTINTENTUSERSAYRESPONSEBODYUSERSAYS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OutboundBot20191226
{
namespace Models
{
  class ListBeebotIntentUserSayResponseBodyUserSays : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListBeebotIntentUserSayResponseBodyUserSays& obj) { 
      DARABONBA_PTR_TO_JSON(Content, content_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(IntentId, intentId_);
      DARABONBA_PTR_TO_JSON(ModifyTime, modifyTime_);
      DARABONBA_PTR_TO_JSON(UserSayId, userSayId_);
    };
    friend void from_json(const Darabonba::Json& j, ListBeebotIntentUserSayResponseBodyUserSays& obj) { 
      DARABONBA_PTR_FROM_JSON(Content, content_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(IntentId, intentId_);
      DARABONBA_PTR_FROM_JSON(ModifyTime, modifyTime_);
      DARABONBA_PTR_FROM_JSON(UserSayId, userSayId_);
    };
    ListBeebotIntentUserSayResponseBodyUserSays() = default ;
    ListBeebotIntentUserSayResponseBodyUserSays(const ListBeebotIntentUserSayResponseBodyUserSays &) = default ;
    ListBeebotIntentUserSayResponseBodyUserSays(ListBeebotIntentUserSayResponseBodyUserSays &&) = default ;
    ListBeebotIntentUserSayResponseBodyUserSays(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListBeebotIntentUserSayResponseBodyUserSays() = default ;
    ListBeebotIntentUserSayResponseBodyUserSays& operator=(const ListBeebotIntentUserSayResponseBodyUserSays &) = default ;
    ListBeebotIntentUserSayResponseBodyUserSays& operator=(ListBeebotIntentUserSayResponseBodyUserSays &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->content_ == nullptr
        && return this->createTime_ == nullptr && return this->intentId_ == nullptr && return this->modifyTime_ == nullptr && return this->userSayId_ == nullptr; };
    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline string content() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
    inline ListBeebotIntentUserSayResponseBodyUserSays& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline ListBeebotIntentUserSayResponseBodyUserSays& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // intentId Field Functions 
    bool hasIntentId() const { return this->intentId_ != nullptr;};
    void deleteIntentId() { this->intentId_ = nullptr;};
    inline int64_t intentId() const { DARABONBA_PTR_GET_DEFAULT(intentId_, 0L) };
    inline ListBeebotIntentUserSayResponseBodyUserSays& setIntentId(int64_t intentId) { DARABONBA_PTR_SET_VALUE(intentId_, intentId) };


    // modifyTime Field Functions 
    bool hasModifyTime() const { return this->modifyTime_ != nullptr;};
    void deleteModifyTime() { this->modifyTime_ = nullptr;};
    inline string modifyTime() const { DARABONBA_PTR_GET_DEFAULT(modifyTime_, "") };
    inline ListBeebotIntentUserSayResponseBodyUserSays& setModifyTime(string modifyTime) { DARABONBA_PTR_SET_VALUE(modifyTime_, modifyTime) };


    // userSayId Field Functions 
    bool hasUserSayId() const { return this->userSayId_ != nullptr;};
    void deleteUserSayId() { this->userSayId_ = nullptr;};
    inline string userSayId() const { DARABONBA_PTR_GET_DEFAULT(userSayId_, "") };
    inline ListBeebotIntentUserSayResponseBodyUserSays& setUserSayId(string userSayId) { DARABONBA_PTR_SET_VALUE(userSayId_, userSayId) };


  protected:
    std::shared_ptr<string> content_ = nullptr;
    std::shared_ptr<string> createTime_ = nullptr;
    std::shared_ptr<int64_t> intentId_ = nullptr;
    std::shared_ptr<string> modifyTime_ = nullptr;
    std::shared_ptr<string> userSayId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OutboundBot20191226
#endif
