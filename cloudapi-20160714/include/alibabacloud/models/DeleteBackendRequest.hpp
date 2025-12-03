// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEBACKENDREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEBACKENDREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class DeleteBackendRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteBackendRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BackendId, backendId_);
      DARABONBA_PTR_TO_JSON(SecurityToken, securityToken_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteBackendRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BackendId, backendId_);
      DARABONBA_PTR_FROM_JSON(SecurityToken, securityToken_);
    };
    DeleteBackendRequest() = default ;
    DeleteBackendRequest(const DeleteBackendRequest &) = default ;
    DeleteBackendRequest(DeleteBackendRequest &&) = default ;
    DeleteBackendRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteBackendRequest() = default ;
    DeleteBackendRequest& operator=(const DeleteBackendRequest &) = default ;
    DeleteBackendRequest& operator=(DeleteBackendRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->backendId_ == nullptr
        && return this->securityToken_ == nullptr; };
    // backendId Field Functions 
    bool hasBackendId() const { return this->backendId_ != nullptr;};
    void deleteBackendId() { this->backendId_ = nullptr;};
    inline string backendId() const { DARABONBA_PTR_GET_DEFAULT(backendId_, "") };
    inline DeleteBackendRequest& setBackendId(string backendId) { DARABONBA_PTR_SET_VALUE(backendId_, backendId) };


    // securityToken Field Functions 
    bool hasSecurityToken() const { return this->securityToken_ != nullptr;};
    void deleteSecurityToken() { this->securityToken_ = nullptr;};
    inline string securityToken() const { DARABONBA_PTR_GET_DEFAULT(securityToken_, "") };
    inline DeleteBackendRequest& setSecurityToken(string securityToken) { DARABONBA_PTR_SET_VALUE(securityToken_, securityToken) };


  protected:
    // The ID of the backend service.
    std::shared_ptr<string> backendId_ = nullptr;
    std::shared_ptr<string> securityToken_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
