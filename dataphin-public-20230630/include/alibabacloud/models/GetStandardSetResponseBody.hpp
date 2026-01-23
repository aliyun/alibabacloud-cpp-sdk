// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSTANDARDSETRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETSTANDARDSETRESPONSEBODY_HPP_
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
  class GetStandardSetResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetStandardSetResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(StandardSetInfo, standardSetInfo_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetStandardSetResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(StandardSetInfo, standardSetInfo_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetStandardSetResponseBody() = default ;
    GetStandardSetResponseBody(const GetStandardSetResponseBody &) = default ;
    GetStandardSetResponseBody(GetStandardSetResponseBody &&) = default ;
    GetStandardSetResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetStandardSetResponseBody() = default ;
    GetStandardSetResponseBody& operator=(const GetStandardSetResponseBody &) = default ;
    GetStandardSetResponseBody& operator=(GetStandardSetResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class StandardSetInfo : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const StandardSetInfo& obj) { 
        DARABONBA_PTR_TO_JSON(ApprovalConfig, approvalConfig_);
        DARABONBA_PTR_TO_JSON(Code, code_);
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(Creator, creator_);
        DARABONBA_PTR_TO_JSON(DefaultStandardTemplateId, defaultStandardTemplateId_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(DirectoryReference, directoryReference_);
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(LastModifier, lastModifier_);
        DARABONBA_PTR_TO_JSON(MaintainerList, maintainerList_);
        DARABONBA_PTR_TO_JSON(MemberGroupList, memberGroupList_);
        DARABONBA_PTR_TO_JSON(MemberList, memberList_);
        DARABONBA_PTR_TO_JSON(ModifyTime, modifyTime_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(OfflineApprovalConfig, offlineApprovalConfig_);
        DARABONBA_PTR_TO_JSON(VisibilityConfig, visibilityConfig_);
      };
      friend void from_json(const Darabonba::Json& j, StandardSetInfo& obj) { 
        DARABONBA_PTR_FROM_JSON(ApprovalConfig, approvalConfig_);
        DARABONBA_PTR_FROM_JSON(Code, code_);
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(Creator, creator_);
        DARABONBA_PTR_FROM_JSON(DefaultStandardTemplateId, defaultStandardTemplateId_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(DirectoryReference, directoryReference_);
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(LastModifier, lastModifier_);
        DARABONBA_PTR_FROM_JSON(MaintainerList, maintainerList_);
        DARABONBA_PTR_FROM_JSON(MemberGroupList, memberGroupList_);
        DARABONBA_PTR_FROM_JSON(MemberList, memberList_);
        DARABONBA_PTR_FROM_JSON(ModifyTime, modifyTime_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(OfflineApprovalConfig, offlineApprovalConfig_);
        DARABONBA_PTR_FROM_JSON(VisibilityConfig, visibilityConfig_);
      };
      StandardSetInfo() = default ;
      StandardSetInfo(const StandardSetInfo &) = default ;
      StandardSetInfo(StandardSetInfo &&) = default ;
      StandardSetInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~StandardSetInfo() = default ;
      StandardSetInfo& operator=(const StandardSetInfo &) = default ;
      StandardSetInfo& operator=(StandardSetInfo &&) = default ;
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
        class SpecifiedUserList : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const SpecifiedUserList& obj) { 
            DARABONBA_PTR_TO_JSON(Id, id_);
            DARABONBA_PTR_TO_JSON(Name, name_);
          };
          friend void from_json(const Darabonba::Json& j, SpecifiedUserList& obj) { 
            DARABONBA_PTR_FROM_JSON(Id, id_);
            DARABONBA_PTR_FROM_JSON(Name, name_);
          };
          SpecifiedUserList() = default ;
          SpecifiedUserList(const SpecifiedUserList &) = default ;
          SpecifiedUserList(SpecifiedUserList &&) = default ;
          SpecifiedUserList(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~SpecifiedUserList() = default ;
          SpecifiedUserList& operator=(const SpecifiedUserList &) = default ;
          SpecifiedUserList& operator=(SpecifiedUserList &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->id_ == nullptr
        && this->name_ == nullptr; };
          // id Field Functions 
          bool hasId() const { return this->id_ != nullptr;};
          void deleteId() { this->id_ = nullptr;};
          inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
          inline SpecifiedUserList& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


          // name Field Functions 
          bool hasName() const { return this->name_ != nullptr;};
          void deleteName() { this->name_ = nullptr;};
          inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
          inline SpecifiedUserList& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        protected:
          shared_ptr<string> id_ {};
          shared_ptr<string> name_ {};
        };

        virtual bool empty() const override { return this->specifiedUserList_ == nullptr
        && this->type_ == nullptr; };
        // specifiedUserList Field Functions 
        bool hasSpecifiedUserList() const { return this->specifiedUserList_ != nullptr;};
        void deleteSpecifiedUserList() { this->specifiedUserList_ = nullptr;};
        inline const vector<VisibilityConfig::SpecifiedUserList> & getSpecifiedUserList() const { DARABONBA_PTR_GET_CONST(specifiedUserList_, vector<VisibilityConfig::SpecifiedUserList>) };
        inline vector<VisibilityConfig::SpecifiedUserList> getSpecifiedUserList() { DARABONBA_PTR_GET(specifiedUserList_, vector<VisibilityConfig::SpecifiedUserList>) };
        inline VisibilityConfig& setSpecifiedUserList(const vector<VisibilityConfig::SpecifiedUserList> & specifiedUserList) { DARABONBA_PTR_SET_VALUE(specifiedUserList_, specifiedUserList) };
        inline VisibilityConfig& setSpecifiedUserList(vector<VisibilityConfig::SpecifiedUserList> && specifiedUserList) { DARABONBA_PTR_SET_RVALUE(specifiedUserList_, specifiedUserList) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline VisibilityConfig& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      protected:
        shared_ptr<vector<VisibilityConfig::SpecifiedUserList>> specifiedUserList_ {};
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
        shared_ptr<string> approvalType_ {};
        shared_ptr<bool> enableApproval_ {};
        shared_ptr<bool> isSubmitInBatch_ {};
        shared_ptr<int64_t> templateId_ {};
      };

      class MemberList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const MemberList& obj) { 
          DARABONBA_PTR_TO_JSON(Id, id_);
          DARABONBA_PTR_TO_JSON(Name, name_);
        };
        friend void from_json(const Darabonba::Json& j, MemberList& obj) { 
          DARABONBA_PTR_FROM_JSON(Id, id_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
        };
        MemberList() = default ;
        MemberList(const MemberList &) = default ;
        MemberList(MemberList &&) = default ;
        MemberList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~MemberList() = default ;
        MemberList& operator=(const MemberList &) = default ;
        MemberList& operator=(MemberList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->id_ == nullptr
        && this->name_ == nullptr; };
        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
        inline MemberList& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline MemberList& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      protected:
        shared_ptr<string> id_ {};
        shared_ptr<string> name_ {};
      };

      class MemberGroupList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const MemberGroupList& obj) { 
          DARABONBA_PTR_TO_JSON(Id, id_);
          DARABONBA_PTR_TO_JSON(Name, name_);
        };
        friend void from_json(const Darabonba::Json& j, MemberGroupList& obj) { 
          DARABONBA_PTR_FROM_JSON(Id, id_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
        };
        MemberGroupList() = default ;
        MemberGroupList(const MemberGroupList &) = default ;
        MemberGroupList(MemberGroupList &&) = default ;
        MemberGroupList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~MemberGroupList() = default ;
        MemberGroupList& operator=(const MemberGroupList &) = default ;
        MemberGroupList& operator=(MemberGroupList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->id_ == nullptr
        && this->name_ == nullptr; };
        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
        inline MemberGroupList& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline MemberGroupList& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      protected:
        shared_ptr<string> id_ {};
        shared_ptr<string> name_ {};
      };

      class MaintainerList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const MaintainerList& obj) { 
          DARABONBA_PTR_TO_JSON(Id, id_);
          DARABONBA_PTR_TO_JSON(Name, name_);
        };
        friend void from_json(const Darabonba::Json& j, MaintainerList& obj) { 
          DARABONBA_PTR_FROM_JSON(Id, id_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
        };
        MaintainerList() = default ;
        MaintainerList(const MaintainerList &) = default ;
        MaintainerList(MaintainerList &&) = default ;
        MaintainerList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~MaintainerList() = default ;
        MaintainerList& operator=(const MaintainerList &) = default ;
        MaintainerList& operator=(MaintainerList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->id_ == nullptr
        && this->name_ == nullptr; };
        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
        inline MaintainerList& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline MaintainerList& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      protected:
        shared_ptr<string> id_ {};
        shared_ptr<string> name_ {};
      };

      class LastModifier : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const LastModifier& obj) { 
          DARABONBA_PTR_TO_JSON(Id, id_);
          DARABONBA_PTR_TO_JSON(Name, name_);
        };
        friend void from_json(const Darabonba::Json& j, LastModifier& obj) { 
          DARABONBA_PTR_FROM_JSON(Id, id_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
        };
        LastModifier() = default ;
        LastModifier(const LastModifier &) = default ;
        LastModifier(LastModifier &&) = default ;
        LastModifier(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~LastModifier() = default ;
        LastModifier& operator=(const LastModifier &) = default ;
        LastModifier& operator=(LastModifier &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->id_ == nullptr
        && this->name_ == nullptr; };
        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
        inline LastModifier& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline LastModifier& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      protected:
        shared_ptr<string> id_ {};
        shared_ptr<string> name_ {};
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
        shared_ptr<string> directory_ {};
      };

      class Creator : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Creator& obj) { 
          DARABONBA_PTR_TO_JSON(Id, id_);
          DARABONBA_PTR_TO_JSON(Name, name_);
        };
        friend void from_json(const Darabonba::Json& j, Creator& obj) { 
          DARABONBA_PTR_FROM_JSON(Id, id_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
        };
        Creator() = default ;
        Creator(const Creator &) = default ;
        Creator(Creator &&) = default ;
        Creator(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Creator() = default ;
        Creator& operator=(const Creator &) = default ;
        Creator& operator=(Creator &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->id_ == nullptr
        && this->name_ == nullptr; };
        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
        inline Creator& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline Creator& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      protected:
        shared_ptr<string> id_ {};
        shared_ptr<string> name_ {};
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
        shared_ptr<string> approvalType_ {};
        shared_ptr<bool> enableApproval_ {};
        shared_ptr<bool> isSubmitInBatch_ {};
        shared_ptr<int64_t> templateId_ {};
      };

      virtual bool empty() const override { return this->approvalConfig_ == nullptr
        && this->code_ == nullptr && this->createTime_ == nullptr && this->creator_ == nullptr && this->defaultStandardTemplateId_ == nullptr && this->description_ == nullptr
        && this->directoryReference_ == nullptr && this->id_ == nullptr && this->lastModifier_ == nullptr && this->maintainerList_ == nullptr && this->memberGroupList_ == nullptr
        && this->memberList_ == nullptr && this->modifyTime_ == nullptr && this->name_ == nullptr && this->offlineApprovalConfig_ == nullptr && this->visibilityConfig_ == nullptr; };
      // approvalConfig Field Functions 
      bool hasApprovalConfig() const { return this->approvalConfig_ != nullptr;};
      void deleteApprovalConfig() { this->approvalConfig_ = nullptr;};
      inline const StandardSetInfo::ApprovalConfig & getApprovalConfig() const { DARABONBA_PTR_GET_CONST(approvalConfig_, StandardSetInfo::ApprovalConfig) };
      inline StandardSetInfo::ApprovalConfig getApprovalConfig() { DARABONBA_PTR_GET(approvalConfig_, StandardSetInfo::ApprovalConfig) };
      inline StandardSetInfo& setApprovalConfig(const StandardSetInfo::ApprovalConfig & approvalConfig) { DARABONBA_PTR_SET_VALUE(approvalConfig_, approvalConfig) };
      inline StandardSetInfo& setApprovalConfig(StandardSetInfo::ApprovalConfig && approvalConfig) { DARABONBA_PTR_SET_RVALUE(approvalConfig_, approvalConfig) };


      // code Field Functions 
      bool hasCode() const { return this->code_ != nullptr;};
      void deleteCode() { this->code_ = nullptr;};
      inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
      inline StandardSetInfo& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline StandardSetInfo& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // creator Field Functions 
      bool hasCreator() const { return this->creator_ != nullptr;};
      void deleteCreator() { this->creator_ = nullptr;};
      inline const StandardSetInfo::Creator & getCreator() const { DARABONBA_PTR_GET_CONST(creator_, StandardSetInfo::Creator) };
      inline StandardSetInfo::Creator getCreator() { DARABONBA_PTR_GET(creator_, StandardSetInfo::Creator) };
      inline StandardSetInfo& setCreator(const StandardSetInfo::Creator & creator) { DARABONBA_PTR_SET_VALUE(creator_, creator) };
      inline StandardSetInfo& setCreator(StandardSetInfo::Creator && creator) { DARABONBA_PTR_SET_RVALUE(creator_, creator) };


      // defaultStandardTemplateId Field Functions 
      bool hasDefaultStandardTemplateId() const { return this->defaultStandardTemplateId_ != nullptr;};
      void deleteDefaultStandardTemplateId() { this->defaultStandardTemplateId_ = nullptr;};
      inline int64_t getDefaultStandardTemplateId() const { DARABONBA_PTR_GET_DEFAULT(defaultStandardTemplateId_, 0L) };
      inline StandardSetInfo& setDefaultStandardTemplateId(int64_t defaultStandardTemplateId) { DARABONBA_PTR_SET_VALUE(defaultStandardTemplateId_, defaultStandardTemplateId) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline StandardSetInfo& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // directoryReference Field Functions 
      bool hasDirectoryReference() const { return this->directoryReference_ != nullptr;};
      void deleteDirectoryReference() { this->directoryReference_ = nullptr;};
      inline const StandardSetInfo::DirectoryReference & getDirectoryReference() const { DARABONBA_PTR_GET_CONST(directoryReference_, StandardSetInfo::DirectoryReference) };
      inline StandardSetInfo::DirectoryReference getDirectoryReference() { DARABONBA_PTR_GET(directoryReference_, StandardSetInfo::DirectoryReference) };
      inline StandardSetInfo& setDirectoryReference(const StandardSetInfo::DirectoryReference & directoryReference) { DARABONBA_PTR_SET_VALUE(directoryReference_, directoryReference) };
      inline StandardSetInfo& setDirectoryReference(StandardSetInfo::DirectoryReference && directoryReference) { DARABONBA_PTR_SET_RVALUE(directoryReference_, directoryReference) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
      inline StandardSetInfo& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // lastModifier Field Functions 
      bool hasLastModifier() const { return this->lastModifier_ != nullptr;};
      void deleteLastModifier() { this->lastModifier_ = nullptr;};
      inline const StandardSetInfo::LastModifier & getLastModifier() const { DARABONBA_PTR_GET_CONST(lastModifier_, StandardSetInfo::LastModifier) };
      inline StandardSetInfo::LastModifier getLastModifier() { DARABONBA_PTR_GET(lastModifier_, StandardSetInfo::LastModifier) };
      inline StandardSetInfo& setLastModifier(const StandardSetInfo::LastModifier & lastModifier) { DARABONBA_PTR_SET_VALUE(lastModifier_, lastModifier) };
      inline StandardSetInfo& setLastModifier(StandardSetInfo::LastModifier && lastModifier) { DARABONBA_PTR_SET_RVALUE(lastModifier_, lastModifier) };


      // maintainerList Field Functions 
      bool hasMaintainerList() const { return this->maintainerList_ != nullptr;};
      void deleteMaintainerList() { this->maintainerList_ = nullptr;};
      inline const vector<StandardSetInfo::MaintainerList> & getMaintainerList() const { DARABONBA_PTR_GET_CONST(maintainerList_, vector<StandardSetInfo::MaintainerList>) };
      inline vector<StandardSetInfo::MaintainerList> getMaintainerList() { DARABONBA_PTR_GET(maintainerList_, vector<StandardSetInfo::MaintainerList>) };
      inline StandardSetInfo& setMaintainerList(const vector<StandardSetInfo::MaintainerList> & maintainerList) { DARABONBA_PTR_SET_VALUE(maintainerList_, maintainerList) };
      inline StandardSetInfo& setMaintainerList(vector<StandardSetInfo::MaintainerList> && maintainerList) { DARABONBA_PTR_SET_RVALUE(maintainerList_, maintainerList) };


      // memberGroupList Field Functions 
      bool hasMemberGroupList() const { return this->memberGroupList_ != nullptr;};
      void deleteMemberGroupList() { this->memberGroupList_ = nullptr;};
      inline const vector<StandardSetInfo::MemberGroupList> & getMemberGroupList() const { DARABONBA_PTR_GET_CONST(memberGroupList_, vector<StandardSetInfo::MemberGroupList>) };
      inline vector<StandardSetInfo::MemberGroupList> getMemberGroupList() { DARABONBA_PTR_GET(memberGroupList_, vector<StandardSetInfo::MemberGroupList>) };
      inline StandardSetInfo& setMemberGroupList(const vector<StandardSetInfo::MemberGroupList> & memberGroupList) { DARABONBA_PTR_SET_VALUE(memberGroupList_, memberGroupList) };
      inline StandardSetInfo& setMemberGroupList(vector<StandardSetInfo::MemberGroupList> && memberGroupList) { DARABONBA_PTR_SET_RVALUE(memberGroupList_, memberGroupList) };


      // memberList Field Functions 
      bool hasMemberList() const { return this->memberList_ != nullptr;};
      void deleteMemberList() { this->memberList_ = nullptr;};
      inline const vector<StandardSetInfo::MemberList> & getMemberList() const { DARABONBA_PTR_GET_CONST(memberList_, vector<StandardSetInfo::MemberList>) };
      inline vector<StandardSetInfo::MemberList> getMemberList() { DARABONBA_PTR_GET(memberList_, vector<StandardSetInfo::MemberList>) };
      inline StandardSetInfo& setMemberList(const vector<StandardSetInfo::MemberList> & memberList) { DARABONBA_PTR_SET_VALUE(memberList_, memberList) };
      inline StandardSetInfo& setMemberList(vector<StandardSetInfo::MemberList> && memberList) { DARABONBA_PTR_SET_RVALUE(memberList_, memberList) };


      // modifyTime Field Functions 
      bool hasModifyTime() const { return this->modifyTime_ != nullptr;};
      void deleteModifyTime() { this->modifyTime_ = nullptr;};
      inline string getModifyTime() const { DARABONBA_PTR_GET_DEFAULT(modifyTime_, "") };
      inline StandardSetInfo& setModifyTime(string modifyTime) { DARABONBA_PTR_SET_VALUE(modifyTime_, modifyTime) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline StandardSetInfo& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // offlineApprovalConfig Field Functions 
      bool hasOfflineApprovalConfig() const { return this->offlineApprovalConfig_ != nullptr;};
      void deleteOfflineApprovalConfig() { this->offlineApprovalConfig_ = nullptr;};
      inline const StandardSetInfo::OfflineApprovalConfig & getOfflineApprovalConfig() const { DARABONBA_PTR_GET_CONST(offlineApprovalConfig_, StandardSetInfo::OfflineApprovalConfig) };
      inline StandardSetInfo::OfflineApprovalConfig getOfflineApprovalConfig() { DARABONBA_PTR_GET(offlineApprovalConfig_, StandardSetInfo::OfflineApprovalConfig) };
      inline StandardSetInfo& setOfflineApprovalConfig(const StandardSetInfo::OfflineApprovalConfig & offlineApprovalConfig) { DARABONBA_PTR_SET_VALUE(offlineApprovalConfig_, offlineApprovalConfig) };
      inline StandardSetInfo& setOfflineApprovalConfig(StandardSetInfo::OfflineApprovalConfig && offlineApprovalConfig) { DARABONBA_PTR_SET_RVALUE(offlineApprovalConfig_, offlineApprovalConfig) };


      // visibilityConfig Field Functions 
      bool hasVisibilityConfig() const { return this->visibilityConfig_ != nullptr;};
      void deleteVisibilityConfig() { this->visibilityConfig_ = nullptr;};
      inline const StandardSetInfo::VisibilityConfig & getVisibilityConfig() const { DARABONBA_PTR_GET_CONST(visibilityConfig_, StandardSetInfo::VisibilityConfig) };
      inline StandardSetInfo::VisibilityConfig getVisibilityConfig() { DARABONBA_PTR_GET(visibilityConfig_, StandardSetInfo::VisibilityConfig) };
      inline StandardSetInfo& setVisibilityConfig(const StandardSetInfo::VisibilityConfig & visibilityConfig) { DARABONBA_PTR_SET_VALUE(visibilityConfig_, visibilityConfig) };
      inline StandardSetInfo& setVisibilityConfig(StandardSetInfo::VisibilityConfig && visibilityConfig) { DARABONBA_PTR_SET_RVALUE(visibilityConfig_, visibilityConfig) };


    protected:
      shared_ptr<StandardSetInfo::ApprovalConfig> approvalConfig_ {};
      shared_ptr<string> code_ {};
      shared_ptr<string> createTime_ {};
      shared_ptr<StandardSetInfo::Creator> creator_ {};
      shared_ptr<int64_t> defaultStandardTemplateId_ {};
      shared_ptr<string> description_ {};
      shared_ptr<StandardSetInfo::DirectoryReference> directoryReference_ {};
      shared_ptr<int64_t> id_ {};
      shared_ptr<StandardSetInfo::LastModifier> lastModifier_ {};
      shared_ptr<vector<StandardSetInfo::MaintainerList>> maintainerList_ {};
      shared_ptr<vector<StandardSetInfo::MemberGroupList>> memberGroupList_ {};
      shared_ptr<vector<StandardSetInfo::MemberList>> memberList_ {};
      shared_ptr<string> modifyTime_ {};
      shared_ptr<string> name_ {};
      shared_ptr<StandardSetInfo::OfflineApprovalConfig> offlineApprovalConfig_ {};
      shared_ptr<StandardSetInfo::VisibilityConfig> visibilityConfig_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->standardSetInfo_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetStandardSetResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline GetStandardSetResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetStandardSetResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetStandardSetResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // standardSetInfo Field Functions 
    bool hasStandardSetInfo() const { return this->standardSetInfo_ != nullptr;};
    void deleteStandardSetInfo() { this->standardSetInfo_ = nullptr;};
    inline const GetStandardSetResponseBody::StandardSetInfo & getStandardSetInfo() const { DARABONBA_PTR_GET_CONST(standardSetInfo_, GetStandardSetResponseBody::StandardSetInfo) };
    inline GetStandardSetResponseBody::StandardSetInfo getStandardSetInfo() { DARABONBA_PTR_GET(standardSetInfo_, GetStandardSetResponseBody::StandardSetInfo) };
    inline GetStandardSetResponseBody& setStandardSetInfo(const GetStandardSetResponseBody::StandardSetInfo & standardSetInfo) { DARABONBA_PTR_SET_VALUE(standardSetInfo_, standardSetInfo) };
    inline GetStandardSetResponseBody& setStandardSetInfo(GetStandardSetResponseBody::StandardSetInfo && standardSetInfo) { DARABONBA_PTR_SET_RVALUE(standardSetInfo_, standardSetInfo) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetStandardSetResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<int32_t> httpStatusCode_ {};
    shared_ptr<string> message_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
    shared_ptr<GetStandardSetResponseBody::StandardSetInfo> standardSetInfo_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
