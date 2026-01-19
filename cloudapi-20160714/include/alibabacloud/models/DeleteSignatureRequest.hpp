// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETESIGNATUREREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETESIGNATUREREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class DeleteSignatureRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteSignatureRequest& obj) { 
      DARABONBA_PTR_TO_JSON(SecurityToken, securityToken_);
      DARABONBA_PTR_TO_JSON(SignatureId, signatureId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteSignatureRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(SecurityToken, securityToken_);
      DARABONBA_PTR_FROM_JSON(SignatureId, signatureId_);
    };
    DeleteSignatureRequest() = default ;
    DeleteSignatureRequest(const DeleteSignatureRequest &) = default ;
    DeleteSignatureRequest(DeleteSignatureRequest &&) = default ;
    DeleteSignatureRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteSignatureRequest() = default ;
    DeleteSignatureRequest& operator=(const DeleteSignatureRequest &) = default ;
    DeleteSignatureRequest& operator=(DeleteSignatureRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->securityToken_ == nullptr
        && this->signatureId_ == nullptr; };
    // securityToken Field Functions 
    bool hasSecurityToken() const { return this->securityToken_ != nullptr;};
    void deleteSecurityToken() { this->securityToken_ = nullptr;};
    inline string getSecurityToken() const { DARABONBA_PTR_GET_DEFAULT(securityToken_, "") };
    inline DeleteSignatureRequest& setSecurityToken(string securityToken) { DARABONBA_PTR_SET_VALUE(securityToken_, securityToken) };


    // signatureId Field Functions 
    bool hasSignatureId() const { return this->signatureId_ != nullptr;};
    void deleteSignatureId() { this->signatureId_ = nullptr;};
    inline string getSignatureId() const { DARABONBA_PTR_GET_DEFAULT(signatureId_, "") };
    inline DeleteSignatureRequest& setSignatureId(string signatureId) { DARABONBA_PTR_SET_VALUE(signatureId_, signatureId) };


  protected:
    // The security token included in the WebSocket request header. The system uses this token to authenticate the request.
    shared_ptr<string> securityToken_ {};
    // The ID of the key to be deleted.
    // 
    // This parameter is required.
    shared_ptr<string> signatureId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
