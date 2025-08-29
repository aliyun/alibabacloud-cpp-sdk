// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESAMPLECONSISTENCYJOBREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATESAMPLECONSISTENCYJOBREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiRecService20221213
{
namespace Models
{
  class CreateSampleConsistencyJobRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateSampleConsistencyJobRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Duration, duration_);
      DARABONBA_PTR_TO_JSON(EasModelServiceName, easModelServiceName_);
      DARABONBA_PTR_TO_JSON(FeatureSaveResourceId, featureSaveResourceId_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(ItemIdField, itemIdField_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(PartitionField, partitionField_);
      DARABONBA_PTR_TO_JSON(PartitionFieldFormat, partitionFieldFormat_);
      DARABONBA_PTR_TO_JSON(RequestIdField, requestIdField_);
      DARABONBA_PTR_TO_JSON(SampleRate, sampleRate_);
      DARABONBA_PTR_TO_JSON(SampleTableName, sampleTableName_);
      DARABONBA_PTR_TO_JSON(SceneId, sceneId_);
      DARABONBA_PTR_TO_JSON(UserIdField, userIdField_);
    };
    friend void from_json(const Darabonba::Json& j, CreateSampleConsistencyJobRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Duration, duration_);
      DARABONBA_PTR_FROM_JSON(EasModelServiceName, easModelServiceName_);
      DARABONBA_PTR_FROM_JSON(FeatureSaveResourceId, featureSaveResourceId_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(ItemIdField, itemIdField_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(PartitionField, partitionField_);
      DARABONBA_PTR_FROM_JSON(PartitionFieldFormat, partitionFieldFormat_);
      DARABONBA_PTR_FROM_JSON(RequestIdField, requestIdField_);
      DARABONBA_PTR_FROM_JSON(SampleRate, sampleRate_);
      DARABONBA_PTR_FROM_JSON(SampleTableName, sampleTableName_);
      DARABONBA_PTR_FROM_JSON(SceneId, sceneId_);
      DARABONBA_PTR_FROM_JSON(UserIdField, userIdField_);
    };
    CreateSampleConsistencyJobRequest() = default ;
    CreateSampleConsistencyJobRequest(const CreateSampleConsistencyJobRequest &) = default ;
    CreateSampleConsistencyJobRequest(CreateSampleConsistencyJobRequest &&) = default ;
    CreateSampleConsistencyJobRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateSampleConsistencyJobRequest() = default ;
    CreateSampleConsistencyJobRequest& operator=(const CreateSampleConsistencyJobRequest &) = default ;
    CreateSampleConsistencyJobRequest& operator=(CreateSampleConsistencyJobRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->duration_ != nullptr
        && this->easModelServiceName_ != nullptr && this->featureSaveResourceId_ != nullptr && this->instanceId_ != nullptr && this->itemIdField_ != nullptr && this->name_ != nullptr
        && this->partitionField_ != nullptr && this->partitionFieldFormat_ != nullptr && this->requestIdField_ != nullptr && this->sampleRate_ != nullptr && this->sampleTableName_ != nullptr
        && this->sceneId_ != nullptr && this->userIdField_ != nullptr; };
    // duration Field Functions 
    bool hasDuration() const { return this->duration_ != nullptr;};
    void deleteDuration() { this->duration_ = nullptr;};
    inline string duration() const { DARABONBA_PTR_GET_DEFAULT(duration_, "") };
    inline CreateSampleConsistencyJobRequest& setDuration(string duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


    // easModelServiceName Field Functions 
    bool hasEasModelServiceName() const { return this->easModelServiceName_ != nullptr;};
    void deleteEasModelServiceName() { this->easModelServiceName_ = nullptr;};
    inline string easModelServiceName() const { DARABONBA_PTR_GET_DEFAULT(easModelServiceName_, "") };
    inline CreateSampleConsistencyJobRequest& setEasModelServiceName(string easModelServiceName) { DARABONBA_PTR_SET_VALUE(easModelServiceName_, easModelServiceName) };


    // featureSaveResourceId Field Functions 
    bool hasFeatureSaveResourceId() const { return this->featureSaveResourceId_ != nullptr;};
    void deleteFeatureSaveResourceId() { this->featureSaveResourceId_ = nullptr;};
    inline string featureSaveResourceId() const { DARABONBA_PTR_GET_DEFAULT(featureSaveResourceId_, "") };
    inline CreateSampleConsistencyJobRequest& setFeatureSaveResourceId(string featureSaveResourceId) { DARABONBA_PTR_SET_VALUE(featureSaveResourceId_, featureSaveResourceId) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline CreateSampleConsistencyJobRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // itemIdField Field Functions 
    bool hasItemIdField() const { return this->itemIdField_ != nullptr;};
    void deleteItemIdField() { this->itemIdField_ = nullptr;};
    inline string itemIdField() const { DARABONBA_PTR_GET_DEFAULT(itemIdField_, "") };
    inline CreateSampleConsistencyJobRequest& setItemIdField(string itemIdField) { DARABONBA_PTR_SET_VALUE(itemIdField_, itemIdField) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateSampleConsistencyJobRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // partitionField Field Functions 
    bool hasPartitionField() const { return this->partitionField_ != nullptr;};
    void deletePartitionField() { this->partitionField_ = nullptr;};
    inline string partitionField() const { DARABONBA_PTR_GET_DEFAULT(partitionField_, "") };
    inline CreateSampleConsistencyJobRequest& setPartitionField(string partitionField) { DARABONBA_PTR_SET_VALUE(partitionField_, partitionField) };


    // partitionFieldFormat Field Functions 
    bool hasPartitionFieldFormat() const { return this->partitionFieldFormat_ != nullptr;};
    void deletePartitionFieldFormat() { this->partitionFieldFormat_ = nullptr;};
    inline string partitionFieldFormat() const { DARABONBA_PTR_GET_DEFAULT(partitionFieldFormat_, "") };
    inline CreateSampleConsistencyJobRequest& setPartitionFieldFormat(string partitionFieldFormat) { DARABONBA_PTR_SET_VALUE(partitionFieldFormat_, partitionFieldFormat) };


    // requestIdField Field Functions 
    bool hasRequestIdField() const { return this->requestIdField_ != nullptr;};
    void deleteRequestIdField() { this->requestIdField_ = nullptr;};
    inline string requestIdField() const { DARABONBA_PTR_GET_DEFAULT(requestIdField_, "") };
    inline CreateSampleConsistencyJobRequest& setRequestIdField(string requestIdField) { DARABONBA_PTR_SET_VALUE(requestIdField_, requestIdField) };


    // sampleRate Field Functions 
    bool hasSampleRate() const { return this->sampleRate_ != nullptr;};
    void deleteSampleRate() { this->sampleRate_ = nullptr;};
    inline string sampleRate() const { DARABONBA_PTR_GET_DEFAULT(sampleRate_, "") };
    inline CreateSampleConsistencyJobRequest& setSampleRate(string sampleRate) { DARABONBA_PTR_SET_VALUE(sampleRate_, sampleRate) };


    // sampleTableName Field Functions 
    bool hasSampleTableName() const { return this->sampleTableName_ != nullptr;};
    void deleteSampleTableName() { this->sampleTableName_ = nullptr;};
    inline string sampleTableName() const { DARABONBA_PTR_GET_DEFAULT(sampleTableName_, "") };
    inline CreateSampleConsistencyJobRequest& setSampleTableName(string sampleTableName) { DARABONBA_PTR_SET_VALUE(sampleTableName_, sampleTableName) };


    // sceneId Field Functions 
    bool hasSceneId() const { return this->sceneId_ != nullptr;};
    void deleteSceneId() { this->sceneId_ = nullptr;};
    inline string sceneId() const { DARABONBA_PTR_GET_DEFAULT(sceneId_, "") };
    inline CreateSampleConsistencyJobRequest& setSceneId(string sceneId) { DARABONBA_PTR_SET_VALUE(sceneId_, sceneId) };


    // userIdField Field Functions 
    bool hasUserIdField() const { return this->userIdField_ != nullptr;};
    void deleteUserIdField() { this->userIdField_ = nullptr;};
    inline string userIdField() const { DARABONBA_PTR_GET_DEFAULT(userIdField_, "") };
    inline CreateSampleConsistencyJobRequest& setUserIdField(string userIdField) { DARABONBA_PTR_SET_VALUE(userIdField_, userIdField) };


  protected:
    std::shared_ptr<string> duration_ = nullptr;
    std::shared_ptr<string> easModelServiceName_ = nullptr;
    std::shared_ptr<string> featureSaveResourceId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    std::shared_ptr<string> itemIdField_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> partitionField_ = nullptr;
    std::shared_ptr<string> partitionFieldFormat_ = nullptr;
    std::shared_ptr<string> requestIdField_ = nullptr;
    std::shared_ptr<string> sampleRate_ = nullptr;
    std::shared_ptr<string> sampleTableName_ = nullptr;
    std::shared_ptr<string> sceneId_ = nullptr;
    std::shared_ptr<string> userIdField_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiRecService20221213
#endif
