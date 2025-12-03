// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEGROUPMEMBERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEGROUPMEMBERREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devops20210625
{
namespace Models
{
  class UpdateGroupMemberRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateGroupMemberRequest& obj) { 
      DARABONBA_PTR_TO_JSON(accessToken, accessToken_);
      DARABONBA_PTR_TO_JSON(aliyunPk, aliyunPk_);
      DARABONBA_PTR_TO_JSON(accessLevel, accessLevel_);
      DARABONBA_PTR_TO_JSON(memberType, memberType_);
      DARABONBA_PTR_TO_JSON(organizationId, organizationId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateGroupMemberRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(accessToken, accessToken_);
      DARABONBA_PTR_FROM_JSON(aliyunPk, aliyunPk_);
      DARABONBA_PTR_FROM_JSON(accessLevel, accessLevel_);
      DARABONBA_PTR_FROM_JSON(memberType, memberType_);
      DARABONBA_PTR_FROM_JSON(organizationId, organizationId_);
    };
    UpdateGroupMemberRequest() = default ;
    UpdateGroupMemberRequest(const UpdateGroupMemberRequest &) = default ;
    UpdateGroupMemberRequest(UpdateGroupMemberRequest &&) = default ;
    UpdateGroupMemberRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateGroupMemberRequest() = default ;
    UpdateGroupMemberRequest& operator=(const UpdateGroupMemberRequest &) = default ;
    UpdateGroupMemberRequest& operator=(UpdateGroupMemberRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accessToken_ == nullptr
        && return this->aliyunPk_ == nullptr && return this->accessLevel_ == nullptr && return this->memberType_ == nullptr && return this->organizationId_ == nullptr; };
    // accessToken Field Functions 
    bool hasAccessToken() const { return this->accessToken_ != nullptr;};
    void deleteAccessToken() { this->accessToken_ = nullptr;};
    inline string accessToken() const { DARABONBA_PTR_GET_DEFAULT(accessToken_, "") };
    inline UpdateGroupMemberRequest& setAccessToken(string accessToken) { DARABONBA_PTR_SET_VALUE(accessToken_, accessToken) };


    // aliyunPk Field Functions 
    bool hasAliyunPk() const { return this->aliyunPk_ != nullptr;};
    void deleteAliyunPk() { this->aliyunPk_ = nullptr;};
    inline string aliyunPk() const { DARABONBA_PTR_GET_DEFAULT(aliyunPk_, "") };
    inline UpdateGroupMemberRequest& setAliyunPk(string aliyunPk) { DARABONBA_PTR_SET_VALUE(aliyunPk_, aliyunPk) };


    // accessLevel Field Functions 
    bool hasAccessLevel() const { return this->accessLevel_ != nullptr;};
    void deleteAccessLevel() { this->accessLevel_ = nullptr;};
    inline int32_t accessLevel() const { DARABONBA_PTR_GET_DEFAULT(accessLevel_, 0) };
    inline UpdateGroupMemberRequest& setAccessLevel(int32_t accessLevel) { DARABONBA_PTR_SET_VALUE(accessLevel_, accessLevel) };


    // memberType Field Functions 
    bool hasMemberType() const { return this->memberType_ != nullptr;};
    void deleteMemberType() { this->memberType_ = nullptr;};
    inline string memberType() const { DARABONBA_PTR_GET_DEFAULT(memberType_, "") };
    inline UpdateGroupMemberRequest& setMemberType(string memberType) { DARABONBA_PTR_SET_VALUE(memberType_, memberType) };


    // organizationId Field Functions 
    bool hasOrganizationId() const { return this->organizationId_ != nullptr;};
    void deleteOrganizationId() { this->organizationId_ = nullptr;};
    inline string organizationId() const { DARABONBA_PTR_GET_DEFAULT(organizationId_, "") };
    inline UpdateGroupMemberRequest& setOrganizationId(string organizationId) { DARABONBA_PTR_SET_VALUE(organizationId_, organizationId) };


  protected:
    std::shared_ptr<string> accessToken_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> aliyunPk_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int32_t> accessLevel_ = nullptr;
    std::shared_ptr<string> memberType_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> organizationId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devops20210625
#endif
