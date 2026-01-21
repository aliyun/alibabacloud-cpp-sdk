// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MANAGETERRAFORMSTATEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MANAGETERRAFORMSTATEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IaCService20210806
{
namespace Models
{
  class ManageTerraformStateRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ManageTerraformStateRequest& obj) { 
      DARABONBA_PTR_TO_JSON(action, action_);
      DARABONBA_PTR_TO_JSON(clientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(identifier, identifier_);
      DARABONBA_PTR_TO_JSON(importResourceId, importResourceId_);
      DARABONBA_PTR_TO_JSON(resourceIdentifier, resourceIdentifier_);
      DARABONBA_PTR_TO_JSON(type, type_);
    };
    friend void from_json(const Darabonba::Json& j, ManageTerraformStateRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(action, action_);
      DARABONBA_PTR_FROM_JSON(clientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(identifier, identifier_);
      DARABONBA_PTR_FROM_JSON(importResourceId, importResourceId_);
      DARABONBA_PTR_FROM_JSON(resourceIdentifier, resourceIdentifier_);
      DARABONBA_PTR_FROM_JSON(type, type_);
    };
    ManageTerraformStateRequest() = default ;
    ManageTerraformStateRequest(const ManageTerraformStateRequest &) = default ;
    ManageTerraformStateRequest(ManageTerraformStateRequest &&) = default ;
    ManageTerraformStateRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ManageTerraformStateRequest() = default ;
    ManageTerraformStateRequest& operator=(const ManageTerraformStateRequest &) = default ;
    ManageTerraformStateRequest& operator=(ManageTerraformStateRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->action_ == nullptr
        && this->clientToken_ == nullptr && this->identifier_ == nullptr && this->importResourceId_ == nullptr && this->resourceIdentifier_ == nullptr && this->type_ == nullptr; };
    // action Field Functions 
    bool hasAction() const { return this->action_ != nullptr;};
    void deleteAction() { this->action_ = nullptr;};
    inline string getAction() const { DARABONBA_PTR_GET_DEFAULT(action_, "") };
    inline ManageTerraformStateRequest& setAction(string action) { DARABONBA_PTR_SET_VALUE(action_, action) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline ManageTerraformStateRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // identifier Field Functions 
    bool hasIdentifier() const { return this->identifier_ != nullptr;};
    void deleteIdentifier() { this->identifier_ = nullptr;};
    inline string getIdentifier() const { DARABONBA_PTR_GET_DEFAULT(identifier_, "") };
    inline ManageTerraformStateRequest& setIdentifier(string identifier) { DARABONBA_PTR_SET_VALUE(identifier_, identifier) };


    // importResourceId Field Functions 
    bool hasImportResourceId() const { return this->importResourceId_ != nullptr;};
    void deleteImportResourceId() { this->importResourceId_ = nullptr;};
    inline string getImportResourceId() const { DARABONBA_PTR_GET_DEFAULT(importResourceId_, "") };
    inline ManageTerraformStateRequest& setImportResourceId(string importResourceId) { DARABONBA_PTR_SET_VALUE(importResourceId_, importResourceId) };


    // resourceIdentifier Field Functions 
    bool hasResourceIdentifier() const { return this->resourceIdentifier_ != nullptr;};
    void deleteResourceIdentifier() { this->resourceIdentifier_ = nullptr;};
    inline string getResourceIdentifier() const { DARABONBA_PTR_GET_DEFAULT(resourceIdentifier_, "") };
    inline ManageTerraformStateRequest& setResourceIdentifier(string resourceIdentifier) { DARABONBA_PTR_SET_VALUE(resourceIdentifier_, resourceIdentifier) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline ManageTerraformStateRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // This parameter is required.
    shared_ptr<string> action_ {};
    // This parameter is required.
    shared_ptr<string> clientToken_ {};
    // This parameter is required.
    shared_ptr<string> identifier_ {};
    shared_ptr<string> importResourceId_ {};
    // This parameter is required.
    shared_ptr<string> resourceIdentifier_ {};
    // This parameter is required.
    shared_ptr<string> type_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IaCService20210806
#endif
