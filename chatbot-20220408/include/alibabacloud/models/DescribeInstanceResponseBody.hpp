// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINSTANCERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINSTANCERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Chatbot20220408
{
namespace Models
{
  class DescribeInstanceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInstanceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Avatar, avatar_);
      DARABONBA_PTR_TO_JSON(Categories, categories_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(EditStatus, editStatus_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Introduction, introduction_);
      DARABONBA_PTR_TO_JSON(LanguageCode, languageCode_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(RobotType, robotType_);
      DARABONBA_PTR_TO_JSON(TimeZone, timeZone_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInstanceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Avatar, avatar_);
      DARABONBA_PTR_FROM_JSON(Categories, categories_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(EditStatus, editStatus_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Introduction, introduction_);
      DARABONBA_PTR_FROM_JSON(LanguageCode, languageCode_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(RobotType, robotType_);
      DARABONBA_PTR_FROM_JSON(TimeZone, timeZone_);
    };
    DescribeInstanceResponseBody() = default ;
    DescribeInstanceResponseBody(const DescribeInstanceResponseBody &) = default ;
    DescribeInstanceResponseBody(DescribeInstanceResponseBody &&) = default ;
    DescribeInstanceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeInstanceResponseBody() = default ;
    DescribeInstanceResponseBody& operator=(const DescribeInstanceResponseBody &) = default ;
    DescribeInstanceResponseBody& operator=(DescribeInstanceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Categories : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Categories& obj) { 
        DARABONBA_PTR_TO_JSON(AbilityType, abilityType_);
        DARABONBA_PTR_TO_JSON(CategoryId, categoryId_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(ParentCategoryId, parentCategoryId_);
      };
      friend void from_json(const Darabonba::Json& j, Categories& obj) { 
        DARABONBA_PTR_FROM_JSON(AbilityType, abilityType_);
        DARABONBA_PTR_FROM_JSON(CategoryId, categoryId_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(ParentCategoryId, parentCategoryId_);
      };
      Categories() = default ;
      Categories(const Categories &) = default ;
      Categories(Categories &&) = default ;
      Categories(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Categories() = default ;
      Categories& operator=(const Categories &) = default ;
      Categories& operator=(Categories &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->abilityType_ == nullptr
        && this->categoryId_ == nullptr && this->name_ == nullptr && this->parentCategoryId_ == nullptr; };
      // abilityType Field Functions 
      bool hasAbilityType() const { return this->abilityType_ != nullptr;};
      void deleteAbilityType() { this->abilityType_ = nullptr;};
      inline string getAbilityType() const { DARABONBA_PTR_GET_DEFAULT(abilityType_, "") };
      inline Categories& setAbilityType(string abilityType) { DARABONBA_PTR_SET_VALUE(abilityType_, abilityType) };


      // categoryId Field Functions 
      bool hasCategoryId() const { return this->categoryId_ != nullptr;};
      void deleteCategoryId() { this->categoryId_ = nullptr;};
      inline int64_t getCategoryId() const { DARABONBA_PTR_GET_DEFAULT(categoryId_, 0L) };
      inline Categories& setCategoryId(int64_t categoryId) { DARABONBA_PTR_SET_VALUE(categoryId_, categoryId) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Categories& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // parentCategoryId Field Functions 
      bool hasParentCategoryId() const { return this->parentCategoryId_ != nullptr;};
      void deleteParentCategoryId() { this->parentCategoryId_ = nullptr;};
      inline int64_t getParentCategoryId() const { DARABONBA_PTR_GET_DEFAULT(parentCategoryId_, 0L) };
      inline Categories& setParentCategoryId(int64_t parentCategoryId) { DARABONBA_PTR_SET_VALUE(parentCategoryId_, parentCategoryId) };


    protected:
      // The ability type of the category, such as FAQ or MRC.
      shared_ptr<string> abilityType_ {};
      // The category ID.
      shared_ptr<int64_t> categoryId_ {};
      // The category name.
      shared_ptr<string> name_ {};
      // The parent category ID. A value of -1 indicates the root directory.
      shared_ptr<int64_t> parentCategoryId_ {};
    };

    virtual bool empty() const override { return this->avatar_ == nullptr
        && this->categories_ == nullptr && this->createTime_ == nullptr && this->editStatus_ == nullptr && this->instanceId_ == nullptr && this->introduction_ == nullptr
        && this->languageCode_ == nullptr && this->name_ == nullptr && this->requestId_ == nullptr && this->robotType_ == nullptr && this->timeZone_ == nullptr; };
    // avatar Field Functions 
    bool hasAvatar() const { return this->avatar_ != nullptr;};
    void deleteAvatar() { this->avatar_ = nullptr;};
    inline string getAvatar() const { DARABONBA_PTR_GET_DEFAULT(avatar_, "") };
    inline DescribeInstanceResponseBody& setAvatar(string avatar) { DARABONBA_PTR_SET_VALUE(avatar_, avatar) };


    // categories Field Functions 
    bool hasCategories() const { return this->categories_ != nullptr;};
    void deleteCategories() { this->categories_ = nullptr;};
    inline const vector<DescribeInstanceResponseBody::Categories> & getCategories() const { DARABONBA_PTR_GET_CONST(categories_, vector<DescribeInstanceResponseBody::Categories>) };
    inline vector<DescribeInstanceResponseBody::Categories> getCategories() { DARABONBA_PTR_GET(categories_, vector<DescribeInstanceResponseBody::Categories>) };
    inline DescribeInstanceResponseBody& setCategories(const vector<DescribeInstanceResponseBody::Categories> & categories) { DARABONBA_PTR_SET_VALUE(categories_, categories) };
    inline DescribeInstanceResponseBody& setCategories(vector<DescribeInstanceResponseBody::Categories> && categories) { DARABONBA_PTR_SET_RVALUE(categories_, categories) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline DescribeInstanceResponseBody& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // editStatus Field Functions 
    bool hasEditStatus() const { return this->editStatus_ != nullptr;};
    void deleteEditStatus() { this->editStatus_ = nullptr;};
    inline string getEditStatus() const { DARABONBA_PTR_GET_DEFAULT(editStatus_, "") };
    inline DescribeInstanceResponseBody& setEditStatus(string editStatus) { DARABONBA_PTR_SET_VALUE(editStatus_, editStatus) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DescribeInstanceResponseBody& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // introduction Field Functions 
    bool hasIntroduction() const { return this->introduction_ != nullptr;};
    void deleteIntroduction() { this->introduction_ = nullptr;};
    inline string getIntroduction() const { DARABONBA_PTR_GET_DEFAULT(introduction_, "") };
    inline DescribeInstanceResponseBody& setIntroduction(string introduction) { DARABONBA_PTR_SET_VALUE(introduction_, introduction) };


    // languageCode Field Functions 
    bool hasLanguageCode() const { return this->languageCode_ != nullptr;};
    void deleteLanguageCode() { this->languageCode_ = nullptr;};
    inline string getLanguageCode() const { DARABONBA_PTR_GET_DEFAULT(languageCode_, "") };
    inline DescribeInstanceResponseBody& setLanguageCode(string languageCode) { DARABONBA_PTR_SET_VALUE(languageCode_, languageCode) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeInstanceResponseBody& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeInstanceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // robotType Field Functions 
    bool hasRobotType() const { return this->robotType_ != nullptr;};
    void deleteRobotType() { this->robotType_ = nullptr;};
    inline string getRobotType() const { DARABONBA_PTR_GET_DEFAULT(robotType_, "") };
    inline DescribeInstanceResponseBody& setRobotType(string robotType) { DARABONBA_PTR_SET_VALUE(robotType_, robotType) };


    // timeZone Field Functions 
    bool hasTimeZone() const { return this->timeZone_ != nullptr;};
    void deleteTimeZone() { this->timeZone_ = nullptr;};
    inline string getTimeZone() const { DARABONBA_PTR_GET_DEFAULT(timeZone_, "") };
    inline DescribeInstanceResponseBody& setTimeZone(string timeZone) { DARABONBA_PTR_SET_VALUE(timeZone_, timeZone) };


  protected:
    // The URL of the robot\\"s avatar.
    shared_ptr<string> avatar_ {};
    // A list of categories.
    shared_ptr<vector<DescribeInstanceResponseBody::Categories>> categories_ {};
    // The UTC time when the robot was created.
    shared_ptr<string> createTime_ {};
    // The status of the robot.
    shared_ptr<string> editStatus_ {};
    // The unique identifier of the robot instance.
    shared_ptr<string> instanceId_ {};
    // The robot\\"s introduction.
    shared_ptr<string> introduction_ {};
    // The language of the robot, such as zh-cn and en-us.
    shared_ptr<string> languageCode_ {};
    // The robot name.
    shared_ptr<string> name_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The robot type.
    shared_ptr<string> robotType_ {};
    // The time zone of the robot. For more information, see Time zone codes.
    shared_ptr<string> timeZone_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Chatbot20220408
#endif
