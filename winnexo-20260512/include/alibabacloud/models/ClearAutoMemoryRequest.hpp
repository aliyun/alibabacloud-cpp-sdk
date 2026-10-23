// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CLEARAUTOMEMORYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CLEARAUTOMEMORYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WinNexo20260512
{
namespace Models
{
  class ClearAutoMemoryRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ClearAutoMemoryRequest& obj) { 
      DARABONBA_PTR_TO_JSON(groupId, groupId_);
      DARABONBA_PTR_TO_JSON(ownerType, ownerType_);
      DARABONBA_PTR_TO_JSON(tenantId, tenantId_);
      DARABONBA_PTR_TO_JSON(type, type_);
    };
    friend void from_json(const Darabonba::Json& j, ClearAutoMemoryRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(groupId, groupId_);
      DARABONBA_PTR_FROM_JSON(ownerType, ownerType_);
      DARABONBA_PTR_FROM_JSON(tenantId, tenantId_);
      DARABONBA_PTR_FROM_JSON(type, type_);
    };
    ClearAutoMemoryRequest() = default ;
    ClearAutoMemoryRequest(const ClearAutoMemoryRequest &) = default ;
    ClearAutoMemoryRequest(ClearAutoMemoryRequest &&) = default ;
    ClearAutoMemoryRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ClearAutoMemoryRequest() = default ;
    ClearAutoMemoryRequest& operator=(const ClearAutoMemoryRequest &) = default ;
    ClearAutoMemoryRequest& operator=(ClearAutoMemoryRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->groupId_ == nullptr
        && this->ownerType_ == nullptr && this->tenantId_ == nullptr && this->type_ == nullptr; };
    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline string getGroupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
    inline ClearAutoMemoryRequest& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // ownerType Field Functions 
    bool hasOwnerType() const { return this->ownerType_ != nullptr;};
    void deleteOwnerType() { this->ownerType_ = nullptr;};
    inline string getOwnerType() const { DARABONBA_PTR_GET_DEFAULT(ownerType_, "") };
    inline ClearAutoMemoryRequest& setOwnerType(string ownerType) { DARABONBA_PTR_SET_VALUE(ownerType_, ownerType) };


    // tenantId Field Functions 
    bool hasTenantId() const { return this->tenantId_ != nullptr;};
    void deleteTenantId() { this->tenantId_ = nullptr;};
    inline string getTenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
    inline ClearAutoMemoryRequest& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline ClearAutoMemoryRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The workspace ID. This parameter is required when ownerType is set to group.
    shared_ptr<string> groupId_ {};
    // The owner type. Valid values:
    // - user: the personal memory of the authenticated user.
    // - group: the memory of a specified workspace.
    shared_ptr<string> ownerType_ {};
    // The tenant ID. This is a common parameter. If not specified, the default tenant of the caller is used.
    shared_ptr<string> tenantId_ {};
    // The memory type. Valid values: user, feedback, reference, project, and all. A value of all does not clear manual memory.
    // 
    // This parameter is required.
    shared_ptr<string> type_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WinNexo20260512
#endif
