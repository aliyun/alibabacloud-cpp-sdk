// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCODEREVIEWSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTCODEREVIEWSRESPONSEBODY_HPP_
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
  class ListCodeReviewsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListCodeReviewsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PagingInfo, pagingInfo_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListCodeReviewsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PagingInfo, pagingInfo_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListCodeReviewsResponseBody() = default ;
    ListCodeReviewsResponseBody(const ListCodeReviewsResponseBody &) = default ;
    ListCodeReviewsResponseBody(ListCodeReviewsResponseBody &&) = default ;
    ListCodeReviewsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListCodeReviewsResponseBody() = default ;
    ListCodeReviewsResponseBody& operator=(const ListCodeReviewsResponseBody &) = default ;
    ListCodeReviewsResponseBody& operator=(ListCodeReviewsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class PagingInfo : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PagingInfo& obj) { 
        DARABONBA_PTR_TO_JSON(CodeReviews, codeReviews_);
        DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      };
      friend void from_json(const Darabonba::Json& j, PagingInfo& obj) { 
        DARABONBA_PTR_FROM_JSON(CodeReviews, codeReviews_);
        DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
        DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
        DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      };
      PagingInfo() = default ;
      PagingInfo(const PagingInfo &) = default ;
      PagingInfo(PagingInfo &&) = default ;
      PagingInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~PagingInfo() = default ;
      PagingInfo& operator=(const PagingInfo &) = default ;
      PagingInfo& operator=(PagingInfo &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class CodeReviews : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const CodeReviews& obj) { 
          DARABONBA_PTR_TO_JSON(Command, command_);
          DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
          DARABONBA_PTR_TO_JSON(Creator, creator_);
          DARABONBA_PTR_TO_JSON(Description, description_);
          DARABONBA_PTR_TO_JSON(FinalReviewer, finalReviewer_);
          DARABONBA_PTR_TO_JSON(Id, id_);
          DARABONBA_PTR_TO_JSON(ModifyTime, modifyTime_);
          DARABONBA_PTR_TO_JSON(ObjectId, objectId_);
          DARABONBA_PTR_TO_JSON(ObjectName, objectName_);
          DARABONBA_PTR_TO_JSON(ObjectType, objectType_);
          DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
          DARABONBA_PTR_TO_JSON(RegionId, regionId_);
          DARABONBA_PTR_TO_JSON(ReviewTime, reviewTime_);
          DARABONBA_PTR_TO_JSON(Reviewers, reviewers_);
          DARABONBA_PTR_TO_JSON(Status, status_);
        };
        friend void from_json(const Darabonba::Json& j, CodeReviews& obj) { 
          DARABONBA_PTR_FROM_JSON(Command, command_);
          DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
          DARABONBA_PTR_FROM_JSON(Creator, creator_);
          DARABONBA_PTR_FROM_JSON(Description, description_);
          DARABONBA_PTR_FROM_JSON(FinalReviewer, finalReviewer_);
          DARABONBA_PTR_FROM_JSON(Id, id_);
          DARABONBA_PTR_FROM_JSON(ModifyTime, modifyTime_);
          DARABONBA_PTR_FROM_JSON(ObjectId, objectId_);
          DARABONBA_PTR_FROM_JSON(ObjectName, objectName_);
          DARABONBA_PTR_FROM_JSON(ObjectType, objectType_);
          DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
          DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
          DARABONBA_PTR_FROM_JSON(ReviewTime, reviewTime_);
          DARABONBA_PTR_FROM_JSON(Reviewers, reviewers_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
        };
        CodeReviews() = default ;
        CodeReviews(const CodeReviews &) = default ;
        CodeReviews(CodeReviews &&) = default ;
        CodeReviews(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~CodeReviews() = default ;
        CodeReviews& operator=(const CodeReviews &) = default ;
        CodeReviews& operator=(CodeReviews &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->command_ == nullptr
        && this->createTime_ == nullptr && this->creator_ == nullptr && this->description_ == nullptr && this->finalReviewer_ == nullptr && this->id_ == nullptr
        && this->modifyTime_ == nullptr && this->objectId_ == nullptr && this->objectName_ == nullptr && this->objectType_ == nullptr && this->projectId_ == nullptr
        && this->regionId_ == nullptr && this->reviewTime_ == nullptr && this->reviewers_ == nullptr && this->status_ == nullptr; };
        // command Field Functions 
        bool hasCommand() const { return this->command_ != nullptr;};
        void deleteCommand() { this->command_ = nullptr;};
        inline string getCommand() const { DARABONBA_PTR_GET_DEFAULT(command_, "") };
        inline CodeReviews& setCommand(string command) { DARABONBA_PTR_SET_VALUE(command_, command) };


        // createTime Field Functions 
        bool hasCreateTime() const { return this->createTime_ != nullptr;};
        void deleteCreateTime() { this->createTime_ = nullptr;};
        inline int64_t getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
        inline CodeReviews& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


        // creator Field Functions 
        bool hasCreator() const { return this->creator_ != nullptr;};
        void deleteCreator() { this->creator_ = nullptr;};
        inline string getCreator() const { DARABONBA_PTR_GET_DEFAULT(creator_, "") };
        inline CodeReviews& setCreator(string creator) { DARABONBA_PTR_SET_VALUE(creator_, creator) };


        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline CodeReviews& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // finalReviewer Field Functions 
        bool hasFinalReviewer() const { return this->finalReviewer_ != nullptr;};
        void deleteFinalReviewer() { this->finalReviewer_ = nullptr;};
        inline string getFinalReviewer() const { DARABONBA_PTR_GET_DEFAULT(finalReviewer_, "") };
        inline CodeReviews& setFinalReviewer(string finalReviewer) { DARABONBA_PTR_SET_VALUE(finalReviewer_, finalReviewer) };


        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
        inline CodeReviews& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // modifyTime Field Functions 
        bool hasModifyTime() const { return this->modifyTime_ != nullptr;};
        void deleteModifyTime() { this->modifyTime_ = nullptr;};
        inline int64_t getModifyTime() const { DARABONBA_PTR_GET_DEFAULT(modifyTime_, 0L) };
        inline CodeReviews& setModifyTime(int64_t modifyTime) { DARABONBA_PTR_SET_VALUE(modifyTime_, modifyTime) };


        // objectId Field Functions 
        bool hasObjectId() const { return this->objectId_ != nullptr;};
        void deleteObjectId() { this->objectId_ = nullptr;};
        inline string getObjectId() const { DARABONBA_PTR_GET_DEFAULT(objectId_, "") };
        inline CodeReviews& setObjectId(string objectId) { DARABONBA_PTR_SET_VALUE(objectId_, objectId) };


        // objectName Field Functions 
        bool hasObjectName() const { return this->objectName_ != nullptr;};
        void deleteObjectName() { this->objectName_ = nullptr;};
        inline string getObjectName() const { DARABONBA_PTR_GET_DEFAULT(objectName_, "") };
        inline CodeReviews& setObjectName(string objectName) { DARABONBA_PTR_SET_VALUE(objectName_, objectName) };


        // objectType Field Functions 
        bool hasObjectType() const { return this->objectType_ != nullptr;};
        void deleteObjectType() { this->objectType_ = nullptr;};
        inline string getObjectType() const { DARABONBA_PTR_GET_DEFAULT(objectType_, "") };
        inline CodeReviews& setObjectType(string objectType) { DARABONBA_PTR_SET_VALUE(objectType_, objectType) };


        // projectId Field Functions 
        bool hasProjectId() const { return this->projectId_ != nullptr;};
        void deleteProjectId() { this->projectId_ = nullptr;};
        inline int64_t getProjectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
        inline CodeReviews& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


        // regionId Field Functions 
        bool hasRegionId() const { return this->regionId_ != nullptr;};
        void deleteRegionId() { this->regionId_ = nullptr;};
        inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
        inline CodeReviews& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


        // reviewTime Field Functions 
        bool hasReviewTime() const { return this->reviewTime_ != nullptr;};
        void deleteReviewTime() { this->reviewTime_ = nullptr;};
        inline int64_t getReviewTime() const { DARABONBA_PTR_GET_DEFAULT(reviewTime_, 0L) };
        inline CodeReviews& setReviewTime(int64_t reviewTime) { DARABONBA_PTR_SET_VALUE(reviewTime_, reviewTime) };


        // reviewers Field Functions 
        bool hasReviewers() const { return this->reviewers_ != nullptr;};
        void deleteReviewers() { this->reviewers_ = nullptr;};
        inline const vector<string> & getReviewers() const { DARABONBA_PTR_GET_CONST(reviewers_, vector<string>) };
        inline vector<string> getReviewers() { DARABONBA_PTR_GET(reviewers_, vector<string>) };
        inline CodeReviews& setReviewers(const vector<string> & reviewers) { DARABONBA_PTR_SET_VALUE(reviewers_, reviewers) };
        inline CodeReviews& setReviewers(vector<string> && reviewers) { DARABONBA_PTR_SET_RVALUE(reviewers_, reviewers) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline CodeReviews& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      protected:
        // The node command of the root object.
        shared_ptr<string> command_ {};
        // The creation time. The value is a UNIX timestamp in milliseconds.
        shared_ptr<int64_t> createTime_ {};
        // The account ID of the actual submitter.
        shared_ptr<string> creator_ {};
        // The review description provided upon creation.
        shared_ptr<string> description_ {};
        // The account ID of the final approver. This field is empty if no approval decision has been made.
        shared_ptr<string> finalReviewer_ {};
        // The unique ID of the review.
        shared_ptr<string> id_ {};
        // The update time. The value is a UNIX timestamp in milliseconds.
        shared_ptr<int64_t> modifyTime_ {};
        // The ID of the root review object.
        shared_ptr<string> objectId_ {};
        // The name of the root review object.
        shared_ptr<string> objectName_ {};
        // The root object type.
        shared_ptr<string> objectType_ {};
        // The workspace ID.
        shared_ptr<int64_t> projectId_ {};
        // The region ID.
        shared_ptr<string> regionId_ {};
        // The approval time. This field is empty if no approval decision has been made.
        shared_ptr<int64_t> reviewTime_ {};
        // The list of account IDs of the specified reviewers.
        shared_ptr<vector<string>> reviewers_ {};
        // The review status.
        shared_ptr<string> status_ {};
      };

      virtual bool empty() const override { return this->codeReviews_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->totalCount_ == nullptr; };
      // codeReviews Field Functions 
      bool hasCodeReviews() const { return this->codeReviews_ != nullptr;};
      void deleteCodeReviews() { this->codeReviews_ = nullptr;};
      inline const vector<PagingInfo::CodeReviews> & getCodeReviews() const { DARABONBA_PTR_GET_CONST(codeReviews_, vector<PagingInfo::CodeReviews>) };
      inline vector<PagingInfo::CodeReviews> getCodeReviews() { DARABONBA_PTR_GET(codeReviews_, vector<PagingInfo::CodeReviews>) };
      inline PagingInfo& setCodeReviews(const vector<PagingInfo::CodeReviews> & codeReviews) { DARABONBA_PTR_SET_VALUE(codeReviews_, codeReviews) };
      inline PagingInfo& setCodeReviews(vector<PagingInfo::CodeReviews> && codeReviews) { DARABONBA_PTR_SET_RVALUE(codeReviews_, codeReviews) };


      // pageNumber Field Functions 
      bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
      void deletePageNumber() { this->pageNumber_ = nullptr;};
      inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
      inline PagingInfo& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
      inline PagingInfo& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


      // totalCount Field Functions 
      bool hasTotalCount() const { return this->totalCount_ != nullptr;};
      void deleteTotalCount() { this->totalCount_ = nullptr;};
      inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
      inline PagingInfo& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    protected:
      // The list of code reviews.
      shared_ptr<vector<PagingInfo::CodeReviews>> codeReviews_ {};
      // The page number.
      shared_ptr<int32_t> pageNumber_ {};
      // The number of entries per page.
      shared_ptr<int32_t> pageSize_ {};
      // The total number of entries.
      shared_ptr<int32_t> totalCount_ {};
    };

    virtual bool empty() const override { return this->pagingInfo_ == nullptr
        && this->requestId_ == nullptr; };
    // pagingInfo Field Functions 
    bool hasPagingInfo() const { return this->pagingInfo_ != nullptr;};
    void deletePagingInfo() { this->pagingInfo_ = nullptr;};
    inline const ListCodeReviewsResponseBody::PagingInfo & getPagingInfo() const { DARABONBA_PTR_GET_CONST(pagingInfo_, ListCodeReviewsResponseBody::PagingInfo) };
    inline ListCodeReviewsResponseBody::PagingInfo getPagingInfo() { DARABONBA_PTR_GET(pagingInfo_, ListCodeReviewsResponseBody::PagingInfo) };
    inline ListCodeReviewsResponseBody& setPagingInfo(const ListCodeReviewsResponseBody::PagingInfo & pagingInfo) { DARABONBA_PTR_SET_VALUE(pagingInfo_, pagingInfo) };
    inline ListCodeReviewsResponseBody& setPagingInfo(ListCodeReviewsResponseBody::PagingInfo && pagingInfo) { DARABONBA_PTR_SET_RVALUE(pagingInfo_, pagingInfo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListCodeReviewsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The pagination information.
    shared_ptr<ListCodeReviewsResponseBody::PagingInfo> pagingInfo_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
