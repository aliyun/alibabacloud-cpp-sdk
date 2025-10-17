// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTUSERSAYRESPONSEBODYUSERSAYS_HPP_
#define ALIBABACLOUD_MODELS_LISTUSERSAYRESPONSEBODYUSERSAYS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListUserSayResponseBodyUserSaysSlotInfos.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Chatbot20220408
{
namespace Models
{
  class ListUserSayResponseBodyUserSays : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListUserSayResponseBodyUserSays& obj) { 
      DARABONBA_PTR_TO_JSON(Content, content_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(IntentId, intentId_);
      DARABONBA_PTR_TO_JSON(ModifyTime, modifyTime_);
      DARABONBA_PTR_TO_JSON(SlotInfos, slotInfos_);
      DARABONBA_PTR_TO_JSON(UserSayId, userSayId_);
    };
    friend void from_json(const Darabonba::Json& j, ListUserSayResponseBodyUserSays& obj) { 
      DARABONBA_PTR_FROM_JSON(Content, content_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(IntentId, intentId_);
      DARABONBA_PTR_FROM_JSON(ModifyTime, modifyTime_);
      DARABONBA_PTR_FROM_JSON(SlotInfos, slotInfos_);
      DARABONBA_PTR_FROM_JSON(UserSayId, userSayId_);
    };
    ListUserSayResponseBodyUserSays() = default ;
    ListUserSayResponseBodyUserSays(const ListUserSayResponseBodyUserSays &) = default ;
    ListUserSayResponseBodyUserSays(ListUserSayResponseBodyUserSays &&) = default ;
    ListUserSayResponseBodyUserSays(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListUserSayResponseBodyUserSays() = default ;
    ListUserSayResponseBodyUserSays& operator=(const ListUserSayResponseBodyUserSays &) = default ;
    ListUserSayResponseBodyUserSays& operator=(ListUserSayResponseBodyUserSays &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->content_ == nullptr
        && return this->createTime_ == nullptr && return this->intentId_ == nullptr && return this->modifyTime_ == nullptr && return this->slotInfos_ == nullptr && return this->userSayId_ == nullptr; };
    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline string content() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
    inline ListUserSayResponseBodyUserSays& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline ListUserSayResponseBodyUserSays& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // intentId Field Functions 
    bool hasIntentId() const { return this->intentId_ != nullptr;};
    void deleteIntentId() { this->intentId_ = nullptr;};
    inline int64_t intentId() const { DARABONBA_PTR_GET_DEFAULT(intentId_, 0L) };
    inline ListUserSayResponseBodyUserSays& setIntentId(int64_t intentId) { DARABONBA_PTR_SET_VALUE(intentId_, intentId) };


    // modifyTime Field Functions 
    bool hasModifyTime() const { return this->modifyTime_ != nullptr;};
    void deleteModifyTime() { this->modifyTime_ = nullptr;};
    inline string modifyTime() const { DARABONBA_PTR_GET_DEFAULT(modifyTime_, "") };
    inline ListUserSayResponseBodyUserSays& setModifyTime(string modifyTime) { DARABONBA_PTR_SET_VALUE(modifyTime_, modifyTime) };


    // slotInfos Field Functions 
    bool hasSlotInfos() const { return this->slotInfos_ != nullptr;};
    void deleteSlotInfos() { this->slotInfos_ = nullptr;};
    inline const vector<Models::ListUserSayResponseBodyUserSaysSlotInfos> & slotInfos() const { DARABONBA_PTR_GET_CONST(slotInfos_, vector<Models::ListUserSayResponseBodyUserSaysSlotInfos>) };
    inline vector<Models::ListUserSayResponseBodyUserSaysSlotInfos> slotInfos() { DARABONBA_PTR_GET(slotInfos_, vector<Models::ListUserSayResponseBodyUserSaysSlotInfos>) };
    inline ListUserSayResponseBodyUserSays& setSlotInfos(const vector<Models::ListUserSayResponseBodyUserSaysSlotInfos> & slotInfos) { DARABONBA_PTR_SET_VALUE(slotInfos_, slotInfos) };
    inline ListUserSayResponseBodyUserSays& setSlotInfos(vector<Models::ListUserSayResponseBodyUserSaysSlotInfos> && slotInfos) { DARABONBA_PTR_SET_RVALUE(slotInfos_, slotInfos) };


    // userSayId Field Functions 
    bool hasUserSayId() const { return this->userSayId_ != nullptr;};
    void deleteUserSayId() { this->userSayId_ = nullptr;};
    inline int64_t userSayId() const { DARABONBA_PTR_GET_DEFAULT(userSayId_, 0L) };
    inline ListUserSayResponseBodyUserSays& setUserSayId(int64_t userSayId) { DARABONBA_PTR_SET_VALUE(userSayId_, userSayId) };


  protected:
    std::shared_ptr<string> content_ = nullptr;
    std::shared_ptr<string> createTime_ = nullptr;
    std::shared_ptr<int64_t> intentId_ = nullptr;
    std::shared_ptr<string> modifyTime_ = nullptr;
    std::shared_ptr<vector<Models::ListUserSayResponseBodyUserSaysSlotInfos>> slotInfos_ = nullptr;
    std::shared_ptr<int64_t> userSayId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Chatbot20220408
#endif
