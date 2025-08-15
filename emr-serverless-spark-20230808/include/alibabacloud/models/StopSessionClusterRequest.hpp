// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_STOPSESSIONCLUSTERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_STOPSESSIONCLUSTERREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EmrServerlessSpark20230808
{
namespace Models
{
  class StopSessionClusterRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const StopSessionClusterRequest& obj) { 
      DARABONBA_PTR_TO_JSON(queueName, queueName_);
      DARABONBA_PTR_TO_JSON(sessionClusterId, sessionClusterId_);
      DARABONBA_PTR_TO_JSON(regionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, StopSessionClusterRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(queueName, queueName_);
      DARABONBA_PTR_FROM_JSON(sessionClusterId, sessionClusterId_);
      DARABONBA_PTR_FROM_JSON(regionId, regionId_);
    };
    StopSessionClusterRequest() = default ;
    StopSessionClusterRequest(const StopSessionClusterRequest &) = default ;
    StopSessionClusterRequest(StopSessionClusterRequest &&) = default ;
    StopSessionClusterRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~StopSessionClusterRequest() = default ;
    StopSessionClusterRequest& operator=(const StopSessionClusterRequest &) = default ;
    StopSessionClusterRequest& operator=(StopSessionClusterRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->queueName_ != nullptr
        && this->sessionClusterId_ != nullptr && this->regionId_ != nullptr; };
    // queueName Field Functions 
    bool hasQueueName() const { return this->queueName_ != nullptr;};
    void deleteQueueName() { this->queueName_ = nullptr;};
    inline string queueName() const { DARABONBA_PTR_GET_DEFAULT(queueName_, "") };
    inline StopSessionClusterRequest& setQueueName(string queueName) { DARABONBA_PTR_SET_VALUE(queueName_, queueName) };


    // sessionClusterId Field Functions 
    bool hasSessionClusterId() const { return this->sessionClusterId_ != nullptr;};
    void deleteSessionClusterId() { this->sessionClusterId_ = nullptr;};
    inline string sessionClusterId() const { DARABONBA_PTR_GET_DEFAULT(sessionClusterId_, "") };
    inline StopSessionClusterRequest& setSessionClusterId(string sessionClusterId) { DARABONBA_PTR_SET_VALUE(sessionClusterId_, sessionClusterId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline StopSessionClusterRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The queue name.
    std::shared_ptr<string> queueName_ = nullptr;
    // The session ID.
    std::shared_ptr<string> sessionClusterId_ = nullptr;
    // The region ID.
    std::shared_ptr<string> regionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EmrServerlessSpark20230808
#endif
