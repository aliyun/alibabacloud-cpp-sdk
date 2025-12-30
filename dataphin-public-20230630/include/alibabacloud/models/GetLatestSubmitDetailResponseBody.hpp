// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETLATESTSUBMITDETAILRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETLATESTSUBMITDETAILRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class GetLatestSubmitDetailResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetLatestSubmitDetailResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SubmitDetailResult, submitDetailResult_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetLatestSubmitDetailResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SubmitDetailResult, submitDetailResult_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetLatestSubmitDetailResponseBody() = default ;
    GetLatestSubmitDetailResponseBody(const GetLatestSubmitDetailResponseBody &) = default ;
    GetLatestSubmitDetailResponseBody(GetLatestSubmitDetailResponseBody &&) = default ;
    GetLatestSubmitDetailResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetLatestSubmitDetailResponseBody() = default ;
    GetLatestSubmitDetailResponseBody& operator=(const GetLatestSubmitDetailResponseBody &) = default ;
    GetLatestSubmitDetailResponseBody& operator=(GetLatestSubmitDetailResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class SubmitDetailResult : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SubmitDetailResult& obj) { 
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(PublishStatus, publishStatus_);
        DARABONBA_PTR_TO_JSON(ReleaseObject, releaseObject_);
        DARABONBA_PTR_TO_JSON(SubmitStatus, submitStatus_);
        DARABONBA_PTR_TO_JSON(Tag, tag_);
      };
      friend void from_json(const Darabonba::Json& j, SubmitDetailResult& obj) { 
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(PublishStatus, publishStatus_);
        DARABONBA_PTR_FROM_JSON(ReleaseObject, releaseObject_);
        DARABONBA_PTR_FROM_JSON(SubmitStatus, submitStatus_);
        DARABONBA_PTR_FROM_JSON(Tag, tag_);
      };
      SubmitDetailResult() = default ;
      SubmitDetailResult(const SubmitDetailResult &) = default ;
      SubmitDetailResult(SubmitDetailResult &&) = default ;
      SubmitDetailResult(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SubmitDetailResult() = default ;
      SubmitDetailResult& operator=(const SubmitDetailResult &) = default ;
      SubmitDetailResult& operator=(SubmitDetailResult &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class ReleaseObject : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ReleaseObject& obj) { 
          DARABONBA_PTR_TO_JSON(ChangeType, changeType_);
          DARABONBA_PTR_TO_JSON(NodeId, nodeId_);
          DARABONBA_PTR_TO_JSON(ObjectVersion, objectVersion_);
          DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
          DARABONBA_PTR_TO_JSON(SubmitComment, submitComment_);
          DARABONBA_PTR_TO_JSON(SubmitObject, submitObject_);
        };
        friend void from_json(const Darabonba::Json& j, ReleaseObject& obj) { 
          DARABONBA_PTR_FROM_JSON(ChangeType, changeType_);
          DARABONBA_PTR_FROM_JSON(NodeId, nodeId_);
          DARABONBA_PTR_FROM_JSON(ObjectVersion, objectVersion_);
          DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
          DARABONBA_PTR_FROM_JSON(SubmitComment, submitComment_);
          DARABONBA_PTR_FROM_JSON(SubmitObject, submitObject_);
        };
        ReleaseObject() = default ;
        ReleaseObject(const ReleaseObject &) = default ;
        ReleaseObject(ReleaseObject &&) = default ;
        ReleaseObject(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ReleaseObject() = default ;
        ReleaseObject& operator=(const ReleaseObject &) = default ;
        ReleaseObject& operator=(ReleaseObject &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class SubmitObject : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const SubmitObject& obj) { 
            DARABONBA_PTR_TO_JSON(ObjectId, objectId_);
            DARABONBA_PTR_TO_JSON(ObjectName, objectName_);
            DARABONBA_PTR_TO_JSON(ObjectType, objectType_);
          };
          friend void from_json(const Darabonba::Json& j, SubmitObject& obj) { 
            DARABONBA_PTR_FROM_JSON(ObjectId, objectId_);
            DARABONBA_PTR_FROM_JSON(ObjectName, objectName_);
            DARABONBA_PTR_FROM_JSON(ObjectType, objectType_);
          };
          SubmitObject() = default ;
          SubmitObject(const SubmitObject &) = default ;
          SubmitObject(SubmitObject &&) = default ;
          SubmitObject(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~SubmitObject() = default ;
          SubmitObject& operator=(const SubmitObject &) = default ;
          SubmitObject& operator=(SubmitObject &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->objectId_ == nullptr
        && this->objectName_ == nullptr && this->objectType_ == nullptr; };
          // objectId Field Functions 
          bool hasObjectId() const { return this->objectId_ != nullptr;};
          void deleteObjectId() { this->objectId_ = nullptr;};
          inline string getObjectId() const { DARABONBA_PTR_GET_DEFAULT(objectId_, "") };
          inline SubmitObject& setObjectId(string objectId) { DARABONBA_PTR_SET_VALUE(objectId_, objectId) };


          // objectName Field Functions 
          bool hasObjectName() const { return this->objectName_ != nullptr;};
          void deleteObjectName() { this->objectName_ = nullptr;};
          inline string getObjectName() const { DARABONBA_PTR_GET_DEFAULT(objectName_, "") };
          inline SubmitObject& setObjectName(string objectName) { DARABONBA_PTR_SET_VALUE(objectName_, objectName) };


          // objectType Field Functions 
          bool hasObjectType() const { return this->objectType_ != nullptr;};
          void deleteObjectType() { this->objectType_ = nullptr;};
          inline string getObjectType() const { DARABONBA_PTR_GET_DEFAULT(objectType_, "") };
          inline SubmitObject& setObjectType(string objectType) { DARABONBA_PTR_SET_VALUE(objectType_, objectType) };


        protected:
          shared_ptr<string> objectId_ {};
          shared_ptr<string> objectName_ {};
          shared_ptr<string> objectType_ {};
        };

        virtual bool empty() const override { return this->changeType_ == nullptr
        && this->nodeId_ == nullptr && this->objectVersion_ == nullptr && this->projectId_ == nullptr && this->submitComment_ == nullptr && this->submitObject_ == nullptr; };
        // changeType Field Functions 
        bool hasChangeType() const { return this->changeType_ != nullptr;};
        void deleteChangeType() { this->changeType_ = nullptr;};
        inline string getChangeType() const { DARABONBA_PTR_GET_DEFAULT(changeType_, "") };
        inline ReleaseObject& setChangeType(string changeType) { DARABONBA_PTR_SET_VALUE(changeType_, changeType) };


        // nodeId Field Functions 
        bool hasNodeId() const { return this->nodeId_ != nullptr;};
        void deleteNodeId() { this->nodeId_ = nullptr;};
        inline string getNodeId() const { DARABONBA_PTR_GET_DEFAULT(nodeId_, "") };
        inline ReleaseObject& setNodeId(string nodeId) { DARABONBA_PTR_SET_VALUE(nodeId_, nodeId) };


        // objectVersion Field Functions 
        bool hasObjectVersion() const { return this->objectVersion_ != nullptr;};
        void deleteObjectVersion() { this->objectVersion_ = nullptr;};
        inline string getObjectVersion() const { DARABONBA_PTR_GET_DEFAULT(objectVersion_, "") };
        inline ReleaseObject& setObjectVersion(string objectVersion) { DARABONBA_PTR_SET_VALUE(objectVersion_, objectVersion) };


        // projectId Field Functions 
        bool hasProjectId() const { return this->projectId_ != nullptr;};
        void deleteProjectId() { this->projectId_ = nullptr;};
        inline int64_t getProjectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
        inline ReleaseObject& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


        // submitComment Field Functions 
        bool hasSubmitComment() const { return this->submitComment_ != nullptr;};
        void deleteSubmitComment() { this->submitComment_ = nullptr;};
        inline string getSubmitComment() const { DARABONBA_PTR_GET_DEFAULT(submitComment_, "") };
        inline ReleaseObject& setSubmitComment(string submitComment) { DARABONBA_PTR_SET_VALUE(submitComment_, submitComment) };


        // submitObject Field Functions 
        bool hasSubmitObject() const { return this->submitObject_ != nullptr;};
        void deleteSubmitObject() { this->submitObject_ = nullptr;};
        inline const ReleaseObject::SubmitObject & getSubmitObject() const { DARABONBA_PTR_GET_CONST(submitObject_, ReleaseObject::SubmitObject) };
        inline ReleaseObject::SubmitObject getSubmitObject() { DARABONBA_PTR_GET(submitObject_, ReleaseObject::SubmitObject) };
        inline ReleaseObject& setSubmitObject(const ReleaseObject::SubmitObject & submitObject) { DARABONBA_PTR_SET_VALUE(submitObject_, submitObject) };
        inline ReleaseObject& setSubmitObject(ReleaseObject::SubmitObject && submitObject) { DARABONBA_PTR_SET_RVALUE(submitObject_, submitObject) };


      protected:
        shared_ptr<string> changeType_ {};
        shared_ptr<string> nodeId_ {};
        shared_ptr<string> objectVersion_ {};
        shared_ptr<int64_t> projectId_ {};
        shared_ptr<string> submitComment_ {};
        shared_ptr<ReleaseObject::SubmitObject> submitObject_ {};
      };

      virtual bool empty() const override { return this->id_ == nullptr
        && this->publishStatus_ == nullptr && this->releaseObject_ == nullptr && this->submitStatus_ == nullptr && this->tag_ == nullptr; };
      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
      inline SubmitDetailResult& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // publishStatus Field Functions 
      bool hasPublishStatus() const { return this->publishStatus_ != nullptr;};
      void deletePublishStatus() { this->publishStatus_ = nullptr;};
      inline string getPublishStatus() const { DARABONBA_PTR_GET_DEFAULT(publishStatus_, "") };
      inline SubmitDetailResult& setPublishStatus(string publishStatus) { DARABONBA_PTR_SET_VALUE(publishStatus_, publishStatus) };


      // releaseObject Field Functions 
      bool hasReleaseObject() const { return this->releaseObject_ != nullptr;};
      void deleteReleaseObject() { this->releaseObject_ = nullptr;};
      inline const SubmitDetailResult::ReleaseObject & getReleaseObject() const { DARABONBA_PTR_GET_CONST(releaseObject_, SubmitDetailResult::ReleaseObject) };
      inline SubmitDetailResult::ReleaseObject getReleaseObject() { DARABONBA_PTR_GET(releaseObject_, SubmitDetailResult::ReleaseObject) };
      inline SubmitDetailResult& setReleaseObject(const SubmitDetailResult::ReleaseObject & releaseObject) { DARABONBA_PTR_SET_VALUE(releaseObject_, releaseObject) };
      inline SubmitDetailResult& setReleaseObject(SubmitDetailResult::ReleaseObject && releaseObject) { DARABONBA_PTR_SET_RVALUE(releaseObject_, releaseObject) };


      // submitStatus Field Functions 
      bool hasSubmitStatus() const { return this->submitStatus_ != nullptr;};
      void deleteSubmitStatus() { this->submitStatus_ = nullptr;};
      inline string getSubmitStatus() const { DARABONBA_PTR_GET_DEFAULT(submitStatus_, "") };
      inline SubmitDetailResult& setSubmitStatus(string submitStatus) { DARABONBA_PTR_SET_VALUE(submitStatus_, submitStatus) };


      // tag Field Functions 
      bool hasTag() const { return this->tag_ != nullptr;};
      void deleteTag() { this->tag_ = nullptr;};
      inline string getTag() const { DARABONBA_PTR_GET_DEFAULT(tag_, "") };
      inline SubmitDetailResult& setTag(string tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };


    protected:
      shared_ptr<int64_t> id_ {};
      shared_ptr<string> publishStatus_ {};
      shared_ptr<SubmitDetailResult::ReleaseObject> releaseObject_ {};
      shared_ptr<string> submitStatus_ {};
      shared_ptr<string> tag_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->submitDetailResult_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetLatestSubmitDetailResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline GetLatestSubmitDetailResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetLatestSubmitDetailResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetLatestSubmitDetailResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // submitDetailResult Field Functions 
    bool hasSubmitDetailResult() const { return this->submitDetailResult_ != nullptr;};
    void deleteSubmitDetailResult() { this->submitDetailResult_ = nullptr;};
    inline const GetLatestSubmitDetailResponseBody::SubmitDetailResult & getSubmitDetailResult() const { DARABONBA_PTR_GET_CONST(submitDetailResult_, GetLatestSubmitDetailResponseBody::SubmitDetailResult) };
    inline GetLatestSubmitDetailResponseBody::SubmitDetailResult getSubmitDetailResult() { DARABONBA_PTR_GET(submitDetailResult_, GetLatestSubmitDetailResponseBody::SubmitDetailResult) };
    inline GetLatestSubmitDetailResponseBody& setSubmitDetailResult(const GetLatestSubmitDetailResponseBody::SubmitDetailResult & submitDetailResult) { DARABONBA_PTR_SET_VALUE(submitDetailResult_, submitDetailResult) };
    inline GetLatestSubmitDetailResponseBody& setSubmitDetailResult(GetLatestSubmitDetailResponseBody::SubmitDetailResult && submitDetailResult) { DARABONBA_PTR_SET_RVALUE(submitDetailResult_, submitDetailResult) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetLatestSubmitDetailResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<int32_t> httpStatusCode_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<GetLatestSubmitDetailResponseBody::SubmitDetailResult> submitDetailResult_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
