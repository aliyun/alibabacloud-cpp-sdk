// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEREPOSITORYMEMBERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEREPOSITORYMEMBERREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/UpdateRepositoryMemberRequestRelatedInfos.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devops20210625
{
namespace Models
{
  class UpdateRepositoryMemberRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateRepositoryMemberRequest& obj) { 
      DARABONBA_PTR_TO_JSON(accessToken, accessToken_);
      DARABONBA_PTR_TO_JSON(accessLevel, accessLevel_);
      DARABONBA_PTR_TO_JSON(expireAt, expireAt_);
      DARABONBA_PTR_TO_JSON(memberType, memberType_);
      DARABONBA_PTR_TO_JSON(relatedId, relatedId_);
      DARABONBA_PTR_TO_JSON(relatedInfos, relatedInfos_);
      DARABONBA_PTR_TO_JSON(organizationId, organizationId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateRepositoryMemberRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(accessToken, accessToken_);
      DARABONBA_PTR_FROM_JSON(accessLevel, accessLevel_);
      DARABONBA_PTR_FROM_JSON(expireAt, expireAt_);
      DARABONBA_PTR_FROM_JSON(memberType, memberType_);
      DARABONBA_PTR_FROM_JSON(relatedId, relatedId_);
      DARABONBA_PTR_FROM_JSON(relatedInfos, relatedInfos_);
      DARABONBA_PTR_FROM_JSON(organizationId, organizationId_);
    };
    UpdateRepositoryMemberRequest() = default ;
    UpdateRepositoryMemberRequest(const UpdateRepositoryMemberRequest &) = default ;
    UpdateRepositoryMemberRequest(UpdateRepositoryMemberRequest &&) = default ;
    UpdateRepositoryMemberRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateRepositoryMemberRequest() = default ;
    UpdateRepositoryMemberRequest& operator=(const UpdateRepositoryMemberRequest &) = default ;
    UpdateRepositoryMemberRequest& operator=(UpdateRepositoryMemberRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accessToken_ == nullptr
        && return this->accessLevel_ == nullptr && return this->expireAt_ == nullptr && return this->memberType_ == nullptr && return this->relatedId_ == nullptr && return this->relatedInfos_ == nullptr
        && return this->organizationId_ == nullptr; };
    // accessToken Field Functions 
    bool hasAccessToken() const { return this->accessToken_ != nullptr;};
    void deleteAccessToken() { this->accessToken_ = nullptr;};
    inline string accessToken() const { DARABONBA_PTR_GET_DEFAULT(accessToken_, "") };
    inline UpdateRepositoryMemberRequest& setAccessToken(string accessToken) { DARABONBA_PTR_SET_VALUE(accessToken_, accessToken) };


    // accessLevel Field Functions 
    bool hasAccessLevel() const { return this->accessLevel_ != nullptr;};
    void deleteAccessLevel() { this->accessLevel_ = nullptr;};
    inline int32_t accessLevel() const { DARABONBA_PTR_GET_DEFAULT(accessLevel_, 0) };
    inline UpdateRepositoryMemberRequest& setAccessLevel(int32_t accessLevel) { DARABONBA_PTR_SET_VALUE(accessLevel_, accessLevel) };


    // expireAt Field Functions 
    bool hasExpireAt() const { return this->expireAt_ != nullptr;};
    void deleteExpireAt() { this->expireAt_ = nullptr;};
    inline string expireAt() const { DARABONBA_PTR_GET_DEFAULT(expireAt_, "") };
    inline UpdateRepositoryMemberRequest& setExpireAt(string expireAt) { DARABONBA_PTR_SET_VALUE(expireAt_, expireAt) };


    // memberType Field Functions 
    bool hasMemberType() const { return this->memberType_ != nullptr;};
    void deleteMemberType() { this->memberType_ = nullptr;};
    inline string memberType() const { DARABONBA_PTR_GET_DEFAULT(memberType_, "") };
    inline UpdateRepositoryMemberRequest& setMemberType(string memberType) { DARABONBA_PTR_SET_VALUE(memberType_, memberType) };


    // relatedId Field Functions 
    bool hasRelatedId() const { return this->relatedId_ != nullptr;};
    void deleteRelatedId() { this->relatedId_ = nullptr;};
    inline string relatedId() const { DARABONBA_PTR_GET_DEFAULT(relatedId_, "") };
    inline UpdateRepositoryMemberRequest& setRelatedId(string relatedId) { DARABONBA_PTR_SET_VALUE(relatedId_, relatedId) };


    // relatedInfos Field Functions 
    bool hasRelatedInfos() const { return this->relatedInfos_ != nullptr;};
    void deleteRelatedInfos() { this->relatedInfos_ = nullptr;};
    inline const vector<UpdateRepositoryMemberRequestRelatedInfos> & relatedInfos() const { DARABONBA_PTR_GET_CONST(relatedInfos_, vector<UpdateRepositoryMemberRequestRelatedInfos>) };
    inline vector<UpdateRepositoryMemberRequestRelatedInfos> relatedInfos() { DARABONBA_PTR_GET(relatedInfos_, vector<UpdateRepositoryMemberRequestRelatedInfos>) };
    inline UpdateRepositoryMemberRequest& setRelatedInfos(const vector<UpdateRepositoryMemberRequestRelatedInfos> & relatedInfos) { DARABONBA_PTR_SET_VALUE(relatedInfos_, relatedInfos) };
    inline UpdateRepositoryMemberRequest& setRelatedInfos(vector<UpdateRepositoryMemberRequestRelatedInfos> && relatedInfos) { DARABONBA_PTR_SET_RVALUE(relatedInfos_, relatedInfos) };


    // organizationId Field Functions 
    bool hasOrganizationId() const { return this->organizationId_ != nullptr;};
    void deleteOrganizationId() { this->organizationId_ = nullptr;};
    inline string organizationId() const { DARABONBA_PTR_GET_DEFAULT(organizationId_, "") };
    inline UpdateRepositoryMemberRequest& setOrganizationId(string organizationId) { DARABONBA_PTR_SET_VALUE(organizationId_, organizationId) };


  protected:
    std::shared_ptr<string> accessToken_ = nullptr;
    std::shared_ptr<int32_t> accessLevel_ = nullptr;
    std::shared_ptr<string> expireAt_ = nullptr;
    std::shared_ptr<string> memberType_ = nullptr;
    std::shared_ptr<string> relatedId_ = nullptr;
    std::shared_ptr<vector<UpdateRepositoryMemberRequestRelatedInfos>> relatedInfos_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> organizationId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devops20210625
#endif
