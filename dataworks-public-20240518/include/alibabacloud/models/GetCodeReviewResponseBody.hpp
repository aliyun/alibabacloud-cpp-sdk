// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCODEREVIEWRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETCODEREVIEWRESPONSEBODY_HPP_
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
  class GetCodeReviewResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetCodeReviewResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CodeReview, codeReview_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetCodeReviewResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CodeReview, codeReview_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetCodeReviewResponseBody() = default ;
    GetCodeReviewResponseBody(const GetCodeReviewResponseBody &) = default ;
    GetCodeReviewResponseBody(GetCodeReviewResponseBody &&) = default ;
    GetCodeReviewResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetCodeReviewResponseBody() = default ;
    GetCodeReviewResponseBody& operator=(const GetCodeReviewResponseBody &) = default ;
    GetCodeReviewResponseBody& operator=(GetCodeReviewResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class CodeReview : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const CodeReview& obj) { 
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
      friend void from_json(const Darabonba::Json& j, CodeReview& obj) { 
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
      CodeReview() = default ;
      CodeReview(const CodeReview &) = default ;
      CodeReview(CodeReview &&) = default ;
      CodeReview(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~CodeReview() = default ;
      CodeReview& operator=(const CodeReview &) = default ;
      CodeReview& operator=(CodeReview &&) = default ;
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
      inline CodeReview& setCommand(string command) { DARABONBA_PTR_SET_VALUE(command_, command) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline int64_t getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
      inline CodeReview& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // creator Field Functions 
      bool hasCreator() const { return this->creator_ != nullptr;};
      void deleteCreator() { this->creator_ = nullptr;};
      inline string getCreator() const { DARABONBA_PTR_GET_DEFAULT(creator_, "") };
      inline CodeReview& setCreator(string creator) { DARABONBA_PTR_SET_VALUE(creator_, creator) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline CodeReview& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // finalReviewer Field Functions 
      bool hasFinalReviewer() const { return this->finalReviewer_ != nullptr;};
      void deleteFinalReviewer() { this->finalReviewer_ = nullptr;};
      inline string getFinalReviewer() const { DARABONBA_PTR_GET_DEFAULT(finalReviewer_, "") };
      inline CodeReview& setFinalReviewer(string finalReviewer) { DARABONBA_PTR_SET_VALUE(finalReviewer_, finalReviewer) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
      inline CodeReview& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // modifyTime Field Functions 
      bool hasModifyTime() const { return this->modifyTime_ != nullptr;};
      void deleteModifyTime() { this->modifyTime_ = nullptr;};
      inline int64_t getModifyTime() const { DARABONBA_PTR_GET_DEFAULT(modifyTime_, 0L) };
      inline CodeReview& setModifyTime(int64_t modifyTime) { DARABONBA_PTR_SET_VALUE(modifyTime_, modifyTime) };


      // objectId Field Functions 
      bool hasObjectId() const { return this->objectId_ != nullptr;};
      void deleteObjectId() { this->objectId_ = nullptr;};
      inline string getObjectId() const { DARABONBA_PTR_GET_DEFAULT(objectId_, "") };
      inline CodeReview& setObjectId(string objectId) { DARABONBA_PTR_SET_VALUE(objectId_, objectId) };


      // objectName Field Functions 
      bool hasObjectName() const { return this->objectName_ != nullptr;};
      void deleteObjectName() { this->objectName_ = nullptr;};
      inline string getObjectName() const { DARABONBA_PTR_GET_DEFAULT(objectName_, "") };
      inline CodeReview& setObjectName(string objectName) { DARABONBA_PTR_SET_VALUE(objectName_, objectName) };


      // objectType Field Functions 
      bool hasObjectType() const { return this->objectType_ != nullptr;};
      void deleteObjectType() { this->objectType_ = nullptr;};
      inline string getObjectType() const { DARABONBA_PTR_GET_DEFAULT(objectType_, "") };
      inline CodeReview& setObjectType(string objectType) { DARABONBA_PTR_SET_VALUE(objectType_, objectType) };


      // projectId Field Functions 
      bool hasProjectId() const { return this->projectId_ != nullptr;};
      void deleteProjectId() { this->projectId_ = nullptr;};
      inline int64_t getProjectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
      inline CodeReview& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


      // regionId Field Functions 
      bool hasRegionId() const { return this->regionId_ != nullptr;};
      void deleteRegionId() { this->regionId_ = nullptr;};
      inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
      inline CodeReview& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


      // reviewTime Field Functions 
      bool hasReviewTime() const { return this->reviewTime_ != nullptr;};
      void deleteReviewTime() { this->reviewTime_ = nullptr;};
      inline int64_t getReviewTime() const { DARABONBA_PTR_GET_DEFAULT(reviewTime_, 0L) };
      inline CodeReview& setReviewTime(int64_t reviewTime) { DARABONBA_PTR_SET_VALUE(reviewTime_, reviewTime) };


      // reviewers Field Functions 
      bool hasReviewers() const { return this->reviewers_ != nullptr;};
      void deleteReviewers() { this->reviewers_ = nullptr;};
      inline const vector<string> & getReviewers() const { DARABONBA_PTR_GET_CONST(reviewers_, vector<string>) };
      inline vector<string> getReviewers() { DARABONBA_PTR_GET(reviewers_, vector<string>) };
      inline CodeReview& setReviewers(const vector<string> & reviewers) { DARABONBA_PTR_SET_VALUE(reviewers_, reviewers) };
      inline CodeReview& setReviewers(vector<string> && reviewers) { DARABONBA_PTR_SET_RVALUE(reviewers_, reviewers) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline CodeReview& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    protected:
      // The node command of the root object.
      shared_ptr<string> command_ {};
      // The creation time. The value is a UNIX timestamp in milliseconds.
      shared_ptr<int64_t> createTime_ {};
      // The account ID of the actual submitter.
      shared_ptr<string> creator_ {};
      // The review description provided at creation.
      shared_ptr<string> description_ {};
      // The account ID of the final approver. This field is empty if no approval decision has been made.
      shared_ptr<string> finalReviewer_ {};
      // The unique identifier of the review.
      shared_ptr<string> id_ {};
      // The update time. The value is a UNIX timestamp in milliseconds.
      shared_ptr<int64_t> modifyTime_ {};
      // The ID of the root review object.
      shared_ptr<string> objectId_ {};
      // The name of the root review object.
      shared_ptr<string> objectName_ {};
      // The object type of the root object.
      shared_ptr<string> objectType_ {};
      // The workspace ID.
      shared_ptr<int64_t> projectId_ {};
      // The region ID.
      shared_ptr<string> regionId_ {};
      // The approval time. This field is empty if no approval decision has been made.
      shared_ptr<int64_t> reviewTime_ {};
      // The account IDs of the designated reviewers.
      shared_ptr<vector<string>> reviewers_ {};
      // The review status.
      shared_ptr<string> status_ {};
    };

    virtual bool empty() const override { return this->codeReview_ == nullptr
        && this->requestId_ == nullptr; };
    // codeReview Field Functions 
    bool hasCodeReview() const { return this->codeReview_ != nullptr;};
    void deleteCodeReview() { this->codeReview_ = nullptr;};
    inline const GetCodeReviewResponseBody::CodeReview & getCodeReview() const { DARABONBA_PTR_GET_CONST(codeReview_, GetCodeReviewResponseBody::CodeReview) };
    inline GetCodeReviewResponseBody::CodeReview getCodeReview() { DARABONBA_PTR_GET(codeReview_, GetCodeReviewResponseBody::CodeReview) };
    inline GetCodeReviewResponseBody& setCodeReview(const GetCodeReviewResponseBody::CodeReview & codeReview) { DARABONBA_PTR_SET_VALUE(codeReview_, codeReview) };
    inline GetCodeReviewResponseBody& setCodeReview(GetCodeReviewResponseBody::CodeReview && codeReview) { DARABONBA_PTR_SET_RVALUE(codeReview_, codeReview) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetCodeReviewResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The code review metadata.
    shared_ptr<GetCodeReviewResponseBody::CodeReview> codeReview_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
