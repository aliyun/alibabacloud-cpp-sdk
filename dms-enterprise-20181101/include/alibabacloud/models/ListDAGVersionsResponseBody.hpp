// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDAGVERSIONSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTDAGVERSIONSRESPONSEBODY_HPP_
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
  class ListDAGVersionsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDAGVersionsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DagVersionList, dagVersionList_);
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListDAGVersionsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DagVersionList, dagVersionList_);
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListDAGVersionsResponseBody() = default ;
    ListDAGVersionsResponseBody(const ListDAGVersionsResponseBody &) = default ;
    ListDAGVersionsResponseBody(ListDAGVersionsResponseBody &&) = default ;
    ListDAGVersionsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDAGVersionsResponseBody() = default ;
    ListDAGVersionsResponseBody& operator=(const ListDAGVersionsResponseBody &) = default ;
    ListDAGVersionsResponseBody& operator=(ListDAGVersionsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class DagVersionList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DagVersionList& obj) { 
        DARABONBA_PTR_TO_JSON(DagVersion, dagVersion_);
      };
      friend void from_json(const Darabonba::Json& j, DagVersionList& obj) { 
        DARABONBA_PTR_FROM_JSON(DagVersion, dagVersion_);
      };
      DagVersionList() = default ;
      DagVersionList(const DagVersionList &) = default ;
      DagVersionList(DagVersionList &&) = default ;
      DagVersionList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DagVersionList() = default ;
      DagVersionList& operator=(const DagVersionList &) = default ;
      DagVersionList& operator=(DagVersionList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class DagVersion : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const DagVersion& obj) { 
          DARABONBA_PTR_TO_JSON(DagName, dagName_);
          DARABONBA_PTR_TO_JSON(DagOwnerId, dagOwnerId_);
          DARABONBA_PTR_TO_JSON(DagOwnerNickName, dagOwnerNickName_);
          DARABONBA_PTR_TO_JSON(LastVersionId, lastVersionId_);
          DARABONBA_PTR_TO_JSON(VersionComments, versionComments_);
          DARABONBA_PTR_TO_JSON(VersionId, versionId_);
        };
        friend void from_json(const Darabonba::Json& j, DagVersion& obj) { 
          DARABONBA_PTR_FROM_JSON(DagName, dagName_);
          DARABONBA_PTR_FROM_JSON(DagOwnerId, dagOwnerId_);
          DARABONBA_PTR_FROM_JSON(DagOwnerNickName, dagOwnerNickName_);
          DARABONBA_PTR_FROM_JSON(LastVersionId, lastVersionId_);
          DARABONBA_PTR_FROM_JSON(VersionComments, versionComments_);
          DARABONBA_PTR_FROM_JSON(VersionId, versionId_);
        };
        DagVersion() = default ;
        DagVersion(const DagVersion &) = default ;
        DagVersion(DagVersion &&) = default ;
        DagVersion(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~DagVersion() = default ;
        DagVersion& operator=(const DagVersion &) = default ;
        DagVersion& operator=(DagVersion &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->dagName_ == nullptr
        && this->dagOwnerId_ == nullptr && this->dagOwnerNickName_ == nullptr && this->lastVersionId_ == nullptr && this->versionComments_ == nullptr && this->versionId_ == nullptr; };
        // dagName Field Functions 
        bool hasDagName() const { return this->dagName_ != nullptr;};
        void deleteDagName() { this->dagName_ = nullptr;};
        inline string getDagName() const { DARABONBA_PTR_GET_DEFAULT(dagName_, "") };
        inline DagVersion& setDagName(string dagName) { DARABONBA_PTR_SET_VALUE(dagName_, dagName) };


        // dagOwnerId Field Functions 
        bool hasDagOwnerId() const { return this->dagOwnerId_ != nullptr;};
        void deleteDagOwnerId() { this->dagOwnerId_ = nullptr;};
        inline string getDagOwnerId() const { DARABONBA_PTR_GET_DEFAULT(dagOwnerId_, "") };
        inline DagVersion& setDagOwnerId(string dagOwnerId) { DARABONBA_PTR_SET_VALUE(dagOwnerId_, dagOwnerId) };


        // dagOwnerNickName Field Functions 
        bool hasDagOwnerNickName() const { return this->dagOwnerNickName_ != nullptr;};
        void deleteDagOwnerNickName() { this->dagOwnerNickName_ = nullptr;};
        inline string getDagOwnerNickName() const { DARABONBA_PTR_GET_DEFAULT(dagOwnerNickName_, "") };
        inline DagVersion& setDagOwnerNickName(string dagOwnerNickName) { DARABONBA_PTR_SET_VALUE(dagOwnerNickName_, dagOwnerNickName) };


        // lastVersionId Field Functions 
        bool hasLastVersionId() const { return this->lastVersionId_ != nullptr;};
        void deleteLastVersionId() { this->lastVersionId_ = nullptr;};
        inline int64_t getLastVersionId() const { DARABONBA_PTR_GET_DEFAULT(lastVersionId_, 0L) };
        inline DagVersion& setLastVersionId(int64_t lastVersionId) { DARABONBA_PTR_SET_VALUE(lastVersionId_, lastVersionId) };


        // versionComments Field Functions 
        bool hasVersionComments() const { return this->versionComments_ != nullptr;};
        void deleteVersionComments() { this->versionComments_ = nullptr;};
        inline string getVersionComments() const { DARABONBA_PTR_GET_DEFAULT(versionComments_, "") };
        inline DagVersion& setVersionComments(string versionComments) { DARABONBA_PTR_SET_VALUE(versionComments_, versionComments) };


        // versionId Field Functions 
        bool hasVersionId() const { return this->versionId_ != nullptr;};
        void deleteVersionId() { this->versionId_ = nullptr;};
        inline int64_t getVersionId() const { DARABONBA_PTR_GET_DEFAULT(versionId_, 0L) };
        inline DagVersion& setVersionId(int64_t versionId) { DARABONBA_PTR_SET_VALUE(versionId_, versionId) };


      protected:
        // The name of the task flow.
        shared_ptr<string> dagName_ {};
        // The ID of the task flow owner.
        shared_ptr<string> dagOwnerId_ {};
        // The name of the task flow owner.
        shared_ptr<string> dagOwnerNickName_ {};
        // The ID of the previously published version.
        shared_ptr<int64_t> lastVersionId_ {};
        // The description of the version.
        shared_ptr<string> versionComments_ {};
        // The ID of the version.
        shared_ptr<int64_t> versionId_ {};
      };

      virtual bool empty() const override { return this->dagVersion_ == nullptr; };
      // dagVersion Field Functions 
      bool hasDagVersion() const { return this->dagVersion_ != nullptr;};
      void deleteDagVersion() { this->dagVersion_ = nullptr;};
      inline const vector<DagVersionList::DagVersion> & getDagVersion() const { DARABONBA_PTR_GET_CONST(dagVersion_, vector<DagVersionList::DagVersion>) };
      inline vector<DagVersionList::DagVersion> getDagVersion() { DARABONBA_PTR_GET(dagVersion_, vector<DagVersionList::DagVersion>) };
      inline DagVersionList& setDagVersion(const vector<DagVersionList::DagVersion> & dagVersion) { DARABONBA_PTR_SET_VALUE(dagVersion_, dagVersion) };
      inline DagVersionList& setDagVersion(vector<DagVersionList::DagVersion> && dagVersion) { DARABONBA_PTR_SET_RVALUE(dagVersion_, dagVersion) };


    protected:
      shared_ptr<vector<DagVersionList::DagVersion>> dagVersion_ {};
    };

    virtual bool empty() const override { return this->dagVersionList_ == nullptr
        && this->errorCode_ == nullptr && this->errorMessage_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr && this->totalCount_ == nullptr; };
    // dagVersionList Field Functions 
    bool hasDagVersionList() const { return this->dagVersionList_ != nullptr;};
    void deleteDagVersionList() { this->dagVersionList_ = nullptr;};
    inline const ListDAGVersionsResponseBody::DagVersionList & getDagVersionList() const { DARABONBA_PTR_GET_CONST(dagVersionList_, ListDAGVersionsResponseBody::DagVersionList) };
    inline ListDAGVersionsResponseBody::DagVersionList getDagVersionList() { DARABONBA_PTR_GET(dagVersionList_, ListDAGVersionsResponseBody::DagVersionList) };
    inline ListDAGVersionsResponseBody& setDagVersionList(const ListDAGVersionsResponseBody::DagVersionList & dagVersionList) { DARABONBA_PTR_SET_VALUE(dagVersionList_, dagVersionList) };
    inline ListDAGVersionsResponseBody& setDagVersionList(ListDAGVersionsResponseBody::DagVersionList && dagVersionList) { DARABONBA_PTR_SET_RVALUE(dagVersionList_, dagVersionList) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline ListDAGVersionsResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline ListDAGVersionsResponseBody& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListDAGVersionsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListDAGVersionsResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListDAGVersionsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The information about the published versions.
    shared_ptr<ListDAGVersionsResponseBody::DagVersionList> dagVersionList_ {};
    // The error code returned if the request fails.
    shared_ptr<string> errorCode_ {};
    // The error message returned if the request fails.
    shared_ptr<string> errorMessage_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request is successful. Valid values:
    // 
    // *   **true**: The request is successful.
    // *   **false**: The request fails.
    shared_ptr<bool> success_ {};
    // The total number of entries returned.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
