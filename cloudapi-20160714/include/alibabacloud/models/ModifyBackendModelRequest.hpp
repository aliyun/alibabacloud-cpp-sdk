// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYBACKENDMODELREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYBACKENDMODELREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class ModifyBackendModelRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyBackendModelRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BackendId, backendId_);
      DARABONBA_PTR_TO_JSON(BackendModelData, backendModelData_);
      DARABONBA_PTR_TO_JSON(BackendModelId, backendModelId_);
      DARABONBA_PTR_TO_JSON(BackendType, backendType_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(SecurityToken, securityToken_);
      DARABONBA_PTR_TO_JSON(StageName, stageName_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyBackendModelRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BackendId, backendId_);
      DARABONBA_PTR_FROM_JSON(BackendModelData, backendModelData_);
      DARABONBA_PTR_FROM_JSON(BackendModelId, backendModelId_);
      DARABONBA_PTR_FROM_JSON(BackendType, backendType_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(SecurityToken, securityToken_);
      DARABONBA_PTR_FROM_JSON(StageName, stageName_);
    };
    ModifyBackendModelRequest() = default ;
    ModifyBackendModelRequest(const ModifyBackendModelRequest &) = default ;
    ModifyBackendModelRequest(ModifyBackendModelRequest &&) = default ;
    ModifyBackendModelRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyBackendModelRequest() = default ;
    ModifyBackendModelRequest& operator=(const ModifyBackendModelRequest &) = default ;
    ModifyBackendModelRequest& operator=(ModifyBackendModelRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->backendId_ == nullptr
        && this->backendModelData_ == nullptr && this->backendModelId_ == nullptr && this->backendType_ == nullptr && this->description_ == nullptr && this->securityToken_ == nullptr
        && this->stageName_ == nullptr; };
    // backendId Field Functions 
    bool hasBackendId() const { return this->backendId_ != nullptr;};
    void deleteBackendId() { this->backendId_ = nullptr;};
    inline string getBackendId() const { DARABONBA_PTR_GET_DEFAULT(backendId_, "") };
    inline ModifyBackendModelRequest& setBackendId(string backendId) { DARABONBA_PTR_SET_VALUE(backendId_, backendId) };


    // backendModelData Field Functions 
    bool hasBackendModelData() const { return this->backendModelData_ != nullptr;};
    void deleteBackendModelData() { this->backendModelData_ = nullptr;};
    inline string getBackendModelData() const { DARABONBA_PTR_GET_DEFAULT(backendModelData_, "") };
    inline ModifyBackendModelRequest& setBackendModelData(string backendModelData) { DARABONBA_PTR_SET_VALUE(backendModelData_, backendModelData) };


    // backendModelId Field Functions 
    bool hasBackendModelId() const { return this->backendModelId_ != nullptr;};
    void deleteBackendModelId() { this->backendModelId_ = nullptr;};
    inline string getBackendModelId() const { DARABONBA_PTR_GET_DEFAULT(backendModelId_, "") };
    inline ModifyBackendModelRequest& setBackendModelId(string backendModelId) { DARABONBA_PTR_SET_VALUE(backendModelId_, backendModelId) };


    // backendType Field Functions 
    bool hasBackendType() const { return this->backendType_ != nullptr;};
    void deleteBackendType() { this->backendType_ = nullptr;};
    inline string getBackendType() const { DARABONBA_PTR_GET_DEFAULT(backendType_, "") };
    inline ModifyBackendModelRequest& setBackendType(string backendType) { DARABONBA_PTR_SET_VALUE(backendType_, backendType) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ModifyBackendModelRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // securityToken Field Functions 
    bool hasSecurityToken() const { return this->securityToken_ != nullptr;};
    void deleteSecurityToken() { this->securityToken_ = nullptr;};
    inline string getSecurityToken() const { DARABONBA_PTR_GET_DEFAULT(securityToken_, "") };
    inline ModifyBackendModelRequest& setSecurityToken(string securityToken) { DARABONBA_PTR_SET_VALUE(securityToken_, securityToken) };


    // stageName Field Functions 
    bool hasStageName() const { return this->stageName_ != nullptr;};
    void deleteStageName() { this->stageName_ = nullptr;};
    inline string getStageName() const { DARABONBA_PTR_GET_DEFAULT(stageName_, "") };
    inline ModifyBackendModelRequest& setStageName(string stageName) { DARABONBA_PTR_SET_VALUE(stageName_, stageName) };


  protected:
    shared_ptr<string> backendId_ {};
    shared_ptr<string> backendModelData_ {};
    shared_ptr<string> backendModelId_ {};
    shared_ptr<string> backendType_ {};
    shared_ptr<string> description_ {};
    shared_ptr<string> securityToken_ {};
    shared_ptr<string> stageName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
