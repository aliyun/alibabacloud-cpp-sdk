// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATELABORATORYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATELABORATORYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiRecService20221213
{
namespace Models
{
  class CreateLaboratoryRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateLaboratoryRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BucketCount, bucketCount_);
      DARABONBA_PTR_TO_JSON(BucketType, bucketType_);
      DARABONBA_PTR_TO_JSON(Buckets, buckets_);
      DARABONBA_PTR_TO_JSON(DebugCrowdId, debugCrowdId_);
      DARABONBA_PTR_TO_JSON(DebugUsers, debugUsers_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Environment, environment_);
      DARABONBA_PTR_TO_JSON(Filter, filter_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(SceneId, sceneId_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, CreateLaboratoryRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BucketCount, bucketCount_);
      DARABONBA_PTR_FROM_JSON(BucketType, bucketType_);
      DARABONBA_PTR_FROM_JSON(Buckets, buckets_);
      DARABONBA_PTR_FROM_JSON(DebugCrowdId, debugCrowdId_);
      DARABONBA_PTR_FROM_JSON(DebugUsers, debugUsers_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Environment, environment_);
      DARABONBA_PTR_FROM_JSON(Filter, filter_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(SceneId, sceneId_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    CreateLaboratoryRequest() = default ;
    CreateLaboratoryRequest(const CreateLaboratoryRequest &) = default ;
    CreateLaboratoryRequest(CreateLaboratoryRequest &&) = default ;
    CreateLaboratoryRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateLaboratoryRequest() = default ;
    CreateLaboratoryRequest& operator=(const CreateLaboratoryRequest &) = default ;
    CreateLaboratoryRequest& operator=(CreateLaboratoryRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->bucketCount_ != nullptr
        && this->bucketType_ != nullptr && this->buckets_ != nullptr && this->debugCrowdId_ != nullptr && this->debugUsers_ != nullptr && this->description_ != nullptr
        && this->environment_ != nullptr && this->filter_ != nullptr && this->instanceId_ != nullptr && this->name_ != nullptr && this->sceneId_ != nullptr
        && this->type_ != nullptr; };
    // bucketCount Field Functions 
    bool hasBucketCount() const { return this->bucketCount_ != nullptr;};
    void deleteBucketCount() { this->bucketCount_ = nullptr;};
    inline int32_t bucketCount() const { DARABONBA_PTR_GET_DEFAULT(bucketCount_, 0) };
    inline CreateLaboratoryRequest& setBucketCount(int32_t bucketCount) { DARABONBA_PTR_SET_VALUE(bucketCount_, bucketCount) };


    // bucketType Field Functions 
    bool hasBucketType() const { return this->bucketType_ != nullptr;};
    void deleteBucketType() { this->bucketType_ = nullptr;};
    inline string bucketType() const { DARABONBA_PTR_GET_DEFAULT(bucketType_, "") };
    inline CreateLaboratoryRequest& setBucketType(string bucketType) { DARABONBA_PTR_SET_VALUE(bucketType_, bucketType) };


    // buckets Field Functions 
    bool hasBuckets() const { return this->buckets_ != nullptr;};
    void deleteBuckets() { this->buckets_ = nullptr;};
    inline string buckets() const { DARABONBA_PTR_GET_DEFAULT(buckets_, "") };
    inline CreateLaboratoryRequest& setBuckets(string buckets) { DARABONBA_PTR_SET_VALUE(buckets_, buckets) };


    // debugCrowdId Field Functions 
    bool hasDebugCrowdId() const { return this->debugCrowdId_ != nullptr;};
    void deleteDebugCrowdId() { this->debugCrowdId_ = nullptr;};
    inline string debugCrowdId() const { DARABONBA_PTR_GET_DEFAULT(debugCrowdId_, "") };
    inline CreateLaboratoryRequest& setDebugCrowdId(string debugCrowdId) { DARABONBA_PTR_SET_VALUE(debugCrowdId_, debugCrowdId) };


    // debugUsers Field Functions 
    bool hasDebugUsers() const { return this->debugUsers_ != nullptr;};
    void deleteDebugUsers() { this->debugUsers_ = nullptr;};
    inline string debugUsers() const { DARABONBA_PTR_GET_DEFAULT(debugUsers_, "") };
    inline CreateLaboratoryRequest& setDebugUsers(string debugUsers) { DARABONBA_PTR_SET_VALUE(debugUsers_, debugUsers) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateLaboratoryRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // environment Field Functions 
    bool hasEnvironment() const { return this->environment_ != nullptr;};
    void deleteEnvironment() { this->environment_ = nullptr;};
    inline string environment() const { DARABONBA_PTR_GET_DEFAULT(environment_, "") };
    inline CreateLaboratoryRequest& setEnvironment(string environment) { DARABONBA_PTR_SET_VALUE(environment_, environment) };


    // filter Field Functions 
    bool hasFilter() const { return this->filter_ != nullptr;};
    void deleteFilter() { this->filter_ = nullptr;};
    inline string filter() const { DARABONBA_PTR_GET_DEFAULT(filter_, "") };
    inline CreateLaboratoryRequest& setFilter(string filter) { DARABONBA_PTR_SET_VALUE(filter_, filter) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline CreateLaboratoryRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateLaboratoryRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // sceneId Field Functions 
    bool hasSceneId() const { return this->sceneId_ != nullptr;};
    void deleteSceneId() { this->sceneId_ = nullptr;};
    inline string sceneId() const { DARABONBA_PTR_GET_DEFAULT(sceneId_, "") };
    inline CreateLaboratoryRequest& setSceneId(string sceneId) { DARABONBA_PTR_SET_VALUE(sceneId_, sceneId) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline CreateLaboratoryRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    std::shared_ptr<int32_t> bucketCount_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> bucketType_ = nullptr;
    std::shared_ptr<string> buckets_ = nullptr;
    std::shared_ptr<string> debugCrowdId_ = nullptr;
    std::shared_ptr<string> debugUsers_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> environment_ = nullptr;
    std::shared_ptr<string> filter_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> name_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> sceneId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiRecService20221213
#endif
