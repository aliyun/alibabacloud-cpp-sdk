// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETUSERTMPIDENTITYFORPARTNERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETUSERTMPIDENTITYFORPARTNERREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WebsiteBuild20250429
{
namespace Models
{
  class GetUserTmpIdentityForPartnerRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetUserTmpIdentityForPartnerRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AuthPurpose, authPurpose_);
      DARABONBA_PTR_TO_JSON(BizId, bizId_);
      DARABONBA_PTR_TO_JSON(Extend, extend_);
      DARABONBA_PTR_TO_JSON(ServiceLinkedRole, serviceLinkedRole_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
    };
    friend void from_json(const Darabonba::Json& j, GetUserTmpIdentityForPartnerRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AuthPurpose, authPurpose_);
      DARABONBA_PTR_FROM_JSON(BizId, bizId_);
      DARABONBA_PTR_FROM_JSON(Extend, extend_);
      DARABONBA_PTR_FROM_JSON(ServiceLinkedRole, serviceLinkedRole_);
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
    };
    GetUserTmpIdentityForPartnerRequest() = default ;
    GetUserTmpIdentityForPartnerRequest(const GetUserTmpIdentityForPartnerRequest &) = default ;
    GetUserTmpIdentityForPartnerRequest(GetUserTmpIdentityForPartnerRequest &&) = default ;
    GetUserTmpIdentityForPartnerRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetUserTmpIdentityForPartnerRequest() = default ;
    GetUserTmpIdentityForPartnerRequest& operator=(const GetUserTmpIdentityForPartnerRequest &) = default ;
    GetUserTmpIdentityForPartnerRequest& operator=(GetUserTmpIdentityForPartnerRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->authPurpose_ == nullptr
        && return this->bizId_ == nullptr && return this->extend_ == nullptr && return this->serviceLinkedRole_ == nullptr && return this->userId_ == nullptr; };
    // authPurpose Field Functions 
    bool hasAuthPurpose() const { return this->authPurpose_ != nullptr;};
    void deleteAuthPurpose() { this->authPurpose_ = nullptr;};
    inline string authPurpose() const { DARABONBA_PTR_GET_DEFAULT(authPurpose_, "") };
    inline GetUserTmpIdentityForPartnerRequest& setAuthPurpose(string authPurpose) { DARABONBA_PTR_SET_VALUE(authPurpose_, authPurpose) };


    // bizId Field Functions 
    bool hasBizId() const { return this->bizId_ != nullptr;};
    void deleteBizId() { this->bizId_ = nullptr;};
    inline string bizId() const { DARABONBA_PTR_GET_DEFAULT(bizId_, "") };
    inline GetUserTmpIdentityForPartnerRequest& setBizId(string bizId) { DARABONBA_PTR_SET_VALUE(bizId_, bizId) };


    // extend Field Functions 
    bool hasExtend() const { return this->extend_ != nullptr;};
    void deleteExtend() { this->extend_ = nullptr;};
    inline string extend() const { DARABONBA_PTR_GET_DEFAULT(extend_, "") };
    inline GetUserTmpIdentityForPartnerRequest& setExtend(string extend) { DARABONBA_PTR_SET_VALUE(extend_, extend) };


    // serviceLinkedRole Field Functions 
    bool hasServiceLinkedRole() const { return this->serviceLinkedRole_ != nullptr;};
    void deleteServiceLinkedRole() { this->serviceLinkedRole_ = nullptr;};
    inline string serviceLinkedRole() const { DARABONBA_PTR_GET_DEFAULT(serviceLinkedRole_, "") };
    inline GetUserTmpIdentityForPartnerRequest& setServiceLinkedRole(string serviceLinkedRole) { DARABONBA_PTR_SET_VALUE(serviceLinkedRole_, serviceLinkedRole) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline GetUserTmpIdentityForPartnerRequest& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


  protected:
    std::shared_ptr<string> authPurpose_ = nullptr;
    std::shared_ptr<string> bizId_ = nullptr;
    std::shared_ptr<string> extend_ = nullptr;
    std::shared_ptr<string> serviceLinkedRole_ = nullptr;
    std::shared_ptr<string> userId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WebsiteBuild20250429
#endif
