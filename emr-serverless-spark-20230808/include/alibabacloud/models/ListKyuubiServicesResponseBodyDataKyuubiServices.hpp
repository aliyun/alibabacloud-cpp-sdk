// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTKYUUBISERVICESRESPONSEBODYDATAKYUUBISERVICES_HPP_
#define ALIBABACLOUD_MODELS_LISTKYUUBISERVICESRESPONSEBODYDATAKYUUBISERVICES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EmrServerlessSpark20230808
{
namespace Models
{
  class ListKyuubiServicesResponseBodyDataKyuubiServices : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListKyuubiServicesResponseBodyDataKyuubiServices& obj) { 
      DARABONBA_PTR_TO_JSON(computeInstance, computeInstance_);
      DARABONBA_PTR_TO_JSON(createTime, createTime_);
      DARABONBA_PTR_TO_JSON(creator, creator_);
      DARABONBA_PTR_TO_JSON(innerEndpoint, innerEndpoint_);
      DARABONBA_PTR_TO_JSON(kyuubiConfigs, kyuubiConfigs_);
      DARABONBA_PTR_TO_JSON(kyuubiReleaseVersion, kyuubiReleaseVersion_);
      DARABONBA_PTR_TO_JSON(kyuubiServiceId, kyuubiServiceId_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(publicEndpoint, publicEndpoint_);
      DARABONBA_PTR_TO_JSON(queue, queue_);
      DARABONBA_PTR_TO_JSON(releaseVersion, releaseVersion_);
      DARABONBA_PTR_TO_JSON(replica, replica_);
      DARABONBA_PTR_TO_JSON(sparkConfigs, sparkConfigs_);
      DARABONBA_PTR_TO_JSON(startTime, startTime_);
      DARABONBA_PTR_TO_JSON(state, state_);
    };
    friend void from_json(const Darabonba::Json& j, ListKyuubiServicesResponseBodyDataKyuubiServices& obj) { 
      DARABONBA_PTR_FROM_JSON(computeInstance, computeInstance_);
      DARABONBA_PTR_FROM_JSON(createTime, createTime_);
      DARABONBA_PTR_FROM_JSON(creator, creator_);
      DARABONBA_PTR_FROM_JSON(innerEndpoint, innerEndpoint_);
      DARABONBA_PTR_FROM_JSON(kyuubiConfigs, kyuubiConfigs_);
      DARABONBA_PTR_FROM_JSON(kyuubiReleaseVersion, kyuubiReleaseVersion_);
      DARABONBA_PTR_FROM_JSON(kyuubiServiceId, kyuubiServiceId_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(publicEndpoint, publicEndpoint_);
      DARABONBA_PTR_FROM_JSON(queue, queue_);
      DARABONBA_PTR_FROM_JSON(releaseVersion, releaseVersion_);
      DARABONBA_PTR_FROM_JSON(replica, replica_);
      DARABONBA_PTR_FROM_JSON(sparkConfigs, sparkConfigs_);
      DARABONBA_PTR_FROM_JSON(startTime, startTime_);
      DARABONBA_PTR_FROM_JSON(state, state_);
    };
    ListKyuubiServicesResponseBodyDataKyuubiServices() = default ;
    ListKyuubiServicesResponseBodyDataKyuubiServices(const ListKyuubiServicesResponseBodyDataKyuubiServices &) = default ;
    ListKyuubiServicesResponseBodyDataKyuubiServices(ListKyuubiServicesResponseBodyDataKyuubiServices &&) = default ;
    ListKyuubiServicesResponseBodyDataKyuubiServices(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListKyuubiServicesResponseBodyDataKyuubiServices() = default ;
    ListKyuubiServicesResponseBodyDataKyuubiServices& operator=(const ListKyuubiServicesResponseBodyDataKyuubiServices &) = default ;
    ListKyuubiServicesResponseBodyDataKyuubiServices& operator=(ListKyuubiServicesResponseBodyDataKyuubiServices &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->computeInstance_ != nullptr
        && this->createTime_ != nullptr && this->creator_ != nullptr && this->innerEndpoint_ != nullptr && this->kyuubiConfigs_ != nullptr && this->kyuubiReleaseVersion_ != nullptr
        && this->kyuubiServiceId_ != nullptr && this->name_ != nullptr && this->publicEndpoint_ != nullptr && this->queue_ != nullptr && this->releaseVersion_ != nullptr
        && this->replica_ != nullptr && this->sparkConfigs_ != nullptr && this->startTime_ != nullptr && this->state_ != nullptr; };
    // computeInstance Field Functions 
    bool hasComputeInstance() const { return this->computeInstance_ != nullptr;};
    void deleteComputeInstance() { this->computeInstance_ = nullptr;};
    inline string computeInstance() const { DARABONBA_PTR_GET_DEFAULT(computeInstance_, "") };
    inline ListKyuubiServicesResponseBodyDataKyuubiServices& setComputeInstance(string computeInstance) { DARABONBA_PTR_SET_VALUE(computeInstance_, computeInstance) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline ListKyuubiServicesResponseBodyDataKyuubiServices& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // creator Field Functions 
    bool hasCreator() const { return this->creator_ != nullptr;};
    void deleteCreator() { this->creator_ = nullptr;};
    inline string creator() const { DARABONBA_PTR_GET_DEFAULT(creator_, "") };
    inline ListKyuubiServicesResponseBodyDataKyuubiServices& setCreator(string creator) { DARABONBA_PTR_SET_VALUE(creator_, creator) };


    // innerEndpoint Field Functions 
    bool hasInnerEndpoint() const { return this->innerEndpoint_ != nullptr;};
    void deleteInnerEndpoint() { this->innerEndpoint_ = nullptr;};
    inline string innerEndpoint() const { DARABONBA_PTR_GET_DEFAULT(innerEndpoint_, "") };
    inline ListKyuubiServicesResponseBodyDataKyuubiServices& setInnerEndpoint(string innerEndpoint) { DARABONBA_PTR_SET_VALUE(innerEndpoint_, innerEndpoint) };


    // kyuubiConfigs Field Functions 
    bool hasKyuubiConfigs() const { return this->kyuubiConfigs_ != nullptr;};
    void deleteKyuubiConfigs() { this->kyuubiConfigs_ = nullptr;};
    inline string kyuubiConfigs() const { DARABONBA_PTR_GET_DEFAULT(kyuubiConfigs_, "") };
    inline ListKyuubiServicesResponseBodyDataKyuubiServices& setKyuubiConfigs(string kyuubiConfigs) { DARABONBA_PTR_SET_VALUE(kyuubiConfigs_, kyuubiConfigs) };


    // kyuubiReleaseVersion Field Functions 
    bool hasKyuubiReleaseVersion() const { return this->kyuubiReleaseVersion_ != nullptr;};
    void deleteKyuubiReleaseVersion() { this->kyuubiReleaseVersion_ = nullptr;};
    inline string kyuubiReleaseVersion() const { DARABONBA_PTR_GET_DEFAULT(kyuubiReleaseVersion_, "") };
    inline ListKyuubiServicesResponseBodyDataKyuubiServices& setKyuubiReleaseVersion(string kyuubiReleaseVersion) { DARABONBA_PTR_SET_VALUE(kyuubiReleaseVersion_, kyuubiReleaseVersion) };


    // kyuubiServiceId Field Functions 
    bool hasKyuubiServiceId() const { return this->kyuubiServiceId_ != nullptr;};
    void deleteKyuubiServiceId() { this->kyuubiServiceId_ = nullptr;};
    inline string kyuubiServiceId() const { DARABONBA_PTR_GET_DEFAULT(kyuubiServiceId_, "") };
    inline ListKyuubiServicesResponseBodyDataKyuubiServices& setKyuubiServiceId(string kyuubiServiceId) { DARABONBA_PTR_SET_VALUE(kyuubiServiceId_, kyuubiServiceId) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListKyuubiServicesResponseBodyDataKyuubiServices& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // publicEndpoint Field Functions 
    bool hasPublicEndpoint() const { return this->publicEndpoint_ != nullptr;};
    void deletePublicEndpoint() { this->publicEndpoint_ = nullptr;};
    inline string publicEndpoint() const { DARABONBA_PTR_GET_DEFAULT(publicEndpoint_, "") };
    inline ListKyuubiServicesResponseBodyDataKyuubiServices& setPublicEndpoint(string publicEndpoint) { DARABONBA_PTR_SET_VALUE(publicEndpoint_, publicEndpoint) };


    // queue Field Functions 
    bool hasQueue() const { return this->queue_ != nullptr;};
    void deleteQueue() { this->queue_ = nullptr;};
    inline string queue() const { DARABONBA_PTR_GET_DEFAULT(queue_, "") };
    inline ListKyuubiServicesResponseBodyDataKyuubiServices& setQueue(string queue) { DARABONBA_PTR_SET_VALUE(queue_, queue) };


    // releaseVersion Field Functions 
    bool hasReleaseVersion() const { return this->releaseVersion_ != nullptr;};
    void deleteReleaseVersion() { this->releaseVersion_ = nullptr;};
    inline string releaseVersion() const { DARABONBA_PTR_GET_DEFAULT(releaseVersion_, "") };
    inline ListKyuubiServicesResponseBodyDataKyuubiServices& setReleaseVersion(string releaseVersion) { DARABONBA_PTR_SET_VALUE(releaseVersion_, releaseVersion) };


    // replica Field Functions 
    bool hasReplica() const { return this->replica_ != nullptr;};
    void deleteReplica() { this->replica_ = nullptr;};
    inline int32_t replica() const { DARABONBA_PTR_GET_DEFAULT(replica_, 0) };
    inline ListKyuubiServicesResponseBodyDataKyuubiServices& setReplica(int32_t replica) { DARABONBA_PTR_SET_VALUE(replica_, replica) };


    // sparkConfigs Field Functions 
    bool hasSparkConfigs() const { return this->sparkConfigs_ != nullptr;};
    void deleteSparkConfigs() { this->sparkConfigs_ = nullptr;};
    inline string sparkConfigs() const { DARABONBA_PTR_GET_DEFAULT(sparkConfigs_, "") };
    inline ListKyuubiServicesResponseBodyDataKyuubiServices& setSparkConfigs(string sparkConfigs) { DARABONBA_PTR_SET_VALUE(sparkConfigs_, sparkConfigs) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline ListKyuubiServicesResponseBodyDataKyuubiServices& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // state Field Functions 
    bool hasState() const { return this->state_ != nullptr;};
    void deleteState() { this->state_ = nullptr;};
    inline string state() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
    inline ListKyuubiServicesResponseBodyDataKyuubiServices& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


  protected:
    std::shared_ptr<string> computeInstance_ = nullptr;
    std::shared_ptr<string> createTime_ = nullptr;
    std::shared_ptr<string> creator_ = nullptr;
    std::shared_ptr<string> innerEndpoint_ = nullptr;
    std::shared_ptr<string> kyuubiConfigs_ = nullptr;
    std::shared_ptr<string> kyuubiReleaseVersion_ = nullptr;
    // KyuubiServer ID。
    std::shared_ptr<string> kyuubiServiceId_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> publicEndpoint_ = nullptr;
    std::shared_ptr<string> queue_ = nullptr;
    std::shared_ptr<string> releaseVersion_ = nullptr;
    std::shared_ptr<int32_t> replica_ = nullptr;
    std::shared_ptr<string> sparkConfigs_ = nullptr;
    std::shared_ptr<string> startTime_ = nullptr;
    std::shared_ptr<string> state_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EmrServerlessSpark20230808
#endif
