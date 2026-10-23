// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMEMORYDETAILREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETMEMORYDETAILREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WinNexo20260512
{
namespace Models
{
  class GetMemoryDetailRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetMemoryDetailRequest& obj) { 
      DARABONBA_PTR_TO_JSON(groupId, groupId_);
      DARABONBA_PTR_TO_JSON(ownerType, ownerType_);
      DARABONBA_PTR_TO_JSON(tenantId, tenantId_);
    };
    friend void from_json(const Darabonba::Json& j, GetMemoryDetailRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(groupId, groupId_);
      DARABONBA_PTR_FROM_JSON(ownerType, ownerType_);
      DARABONBA_PTR_FROM_JSON(tenantId, tenantId_);
    };
    GetMemoryDetailRequest() = default ;
    GetMemoryDetailRequest(const GetMemoryDetailRequest &) = default ;
    GetMemoryDetailRequest(GetMemoryDetailRequest &&) = default ;
    GetMemoryDetailRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetMemoryDetailRequest() = default ;
    GetMemoryDetailRequest& operator=(const GetMemoryDetailRequest &) = default ;
    GetMemoryDetailRequest& operator=(GetMemoryDetailRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->groupId_ == nullptr
        && this->ownerType_ == nullptr && this->tenantId_ == nullptr; };
    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline string getGroupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
    inline GetMemoryDetailRequest& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // ownerType Field Functions 
    bool hasOwnerType() const { return this->ownerType_ != nullptr;};
    void deleteOwnerType() { this->ownerType_ = nullptr;};
    inline string getOwnerType() const { DARABONBA_PTR_GET_DEFAULT(ownerType_, "") };
    inline GetMemoryDetailRequest& setOwnerType(string ownerType) { DARABONBA_PTR_SET_VALUE(ownerType_, ownerType) };


    // tenantId Field Functions 
    bool hasTenantId() const { return this->tenantId_ != nullptr;};
    void deleteTenantId() { this->tenantId_ = nullptr;};
    inline string getTenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
    inline GetMemoryDetailRequest& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


  protected:
    // The workspace ID. This parameter is required when ownerType is set to group.
    shared_ptr<string> groupId_ {};
    // The owner type. A value of user indicates the personal memory of the authenticated user. A value of group indicates the memory of a specified workspace.
    shared_ptr<string> ownerType_ {};
    // The tenant ID. This is a common parameter. If this parameter is not specified, the default tenant of the caller is used.
    shared_ptr<string> tenantId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WinNexo20260512
#endif
