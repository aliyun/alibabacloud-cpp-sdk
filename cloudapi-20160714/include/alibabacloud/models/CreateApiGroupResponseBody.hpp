// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEAPIGROUPRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEAPIGROUPRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class CreateApiGroupResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateApiGroupResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(BasePath, basePath_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(GroupId, groupId_);
      DARABONBA_PTR_TO_JSON(GroupName, groupName_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(InstanceType, instanceType_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SubDomain, subDomain_);
      DARABONBA_PTR_TO_JSON(TagStatus, tagStatus_);
    };
    friend void from_json(const Darabonba::Json& j, CreateApiGroupResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(BasePath, basePath_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
      DARABONBA_PTR_FROM_JSON(GroupName, groupName_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(InstanceType, instanceType_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SubDomain, subDomain_);
      DARABONBA_PTR_FROM_JSON(TagStatus, tagStatus_);
    };
    CreateApiGroupResponseBody() = default ;
    CreateApiGroupResponseBody(const CreateApiGroupResponseBody &) = default ;
    CreateApiGroupResponseBody(CreateApiGroupResponseBody &&) = default ;
    CreateApiGroupResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateApiGroupResponseBody() = default ;
    CreateApiGroupResponseBody& operator=(const CreateApiGroupResponseBody &) = default ;
    CreateApiGroupResponseBody& operator=(CreateApiGroupResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->basePath_ == nullptr
        && return this->description_ == nullptr && return this->groupId_ == nullptr && return this->groupName_ == nullptr && return this->instanceId_ == nullptr && return this->instanceType_ == nullptr
        && return this->requestId_ == nullptr && return this->subDomain_ == nullptr && return this->tagStatus_ == nullptr; };
    // basePath Field Functions 
    bool hasBasePath() const { return this->basePath_ != nullptr;};
    void deleteBasePath() { this->basePath_ = nullptr;};
    inline string basePath() const { DARABONBA_PTR_GET_DEFAULT(basePath_, "") };
    inline CreateApiGroupResponseBody& setBasePath(string basePath) { DARABONBA_PTR_SET_VALUE(basePath_, basePath) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateApiGroupResponseBody& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline string groupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
    inline CreateApiGroupResponseBody& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // groupName Field Functions 
    bool hasGroupName() const { return this->groupName_ != nullptr;};
    void deleteGroupName() { this->groupName_ = nullptr;};
    inline string groupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
    inline CreateApiGroupResponseBody& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline CreateApiGroupResponseBody& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // instanceType Field Functions 
    bool hasInstanceType() const { return this->instanceType_ != nullptr;};
    void deleteInstanceType() { this->instanceType_ = nullptr;};
    inline string instanceType() const { DARABONBA_PTR_GET_DEFAULT(instanceType_, "") };
    inline CreateApiGroupResponseBody& setInstanceType(string instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateApiGroupResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // subDomain Field Functions 
    bool hasSubDomain() const { return this->subDomain_ != nullptr;};
    void deleteSubDomain() { this->subDomain_ = nullptr;};
    inline string subDomain() const { DARABONBA_PTR_GET_DEFAULT(subDomain_, "") };
    inline CreateApiGroupResponseBody& setSubDomain(string subDomain) { DARABONBA_PTR_SET_VALUE(subDomain_, subDomain) };


    // tagStatus Field Functions 
    bool hasTagStatus() const { return this->tagStatus_ != nullptr;};
    void deleteTagStatus() { this->tagStatus_ = nullptr;};
    inline bool tagStatus() const { DARABONBA_PTR_GET_DEFAULT(tagStatus_, false) };
    inline CreateApiGroupResponseBody& setTagStatus(bool tagStatus) { DARABONBA_PTR_SET_VALUE(tagStatus_, tagStatus) };


  protected:
    std::shared_ptr<string> basePath_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<string> groupId_ = nullptr;
    std::shared_ptr<string> groupName_ = nullptr;
    std::shared_ptr<string> instanceId_ = nullptr;
    std::shared_ptr<string> instanceType_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<string> subDomain_ = nullptr;
    std::shared_ptr<bool> tagStatus_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
