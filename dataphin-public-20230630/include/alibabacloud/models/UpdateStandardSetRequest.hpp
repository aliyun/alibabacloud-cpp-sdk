// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATESTANDARDSETREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATESTANDARDSETREQUEST_HPP_
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
  class UpdateStandardSetRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateStandardSetRequest& obj) { 
      DARABONBA_PTR_TO_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_TO_JSON(UpdateCommand, updateCommand_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateStandardSetRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_FROM_JSON(UpdateCommand, updateCommand_);
    };
    UpdateStandardSetRequest() = default ;
    UpdateStandardSetRequest(const UpdateStandardSetRequest &) = default ;
    UpdateStandardSetRequest(UpdateStandardSetRequest &&) = default ;
    UpdateStandardSetRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateStandardSetRequest() = default ;
    UpdateStandardSetRequest& operator=(const UpdateStandardSetRequest &) = default ;
    UpdateStandardSetRequest& operator=(UpdateStandardSetRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class UpdateCommand : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const UpdateCommand& obj) { 
        DARABONBA_PTR_TO_JSON(ApprovalConfig, approvalConfig_);
        DARABONBA_PTR_TO_JSON(Code, code_);
        DARABONBA_PTR_TO_JSON(DefaultStandardTemplateId, defaultStandardTemplateId_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(DirectoryReference, directoryReference_);
        DARABONBA_PTR_TO_JSON(MaintainerList, maintainerList_);
        DARABONBA_PTR_TO_JSON(MemberGroupList, memberGroupList_);
        DARABONBA_PTR_TO_JSON(MemberList, memberList_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(OfflineApprovalConfig, offlineApprovalConfig_);
        DARABONBA_PTR_TO_JSON(StandardSetId, standardSetId_);
        DARABONBA_PTR_TO_JSON(VisibilityConfig, visibilityConfig_);
      };
      friend void from_json(const Darabonba::Json& j, UpdateCommand& obj) { 
        DARABONBA_PTR_FROM_JSON(ApprovalConfig, approvalConfig_);
        DARABONBA_PTR_FROM_JSON(Code, code_);
        DARABONBA_PTR_FROM_JSON(DefaultStandardTemplateId, defaultStandardTemplateId_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(DirectoryReference, directoryReference_);
        DARABONBA_PTR_FROM_JSON(MaintainerList, maintainerList_);
        DARABONBA_PTR_FROM_JSON(MemberGroupList, memberGroupList_);
        DARABONBA_PTR_FROM_JSON(MemberList, memberList_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(OfflineApprovalConfig, offlineApprovalConfig_);
        DARABONBA_PTR_FROM_JSON(StandardSetId, standardSetId_);
        DARABONBA_PTR_FROM_JSON(VisibilityConfig, visibilityConfig_);
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
      class VisibilityConfig : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const VisibilityConfig& obj) { 
          DARABONBA_PTR_TO_JSON(SpecifiedUserList, specifiedUserList_);
          DARABONBA_PTR_TO_JSON(Type, type_);
        };
        friend void from_json(const Darabonba::Json& j, VisibilityConfig& obj) { 
          DARABONBA_PTR_FROM_JSON(SpecifiedUserList, specifiedUserList_);
          DARABONBA_PTR_FROM_JSON(Type, type_);
        };
        VisibilityConfig() = default ;
        VisibilityConfig(const VisibilityConfig &) = default ;
        VisibilityConfig(VisibilityConfig &&) = default ;
        VisibilityConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~VisibilityConfig() = default ;
        VisibilityConfig& operator=(const VisibilityConfig &) = default ;
        VisibilityConfig& operator=(VisibilityConfig &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->specifiedUserList_ == nullptr
        && this->type_ == nullptr; };
        // specifiedUserList Field Functions 
        bool hasSpecifiedUserList() const { return this->specifiedUserList_ != nullptr;};
        void deleteSpecifiedUserList() { this->specifiedUserList_ = nullptr;};
        inline const vector<string> & getSpecifiedUserList() const { DARABONBA_PTR_GET_CONST(specifiedUserList_, vector<string>) };
        inline vector<string> getSpecifiedUserList() { DARABONBA_PTR_GET(specifiedUserList_, vector<string>) };
        inline VisibilityConfig& setSpecifiedUserList(const vector<string> & specifiedUserList) { DARABONBA_PTR_SET_VALUE(specifiedUserList_, specifiedUserList) };
        inline VisibilityConfig& setSpecifiedUserList(vector<string> && specifiedUserList) { DARABONBA_PTR_SET_RVALUE(specifiedUserList_, specifiedUserList) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline VisibilityConfig& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      protected:
        shared_ptr<vector<string>> specifiedUserList_ {};
        // This parameter is required.
        shared_ptr<string> type_ {};
      };

      class OfflineApprovalConfig : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const OfflineApprovalConfig& obj) { 
          DARABONBA_PTR_TO_JSON(ApprovalType, approvalType_);
          DARABONBA_PTR_TO_JSON(EnableApproval, enableApproval_);
          DARABONBA_PTR_TO_JSON(IsSubmitInBatch, isSubmitInBatch_);
          DARABONBA_PTR_TO_JSON(TemplateId, templateId_);
        };
        friend void from_json(const Darabonba::Json& j, OfflineApprovalConfig& obj) { 
          DARABONBA_PTR_FROM_JSON(ApprovalType, approvalType_);
          DARABONBA_PTR_FROM_JSON(EnableApproval, enableApproval_);
          DARABONBA_PTR_FROM_JSON(IsSubmitInBatch, isSubmitInBatch_);
          DARABONBA_PTR_FROM_JSON(TemplateId, templateId_);
        };
        OfflineApprovalConfig() = default ;
        OfflineApprovalConfig(const OfflineApprovalConfig &) = default ;
        OfflineApprovalConfig(OfflineApprovalConfig &&) = default ;
        OfflineApprovalConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~OfflineApprovalConfig() = default ;
        OfflineApprovalConfig& operator=(const OfflineApprovalConfig &) = default ;
        OfflineApprovalConfig& operator=(OfflineApprovalConfig &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->approvalType_ == nullptr
        && this->enableApproval_ == nullptr && this->isSubmitInBatch_ == nullptr && this->templateId_ == nullptr; };
        // approvalType Field Functions 
        bool hasApprovalType() const { return this->approvalType_ != nullptr;};
        void deleteApprovalType() { this->approvalType_ = nullptr;};
        inline string getApprovalType() const { DARABONBA_PTR_GET_DEFAULT(approvalType_, "") };
        inline OfflineApprovalConfig& setApprovalType(string approvalType) { DARABONBA_PTR_SET_VALUE(approvalType_, approvalType) };


        // enableApproval Field Functions 
        bool hasEnableApproval() const { return this->enableApproval_ != nullptr;};
        void deleteEnableApproval() { this->enableApproval_ = nullptr;};
        inline bool getEnableApproval() const { DARABONBA_PTR_GET_DEFAULT(enableApproval_, false) };
        inline OfflineApprovalConfig& setEnableApproval(bool enableApproval) { DARABONBA_PTR_SET_VALUE(enableApproval_, enableApproval) };


        // isSubmitInBatch Field Functions 
        bool hasIsSubmitInBatch() const { return this->isSubmitInBatch_ != nullptr;};
        void deleteIsSubmitInBatch() { this->isSubmitInBatch_ = nullptr;};
        inline bool getIsSubmitInBatch() const { DARABONBA_PTR_GET_DEFAULT(isSubmitInBatch_, false) };
        inline OfflineApprovalConfig& setIsSubmitInBatch(bool isSubmitInBatch) { DARABONBA_PTR_SET_VALUE(isSubmitInBatch_, isSubmitInBatch) };


        // templateId Field Functions 
        bool hasTemplateId() const { return this->templateId_ != nullptr;};
        void deleteTemplateId() { this->templateId_ = nullptr;};
        inline int64_t getTemplateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, 0L) };
        inline OfflineApprovalConfig& setTemplateId(int64_t templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


      protected:
        // This parameter is required.
        shared_ptr<string> approvalType_ {};
        // This parameter is required.
        shared_ptr<bool> enableApproval_ {};
        // This parameter is required.
        shared_ptr<bool> isSubmitInBatch_ {};
        shared_ptr<int64_t> templateId_ {};
      };

      class DirectoryReference : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const DirectoryReference& obj) { 
          DARABONBA_PTR_TO_JSON(Directory, directory_);
        };
        friend void from_json(const Darabonba::Json& j, DirectoryReference& obj) { 
          DARABONBA_PTR_FROM_JSON(Directory, directory_);
        };
        DirectoryReference() = default ;
        DirectoryReference(const DirectoryReference &) = default ;
        DirectoryReference(DirectoryReference &&) = default ;
        DirectoryReference(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~DirectoryReference() = default ;
        DirectoryReference& operator=(const DirectoryReference &) = default ;
        DirectoryReference& operator=(DirectoryReference &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->directory_ == nullptr; };
        // directory Field Functions 
        bool hasDirectory() const { return this->directory_ != nullptr;};
        void deleteDirectory() { this->directory_ = nullptr;};
        inline string getDirectory() const { DARABONBA_PTR_GET_DEFAULT(directory_, "") };
        inline DirectoryReference& setDirectory(string directory) { DARABONBA_PTR_SET_VALUE(directory_, directory) };


      protected:
        // This parameter is required.
        shared_ptr<string> directory_ {};
      };

      class ApprovalConfig : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ApprovalConfig& obj) { 
          DARABONBA_PTR_TO_JSON(ApprovalType, approvalType_);
          DARABONBA_PTR_TO_JSON(EnableApproval, enableApproval_);
          DARABONBA_PTR_TO_JSON(IsSubmitInBatch, isSubmitInBatch_);
          DARABONBA_PTR_TO_JSON(TemplateId, templateId_);
        };
        friend void from_json(const Darabonba::Json& j, ApprovalConfig& obj) { 
          DARABONBA_PTR_FROM_JSON(ApprovalType, approvalType_);
          DARABONBA_PTR_FROM_JSON(EnableApproval, enableApproval_);
          DARABONBA_PTR_FROM_JSON(IsSubmitInBatch, isSubmitInBatch_);
          DARABONBA_PTR_FROM_JSON(TemplateId, templateId_);
        };
        ApprovalConfig() = default ;
        ApprovalConfig(const ApprovalConfig &) = default ;
        ApprovalConfig(ApprovalConfig &&) = default ;
        ApprovalConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ApprovalConfig() = default ;
        ApprovalConfig& operator=(const ApprovalConfig &) = default ;
        ApprovalConfig& operator=(ApprovalConfig &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->approvalType_ == nullptr
        && this->enableApproval_ == nullptr && this->isSubmitInBatch_ == nullptr && this->templateId_ == nullptr; };
        // approvalType Field Functions 
        bool hasApprovalType() const { return this->approvalType_ != nullptr;};
        void deleteApprovalType() { this->approvalType_ = nullptr;};
        inline string getApprovalType() const { DARABONBA_PTR_GET_DEFAULT(approvalType_, "") };
        inline ApprovalConfig& setApprovalType(string approvalType) { DARABONBA_PTR_SET_VALUE(approvalType_, approvalType) };


        // enableApproval Field Functions 
        bool hasEnableApproval() const { return this->enableApproval_ != nullptr;};
        void deleteEnableApproval() { this->enableApproval_ = nullptr;};
        inline bool getEnableApproval() const { DARABONBA_PTR_GET_DEFAULT(enableApproval_, false) };
        inline ApprovalConfig& setEnableApproval(bool enableApproval) { DARABONBA_PTR_SET_VALUE(enableApproval_, enableApproval) };


        // isSubmitInBatch Field Functions 
        bool hasIsSubmitInBatch() const { return this->isSubmitInBatch_ != nullptr;};
        void deleteIsSubmitInBatch() { this->isSubmitInBatch_ = nullptr;};
        inline bool getIsSubmitInBatch() const { DARABONBA_PTR_GET_DEFAULT(isSubmitInBatch_, false) };
        inline ApprovalConfig& setIsSubmitInBatch(bool isSubmitInBatch) { DARABONBA_PTR_SET_VALUE(isSubmitInBatch_, isSubmitInBatch) };


        // templateId Field Functions 
        bool hasTemplateId() const { return this->templateId_ != nullptr;};
        void deleteTemplateId() { this->templateId_ = nullptr;};
        inline int64_t getTemplateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, 0L) };
        inline ApprovalConfig& setTemplateId(int64_t templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


      protected:
        // This parameter is required.
        shared_ptr<string> approvalType_ {};
        // This parameter is required.
        shared_ptr<bool> enableApproval_ {};
        // This parameter is required.
        shared_ptr<bool> isSubmitInBatch_ {};
        shared_ptr<int64_t> templateId_ {};
      };

      virtual bool empty() const override { return this->approvalConfig_ == nullptr
        && this->code_ == nullptr && this->defaultStandardTemplateId_ == nullptr && this->description_ == nullptr && this->directoryReference_ == nullptr && this->maintainerList_ == nullptr
        && this->memberGroupList_ == nullptr && this->memberList_ == nullptr && this->name_ == nullptr && this->offlineApprovalConfig_ == nullptr && this->standardSetId_ == nullptr
        && this->visibilityConfig_ == nullptr; };
      // approvalConfig Field Functions 
      bool hasApprovalConfig() const { return this->approvalConfig_ != nullptr;};
      void deleteApprovalConfig() { this->approvalConfig_ = nullptr;};
      inline const UpdateCommand::ApprovalConfig & getApprovalConfig() const { DARABONBA_PTR_GET_CONST(approvalConfig_, UpdateCommand::ApprovalConfig) };
      inline UpdateCommand::ApprovalConfig getApprovalConfig() { DARABONBA_PTR_GET(approvalConfig_, UpdateCommand::ApprovalConfig) };
      inline UpdateCommand& setApprovalConfig(const UpdateCommand::ApprovalConfig & approvalConfig) { DARABONBA_PTR_SET_VALUE(approvalConfig_, approvalConfig) };
      inline UpdateCommand& setApprovalConfig(UpdateCommand::ApprovalConfig && approvalConfig) { DARABONBA_PTR_SET_RVALUE(approvalConfig_, approvalConfig) };


      // code Field Functions 
      bool hasCode() const { return this->code_ != nullptr;};
      void deleteCode() { this->code_ = nullptr;};
      inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
      inline UpdateCommand& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


      // defaultStandardTemplateId Field Functions 
      bool hasDefaultStandardTemplateId() const { return this->defaultStandardTemplateId_ != nullptr;};
      void deleteDefaultStandardTemplateId() { this->defaultStandardTemplateId_ = nullptr;};
      inline int64_t getDefaultStandardTemplateId() const { DARABONBA_PTR_GET_DEFAULT(defaultStandardTemplateId_, 0L) };
      inline UpdateCommand& setDefaultStandardTemplateId(int64_t defaultStandardTemplateId) { DARABONBA_PTR_SET_VALUE(defaultStandardTemplateId_, defaultStandardTemplateId) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline UpdateCommand& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // directoryReference Field Functions 
      bool hasDirectoryReference() const { return this->directoryReference_ != nullptr;};
      void deleteDirectoryReference() { this->directoryReference_ = nullptr;};
      inline const UpdateCommand::DirectoryReference & getDirectoryReference() const { DARABONBA_PTR_GET_CONST(directoryReference_, UpdateCommand::DirectoryReference) };
      inline UpdateCommand::DirectoryReference getDirectoryReference() { DARABONBA_PTR_GET(directoryReference_, UpdateCommand::DirectoryReference) };
      inline UpdateCommand& setDirectoryReference(const UpdateCommand::DirectoryReference & directoryReference) { DARABONBA_PTR_SET_VALUE(directoryReference_, directoryReference) };
      inline UpdateCommand& setDirectoryReference(UpdateCommand::DirectoryReference && directoryReference) { DARABONBA_PTR_SET_RVALUE(directoryReference_, directoryReference) };


      // maintainerList Field Functions 
      bool hasMaintainerList() const { return this->maintainerList_ != nullptr;};
      void deleteMaintainerList() { this->maintainerList_ = nullptr;};
      inline const vector<string> & getMaintainerList() const { DARABONBA_PTR_GET_CONST(maintainerList_, vector<string>) };
      inline vector<string> getMaintainerList() { DARABONBA_PTR_GET(maintainerList_, vector<string>) };
      inline UpdateCommand& setMaintainerList(const vector<string> & maintainerList) { DARABONBA_PTR_SET_VALUE(maintainerList_, maintainerList) };
      inline UpdateCommand& setMaintainerList(vector<string> && maintainerList) { DARABONBA_PTR_SET_RVALUE(maintainerList_, maintainerList) };


      // memberGroupList Field Functions 
      bool hasMemberGroupList() const { return this->memberGroupList_ != nullptr;};
      void deleteMemberGroupList() { this->memberGroupList_ = nullptr;};
      inline const vector<string> & getMemberGroupList() const { DARABONBA_PTR_GET_CONST(memberGroupList_, vector<string>) };
      inline vector<string> getMemberGroupList() { DARABONBA_PTR_GET(memberGroupList_, vector<string>) };
      inline UpdateCommand& setMemberGroupList(const vector<string> & memberGroupList) { DARABONBA_PTR_SET_VALUE(memberGroupList_, memberGroupList) };
      inline UpdateCommand& setMemberGroupList(vector<string> && memberGroupList) { DARABONBA_PTR_SET_RVALUE(memberGroupList_, memberGroupList) };


      // memberList Field Functions 
      bool hasMemberList() const { return this->memberList_ != nullptr;};
      void deleteMemberList() { this->memberList_ = nullptr;};
      inline const vector<string> & getMemberList() const { DARABONBA_PTR_GET_CONST(memberList_, vector<string>) };
      inline vector<string> getMemberList() { DARABONBA_PTR_GET(memberList_, vector<string>) };
      inline UpdateCommand& setMemberList(const vector<string> & memberList) { DARABONBA_PTR_SET_VALUE(memberList_, memberList) };
      inline UpdateCommand& setMemberList(vector<string> && memberList) { DARABONBA_PTR_SET_RVALUE(memberList_, memberList) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline UpdateCommand& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // offlineApprovalConfig Field Functions 
      bool hasOfflineApprovalConfig() const { return this->offlineApprovalConfig_ != nullptr;};
      void deleteOfflineApprovalConfig() { this->offlineApprovalConfig_ = nullptr;};
      inline const UpdateCommand::OfflineApprovalConfig & getOfflineApprovalConfig() const { DARABONBA_PTR_GET_CONST(offlineApprovalConfig_, UpdateCommand::OfflineApprovalConfig) };
      inline UpdateCommand::OfflineApprovalConfig getOfflineApprovalConfig() { DARABONBA_PTR_GET(offlineApprovalConfig_, UpdateCommand::OfflineApprovalConfig) };
      inline UpdateCommand& setOfflineApprovalConfig(const UpdateCommand::OfflineApprovalConfig & offlineApprovalConfig) { DARABONBA_PTR_SET_VALUE(offlineApprovalConfig_, offlineApprovalConfig) };
      inline UpdateCommand& setOfflineApprovalConfig(UpdateCommand::OfflineApprovalConfig && offlineApprovalConfig) { DARABONBA_PTR_SET_RVALUE(offlineApprovalConfig_, offlineApprovalConfig) };


      // standardSetId Field Functions 
      bool hasStandardSetId() const { return this->standardSetId_ != nullptr;};
      void deleteStandardSetId() { this->standardSetId_ = nullptr;};
      inline int64_t getStandardSetId() const { DARABONBA_PTR_GET_DEFAULT(standardSetId_, 0L) };
      inline UpdateCommand& setStandardSetId(int64_t standardSetId) { DARABONBA_PTR_SET_VALUE(standardSetId_, standardSetId) };


      // visibilityConfig Field Functions 
      bool hasVisibilityConfig() const { return this->visibilityConfig_ != nullptr;};
      void deleteVisibilityConfig() { this->visibilityConfig_ = nullptr;};
      inline const UpdateCommand::VisibilityConfig & getVisibilityConfig() const { DARABONBA_PTR_GET_CONST(visibilityConfig_, UpdateCommand::VisibilityConfig) };
      inline UpdateCommand::VisibilityConfig getVisibilityConfig() { DARABONBA_PTR_GET(visibilityConfig_, UpdateCommand::VisibilityConfig) };
      inline UpdateCommand& setVisibilityConfig(const UpdateCommand::VisibilityConfig & visibilityConfig) { DARABONBA_PTR_SET_VALUE(visibilityConfig_, visibilityConfig) };
      inline UpdateCommand& setVisibilityConfig(UpdateCommand::VisibilityConfig && visibilityConfig) { DARABONBA_PTR_SET_RVALUE(visibilityConfig_, visibilityConfig) };


    protected:
      shared_ptr<UpdateCommand::ApprovalConfig> approvalConfig_ {};
      // This parameter is required.
      shared_ptr<string> code_ {};
      shared_ptr<int64_t> defaultStandardTemplateId_ {};
      shared_ptr<string> description_ {};
      shared_ptr<UpdateCommand::DirectoryReference> directoryReference_ {};
      shared_ptr<vector<string>> maintainerList_ {};
      shared_ptr<vector<string>> memberGroupList_ {};
      shared_ptr<vector<string>> memberList_ {};
      // This parameter is required.
      shared_ptr<string> name_ {};
      shared_ptr<UpdateCommand::OfflineApprovalConfig> offlineApprovalConfig_ {};
      // This parameter is required.
      shared_ptr<int64_t> standardSetId_ {};
      shared_ptr<UpdateCommand::VisibilityConfig> visibilityConfig_ {};
    };

    virtual bool empty() const override { return this->opTenantId_ == nullptr
        && this->updateCommand_ == nullptr; };
    // opTenantId Field Functions 
    bool hasOpTenantId() const { return this->opTenantId_ != nullptr;};
    void deleteOpTenantId() { this->opTenantId_ = nullptr;};
    inline int64_t getOpTenantId() const { DARABONBA_PTR_GET_DEFAULT(opTenantId_, 0L) };
    inline UpdateStandardSetRequest& setOpTenantId(int64_t opTenantId) { DARABONBA_PTR_SET_VALUE(opTenantId_, opTenantId) };


    // updateCommand Field Functions 
    bool hasUpdateCommand() const { return this->updateCommand_ != nullptr;};
    void deleteUpdateCommand() { this->updateCommand_ = nullptr;};
    inline const UpdateStandardSetRequest::UpdateCommand & getUpdateCommand() const { DARABONBA_PTR_GET_CONST(updateCommand_, UpdateStandardSetRequest::UpdateCommand) };
    inline UpdateStandardSetRequest::UpdateCommand getUpdateCommand() { DARABONBA_PTR_GET(updateCommand_, UpdateStandardSetRequest::UpdateCommand) };
    inline UpdateStandardSetRequest& setUpdateCommand(const UpdateStandardSetRequest::UpdateCommand & updateCommand) { DARABONBA_PTR_SET_VALUE(updateCommand_, updateCommand) };
    inline UpdateStandardSetRequest& setUpdateCommand(UpdateStandardSetRequest::UpdateCommand && updateCommand) { DARABONBA_PTR_SET_RVALUE(updateCommand_, updateCommand) };


  protected:
    // This parameter is required.
    shared_ptr<int64_t> opTenantId_ {};
    // This parameter is required.
    shared_ptr<UpdateStandardSetRequest::UpdateCommand> updateCommand_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
