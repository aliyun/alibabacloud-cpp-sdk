// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINSTANCERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINSTANCERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeInstanceResponseBodyCategories.hpp>
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
    virtual bool empty() const override { this->avatar_ != nullptr
        && this->categories_ != nullptr && this->createTime_ != nullptr && this->editStatus_ != nullptr && this->instanceId_ != nullptr && this->introduction_ != nullptr
        && this->languageCode_ != nullptr && this->name_ != nullptr && this->requestId_ != nullptr && this->robotType_ != nullptr && this->timeZone_ != nullptr; };
    // avatar Field Functions 
    bool hasAvatar() const { return this->avatar_ != nullptr;};
    void deleteAvatar() { this->avatar_ = nullptr;};
    inline string avatar() const { DARABONBA_PTR_GET_DEFAULT(avatar_, "") };
    inline DescribeInstanceResponseBody& setAvatar(string avatar) { DARABONBA_PTR_SET_VALUE(avatar_, avatar) };


    // categories Field Functions 
    bool hasCategories() const { return this->categories_ != nullptr;};
    void deleteCategories() { this->categories_ = nullptr;};
    inline const vector<DescribeInstanceResponseBodyCategories> & categories() const { DARABONBA_PTR_GET_CONST(categories_, vector<DescribeInstanceResponseBodyCategories>) };
    inline vector<DescribeInstanceResponseBodyCategories> categories() { DARABONBA_PTR_GET(categories_, vector<DescribeInstanceResponseBodyCategories>) };
    inline DescribeInstanceResponseBody& setCategories(const vector<DescribeInstanceResponseBodyCategories> & categories) { DARABONBA_PTR_SET_VALUE(categories_, categories) };
    inline DescribeInstanceResponseBody& setCategories(vector<DescribeInstanceResponseBodyCategories> && categories) { DARABONBA_PTR_SET_RVALUE(categories_, categories) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline DescribeInstanceResponseBody& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // editStatus Field Functions 
    bool hasEditStatus() const { return this->editStatus_ != nullptr;};
    void deleteEditStatus() { this->editStatus_ = nullptr;};
    inline string editStatus() const { DARABONBA_PTR_GET_DEFAULT(editStatus_, "") };
    inline DescribeInstanceResponseBody& setEditStatus(string editStatus) { DARABONBA_PTR_SET_VALUE(editStatus_, editStatus) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DescribeInstanceResponseBody& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // introduction Field Functions 
    bool hasIntroduction() const { return this->introduction_ != nullptr;};
    void deleteIntroduction() { this->introduction_ = nullptr;};
    inline string introduction() const { DARABONBA_PTR_GET_DEFAULT(introduction_, "") };
    inline DescribeInstanceResponseBody& setIntroduction(string introduction) { DARABONBA_PTR_SET_VALUE(introduction_, introduction) };


    // languageCode Field Functions 
    bool hasLanguageCode() const { return this->languageCode_ != nullptr;};
    void deleteLanguageCode() { this->languageCode_ = nullptr;};
    inline string languageCode() const { DARABONBA_PTR_GET_DEFAULT(languageCode_, "") };
    inline DescribeInstanceResponseBody& setLanguageCode(string languageCode) { DARABONBA_PTR_SET_VALUE(languageCode_, languageCode) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeInstanceResponseBody& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeInstanceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // robotType Field Functions 
    bool hasRobotType() const { return this->robotType_ != nullptr;};
    void deleteRobotType() { this->robotType_ = nullptr;};
    inline string robotType() const { DARABONBA_PTR_GET_DEFAULT(robotType_, "") };
    inline DescribeInstanceResponseBody& setRobotType(string robotType) { DARABONBA_PTR_SET_VALUE(robotType_, robotType) };


    // timeZone Field Functions 
    bool hasTimeZone() const { return this->timeZone_ != nullptr;};
    void deleteTimeZone() { this->timeZone_ = nullptr;};
    inline string timeZone() const { DARABONBA_PTR_GET_DEFAULT(timeZone_, "") };
    inline DescribeInstanceResponseBody& setTimeZone(string timeZone) { DARABONBA_PTR_SET_VALUE(timeZone_, timeZone) };


  protected:
    std::shared_ptr<string> avatar_ = nullptr;
    std::shared_ptr<vector<DescribeInstanceResponseBodyCategories>> categories_ = nullptr;
    std::shared_ptr<string> createTime_ = nullptr;
    std::shared_ptr<string> editStatus_ = nullptr;
    std::shared_ptr<string> instanceId_ = nullptr;
    std::shared_ptr<string> introduction_ = nullptr;
    std::shared_ptr<string> languageCode_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<string> robotType_ = nullptr;
    std::shared_ptr<string> timeZone_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Chatbot20220408
#endif
