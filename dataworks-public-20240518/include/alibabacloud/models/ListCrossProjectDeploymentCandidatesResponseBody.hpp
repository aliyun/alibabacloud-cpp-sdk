// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCROSSPROJECTDEPLOYMENTCANDIDATESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTCROSSPROJECTDEPLOYMENTCANDIDATESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class ListCrossProjectDeploymentCandidatesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListCrossProjectDeploymentCandidatesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ListCrossProjectDeploymentCandidatesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    ListCrossProjectDeploymentCandidatesResponseBody() = default ;
    ListCrossProjectDeploymentCandidatesResponseBody(const ListCrossProjectDeploymentCandidatesResponseBody &) = default ;
    ListCrossProjectDeploymentCandidatesResponseBody(ListCrossProjectDeploymentCandidatesResponseBody &&) = default ;
    ListCrossProjectDeploymentCandidatesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListCrossProjectDeploymentCandidatesResponseBody() = default ;
    ListCrossProjectDeploymentCandidatesResponseBody& operator=(const ListCrossProjectDeploymentCandidatesResponseBody &) = default ;
    ListCrossProjectDeploymentCandidatesResponseBody& operator=(ListCrossProjectDeploymentCandidatesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(DeploymentCandidates, deploymentCandidates_);
        DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(RequestId, requestId_);
        DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(DeploymentCandidates, deploymentCandidates_);
        DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
        DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
        DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
        DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
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
      class DeploymentCandidates : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const DeploymentCandidates& obj) { 
          DARABONBA_PTR_TO_JSON(ChangeType, changeType_);
          DARABONBA_PTR_TO_JSON(CommitTime, commitTime_);
          DARABONBA_PTR_TO_JSON(CommitUser, commitUser_);
          DARABONBA_PTR_TO_JSON(ObjectId, objectId_);
          DARABONBA_PTR_TO_JSON(ObjectName, objectName_);
          DARABONBA_PTR_TO_JSON(ObjectType, objectType_);
          DARABONBA_PTR_TO_JSON(ObjectVersion, objectVersion_);
        };
        friend void from_json(const Darabonba::Json& j, DeploymentCandidates& obj) { 
          DARABONBA_PTR_FROM_JSON(ChangeType, changeType_);
          DARABONBA_PTR_FROM_JSON(CommitTime, commitTime_);
          DARABONBA_PTR_FROM_JSON(CommitUser, commitUser_);
          DARABONBA_PTR_FROM_JSON(ObjectId, objectId_);
          DARABONBA_PTR_FROM_JSON(ObjectName, objectName_);
          DARABONBA_PTR_FROM_JSON(ObjectType, objectType_);
          DARABONBA_PTR_FROM_JSON(ObjectVersion, objectVersion_);
        };
        DeploymentCandidates() = default ;
        DeploymentCandidates(const DeploymentCandidates &) = default ;
        DeploymentCandidates(DeploymentCandidates &&) = default ;
        DeploymentCandidates(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~DeploymentCandidates() = default ;
        DeploymentCandidates& operator=(const DeploymentCandidates &) = default ;
        DeploymentCandidates& operator=(DeploymentCandidates &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->changeType_ == nullptr
        && this->commitTime_ == nullptr && this->commitUser_ == nullptr && this->objectId_ == nullptr && this->objectName_ == nullptr && this->objectType_ == nullptr
        && this->objectVersion_ == nullptr; };
        // changeType Field Functions 
        bool hasChangeType() const { return this->changeType_ != nullptr;};
        void deleteChangeType() { this->changeType_ = nullptr;};
        inline string getChangeType() const { DARABONBA_PTR_GET_DEFAULT(changeType_, "") };
        inline DeploymentCandidates& setChangeType(string changeType) { DARABONBA_PTR_SET_VALUE(changeType_, changeType) };


        // commitTime Field Functions 
        bool hasCommitTime() const { return this->commitTime_ != nullptr;};
        void deleteCommitTime() { this->commitTime_ = nullptr;};
        inline int64_t getCommitTime() const { DARABONBA_PTR_GET_DEFAULT(commitTime_, 0L) };
        inline DeploymentCandidates& setCommitTime(int64_t commitTime) { DARABONBA_PTR_SET_VALUE(commitTime_, commitTime) };


        // commitUser Field Functions 
        bool hasCommitUser() const { return this->commitUser_ != nullptr;};
        void deleteCommitUser() { this->commitUser_ = nullptr;};
        inline string getCommitUser() const { DARABONBA_PTR_GET_DEFAULT(commitUser_, "") };
        inline DeploymentCandidates& setCommitUser(string commitUser) { DARABONBA_PTR_SET_VALUE(commitUser_, commitUser) };


        // objectId Field Functions 
        bool hasObjectId() const { return this->objectId_ != nullptr;};
        void deleteObjectId() { this->objectId_ = nullptr;};
        inline string getObjectId() const { DARABONBA_PTR_GET_DEFAULT(objectId_, "") };
        inline DeploymentCandidates& setObjectId(string objectId) { DARABONBA_PTR_SET_VALUE(objectId_, objectId) };


        // objectName Field Functions 
        bool hasObjectName() const { return this->objectName_ != nullptr;};
        void deleteObjectName() { this->objectName_ = nullptr;};
        inline string getObjectName() const { DARABONBA_PTR_GET_DEFAULT(objectName_, "") };
        inline DeploymentCandidates& setObjectName(string objectName) { DARABONBA_PTR_SET_VALUE(objectName_, objectName) };


        // objectType Field Functions 
        bool hasObjectType() const { return this->objectType_ != nullptr;};
        void deleteObjectType() { this->objectType_ = nullptr;};
        inline string getObjectType() const { DARABONBA_PTR_GET_DEFAULT(objectType_, "") };
        inline DeploymentCandidates& setObjectType(string objectType) { DARABONBA_PTR_SET_VALUE(objectType_, objectType) };


        // objectVersion Field Functions 
        bool hasObjectVersion() const { return this->objectVersion_ != nullptr;};
        void deleteObjectVersion() { this->objectVersion_ = nullptr;};
        inline string getObjectVersion() const { DARABONBA_PTR_GET_DEFAULT(objectVersion_, "") };
        inline DeploymentCandidates& setObjectVersion(string objectVersion) { DARABONBA_PTR_SET_VALUE(objectVersion_, objectVersion) };


      protected:
        // The change type.
        shared_ptr<string> changeType_ {};
        // The commit time. This value is a UNIX timestamp in milliseconds.
        shared_ptr<int64_t> commitTime_ {};
        // The committer.
        shared_ptr<string> commitUser_ {};
        // The candidate object ID.
        shared_ptr<string> objectId_ {};
        // The candidate object name.
        shared_ptr<string> objectName_ {};
        // The candidate object type.
        shared_ptr<string> objectType_ {};
        // The candidate object version.
        shared_ptr<string> objectVersion_ {};
      };

      virtual bool empty() const override { return this->deploymentCandidates_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
      // deploymentCandidates Field Functions 
      bool hasDeploymentCandidates() const { return this->deploymentCandidates_ != nullptr;};
      void deleteDeploymentCandidates() { this->deploymentCandidates_ = nullptr;};
      inline const vector<Data::DeploymentCandidates> & getDeploymentCandidates() const { DARABONBA_PTR_GET_CONST(deploymentCandidates_, vector<Data::DeploymentCandidates>) };
      inline vector<Data::DeploymentCandidates> getDeploymentCandidates() { DARABONBA_PTR_GET(deploymentCandidates_, vector<Data::DeploymentCandidates>) };
      inline Data& setDeploymentCandidates(const vector<Data::DeploymentCandidates> & deploymentCandidates) { DARABONBA_PTR_SET_VALUE(deploymentCandidates_, deploymentCandidates) };
      inline Data& setDeploymentCandidates(vector<Data::DeploymentCandidates> && deploymentCandidates) { DARABONBA_PTR_SET_RVALUE(deploymentCandidates_, deploymentCandidates) };


      // pageNumber Field Functions 
      bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
      void deletePageNumber() { this->pageNumber_ = nullptr;};
      inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
      inline Data& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
      inline Data& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


      // requestId Field Functions 
      bool hasRequestId() const { return this->requestId_ != nullptr;};
      void deleteRequestId() { this->requestId_ = nullptr;};
      inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
      inline Data& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


      // totalCount Field Functions 
      bool hasTotalCount() const { return this->totalCount_ != nullptr;};
      void deleteTotalCount() { this->totalCount_ = nullptr;};
      inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
      inline Data& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    protected:
      // The list of candidate objects from the source workspace that are available for cross-workspace deployment.
      shared_ptr<vector<Data::DeploymentCandidates>> deploymentCandidates_ {};
      // The page number.
      shared_ptr<int32_t> pageNumber_ {};
      // The number of entries per page.
      shared_ptr<int32_t> pageSize_ {};
      // The request ID.
      shared_ptr<string> requestId_ {};
      // The total number of records.
      shared_ptr<int32_t> totalCount_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr && this->success_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ListCrossProjectDeploymentCandidatesResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, ListCrossProjectDeploymentCandidatesResponseBody::Data) };
    inline ListCrossProjectDeploymentCandidatesResponseBody::Data getData() { DARABONBA_PTR_GET(data_, ListCrossProjectDeploymentCandidatesResponseBody::Data) };
    inline ListCrossProjectDeploymentCandidatesResponseBody& setData(const ListCrossProjectDeploymentCandidatesResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListCrossProjectDeploymentCandidatesResponseBody& setData(ListCrossProjectDeploymentCandidatesResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListCrossProjectDeploymentCandidatesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListCrossProjectDeploymentCandidatesResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The business response.
    shared_ptr<ListCrossProjectDeploymentCandidatesResponseBody::Data> data_ {};
    // The request ID, which is used to locate and troubleshoot this API call.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
