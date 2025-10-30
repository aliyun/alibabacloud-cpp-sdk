// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETACCOUNTBYROWPERMISSIONIDREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETACCOUNTBYROWPERMISSIONIDREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetAccountByRowPermissionIdRequestGetAccountByRowPermissionIdQuery.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class GetAccountByRowPermissionIdRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAccountByRowPermissionIdRequest& obj) { 
      DARABONBA_PTR_TO_JSON(GetAccountByRowPermissionIdQuery, getAccountByRowPermissionIdQuery_);
      DARABONBA_PTR_TO_JSON(OpTenantId, opTenantId_);
    };
    friend void from_json(const Darabonba::Json& j, GetAccountByRowPermissionIdRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(GetAccountByRowPermissionIdQuery, getAccountByRowPermissionIdQuery_);
      DARABONBA_PTR_FROM_JSON(OpTenantId, opTenantId_);
    };
    GetAccountByRowPermissionIdRequest() = default ;
    GetAccountByRowPermissionIdRequest(const GetAccountByRowPermissionIdRequest &) = default ;
    GetAccountByRowPermissionIdRequest(GetAccountByRowPermissionIdRequest &&) = default ;
    GetAccountByRowPermissionIdRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAccountByRowPermissionIdRequest() = default ;
    GetAccountByRowPermissionIdRequest& operator=(const GetAccountByRowPermissionIdRequest &) = default ;
    GetAccountByRowPermissionIdRequest& operator=(GetAccountByRowPermissionIdRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->getAccountByRowPermissionIdQuery_ == nullptr
        && return this->opTenantId_ == nullptr; };
    // getAccountByRowPermissionIdQuery Field Functions 
    bool hasGetAccountByRowPermissionIdQuery() const { return this->getAccountByRowPermissionIdQuery_ != nullptr;};
    void deleteGetAccountByRowPermissionIdQuery() { this->getAccountByRowPermissionIdQuery_ = nullptr;};
    inline const GetAccountByRowPermissionIdRequestGetAccountByRowPermissionIdQuery & getAccountByRowPermissionIdQuery() const { DARABONBA_PTR_GET_CONST(getAccountByRowPermissionIdQuery_, GetAccountByRowPermissionIdRequestGetAccountByRowPermissionIdQuery) };
    inline GetAccountByRowPermissionIdRequestGetAccountByRowPermissionIdQuery getAccountByRowPermissionIdQuery() { DARABONBA_PTR_GET(getAccountByRowPermissionIdQuery_, GetAccountByRowPermissionIdRequestGetAccountByRowPermissionIdQuery) };
    inline GetAccountByRowPermissionIdRequest& setGetAccountByRowPermissionIdQuery(const GetAccountByRowPermissionIdRequestGetAccountByRowPermissionIdQuery & getAccountByRowPermissionIdQuery) { DARABONBA_PTR_SET_VALUE(getAccountByRowPermissionIdQuery_, getAccountByRowPermissionIdQuery) };
    inline GetAccountByRowPermissionIdRequest& setGetAccountByRowPermissionIdQuery(GetAccountByRowPermissionIdRequestGetAccountByRowPermissionIdQuery && getAccountByRowPermissionIdQuery) { DARABONBA_PTR_SET_RVALUE(getAccountByRowPermissionIdQuery_, getAccountByRowPermissionIdQuery) };


    // opTenantId Field Functions 
    bool hasOpTenantId() const { return this->opTenantId_ != nullptr;};
    void deleteOpTenantId() { this->opTenantId_ = nullptr;};
    inline int64_t opTenantId() const { DARABONBA_PTR_GET_DEFAULT(opTenantId_, 0L) };
    inline GetAccountByRowPermissionIdRequest& setOpTenantId(int64_t opTenantId) { DARABONBA_PTR_SET_VALUE(opTenantId_, opTenantId) };


  protected:
    // This parameter is required.
    std::shared_ptr<GetAccountByRowPermissionIdRequestGetAccountByRowPermissionIdQuery> getAccountByRowPermissionIdQuery_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int64_t> opTenantId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
