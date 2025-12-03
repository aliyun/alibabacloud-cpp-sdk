// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYBACKENDREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYBACKENDREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class ModifyBackendRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyBackendRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BackendId, backendId_);
      DARABONBA_PTR_TO_JSON(BackendName, backendName_);
      DARABONBA_PTR_TO_JSON(BackendType, backendType_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(SecurityToken, securityToken_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyBackendRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BackendId, backendId_);
      DARABONBA_PTR_FROM_JSON(BackendName, backendName_);
      DARABONBA_PTR_FROM_JSON(BackendType, backendType_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(SecurityToken, securityToken_);
    };
    ModifyBackendRequest() = default ;
    ModifyBackendRequest(const ModifyBackendRequest &) = default ;
    ModifyBackendRequest(ModifyBackendRequest &&) = default ;
    ModifyBackendRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyBackendRequest() = default ;
    ModifyBackendRequest& operator=(const ModifyBackendRequest &) = default ;
    ModifyBackendRequest& operator=(ModifyBackendRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->backendId_ == nullptr
        && return this->backendName_ == nullptr && return this->backendType_ == nullptr && return this->description_ == nullptr && return this->securityToken_ == nullptr; };
    // backendId Field Functions 
    bool hasBackendId() const { return this->backendId_ != nullptr;};
    void deleteBackendId() { this->backendId_ = nullptr;};
    inline string backendId() const { DARABONBA_PTR_GET_DEFAULT(backendId_, "") };
    inline ModifyBackendRequest& setBackendId(string backendId) { DARABONBA_PTR_SET_VALUE(backendId_, backendId) };


    // backendName Field Functions 
    bool hasBackendName() const { return this->backendName_ != nullptr;};
    void deleteBackendName() { this->backendName_ = nullptr;};
    inline string backendName() const { DARABONBA_PTR_GET_DEFAULT(backendName_, "") };
    inline ModifyBackendRequest& setBackendName(string backendName) { DARABONBA_PTR_SET_VALUE(backendName_, backendName) };


    // backendType Field Functions 
    bool hasBackendType() const { return this->backendType_ != nullptr;};
    void deleteBackendType() { this->backendType_ = nullptr;};
    inline string backendType() const { DARABONBA_PTR_GET_DEFAULT(backendType_, "") };
    inline ModifyBackendRequest& setBackendType(string backendType) { DARABONBA_PTR_SET_VALUE(backendType_, backendType) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ModifyBackendRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // securityToken Field Functions 
    bool hasSecurityToken() const { return this->securityToken_ != nullptr;};
    void deleteSecurityToken() { this->securityToken_ = nullptr;};
    inline string securityToken() const { DARABONBA_PTR_GET_DEFAULT(securityToken_, "") };
    inline ModifyBackendRequest& setSecurityToken(string securityToken) { DARABONBA_PTR_SET_VALUE(securityToken_, securityToken) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> backendId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> backendName_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> backendType_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<string> securityToken_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
