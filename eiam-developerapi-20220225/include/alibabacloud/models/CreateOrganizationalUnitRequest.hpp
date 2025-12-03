// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEORGANIZATIONALUNITREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEORGANIZATIONALUNITREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EiamDeveloperapi20220225
{
namespace Models
{
  class CreateOrganizationalUnitRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateOrganizationalUnitRequest& obj) { 
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(organizationalUnitExternalId, organizationalUnitExternalId_);
      DARABONBA_PTR_TO_JSON(organizationalUnitName, organizationalUnitName_);
      DARABONBA_PTR_TO_JSON(parentId, parentId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateOrganizationalUnitRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(organizationalUnitExternalId, organizationalUnitExternalId_);
      DARABONBA_PTR_FROM_JSON(organizationalUnitName, organizationalUnitName_);
      DARABONBA_PTR_FROM_JSON(parentId, parentId_);
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
        && return this->organizationalUnitExternalId_ == nullptr && return this->organizationalUnitName_ == nullptr && return this->parentId_ == nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateOrganizationalUnitRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // organizationalUnitExternalId Field Functions 
    bool hasOrganizationalUnitExternalId() const { return this->organizationalUnitExternalId_ != nullptr;};
    void deleteOrganizationalUnitExternalId() { this->organizationalUnitExternalId_ = nullptr;};
    inline string organizationalUnitExternalId() const { DARABONBA_PTR_GET_DEFAULT(organizationalUnitExternalId_, "") };
    inline CreateOrganizationalUnitRequest& setOrganizationalUnitExternalId(string organizationalUnitExternalId) { DARABONBA_PTR_SET_VALUE(organizationalUnitExternalId_, organizationalUnitExternalId) };


    // organizationalUnitName Field Functions 
    bool hasOrganizationalUnitName() const { return this->organizationalUnitName_ != nullptr;};
    void deleteOrganizationalUnitName() { this->organizationalUnitName_ = nullptr;};
    inline string organizationalUnitName() const { DARABONBA_PTR_GET_DEFAULT(organizationalUnitName_, "") };
    inline CreateOrganizationalUnitRequest& setOrganizationalUnitName(string organizationalUnitName) { DARABONBA_PTR_SET_VALUE(organizationalUnitName_, organizationalUnitName) };


    // parentId Field Functions 
    bool hasParentId() const { return this->parentId_ != nullptr;};
    void deleteParentId() { this->parentId_ = nullptr;};
    inline string parentId() const { DARABONBA_PTR_GET_DEFAULT(parentId_, "") };
    inline CreateOrganizationalUnitRequest& setParentId(string parentId) { DARABONBA_PTR_SET_VALUE(parentId_, parentId) };


  protected:
    // The description of the organizational unit.
    std::shared_ptr<string> description_ = nullptr;
    // The external ID of the organizational unit. The external ID can be used to map external data to the data of the organizational unit in Employee Identity and Access Management (EIAM) of Identity as a Service (IDaaS). By default, the external ID is the organizational unit ID.
    // 
    // For organizational units with the same source type and source ID, each organizational unit has a unique external ID.
    std::shared_ptr<string> organizationalUnitExternalId_ = nullptr;
    // The name of the organizational unit.
    // 
    // This parameter is required.
    std::shared_ptr<string> organizationalUnitName_ = nullptr;
    // The ID of the parent organizational unit.
    // 
    // This parameter is required.
    std::shared_ptr<string> parentId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EiamDeveloperapi20220225
#endif
