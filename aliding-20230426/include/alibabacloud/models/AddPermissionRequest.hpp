// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDPERMISSIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ADDPERMISSIONREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class AddPermissionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddPermissionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DentryUuid, dentryUuid_);
      DARABONBA_PTR_TO_JSON(Members, members_);
      DARABONBA_PTR_TO_JSON(Option, option_);
      DARABONBA_PTR_TO_JSON(RoleId, roleId_);
      DARABONBA_PTR_TO_JSON(TenantContext, tenantContext_);
    };
    friend void from_json(const Darabonba::Json& j, AddPermissionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DentryUuid, dentryUuid_);
      DARABONBA_PTR_FROM_JSON(Members, members_);
      DARABONBA_PTR_FROM_JSON(Option, option_);
      DARABONBA_PTR_FROM_JSON(RoleId, roleId_);
      DARABONBA_PTR_FROM_JSON(TenantContext, tenantContext_);
    };
    AddPermissionRequest() = default ;
    AddPermissionRequest(const AddPermissionRequest &) = default ;
    AddPermissionRequest(AddPermissionRequest &&) = default ;
    AddPermissionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddPermissionRequest() = default ;
    AddPermissionRequest& operator=(const AddPermissionRequest &) = default ;
    AddPermissionRequest& operator=(AddPermissionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class TenantContext : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const TenantContext& obj) { 
        DARABONBA_PTR_TO_JSON(tenantId, tenantId_);
      };
      friend void from_json(const Darabonba::Json& j, TenantContext& obj) { 
        DARABONBA_PTR_FROM_JSON(tenantId, tenantId_);
      };
      TenantContext() = default ;
      TenantContext(const TenantContext &) = default ;
      TenantContext(TenantContext &&) = default ;
      TenantContext(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~TenantContext() = default ;
      TenantContext& operator=(const TenantContext &) = default ;
      TenantContext& operator=(TenantContext &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->tenantId_ == nullptr; };
      // tenantId Field Functions 
      bool hasTenantId() const { return this->tenantId_ != nullptr;};
      void deleteTenantId() { this->tenantId_ = nullptr;};
      inline string getTenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
      inline TenantContext& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


    protected:
      shared_ptr<string> tenantId_ {};
    };

    class Option : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Option& obj) { 
        DARABONBA_PTR_TO_JSON(Duration, duration_);
      };
      friend void from_json(const Darabonba::Json& j, Option& obj) { 
        DARABONBA_PTR_FROM_JSON(Duration, duration_);
      };
      Option() = default ;
      Option(const Option &) = default ;
      Option(Option &&) = default ;
      Option(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Option() = default ;
      Option& operator=(const Option &) = default ;
      Option& operator=(Option &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->duration_ == nullptr; };
      // duration Field Functions 
      bool hasDuration() const { return this->duration_ != nullptr;};
      void deleteDuration() { this->duration_ = nullptr;};
      inline int64_t getDuration() const { DARABONBA_PTR_GET_DEFAULT(duration_, 0L) };
      inline Option& setDuration(int64_t duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


    protected:
      shared_ptr<int64_t> duration_ {};
    };

    class Members : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Members& obj) { 
        DARABONBA_PTR_TO_JSON(CorpId, corpId_);
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(Type, type_);
      };
      friend void from_json(const Darabonba::Json& j, Members& obj) { 
        DARABONBA_PTR_FROM_JSON(CorpId, corpId_);
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(Type, type_);
      };
      Members() = default ;
      Members(const Members &) = default ;
      Members(Members &&) = default ;
      Members(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Members() = default ;
      Members& operator=(const Members &) = default ;
      Members& operator=(Members &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->corpId_ == nullptr
        && this->id_ == nullptr && this->type_ == nullptr; };
      // corpId Field Functions 
      bool hasCorpId() const { return this->corpId_ != nullptr;};
      void deleteCorpId() { this->corpId_ = nullptr;};
      inline string getCorpId() const { DARABONBA_PTR_GET_DEFAULT(corpId_, "") };
      inline Members& setCorpId(string corpId) { DARABONBA_PTR_SET_VALUE(corpId_, corpId) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
      inline Members& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline Members& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    protected:
      shared_ptr<string> corpId_ {};
      shared_ptr<string> id_ {};
      shared_ptr<string> type_ {};
    };

    virtual bool empty() const override { return this->dentryUuid_ == nullptr
        && this->members_ == nullptr && this->option_ == nullptr && this->roleId_ == nullptr && this->tenantContext_ == nullptr; };
    // dentryUuid Field Functions 
    bool hasDentryUuid() const { return this->dentryUuid_ != nullptr;};
    void deleteDentryUuid() { this->dentryUuid_ = nullptr;};
    inline string getDentryUuid() const { DARABONBA_PTR_GET_DEFAULT(dentryUuid_, "") };
    inline AddPermissionRequest& setDentryUuid(string dentryUuid) { DARABONBA_PTR_SET_VALUE(dentryUuid_, dentryUuid) };


    // members Field Functions 
    bool hasMembers() const { return this->members_ != nullptr;};
    void deleteMembers() { this->members_ = nullptr;};
    inline const vector<AddPermissionRequest::Members> & getMembers() const { DARABONBA_PTR_GET_CONST(members_, vector<AddPermissionRequest::Members>) };
    inline vector<AddPermissionRequest::Members> getMembers() { DARABONBA_PTR_GET(members_, vector<AddPermissionRequest::Members>) };
    inline AddPermissionRequest& setMembers(const vector<AddPermissionRequest::Members> & members) { DARABONBA_PTR_SET_VALUE(members_, members) };
    inline AddPermissionRequest& setMembers(vector<AddPermissionRequest::Members> && members) { DARABONBA_PTR_SET_RVALUE(members_, members) };


    // option Field Functions 
    bool hasOption() const { return this->option_ != nullptr;};
    void deleteOption() { this->option_ = nullptr;};
    inline const AddPermissionRequest::Option & getOption() const { DARABONBA_PTR_GET_CONST(option_, AddPermissionRequest::Option) };
    inline AddPermissionRequest::Option getOption() { DARABONBA_PTR_GET(option_, AddPermissionRequest::Option) };
    inline AddPermissionRequest& setOption(const AddPermissionRequest::Option & option) { DARABONBA_PTR_SET_VALUE(option_, option) };
    inline AddPermissionRequest& setOption(AddPermissionRequest::Option && option) { DARABONBA_PTR_SET_RVALUE(option_, option) };


    // roleId Field Functions 
    bool hasRoleId() const { return this->roleId_ != nullptr;};
    void deleteRoleId() { this->roleId_ = nullptr;};
    inline string getRoleId() const { DARABONBA_PTR_GET_DEFAULT(roleId_, "") };
    inline AddPermissionRequest& setRoleId(string roleId) { DARABONBA_PTR_SET_VALUE(roleId_, roleId) };


    // tenantContext Field Functions 
    bool hasTenantContext() const { return this->tenantContext_ != nullptr;};
    void deleteTenantContext() { this->tenantContext_ = nullptr;};
    inline const AddPermissionRequest::TenantContext & getTenantContext() const { DARABONBA_PTR_GET_CONST(tenantContext_, AddPermissionRequest::TenantContext) };
    inline AddPermissionRequest::TenantContext getTenantContext() { DARABONBA_PTR_GET(tenantContext_, AddPermissionRequest::TenantContext) };
    inline AddPermissionRequest& setTenantContext(const AddPermissionRequest::TenantContext & tenantContext) { DARABONBA_PTR_SET_VALUE(tenantContext_, tenantContext) };
    inline AddPermissionRequest& setTenantContext(AddPermissionRequest::TenantContext && tenantContext) { DARABONBA_PTR_SET_RVALUE(tenantContext_, tenantContext) };


  protected:
    shared_ptr<string> dentryUuid_ {};
    // This parameter is required.
    shared_ptr<vector<AddPermissionRequest::Members>> members_ {};
    shared_ptr<AddPermissionRequest::Option> option_ {};
    // This parameter is required.
    shared_ptr<string> roleId_ {};
    shared_ptr<AddPermissionRequest::TenantContext> tenantContext_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
