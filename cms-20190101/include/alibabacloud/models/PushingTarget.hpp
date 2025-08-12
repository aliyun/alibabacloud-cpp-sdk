// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PUSHINGTARGET_HPP_
#define ALIBABACLOUD_MODELS_PUSHINGTARGET_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/PushingTargetHttpRequestTarget.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class PushingTarget : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PushingTarget& obj) { 
      DARABONBA_PTR_TO_JSON(Arn, arn_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(HttpRequestTarget, httpRequestTarget_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Range, range_);
      DARABONBA_PTR_TO_JSON(TemplateUuid, templateUuid_);
      DARABONBA_PTR_TO_JSON(Type, type_);
      DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
      DARABONBA_PTR_TO_JSON(Uuid, uuid_);
    };
    friend void from_json(const Darabonba::Json& j, PushingTarget& obj) { 
      DARABONBA_PTR_FROM_JSON(Arn, arn_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(HttpRequestTarget, httpRequestTarget_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Range, range_);
      DARABONBA_PTR_FROM_JSON(TemplateUuid, templateUuid_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
      DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
      DARABONBA_PTR_FROM_JSON(Uuid, uuid_);
    };
    PushingTarget() = default ;
    PushingTarget(const PushingTarget &) = default ;
    PushingTarget(PushingTarget &&) = default ;
    PushingTarget(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PushingTarget() = default ;
    PushingTarget& operator=(const PushingTarget &) = default ;
    PushingTarget& operator=(PushingTarget &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->arn_ != nullptr
        && this->createTime_ != nullptr && this->description_ != nullptr && this->httpRequestTarget_ != nullptr && this->name_ != nullptr && this->range_ != nullptr
        && this->templateUuid_ != nullptr && this->type_ != nullptr && this->updateTime_ != nullptr && this->userId_ != nullptr && this->uuid_ != nullptr; };
    // arn Field Functions 
    bool hasArn() const { return this->arn_ != nullptr;};
    void deleteArn() { this->arn_ = nullptr;};
    inline string arn() const { DARABONBA_PTR_GET_DEFAULT(arn_, "") };
    inline PushingTarget& setArn(string arn) { DARABONBA_PTR_SET_VALUE(arn_, arn) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline PushingTarget& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline PushingTarget& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // httpRequestTarget Field Functions 
    bool hasHttpRequestTarget() const { return this->httpRequestTarget_ != nullptr;};
    void deleteHttpRequestTarget() { this->httpRequestTarget_ = nullptr;};
    inline const PushingTargetHttpRequestTarget & httpRequestTarget() const { DARABONBA_PTR_GET_CONST(httpRequestTarget_, PushingTargetHttpRequestTarget) };
    inline PushingTargetHttpRequestTarget httpRequestTarget() { DARABONBA_PTR_GET(httpRequestTarget_, PushingTargetHttpRequestTarget) };
    inline PushingTarget& setHttpRequestTarget(const PushingTargetHttpRequestTarget & httpRequestTarget) { DARABONBA_PTR_SET_VALUE(httpRequestTarget_, httpRequestTarget) };
    inline PushingTarget& setHttpRequestTarget(PushingTargetHttpRequestTarget && httpRequestTarget) { DARABONBA_PTR_SET_RVALUE(httpRequestTarget_, httpRequestTarget) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline PushingTarget& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // range Field Functions 
    bool hasRange() const { return this->range_ != nullptr;};
    void deleteRange() { this->range_ = nullptr;};
    inline string range() const { DARABONBA_PTR_GET_DEFAULT(range_, "") };
    inline PushingTarget& setRange(string range) { DARABONBA_PTR_SET_VALUE(range_, range) };


    // templateUuid Field Functions 
    bool hasTemplateUuid() const { return this->templateUuid_ != nullptr;};
    void deleteTemplateUuid() { this->templateUuid_ = nullptr;};
    inline string templateUuid() const { DARABONBA_PTR_GET_DEFAULT(templateUuid_, "") };
    inline PushingTarget& setTemplateUuid(string templateUuid) { DARABONBA_PTR_SET_VALUE(templateUuid_, templateUuid) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline PushingTarget& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // updateTime Field Functions 
    bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
    void deleteUpdateTime() { this->updateTime_ = nullptr;};
    inline string updateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
    inline PushingTarget& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline PushingTarget& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


    // uuid Field Functions 
    bool hasUuid() const { return this->uuid_ != nullptr;};
    void deleteUuid() { this->uuid_ = nullptr;};
    inline string uuid() const { DARABONBA_PTR_GET_DEFAULT(uuid_, "") };
    inline PushingTarget& setUuid(string uuid) { DARABONBA_PTR_SET_VALUE(uuid_, uuid) };


  protected:
    std::shared_ptr<string> arn_ = nullptr;
    std::shared_ptr<string> createTime_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<PushingTargetHttpRequestTarget> httpRequestTarget_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> range_ = nullptr;
    std::shared_ptr<string> templateUuid_ = nullptr;
    std::shared_ptr<string> type_ = nullptr;
    std::shared_ptr<string> updateTime_ = nullptr;
    std::shared_ptr<string> userId_ = nullptr;
    std::shared_ptr<string> uuid_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
