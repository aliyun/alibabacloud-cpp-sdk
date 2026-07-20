// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSERVICELINKEDROLESTATUSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETSERVICELINKEDROLESTATUSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RiskManagement20260424
{
namespace Models
{
  class GetServiceLinkedRoleStatusRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetServiceLinkedRoleStatusRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AuthType, authType_);
    };
    friend void from_json(const Darabonba::Json& j, GetServiceLinkedRoleStatusRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AuthType, authType_);
    };
    GetServiceLinkedRoleStatusRequest() = default ;
    GetServiceLinkedRoleStatusRequest(const GetServiceLinkedRoleStatusRequest &) = default ;
    GetServiceLinkedRoleStatusRequest(GetServiceLinkedRoleStatusRequest &&) = default ;
    GetServiceLinkedRoleStatusRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetServiceLinkedRoleStatusRequest() = default ;
    GetServiceLinkedRoleStatusRequest& operator=(const GetServiceLinkedRoleStatusRequest &) = default ;
    GetServiceLinkedRoleStatusRequest& operator=(GetServiceLinkedRoleStatusRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->authType_ == nullptr; };
    // authType Field Functions 
    bool hasAuthType() const { return this->authType_ != nullptr;};
    void deleteAuthType() { this->authType_ = nullptr;};
    inline string getAuthType() const { DARABONBA_PTR_GET_DEFAULT(authType_, "") };
    inline GetServiceLinkedRoleStatusRequest& setAuthType(string authType) { DARABONBA_PTR_SET_VALUE(authType_, authType) };


  protected:
    // This parameter is required.
    shared_ptr<string> authType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RiskManagement20260424
#endif
