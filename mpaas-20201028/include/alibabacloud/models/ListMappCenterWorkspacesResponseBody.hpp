// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTMAPPCENTERWORKSPACESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTMAPPCENTERWORKSPACESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MPaaS20201028
{
namespace Models
{
  class ListMappCenterWorkspacesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListMappCenterWorkspacesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ListMappCenterWorkspaceResult, listMappCenterWorkspaceResult_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResultCode, resultCode_);
      DARABONBA_PTR_TO_JSON(ResultMessage, resultMessage_);
    };
    friend void from_json(const Darabonba::Json& j, ListMappCenterWorkspacesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ListMappCenterWorkspaceResult, listMappCenterWorkspaceResult_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResultCode, resultCode_);
      DARABONBA_PTR_FROM_JSON(ResultMessage, resultMessage_);
    };
    ListMappCenterWorkspacesResponseBody() = default ;
    ListMappCenterWorkspacesResponseBody(const ListMappCenterWorkspacesResponseBody &) = default ;
    ListMappCenterWorkspacesResponseBody(ListMappCenterWorkspacesResponseBody &&) = default ;
    ListMappCenterWorkspacesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListMappCenterWorkspacesResponseBody() = default ;
    ListMappCenterWorkspacesResponseBody& operator=(const ListMappCenterWorkspacesResponseBody &) = default ;
    ListMappCenterWorkspacesResponseBody& operator=(ListMappCenterWorkspacesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ListMappCenterWorkspaceResult : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ListMappCenterWorkspaceResult& obj) { 
        DARABONBA_PTR_TO_JSON(MappCenterWorkspaceList, mappCenterWorkspaceList_);
        DARABONBA_PTR_TO_JSON(ResultMsg, resultMsg_);
        DARABONBA_PTR_TO_JSON(Success, success_);
        DARABONBA_PTR_TO_JSON(UserId, userId_);
      };
      friend void from_json(const Darabonba::Json& j, ListMappCenterWorkspaceResult& obj) { 
        DARABONBA_PTR_FROM_JSON(MappCenterWorkspaceList, mappCenterWorkspaceList_);
        DARABONBA_PTR_FROM_JSON(ResultMsg, resultMsg_);
        DARABONBA_PTR_FROM_JSON(Success, success_);
        DARABONBA_PTR_FROM_JSON(UserId, userId_);
      };
      ListMappCenterWorkspaceResult() = default ;
      ListMappCenterWorkspaceResult(const ListMappCenterWorkspaceResult &) = default ;
      ListMappCenterWorkspaceResult(ListMappCenterWorkspaceResult &&) = default ;
      ListMappCenterWorkspaceResult(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ListMappCenterWorkspaceResult() = default ;
      ListMappCenterWorkspaceResult& operator=(const ListMappCenterWorkspaceResult &) = default ;
      ListMappCenterWorkspaceResult& operator=(ListMappCenterWorkspaceResult &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class MappCenterWorkspaceList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const MappCenterWorkspaceList& obj) { 
          DARABONBA_PTR_TO_JSON(CompatibleId, compatibleId_);
          DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
          DARABONBA_PTR_TO_JSON(DisplayName, displayName_);
          DARABONBA_PTR_TO_JSON(Id, id_);
          DARABONBA_PTR_TO_JSON(Region, region_);
          DARABONBA_PTR_TO_JSON(Status, status_);
          DARABONBA_PTR_TO_JSON(TenantId, tenantId_);
          DARABONBA_PTR_TO_JSON(Type, type_);
          DARABONBA_PTR_TO_JSON(Uid, uid_);
          DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
          DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
          DARABONBA_PTR_TO_JSON(Zones, zones_);
        };
        friend void from_json(const Darabonba::Json& j, MappCenterWorkspaceList& obj) { 
          DARABONBA_PTR_FROM_JSON(CompatibleId, compatibleId_);
          DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
          DARABONBA_PTR_FROM_JSON(DisplayName, displayName_);
          DARABONBA_PTR_FROM_JSON(Id, id_);
          DARABONBA_PTR_FROM_JSON(Region, region_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
          DARABONBA_PTR_FROM_JSON(TenantId, tenantId_);
          DARABONBA_PTR_FROM_JSON(Type, type_);
          DARABONBA_PTR_FROM_JSON(Uid, uid_);
          DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
          DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
          DARABONBA_PTR_FROM_JSON(Zones, zones_);
        };
        MappCenterWorkspaceList() = default ;
        MappCenterWorkspaceList(const MappCenterWorkspaceList &) = default ;
        MappCenterWorkspaceList(MappCenterWorkspaceList &&) = default ;
        MappCenterWorkspaceList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~MappCenterWorkspaceList() = default ;
        MappCenterWorkspaceList& operator=(const MappCenterWorkspaceList &) = default ;
        MappCenterWorkspaceList& operator=(MappCenterWorkspaceList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->compatibleId_ == nullptr
        && this->createTime_ == nullptr && this->displayName_ == nullptr && this->id_ == nullptr && this->region_ == nullptr && this->status_ == nullptr
        && this->tenantId_ == nullptr && this->type_ == nullptr && this->uid_ == nullptr && this->updateTime_ == nullptr && this->workspaceId_ == nullptr
        && this->zones_ == nullptr; };
        // compatibleId Field Functions 
        bool hasCompatibleId() const { return this->compatibleId_ != nullptr;};
        void deleteCompatibleId() { this->compatibleId_ = nullptr;};
        inline string getCompatibleId() const { DARABONBA_PTR_GET_DEFAULT(compatibleId_, "") };
        inline MappCenterWorkspaceList& setCompatibleId(string compatibleId) { DARABONBA_PTR_SET_VALUE(compatibleId_, compatibleId) };


        // createTime Field Functions 
        bool hasCreateTime() const { return this->createTime_ != nullptr;};
        void deleteCreateTime() { this->createTime_ = nullptr;};
        inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
        inline MappCenterWorkspaceList& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


        // displayName Field Functions 
        bool hasDisplayName() const { return this->displayName_ != nullptr;};
        void deleteDisplayName() { this->displayName_ = nullptr;};
        inline string getDisplayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
        inline MappCenterWorkspaceList& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
        inline MappCenterWorkspaceList& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // region Field Functions 
        bool hasRegion() const { return this->region_ != nullptr;};
        void deleteRegion() { this->region_ = nullptr;};
        inline string getRegion() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
        inline MappCenterWorkspaceList& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline MappCenterWorkspaceList& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // tenantId Field Functions 
        bool hasTenantId() const { return this->tenantId_ != nullptr;};
        void deleteTenantId() { this->tenantId_ = nullptr;};
        inline string getTenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
        inline MappCenterWorkspaceList& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline MappCenterWorkspaceList& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


        // uid Field Functions 
        bool hasUid() const { return this->uid_ != nullptr;};
        void deleteUid() { this->uid_ = nullptr;};
        inline int64_t getUid() const { DARABONBA_PTR_GET_DEFAULT(uid_, 0L) };
        inline MappCenterWorkspaceList& setUid(int64_t uid) { DARABONBA_PTR_SET_VALUE(uid_, uid) };


        // updateTime Field Functions 
        bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
        void deleteUpdateTime() { this->updateTime_ = nullptr;};
        inline string getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
        inline MappCenterWorkspaceList& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


        // workspaceId Field Functions 
        bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
        void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
        inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
        inline MappCenterWorkspaceList& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


        // zones Field Functions 
        bool hasZones() const { return this->zones_ != nullptr;};
        void deleteZones() { this->zones_ = nullptr;};
        inline string getZones() const { DARABONBA_PTR_GET_DEFAULT(zones_, "") };
        inline MappCenterWorkspaceList& setZones(string zones) { DARABONBA_PTR_SET_VALUE(zones_, zones) };


      protected:
        shared_ptr<string> compatibleId_ {};
        shared_ptr<string> createTime_ {};
        shared_ptr<string> displayName_ {};
        shared_ptr<string> id_ {};
        shared_ptr<string> region_ {};
        shared_ptr<string> status_ {};
        shared_ptr<string> tenantId_ {};
        shared_ptr<string> type_ {};
        shared_ptr<int64_t> uid_ {};
        shared_ptr<string> updateTime_ {};
        shared_ptr<string> workspaceId_ {};
        shared_ptr<string> zones_ {};
      };

      virtual bool empty() const override { return this->mappCenterWorkspaceList_ == nullptr
        && this->resultMsg_ == nullptr && this->success_ == nullptr && this->userId_ == nullptr; };
      // mappCenterWorkspaceList Field Functions 
      bool hasMappCenterWorkspaceList() const { return this->mappCenterWorkspaceList_ != nullptr;};
      void deleteMappCenterWorkspaceList() { this->mappCenterWorkspaceList_ = nullptr;};
      inline const vector<ListMappCenterWorkspaceResult::MappCenterWorkspaceList> & getMappCenterWorkspaceList() const { DARABONBA_PTR_GET_CONST(mappCenterWorkspaceList_, vector<ListMappCenterWorkspaceResult::MappCenterWorkspaceList>) };
      inline vector<ListMappCenterWorkspaceResult::MappCenterWorkspaceList> getMappCenterWorkspaceList() { DARABONBA_PTR_GET(mappCenterWorkspaceList_, vector<ListMappCenterWorkspaceResult::MappCenterWorkspaceList>) };
      inline ListMappCenterWorkspaceResult& setMappCenterWorkspaceList(const vector<ListMappCenterWorkspaceResult::MappCenterWorkspaceList> & mappCenterWorkspaceList) { DARABONBA_PTR_SET_VALUE(mappCenterWorkspaceList_, mappCenterWorkspaceList) };
      inline ListMappCenterWorkspaceResult& setMappCenterWorkspaceList(vector<ListMappCenterWorkspaceResult::MappCenterWorkspaceList> && mappCenterWorkspaceList) { DARABONBA_PTR_SET_RVALUE(mappCenterWorkspaceList_, mappCenterWorkspaceList) };


      // resultMsg Field Functions 
      bool hasResultMsg() const { return this->resultMsg_ != nullptr;};
      void deleteResultMsg() { this->resultMsg_ = nullptr;};
      inline string getResultMsg() const { DARABONBA_PTR_GET_DEFAULT(resultMsg_, "") };
      inline ListMappCenterWorkspaceResult& setResultMsg(string resultMsg) { DARABONBA_PTR_SET_VALUE(resultMsg_, resultMsg) };


      // success Field Functions 
      bool hasSuccess() const { return this->success_ != nullptr;};
      void deleteSuccess() { this->success_ = nullptr;};
      inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
      inline ListMappCenterWorkspaceResult& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


      // userId Field Functions 
      bool hasUserId() const { return this->userId_ != nullptr;};
      void deleteUserId() { this->userId_ = nullptr;};
      inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
      inline ListMappCenterWorkspaceResult& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


    protected:
      shared_ptr<vector<ListMappCenterWorkspaceResult::MappCenterWorkspaceList>> mappCenterWorkspaceList_ {};
      shared_ptr<string> resultMsg_ {};
      shared_ptr<bool> success_ {};
      shared_ptr<string> userId_ {};
    };

    virtual bool empty() const override { return this->listMappCenterWorkspaceResult_ == nullptr
        && this->requestId_ == nullptr && this->resultCode_ == nullptr && this->resultMessage_ == nullptr; };
    // listMappCenterWorkspaceResult Field Functions 
    bool hasListMappCenterWorkspaceResult() const { return this->listMappCenterWorkspaceResult_ != nullptr;};
    void deleteListMappCenterWorkspaceResult() { this->listMappCenterWorkspaceResult_ = nullptr;};
    inline const ListMappCenterWorkspacesResponseBody::ListMappCenterWorkspaceResult & getListMappCenterWorkspaceResult() const { DARABONBA_PTR_GET_CONST(listMappCenterWorkspaceResult_, ListMappCenterWorkspacesResponseBody::ListMappCenterWorkspaceResult) };
    inline ListMappCenterWorkspacesResponseBody::ListMappCenterWorkspaceResult getListMappCenterWorkspaceResult() { DARABONBA_PTR_GET(listMappCenterWorkspaceResult_, ListMappCenterWorkspacesResponseBody::ListMappCenterWorkspaceResult) };
    inline ListMappCenterWorkspacesResponseBody& setListMappCenterWorkspaceResult(const ListMappCenterWorkspacesResponseBody::ListMappCenterWorkspaceResult & listMappCenterWorkspaceResult) { DARABONBA_PTR_SET_VALUE(listMappCenterWorkspaceResult_, listMappCenterWorkspaceResult) };
    inline ListMappCenterWorkspacesResponseBody& setListMappCenterWorkspaceResult(ListMappCenterWorkspacesResponseBody::ListMappCenterWorkspaceResult && listMappCenterWorkspaceResult) { DARABONBA_PTR_SET_RVALUE(listMappCenterWorkspaceResult_, listMappCenterWorkspaceResult) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListMappCenterWorkspacesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resultCode Field Functions 
    bool hasResultCode() const { return this->resultCode_ != nullptr;};
    void deleteResultCode() { this->resultCode_ = nullptr;};
    inline string getResultCode() const { DARABONBA_PTR_GET_DEFAULT(resultCode_, "") };
    inline ListMappCenterWorkspacesResponseBody& setResultCode(string resultCode) { DARABONBA_PTR_SET_VALUE(resultCode_, resultCode) };


    // resultMessage Field Functions 
    bool hasResultMessage() const { return this->resultMessage_ != nullptr;};
    void deleteResultMessage() { this->resultMessage_ = nullptr;};
    inline string getResultMessage() const { DARABONBA_PTR_GET_DEFAULT(resultMessage_, "") };
    inline ListMappCenterWorkspacesResponseBody& setResultMessage(string resultMessage) { DARABONBA_PTR_SET_VALUE(resultMessage_, resultMessage) };


  protected:
    shared_ptr<ListMappCenterWorkspacesResponseBody::ListMappCenterWorkspaceResult> listMappCenterWorkspaceResult_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<string> resultCode_ {};
    shared_ptr<string> resultMessage_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MPaaS20201028
#endif
