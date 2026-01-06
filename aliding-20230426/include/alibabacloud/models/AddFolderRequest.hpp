// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDFOLDERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ADDFOLDERREQUEST_HPP_
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
  class AddFolderRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddFolderRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Option, option_);
      DARABONBA_PTR_TO_JSON(ParentId, parentId_);
      DARABONBA_PTR_TO_JSON(SpaceId, spaceId_);
      DARABONBA_PTR_TO_JSON(TenantContext, tenantContext_);
    };
    friend void from_json(const Darabonba::Json& j, AddFolderRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Option, option_);
      DARABONBA_PTR_FROM_JSON(ParentId, parentId_);
      DARABONBA_PTR_FROM_JSON(SpaceId, spaceId_);
      DARABONBA_PTR_FROM_JSON(TenantContext, tenantContext_);
    };
    AddFolderRequest() = default ;
    AddFolderRequest(const AddFolderRequest &) = default ;
    AddFolderRequest(AddFolderRequest &&) = default ;
    AddFolderRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddFolderRequest() = default ;
    AddFolderRequest& operator=(const AddFolderRequest &) = default ;
    AddFolderRequest& operator=(AddFolderRequest &&) = default ;
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
        DARABONBA_PTR_TO_JSON(AppProperties, appProperties_);
        DARABONBA_PTR_TO_JSON(ConflictStrategy, conflictStrategy_);
      };
      friend void from_json(const Darabonba::Json& j, Option& obj) { 
        DARABONBA_PTR_FROM_JSON(AppProperties, appProperties_);
        DARABONBA_PTR_FROM_JSON(ConflictStrategy, conflictStrategy_);
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
      class AppProperties : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const AppProperties& obj) { 
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(Value, value_);
          DARABONBA_PTR_TO_JSON(Visibility, visibility_);
        };
        friend void from_json(const Darabonba::Json& j, AppProperties& obj) { 
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(Value, value_);
          DARABONBA_PTR_FROM_JSON(Visibility, visibility_);
        };
        AppProperties() = default ;
        AppProperties(const AppProperties &) = default ;
        AppProperties(AppProperties &&) = default ;
        AppProperties(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~AppProperties() = default ;
        AppProperties& operator=(const AppProperties &) = default ;
        AppProperties& operator=(AppProperties &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->name_ == nullptr
        && this->value_ == nullptr && this->visibility_ == nullptr; };
        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline AppProperties& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // value Field Functions 
        bool hasValue() const { return this->value_ != nullptr;};
        void deleteValue() { this->value_ = nullptr;};
        inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
        inline AppProperties& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


        // visibility Field Functions 
        bool hasVisibility() const { return this->visibility_ != nullptr;};
        void deleteVisibility() { this->visibility_ = nullptr;};
        inline string getVisibility() const { DARABONBA_PTR_GET_DEFAULT(visibility_, "") };
        inline AppProperties& setVisibility(string visibility) { DARABONBA_PTR_SET_VALUE(visibility_, visibility) };


      protected:
        // This parameter is required.
        shared_ptr<string> name_ {};
        // This parameter is required.
        shared_ptr<string> value_ {};
        // This parameter is required.
        shared_ptr<string> visibility_ {};
      };

      virtual bool empty() const override { return this->appProperties_ == nullptr
        && this->conflictStrategy_ == nullptr; };
      // appProperties Field Functions 
      bool hasAppProperties() const { return this->appProperties_ != nullptr;};
      void deleteAppProperties() { this->appProperties_ = nullptr;};
      inline const vector<Option::AppProperties> & getAppProperties() const { DARABONBA_PTR_GET_CONST(appProperties_, vector<Option::AppProperties>) };
      inline vector<Option::AppProperties> getAppProperties() { DARABONBA_PTR_GET(appProperties_, vector<Option::AppProperties>) };
      inline Option& setAppProperties(const vector<Option::AppProperties> & appProperties) { DARABONBA_PTR_SET_VALUE(appProperties_, appProperties) };
      inline Option& setAppProperties(vector<Option::AppProperties> && appProperties) { DARABONBA_PTR_SET_RVALUE(appProperties_, appProperties) };


      // conflictStrategy Field Functions 
      bool hasConflictStrategy() const { return this->conflictStrategy_ != nullptr;};
      void deleteConflictStrategy() { this->conflictStrategy_ = nullptr;};
      inline string getConflictStrategy() const { DARABONBA_PTR_GET_DEFAULT(conflictStrategy_, "") };
      inline Option& setConflictStrategy(string conflictStrategy) { DARABONBA_PTR_SET_VALUE(conflictStrategy_, conflictStrategy) };


    protected:
      shared_ptr<vector<Option::AppProperties>> appProperties_ {};
      shared_ptr<string> conflictStrategy_ {};
    };

    virtual bool empty() const override { return this->name_ == nullptr
        && this->option_ == nullptr && this->parentId_ == nullptr && this->spaceId_ == nullptr && this->tenantContext_ == nullptr; };
    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline AddFolderRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // option Field Functions 
    bool hasOption() const { return this->option_ != nullptr;};
    void deleteOption() { this->option_ = nullptr;};
    inline const AddFolderRequest::Option & getOption() const { DARABONBA_PTR_GET_CONST(option_, AddFolderRequest::Option) };
    inline AddFolderRequest::Option getOption() { DARABONBA_PTR_GET(option_, AddFolderRequest::Option) };
    inline AddFolderRequest& setOption(const AddFolderRequest::Option & option) { DARABONBA_PTR_SET_VALUE(option_, option) };
    inline AddFolderRequest& setOption(AddFolderRequest::Option && option) { DARABONBA_PTR_SET_RVALUE(option_, option) };


    // parentId Field Functions 
    bool hasParentId() const { return this->parentId_ != nullptr;};
    void deleteParentId() { this->parentId_ = nullptr;};
    inline string getParentId() const { DARABONBA_PTR_GET_DEFAULT(parentId_, "") };
    inline AddFolderRequest& setParentId(string parentId) { DARABONBA_PTR_SET_VALUE(parentId_, parentId) };


    // spaceId Field Functions 
    bool hasSpaceId() const { return this->spaceId_ != nullptr;};
    void deleteSpaceId() { this->spaceId_ = nullptr;};
    inline string getSpaceId() const { DARABONBA_PTR_GET_DEFAULT(spaceId_, "") };
    inline AddFolderRequest& setSpaceId(string spaceId) { DARABONBA_PTR_SET_VALUE(spaceId_, spaceId) };


    // tenantContext Field Functions 
    bool hasTenantContext() const { return this->tenantContext_ != nullptr;};
    void deleteTenantContext() { this->tenantContext_ = nullptr;};
    inline const AddFolderRequest::TenantContext & getTenantContext() const { DARABONBA_PTR_GET_CONST(tenantContext_, AddFolderRequest::TenantContext) };
    inline AddFolderRequest::TenantContext getTenantContext() { DARABONBA_PTR_GET(tenantContext_, AddFolderRequest::TenantContext) };
    inline AddFolderRequest& setTenantContext(const AddFolderRequest::TenantContext & tenantContext) { DARABONBA_PTR_SET_VALUE(tenantContext_, tenantContext) };
    inline AddFolderRequest& setTenantContext(AddFolderRequest::TenantContext && tenantContext) { DARABONBA_PTR_SET_RVALUE(tenantContext_, tenantContext) };


  protected:
    // This parameter is required.
    shared_ptr<string> name_ {};
    shared_ptr<AddFolderRequest::Option> option_ {};
    // This parameter is required.
    shared_ptr<string> parentId_ {};
    // This parameter is required.
    shared_ptr<string> spaceId_ {};
    shared_ptr<AddFolderRequest::TenantContext> tenantContext_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
