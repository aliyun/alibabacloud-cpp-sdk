// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESECURITYCLASSIFYCATALOGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATESECURITYCLASSIFYCATALOGREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class CreateSecurityClassifyCatalogRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateSecurityClassifyCatalogRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CreateCommand, createCommand_);
      DARABONBA_PTR_TO_JSON(OpTenantId, opTenantId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateSecurityClassifyCatalogRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateCommand, createCommand_);
      DARABONBA_PTR_FROM_JSON(OpTenantId, opTenantId_);
    };
    CreateSecurityClassifyCatalogRequest() = default ;
    CreateSecurityClassifyCatalogRequest(const CreateSecurityClassifyCatalogRequest &) = default ;
    CreateSecurityClassifyCatalogRequest(CreateSecurityClassifyCatalogRequest &&) = default ;
    CreateSecurityClassifyCatalogRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateSecurityClassifyCatalogRequest() = default ;
    CreateSecurityClassifyCatalogRequest& operator=(const CreateSecurityClassifyCatalogRequest &) = default ;
    CreateSecurityClassifyCatalogRequest& operator=(CreateSecurityClassifyCatalogRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class CreateCommand : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const CreateCommand& obj) { 
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(OwnerList, ownerList_);
        DARABONBA_PTR_TO_JSON(ParentPath, parentPath_);
        DARABONBA_PTR_TO_JSON(VisibleType, visibleType_);
      };
      friend void from_json(const Darabonba::Json& j, CreateCommand& obj) { 
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(OwnerList, ownerList_);
        DARABONBA_PTR_FROM_JSON(ParentPath, parentPath_);
        DARABONBA_PTR_FROM_JSON(VisibleType, visibleType_);
      };
      CreateCommand() = default ;
      CreateCommand(const CreateCommand &) = default ;
      CreateCommand(CreateCommand &&) = default ;
      CreateCommand(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~CreateCommand() = default ;
      CreateCommand& operator=(const CreateCommand &) = default ;
      CreateCommand& operator=(CreateCommand &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->name_ == nullptr
        && this->ownerList_ == nullptr && this->parentPath_ == nullptr && this->visibleType_ == nullptr; };
      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline CreateCommand& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // ownerList Field Functions 
      bool hasOwnerList() const { return this->ownerList_ != nullptr;};
      void deleteOwnerList() { this->ownerList_ = nullptr;};
      inline const vector<string> & getOwnerList() const { DARABONBA_PTR_GET_CONST(ownerList_, vector<string>) };
      inline vector<string> getOwnerList() { DARABONBA_PTR_GET(ownerList_, vector<string>) };
      inline CreateCommand& setOwnerList(const vector<string> & ownerList) { DARABONBA_PTR_SET_VALUE(ownerList_, ownerList) };
      inline CreateCommand& setOwnerList(vector<string> && ownerList) { DARABONBA_PTR_SET_RVALUE(ownerList_, ownerList) };


      // parentPath Field Functions 
      bool hasParentPath() const { return this->parentPath_ != nullptr;};
      void deleteParentPath() { this->parentPath_ = nullptr;};
      inline string getParentPath() const { DARABONBA_PTR_GET_DEFAULT(parentPath_, "") };
      inline CreateCommand& setParentPath(string parentPath) { DARABONBA_PTR_SET_VALUE(parentPath_, parentPath) };


      // visibleType Field Functions 
      bool hasVisibleType() const { return this->visibleType_ != nullptr;};
      void deleteVisibleType() { this->visibleType_ = nullptr;};
      inline string getVisibleType() const { DARABONBA_PTR_GET_DEFAULT(visibleType_, "") };
      inline CreateCommand& setVisibleType(string visibleType) { DARABONBA_PTR_SET_VALUE(visibleType_, visibleType) };


    protected:
      // This parameter is required.
      shared_ptr<string> name_ {};
      shared_ptr<vector<string>> ownerList_ {};
      shared_ptr<string> parentPath_ {};
      shared_ptr<string> visibleType_ {};
    };

    virtual bool empty() const override { return this->createCommand_ == nullptr
        && this->opTenantId_ == nullptr; };
    // createCommand Field Functions 
    bool hasCreateCommand() const { return this->createCommand_ != nullptr;};
    void deleteCreateCommand() { this->createCommand_ = nullptr;};
    inline const CreateSecurityClassifyCatalogRequest::CreateCommand & getCreateCommand() const { DARABONBA_PTR_GET_CONST(createCommand_, CreateSecurityClassifyCatalogRequest::CreateCommand) };
    inline CreateSecurityClassifyCatalogRequest::CreateCommand getCreateCommand() { DARABONBA_PTR_GET(createCommand_, CreateSecurityClassifyCatalogRequest::CreateCommand) };
    inline CreateSecurityClassifyCatalogRequest& setCreateCommand(const CreateSecurityClassifyCatalogRequest::CreateCommand & createCommand) { DARABONBA_PTR_SET_VALUE(createCommand_, createCommand) };
    inline CreateSecurityClassifyCatalogRequest& setCreateCommand(CreateSecurityClassifyCatalogRequest::CreateCommand && createCommand) { DARABONBA_PTR_SET_RVALUE(createCommand_, createCommand) };


    // opTenantId Field Functions 
    bool hasOpTenantId() const { return this->opTenantId_ != nullptr;};
    void deleteOpTenantId() { this->opTenantId_ = nullptr;};
    inline int64_t getOpTenantId() const { DARABONBA_PTR_GET_DEFAULT(opTenantId_, 0L) };
    inline CreateSecurityClassifyCatalogRequest& setOpTenantId(int64_t opTenantId) { DARABONBA_PTR_SET_VALUE(opTenantId_, opTenantId) };


  protected:
    // This parameter is required.
    shared_ptr<CreateSecurityClassifyCatalogRequest::CreateCommand> createCommand_ {};
    // This parameter is required.
    shared_ptr<int64_t> opTenantId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
