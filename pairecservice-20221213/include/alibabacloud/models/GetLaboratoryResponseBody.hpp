// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETLABORATORYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETLABORATORYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiRecService20221213
{
namespace Models
{
  class GetLaboratoryResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetLaboratoryResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(BucketCount, bucketCount_);
      DARABONBA_PTR_TO_JSON(BucketType, bucketType_);
      DARABONBA_PTR_TO_JSON(Buckets, buckets_);
      DARABONBA_PTR_TO_JSON(CrowdId, crowdId_);
      DARABONBA_PTR_TO_JSON(DebugCrowdId, debugCrowdId_);
      DARABONBA_PTR_TO_JSON(DebugUsers, debugUsers_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Environment, environment_);
      DARABONBA_PTR_TO_JSON(Filter, filter_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SceneId, sceneId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, GetLaboratoryResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(BucketCount, bucketCount_);
      DARABONBA_PTR_FROM_JSON(BucketType, bucketType_);
      DARABONBA_PTR_FROM_JSON(Buckets, buckets_);
      DARABONBA_PTR_FROM_JSON(CrowdId, crowdId_);
      DARABONBA_PTR_FROM_JSON(DebugCrowdId, debugCrowdId_);
      DARABONBA_PTR_FROM_JSON(DebugUsers, debugUsers_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Environment, environment_);
      DARABONBA_PTR_FROM_JSON(Filter, filter_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SceneId, sceneId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    GetLaboratoryResponseBody() = default ;
    GetLaboratoryResponseBody(const GetLaboratoryResponseBody &) = default ;
    GetLaboratoryResponseBody(GetLaboratoryResponseBody &&) = default ;
    GetLaboratoryResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetLaboratoryResponseBody() = default ;
    GetLaboratoryResponseBody& operator=(const GetLaboratoryResponseBody &) = default ;
    GetLaboratoryResponseBody& operator=(GetLaboratoryResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bucketCount_ == nullptr
        && this->bucketType_ == nullptr && this->buckets_ == nullptr && this->crowdId_ == nullptr && this->debugCrowdId_ == nullptr && this->debugUsers_ == nullptr
        && this->description_ == nullptr && this->environment_ == nullptr && this->filter_ == nullptr && this->name_ == nullptr && this->requestId_ == nullptr
        && this->sceneId_ == nullptr && this->status_ == nullptr && this->type_ == nullptr; };
    // bucketCount Field Functions 
    bool hasBucketCount() const { return this->bucketCount_ != nullptr;};
    void deleteBucketCount() { this->bucketCount_ = nullptr;};
    inline int32_t getBucketCount() const { DARABONBA_PTR_GET_DEFAULT(bucketCount_, 0) };
    inline GetLaboratoryResponseBody& setBucketCount(int32_t bucketCount) { DARABONBA_PTR_SET_VALUE(bucketCount_, bucketCount) };


    // bucketType Field Functions 
    bool hasBucketType() const { return this->bucketType_ != nullptr;};
    void deleteBucketType() { this->bucketType_ = nullptr;};
    inline string getBucketType() const { DARABONBA_PTR_GET_DEFAULT(bucketType_, "") };
    inline GetLaboratoryResponseBody& setBucketType(string bucketType) { DARABONBA_PTR_SET_VALUE(bucketType_, bucketType) };


    // buckets Field Functions 
    bool hasBuckets() const { return this->buckets_ != nullptr;};
    void deleteBuckets() { this->buckets_ = nullptr;};
    inline string getBuckets() const { DARABONBA_PTR_GET_DEFAULT(buckets_, "") };
    inline GetLaboratoryResponseBody& setBuckets(string buckets) { DARABONBA_PTR_SET_VALUE(buckets_, buckets) };


    // crowdId Field Functions 
    bool hasCrowdId() const { return this->crowdId_ != nullptr;};
    void deleteCrowdId() { this->crowdId_ = nullptr;};
    inline string getCrowdId() const { DARABONBA_PTR_GET_DEFAULT(crowdId_, "") };
    inline GetLaboratoryResponseBody& setCrowdId(string crowdId) { DARABONBA_PTR_SET_VALUE(crowdId_, crowdId) };


    // debugCrowdId Field Functions 
    bool hasDebugCrowdId() const { return this->debugCrowdId_ != nullptr;};
    void deleteDebugCrowdId() { this->debugCrowdId_ = nullptr;};
    inline string getDebugCrowdId() const { DARABONBA_PTR_GET_DEFAULT(debugCrowdId_, "") };
    inline GetLaboratoryResponseBody& setDebugCrowdId(string debugCrowdId) { DARABONBA_PTR_SET_VALUE(debugCrowdId_, debugCrowdId) };


    // debugUsers Field Functions 
    bool hasDebugUsers() const { return this->debugUsers_ != nullptr;};
    void deleteDebugUsers() { this->debugUsers_ = nullptr;};
    inline string getDebugUsers() const { DARABONBA_PTR_GET_DEFAULT(debugUsers_, "") };
    inline GetLaboratoryResponseBody& setDebugUsers(string debugUsers) { DARABONBA_PTR_SET_VALUE(debugUsers_, debugUsers) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline GetLaboratoryResponseBody& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // environment Field Functions 
    bool hasEnvironment() const { return this->environment_ != nullptr;};
    void deleteEnvironment() { this->environment_ = nullptr;};
    inline string getEnvironment() const { DARABONBA_PTR_GET_DEFAULT(environment_, "") };
    inline GetLaboratoryResponseBody& setEnvironment(string environment) { DARABONBA_PTR_SET_VALUE(environment_, environment) };


    // filter Field Functions 
    bool hasFilter() const { return this->filter_ != nullptr;};
    void deleteFilter() { this->filter_ = nullptr;};
    inline string getFilter() const { DARABONBA_PTR_GET_DEFAULT(filter_, "") };
    inline GetLaboratoryResponseBody& setFilter(string filter) { DARABONBA_PTR_SET_VALUE(filter_, filter) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline GetLaboratoryResponseBody& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetLaboratoryResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // sceneId Field Functions 
    bool hasSceneId() const { return this->sceneId_ != nullptr;};
    void deleteSceneId() { this->sceneId_ = nullptr;};
    inline string getSceneId() const { DARABONBA_PTR_GET_DEFAULT(sceneId_, "") };
    inline GetLaboratoryResponseBody& setSceneId(string sceneId) { DARABONBA_PTR_SET_VALUE(sceneId_, sceneId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetLaboratoryResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline GetLaboratoryResponseBody& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    shared_ptr<int32_t> bucketCount_ {};
    shared_ptr<string> bucketType_ {};
    shared_ptr<string> buckets_ {};
    shared_ptr<string> crowdId_ {};
    shared_ptr<string> debugCrowdId_ {};
    shared_ptr<string> debugUsers_ {};
    shared_ptr<string> description_ {};
    shared_ptr<string> environment_ {};
    shared_ptr<string> filter_ {};
    shared_ptr<string> name_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
    shared_ptr<string> sceneId_ {};
    shared_ptr<string> status_ {};
    shared_ptr<string> type_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiRecService20221213
#endif
