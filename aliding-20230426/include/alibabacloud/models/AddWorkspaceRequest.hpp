// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDWORKSPACEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ADDWORKSPACEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class AddWorkspaceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddWorkspaceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Option, option_);
      DARABONBA_PTR_TO_JSON(TenantContext, tenantContext_);
    };
    friend void from_json(const Darabonba::Json& j, AddWorkspaceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Option, option_);
      DARABONBA_PTR_FROM_JSON(TenantContext, tenantContext_);
    };
    AddWorkspaceRequest() = default ;
    AddWorkspaceRequest(const AddWorkspaceRequest &) = default ;
    AddWorkspaceRequest(AddWorkspaceRequest &&) = default ;
    AddWorkspaceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddWorkspaceRequest() = default ;
    AddWorkspaceRequest& operator=(const AddWorkspaceRequest &) = default ;
    AddWorkspaceRequest& operator=(AddWorkspaceRequest &&) = default ;
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
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(TeamId, teamId_);
      };
      friend void from_json(const Darabonba::Json& j, Option& obj) { 
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(TeamId, teamId_);
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
      virtual bool empty() const override { return this->description_ == nullptr
        && this->teamId_ == nullptr; };
      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline Option& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // teamId Field Functions 
      bool hasTeamId() const { return this->teamId_ != nullptr;};
      void deleteTeamId() { this->teamId_ = nullptr;};
      inline string getTeamId() const { DARABONBA_PTR_GET_DEFAULT(teamId_, "") };
      inline Option& setTeamId(string teamId) { DARABONBA_PTR_SET_VALUE(teamId_, teamId) };


    protected:
      shared_ptr<string> description_ {};
      shared_ptr<string> teamId_ {};
    };

    virtual bool empty() const override { return this->name_ == nullptr
        && this->option_ == nullptr && this->tenantContext_ == nullptr; };
    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline AddWorkspaceRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // option Field Functions 
    bool hasOption() const { return this->option_ != nullptr;};
    void deleteOption() { this->option_ = nullptr;};
    inline const AddWorkspaceRequest::Option & getOption() const { DARABONBA_PTR_GET_CONST(option_, AddWorkspaceRequest::Option) };
    inline AddWorkspaceRequest::Option getOption() { DARABONBA_PTR_GET(option_, AddWorkspaceRequest::Option) };
    inline AddWorkspaceRequest& setOption(const AddWorkspaceRequest::Option & option) { DARABONBA_PTR_SET_VALUE(option_, option) };
    inline AddWorkspaceRequest& setOption(AddWorkspaceRequest::Option && option) { DARABONBA_PTR_SET_RVALUE(option_, option) };


    // tenantContext Field Functions 
    bool hasTenantContext() const { return this->tenantContext_ != nullptr;};
    void deleteTenantContext() { this->tenantContext_ = nullptr;};
    inline const AddWorkspaceRequest::TenantContext & getTenantContext() const { DARABONBA_PTR_GET_CONST(tenantContext_, AddWorkspaceRequest::TenantContext) };
    inline AddWorkspaceRequest::TenantContext getTenantContext() { DARABONBA_PTR_GET(tenantContext_, AddWorkspaceRequest::TenantContext) };
    inline AddWorkspaceRequest& setTenantContext(const AddWorkspaceRequest::TenantContext & tenantContext) { DARABONBA_PTR_SET_VALUE(tenantContext_, tenantContext) };
    inline AddWorkspaceRequest& setTenantContext(AddWorkspaceRequest::TenantContext && tenantContext) { DARABONBA_PTR_SET_RVALUE(tenantContext_, tenantContext) };


  protected:
    // This parameter is required.
    shared_ptr<string> name_ {};
    shared_ptr<AddWorkspaceRequest::Option> option_ {};
    shared_ptr<AddWorkspaceRequest::TenantContext> tenantContext_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
