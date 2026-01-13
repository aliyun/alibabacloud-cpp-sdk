// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEKYUUBISERVICEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEKYUUBISERVICEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EmrServerlessSpark20230808
{
namespace Models
{
  class CreateKyuubiServiceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateKyuubiServiceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(computeInstance, computeInstance_);
      DARABONBA_PTR_TO_JSON(kyuubiConfigs, kyuubiConfigs_);
      DARABONBA_PTR_TO_JSON(kyuubiReleaseVersion, kyuubiReleaseVersion_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(publicEndpointEnabled, publicEndpointEnabled_);
      DARABONBA_PTR_TO_JSON(queue, queue_);
      DARABONBA_PTR_TO_JSON(releaseVersion, releaseVersion_);
      DARABONBA_PTR_TO_JSON(replica, replica_);
      DARABONBA_PTR_TO_JSON(sparkConfigs, sparkConfigs_);
    };
    friend void from_json(const Darabonba::Json& j, CreateKyuubiServiceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(computeInstance, computeInstance_);
      DARABONBA_PTR_FROM_JSON(kyuubiConfigs, kyuubiConfigs_);
      DARABONBA_PTR_FROM_JSON(kyuubiReleaseVersion, kyuubiReleaseVersion_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(publicEndpointEnabled, publicEndpointEnabled_);
      DARABONBA_PTR_FROM_JSON(queue, queue_);
      DARABONBA_PTR_FROM_JSON(releaseVersion, releaseVersion_);
      DARABONBA_PTR_FROM_JSON(replica, replica_);
      DARABONBA_PTR_FROM_JSON(sparkConfigs, sparkConfigs_);
    };
    CreateKyuubiServiceRequest() = default ;
    CreateKyuubiServiceRequest(const CreateKyuubiServiceRequest &) = default ;
    CreateKyuubiServiceRequest(CreateKyuubiServiceRequest &&) = default ;
    CreateKyuubiServiceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateKyuubiServiceRequest() = default ;
    CreateKyuubiServiceRequest& operator=(const CreateKyuubiServiceRequest &) = default ;
    CreateKyuubiServiceRequest& operator=(CreateKyuubiServiceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->computeInstance_ == nullptr
        && this->kyuubiConfigs_ == nullptr && this->kyuubiReleaseVersion_ == nullptr && this->name_ == nullptr && this->publicEndpointEnabled_ == nullptr && this->queue_ == nullptr
        && this->releaseVersion_ == nullptr && this->replica_ == nullptr && this->sparkConfigs_ == nullptr; };
    // computeInstance Field Functions 
    bool hasComputeInstance() const { return this->computeInstance_ != nullptr;};
    void deleteComputeInstance() { this->computeInstance_ = nullptr;};
    inline string getComputeInstance() const { DARABONBA_PTR_GET_DEFAULT(computeInstance_, "") };
    inline CreateKyuubiServiceRequest& setComputeInstance(string computeInstance) { DARABONBA_PTR_SET_VALUE(computeInstance_, computeInstance) };


    // kyuubiConfigs Field Functions 
    bool hasKyuubiConfigs() const { return this->kyuubiConfigs_ != nullptr;};
    void deleteKyuubiConfigs() { this->kyuubiConfigs_ = nullptr;};
    inline string getKyuubiConfigs() const { DARABONBA_PTR_GET_DEFAULT(kyuubiConfigs_, "") };
    inline CreateKyuubiServiceRequest& setKyuubiConfigs(string kyuubiConfigs) { DARABONBA_PTR_SET_VALUE(kyuubiConfigs_, kyuubiConfigs) };


    // kyuubiReleaseVersion Field Functions 
    bool hasKyuubiReleaseVersion() const { return this->kyuubiReleaseVersion_ != nullptr;};
    void deleteKyuubiReleaseVersion() { this->kyuubiReleaseVersion_ = nullptr;};
    inline string getKyuubiReleaseVersion() const { DARABONBA_PTR_GET_DEFAULT(kyuubiReleaseVersion_, "") };
    inline CreateKyuubiServiceRequest& setKyuubiReleaseVersion(string kyuubiReleaseVersion) { DARABONBA_PTR_SET_VALUE(kyuubiReleaseVersion_, kyuubiReleaseVersion) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateKyuubiServiceRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // publicEndpointEnabled Field Functions 
    bool hasPublicEndpointEnabled() const { return this->publicEndpointEnabled_ != nullptr;};
    void deletePublicEndpointEnabled() { this->publicEndpointEnabled_ = nullptr;};
    inline bool getPublicEndpointEnabled() const { DARABONBA_PTR_GET_DEFAULT(publicEndpointEnabled_, false) };
    inline CreateKyuubiServiceRequest& setPublicEndpointEnabled(bool publicEndpointEnabled) { DARABONBA_PTR_SET_VALUE(publicEndpointEnabled_, publicEndpointEnabled) };


    // queue Field Functions 
    bool hasQueue() const { return this->queue_ != nullptr;};
    void deleteQueue() { this->queue_ = nullptr;};
    inline string getQueue() const { DARABONBA_PTR_GET_DEFAULT(queue_, "") };
    inline CreateKyuubiServiceRequest& setQueue(string queue) { DARABONBA_PTR_SET_VALUE(queue_, queue) };


    // releaseVersion Field Functions 
    bool hasReleaseVersion() const { return this->releaseVersion_ != nullptr;};
    void deleteReleaseVersion() { this->releaseVersion_ = nullptr;};
    inline string getReleaseVersion() const { DARABONBA_PTR_GET_DEFAULT(releaseVersion_, "") };
    inline CreateKyuubiServiceRequest& setReleaseVersion(string releaseVersion) { DARABONBA_PTR_SET_VALUE(releaseVersion_, releaseVersion) };


    // replica Field Functions 
    bool hasReplica() const { return this->replica_ != nullptr;};
    void deleteReplica() { this->replica_ = nullptr;};
    inline int32_t getReplica() const { DARABONBA_PTR_GET_DEFAULT(replica_, 0) };
    inline CreateKyuubiServiceRequest& setReplica(int32_t replica) { DARABONBA_PTR_SET_VALUE(replica_, replica) };


    // sparkConfigs Field Functions 
    bool hasSparkConfigs() const { return this->sparkConfigs_ != nullptr;};
    void deleteSparkConfigs() { this->sparkConfigs_ = nullptr;};
    inline string getSparkConfigs() const { DARABONBA_PTR_GET_DEFAULT(sparkConfigs_, "") };
    inline CreateKyuubiServiceRequest& setSparkConfigs(string sparkConfigs) { DARABONBA_PTR_SET_VALUE(sparkConfigs_, sparkConfigs) };


  protected:
    shared_ptr<string> computeInstance_ {};
    shared_ptr<string> kyuubiConfigs_ {};
    shared_ptr<string> kyuubiReleaseVersion_ {};
    shared_ptr<string> name_ {};
    shared_ptr<bool> publicEndpointEnabled_ {};
    shared_ptr<string> queue_ {};
    shared_ptr<string> releaseVersion_ {};
    shared_ptr<int32_t> replica_ {};
    shared_ptr<string> sparkConfigs_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EmrServerlessSpark20230808
#endif
