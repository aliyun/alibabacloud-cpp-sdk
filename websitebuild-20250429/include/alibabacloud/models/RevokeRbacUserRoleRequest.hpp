// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REVOKERBACUSERROLEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_REVOKERBACUSERROLEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WebsiteBuild20250429
{
namespace Models
{
  class RevokeRbacUserRoleRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RevokeRbacUserRoleRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BizId, bizId_);
      DARABONBA_PTR_TO_JSON(UserRoleData, userRoleData_);
    };
    friend void from_json(const Darabonba::Json& j, RevokeRbacUserRoleRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BizId, bizId_);
      DARABONBA_PTR_FROM_JSON(UserRoleData, userRoleData_);
    };
    RevokeRbacUserRoleRequest() = default ;
    RevokeRbacUserRoleRequest(const RevokeRbacUserRoleRequest &) = default ;
    RevokeRbacUserRoleRequest(RevokeRbacUserRoleRequest &&) = default ;
    RevokeRbacUserRoleRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RevokeRbacUserRoleRequest() = default ;
    RevokeRbacUserRoleRequest& operator=(const RevokeRbacUserRoleRequest &) = default ;
    RevokeRbacUserRoleRequest& operator=(RevokeRbacUserRoleRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bizId_ == nullptr
        && this->userRoleData_ == nullptr; };
    // bizId Field Functions 
    bool hasBizId() const { return this->bizId_ != nullptr;};
    void deleteBizId() { this->bizId_ = nullptr;};
    inline string getBizId() const { DARABONBA_PTR_GET_DEFAULT(bizId_, "") };
    inline RevokeRbacUserRoleRequest& setBizId(string bizId) { DARABONBA_PTR_SET_VALUE(bizId_, bizId) };


    // userRoleData Field Functions 
    bool hasUserRoleData() const { return this->userRoleData_ != nullptr;};
    void deleteUserRoleData() { this->userRoleData_ = nullptr;};
    inline string getUserRoleData() const { DARABONBA_PTR_GET_DEFAULT(userRoleData_, "") };
    inline RevokeRbacUserRoleRequest& setUserRoleData(string userRoleData) { DARABONBA_PTR_SET_VALUE(userRoleData_, userRoleData) };


  protected:
    shared_ptr<string> bizId_ {};
    shared_ptr<string> userRoleData_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WebsiteBuild20250429
#endif
