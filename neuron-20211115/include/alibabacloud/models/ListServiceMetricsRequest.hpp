// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSERVICEMETRICSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTSERVICEMETRICSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Neuron20211115
{
namespace Models
{
  class ListServiceMetricsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListServiceMetricsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(endTime, endTime_);
      DARABONBA_PTR_TO_JSON(env, env_);
      DARABONBA_PTR_TO_JSON(groupId, groupId_);
      DARABONBA_PTR_TO_JSON(intervalInSec, intervalInSec_);
      DARABONBA_PTR_TO_JSON(ip, ip_);
      DARABONBA_PTR_TO_JSON(measures, measures_);
      DARABONBA_PTR_TO_JSON(serviceGroupId, serviceGroupId_);
      DARABONBA_PTR_TO_JSON(startTime, startTime_);
      DARABONBA_PTR_TO_JSON(topicId, topicId_);
      DARABONBA_PTR_TO_JSON(type, type_);
    };
    friend void from_json(const Darabonba::Json& j, ListServiceMetricsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(endTime, endTime_);
      DARABONBA_PTR_FROM_JSON(env, env_);
      DARABONBA_PTR_FROM_JSON(groupId, groupId_);
      DARABONBA_PTR_FROM_JSON(intervalInSec, intervalInSec_);
      DARABONBA_PTR_FROM_JSON(ip, ip_);
      DARABONBA_PTR_FROM_JSON(measures, measures_);
      DARABONBA_PTR_FROM_JSON(serviceGroupId, serviceGroupId_);
      DARABONBA_PTR_FROM_JSON(startTime, startTime_);
      DARABONBA_PTR_FROM_JSON(topicId, topicId_);
      DARABONBA_PTR_FROM_JSON(type, type_);
    };
    ListServiceMetricsRequest() = default ;
    ListServiceMetricsRequest(const ListServiceMetricsRequest &) = default ;
    ListServiceMetricsRequest(ListServiceMetricsRequest &&) = default ;
    ListServiceMetricsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListServiceMetricsRequest() = default ;
    ListServiceMetricsRequest& operator=(const ListServiceMetricsRequest &) = default ;
    ListServiceMetricsRequest& operator=(ListServiceMetricsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->endTime_ == nullptr
        && this->env_ == nullptr && this->groupId_ == nullptr && this->intervalInSec_ == nullptr && this->ip_ == nullptr && this->measures_ == nullptr
        && this->serviceGroupId_ == nullptr && this->startTime_ == nullptr && this->topicId_ == nullptr && this->type_ == nullptr; };
    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline ListServiceMetricsRequest& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // env Field Functions 
    bool hasEnv() const { return this->env_ != nullptr;};
    void deleteEnv() { this->env_ = nullptr;};
    inline string getEnv() const { DARABONBA_PTR_GET_DEFAULT(env_, "") };
    inline ListServiceMetricsRequest& setEnv(string env) { DARABONBA_PTR_SET_VALUE(env_, env) };


    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline int64_t getGroupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, 0L) };
    inline ListServiceMetricsRequest& setGroupId(int64_t groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // intervalInSec Field Functions 
    bool hasIntervalInSec() const { return this->intervalInSec_ != nullptr;};
    void deleteIntervalInSec() { this->intervalInSec_ = nullptr;};
    inline int32_t getIntervalInSec() const { DARABONBA_PTR_GET_DEFAULT(intervalInSec_, 0) };
    inline ListServiceMetricsRequest& setIntervalInSec(int32_t intervalInSec) { DARABONBA_PTR_SET_VALUE(intervalInSec_, intervalInSec) };


    // ip Field Functions 
    bool hasIp() const { return this->ip_ != nullptr;};
    void deleteIp() { this->ip_ = nullptr;};
    inline string getIp() const { DARABONBA_PTR_GET_DEFAULT(ip_, "") };
    inline ListServiceMetricsRequest& setIp(string ip) { DARABONBA_PTR_SET_VALUE(ip_, ip) };


    // measures Field Functions 
    bool hasMeasures() const { return this->measures_ != nullptr;};
    void deleteMeasures() { this->measures_ = nullptr;};
    inline string getMeasures() const { DARABONBA_PTR_GET_DEFAULT(measures_, "") };
    inline ListServiceMetricsRequest& setMeasures(string measures) { DARABONBA_PTR_SET_VALUE(measures_, measures) };


    // serviceGroupId Field Functions 
    bool hasServiceGroupId() const { return this->serviceGroupId_ != nullptr;};
    void deleteServiceGroupId() { this->serviceGroupId_ = nullptr;};
    inline int64_t getServiceGroupId() const { DARABONBA_PTR_GET_DEFAULT(serviceGroupId_, 0L) };
    inline ListServiceMetricsRequest& setServiceGroupId(int64_t serviceGroupId) { DARABONBA_PTR_SET_VALUE(serviceGroupId_, serviceGroupId) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline ListServiceMetricsRequest& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // topicId Field Functions 
    bool hasTopicId() const { return this->topicId_ != nullptr;};
    void deleteTopicId() { this->topicId_ = nullptr;};
    inline int64_t getTopicId() const { DARABONBA_PTR_GET_DEFAULT(topicId_, 0L) };
    inline ListServiceMetricsRequest& setTopicId(int64_t topicId) { DARABONBA_PTR_SET_VALUE(topicId_, topicId) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline ListServiceMetricsRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // This parameter is required.
    shared_ptr<string> endTime_ {};
    // This parameter is required.
    shared_ptr<string> env_ {};
    shared_ptr<int64_t> groupId_ {};
    // This parameter is required.
    shared_ptr<int32_t> intervalInSec_ {};
    shared_ptr<string> ip_ {};
    shared_ptr<string> measures_ {};
    shared_ptr<int64_t> serviceGroupId_ {};
    // This parameter is required.
    shared_ptr<string> startTime_ {};
    shared_ptr<int64_t> topicId_ {};
    // This parameter is required.
    shared_ptr<string> type_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Neuron20211115
#endif
