// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEORGANIZATIONALUNITREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEORGANIZATIONALUNITREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eiam20211201
{
namespace Models
{
  class CreateOrganizationalUnitRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateOrganizationalUnitRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(OrganizationalUnitExternalId, organizationalUnitExternalId_);
      DARABONBA_PTR_TO_JSON(OrganizationalUnitName, organizationalUnitName_);
      DARABONBA_PTR_TO_JSON(ParentId, parentId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateOrganizationalUnitRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(OrganizationalUnitExternalId, organizationalUnitExternalId_);
      DARABONBA_PTR_FROM_JSON(OrganizationalUnitName, organizationalUnitName_);
      DARABONBA_PTR_FROM_JSON(ParentId, parentId_);
    };
    CreateOrganizationalUnitRequest() = default ;
    CreateOrganizationalUnitRequest(const CreateOrganizationalUnitRequest &) = default ;
    CreateOrganizationalUnitRequest(CreateOrganizationalUnitRequest &&) = default ;
    CreateOrganizationalUnitRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateOrganizationalUnitRequest() = default ;
    CreateOrganizationalUnitRequest& operator=(const CreateOrganizationalUnitRequest &) = default ;
    CreateOrganizationalUnitRequest& operator=(CreateOrganizationalUnitRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->description_ == nullptr
        && this->instanceId_ == nullptr && this->organizationalUnitExternalId_ == nullptr && this->organizationalUnitName_ == nullptr && this->parentId_ == nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateOrganizationalUnitRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline CreateOrganizationalUnitRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // organizationalUnitExternalId Field Functions 
    bool hasOrganizationalUnitExternalId() const { return this->organizationalUnitExternalId_ != nullptr;};
    void deleteOrganizationalUnitExternalId() { this->organizationalUnitExternalId_ = nullptr;};
    inline string getOrganizationalUnitExternalId() const { DARABONBA_PTR_GET_DEFAULT(organizationalUnitExternalId_, "") };
    inline CreateOrganizationalUnitRequest& setOrganizationalUnitExternalId(string organizationalUnitExternalId) { DARABONBA_PTR_SET_VALUE(organizationalUnitExternalId_, organizationalUnitExternalId) };


    // organizationalUnitName Field Functions 
    bool hasOrganizationalUnitName() const { return this->organizationalUnitName_ != nullptr;};
    void deleteOrganizationalUnitName() { this->organizationalUnitName_ = nullptr;};
    inline string getOrganizationalUnitName() const { DARABONBA_PTR_GET_DEFAULT(organizationalUnitName_, "") };
    inline CreateOrganizationalUnitRequest& setOrganizationalUnitName(string organizationalUnitName) { DARABONBA_PTR_SET_VALUE(organizationalUnitName_, organizationalUnitName) };


    // parentId Field Functions 
    bool hasParentId() const { return this->parentId_ != nullptr;};
    void deleteParentId() { this->parentId_ = nullptr;};
    inline string getParentId() const { DARABONBA_PTR_GET_DEFAULT(parentId_, "") };
    inline CreateOrganizationalUnitRequest& setParentId(string parentId) { DARABONBA_PTR_SET_VALUE(parentId_, parentId) };


  protected:
    // The description. The maximum length is 256 characters.
    shared_ptr<string> description_ {};
    // Instance ID.
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // External ID of the organization, which is used for association with an external system. The default value is the organization ID. The maximum length is 64 characters.
    shared_ptr<string> organizationalUnitExternalId_ {};
    // Organization name. The maximum length is 64 characters.
    // 
    // This parameter is required.
    shared_ptr<string> organizationalUnitName_ {};
    // Parent organization ID.
    // 
    // This parameter is required.
    shared_ptr<string> parentId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
