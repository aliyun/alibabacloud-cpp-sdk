// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEBACKENDMODELREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEBACKENDMODELREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class CreateBackendModelRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateBackendModelRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BackendId, backendId_);
      DARABONBA_PTR_TO_JSON(BackendModelData, backendModelData_);
      DARABONBA_PTR_TO_JSON(BackendType, backendType_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(SecurityToken, securityToken_);
      DARABONBA_PTR_TO_JSON(StageName, stageName_);
    };
    friend void from_json(const Darabonba::Json& j, CreateBackendModelRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BackendId, backendId_);
      DARABONBA_PTR_FROM_JSON(BackendModelData, backendModelData_);
      DARABONBA_PTR_FROM_JSON(BackendType, backendType_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(SecurityToken, securityToken_);
      DARABONBA_PTR_FROM_JSON(StageName, stageName_);
    };
    CreateBackendModelRequest() = default ;
    CreateBackendModelRequest(const CreateBackendModelRequest &) = default ;
    CreateBackendModelRequest(CreateBackendModelRequest &&) = default ;
    CreateBackendModelRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateBackendModelRequest() = default ;
    CreateBackendModelRequest& operator=(const CreateBackendModelRequest &) = default ;
    CreateBackendModelRequest& operator=(CreateBackendModelRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->backendId_ == nullptr
        && return this->backendModelData_ == nullptr && return this->backendType_ == nullptr && return this->description_ == nullptr && return this->securityToken_ == nullptr && return this->stageName_ == nullptr; };
    // backendId Field Functions 
    bool hasBackendId() const { return this->backendId_ != nullptr;};
    void deleteBackendId() { this->backendId_ = nullptr;};
    inline string backendId() const { DARABONBA_PTR_GET_DEFAULT(backendId_, "") };
    inline CreateBackendModelRequest& setBackendId(string backendId) { DARABONBA_PTR_SET_VALUE(backendId_, backendId) };


    // backendModelData Field Functions 
    bool hasBackendModelData() const { return this->backendModelData_ != nullptr;};
    void deleteBackendModelData() { this->backendModelData_ = nullptr;};
    inline string backendModelData() const { DARABONBA_PTR_GET_DEFAULT(backendModelData_, "") };
    inline CreateBackendModelRequest& setBackendModelData(string backendModelData) { DARABONBA_PTR_SET_VALUE(backendModelData_, backendModelData) };


    // backendType Field Functions 
    bool hasBackendType() const { return this->backendType_ != nullptr;};
    void deleteBackendType() { this->backendType_ = nullptr;};
    inline string backendType() const { DARABONBA_PTR_GET_DEFAULT(backendType_, "") };
    inline CreateBackendModelRequest& setBackendType(string backendType) { DARABONBA_PTR_SET_VALUE(backendType_, backendType) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateBackendModelRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // securityToken Field Functions 
    bool hasSecurityToken() const { return this->securityToken_ != nullptr;};
    void deleteSecurityToken() { this->securityToken_ = nullptr;};
    inline string securityToken() const { DARABONBA_PTR_GET_DEFAULT(securityToken_, "") };
    inline CreateBackendModelRequest& setSecurityToken(string securityToken) { DARABONBA_PTR_SET_VALUE(securityToken_, securityToken) };


    // stageName Field Functions 
    bool hasStageName() const { return this->stageName_ != nullptr;};
    void deleteStageName() { this->stageName_ = nullptr;};
    inline string stageName() const { DARABONBA_PTR_GET_DEFAULT(stageName_, "") };
    inline CreateBackendModelRequest& setStageName(string stageName) { DARABONBA_PTR_SET_VALUE(stageName_, stageName) };


  protected:
    std::shared_ptr<string> backendId_ = nullptr;
    std::shared_ptr<string> backendModelData_ = nullptr;
    std::shared_ptr<string> backendType_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<string> securityToken_ = nullptr;
    std::shared_ptr<string> stageName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
