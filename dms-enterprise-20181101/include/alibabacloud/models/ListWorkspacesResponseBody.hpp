// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTWORKSPACESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTWORKSPACESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class ListWorkspacesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListWorkspacesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListWorkspacesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListWorkspacesResponseBody() = default ;
    ListWorkspacesResponseBody(const ListWorkspacesResponseBody &) = default ;
    ListWorkspacesResponseBody(ListWorkspacesResponseBody &&) = default ;
    ListWorkspacesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListWorkspacesResponseBody() = default ;
    ListWorkspacesResponseBody& operator=(const ListWorkspacesResponseBody &) = default ;
    ListWorkspacesResponseBody& operator=(ListWorkspacesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(BaseWorkspaces, baseWorkspaces_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(BaseWorkspaces, baseWorkspaces_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class BaseWorkspaces : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const BaseWorkspaces& obj) { 
          DARABONBA_PTR_TO_JSON(AlreadyJoined, alreadyJoined_);
          DARABONBA_PTR_TO_JSON(CreatorId, creatorId_);
          DARABONBA_PTR_TO_JSON(CreatorNickName, creatorNickName_);
          DARABONBA_PTR_TO_JSON(CreatorUid, creatorUid_);
          DARABONBA_PTR_TO_JSON(Description, description_);
          DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
          DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
          DARABONBA_PTR_TO_JSON(OwnerNickName, ownerNickName_);
          DARABONBA_PTR_TO_JSON(OwnerUid, ownerUid_);
          DARABONBA_PTR_TO_JSON(Region, region_);
          DARABONBA_PTR_TO_JSON(ServiceAccountId, serviceAccountId_);
          DARABONBA_PTR_TO_JSON(ServiceAccountNickName, serviceAccountNickName_);
          DARABONBA_PTR_TO_JSON(ServiceAccountUid, serviceAccountUid_);
          DARABONBA_PTR_TO_JSON(TenantId, tenantId_);
          DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
          DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
          DARABONBA_PTR_TO_JSON(WorkspaceName, workspaceName_);
        };
        friend void from_json(const Darabonba::Json& j, BaseWorkspaces& obj) { 
          DARABONBA_PTR_FROM_JSON(AlreadyJoined, alreadyJoined_);
          DARABONBA_PTR_FROM_JSON(CreatorId, creatorId_);
          DARABONBA_PTR_FROM_JSON(CreatorNickName, creatorNickName_);
          DARABONBA_PTR_FROM_JSON(CreatorUid, creatorUid_);
          DARABONBA_PTR_FROM_JSON(Description, description_);
          DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
          DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
          DARABONBA_PTR_FROM_JSON(OwnerNickName, ownerNickName_);
          DARABONBA_PTR_FROM_JSON(OwnerUid, ownerUid_);
          DARABONBA_PTR_FROM_JSON(Region, region_);
          DARABONBA_PTR_FROM_JSON(ServiceAccountId, serviceAccountId_);
          DARABONBA_PTR_FROM_JSON(ServiceAccountNickName, serviceAccountNickName_);
          DARABONBA_PTR_FROM_JSON(ServiceAccountUid, serviceAccountUid_);
          DARABONBA_PTR_FROM_JSON(TenantId, tenantId_);
          DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
          DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
          DARABONBA_PTR_FROM_JSON(WorkspaceName, workspaceName_);
        };
        BaseWorkspaces() = default ;
        BaseWorkspaces(const BaseWorkspaces &) = default ;
        BaseWorkspaces(BaseWorkspaces &&) = default ;
        BaseWorkspaces(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~BaseWorkspaces() = default ;
        BaseWorkspaces& operator=(const BaseWorkspaces &) = default ;
        BaseWorkspaces& operator=(BaseWorkspaces &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->alreadyJoined_ == nullptr
        && this->creatorId_ == nullptr && this->creatorNickName_ == nullptr && this->creatorUid_ == nullptr && this->description_ == nullptr && this->gmtCreate_ == nullptr
        && this->gmtModified_ == nullptr && this->name_ == nullptr && this->ownerId_ == nullptr && this->ownerNickName_ == nullptr && this->ownerUid_ == nullptr
        && this->region_ == nullptr && this->serviceAccountId_ == nullptr && this->serviceAccountNickName_ == nullptr && this->serviceAccountUid_ == nullptr && this->tenantId_ == nullptr
        && this->vpcId_ == nullptr && this->workspaceId_ == nullptr && this->workspaceName_ == nullptr; };
        // alreadyJoined Field Functions 
        bool hasAlreadyJoined() const { return this->alreadyJoined_ != nullptr;};
        void deleteAlreadyJoined() { this->alreadyJoined_ = nullptr;};
        inline bool getAlreadyJoined() const { DARABONBA_PTR_GET_DEFAULT(alreadyJoined_, false) };
        inline BaseWorkspaces& setAlreadyJoined(bool alreadyJoined) { DARABONBA_PTR_SET_VALUE(alreadyJoined_, alreadyJoined) };


        // creatorId Field Functions 
        bool hasCreatorId() const { return this->creatorId_ != nullptr;};
        void deleteCreatorId() { this->creatorId_ = nullptr;};
        inline int64_t getCreatorId() const { DARABONBA_PTR_GET_DEFAULT(creatorId_, 0L) };
        inline BaseWorkspaces& setCreatorId(int64_t creatorId) { DARABONBA_PTR_SET_VALUE(creatorId_, creatorId) };


        // creatorNickName Field Functions 
        bool hasCreatorNickName() const { return this->creatorNickName_ != nullptr;};
        void deleteCreatorNickName() { this->creatorNickName_ = nullptr;};
        inline string getCreatorNickName() const { DARABONBA_PTR_GET_DEFAULT(creatorNickName_, "") };
        inline BaseWorkspaces& setCreatorNickName(string creatorNickName) { DARABONBA_PTR_SET_VALUE(creatorNickName_, creatorNickName) };


        // creatorUid Field Functions 
        bool hasCreatorUid() const { return this->creatorUid_ != nullptr;};
        void deleteCreatorUid() { this->creatorUid_ = nullptr;};
        inline string getCreatorUid() const { DARABONBA_PTR_GET_DEFAULT(creatorUid_, "") };
        inline BaseWorkspaces& setCreatorUid(string creatorUid) { DARABONBA_PTR_SET_VALUE(creatorUid_, creatorUid) };


        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline BaseWorkspaces& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // gmtCreate Field Functions 
        bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
        void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
        inline string getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
        inline BaseWorkspaces& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


        // gmtModified Field Functions 
        bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
        void deleteGmtModified() { this->gmtModified_ = nullptr;};
        inline string getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
        inline BaseWorkspaces& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline BaseWorkspaces& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // ownerId Field Functions 
        bool hasOwnerId() const { return this->ownerId_ != nullptr;};
        void deleteOwnerId() { this->ownerId_ = nullptr;};
        inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
        inline BaseWorkspaces& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


        // ownerNickName Field Functions 
        bool hasOwnerNickName() const { return this->ownerNickName_ != nullptr;};
        void deleteOwnerNickName() { this->ownerNickName_ = nullptr;};
        inline string getOwnerNickName() const { DARABONBA_PTR_GET_DEFAULT(ownerNickName_, "") };
        inline BaseWorkspaces& setOwnerNickName(string ownerNickName) { DARABONBA_PTR_SET_VALUE(ownerNickName_, ownerNickName) };


        // ownerUid Field Functions 
        bool hasOwnerUid() const { return this->ownerUid_ != nullptr;};
        void deleteOwnerUid() { this->ownerUid_ = nullptr;};
        inline string getOwnerUid() const { DARABONBA_PTR_GET_DEFAULT(ownerUid_, "") };
        inline BaseWorkspaces& setOwnerUid(string ownerUid) { DARABONBA_PTR_SET_VALUE(ownerUid_, ownerUid) };


        // region Field Functions 
        bool hasRegion() const { return this->region_ != nullptr;};
        void deleteRegion() { this->region_ = nullptr;};
        inline string getRegion() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
        inline BaseWorkspaces& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


        // serviceAccountId Field Functions 
        bool hasServiceAccountId() const { return this->serviceAccountId_ != nullptr;};
        void deleteServiceAccountId() { this->serviceAccountId_ = nullptr;};
        inline int64_t getServiceAccountId() const { DARABONBA_PTR_GET_DEFAULT(serviceAccountId_, 0L) };
        inline BaseWorkspaces& setServiceAccountId(int64_t serviceAccountId) { DARABONBA_PTR_SET_VALUE(serviceAccountId_, serviceAccountId) };


        // serviceAccountNickName Field Functions 
        bool hasServiceAccountNickName() const { return this->serviceAccountNickName_ != nullptr;};
        void deleteServiceAccountNickName() { this->serviceAccountNickName_ = nullptr;};
        inline string getServiceAccountNickName() const { DARABONBA_PTR_GET_DEFAULT(serviceAccountNickName_, "") };
        inline BaseWorkspaces& setServiceAccountNickName(string serviceAccountNickName) { DARABONBA_PTR_SET_VALUE(serviceAccountNickName_, serviceAccountNickName) };


        // serviceAccountUid Field Functions 
        bool hasServiceAccountUid() const { return this->serviceAccountUid_ != nullptr;};
        void deleteServiceAccountUid() { this->serviceAccountUid_ = nullptr;};
        inline string getServiceAccountUid() const { DARABONBA_PTR_GET_DEFAULT(serviceAccountUid_, "") };
        inline BaseWorkspaces& setServiceAccountUid(string serviceAccountUid) { DARABONBA_PTR_SET_VALUE(serviceAccountUid_, serviceAccountUid) };


        // tenantId Field Functions 
        bool hasTenantId() const { return this->tenantId_ != nullptr;};
        void deleteTenantId() { this->tenantId_ = nullptr;};
        inline int64_t getTenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, 0L) };
        inline BaseWorkspaces& setTenantId(int64_t tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


        // vpcId Field Functions 
        bool hasVpcId() const { return this->vpcId_ != nullptr;};
        void deleteVpcId() { this->vpcId_ = nullptr;};
        inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
        inline BaseWorkspaces& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


        // workspaceId Field Functions 
        bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
        void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
        inline int64_t getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, 0L) };
        inline BaseWorkspaces& setWorkspaceId(int64_t workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


        // workspaceName Field Functions 
        bool hasWorkspaceName() const { return this->workspaceName_ != nullptr;};
        void deleteWorkspaceName() { this->workspaceName_ = nullptr;};
        inline string getWorkspaceName() const { DARABONBA_PTR_GET_DEFAULT(workspaceName_, "") };
        inline BaseWorkspaces& setWorkspaceName(string workspaceName) { DARABONBA_PTR_SET_VALUE(workspaceName_, workspaceName) };


      protected:
        // Whether the current user has joined the workspace.
        shared_ptr<bool> alreadyJoined_ {};
        // The ID of the creator.
        shared_ptr<int64_t> creatorId_ {};
        // The nickname of the creator.
        shared_ptr<string> creatorNickName_ {};
        // The Alibaba Cloud account UID of the creator.
        shared_ptr<string> creatorUid_ {};
        // The description of the workspace.
        shared_ptr<string> description_ {};
        // The creation time.
        shared_ptr<string> gmtCreate_ {};
        // The update time.
        shared_ptr<string> gmtModified_ {};
        // The name of the workspace.
        shared_ptr<string> name_ {};
        // The owner ID.
        shared_ptr<int64_t> ownerId_ {};
        // The nickname of the owner.
        shared_ptr<string> ownerNickName_ {};
        // The Alibaba Cloud UID of the owner.
        shared_ptr<string> ownerUid_ {};
        // The region ID.
        shared_ptr<string> region_ {};
        // The ID of the service account.
        shared_ptr<int64_t> serviceAccountId_ {};
        // The nickname of the service account.
        shared_ptr<string> serviceAccountNickName_ {};
        // The Alibaba Cloud account UID of the service account.
        shared_ptr<string> serviceAccountUid_ {};
        // The ID of the tenant to which the workspace belongs.
        shared_ptr<int64_t> tenantId_ {};
        // The VPC ID.
        shared_ptr<string> vpcId_ {};
        // The workspace ID.
        shared_ptr<int64_t> workspaceId_ {};
        // The name of the workspace.
        shared_ptr<string> workspaceName_ {};
      };

      virtual bool empty() const override { return this->baseWorkspaces_ == nullptr; };
      // baseWorkspaces Field Functions 
      bool hasBaseWorkspaces() const { return this->baseWorkspaces_ != nullptr;};
      void deleteBaseWorkspaces() { this->baseWorkspaces_ = nullptr;};
      inline const vector<Data::BaseWorkspaces> & getBaseWorkspaces() const { DARABONBA_PTR_GET_CONST(baseWorkspaces_, vector<Data::BaseWorkspaces>) };
      inline vector<Data::BaseWorkspaces> getBaseWorkspaces() { DARABONBA_PTR_GET(baseWorkspaces_, vector<Data::BaseWorkspaces>) };
      inline Data& setBaseWorkspaces(const vector<Data::BaseWorkspaces> & baseWorkspaces) { DARABONBA_PTR_SET_VALUE(baseWorkspaces_, baseWorkspaces) };
      inline Data& setBaseWorkspaces(vector<Data::BaseWorkspaces> && baseWorkspaces) { DARABONBA_PTR_SET_RVALUE(baseWorkspaces_, baseWorkspaces) };


    protected:
      shared_ptr<vector<Data::BaseWorkspaces>> baseWorkspaces_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->errorCode_ == nullptr && this->errorMessage_ == nullptr && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->requestId_ == nullptr
        && this->success_ == nullptr && this->totalCount_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ListWorkspacesResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, ListWorkspacesResponseBody::Data) };
    inline ListWorkspacesResponseBody::Data getData() { DARABONBA_PTR_GET(data_, ListWorkspacesResponseBody::Data) };
    inline ListWorkspacesResponseBody& setData(const ListWorkspacesResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListWorkspacesResponseBody& setData(ListWorkspacesResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline ListWorkspacesResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline ListWorkspacesResponseBody& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListWorkspacesResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListWorkspacesResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListWorkspacesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListWorkspacesResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ListWorkspacesResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The dataset.
    shared_ptr<ListWorkspacesResponseBody::Data> data_ {};
    // The error code.
    shared_ptr<string> errorCode_ {};
    // The error message that is returned if the request failed.
    shared_ptr<string> errorMessage_ {};
    // The total number of workspaces that meet the condition, which is the same as the TotalCount parameter.
    shared_ptr<int32_t> maxResults_ {};
    // NextToken does not take effect.
    shared_ptr<string> nextToken_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the call was successful. Valid values:
    // 
    // *   **true**: The request succeeded.
    // *   **false**: The request failed.
    shared_ptr<bool> success_ {};
    // The total number of workspaces that meet the conditions.
    shared_ptr<int64_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
