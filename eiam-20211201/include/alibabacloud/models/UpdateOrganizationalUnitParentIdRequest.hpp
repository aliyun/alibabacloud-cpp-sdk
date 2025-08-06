// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEORGANIZATIONALUNITPARENTIDREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEORGANIZATIONALUNITPARENTIDREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eiam20211201
{
namespace Models
{
  class UpdateOrganizationalUnitParentIdRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateOrganizationalUnitParentIdRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(OrganizationalUnitId, organizationalUnitId_);
      DARABONBA_PTR_TO_JSON(ParentId, parentId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateOrganizationalUnitParentIdRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(OrganizationalUnitId, organizationalUnitId_);
      DARABONBA_PTR_FROM_JSON(ParentId, parentId_);
    };
    UpdateOrganizationalUnitParentIdRequest() = default ;
    UpdateOrganizationalUnitParentIdRequest(const UpdateOrganizationalUnitParentIdRequest &) = default ;
    UpdateOrganizationalUnitParentIdRequest(UpdateOrganizationalUnitParentIdRequest &&) = default ;
    UpdateOrganizationalUnitParentIdRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateOrganizationalUnitParentIdRequest() = default ;
    UpdateOrganizationalUnitParentIdRequest& operator=(const UpdateOrganizationalUnitParentIdRequest &) = default ;
    UpdateOrganizationalUnitParentIdRequest& operator=(UpdateOrganizationalUnitParentIdRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->instanceId_ != nullptr
        && this->organizationalUnitId_ != nullptr && this->parentId_ != nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline UpdateOrganizationalUnitParentIdRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // organizationalUnitId Field Functions 
    bool hasOrganizationalUnitId() const { return this->organizationalUnitId_ != nullptr;};
    void deleteOrganizationalUnitId() { this->organizationalUnitId_ = nullptr;};
    inline string organizationalUnitId() const { DARABONBA_PTR_GET_DEFAULT(organizationalUnitId_, "") };
    inline UpdateOrganizationalUnitParentIdRequest& setOrganizationalUnitId(string organizationalUnitId) { DARABONBA_PTR_SET_VALUE(organizationalUnitId_, organizationalUnitId) };


    // parentId Field Functions 
    bool hasParentId() const { return this->parentId_ != nullptr;};
    void deleteParentId() { this->parentId_ = nullptr;};
    inline string parentId() const { DARABONBA_PTR_GET_DEFAULT(parentId_, "") };
    inline UpdateOrganizationalUnitParentIdRequest& setParentId(string parentId) { DARABONBA_PTR_SET_VALUE(parentId_, parentId) };


  protected:
    // The instance ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The organization ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> organizationalUnitId_ = nullptr;
    // The parent organization ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> parentId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
