// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEYIKEPRODUCTIONMEMBERAUTHREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEYIKEPRODUCTIONMEMBERAUTHREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Yike20260319
{
namespace Models
{
  class UpdateYikeProductionMemberAuthRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateYikeProductionMemberAuthRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Auth, auth_);
      DARABONBA_PTR_TO_JSON(ProductionId, productionId_);
      DARABONBA_PTR_TO_JSON(YikeUserId, yikeUserId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateYikeProductionMemberAuthRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Auth, auth_);
      DARABONBA_PTR_FROM_JSON(ProductionId, productionId_);
      DARABONBA_PTR_FROM_JSON(YikeUserId, yikeUserId_);
    };
    UpdateYikeProductionMemberAuthRequest() = default ;
    UpdateYikeProductionMemberAuthRequest(const UpdateYikeProductionMemberAuthRequest &) = default ;
    UpdateYikeProductionMemberAuthRequest(UpdateYikeProductionMemberAuthRequest &&) = default ;
    UpdateYikeProductionMemberAuthRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateYikeProductionMemberAuthRequest() = default ;
    UpdateYikeProductionMemberAuthRequest& operator=(const UpdateYikeProductionMemberAuthRequest &) = default ;
    UpdateYikeProductionMemberAuthRequest& operator=(UpdateYikeProductionMemberAuthRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->auth_ == nullptr
        && this->productionId_ == nullptr && this->yikeUserId_ == nullptr; };
    // auth Field Functions 
    bool hasAuth() const { return this->auth_ != nullptr;};
    void deleteAuth() { this->auth_ = nullptr;};
    inline string getAuth() const { DARABONBA_PTR_GET_DEFAULT(auth_, "") };
    inline UpdateYikeProductionMemberAuthRequest& setAuth(string auth) { DARABONBA_PTR_SET_VALUE(auth_, auth) };


    // productionId Field Functions 
    bool hasProductionId() const { return this->productionId_ != nullptr;};
    void deleteProductionId() { this->productionId_ = nullptr;};
    inline string getProductionId() const { DARABONBA_PTR_GET_DEFAULT(productionId_, "") };
    inline UpdateYikeProductionMemberAuthRequest& setProductionId(string productionId) { DARABONBA_PTR_SET_VALUE(productionId_, productionId) };


    // yikeUserId Field Functions 
    bool hasYikeUserId() const { return this->yikeUserId_ != nullptr;};
    void deleteYikeUserId() { this->yikeUserId_ = nullptr;};
    inline string getYikeUserId() const { DARABONBA_PTR_GET_DEFAULT(yikeUserId_, "") };
    inline UpdateYikeProductionMemberAuthRequest& setYikeUserId(string yikeUserId) { DARABONBA_PTR_SET_VALUE(yikeUserId_, yikeUserId) };


  protected:
    // The permission name. Valid values:
    // 
    // - Manage: manageable
    // - Edit: editable.
    // 
    // This parameter is required.
    shared_ptr<string> auth_ {};
    // The project ID.
    // 
    // This parameter is required.
    shared_ptr<string> productionId_ {};
    // The RAM user ID.
    // 
    // This parameter is required.
    shared_ptr<string> yikeUserId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Yike20260319
#endif
