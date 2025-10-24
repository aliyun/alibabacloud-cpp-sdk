// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GROUP_HPP_
#define ALIBABACLOUD_MODELS_GROUP_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eas20210701
{
namespace Models
{
  class Group : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const Group& obj) { 
      DARABONBA_PTR_TO_JSON(AccessToken, accessToken_);
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(InternetEndpoint, internetEndpoint_);
      DARABONBA_PTR_TO_JSON(IntranetEndpoint, intranetEndpoint_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(QueueService, queueService_);
      DARABONBA_PTR_TO_JSON(TrafficMode, trafficMode_);
      DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
    };
    friend void from_json(const Darabonba::Json& j, Group& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessToken, accessToken_);
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(InternetEndpoint, internetEndpoint_);
      DARABONBA_PTR_FROM_JSON(IntranetEndpoint, intranetEndpoint_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(QueueService, queueService_);
      DARABONBA_PTR_FROM_JSON(TrafficMode, trafficMode_);
      DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
    };
    Group() = default ;
    Group(const Group &) = default ;
    Group(Group &&) = default ;
    Group(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~Group() = default ;
    Group& operator=(const Group &) = default ;
    Group& operator=(Group &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accessToken_ == nullptr
        && return this->clusterId_ == nullptr && return this->createTime_ == nullptr && return this->internetEndpoint_ == nullptr && return this->intranetEndpoint_ == nullptr && return this->name_ == nullptr
        && return this->queueService_ == nullptr && return this->trafficMode_ == nullptr && return this->updateTime_ == nullptr; };
    // accessToken Field Functions 
    bool hasAccessToken() const { return this->accessToken_ != nullptr;};
    void deleteAccessToken() { this->accessToken_ = nullptr;};
    inline string accessToken() const { DARABONBA_PTR_GET_DEFAULT(accessToken_, "") };
    inline Group& setAccessToken(string accessToken) { DARABONBA_PTR_SET_VALUE(accessToken_, accessToken) };


    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string clusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline Group& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline Group& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // internetEndpoint Field Functions 
    bool hasInternetEndpoint() const { return this->internetEndpoint_ != nullptr;};
    void deleteInternetEndpoint() { this->internetEndpoint_ = nullptr;};
    inline string internetEndpoint() const { DARABONBA_PTR_GET_DEFAULT(internetEndpoint_, "") };
    inline Group& setInternetEndpoint(string internetEndpoint) { DARABONBA_PTR_SET_VALUE(internetEndpoint_, internetEndpoint) };


    // intranetEndpoint Field Functions 
    bool hasIntranetEndpoint() const { return this->intranetEndpoint_ != nullptr;};
    void deleteIntranetEndpoint() { this->intranetEndpoint_ = nullptr;};
    inline string intranetEndpoint() const { DARABONBA_PTR_GET_DEFAULT(intranetEndpoint_, "") };
    inline Group& setIntranetEndpoint(string intranetEndpoint) { DARABONBA_PTR_SET_VALUE(intranetEndpoint_, intranetEndpoint) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline Group& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // queueService Field Functions 
    bool hasQueueService() const { return this->queueService_ != nullptr;};
    void deleteQueueService() { this->queueService_ = nullptr;};
    inline string queueService() const { DARABONBA_PTR_GET_DEFAULT(queueService_, "") };
    inline Group& setQueueService(string queueService) { DARABONBA_PTR_SET_VALUE(queueService_, queueService) };


    // trafficMode Field Functions 
    bool hasTrafficMode() const { return this->trafficMode_ != nullptr;};
    void deleteTrafficMode() { this->trafficMode_ = nullptr;};
    inline string trafficMode() const { DARABONBA_PTR_GET_DEFAULT(trafficMode_, "") };
    inline Group& setTrafficMode(string trafficMode) { DARABONBA_PTR_SET_VALUE(trafficMode_, trafficMode) };


    // updateTime Field Functions 
    bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
    void deleteUpdateTime() { this->updateTime_ = nullptr;};
    inline string updateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
    inline Group& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


  protected:
    std::shared_ptr<string> accessToken_ = nullptr;
    std::shared_ptr<string> clusterId_ = nullptr;
    std::shared_ptr<string> createTime_ = nullptr;
    std::shared_ptr<string> internetEndpoint_ = nullptr;
    std::shared_ptr<string> intranetEndpoint_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> queueService_ = nullptr;
    std::shared_ptr<string> trafficMode_ = nullptr;
    std::shared_ptr<string> updateTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eas20210701
#endif
