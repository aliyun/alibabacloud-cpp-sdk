// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCLUSTERQUEUEINFOBYENVRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETCLUSTERQUEUEINFOBYENVRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class GetClusterQueueInfoByEnvResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetClusterQueueInfoByEnvResponseBodyData& obj) { 
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
    friend void from_json(const Darabonba::Json& j, GetClusterQueueInfoByEnvResponseBodyData& obj) { 
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
    GetClusterQueueInfoByEnvResponseBodyData() = default ;
    GetClusterQueueInfoByEnvResponseBodyData(const GetClusterQueueInfoByEnvResponseBodyData &) = default ;
    GetClusterQueueInfoByEnvResponseBodyData(GetClusterQueueInfoByEnvResponseBodyData &&) = default ;
    GetClusterQueueInfoByEnvResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetClusterQueueInfoByEnvResponseBodyData() = default ;
    GetClusterQueueInfoByEnvResponseBodyData& operator=(const GetClusterQueueInfoByEnvResponseBodyData &) = default ;
    GetClusterQueueInfoByEnvResponseBodyData& operator=(GetClusterQueueInfoByEnvResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->annotations_ != nullptr
        && this->clusterId_ != nullptr && this->createAt_ != nullptr && this->flinkImageRegistry_ != nullptr && this->flinkImageRepository_ != nullptr && this->flinkImageTag_ != nullptr
        && this->flinkVersion_ != nullptr && this->labels_ != nullptr && this->maxVcore_ != nullptr && this->modifiedAt_ != nullptr && this->namespace_ != nullptr
        && this->queueName_ != nullptr && this->resourceVersion_ != nullptr && this->spec_ != nullptr && this->vvpClusterType_ != nullptr; };
    // annotations Field Functions 
    bool hasAnnotations() const { return this->annotations_ != nullptr;};
    void deleteAnnotations() { this->annotations_ = nullptr;};
    inline string annotations() const { DARABONBA_PTR_GET_DEFAULT(annotations_, "") };
    inline GetClusterQueueInfoByEnvResponseBodyData& setAnnotations(string annotations) { DARABONBA_PTR_SET_VALUE(annotations_, annotations) };


    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string clusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline GetClusterQueueInfoByEnvResponseBodyData& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // createAt Field Functions 
    bool hasCreateAt() const { return this->createAt_ != nullptr;};
    void deleteCreateAt() { this->createAt_ = nullptr;};
    inline string createAt() const { DARABONBA_PTR_GET_DEFAULT(createAt_, "") };
    inline GetClusterQueueInfoByEnvResponseBodyData& setCreateAt(string createAt) { DARABONBA_PTR_SET_VALUE(createAt_, createAt) };


    // flinkImageRegistry Field Functions 
    bool hasFlinkImageRegistry() const { return this->flinkImageRegistry_ != nullptr;};
    void deleteFlinkImageRegistry() { this->flinkImageRegistry_ = nullptr;};
    inline string flinkImageRegistry() const { DARABONBA_PTR_GET_DEFAULT(flinkImageRegistry_, "") };
    inline GetClusterQueueInfoByEnvResponseBodyData& setFlinkImageRegistry(string flinkImageRegistry) { DARABONBA_PTR_SET_VALUE(flinkImageRegistry_, flinkImageRegistry) };


    // flinkImageRepository Field Functions 
    bool hasFlinkImageRepository() const { return this->flinkImageRepository_ != nullptr;};
    void deleteFlinkImageRepository() { this->flinkImageRepository_ = nullptr;};
    inline string flinkImageRepository() const { DARABONBA_PTR_GET_DEFAULT(flinkImageRepository_, "") };
    inline GetClusterQueueInfoByEnvResponseBodyData& setFlinkImageRepository(string flinkImageRepository) { DARABONBA_PTR_SET_VALUE(flinkImageRepository_, flinkImageRepository) };


    // flinkImageTag Field Functions 
    bool hasFlinkImageTag() const { return this->flinkImageTag_ != nullptr;};
    void deleteFlinkImageTag() { this->flinkImageTag_ = nullptr;};
    inline string flinkImageTag() const { DARABONBA_PTR_GET_DEFAULT(flinkImageTag_, "") };
    inline GetClusterQueueInfoByEnvResponseBodyData& setFlinkImageTag(string flinkImageTag) { DARABONBA_PTR_SET_VALUE(flinkImageTag_, flinkImageTag) };


    // flinkVersion Field Functions 
    bool hasFlinkVersion() const { return this->flinkVersion_ != nullptr;};
    void deleteFlinkVersion() { this->flinkVersion_ = nullptr;};
    inline string flinkVersion() const { DARABONBA_PTR_GET_DEFAULT(flinkVersion_, "") };
    inline GetClusterQueueInfoByEnvResponseBodyData& setFlinkVersion(string flinkVersion) { DARABONBA_PTR_SET_VALUE(flinkVersion_, flinkVersion) };


    // labels Field Functions 
    bool hasLabels() const { return this->labels_ != nullptr;};
    void deleteLabels() { this->labels_ = nullptr;};
    inline string labels() const { DARABONBA_PTR_GET_DEFAULT(labels_, "") };
    inline GetClusterQueueInfoByEnvResponseBodyData& setLabels(string labels) { DARABONBA_PTR_SET_VALUE(labels_, labels) };


    // maxVcore Field Functions 
    bool hasMaxVcore() const { return this->maxVcore_ != nullptr;};
    void deleteMaxVcore() { this->maxVcore_ = nullptr;};
    inline string maxVcore() const { DARABONBA_PTR_GET_DEFAULT(maxVcore_, "") };
    inline GetClusterQueueInfoByEnvResponseBodyData& setMaxVcore(string maxVcore) { DARABONBA_PTR_SET_VALUE(maxVcore_, maxVcore) };


    // modifiedAt Field Functions 
    bool hasModifiedAt() const { return this->modifiedAt_ != nullptr;};
    void deleteModifiedAt() { this->modifiedAt_ = nullptr;};
    inline string modifiedAt() const { DARABONBA_PTR_GET_DEFAULT(modifiedAt_, "") };
    inline GetClusterQueueInfoByEnvResponseBodyData& setModifiedAt(string modifiedAt) { DARABONBA_PTR_SET_VALUE(modifiedAt_, modifiedAt) };


    // namespace Field Functions 
    bool hasNamespace() const { return this->namespace_ != nullptr;};
    void deleteNamespace() { this->namespace_ = nullptr;};
    inline string _namespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
    inline GetClusterQueueInfoByEnvResponseBodyData& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


    // queueName Field Functions 
    bool hasQueueName() const { return this->queueName_ != nullptr;};
    void deleteQueueName() { this->queueName_ = nullptr;};
    inline string queueName() const { DARABONBA_PTR_GET_DEFAULT(queueName_, "") };
    inline GetClusterQueueInfoByEnvResponseBodyData& setQueueName(string queueName) { DARABONBA_PTR_SET_VALUE(queueName_, queueName) };


    // resourceVersion Field Functions 
    bool hasResourceVersion() const { return this->resourceVersion_ != nullptr;};
    void deleteResourceVersion() { this->resourceVersion_ = nullptr;};
    inline string resourceVersion() const { DARABONBA_PTR_GET_DEFAULT(resourceVersion_, "") };
    inline GetClusterQueueInfoByEnvResponseBodyData& setResourceVersion(string resourceVersion) { DARABONBA_PTR_SET_VALUE(resourceVersion_, resourceVersion) };


    // spec Field Functions 
    bool hasSpec() const { return this->spec_ != nullptr;};
    void deleteSpec() { this->spec_ = nullptr;};
    inline string spec() const { DARABONBA_PTR_GET_DEFAULT(spec_, "") };
    inline GetClusterQueueInfoByEnvResponseBodyData& setSpec(string spec) { DARABONBA_PTR_SET_VALUE(spec_, spec) };


    // vvpClusterType Field Functions 
    bool hasVvpClusterType() const { return this->vvpClusterType_ != nullptr;};
    void deleteVvpClusterType() { this->vvpClusterType_ = nullptr;};
    inline string vvpClusterType() const { DARABONBA_PTR_GET_DEFAULT(vvpClusterType_, "") };
    inline GetClusterQueueInfoByEnvResponseBodyData& setVvpClusterType(string vvpClusterType) { DARABONBA_PTR_SET_VALUE(vvpClusterType_, vvpClusterType) };


  protected:
    std::shared_ptr<string> annotations_ = nullptr;
    std::shared_ptr<string> clusterId_ = nullptr;
    std::shared_ptr<string> createAt_ = nullptr;
    std::shared_ptr<string> flinkImageRegistry_ = nullptr;
    std::shared_ptr<string> flinkImageRepository_ = nullptr;
    std::shared_ptr<string> flinkImageTag_ = nullptr;
    std::shared_ptr<string> flinkVersion_ = nullptr;
    std::shared_ptr<string> labels_ = nullptr;
    std::shared_ptr<string> maxVcore_ = nullptr;
    std::shared_ptr<string> modifiedAt_ = nullptr;
    std::shared_ptr<string> namespace_ = nullptr;
    std::shared_ptr<string> queueName_ = nullptr;
    std::shared_ptr<string> resourceVersion_ = nullptr;
    std::shared_ptr<string> spec_ = nullptr;
    std::shared_ptr<string> vvpClusterType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
