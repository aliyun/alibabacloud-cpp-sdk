// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYAPIGROUPINSTANCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYAPIGROUPINSTANCEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ModifyApiGroupInstanceRequestTag.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class ModifyApiGroupInstanceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyApiGroupInstanceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(GroupId, groupId_);
      DARABONBA_PTR_TO_JSON(Remark, remark_);
      DARABONBA_PTR_TO_JSON(SecurityToken, securityToken_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
      DARABONBA_PTR_TO_JSON(TargetInstanceId, targetInstanceId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyApiGroupInstanceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
      DARABONBA_PTR_FROM_JSON(Remark, remark_);
      DARABONBA_PTR_FROM_JSON(SecurityToken, securityToken_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
      DARABONBA_PTR_FROM_JSON(TargetInstanceId, targetInstanceId_);
    };
    ModifyApiGroupInstanceRequest() = default ;
    ModifyApiGroupInstanceRequest(const ModifyApiGroupInstanceRequest &) = default ;
    ModifyApiGroupInstanceRequest(ModifyApiGroupInstanceRequest &&) = default ;
    ModifyApiGroupInstanceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyApiGroupInstanceRequest() = default ;
    ModifyApiGroupInstanceRequest& operator=(const ModifyApiGroupInstanceRequest &) = default ;
    ModifyApiGroupInstanceRequest& operator=(ModifyApiGroupInstanceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->groupId_ == nullptr
        && return this->remark_ == nullptr && return this->securityToken_ == nullptr && return this->tag_ == nullptr && return this->targetInstanceId_ == nullptr; };
    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline string groupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
    inline ModifyApiGroupInstanceRequest& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // remark Field Functions 
    bool hasRemark() const { return this->remark_ != nullptr;};
    void deleteRemark() { this->remark_ = nullptr;};
    inline string remark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
    inline ModifyApiGroupInstanceRequest& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


    // securityToken Field Functions 
    bool hasSecurityToken() const { return this->securityToken_ != nullptr;};
    void deleteSecurityToken() { this->securityToken_ = nullptr;};
    inline string securityToken() const { DARABONBA_PTR_GET_DEFAULT(securityToken_, "") };
    inline ModifyApiGroupInstanceRequest& setSecurityToken(string securityToken) { DARABONBA_PTR_SET_VALUE(securityToken_, securityToken) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<ModifyApiGroupInstanceRequestTag> & tag() const { DARABONBA_PTR_GET_CONST(tag_, vector<ModifyApiGroupInstanceRequestTag>) };
    inline vector<ModifyApiGroupInstanceRequestTag> tag() { DARABONBA_PTR_GET(tag_, vector<ModifyApiGroupInstanceRequestTag>) };
    inline ModifyApiGroupInstanceRequest& setTag(const vector<ModifyApiGroupInstanceRequestTag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline ModifyApiGroupInstanceRequest& setTag(vector<ModifyApiGroupInstanceRequestTag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


    // targetInstanceId Field Functions 
    bool hasTargetInstanceId() const { return this->targetInstanceId_ != nullptr;};
    void deleteTargetInstanceId() { this->targetInstanceId_ = nullptr;};
    inline string targetInstanceId() const { DARABONBA_PTR_GET_DEFAULT(targetInstanceId_, "") };
    inline ModifyApiGroupInstanceRequest& setTargetInstanceId(string targetInstanceId) { DARABONBA_PTR_SET_VALUE(targetInstanceId_, targetInstanceId) };


  protected:
    // The ID of the API group.
    // 
    // This parameter is required.
    std::shared_ptr<string> groupId_ = nullptr;
    // The remarks.
    std::shared_ptr<string> remark_ = nullptr;
    std::shared_ptr<string> securityToken_ = nullptr;
    // The tag of objects that match the rule. You can specify multiple tags.
    std::shared_ptr<vector<ModifyApiGroupInstanceRequestTag>> tag_ = nullptr;
    // The ID of the instance to which you want to migrate the API group.
    // 
    // This parameter is required.
    std::shared_ptr<string> targetInstanceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
