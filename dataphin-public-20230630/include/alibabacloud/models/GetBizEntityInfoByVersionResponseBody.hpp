// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETBIZENTITYINFOBYVERSIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETBIZENTITYINFOBYVERSIONRESPONSEBODY_HPP_
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
  class GetBizEntityInfoByVersionResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetBizEntityInfoByVersionResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(BizEntityInfo, bizEntityInfo_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetBizEntityInfoByVersionResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(BizEntityInfo, bizEntityInfo_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetBizEntityInfoByVersionResponseBody() = default ;
    GetBizEntityInfoByVersionResponseBody(const GetBizEntityInfoByVersionResponseBody &) = default ;
    GetBizEntityInfoByVersionResponseBody(GetBizEntityInfoByVersionResponseBody &&) = default ;
    GetBizEntityInfoByVersionResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetBizEntityInfoByVersionResponseBody() = default ;
    GetBizEntityInfoByVersionResponseBody& operator=(const GetBizEntityInfoByVersionResponseBody &) = default ;
    GetBizEntityInfoByVersionResponseBody& operator=(GetBizEntityInfoByVersionResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class BizEntityInfo : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const BizEntityInfo& obj) { 
        DARABONBA_PTR_TO_JSON(BizObject, bizObject_);
        DARABONBA_PTR_TO_JSON(BizProcess, bizProcess_);
        DARABONBA_PTR_TO_JSON(BizUnitId, bizUnitId_);
        DARABONBA_PTR_TO_JSON(DataDomainId, dataDomainId_);
        DARABONBA_PTR_TO_JSON(Type, type_);
      };
      friend void from_json(const Darabonba::Json& j, BizEntityInfo& obj) { 
        DARABONBA_PTR_FROM_JSON(BizObject, bizObject_);
        DARABONBA_PTR_FROM_JSON(BizProcess, bizProcess_);
        DARABONBA_PTR_FROM_JSON(BizUnitId, bizUnitId_);
        DARABONBA_PTR_FROM_JSON(DataDomainId, dataDomainId_);
        DARABONBA_PTR_FROM_JSON(Type, type_);
      };
      BizEntityInfo() = default ;
      BizEntityInfo(const BizEntityInfo &) = default ;
      BizEntityInfo(BizEntityInfo &&) = default ;
      BizEntityInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~BizEntityInfo() = default ;
      BizEntityInfo& operator=(const BizEntityInfo &) = default ;
      BizEntityInfo& operator=(BizEntityInfo &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class BizProcess : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const BizProcess& obj) { 
          DARABONBA_PTR_TO_JSON(ApprovalId, approvalId_);
          DARABONBA_PTR_TO_JSON(ApprovalStatus, approvalStatus_);
          DARABONBA_PTR_TO_JSON(BizEventEntityIdList, bizEventEntityIdList_);
          DARABONBA_PTR_TO_JSON(Description, description_);
          DARABONBA_PTR_TO_JSON(DisplayName, displayName_);
          DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
          DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
          DARABONBA_PTR_TO_JSON(HasDependent, hasDependent_);
          DARABONBA_PTR_TO_JSON(Id, id_);
          DARABONBA_PTR_TO_JSON(LastModifier, lastModifier_);
          DARABONBA_PTR_TO_JSON(LastModifierName, lastModifierName_);
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(OnlineStatus, onlineStatus_);
          DARABONBA_PTR_TO_JSON(OwnerName, ownerName_);
          DARABONBA_PTR_TO_JSON(OwnerUserId, ownerUserId_);
          DARABONBA_PTR_TO_JSON(PreBizProcessIdList, preBizProcessIdList_);
          DARABONBA_PTR_TO_JSON(RefBizEntityIdList, refBizEntityIdList_);
          DARABONBA_PTR_TO_JSON(RefFactTableCount, refFactTableCount_);
          DARABONBA_PTR_TO_JSON(Status, status_);
          DARABONBA_PTR_TO_JSON(Type, type_);
        };
        friend void from_json(const Darabonba::Json& j, BizProcess& obj) { 
          DARABONBA_PTR_FROM_JSON(ApprovalId, approvalId_);
          DARABONBA_PTR_FROM_JSON(ApprovalStatus, approvalStatus_);
          DARABONBA_PTR_FROM_JSON(BizEventEntityIdList, bizEventEntityIdList_);
          DARABONBA_PTR_FROM_JSON(Description, description_);
          DARABONBA_PTR_FROM_JSON(DisplayName, displayName_);
          DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
          DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
          DARABONBA_PTR_FROM_JSON(HasDependent, hasDependent_);
          DARABONBA_PTR_FROM_JSON(Id, id_);
          DARABONBA_PTR_FROM_JSON(LastModifier, lastModifier_);
          DARABONBA_PTR_FROM_JSON(LastModifierName, lastModifierName_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(OnlineStatus, onlineStatus_);
          DARABONBA_PTR_FROM_JSON(OwnerName, ownerName_);
          DARABONBA_PTR_FROM_JSON(OwnerUserId, ownerUserId_);
          DARABONBA_PTR_FROM_JSON(PreBizProcessIdList, preBizProcessIdList_);
          DARABONBA_PTR_FROM_JSON(RefBizEntityIdList, refBizEntityIdList_);
          DARABONBA_PTR_FROM_JSON(RefFactTableCount, refFactTableCount_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
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
        virtual bool empty() const override { return this->approvalId_ == nullptr
        && this->approvalStatus_ == nullptr && this->bizEventEntityIdList_ == nullptr && this->description_ == nullptr && this->displayName_ == nullptr && this->gmtCreate_ == nullptr
        && this->gmtModified_ == nullptr && this->hasDependent_ == nullptr && this->id_ == nullptr && this->lastModifier_ == nullptr && this->lastModifierName_ == nullptr
        && this->name_ == nullptr && this->onlineStatus_ == nullptr && this->ownerName_ == nullptr && this->ownerUserId_ == nullptr && this->preBizProcessIdList_ == nullptr
        && this->refBizEntityIdList_ == nullptr && this->refFactTableCount_ == nullptr && this->status_ == nullptr && this->type_ == nullptr; };
        // approvalId Field Functions 
        bool hasApprovalId() const { return this->approvalId_ != nullptr;};
        void deleteApprovalId() { this->approvalId_ = nullptr;};
        inline string getApprovalId() const { DARABONBA_PTR_GET_DEFAULT(approvalId_, "") };
        inline BizProcess& setApprovalId(string approvalId) { DARABONBA_PTR_SET_VALUE(approvalId_, approvalId) };


        // approvalStatus Field Functions 
        bool hasApprovalStatus() const { return this->approvalStatus_ != nullptr;};
        void deleteApprovalStatus() { this->approvalStatus_ = nullptr;};
        inline string getApprovalStatus() const { DARABONBA_PTR_GET_DEFAULT(approvalStatus_, "") };
        inline BizProcess& setApprovalStatus(string approvalStatus) { DARABONBA_PTR_SET_VALUE(approvalStatus_, approvalStatus) };


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


        // gmtCreate Field Functions 
        bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
        void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
        inline string getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
        inline BizProcess& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


        // gmtModified Field Functions 
        bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
        void deleteGmtModified() { this->gmtModified_ = nullptr;};
        inline string getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
        inline BizProcess& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


        // hasDependent Field Functions 
        bool hasHasDependent() const { return this->hasDependent_ != nullptr;};
        void deleteHasDependent() { this->hasDependent_ = nullptr;};
        inline bool getHasDependent() const { DARABONBA_PTR_GET_DEFAULT(hasDependent_, false) };
        inline BizProcess& setHasDependent(bool hasDependent) { DARABONBA_PTR_SET_VALUE(hasDependent_, hasDependent) };


        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
        inline BizProcess& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // lastModifier Field Functions 
        bool hasLastModifier() const { return this->lastModifier_ != nullptr;};
        void deleteLastModifier() { this->lastModifier_ = nullptr;};
        inline string getLastModifier() const { DARABONBA_PTR_GET_DEFAULT(lastModifier_, "") };
        inline BizProcess& setLastModifier(string lastModifier) { DARABONBA_PTR_SET_VALUE(lastModifier_, lastModifier) };


        // lastModifierName Field Functions 
        bool hasLastModifierName() const { return this->lastModifierName_ != nullptr;};
        void deleteLastModifierName() { this->lastModifierName_ = nullptr;};
        inline string getLastModifierName() const { DARABONBA_PTR_GET_DEFAULT(lastModifierName_, "") };
        inline BizProcess& setLastModifierName(string lastModifierName) { DARABONBA_PTR_SET_VALUE(lastModifierName_, lastModifierName) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline BizProcess& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // onlineStatus Field Functions 
        bool hasOnlineStatus() const { return this->onlineStatus_ != nullptr;};
        void deleteOnlineStatus() { this->onlineStatus_ = nullptr;};
        inline string getOnlineStatus() const { DARABONBA_PTR_GET_DEFAULT(onlineStatus_, "") };
        inline BizProcess& setOnlineStatus(string onlineStatus) { DARABONBA_PTR_SET_VALUE(onlineStatus_, onlineStatus) };


        // ownerName Field Functions 
        bool hasOwnerName() const { return this->ownerName_ != nullptr;};
        void deleteOwnerName() { this->ownerName_ = nullptr;};
        inline string getOwnerName() const { DARABONBA_PTR_GET_DEFAULT(ownerName_, "") };
        inline BizProcess& setOwnerName(string ownerName) { DARABONBA_PTR_SET_VALUE(ownerName_, ownerName) };


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


        // refFactTableCount Field Functions 
        bool hasRefFactTableCount() const { return this->refFactTableCount_ != nullptr;};
        void deleteRefFactTableCount() { this->refFactTableCount_ = nullptr;};
        inline int32_t getRefFactTableCount() const { DARABONBA_PTR_GET_DEFAULT(refFactTableCount_, 0) };
        inline BizProcess& setRefFactTableCount(int32_t refFactTableCount) { DARABONBA_PTR_SET_VALUE(refFactTableCount_, refFactTableCount) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline BizProcess& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline BizProcess& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      protected:
        shared_ptr<string> approvalId_ {};
        shared_ptr<string> approvalStatus_ {};
        shared_ptr<vector<int64_t>> bizEventEntityIdList_ {};
        shared_ptr<string> description_ {};
        shared_ptr<string> displayName_ {};
        shared_ptr<string> gmtCreate_ {};
        shared_ptr<string> gmtModified_ {};
        shared_ptr<bool> hasDependent_ {};
        shared_ptr<int64_t> id_ {};
        shared_ptr<string> lastModifier_ {};
        shared_ptr<string> lastModifierName_ {};
        shared_ptr<string> name_ {};
        shared_ptr<string> onlineStatus_ {};
        shared_ptr<string> ownerName_ {};
        shared_ptr<string> ownerUserId_ {};
        shared_ptr<vector<int64_t>> preBizProcessIdList_ {};
        shared_ptr<vector<int64_t>> refBizEntityIdList_ {};
        shared_ptr<int32_t> refFactTableCount_ {};
        shared_ptr<string> status_ {};
        shared_ptr<string> type_ {};
      };

      class BizObject : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const BizObject& obj) { 
          DARABONBA_PTR_TO_JSON(ApprovalId, approvalId_);
          DARABONBA_PTR_TO_JSON(ApprovalStatus, approvalStatus_);
          DARABONBA_PTR_TO_JSON(ChildBizEntityIdList, childBizEntityIdList_);
          DARABONBA_PTR_TO_JSON(Description, description_);
          DARABONBA_PTR_TO_JSON(DisplayName, displayName_);
          DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
          DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
          DARABONBA_PTR_TO_JSON(Id, id_);
          DARABONBA_PTR_TO_JSON(LastModifier, lastModifier_);
          DARABONBA_PTR_TO_JSON(LastModifierName, lastModifierName_);
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(OnlineStatus, onlineStatus_);
          DARABONBA_PTR_TO_JSON(OwnerName, ownerName_);
          DARABONBA_PTR_TO_JSON(OwnerUserId, ownerUserId_);
          DARABONBA_PTR_TO_JSON(ParentId, parentId_);
          DARABONBA_PTR_TO_JSON(RefBizEntityIdList, refBizEntityIdList_);
          DARABONBA_PTR_TO_JSON(RefDimTableCount, refDimTableCount_);
          DARABONBA_PTR_TO_JSON(RefSummaryTableCount, refSummaryTableCount_);
          DARABONBA_PTR_TO_JSON(Status, status_);
          DARABONBA_PTR_TO_JSON(Type, type_);
        };
        friend void from_json(const Darabonba::Json& j, BizObject& obj) { 
          DARABONBA_PTR_FROM_JSON(ApprovalId, approvalId_);
          DARABONBA_PTR_FROM_JSON(ApprovalStatus, approvalStatus_);
          DARABONBA_PTR_FROM_JSON(ChildBizEntityIdList, childBizEntityIdList_);
          DARABONBA_PTR_FROM_JSON(Description, description_);
          DARABONBA_PTR_FROM_JSON(DisplayName, displayName_);
          DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
          DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
          DARABONBA_PTR_FROM_JSON(Id, id_);
          DARABONBA_PTR_FROM_JSON(LastModifier, lastModifier_);
          DARABONBA_PTR_FROM_JSON(LastModifierName, lastModifierName_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(OnlineStatus, onlineStatus_);
          DARABONBA_PTR_FROM_JSON(OwnerName, ownerName_);
          DARABONBA_PTR_FROM_JSON(OwnerUserId, ownerUserId_);
          DARABONBA_PTR_FROM_JSON(ParentId, parentId_);
          DARABONBA_PTR_FROM_JSON(RefBizEntityIdList, refBizEntityIdList_);
          DARABONBA_PTR_FROM_JSON(RefDimTableCount, refDimTableCount_);
          DARABONBA_PTR_FROM_JSON(RefSummaryTableCount, refSummaryTableCount_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
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
        virtual bool empty() const override { return this->approvalId_ == nullptr
        && this->approvalStatus_ == nullptr && this->childBizEntityIdList_ == nullptr && this->description_ == nullptr && this->displayName_ == nullptr && this->gmtCreate_ == nullptr
        && this->gmtModified_ == nullptr && this->id_ == nullptr && this->lastModifier_ == nullptr && this->lastModifierName_ == nullptr && this->name_ == nullptr
        && this->onlineStatus_ == nullptr && this->ownerName_ == nullptr && this->ownerUserId_ == nullptr && this->parentId_ == nullptr && this->refBizEntityIdList_ == nullptr
        && this->refDimTableCount_ == nullptr && this->refSummaryTableCount_ == nullptr && this->status_ == nullptr && this->type_ == nullptr; };
        // approvalId Field Functions 
        bool hasApprovalId() const { return this->approvalId_ != nullptr;};
        void deleteApprovalId() { this->approvalId_ = nullptr;};
        inline string getApprovalId() const { DARABONBA_PTR_GET_DEFAULT(approvalId_, "") };
        inline BizObject& setApprovalId(string approvalId) { DARABONBA_PTR_SET_VALUE(approvalId_, approvalId) };


        // approvalStatus Field Functions 
        bool hasApprovalStatus() const { return this->approvalStatus_ != nullptr;};
        void deleteApprovalStatus() { this->approvalStatus_ = nullptr;};
        inline string getApprovalStatus() const { DARABONBA_PTR_GET_DEFAULT(approvalStatus_, "") };
        inline BizObject& setApprovalStatus(string approvalStatus) { DARABONBA_PTR_SET_VALUE(approvalStatus_, approvalStatus) };


        // childBizEntityIdList Field Functions 
        bool hasChildBizEntityIdList() const { return this->childBizEntityIdList_ != nullptr;};
        void deleteChildBizEntityIdList() { this->childBizEntityIdList_ = nullptr;};
        inline const vector<int64_t> & getChildBizEntityIdList() const { DARABONBA_PTR_GET_CONST(childBizEntityIdList_, vector<int64_t>) };
        inline vector<int64_t> getChildBizEntityIdList() { DARABONBA_PTR_GET(childBizEntityIdList_, vector<int64_t>) };
        inline BizObject& setChildBizEntityIdList(const vector<int64_t> & childBizEntityIdList) { DARABONBA_PTR_SET_VALUE(childBizEntityIdList_, childBizEntityIdList) };
        inline BizObject& setChildBizEntityIdList(vector<int64_t> && childBizEntityIdList) { DARABONBA_PTR_SET_RVALUE(childBizEntityIdList_, childBizEntityIdList) };


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


        // gmtCreate Field Functions 
        bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
        void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
        inline string getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
        inline BizObject& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


        // gmtModified Field Functions 
        bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
        void deleteGmtModified() { this->gmtModified_ = nullptr;};
        inline string getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
        inline BizObject& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
        inline BizObject& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // lastModifier Field Functions 
        bool hasLastModifier() const { return this->lastModifier_ != nullptr;};
        void deleteLastModifier() { this->lastModifier_ = nullptr;};
        inline string getLastModifier() const { DARABONBA_PTR_GET_DEFAULT(lastModifier_, "") };
        inline BizObject& setLastModifier(string lastModifier) { DARABONBA_PTR_SET_VALUE(lastModifier_, lastModifier) };


        // lastModifierName Field Functions 
        bool hasLastModifierName() const { return this->lastModifierName_ != nullptr;};
        void deleteLastModifierName() { this->lastModifierName_ = nullptr;};
        inline string getLastModifierName() const { DARABONBA_PTR_GET_DEFAULT(lastModifierName_, "") };
        inline BizObject& setLastModifierName(string lastModifierName) { DARABONBA_PTR_SET_VALUE(lastModifierName_, lastModifierName) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline BizObject& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // onlineStatus Field Functions 
        bool hasOnlineStatus() const { return this->onlineStatus_ != nullptr;};
        void deleteOnlineStatus() { this->onlineStatus_ = nullptr;};
        inline string getOnlineStatus() const { DARABONBA_PTR_GET_DEFAULT(onlineStatus_, "") };
        inline BizObject& setOnlineStatus(string onlineStatus) { DARABONBA_PTR_SET_VALUE(onlineStatus_, onlineStatus) };


        // ownerName Field Functions 
        bool hasOwnerName() const { return this->ownerName_ != nullptr;};
        void deleteOwnerName() { this->ownerName_ = nullptr;};
        inline string getOwnerName() const { DARABONBA_PTR_GET_DEFAULT(ownerName_, "") };
        inline BizObject& setOwnerName(string ownerName) { DARABONBA_PTR_SET_VALUE(ownerName_, ownerName) };


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


        // refDimTableCount Field Functions 
        bool hasRefDimTableCount() const { return this->refDimTableCount_ != nullptr;};
        void deleteRefDimTableCount() { this->refDimTableCount_ = nullptr;};
        inline int32_t getRefDimTableCount() const { DARABONBA_PTR_GET_DEFAULT(refDimTableCount_, 0) };
        inline BizObject& setRefDimTableCount(int32_t refDimTableCount) { DARABONBA_PTR_SET_VALUE(refDimTableCount_, refDimTableCount) };


        // refSummaryTableCount Field Functions 
        bool hasRefSummaryTableCount() const { return this->refSummaryTableCount_ != nullptr;};
        void deleteRefSummaryTableCount() { this->refSummaryTableCount_ = nullptr;};
        inline int32_t getRefSummaryTableCount() const { DARABONBA_PTR_GET_DEFAULT(refSummaryTableCount_, 0) };
        inline BizObject& setRefSummaryTableCount(int32_t refSummaryTableCount) { DARABONBA_PTR_SET_VALUE(refSummaryTableCount_, refSummaryTableCount) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline BizObject& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline BizObject& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      protected:
        shared_ptr<string> approvalId_ {};
        shared_ptr<string> approvalStatus_ {};
        shared_ptr<vector<int64_t>> childBizEntityIdList_ {};
        shared_ptr<string> description_ {};
        shared_ptr<string> displayName_ {};
        shared_ptr<string> gmtCreate_ {};
        shared_ptr<string> gmtModified_ {};
        shared_ptr<int64_t> id_ {};
        shared_ptr<string> lastModifier_ {};
        shared_ptr<string> lastModifierName_ {};
        shared_ptr<string> name_ {};
        shared_ptr<string> onlineStatus_ {};
        shared_ptr<string> ownerName_ {};
        shared_ptr<string> ownerUserId_ {};
        shared_ptr<int64_t> parentId_ {};
        shared_ptr<vector<int64_t>> refBizEntityIdList_ {};
        shared_ptr<int32_t> refDimTableCount_ {};
        shared_ptr<int32_t> refSummaryTableCount_ {};
        shared_ptr<string> status_ {};
        shared_ptr<string> type_ {};
      };

      virtual bool empty() const override { return this->bizObject_ == nullptr
        && this->bizProcess_ == nullptr && this->bizUnitId_ == nullptr && this->dataDomainId_ == nullptr && this->type_ == nullptr; };
      // bizObject Field Functions 
      bool hasBizObject() const { return this->bizObject_ != nullptr;};
      void deleteBizObject() { this->bizObject_ = nullptr;};
      inline const BizEntityInfo::BizObject & getBizObject() const { DARABONBA_PTR_GET_CONST(bizObject_, BizEntityInfo::BizObject) };
      inline BizEntityInfo::BizObject getBizObject() { DARABONBA_PTR_GET(bizObject_, BizEntityInfo::BizObject) };
      inline BizEntityInfo& setBizObject(const BizEntityInfo::BizObject & bizObject) { DARABONBA_PTR_SET_VALUE(bizObject_, bizObject) };
      inline BizEntityInfo& setBizObject(BizEntityInfo::BizObject && bizObject) { DARABONBA_PTR_SET_RVALUE(bizObject_, bizObject) };


      // bizProcess Field Functions 
      bool hasBizProcess() const { return this->bizProcess_ != nullptr;};
      void deleteBizProcess() { this->bizProcess_ = nullptr;};
      inline const BizEntityInfo::BizProcess & getBizProcess() const { DARABONBA_PTR_GET_CONST(bizProcess_, BizEntityInfo::BizProcess) };
      inline BizEntityInfo::BizProcess getBizProcess() { DARABONBA_PTR_GET(bizProcess_, BizEntityInfo::BizProcess) };
      inline BizEntityInfo& setBizProcess(const BizEntityInfo::BizProcess & bizProcess) { DARABONBA_PTR_SET_VALUE(bizProcess_, bizProcess) };
      inline BizEntityInfo& setBizProcess(BizEntityInfo::BizProcess && bizProcess) { DARABONBA_PTR_SET_RVALUE(bizProcess_, bizProcess) };


      // bizUnitId Field Functions 
      bool hasBizUnitId() const { return this->bizUnitId_ != nullptr;};
      void deleteBizUnitId() { this->bizUnitId_ = nullptr;};
      inline int64_t getBizUnitId() const { DARABONBA_PTR_GET_DEFAULT(bizUnitId_, 0L) };
      inline BizEntityInfo& setBizUnitId(int64_t bizUnitId) { DARABONBA_PTR_SET_VALUE(bizUnitId_, bizUnitId) };


      // dataDomainId Field Functions 
      bool hasDataDomainId() const { return this->dataDomainId_ != nullptr;};
      void deleteDataDomainId() { this->dataDomainId_ = nullptr;};
      inline int64_t getDataDomainId() const { DARABONBA_PTR_GET_DEFAULT(dataDomainId_, 0L) };
      inline BizEntityInfo& setDataDomainId(int64_t dataDomainId) { DARABONBA_PTR_SET_VALUE(dataDomainId_, dataDomainId) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline BizEntityInfo& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    protected:
      shared_ptr<BizEntityInfo::BizObject> bizObject_ {};
      shared_ptr<BizEntityInfo::BizProcess> bizProcess_ {};
      shared_ptr<int64_t> bizUnitId_ {};
      shared_ptr<int64_t> dataDomainId_ {};
      shared_ptr<string> type_ {};
    };

    virtual bool empty() const override { return this->bizEntityInfo_ == nullptr
        && this->code_ == nullptr && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // bizEntityInfo Field Functions 
    bool hasBizEntityInfo() const { return this->bizEntityInfo_ != nullptr;};
    void deleteBizEntityInfo() { this->bizEntityInfo_ = nullptr;};
    inline const GetBizEntityInfoByVersionResponseBody::BizEntityInfo & getBizEntityInfo() const { DARABONBA_PTR_GET_CONST(bizEntityInfo_, GetBizEntityInfoByVersionResponseBody::BizEntityInfo) };
    inline GetBizEntityInfoByVersionResponseBody::BizEntityInfo getBizEntityInfo() { DARABONBA_PTR_GET(bizEntityInfo_, GetBizEntityInfoByVersionResponseBody::BizEntityInfo) };
    inline GetBizEntityInfoByVersionResponseBody& setBizEntityInfo(const GetBizEntityInfoByVersionResponseBody::BizEntityInfo & bizEntityInfo) { DARABONBA_PTR_SET_VALUE(bizEntityInfo_, bizEntityInfo) };
    inline GetBizEntityInfoByVersionResponseBody& setBizEntityInfo(GetBizEntityInfoByVersionResponseBody::BizEntityInfo && bizEntityInfo) { DARABONBA_PTR_SET_RVALUE(bizEntityInfo_, bizEntityInfo) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetBizEntityInfoByVersionResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline GetBizEntityInfoByVersionResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetBizEntityInfoByVersionResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetBizEntityInfoByVersionResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetBizEntityInfoByVersionResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<GetBizEntityInfoByVersionResponseBody::BizEntityInfo> bizEntityInfo_ {};
    shared_ptr<string> code_ {};
    shared_ptr<int32_t> httpStatusCode_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
