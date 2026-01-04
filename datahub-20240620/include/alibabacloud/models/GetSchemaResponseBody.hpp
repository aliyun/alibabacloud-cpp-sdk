// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSCHEMARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETSCHEMARESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Datahub20240620
{
namespace Models
{
  class GetSchemaResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSchemaResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(Creator, creator_);
      DARABONBA_PTR_TO_JSON(ProjectName, projectName_);
      DARABONBA_PTR_TO_JSON(RecordSchema, recordSchema_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(TopicName, topicName_);
      DARABONBA_PTR_TO_JSON(VersionId, versionId_);
    };
    friend void from_json(const Darabonba::Json& j, GetSchemaResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(Creator, creator_);
      DARABONBA_PTR_FROM_JSON(ProjectName, projectName_);
      DARABONBA_PTR_FROM_JSON(RecordSchema, recordSchema_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(TopicName, topicName_);
      DARABONBA_PTR_FROM_JSON(VersionId, versionId_);
    };
    GetSchemaResponseBody() = default ;
    GetSchemaResponseBody(const GetSchemaResponseBody &) = default ;
    GetSchemaResponseBody(GetSchemaResponseBody &&) = default ;
    GetSchemaResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSchemaResponseBody() = default ;
    GetSchemaResponseBody& operator=(const GetSchemaResponseBody &) = default ;
    GetSchemaResponseBody& operator=(GetSchemaResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->createTime_ == nullptr
        && this->creator_ == nullptr && this->projectName_ == nullptr && this->recordSchema_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr
        && this->topicName_ == nullptr && this->versionId_ == nullptr; };
    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline int64_t getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
    inline GetSchemaResponseBody& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // creator Field Functions 
    bool hasCreator() const { return this->creator_ != nullptr;};
    void deleteCreator() { this->creator_ = nullptr;};
    inline string getCreator() const { DARABONBA_PTR_GET_DEFAULT(creator_, "") };
    inline GetSchemaResponseBody& setCreator(string creator) { DARABONBA_PTR_SET_VALUE(creator_, creator) };


    // projectName Field Functions 
    bool hasProjectName() const { return this->projectName_ != nullptr;};
    void deleteProjectName() { this->projectName_ = nullptr;};
    inline string getProjectName() const { DARABONBA_PTR_GET_DEFAULT(projectName_, "") };
    inline GetSchemaResponseBody& setProjectName(string projectName) { DARABONBA_PTR_SET_VALUE(projectName_, projectName) };


    // recordSchema Field Functions 
    bool hasRecordSchema() const { return this->recordSchema_ != nullptr;};
    void deleteRecordSchema() { this->recordSchema_ = nullptr;};
    inline string getRecordSchema() const { DARABONBA_PTR_GET_DEFAULT(recordSchema_, "") };
    inline GetSchemaResponseBody& setRecordSchema(string recordSchema) { DARABONBA_PTR_SET_VALUE(recordSchema_, recordSchema) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetSchemaResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetSchemaResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // topicName Field Functions 
    bool hasTopicName() const { return this->topicName_ != nullptr;};
    void deleteTopicName() { this->topicName_ = nullptr;};
    inline string getTopicName() const { DARABONBA_PTR_GET_DEFAULT(topicName_, "") };
    inline GetSchemaResponseBody& setTopicName(string topicName) { DARABONBA_PTR_SET_VALUE(topicName_, topicName) };


    // versionId Field Functions 
    bool hasVersionId() const { return this->versionId_ != nullptr;};
    void deleteVersionId() { this->versionId_ = nullptr;};
    inline int32_t getVersionId() const { DARABONBA_PTR_GET_DEFAULT(versionId_, 0) };
    inline GetSchemaResponseBody& setVersionId(int32_t versionId) { DARABONBA_PTR_SET_VALUE(versionId_, versionId) };


  protected:
    shared_ptr<int64_t> createTime_ {};
    shared_ptr<string> creator_ {};
    shared_ptr<string> projectName_ {};
    shared_ptr<string> recordSchema_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
    shared_ptr<string> topicName_ {};
    shared_ptr<int32_t> versionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Datahub20240620
#endif
