// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETKYUUBISERVICERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETKYUUBISERVICERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EmrServerlessSpark20230808
{
namespace Models
{
  class GetKyuubiServiceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetKyuubiServiceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetKyuubiServiceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    GetKyuubiServiceResponseBody() = default ;
    GetKyuubiServiceResponseBody(const GetKyuubiServiceResponseBody &) = default ;
    GetKyuubiServiceResponseBody(GetKyuubiServiceResponseBody &&) = default ;
    GetKyuubiServiceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetKyuubiServiceResponseBody() = default ;
    GetKyuubiServiceResponseBody& operator=(const GetKyuubiServiceResponseBody &) = default ;
    GetKyuubiServiceResponseBody& operator=(GetKyuubiServiceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(computeInstance, computeInstance_);
        DARABONBA_PTR_TO_JSON(createTime, createTime_);
        DARABONBA_PTR_TO_JSON(creator, creator_);
        DARABONBA_PTR_TO_JSON(innerEndpoint, innerEndpoint_);
        DARABONBA_PTR_TO_JSON(kyuubiConfigs, kyuubiConfigs_);
        DARABONBA_PTR_TO_JSON(kyuubiReleaseVersion, kyuubiReleaseVersion_);
        DARABONBA_PTR_TO_JSON(kyuubiServiceId, kyuubiServiceId_);
        DARABONBA_PTR_TO_JSON(name, name_);
        DARABONBA_PTR_TO_JSON(publicEndpoint, publicEndpoint_);
        DARABONBA_PTR_TO_JSON(publicEndpointEnabled, publicEndpointEnabled_);
        DARABONBA_PTR_TO_JSON(queue, queue_);
        DARABONBA_PTR_TO_JSON(releaseVersion, releaseVersion_);
        DARABONBA_PTR_TO_JSON(replica, replica_);
        DARABONBA_PTR_TO_JSON(sparkConfigs, sparkConfigs_);
        DARABONBA_PTR_TO_JSON(startTime, startTime_);
        DARABONBA_PTR_TO_JSON(state, state_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(computeInstance, computeInstance_);
        DARABONBA_PTR_FROM_JSON(createTime, createTime_);
        DARABONBA_PTR_FROM_JSON(creator, creator_);
        DARABONBA_PTR_FROM_JSON(innerEndpoint, innerEndpoint_);
        DARABONBA_PTR_FROM_JSON(kyuubiConfigs, kyuubiConfigs_);
        DARABONBA_PTR_FROM_JSON(kyuubiReleaseVersion, kyuubiReleaseVersion_);
        DARABONBA_PTR_FROM_JSON(kyuubiServiceId, kyuubiServiceId_);
        DARABONBA_PTR_FROM_JSON(name, name_);
        DARABONBA_PTR_FROM_JSON(publicEndpoint, publicEndpoint_);
        DARABONBA_PTR_FROM_JSON(publicEndpointEnabled, publicEndpointEnabled_);
        DARABONBA_PTR_FROM_JSON(queue, queue_);
        DARABONBA_PTR_FROM_JSON(releaseVersion, releaseVersion_);
        DARABONBA_PTR_FROM_JSON(replica, replica_);
        DARABONBA_PTR_FROM_JSON(sparkConfigs, sparkConfigs_);
        DARABONBA_PTR_FROM_JSON(startTime, startTime_);
        DARABONBA_PTR_FROM_JSON(state, state_);
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
      virtual bool empty() const override { return this->computeInstance_ == nullptr
        && this->createTime_ == nullptr && this->creator_ == nullptr && this->innerEndpoint_ == nullptr && this->kyuubiConfigs_ == nullptr && this->kyuubiReleaseVersion_ == nullptr
        && this->kyuubiServiceId_ == nullptr && this->name_ == nullptr && this->publicEndpoint_ == nullptr && this->publicEndpointEnabled_ == nullptr && this->queue_ == nullptr
        && this->releaseVersion_ == nullptr && this->replica_ == nullptr && this->sparkConfigs_ == nullptr && this->startTime_ == nullptr && this->state_ == nullptr; };
      // computeInstance Field Functions 
      bool hasComputeInstance() const { return this->computeInstance_ != nullptr;};
      void deleteComputeInstance() { this->computeInstance_ = nullptr;};
      inline string getComputeInstance() const { DARABONBA_PTR_GET_DEFAULT(computeInstance_, "") };
      inline Data& setComputeInstance(string computeInstance) { DARABONBA_PTR_SET_VALUE(computeInstance_, computeInstance) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline Data& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // creator Field Functions 
      bool hasCreator() const { return this->creator_ != nullptr;};
      void deleteCreator() { this->creator_ = nullptr;};
      inline string getCreator() const { DARABONBA_PTR_GET_DEFAULT(creator_, "") };
      inline Data& setCreator(string creator) { DARABONBA_PTR_SET_VALUE(creator_, creator) };


      // innerEndpoint Field Functions 
      bool hasInnerEndpoint() const { return this->innerEndpoint_ != nullptr;};
      void deleteInnerEndpoint() { this->innerEndpoint_ = nullptr;};
      inline string getInnerEndpoint() const { DARABONBA_PTR_GET_DEFAULT(innerEndpoint_, "") };
      inline Data& setInnerEndpoint(string innerEndpoint) { DARABONBA_PTR_SET_VALUE(innerEndpoint_, innerEndpoint) };


      // kyuubiConfigs Field Functions 
      bool hasKyuubiConfigs() const { return this->kyuubiConfigs_ != nullptr;};
      void deleteKyuubiConfigs() { this->kyuubiConfigs_ = nullptr;};
      inline string getKyuubiConfigs() const { DARABONBA_PTR_GET_DEFAULT(kyuubiConfigs_, "") };
      inline Data& setKyuubiConfigs(string kyuubiConfigs) { DARABONBA_PTR_SET_VALUE(kyuubiConfigs_, kyuubiConfigs) };


      // kyuubiReleaseVersion Field Functions 
      bool hasKyuubiReleaseVersion() const { return this->kyuubiReleaseVersion_ != nullptr;};
      void deleteKyuubiReleaseVersion() { this->kyuubiReleaseVersion_ = nullptr;};
      inline string getKyuubiReleaseVersion() const { DARABONBA_PTR_GET_DEFAULT(kyuubiReleaseVersion_, "") };
      inline Data& setKyuubiReleaseVersion(string kyuubiReleaseVersion) { DARABONBA_PTR_SET_VALUE(kyuubiReleaseVersion_, kyuubiReleaseVersion) };


      // kyuubiServiceId Field Functions 
      bool hasKyuubiServiceId() const { return this->kyuubiServiceId_ != nullptr;};
      void deleteKyuubiServiceId() { this->kyuubiServiceId_ = nullptr;};
      inline string getKyuubiServiceId() const { DARABONBA_PTR_GET_DEFAULT(kyuubiServiceId_, "") };
      inline Data& setKyuubiServiceId(string kyuubiServiceId) { DARABONBA_PTR_SET_VALUE(kyuubiServiceId_, kyuubiServiceId) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Data& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // publicEndpoint Field Functions 
      bool hasPublicEndpoint() const { return this->publicEndpoint_ != nullptr;};
      void deletePublicEndpoint() { this->publicEndpoint_ = nullptr;};
      inline string getPublicEndpoint() const { DARABONBA_PTR_GET_DEFAULT(publicEndpoint_, "") };
      inline Data& setPublicEndpoint(string publicEndpoint) { DARABONBA_PTR_SET_VALUE(publicEndpoint_, publicEndpoint) };


      // publicEndpointEnabled Field Functions 
      bool hasPublicEndpointEnabled() const { return this->publicEndpointEnabled_ != nullptr;};
      void deletePublicEndpointEnabled() { this->publicEndpointEnabled_ = nullptr;};
      inline bool getPublicEndpointEnabled() const { DARABONBA_PTR_GET_DEFAULT(publicEndpointEnabled_, false) };
      inline Data& setPublicEndpointEnabled(bool publicEndpointEnabled) { DARABONBA_PTR_SET_VALUE(publicEndpointEnabled_, publicEndpointEnabled) };


      // queue Field Functions 
      bool hasQueue() const { return this->queue_ != nullptr;};
      void deleteQueue() { this->queue_ = nullptr;};
      inline string getQueue() const { DARABONBA_PTR_GET_DEFAULT(queue_, "") };
      inline Data& setQueue(string queue) { DARABONBA_PTR_SET_VALUE(queue_, queue) };


      // releaseVersion Field Functions 
      bool hasReleaseVersion() const { return this->releaseVersion_ != nullptr;};
      void deleteReleaseVersion() { this->releaseVersion_ = nullptr;};
      inline string getReleaseVersion() const { DARABONBA_PTR_GET_DEFAULT(releaseVersion_, "") };
      inline Data& setReleaseVersion(string releaseVersion) { DARABONBA_PTR_SET_VALUE(releaseVersion_, releaseVersion) };


      // replica Field Functions 
      bool hasReplica() const { return this->replica_ != nullptr;};
      void deleteReplica() { this->replica_ = nullptr;};
      inline int32_t getReplica() const { DARABONBA_PTR_GET_DEFAULT(replica_, 0) };
      inline Data& setReplica(int32_t replica) { DARABONBA_PTR_SET_VALUE(replica_, replica) };


      // sparkConfigs Field Functions 
      bool hasSparkConfigs() const { return this->sparkConfigs_ != nullptr;};
      void deleteSparkConfigs() { this->sparkConfigs_ = nullptr;};
      inline string getSparkConfigs() const { DARABONBA_PTR_GET_DEFAULT(sparkConfigs_, "") };
      inline Data& setSparkConfigs(string sparkConfigs) { DARABONBA_PTR_SET_VALUE(sparkConfigs_, sparkConfigs) };


      // startTime Field Functions 
      bool hasStartTime() const { return this->startTime_ != nullptr;};
      void deleteStartTime() { this->startTime_ = nullptr;};
      inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
      inline Data& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


      // state Field Functions 
      bool hasState() const { return this->state_ != nullptr;};
      void deleteState() { this->state_ = nullptr;};
      inline string getState() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
      inline Data& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


    protected:
      shared_ptr<string> computeInstance_ {};
      shared_ptr<string> createTime_ {};
      shared_ptr<string> creator_ {};
      shared_ptr<string> innerEndpoint_ {};
      shared_ptr<string> kyuubiConfigs_ {};
      shared_ptr<string> kyuubiReleaseVersion_ {};
      // Kyuubi Service ID。
      shared_ptr<string> kyuubiServiceId_ {};
      shared_ptr<string> name_ {};
      shared_ptr<string> publicEndpoint_ {};
      shared_ptr<bool> publicEndpointEnabled_ {};
      shared_ptr<string> queue_ {};
      shared_ptr<string> releaseVersion_ {};
      shared_ptr<int32_t> replica_ {};
      shared_ptr<string> sparkConfigs_ {};
      shared_ptr<string> startTime_ {};
      shared_ptr<string> state_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetKyuubiServiceResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetKyuubiServiceResponseBody::Data) };
    inline GetKyuubiServiceResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetKyuubiServiceResponseBody::Data) };
    inline GetKyuubiServiceResponseBody& setData(const GetKyuubiServiceResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetKyuubiServiceResponseBody& setData(GetKyuubiServiceResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetKyuubiServiceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<GetKyuubiServiceResponseBody::Data> data_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EmrServerlessSpark20230808
#endif
