// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSNAPSHOTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETSNAPSHOTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class GetSnapshotResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSnapshotResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Snapshot, snapshot_);
    };
    friend void from_json(const Darabonba::Json& j, GetSnapshotResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Snapshot, snapshot_);
    };
    GetSnapshotResponseBody() = default ;
    GetSnapshotResponseBody(const GetSnapshotResponseBody &) = default ;
    GetSnapshotResponseBody(GetSnapshotResponseBody &&) = default ;
    GetSnapshotResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSnapshotResponseBody() = default ;
    GetSnapshotResponseBody& operator=(const GetSnapshotResponseBody &) = default ;
    GetSnapshotResponseBody& operator=(GetSnapshotResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Snapshot : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Snapshot& obj) { 
        DARABONBA_PTR_TO_JSON(Comment, comment_);
        DARABONBA_PTR_TO_JSON(Content, content_);
        DARABONBA_PTR_TO_JSON(ContentUrl, contentUrl_);
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(Creator, creator_);
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(Namespace, namespace_);
        DARABONBA_PTR_TO_JSON(ObjectId, objectId_);
        DARABONBA_PTR_TO_JSON(Type, type_);
        DARABONBA_PTR_TO_JSON(Version, version_);
      };
      friend void from_json(const Darabonba::Json& j, Snapshot& obj) { 
        DARABONBA_PTR_FROM_JSON(Comment, comment_);
        DARABONBA_PTR_FROM_JSON(Content, content_);
        DARABONBA_PTR_FROM_JSON(ContentUrl, contentUrl_);
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(Creator, creator_);
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(Namespace, namespace_);
        DARABONBA_PTR_FROM_JSON(ObjectId, objectId_);
        DARABONBA_PTR_FROM_JSON(Type, type_);
        DARABONBA_PTR_FROM_JSON(Version, version_);
      };
      Snapshot() = default ;
      Snapshot(const Snapshot &) = default ;
      Snapshot(Snapshot &&) = default ;
      Snapshot(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Snapshot() = default ;
      Snapshot& operator=(const Snapshot &) = default ;
      Snapshot& operator=(Snapshot &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Content : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Content& obj) { 
          DARABONBA_PTR_TO_JSON(Content, content_);
          DARABONBA_PTR_TO_JSON(Spec, spec_);
          DARABONBA_PTR_TO_JSON(StageCode, stageCode_);
        };
        friend void from_json(const Darabonba::Json& j, Content& obj) { 
          DARABONBA_PTR_FROM_JSON(Content, content_);
          DARABONBA_PTR_FROM_JSON(Spec, spec_);
          DARABONBA_PTR_FROM_JSON(StageCode, stageCode_);
        };
        Content() = default ;
        Content(const Content &) = default ;
        Content(Content &&) = default ;
        Content(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Content() = default ;
        Content& operator=(const Content &) = default ;
        Content& operator=(Content &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->content_ == nullptr
        && this->spec_ == nullptr && this->stageCode_ == nullptr; };
        // content Field Functions 
        bool hasContent() const { return this->content_ != nullptr;};
        void deleteContent() { this->content_ = nullptr;};
        inline string getContent() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
        inline Content& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


        // spec Field Functions 
        bool hasSpec() const { return this->spec_ != nullptr;};
        void deleteSpec() { this->spec_ = nullptr;};
        inline string getSpec() const { DARABONBA_PTR_GET_DEFAULT(spec_, "") };
        inline Content& setSpec(string spec) { DARABONBA_PTR_SET_VALUE(spec_, spec) };


        // stageCode Field Functions 
        bool hasStageCode() const { return this->stageCode_ != nullptr;};
        void deleteStageCode() { this->stageCode_ = nullptr;};
        inline string getStageCode() const { DARABONBA_PTR_GET_DEFAULT(stageCode_, "") };
        inline Content& setStageCode(string stageCode) { DARABONBA_PTR_SET_VALUE(stageCode_, stageCode) };


      protected:
        // The node script content.
        shared_ptr<string> content_ {};
        // FlowSpec JSON
        shared_ptr<string> spec_ {};
        // The stage code.
        shared_ptr<string> stageCode_ {};
      };

      virtual bool empty() const override { return this->comment_ == nullptr
        && this->content_ == nullptr && this->contentUrl_ == nullptr && this->createTime_ == nullptr && this->creator_ == nullptr && this->id_ == nullptr
        && this->namespace_ == nullptr && this->objectId_ == nullptr && this->type_ == nullptr && this->version_ == nullptr; };
      // comment Field Functions 
      bool hasComment() const { return this->comment_ != nullptr;};
      void deleteComment() { this->comment_ = nullptr;};
      inline string getComment() const { DARABONBA_PTR_GET_DEFAULT(comment_, "") };
      inline Snapshot& setComment(string comment) { DARABONBA_PTR_SET_VALUE(comment_, comment) };


      // content Field Functions 
      bool hasContent() const { return this->content_ != nullptr;};
      void deleteContent() { this->content_ = nullptr;};
      inline const Snapshot::Content & getContent() const { DARABONBA_PTR_GET_CONST(content_, Snapshot::Content) };
      inline Snapshot::Content getContent() { DARABONBA_PTR_GET(content_, Snapshot::Content) };
      inline Snapshot& setContent(const Snapshot::Content & content) { DARABONBA_PTR_SET_VALUE(content_, content) };
      inline Snapshot& setContent(Snapshot::Content && content) { DARABONBA_PTR_SET_RVALUE(content_, content) };


      // contentUrl Field Functions 
      bool hasContentUrl() const { return this->contentUrl_ != nullptr;};
      void deleteContentUrl() { this->contentUrl_ = nullptr;};
      inline string getContentUrl() const { DARABONBA_PTR_GET_DEFAULT(contentUrl_, "") };
      inline Snapshot& setContentUrl(string contentUrl) { DARABONBA_PTR_SET_VALUE(contentUrl_, contentUrl) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline int64_t getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
      inline Snapshot& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // creator Field Functions 
      bool hasCreator() const { return this->creator_ != nullptr;};
      void deleteCreator() { this->creator_ = nullptr;};
      inline string getCreator() const { DARABONBA_PTR_GET_DEFAULT(creator_, "") };
      inline Snapshot& setCreator(string creator) { DARABONBA_PTR_SET_VALUE(creator_, creator) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
      inline Snapshot& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // namespace Field Functions 
      bool hasNamespace() const { return this->namespace_ != nullptr;};
      void deleteNamespace() { this->namespace_ = nullptr;};
      inline string getNamespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
      inline Snapshot& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


      // objectId Field Functions 
      bool hasObjectId() const { return this->objectId_ != nullptr;};
      void deleteObjectId() { this->objectId_ = nullptr;};
      inline string getObjectId() const { DARABONBA_PTR_GET_DEFAULT(objectId_, "") };
      inline Snapshot& setObjectId(string objectId) { DARABONBA_PTR_SET_VALUE(objectId_, objectId) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline Snapshot& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      // version Field Functions 
      bool hasVersion() const { return this->version_ != nullptr;};
      void deleteVersion() { this->version_ = nullptr;};
      inline int32_t getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, 0) };
      inline Snapshot& setVersion(int32_t version) { DARABONBA_PTR_SET_VALUE(version_, version) };


    protected:
      // The submit comment.
      shared_ptr<string> comment_ {};
      // The structured snapshot content. This parameter is mutually exclusive with ContentUrl.
      shared_ptr<Snapshot::Content> content_ {};
      // The OSS pre-signed download URL. This parameter is mutually exclusive with Content.
      shared_ptr<string> contentUrl_ {};
      // The snapshot creation time in millisecond timestamp.
      shared_ptr<int64_t> createTime_ {};
      // The employee ID of the submitter.
      shared_ptr<string> creator_ {};
      // The unique ID of the snapshot.
      shared_ptr<string> id_ {};
      // The namespace.
      shared_ptr<string> namespace_ {};
      // The unique ID of the object to which the snapshot belongs.
      shared_ptr<string> objectId_ {};
      // The snapshot type.
      shared_ptr<string> type_ {};
      // The version number.
      shared_ptr<int32_t> version_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->snapshot_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetSnapshotResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // snapshot Field Functions 
    bool hasSnapshot() const { return this->snapshot_ != nullptr;};
    void deleteSnapshot() { this->snapshot_ = nullptr;};
    inline const GetSnapshotResponseBody::Snapshot & getSnapshot() const { DARABONBA_PTR_GET_CONST(snapshot_, GetSnapshotResponseBody::Snapshot) };
    inline GetSnapshotResponseBody::Snapshot getSnapshot() { DARABONBA_PTR_GET(snapshot_, GetSnapshotResponseBody::Snapshot) };
    inline GetSnapshotResponseBody& setSnapshot(const GetSnapshotResponseBody::Snapshot & snapshot) { DARABONBA_PTR_SET_VALUE(snapshot_, snapshot) };
    inline GetSnapshotResponseBody& setSnapshot(GetSnapshotResponseBody::Snapshot && snapshot) { DARABONBA_PTR_SET_RVALUE(snapshot_, snapshot) };


  protected:
    // Id of the request
    shared_ptr<string> requestId_ {};
    // The snapshot.
    shared_ptr<GetSnapshotResponseBody::Snapshot> snapshot_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
