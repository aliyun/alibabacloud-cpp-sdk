// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEKYUUBISERVICEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEKYUUBISERVICEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EmrServerlessSpark20230808
{
namespace Models
{
  class UpdateKyuubiServiceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateKyuubiServiceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(computeInstance, computeInstance_);
      DARABONBA_PTR_TO_JSON(kyuubiConfigs, kyuubiConfigs_);
      DARABONBA_PTR_TO_JSON(kyuubiReleaseVersion, kyuubiReleaseVersion_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(publicEndpointEnabled, publicEndpointEnabled_);
      DARABONBA_PTR_TO_JSON(queue, queue_);
      DARABONBA_PTR_TO_JSON(releaseVersion, releaseVersion_);
      DARABONBA_PTR_TO_JSON(replica, replica_);
      DARABONBA_PTR_TO_JSON(restart, restart_);
      DARABONBA_PTR_TO_JSON(sparkConfigs, sparkConfigs_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateKyuubiServiceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(computeInstance, computeInstance_);
      DARABONBA_PTR_FROM_JSON(kyuubiConfigs, kyuubiConfigs_);
      DARABONBA_PTR_FROM_JSON(kyuubiReleaseVersion, kyuubiReleaseVersion_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(publicEndpointEnabled, publicEndpointEnabled_);
      DARABONBA_PTR_FROM_JSON(queue, queue_);
      DARABONBA_PTR_FROM_JSON(releaseVersion, releaseVersion_);
      DARABONBA_PTR_FROM_JSON(replica, replica_);
      DARABONBA_PTR_FROM_JSON(restart, restart_);
      DARABONBA_PTR_FROM_JSON(sparkConfigs, sparkConfigs_);
    };
    UpdateKyuubiServiceRequest() = default ;
    UpdateKyuubiServiceRequest(const UpdateKyuubiServiceRequest &) = default ;
    UpdateKyuubiServiceRequest(UpdateKyuubiServiceRequest &&) = default ;
    UpdateKyuubiServiceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateKyuubiServiceRequest() = default ;
    UpdateKyuubiServiceRequest& operator=(const UpdateKyuubiServiceRequest &) = default ;
    UpdateKyuubiServiceRequest& operator=(UpdateKyuubiServiceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->computeInstance_ == nullptr
        && return this->kyuubiConfigs_ == nullptr && return this->kyuubiReleaseVersion_ == nullptr && return this->name_ == nullptr && return this->publicEndpointEnabled_ == nullptr && return this->queue_ == nullptr
        && return this->releaseVersion_ == nullptr && return this->replica_ == nullptr && return this->restart_ == nullptr && return this->sparkConfigs_ == nullptr; };
    // computeInstance Field Functions 
    bool hasComputeInstance() const { return this->computeInstance_ != nullptr;};
    void deleteComputeInstance() { this->computeInstance_ = nullptr;};
    inline string computeInstance() const { DARABONBA_PTR_GET_DEFAULT(computeInstance_, "") };
    inline UpdateKyuubiServiceRequest& setComputeInstance(string computeInstance) { DARABONBA_PTR_SET_VALUE(computeInstance_, computeInstance) };


    // kyuubiConfigs Field Functions 
    bool hasKyuubiConfigs() const { return this->kyuubiConfigs_ != nullptr;};
    void deleteKyuubiConfigs() { this->kyuubiConfigs_ = nullptr;};
    inline string kyuubiConfigs() const { DARABONBA_PTR_GET_DEFAULT(kyuubiConfigs_, "") };
    inline UpdateKyuubiServiceRequest& setKyuubiConfigs(string kyuubiConfigs) { DARABONBA_PTR_SET_VALUE(kyuubiConfigs_, kyuubiConfigs) };


    // kyuubiReleaseVersion Field Functions 
    bool hasKyuubiReleaseVersion() const { return this->kyuubiReleaseVersion_ != nullptr;};
    void deleteKyuubiReleaseVersion() { this->kyuubiReleaseVersion_ = nullptr;};
    inline string kyuubiReleaseVersion() const { DARABONBA_PTR_GET_DEFAULT(kyuubiReleaseVersion_, "") };
    inline UpdateKyuubiServiceRequest& setKyuubiReleaseVersion(string kyuubiReleaseVersion) { DARABONBA_PTR_SET_VALUE(kyuubiReleaseVersion_, kyuubiReleaseVersion) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline UpdateKyuubiServiceRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // publicEndpointEnabled Field Functions 
    bool hasPublicEndpointEnabled() const { return this->publicEndpointEnabled_ != nullptr;};
    void deletePublicEndpointEnabled() { this->publicEndpointEnabled_ = nullptr;};
    inline bool publicEndpointEnabled() const { DARABONBA_PTR_GET_DEFAULT(publicEndpointEnabled_, false) };
    inline UpdateKyuubiServiceRequest& setPublicEndpointEnabled(bool publicEndpointEnabled) { DARABONBA_PTR_SET_VALUE(publicEndpointEnabled_, publicEndpointEnabled) };


    // queue Field Functions 
    bool hasQueue() const { return this->queue_ != nullptr;};
    void deleteQueue() { this->queue_ = nullptr;};
    inline string queue() const { DARABONBA_PTR_GET_DEFAULT(queue_, "") };
    inline UpdateKyuubiServiceRequest& setQueue(string queue) { DARABONBA_PTR_SET_VALUE(queue_, queue) };


    // releaseVersion Field Functions 
    bool hasReleaseVersion() const { return this->releaseVersion_ != nullptr;};
    void deleteReleaseVersion() { this->releaseVersion_ = nullptr;};
    inline string releaseVersion() const { DARABONBA_PTR_GET_DEFAULT(releaseVersion_, "") };
    inline UpdateKyuubiServiceRequest& setReleaseVersion(string releaseVersion) { DARABONBA_PTR_SET_VALUE(releaseVersion_, releaseVersion) };


    // replica Field Functions 
    bool hasReplica() const { return this->replica_ != nullptr;};
    void deleteReplica() { this->replica_ = nullptr;};
    inline int32_t replica() const { DARABONBA_PTR_GET_DEFAULT(replica_, 0) };
    inline UpdateKyuubiServiceRequest& setReplica(int32_t replica) { DARABONBA_PTR_SET_VALUE(replica_, replica) };


    // restart Field Functions 
    bool hasRestart() const { return this->restart_ != nullptr;};
    void deleteRestart() { this->restart_ = nullptr;};
    inline bool restart() const { DARABONBA_PTR_GET_DEFAULT(restart_, false) };
    inline UpdateKyuubiServiceRequest& setRestart(bool restart) { DARABONBA_PTR_SET_VALUE(restart_, restart) };


    // sparkConfigs Field Functions 
    bool hasSparkConfigs() const { return this->sparkConfigs_ != nullptr;};
    void deleteSparkConfigs() { this->sparkConfigs_ = nullptr;};
    inline string sparkConfigs() const { DARABONBA_PTR_GET_DEFAULT(sparkConfigs_, "") };
    inline UpdateKyuubiServiceRequest& setSparkConfigs(string sparkConfigs) { DARABONBA_PTR_SET_VALUE(sparkConfigs_, sparkConfigs) };


  protected:
    std::shared_ptr<string> computeInstance_ = nullptr;
    std::shared_ptr<string> kyuubiConfigs_ = nullptr;
    std::shared_ptr<string> kyuubiReleaseVersion_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<bool> publicEndpointEnabled_ = nullptr;
    std::shared_ptr<string> queue_ = nullptr;
    std::shared_ptr<string> releaseVersion_ = nullptr;
    std::shared_ptr<int32_t> replica_ = nullptr;
    std::shared_ptr<bool> restart_ = nullptr;
    std::shared_ptr<string> sparkConfigs_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EmrServerlessSpark20230808
#endif
