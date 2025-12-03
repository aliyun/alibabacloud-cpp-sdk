// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEBACKENDMODELREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEBACKENDMODELREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class DeleteBackendModelRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteBackendModelRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BackendId, backendId_);
      DARABONBA_PTR_TO_JSON(BackendModelId, backendModelId_);
      DARABONBA_PTR_TO_JSON(SecurityToken, securityToken_);
      DARABONBA_PTR_TO_JSON(StageName, stageName_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteBackendModelRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BackendId, backendId_);
      DARABONBA_PTR_FROM_JSON(BackendModelId, backendModelId_);
      DARABONBA_PTR_FROM_JSON(SecurityToken, securityToken_);
      DARABONBA_PTR_FROM_JSON(StageName, stageName_);
    };
    DeleteBackendModelRequest() = default ;
    DeleteBackendModelRequest(const DeleteBackendModelRequest &) = default ;
    DeleteBackendModelRequest(DeleteBackendModelRequest &&) = default ;
    DeleteBackendModelRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteBackendModelRequest() = default ;
    DeleteBackendModelRequest& operator=(const DeleteBackendModelRequest &) = default ;
    DeleteBackendModelRequest& operator=(DeleteBackendModelRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->backendId_ == nullptr
        && return this->backendModelId_ == nullptr && return this->securityToken_ == nullptr && return this->stageName_ == nullptr; };
    // backendId Field Functions 
    bool hasBackendId() const { return this->backendId_ != nullptr;};
    void deleteBackendId() { this->backendId_ = nullptr;};
    inline string backendId() const { DARABONBA_PTR_GET_DEFAULT(backendId_, "") };
    inline DeleteBackendModelRequest& setBackendId(string backendId) { DARABONBA_PTR_SET_VALUE(backendId_, backendId) };


    // backendModelId Field Functions 
    bool hasBackendModelId() const { return this->backendModelId_ != nullptr;};
    void deleteBackendModelId() { this->backendModelId_ = nullptr;};
    inline string backendModelId() const { DARABONBA_PTR_GET_DEFAULT(backendModelId_, "") };
    inline DeleteBackendModelRequest& setBackendModelId(string backendModelId) { DARABONBA_PTR_SET_VALUE(backendModelId_, backendModelId) };


    // securityToken Field Functions 
    bool hasSecurityToken() const { return this->securityToken_ != nullptr;};
    void deleteSecurityToken() { this->securityToken_ = nullptr;};
    inline string securityToken() const { DARABONBA_PTR_GET_DEFAULT(securityToken_, "") };
    inline DeleteBackendModelRequest& setSecurityToken(string securityToken) { DARABONBA_PTR_SET_VALUE(securityToken_, securityToken) };


    // stageName Field Functions 
    bool hasStageName() const { return this->stageName_ != nullptr;};
    void deleteStageName() { this->stageName_ = nullptr;};
    inline string stageName() const { DARABONBA_PTR_GET_DEFAULT(stageName_, "") };
    inline DeleteBackendModelRequest& setStageName(string stageName) { DARABONBA_PTR_SET_VALUE(stageName_, stageName) };


  protected:
    // The ID of the backend service.
    std::shared_ptr<string> backendId_ = nullptr;
    // The ID of the backend model.
    // 
    // This parameter is required.
    std::shared_ptr<string> backendModelId_ = nullptr;
    std::shared_ptr<string> securityToken_ = nullptr;
    // The name of the runtime environment. Valid values:
    // 
    // *   **RELEASE**
    // *   **PRE**
    // *   **TEST**
    std::shared_ptr<string> stageName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
