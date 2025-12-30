// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCLUSTERQUEUEINFOBYENVRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETCLUSTERQUEUEINFOBYENVRESPONSEBODY_HPP_
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
  class GetClusterQueueInfoByEnvResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetClusterQueueInfoByEnvResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetClusterQueueInfoByEnvResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetClusterQueueInfoByEnvResponseBody() = default ;
    GetClusterQueueInfoByEnvResponseBody(const GetClusterQueueInfoByEnvResponseBody &) = default ;
    GetClusterQueueInfoByEnvResponseBody(GetClusterQueueInfoByEnvResponseBody &&) = default ;
    GetClusterQueueInfoByEnvResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetClusterQueueInfoByEnvResponseBody() = default ;
    GetClusterQueueInfoByEnvResponseBody& operator=(const GetClusterQueueInfoByEnvResponseBody &) = default ;
    GetClusterQueueInfoByEnvResponseBody& operator=(GetClusterQueueInfoByEnvResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(Annotations, annotations_);
        DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
        DARABONBA_PTR_TO_JSON(CreateAt, createAt_);
        DARABONBA_PTR_TO_JSON(FlinkImageRegistry, flinkImageRegistry_);
        DARABONBA_PTR_TO_JSON(FlinkImageRepository, flinkImageRepository_);
        DARABONBA_PTR_TO_JSON(FlinkImageTag, flinkImageTag_);
        DARABONBA_PTR_TO_JSON(FlinkVersion, flinkVersion_);
        DARABONBA_PTR_TO_JSON(Labels, labels_);
        DARABONBA_PTR_TO_JSON(MaxVcore, maxVcore_);
        DARABONBA_PTR_TO_JSON(ModifiedAt, modifiedAt_);
        DARABONBA_PTR_TO_JSON(Namespace, namespace_);
        DARABONBA_PTR_TO_JSON(QueueName, queueName_);
        DARABONBA_PTR_TO_JSON(ResourceVersion, resourceVersion_);
        DARABONBA_PTR_TO_JSON(Spec, spec_);
        DARABONBA_PTR_TO_JSON(VvpClusterType, vvpClusterType_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(Annotations, annotations_);
        DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
        DARABONBA_PTR_FROM_JSON(CreateAt, createAt_);
        DARABONBA_PTR_FROM_JSON(FlinkImageRegistry, flinkImageRegistry_);
        DARABONBA_PTR_FROM_JSON(FlinkImageRepository, flinkImageRepository_);
        DARABONBA_PTR_FROM_JSON(FlinkImageTag, flinkImageTag_);
        DARABONBA_PTR_FROM_JSON(FlinkVersion, flinkVersion_);
        DARABONBA_PTR_FROM_JSON(Labels, labels_);
        DARABONBA_PTR_FROM_JSON(MaxVcore, maxVcore_);
        DARABONBA_PTR_FROM_JSON(ModifiedAt, modifiedAt_);
        DARABONBA_PTR_FROM_JSON(Namespace, namespace_);
        DARABONBA_PTR_FROM_JSON(QueueName, queueName_);
        DARABONBA_PTR_FROM_JSON(ResourceVersion, resourceVersion_);
        DARABONBA_PTR_FROM_JSON(Spec, spec_);
        DARABONBA_PTR_FROM_JSON(VvpClusterType, vvpClusterType_);
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
      virtual bool empty() const override { return this->annotations_ == nullptr
        && this->clusterId_ == nullptr && this->createAt_ == nullptr && this->flinkImageRegistry_ == nullptr && this->flinkImageRepository_ == nullptr && this->flinkImageTag_ == nullptr
        && this->flinkVersion_ == nullptr && this->labels_ == nullptr && this->maxVcore_ == nullptr && this->modifiedAt_ == nullptr && this->namespace_ == nullptr
        && this->queueName_ == nullptr && this->resourceVersion_ == nullptr && this->spec_ == nullptr && this->vvpClusterType_ == nullptr; };
      // annotations Field Functions 
      bool hasAnnotations() const { return this->annotations_ != nullptr;};
      void deleteAnnotations() { this->annotations_ = nullptr;};
      inline string getAnnotations() const { DARABONBA_PTR_GET_DEFAULT(annotations_, "") };
      inline Data& setAnnotations(string annotations) { DARABONBA_PTR_SET_VALUE(annotations_, annotations) };


      // clusterId Field Functions 
      bool hasClusterId() const { return this->clusterId_ != nullptr;};
      void deleteClusterId() { this->clusterId_ = nullptr;};
      inline string getClusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
      inline Data& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


      // createAt Field Functions 
      bool hasCreateAt() const { return this->createAt_ != nullptr;};
      void deleteCreateAt() { this->createAt_ = nullptr;};
      inline string getCreateAt() const { DARABONBA_PTR_GET_DEFAULT(createAt_, "") };
      inline Data& setCreateAt(string createAt) { DARABONBA_PTR_SET_VALUE(createAt_, createAt) };


      // flinkImageRegistry Field Functions 
      bool hasFlinkImageRegistry() const { return this->flinkImageRegistry_ != nullptr;};
      void deleteFlinkImageRegistry() { this->flinkImageRegistry_ = nullptr;};
      inline string getFlinkImageRegistry() const { DARABONBA_PTR_GET_DEFAULT(flinkImageRegistry_, "") };
      inline Data& setFlinkImageRegistry(string flinkImageRegistry) { DARABONBA_PTR_SET_VALUE(flinkImageRegistry_, flinkImageRegistry) };


      // flinkImageRepository Field Functions 
      bool hasFlinkImageRepository() const { return this->flinkImageRepository_ != nullptr;};
      void deleteFlinkImageRepository() { this->flinkImageRepository_ = nullptr;};
      inline string getFlinkImageRepository() const { DARABONBA_PTR_GET_DEFAULT(flinkImageRepository_, "") };
      inline Data& setFlinkImageRepository(string flinkImageRepository) { DARABONBA_PTR_SET_VALUE(flinkImageRepository_, flinkImageRepository) };


      // flinkImageTag Field Functions 
      bool hasFlinkImageTag() const { return this->flinkImageTag_ != nullptr;};
      void deleteFlinkImageTag() { this->flinkImageTag_ = nullptr;};
      inline string getFlinkImageTag() const { DARABONBA_PTR_GET_DEFAULT(flinkImageTag_, "") };
      inline Data& setFlinkImageTag(string flinkImageTag) { DARABONBA_PTR_SET_VALUE(flinkImageTag_, flinkImageTag) };


      // flinkVersion Field Functions 
      bool hasFlinkVersion() const { return this->flinkVersion_ != nullptr;};
      void deleteFlinkVersion() { this->flinkVersion_ = nullptr;};
      inline string getFlinkVersion() const { DARABONBA_PTR_GET_DEFAULT(flinkVersion_, "") };
      inline Data& setFlinkVersion(string flinkVersion) { DARABONBA_PTR_SET_VALUE(flinkVersion_, flinkVersion) };


      // labels Field Functions 
      bool hasLabels() const { return this->labels_ != nullptr;};
      void deleteLabels() { this->labels_ = nullptr;};
      inline string getLabels() const { DARABONBA_PTR_GET_DEFAULT(labels_, "") };
      inline Data& setLabels(string labels) { DARABONBA_PTR_SET_VALUE(labels_, labels) };


      // maxVcore Field Functions 
      bool hasMaxVcore() const { return this->maxVcore_ != nullptr;};
      void deleteMaxVcore() { this->maxVcore_ = nullptr;};
      inline string getMaxVcore() const { DARABONBA_PTR_GET_DEFAULT(maxVcore_, "") };
      inline Data& setMaxVcore(string maxVcore) { DARABONBA_PTR_SET_VALUE(maxVcore_, maxVcore) };


      // modifiedAt Field Functions 
      bool hasModifiedAt() const { return this->modifiedAt_ != nullptr;};
      void deleteModifiedAt() { this->modifiedAt_ = nullptr;};
      inline string getModifiedAt() const { DARABONBA_PTR_GET_DEFAULT(modifiedAt_, "") };
      inline Data& setModifiedAt(string modifiedAt) { DARABONBA_PTR_SET_VALUE(modifiedAt_, modifiedAt) };


      // namespace Field Functions 
      bool hasNamespace() const { return this->namespace_ != nullptr;};
      void deleteNamespace() { this->namespace_ = nullptr;};
      inline string getNamespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
      inline Data& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


      // queueName Field Functions 
      bool hasQueueName() const { return this->queueName_ != nullptr;};
      void deleteQueueName() { this->queueName_ = nullptr;};
      inline string getQueueName() const { DARABONBA_PTR_GET_DEFAULT(queueName_, "") };
      inline Data& setQueueName(string queueName) { DARABONBA_PTR_SET_VALUE(queueName_, queueName) };


      // resourceVersion Field Functions 
      bool hasResourceVersion() const { return this->resourceVersion_ != nullptr;};
      void deleteResourceVersion() { this->resourceVersion_ = nullptr;};
      inline string getResourceVersion() const { DARABONBA_PTR_GET_DEFAULT(resourceVersion_, "") };
      inline Data& setResourceVersion(string resourceVersion) { DARABONBA_PTR_SET_VALUE(resourceVersion_, resourceVersion) };


      // spec Field Functions 
      bool hasSpec() const { return this->spec_ != nullptr;};
      void deleteSpec() { this->spec_ = nullptr;};
      inline string getSpec() const { DARABONBA_PTR_GET_DEFAULT(spec_, "") };
      inline Data& setSpec(string spec) { DARABONBA_PTR_SET_VALUE(spec_, spec) };


      // vvpClusterType Field Functions 
      bool hasVvpClusterType() const { return this->vvpClusterType_ != nullptr;};
      void deleteVvpClusterType() { this->vvpClusterType_ = nullptr;};
      inline string getVvpClusterType() const { DARABONBA_PTR_GET_DEFAULT(vvpClusterType_, "") };
      inline Data& setVvpClusterType(string vvpClusterType) { DARABONBA_PTR_SET_VALUE(vvpClusterType_, vvpClusterType) };


    protected:
      shared_ptr<string> annotations_ {};
      shared_ptr<string> clusterId_ {};
      shared_ptr<string> createAt_ {};
      shared_ptr<string> flinkImageRegistry_ {};
      shared_ptr<string> flinkImageRepository_ {};
      shared_ptr<string> flinkImageTag_ {};
      shared_ptr<string> flinkVersion_ {};
      shared_ptr<string> labels_ {};
      shared_ptr<string> maxVcore_ {};
      shared_ptr<string> modifiedAt_ {};
      shared_ptr<string> namespace_ {};
      shared_ptr<string> queueName_ {};
      shared_ptr<string> resourceVersion_ {};
      shared_ptr<string> spec_ {};
      shared_ptr<string> vvpClusterType_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetClusterQueueInfoByEnvResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<GetClusterQueueInfoByEnvResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<GetClusterQueueInfoByEnvResponseBody::Data>) };
    inline vector<GetClusterQueueInfoByEnvResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<GetClusterQueueInfoByEnvResponseBody::Data>) };
    inline GetClusterQueueInfoByEnvResponseBody& setData(const vector<GetClusterQueueInfoByEnvResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetClusterQueueInfoByEnvResponseBody& setData(vector<GetClusterQueueInfoByEnvResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline GetClusterQueueInfoByEnvResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetClusterQueueInfoByEnvResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetClusterQueueInfoByEnvResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetClusterQueueInfoByEnvResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<vector<GetClusterQueueInfoByEnvResponseBody::Data>> data_ {};
    shared_ptr<int32_t> httpStatusCode_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
