// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSKILLSPACERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETSKILLSPACERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ComputeNest20210601
{
namespace Models
{
  class GetSkillSpaceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSkillSpaceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SkillSpaceDescription, skillSpaceDescription_);
      DARABONBA_PTR_TO_JSON(SkillSpaceId, skillSpaceId_);
      DARABONBA_PTR_TO_JSON(SkillSpaceName, skillSpaceName_);
      DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
    };
    friend void from_json(const Darabonba::Json& j, GetSkillSpaceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SkillSpaceDescription, skillSpaceDescription_);
      DARABONBA_PTR_FROM_JSON(SkillSpaceId, skillSpaceId_);
      DARABONBA_PTR_FROM_JSON(SkillSpaceName, skillSpaceName_);
      DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
    };
    GetSkillSpaceResponseBody() = default ;
    GetSkillSpaceResponseBody(const GetSkillSpaceResponseBody &) = default ;
    GetSkillSpaceResponseBody(GetSkillSpaceResponseBody &&) = default ;
    GetSkillSpaceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSkillSpaceResponseBody() = default ;
    GetSkillSpaceResponseBody& operator=(const GetSkillSpaceResponseBody &) = default ;
    GetSkillSpaceResponseBody& operator=(GetSkillSpaceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->createTime_ == nullptr
        && this->requestId_ == nullptr && this->skillSpaceDescription_ == nullptr && this->skillSpaceId_ == nullptr && this->skillSpaceName_ == nullptr && this->updateTime_ == nullptr; };
    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline GetSkillSpaceResponseBody& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetSkillSpaceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // skillSpaceDescription Field Functions 
    bool hasSkillSpaceDescription() const { return this->skillSpaceDescription_ != nullptr;};
    void deleteSkillSpaceDescription() { this->skillSpaceDescription_ = nullptr;};
    inline string getSkillSpaceDescription() const { DARABONBA_PTR_GET_DEFAULT(skillSpaceDescription_, "") };
    inline GetSkillSpaceResponseBody& setSkillSpaceDescription(string skillSpaceDescription) { DARABONBA_PTR_SET_VALUE(skillSpaceDescription_, skillSpaceDescription) };


    // skillSpaceId Field Functions 
    bool hasSkillSpaceId() const { return this->skillSpaceId_ != nullptr;};
    void deleteSkillSpaceId() { this->skillSpaceId_ = nullptr;};
    inline string getSkillSpaceId() const { DARABONBA_PTR_GET_DEFAULT(skillSpaceId_, "") };
    inline GetSkillSpaceResponseBody& setSkillSpaceId(string skillSpaceId) { DARABONBA_PTR_SET_VALUE(skillSpaceId_, skillSpaceId) };


    // skillSpaceName Field Functions 
    bool hasSkillSpaceName() const { return this->skillSpaceName_ != nullptr;};
    void deleteSkillSpaceName() { this->skillSpaceName_ = nullptr;};
    inline string getSkillSpaceName() const { DARABONBA_PTR_GET_DEFAULT(skillSpaceName_, "") };
    inline GetSkillSpaceResponseBody& setSkillSpaceName(string skillSpaceName) { DARABONBA_PTR_SET_VALUE(skillSpaceName_, skillSpaceName) };


    // updateTime Field Functions 
    bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
    void deleteUpdateTime() { this->updateTime_ = nullptr;};
    inline string getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
    inline GetSkillSpaceResponseBody& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


  protected:
    // The time when the SkillSpace was created.
    shared_ptr<string> createTime_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The description of the SkillSpace.
    shared_ptr<string> skillSpaceDescription_ {};
    // The ID of the SkillSpace.
    shared_ptr<string> skillSpaceId_ {};
    // The name of the SkillSpace.
    shared_ptr<string> skillSpaceName_ {};
    // The time when the SkillSpace was last updated.
    shared_ptr<string> updateTime_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ComputeNest20210601
#endif
