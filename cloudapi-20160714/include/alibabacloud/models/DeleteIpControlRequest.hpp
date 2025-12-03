// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEIPCONTROLREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEIPCONTROLREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class DeleteIpControlRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteIpControlRequest& obj) { 
      DARABONBA_PTR_TO_JSON(IpControlId, ipControlId_);
      DARABONBA_PTR_TO_JSON(SecurityToken, securityToken_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteIpControlRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(IpControlId, ipControlId_);
      DARABONBA_PTR_FROM_JSON(SecurityToken, securityToken_);
    };
    DeleteIpControlRequest() = default ;
    DeleteIpControlRequest(const DeleteIpControlRequest &) = default ;
    DeleteIpControlRequest(DeleteIpControlRequest &&) = default ;
    DeleteIpControlRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteIpControlRequest() = default ;
    DeleteIpControlRequest& operator=(const DeleteIpControlRequest &) = default ;
    DeleteIpControlRequest& operator=(DeleteIpControlRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->ipControlId_ == nullptr
        && return this->securityToken_ == nullptr; };
    // ipControlId Field Functions 
    bool hasIpControlId() const { return this->ipControlId_ != nullptr;};
    void deleteIpControlId() { this->ipControlId_ = nullptr;};
    inline string ipControlId() const { DARABONBA_PTR_GET_DEFAULT(ipControlId_, "") };
    inline DeleteIpControlRequest& setIpControlId(string ipControlId) { DARABONBA_PTR_SET_VALUE(ipControlId_, ipControlId) };


    // securityToken Field Functions 
    bool hasSecurityToken() const { return this->securityToken_ != nullptr;};
    void deleteSecurityToken() { this->securityToken_ = nullptr;};
    inline string securityToken() const { DARABONBA_PTR_GET_DEFAULT(securityToken_, "") };
    inline DeleteIpControlRequest& setSecurityToken(string securityToken) { DARABONBA_PTR_SET_VALUE(securityToken_, securityToken) };


  protected:
    // The ID of the ACL. The ID is unique.
    // 
    // This parameter is required.
    std::shared_ptr<string> ipControlId_ = nullptr;
    std::shared_ptr<string> securityToken_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
