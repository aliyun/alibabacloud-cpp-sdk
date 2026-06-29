// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SIMPLETENANT_HPP_
#define ALIBABACLOUD_MODELS_SIMPLETENANT_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/SimpleUser.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OpenITag20220616
{
namespace Models
{
  class SimpleTenant : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SimpleTenant& obj) { 
      DARABONBA_PTR_TO_JSON(Creator, creator_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(GmtCreateTime, gmtCreateTime_);
      DARABONBA_PTR_TO_JSON(GmtModifiedTime, gmtModifiedTime_);
      DARABONBA_PTR_TO_JSON(Modifier, modifier_);
      DARABONBA_PTR_TO_JSON(Role, role_);
      DARABONBA_PTR_TO_JSON(TenantId, tenantId_);
      DARABONBA_PTR_TO_JSON(TenantName, tenantName_);
      DARABONBA_PTR_TO_JSON(UUID, UUID_);
    };
    friend void from_json(const Darabonba::Json& j, SimpleTenant& obj) { 
      DARABONBA_PTR_FROM_JSON(Creator, creator_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(GmtCreateTime, gmtCreateTime_);
      DARABONBA_PTR_FROM_JSON(GmtModifiedTime, gmtModifiedTime_);
      DARABONBA_PTR_FROM_JSON(Modifier, modifier_);
      DARABONBA_PTR_FROM_JSON(Role, role_);
      DARABONBA_PTR_FROM_JSON(TenantId, tenantId_);
      DARABONBA_PTR_FROM_JSON(TenantName, tenantName_);
      DARABONBA_PTR_FROM_JSON(UUID, UUID_);
    };
    SimpleTenant() = default ;
    SimpleTenant(const SimpleTenant &) = default ;
    SimpleTenant(SimpleTenant &&) = default ;
    SimpleTenant(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SimpleTenant() = default ;
    SimpleTenant& operator=(const SimpleTenant &) = default ;
    SimpleTenant& operator=(SimpleTenant &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->creator_ == nullptr
        && this->description_ == nullptr && this->gmtCreateTime_ == nullptr && this->gmtModifiedTime_ == nullptr && this->modifier_ == nullptr && this->role_ == nullptr
        && this->tenantId_ == nullptr && this->tenantName_ == nullptr && this->UUID_ == nullptr; };
    // creator Field Functions 
    bool hasCreator() const { return this->creator_ != nullptr;};
    void deleteCreator() { this->creator_ = nullptr;};
    inline const SimpleUser & getCreator() const { DARABONBA_PTR_GET_CONST(creator_, SimpleUser) };
    inline SimpleUser getCreator() { DARABONBA_PTR_GET(creator_, SimpleUser) };
    inline SimpleTenant& setCreator(const SimpleUser & creator) { DARABONBA_PTR_SET_VALUE(creator_, creator) };
    inline SimpleTenant& setCreator(SimpleUser && creator) { DARABONBA_PTR_SET_RVALUE(creator_, creator) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline SimpleTenant& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // gmtCreateTime Field Functions 
    bool hasGmtCreateTime() const { return this->gmtCreateTime_ != nullptr;};
    void deleteGmtCreateTime() { this->gmtCreateTime_ = nullptr;};
    inline string getGmtCreateTime() const { DARABONBA_PTR_GET_DEFAULT(gmtCreateTime_, "") };
    inline SimpleTenant& setGmtCreateTime(string gmtCreateTime) { DARABONBA_PTR_SET_VALUE(gmtCreateTime_, gmtCreateTime) };


    // gmtModifiedTime Field Functions 
    bool hasGmtModifiedTime() const { return this->gmtModifiedTime_ != nullptr;};
    void deleteGmtModifiedTime() { this->gmtModifiedTime_ = nullptr;};
    inline string getGmtModifiedTime() const { DARABONBA_PTR_GET_DEFAULT(gmtModifiedTime_, "") };
    inline SimpleTenant& setGmtModifiedTime(string gmtModifiedTime) { DARABONBA_PTR_SET_VALUE(gmtModifiedTime_, gmtModifiedTime) };


    // modifier Field Functions 
    bool hasModifier() const { return this->modifier_ != nullptr;};
    void deleteModifier() { this->modifier_ = nullptr;};
    inline const SimpleUser & getModifier() const { DARABONBA_PTR_GET_CONST(modifier_, SimpleUser) };
    inline SimpleUser getModifier() { DARABONBA_PTR_GET(modifier_, SimpleUser) };
    inline SimpleTenant& setModifier(const SimpleUser & modifier) { DARABONBA_PTR_SET_VALUE(modifier_, modifier) };
    inline SimpleTenant& setModifier(SimpleUser && modifier) { DARABONBA_PTR_SET_RVALUE(modifier_, modifier) };


    // role Field Functions 
    bool hasRole() const { return this->role_ != nullptr;};
    void deleteRole() { this->role_ = nullptr;};
    inline string getRole() const { DARABONBA_PTR_GET_DEFAULT(role_, "") };
    inline SimpleTenant& setRole(string role) { DARABONBA_PTR_SET_VALUE(role_, role) };


    // tenantId Field Functions 
    bool hasTenantId() const { return this->tenantId_ != nullptr;};
    void deleteTenantId() { this->tenantId_ = nullptr;};
    inline string getTenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
    inline SimpleTenant& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


    // tenantName Field Functions 
    bool hasTenantName() const { return this->tenantName_ != nullptr;};
    void deleteTenantName() { this->tenantName_ = nullptr;};
    inline string getTenantName() const { DARABONBA_PTR_GET_DEFAULT(tenantName_, "") };
    inline SimpleTenant& setTenantName(string tenantName) { DARABONBA_PTR_SET_VALUE(tenantName_, tenantName) };


    // UUID Field Functions 
    bool hasUUID() const { return this->UUID_ != nullptr;};
    void deleteUUID() { this->UUID_ = nullptr;};
    inline string getUUID() const { DARABONBA_PTR_GET_DEFAULT(UUID_, "") };
    inline SimpleTenant& setUUID(string UUID) { DARABONBA_PTR_SET_VALUE(UUID_, UUID) };


  protected:
    // Creator
    shared_ptr<SimpleUser> creator_ {};
    // Description
    shared_ptr<string> description_ {};
    // Creation Time
    shared_ptr<string> gmtCreateTime_ {};
    // Updated At
    shared_ptr<string> gmtModifiedTime_ {};
    // Updated By Information
    shared_ptr<SimpleUser> modifier_ {};
    // Role Information
    shared_ptr<string> role_ {};
    // Tenant ID
    shared_ptr<string> tenantId_ {};
    // Tenant Name
    shared_ptr<string> tenantName_ {};
    // Unique Identifier
    shared_ptr<string> UUID_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OpenITag20220616
#endif
