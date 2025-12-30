// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEBIZUNITREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEBIZUNITREQUEST_HPP_
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
  class UpdateBizUnitRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateBizUnitRequest& obj) { 
      DARABONBA_PTR_TO_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_TO_JSON(UpdateCommand, updateCommand_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateBizUnitRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_FROM_JSON(UpdateCommand, updateCommand_);
    };
    UpdateBizUnitRequest() = default ;
    UpdateBizUnitRequest(const UpdateBizUnitRequest &) = default ;
    UpdateBizUnitRequest(UpdateBizUnitRequest &&) = default ;
    UpdateBizUnitRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateBizUnitRequest() = default ;
    UpdateBizUnitRequest& operator=(const UpdateBizUnitRequest &) = default ;
    UpdateBizUnitRequest& operator=(UpdateBizUnitRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class UpdateCommand : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const UpdateCommand& obj) { 
        DARABONBA_PTR_TO_JSON(BizUnitAccountList, bizUnitAccountList_);
        DARABONBA_PTR_TO_JSON(BizUnitId, bizUnitId_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(DisplayName, displayName_);
        DARABONBA_PTR_TO_JSON(Icon, icon_);
        DARABONBA_PTR_TO_JSON(Name, name_);
      };
      friend void from_json(const Darabonba::Json& j, UpdateCommand& obj) { 
        DARABONBA_PTR_FROM_JSON(BizUnitAccountList, bizUnitAccountList_);
        DARABONBA_PTR_FROM_JSON(BizUnitId, bizUnitId_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(DisplayName, displayName_);
        DARABONBA_PTR_FROM_JSON(Icon, icon_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
      };
      UpdateCommand() = default ;
      UpdateCommand(const UpdateCommand &) = default ;
      UpdateCommand(UpdateCommand &&) = default ;
      UpdateCommand(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~UpdateCommand() = default ;
      UpdateCommand& operator=(const UpdateCommand &) = default ;
      UpdateCommand& operator=(UpdateCommand &&) = default ;
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
        && this->bizUnitId_ == nullptr && this->description_ == nullptr && this->displayName_ == nullptr && this->icon_ == nullptr && this->name_ == nullptr; };
      // bizUnitAccountList Field Functions 
      bool hasBizUnitAccountList() const { return this->bizUnitAccountList_ != nullptr;};
      void deleteBizUnitAccountList() { this->bizUnitAccountList_ = nullptr;};
      inline const vector<UpdateCommand::BizUnitAccountList> & getBizUnitAccountList() const { DARABONBA_PTR_GET_CONST(bizUnitAccountList_, vector<UpdateCommand::BizUnitAccountList>) };
      inline vector<UpdateCommand::BizUnitAccountList> getBizUnitAccountList() { DARABONBA_PTR_GET(bizUnitAccountList_, vector<UpdateCommand::BizUnitAccountList>) };
      inline UpdateCommand& setBizUnitAccountList(const vector<UpdateCommand::BizUnitAccountList> & bizUnitAccountList) { DARABONBA_PTR_SET_VALUE(bizUnitAccountList_, bizUnitAccountList) };
      inline UpdateCommand& setBizUnitAccountList(vector<UpdateCommand::BizUnitAccountList> && bizUnitAccountList) { DARABONBA_PTR_SET_RVALUE(bizUnitAccountList_, bizUnitAccountList) };


      // bizUnitId Field Functions 
      bool hasBizUnitId() const { return this->bizUnitId_ != nullptr;};
      void deleteBizUnitId() { this->bizUnitId_ = nullptr;};
      inline int64_t getBizUnitId() const { DARABONBA_PTR_GET_DEFAULT(bizUnitId_, 0L) };
      inline UpdateCommand& setBizUnitId(int64_t bizUnitId) { DARABONBA_PTR_SET_VALUE(bizUnitId_, bizUnitId) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline UpdateCommand& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // displayName Field Functions 
      bool hasDisplayName() const { return this->displayName_ != nullptr;};
      void deleteDisplayName() { this->displayName_ = nullptr;};
      inline string getDisplayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
      inline UpdateCommand& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


      // icon Field Functions 
      bool hasIcon() const { return this->icon_ != nullptr;};
      void deleteIcon() { this->icon_ = nullptr;};
      inline string getIcon() const { DARABONBA_PTR_GET_DEFAULT(icon_, "") };
      inline UpdateCommand& setIcon(string icon) { DARABONBA_PTR_SET_VALUE(icon_, icon) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline UpdateCommand& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    protected:
      // This parameter is required.
      shared_ptr<vector<UpdateCommand::BizUnitAccountList>> bizUnitAccountList_ {};
      // This parameter is required.
      shared_ptr<int64_t> bizUnitId_ {};
      shared_ptr<string> description_ {};
      // This parameter is required.
      shared_ptr<string> displayName_ {};
      // This parameter is required.
      shared_ptr<string> icon_ {};
      // This parameter is required.
      shared_ptr<string> name_ {};
    };

    virtual bool empty() const override { return this->opTenantId_ == nullptr
        && this->updateCommand_ == nullptr; };
    // opTenantId Field Functions 
    bool hasOpTenantId() const { return this->opTenantId_ != nullptr;};
    void deleteOpTenantId() { this->opTenantId_ = nullptr;};
    inline int64_t getOpTenantId() const { DARABONBA_PTR_GET_DEFAULT(opTenantId_, 0L) };
    inline UpdateBizUnitRequest& setOpTenantId(int64_t opTenantId) { DARABONBA_PTR_SET_VALUE(opTenantId_, opTenantId) };


    // updateCommand Field Functions 
    bool hasUpdateCommand() const { return this->updateCommand_ != nullptr;};
    void deleteUpdateCommand() { this->updateCommand_ = nullptr;};
    inline const UpdateBizUnitRequest::UpdateCommand & getUpdateCommand() const { DARABONBA_PTR_GET_CONST(updateCommand_, UpdateBizUnitRequest::UpdateCommand) };
    inline UpdateBizUnitRequest::UpdateCommand getUpdateCommand() { DARABONBA_PTR_GET(updateCommand_, UpdateBizUnitRequest::UpdateCommand) };
    inline UpdateBizUnitRequest& setUpdateCommand(const UpdateBizUnitRequest::UpdateCommand & updateCommand) { DARABONBA_PTR_SET_VALUE(updateCommand_, updateCommand) };
    inline UpdateBizUnitRequest& setUpdateCommand(UpdateBizUnitRequest::UpdateCommand && updateCommand) { DARABONBA_PTR_SET_RVALUE(updateCommand_, updateCommand) };


  protected:
    // This parameter is required.
    shared_ptr<int64_t> opTenantId_ {};
    // This parameter is required.
    shared_ptr<UpdateBizUnitRequest::UpdateCommand> updateCommand_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
