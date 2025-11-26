// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCHATBOTINSTANCESRESPONSEBODYBOTS_HPP_
#define ALIBABACLOUD_MODELS_LISTCHATBOTINSTANCESRESPONSEBODYBOTS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OutboundBot20191226
{
namespace Models
{
  class ListChatbotInstancesResponseBodyBots : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListChatbotInstancesResponseBodyBots& obj) { 
      DARABONBA_PTR_TO_JSON(Avatar, avatar_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Introduction, introduction_);
      DARABONBA_PTR_TO_JSON(LanguageCode, languageCode_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(TimeZone, timeZone_);
    };
    friend void from_json(const Darabonba::Json& j, ListChatbotInstancesResponseBodyBots& obj) { 
      DARABONBA_PTR_FROM_JSON(Avatar, avatar_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Introduction, introduction_);
      DARABONBA_PTR_FROM_JSON(LanguageCode, languageCode_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(TimeZone, timeZone_);
    };
    ListChatbotInstancesResponseBodyBots() = default ;
    ListChatbotInstancesResponseBodyBots(const ListChatbotInstancesResponseBodyBots &) = default ;
    ListChatbotInstancesResponseBodyBots(ListChatbotInstancesResponseBodyBots &&) = default ;
    ListChatbotInstancesResponseBodyBots(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListChatbotInstancesResponseBodyBots() = default ;
    ListChatbotInstancesResponseBodyBots& operator=(const ListChatbotInstancesResponseBodyBots &) = default ;
    ListChatbotInstancesResponseBodyBots& operator=(ListChatbotInstancesResponseBodyBots &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->avatar_ == nullptr
        && return this->createTime_ == nullptr && return this->instanceId_ == nullptr && return this->introduction_ == nullptr && return this->languageCode_ == nullptr && return this->name_ == nullptr
        && return this->timeZone_ == nullptr; };
    // avatar Field Functions 
    bool hasAvatar() const { return this->avatar_ != nullptr;};
    void deleteAvatar() { this->avatar_ = nullptr;};
    inline string avatar() const { DARABONBA_PTR_GET_DEFAULT(avatar_, "") };
    inline ListChatbotInstancesResponseBodyBots& setAvatar(string avatar) { DARABONBA_PTR_SET_VALUE(avatar_, avatar) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline ListChatbotInstancesResponseBodyBots& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ListChatbotInstancesResponseBodyBots& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // introduction Field Functions 
    bool hasIntroduction() const { return this->introduction_ != nullptr;};
    void deleteIntroduction() { this->introduction_ = nullptr;};
    inline string introduction() const { DARABONBA_PTR_GET_DEFAULT(introduction_, "") };
    inline ListChatbotInstancesResponseBodyBots& setIntroduction(string introduction) { DARABONBA_PTR_SET_VALUE(introduction_, introduction) };


    // languageCode Field Functions 
    bool hasLanguageCode() const { return this->languageCode_ != nullptr;};
    void deleteLanguageCode() { this->languageCode_ = nullptr;};
    inline string languageCode() const { DARABONBA_PTR_GET_DEFAULT(languageCode_, "") };
    inline ListChatbotInstancesResponseBodyBots& setLanguageCode(string languageCode) { DARABONBA_PTR_SET_VALUE(languageCode_, languageCode) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListChatbotInstancesResponseBodyBots& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // timeZone Field Functions 
    bool hasTimeZone() const { return this->timeZone_ != nullptr;};
    void deleteTimeZone() { this->timeZone_ = nullptr;};
    inline string timeZone() const { DARABONBA_PTR_GET_DEFAULT(timeZone_, "") };
    inline ListChatbotInstancesResponseBodyBots& setTimeZone(string timeZone) { DARABONBA_PTR_SET_VALUE(timeZone_, timeZone) };


  protected:
    std::shared_ptr<string> avatar_ = nullptr;
    std::shared_ptr<string> createTime_ = nullptr;
    std::shared_ptr<string> instanceId_ = nullptr;
    std::shared_ptr<string> introduction_ = nullptr;
    std::shared_ptr<string> languageCode_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> timeZone_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OutboundBot20191226
#endif
