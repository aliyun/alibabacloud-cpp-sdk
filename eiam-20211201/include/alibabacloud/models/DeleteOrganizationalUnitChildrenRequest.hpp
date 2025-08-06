// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEORGANIZATIONALUNITCHILDRENREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEORGANIZATIONALUNITCHILDRENREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eiam20211201
{
namespace Models
{
  class DeleteOrganizationalUnitChildrenRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteOrganizationalUnitChildrenRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(OrganizationalUnitId, organizationalUnitId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteOrganizationalUnitChildrenRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(OrganizationalUnitId, organizationalUnitId_);
    };
    DeleteOrganizationalUnitChildrenRequest() = default ;
    DeleteOrganizationalUnitChildrenRequest(const DeleteOrganizationalUnitChildrenRequest &) = default ;
    DeleteOrganizationalUnitChildrenRequest(DeleteOrganizationalUnitChildrenRequest &&) = default ;
    DeleteOrganizationalUnitChildrenRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteOrganizationalUnitChildrenRequest() = default ;
    DeleteOrganizationalUnitChildrenRequest& operator=(const DeleteOrganizationalUnitChildrenRequest &) = default ;
    DeleteOrganizationalUnitChildrenRequest& operator=(DeleteOrganizationalUnitChildrenRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->instanceId_ != nullptr
        && this->organizationalUnitId_ != nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DeleteOrganizationalUnitChildrenRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // organizationalUnitId Field Functions 
    bool hasOrganizationalUnitId() const { return this->organizationalUnitId_ != nullptr;};
    void deleteOrganizationalUnitId() { this->organizationalUnitId_ = nullptr;};
    inline string organizationalUnitId() const { DARABONBA_PTR_GET_DEFAULT(organizationalUnitId_, "") };
    inline DeleteOrganizationalUnitChildrenRequest& setOrganizationalUnitId(string organizationalUnitId) { DARABONBA_PTR_SET_VALUE(organizationalUnitId_, organizationalUnitId) };


  protected:
    // Instance ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    // Organizational Unit ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> organizationalUnitId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
