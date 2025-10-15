// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEORGANIZATIONALUNITREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEORGANIZATIONALUNITREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eiam20211201
{
namespace Models
{
  class UpdateOrganizationalUnitRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateOrganizationalUnitRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(OrganizationalUnitId, organizationalUnitId_);
      DARABONBA_PTR_TO_JSON(OrganizationalUnitName, organizationalUnitName_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateOrganizationalUnitRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(OrganizationalUnitId, organizationalUnitId_);
      DARABONBA_PTR_FROM_JSON(OrganizationalUnitName, organizationalUnitName_);
    };
    UpdateOrganizationalUnitRequest() = default ;
    UpdateOrganizationalUnitRequest(const UpdateOrganizationalUnitRequest &) = default ;
    UpdateOrganizationalUnitRequest(UpdateOrganizationalUnitRequest &&) = default ;
    UpdateOrganizationalUnitRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateOrganizationalUnitRequest() = default ;
    UpdateOrganizationalUnitRequest& operator=(const UpdateOrganizationalUnitRequest &) = default ;
    UpdateOrganizationalUnitRequest& operator=(UpdateOrganizationalUnitRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceId_ == nullptr
        && return this->organizationalUnitId_ == nullptr && return this->organizationalUnitName_ == nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline UpdateOrganizationalUnitRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // organizationalUnitId Field Functions 
    bool hasOrganizationalUnitId() const { return this->organizationalUnitId_ != nullptr;};
    void deleteOrganizationalUnitId() { this->organizationalUnitId_ = nullptr;};
    inline string organizationalUnitId() const { DARABONBA_PTR_GET_DEFAULT(organizationalUnitId_, "") };
    inline UpdateOrganizationalUnitRequest& setOrganizationalUnitId(string organizationalUnitId) { DARABONBA_PTR_SET_VALUE(organizationalUnitId_, organizationalUnitId) };


    // organizationalUnitName Field Functions 
    bool hasOrganizationalUnitName() const { return this->organizationalUnitName_ != nullptr;};
    void deleteOrganizationalUnitName() { this->organizationalUnitName_ = nullptr;};
    inline string organizationalUnitName() const { DARABONBA_PTR_GET_DEFAULT(organizationalUnitName_, "") };
    inline UpdateOrganizationalUnitRequest& setOrganizationalUnitName(string organizationalUnitName) { DARABONBA_PTR_SET_VALUE(organizationalUnitName_, organizationalUnitName) };


  protected:
    // The instance ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The organization ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> organizationalUnitId_ = nullptr;
    // The name of the organization. The name can be up to 128 characters in length and must be unique in the same parent organization.
    std::shared_ptr<string> organizationalUnitName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
