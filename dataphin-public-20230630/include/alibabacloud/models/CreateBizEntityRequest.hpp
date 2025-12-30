// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEBIZENTITYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEBIZENTITYREQUEST_HPP_
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
  class CreateBizEntityRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateBizEntityRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CreateCommand, createCommand_);
      DARABONBA_PTR_TO_JSON(OpTenantId, opTenantId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateBizEntityRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateCommand, createCommand_);
      DARABONBA_PTR_FROM_JSON(OpTenantId, opTenantId_);
    };
    CreateBizEntityRequest() = default ;
    CreateBizEntityRequest(const CreateBizEntityRequest &) = default ;
    CreateBizEntityRequest(CreateBizEntityRequest &&) = default ;
    CreateBizEntityRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateBizEntityRequest() = default ;
    CreateBizEntityRequest& operator=(const CreateBizEntityRequest &) = default ;
    CreateBizEntityRequest& operator=(CreateBizEntityRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class CreateCommand : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const CreateCommand& obj) { 
        DARABONBA_PTR_TO_JSON(BizObject, bizObject_);
        DARABONBA_PTR_TO_JSON(BizProcess, bizProcess_);
        DARABONBA_PTR_TO_JSON(BizUnitId, bizUnitId_);
        DARABONBA_PTR_TO_JSON(DataDomainId, dataDomainId_);
        DARABONBA_PTR_TO_JSON(Type, type_);
      };
      friend void from_json(const Darabonba::Json& j, CreateCommand& obj) { 
        DARABONBA_PTR_FROM_JSON(BizObject, bizObject_);
        DARABONBA_PTR_FROM_JSON(BizProcess, bizProcess_);
        DARABONBA_PTR_FROM_JSON(BizUnitId, bizUnitId_);
        DARABONBA_PTR_FROM_JSON(DataDomainId, dataDomainId_);
        DARABONBA_PTR_FROM_JSON(Type, type_);
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
      class BizProcess : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const BizProcess& obj) { 
          DARABONBA_PTR_TO_JSON(BizEventEntityIdList, bizEventEntityIdList_);
          DARABONBA_PTR_TO_JSON(Description, description_);
          DARABONBA_PTR_TO_JSON(DisplayName, displayName_);
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(OwnerUserId, ownerUserId_);
          DARABONBA_PTR_TO_JSON(PreBizProcessIdList, preBizProcessIdList_);
          DARABONBA_PTR_TO_JSON(RefBizEntityIdList, refBizEntityIdList_);
          DARABONBA_PTR_TO_JSON(Type, type_);
        };
        friend void from_json(const Darabonba::Json& j, BizProcess& obj) { 
          DARABONBA_PTR_FROM_JSON(BizEventEntityIdList, bizEventEntityIdList_);
          DARABONBA_PTR_FROM_JSON(Description, description_);
          DARABONBA_PTR_FROM_JSON(DisplayName, displayName_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(OwnerUserId, ownerUserId_);
          DARABONBA_PTR_FROM_JSON(PreBizProcessIdList, preBizProcessIdList_);
          DARABONBA_PTR_FROM_JSON(RefBizEntityIdList, refBizEntityIdList_);
          DARABONBA_PTR_FROM_JSON(Type, type_);
        };
        BizProcess() = default ;
        BizProcess(const BizProcess &) = default ;
        BizProcess(BizProcess &&) = default ;
        BizProcess(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~BizProcess() = default ;
        BizProcess& operator=(const BizProcess &) = default ;
        BizProcess& operator=(BizProcess &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->bizEventEntityIdList_ == nullptr
        && this->description_ == nullptr && this->displayName_ == nullptr && this->name_ == nullptr && this->ownerUserId_ == nullptr && this->preBizProcessIdList_ == nullptr
        && this->refBizEntityIdList_ == nullptr && this->type_ == nullptr; };
        // bizEventEntityIdList Field Functions 
        bool hasBizEventEntityIdList() const { return this->bizEventEntityIdList_ != nullptr;};
        void deleteBizEventEntityIdList() { this->bizEventEntityIdList_ = nullptr;};
        inline const vector<int64_t> & getBizEventEntityIdList() const { DARABONBA_PTR_GET_CONST(bizEventEntityIdList_, vector<int64_t>) };
        inline vector<int64_t> getBizEventEntityIdList() { DARABONBA_PTR_GET(bizEventEntityIdList_, vector<int64_t>) };
        inline BizProcess& setBizEventEntityIdList(const vector<int64_t> & bizEventEntityIdList) { DARABONBA_PTR_SET_VALUE(bizEventEntityIdList_, bizEventEntityIdList) };
        inline BizProcess& setBizEventEntityIdList(vector<int64_t> && bizEventEntityIdList) { DARABONBA_PTR_SET_RVALUE(bizEventEntityIdList_, bizEventEntityIdList) };


        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline BizProcess& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // displayName Field Functions 
        bool hasDisplayName() const { return this->displayName_ != nullptr;};
        void deleteDisplayName() { this->displayName_ = nullptr;};
        inline string getDisplayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
        inline BizProcess& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline BizProcess& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // ownerUserId Field Functions 
        bool hasOwnerUserId() const { return this->ownerUserId_ != nullptr;};
        void deleteOwnerUserId() { this->ownerUserId_ = nullptr;};
        inline string getOwnerUserId() const { DARABONBA_PTR_GET_DEFAULT(ownerUserId_, "") };
        inline BizProcess& setOwnerUserId(string ownerUserId) { DARABONBA_PTR_SET_VALUE(ownerUserId_, ownerUserId) };


        // preBizProcessIdList Field Functions 
        bool hasPreBizProcessIdList() const { return this->preBizProcessIdList_ != nullptr;};
        void deletePreBizProcessIdList() { this->preBizProcessIdList_ = nullptr;};
        inline const vector<int64_t> & getPreBizProcessIdList() const { DARABONBA_PTR_GET_CONST(preBizProcessIdList_, vector<int64_t>) };
        inline vector<int64_t> getPreBizProcessIdList() { DARABONBA_PTR_GET(preBizProcessIdList_, vector<int64_t>) };
        inline BizProcess& setPreBizProcessIdList(const vector<int64_t> & preBizProcessIdList) { DARABONBA_PTR_SET_VALUE(preBizProcessIdList_, preBizProcessIdList) };
        inline BizProcess& setPreBizProcessIdList(vector<int64_t> && preBizProcessIdList) { DARABONBA_PTR_SET_RVALUE(preBizProcessIdList_, preBizProcessIdList) };


        // refBizEntityIdList Field Functions 
        bool hasRefBizEntityIdList() const { return this->refBizEntityIdList_ != nullptr;};
        void deleteRefBizEntityIdList() { this->refBizEntityIdList_ = nullptr;};
        inline const vector<int64_t> & getRefBizEntityIdList() const { DARABONBA_PTR_GET_CONST(refBizEntityIdList_, vector<int64_t>) };
        inline vector<int64_t> getRefBizEntityIdList() { DARABONBA_PTR_GET(refBizEntityIdList_, vector<int64_t>) };
        inline BizProcess& setRefBizEntityIdList(const vector<int64_t> & refBizEntityIdList) { DARABONBA_PTR_SET_VALUE(refBizEntityIdList_, refBizEntityIdList) };
        inline BizProcess& setRefBizEntityIdList(vector<int64_t> && refBizEntityIdList) { DARABONBA_PTR_SET_RVALUE(refBizEntityIdList_, refBizEntityIdList) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline BizProcess& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      protected:
        shared_ptr<vector<int64_t>> bizEventEntityIdList_ {};
        shared_ptr<string> description_ {};
        // This parameter is required.
        shared_ptr<string> displayName_ {};
        // This parameter is required.
        shared_ptr<string> name_ {};
        shared_ptr<string> ownerUserId_ {};
        shared_ptr<vector<int64_t>> preBizProcessIdList_ {};
        shared_ptr<vector<int64_t>> refBizEntityIdList_ {};
        // This parameter is required.
        shared_ptr<string> type_ {};
      };

      class BizObject : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const BizObject& obj) { 
          DARABONBA_PTR_TO_JSON(Description, description_);
          DARABONBA_PTR_TO_JSON(DisplayName, displayName_);
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(OwnerUserId, ownerUserId_);
          DARABONBA_PTR_TO_JSON(ParentId, parentId_);
          DARABONBA_PTR_TO_JSON(RefBizEntityIdList, refBizEntityIdList_);
          DARABONBA_PTR_TO_JSON(Type, type_);
        };
        friend void from_json(const Darabonba::Json& j, BizObject& obj) { 
          DARABONBA_PTR_FROM_JSON(Description, description_);
          DARABONBA_PTR_FROM_JSON(DisplayName, displayName_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(OwnerUserId, ownerUserId_);
          DARABONBA_PTR_FROM_JSON(ParentId, parentId_);
          DARABONBA_PTR_FROM_JSON(RefBizEntityIdList, refBizEntityIdList_);
          DARABONBA_PTR_FROM_JSON(Type, type_);
        };
        BizObject() = default ;
        BizObject(const BizObject &) = default ;
        BizObject(BizObject &&) = default ;
        BizObject(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~BizObject() = default ;
        BizObject& operator=(const BizObject &) = default ;
        BizObject& operator=(BizObject &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->description_ == nullptr
        && this->displayName_ == nullptr && this->name_ == nullptr && this->ownerUserId_ == nullptr && this->parentId_ == nullptr && this->refBizEntityIdList_ == nullptr
        && this->type_ == nullptr; };
        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline BizObject& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // displayName Field Functions 
        bool hasDisplayName() const { return this->displayName_ != nullptr;};
        void deleteDisplayName() { this->displayName_ = nullptr;};
        inline string getDisplayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
        inline BizObject& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline BizObject& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // ownerUserId Field Functions 
        bool hasOwnerUserId() const { return this->ownerUserId_ != nullptr;};
        void deleteOwnerUserId() { this->ownerUserId_ = nullptr;};
        inline string getOwnerUserId() const { DARABONBA_PTR_GET_DEFAULT(ownerUserId_, "") };
        inline BizObject& setOwnerUserId(string ownerUserId) { DARABONBA_PTR_SET_VALUE(ownerUserId_, ownerUserId) };


        // parentId Field Functions 
        bool hasParentId() const { return this->parentId_ != nullptr;};
        void deleteParentId() { this->parentId_ = nullptr;};
        inline int64_t getParentId() const { DARABONBA_PTR_GET_DEFAULT(parentId_, 0L) };
        inline BizObject& setParentId(int64_t parentId) { DARABONBA_PTR_SET_VALUE(parentId_, parentId) };


        // refBizEntityIdList Field Functions 
        bool hasRefBizEntityIdList() const { return this->refBizEntityIdList_ != nullptr;};
        void deleteRefBizEntityIdList() { this->refBizEntityIdList_ = nullptr;};
        inline const vector<int64_t> & getRefBizEntityIdList() const { DARABONBA_PTR_GET_CONST(refBizEntityIdList_, vector<int64_t>) };
        inline vector<int64_t> getRefBizEntityIdList() { DARABONBA_PTR_GET(refBizEntityIdList_, vector<int64_t>) };
        inline BizObject& setRefBizEntityIdList(const vector<int64_t> & refBizEntityIdList) { DARABONBA_PTR_SET_VALUE(refBizEntityIdList_, refBizEntityIdList) };
        inline BizObject& setRefBizEntityIdList(vector<int64_t> && refBizEntityIdList) { DARABONBA_PTR_SET_RVALUE(refBizEntityIdList_, refBizEntityIdList) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline BizObject& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      protected:
        shared_ptr<string> description_ {};
        // This parameter is required.
        shared_ptr<string> displayName_ {};
        // This parameter is required.
        shared_ptr<string> name_ {};
        shared_ptr<string> ownerUserId_ {};
        shared_ptr<int64_t> parentId_ {};
        shared_ptr<vector<int64_t>> refBizEntityIdList_ {};
        // This parameter is required.
        shared_ptr<string> type_ {};
      };

      virtual bool empty() const override { return this->bizObject_ == nullptr
        && this->bizProcess_ == nullptr && this->bizUnitId_ == nullptr && this->dataDomainId_ == nullptr && this->type_ == nullptr; };
      // bizObject Field Functions 
      bool hasBizObject() const { return this->bizObject_ != nullptr;};
      void deleteBizObject() { this->bizObject_ = nullptr;};
      inline const CreateCommand::BizObject & getBizObject() const { DARABONBA_PTR_GET_CONST(bizObject_, CreateCommand::BizObject) };
      inline CreateCommand::BizObject getBizObject() { DARABONBA_PTR_GET(bizObject_, CreateCommand::BizObject) };
      inline CreateCommand& setBizObject(const CreateCommand::BizObject & bizObject) { DARABONBA_PTR_SET_VALUE(bizObject_, bizObject) };
      inline CreateCommand& setBizObject(CreateCommand::BizObject && bizObject) { DARABONBA_PTR_SET_RVALUE(bizObject_, bizObject) };


      // bizProcess Field Functions 
      bool hasBizProcess() const { return this->bizProcess_ != nullptr;};
      void deleteBizProcess() { this->bizProcess_ = nullptr;};
      inline const CreateCommand::BizProcess & getBizProcess() const { DARABONBA_PTR_GET_CONST(bizProcess_, CreateCommand::BizProcess) };
      inline CreateCommand::BizProcess getBizProcess() { DARABONBA_PTR_GET(bizProcess_, CreateCommand::BizProcess) };
      inline CreateCommand& setBizProcess(const CreateCommand::BizProcess & bizProcess) { DARABONBA_PTR_SET_VALUE(bizProcess_, bizProcess) };
      inline CreateCommand& setBizProcess(CreateCommand::BizProcess && bizProcess) { DARABONBA_PTR_SET_RVALUE(bizProcess_, bizProcess) };


      // bizUnitId Field Functions 
      bool hasBizUnitId() const { return this->bizUnitId_ != nullptr;};
      void deleteBizUnitId() { this->bizUnitId_ = nullptr;};
      inline int64_t getBizUnitId() const { DARABONBA_PTR_GET_DEFAULT(bizUnitId_, 0L) };
      inline CreateCommand& setBizUnitId(int64_t bizUnitId) { DARABONBA_PTR_SET_VALUE(bizUnitId_, bizUnitId) };


      // dataDomainId Field Functions 
      bool hasDataDomainId() const { return this->dataDomainId_ != nullptr;};
      void deleteDataDomainId() { this->dataDomainId_ = nullptr;};
      inline int64_t getDataDomainId() const { DARABONBA_PTR_GET_DEFAULT(dataDomainId_, 0L) };
      inline CreateCommand& setDataDomainId(int64_t dataDomainId) { DARABONBA_PTR_SET_VALUE(dataDomainId_, dataDomainId) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline CreateCommand& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    protected:
      shared_ptr<CreateCommand::BizObject> bizObject_ {};
      shared_ptr<CreateCommand::BizProcess> bizProcess_ {};
      // This parameter is required.
      shared_ptr<int64_t> bizUnitId_ {};
      // This parameter is required.
      shared_ptr<int64_t> dataDomainId_ {};
      // This parameter is required.
      shared_ptr<string> type_ {};
    };

    virtual bool empty() const override { return this->createCommand_ == nullptr
        && this->opTenantId_ == nullptr; };
    // createCommand Field Functions 
    bool hasCreateCommand() const { return this->createCommand_ != nullptr;};
    void deleteCreateCommand() { this->createCommand_ = nullptr;};
    inline const CreateBizEntityRequest::CreateCommand & getCreateCommand() const { DARABONBA_PTR_GET_CONST(createCommand_, CreateBizEntityRequest::CreateCommand) };
    inline CreateBizEntityRequest::CreateCommand getCreateCommand() { DARABONBA_PTR_GET(createCommand_, CreateBizEntityRequest::CreateCommand) };
    inline CreateBizEntityRequest& setCreateCommand(const CreateBizEntityRequest::CreateCommand & createCommand) { DARABONBA_PTR_SET_VALUE(createCommand_, createCommand) };
    inline CreateBizEntityRequest& setCreateCommand(CreateBizEntityRequest::CreateCommand && createCommand) { DARABONBA_PTR_SET_RVALUE(createCommand_, createCommand) };


    // opTenantId Field Functions 
    bool hasOpTenantId() const { return this->opTenantId_ != nullptr;};
    void deleteOpTenantId() { this->opTenantId_ = nullptr;};
    inline int64_t getOpTenantId() const { DARABONBA_PTR_GET_DEFAULT(opTenantId_, 0L) };
    inline CreateBizEntityRequest& setOpTenantId(int64_t opTenantId) { DARABONBA_PTR_SET_VALUE(opTenantId_, opTenantId) };


  protected:
    // This parameter is required.
    shared_ptr<CreateBizEntityRequest::CreateCommand> createCommand_ {};
    // This parameter is required.
    shared_ptr<int64_t> opTenantId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
