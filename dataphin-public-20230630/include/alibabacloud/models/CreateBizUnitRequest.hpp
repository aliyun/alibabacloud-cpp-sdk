// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEBIZUNITREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEBIZUNITREQUEST_HPP_
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
  class CreateBizUnitRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateBizUnitRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CreateCommand, createCommand_);
      DARABONBA_PTR_TO_JSON(OpTenantId, opTenantId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateBizUnitRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateCommand, createCommand_);
      DARABONBA_PTR_FROM_JSON(OpTenantId, opTenantId_);
    };
    CreateBizUnitRequest() = default ;
    CreateBizUnitRequest(const CreateBizUnitRequest &) = default ;
    CreateBizUnitRequest(CreateBizUnitRequest &&) = default ;
    CreateBizUnitRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateBizUnitRequest() = default ;
    CreateBizUnitRequest& operator=(const CreateBizUnitRequest &) = default ;
    CreateBizUnitRequest& operator=(CreateBizUnitRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class CreateCommand : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const CreateCommand& obj) { 
        DARABONBA_PTR_TO_JSON(BizUnitAccountList, bizUnitAccountList_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(DisplayName, displayName_);
        DARABONBA_PTR_TO_JSON(Icon, icon_);
        DARABONBA_PTR_TO_JSON(Mode, mode_);
        DARABONBA_PTR_TO_JSON(Name, name_);
      };
      friend void from_json(const Darabonba::Json& j, CreateCommand& obj) { 
        DARABONBA_PTR_FROM_JSON(BizUnitAccountList, bizUnitAccountList_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(DisplayName, displayName_);
        DARABONBA_PTR_FROM_JSON(Icon, icon_);
        DARABONBA_PTR_FROM_JSON(Mode, mode_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
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
      class BizUnitAccountList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const BizUnitAccountList& obj) { 
          DARABONBA_PTR_TO_JSON(UserId, userId_);
        };
        friend void from_json(const Darabonba::Json& j, BizUnitAccountList& obj) { 
          DARABONBA_PTR_FROM_JSON(UserId, userId_);
        };
        BizUnitAccountList() = default ;
        BizUnitAccountList(const BizUnitAccountList &) = default ;
        BizUnitAccountList(BizUnitAccountList &&) = default ;
        BizUnitAccountList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~BizUnitAccountList() = default ;
        BizUnitAccountList& operator=(const BizUnitAccountList &) = default ;
        BizUnitAccountList& operator=(BizUnitAccountList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->userId_ == nullptr; };
        // userId Field Functions 
        bool hasUserId() const { return this->userId_ != nullptr;};
        void deleteUserId() { this->userId_ = nullptr;};
        inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
        inline BizUnitAccountList& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


      protected:
        // This parameter is required.
        shared_ptr<string> userId_ {};
      };

      virtual bool empty() const override { return this->bizUnitAccountList_ == nullptr
        && this->description_ == nullptr && this->displayName_ == nullptr && this->icon_ == nullptr && this->mode_ == nullptr && this->name_ == nullptr; };
      // bizUnitAccountList Field Functions 
      bool hasBizUnitAccountList() const { return this->bizUnitAccountList_ != nullptr;};
      void deleteBizUnitAccountList() { this->bizUnitAccountList_ = nullptr;};
      inline const vector<CreateCommand::BizUnitAccountList> & getBizUnitAccountList() const { DARABONBA_PTR_GET_CONST(bizUnitAccountList_, vector<CreateCommand::BizUnitAccountList>) };
      inline vector<CreateCommand::BizUnitAccountList> getBizUnitAccountList() { DARABONBA_PTR_GET(bizUnitAccountList_, vector<CreateCommand::BizUnitAccountList>) };
      inline CreateCommand& setBizUnitAccountList(const vector<CreateCommand::BizUnitAccountList> & bizUnitAccountList) { DARABONBA_PTR_SET_VALUE(bizUnitAccountList_, bizUnitAccountList) };
      inline CreateCommand& setBizUnitAccountList(vector<CreateCommand::BizUnitAccountList> && bizUnitAccountList) { DARABONBA_PTR_SET_RVALUE(bizUnitAccountList_, bizUnitAccountList) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline CreateCommand& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // displayName Field Functions 
      bool hasDisplayName() const { return this->displayName_ != nullptr;};
      void deleteDisplayName() { this->displayName_ = nullptr;};
      inline string getDisplayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
      inline CreateCommand& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


      // icon Field Functions 
      bool hasIcon() const { return this->icon_ != nullptr;};
      void deleteIcon() { this->icon_ = nullptr;};
      inline string getIcon() const { DARABONBA_PTR_GET_DEFAULT(icon_, "") };
      inline CreateCommand& setIcon(string icon) { DARABONBA_PTR_SET_VALUE(icon_, icon) };


      // mode Field Functions 
      bool hasMode() const { return this->mode_ != nullptr;};
      void deleteMode() { this->mode_ = nullptr;};
      inline string getMode() const { DARABONBA_PTR_GET_DEFAULT(mode_, "") };
      inline CreateCommand& setMode(string mode) { DARABONBA_PTR_SET_VALUE(mode_, mode) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline CreateCommand& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    protected:
      // This parameter is required.
      shared_ptr<vector<CreateCommand::BizUnitAccountList>> bizUnitAccountList_ {};
      shared_ptr<string> description_ {};
      // This parameter is required.
      shared_ptr<string> displayName_ {};
      // This parameter is required.
      shared_ptr<string> icon_ {};
      shared_ptr<string> mode_ {};
      // This parameter is required.
      shared_ptr<string> name_ {};
    };

    virtual bool empty() const override { return this->createCommand_ == nullptr
        && this->opTenantId_ == nullptr; };
    // createCommand Field Functions 
    bool hasCreateCommand() const { return this->createCommand_ != nullptr;};
    void deleteCreateCommand() { this->createCommand_ = nullptr;};
    inline const CreateBizUnitRequest::CreateCommand & getCreateCommand() const { DARABONBA_PTR_GET_CONST(createCommand_, CreateBizUnitRequest::CreateCommand) };
    inline CreateBizUnitRequest::CreateCommand getCreateCommand() { DARABONBA_PTR_GET(createCommand_, CreateBizUnitRequest::CreateCommand) };
    inline CreateBizUnitRequest& setCreateCommand(const CreateBizUnitRequest::CreateCommand & createCommand) { DARABONBA_PTR_SET_VALUE(createCommand_, createCommand) };
    inline CreateBizUnitRequest& setCreateCommand(CreateBizUnitRequest::CreateCommand && createCommand) { DARABONBA_PTR_SET_RVALUE(createCommand_, createCommand) };


    // opTenantId Field Functions 
    bool hasOpTenantId() const { return this->opTenantId_ != nullptr;};
    void deleteOpTenantId() { this->opTenantId_ = nullptr;};
    inline int64_t getOpTenantId() const { DARABONBA_PTR_GET_DEFAULT(opTenantId_, 0L) };
    inline CreateBizUnitRequest& setOpTenantId(int64_t opTenantId) { DARABONBA_PTR_SET_VALUE(opTenantId_, opTenantId) };


  protected:
    // This parameter is required.
    shared_ptr<CreateBizUnitRequest::CreateCommand> createCommand_ {};
    // This parameter is required.
    shared_ptr<int64_t> opTenantId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
