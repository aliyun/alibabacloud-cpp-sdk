// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTINSTANCERESPONSEBODYINSTANCES_HPP_
#define ALIBABACLOUD_MODELS_LISTINSTANCERESPONSEBODYINSTANCES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Chatbot20220408
{
namespace Models
{
  class ListInstanceResponseBodyInstances : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListInstanceResponseBodyInstances& obj) { 
      DARABONBA_PTR_TO_JSON(Avatar, avatar_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Introduction, introduction_);
      DARABONBA_PTR_TO_JSON(LanguageCode, languageCode_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(RobotType, robotType_);
    };
    friend void from_json(const Darabonba::Json& j, ListInstanceResponseBodyInstances& obj) { 
      DARABONBA_PTR_FROM_JSON(Avatar, avatar_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Introduction, introduction_);
      DARABONBA_PTR_FROM_JSON(LanguageCode, languageCode_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(RobotType, robotType_);
    };
    ListInstanceResponseBodyInstances() = default ;
    ListInstanceResponseBodyInstances(const ListInstanceResponseBodyInstances &) = default ;
    ListInstanceResponseBodyInstances(ListInstanceResponseBodyInstances &&) = default ;
    ListInstanceResponseBodyInstances(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListInstanceResponseBodyInstances() = default ;
    ListInstanceResponseBodyInstances& operator=(const ListInstanceResponseBodyInstances &) = default ;
    ListInstanceResponseBodyInstances& operator=(ListInstanceResponseBodyInstances &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->avatar_ == nullptr
        && return this->createTime_ == nullptr && return this->instanceId_ == nullptr && return this->introduction_ == nullptr && return this->languageCode_ == nullptr && return this->name_ == nullptr
        && return this->robotType_ == nullptr; };
    // avatar Field Functions 
    bool hasAvatar() const { return this->avatar_ != nullptr;};
    void deleteAvatar() { this->avatar_ = nullptr;};
    inline string avatar() const { DARABONBA_PTR_GET_DEFAULT(avatar_, "") };
    inline ListInstanceResponseBodyInstances& setAvatar(string avatar) { DARABONBA_PTR_SET_VALUE(avatar_, avatar) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline ListInstanceResponseBodyInstances& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ListInstanceResponseBodyInstances& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // introduction Field Functions 
    bool hasIntroduction() const { return this->introduction_ != nullptr;};
    void deleteIntroduction() { this->introduction_ = nullptr;};
    inline string introduction() const { DARABONBA_PTR_GET_DEFAULT(introduction_, "") };
    inline ListInstanceResponseBodyInstances& setIntroduction(string introduction) { DARABONBA_PTR_SET_VALUE(introduction_, introduction) };


    // languageCode Field Functions 
    bool hasLanguageCode() const { return this->languageCode_ != nullptr;};
    void deleteLanguageCode() { this->languageCode_ = nullptr;};
    inline string languageCode() const { DARABONBA_PTR_GET_DEFAULT(languageCode_, "") };
    inline ListInstanceResponseBodyInstances& setLanguageCode(string languageCode) { DARABONBA_PTR_SET_VALUE(languageCode_, languageCode) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListInstanceResponseBodyInstances& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // robotType Field Functions 
    bool hasRobotType() const { return this->robotType_ != nullptr;};
    void deleteRobotType() { this->robotType_ = nullptr;};
    inline string robotType() const { DARABONBA_PTR_GET_DEFAULT(robotType_, "") };
    inline ListInstanceResponseBodyInstances& setRobotType(string robotType) { DARABONBA_PTR_SET_VALUE(robotType_, robotType) };


  protected:
    std::shared_ptr<string> avatar_ = nullptr;
    std::shared_ptr<string> createTime_ = nullptr;
    std::shared_ptr<string> instanceId_ = nullptr;
    std::shared_ptr<string> introduction_ = nullptr;
    std::shared_ptr<string> languageCode_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> robotType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Chatbot20220408
#endif
