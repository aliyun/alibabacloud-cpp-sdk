// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETREALTIMECAMPAIGNSTATSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETREALTIMECAMPAIGNSTATSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CCC20200701
{
namespace Models
{
  class GetRealtimeCampaignStatsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetRealtimeCampaignStatsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(QueueId, queueId_);
    };
    friend void from_json(const Darabonba::Json& j, GetRealtimeCampaignStatsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(QueueId, queueId_);
    };
    GetRealtimeCampaignStatsRequest() = default ;
    GetRealtimeCampaignStatsRequest(const GetRealtimeCampaignStatsRequest &) = default ;
    GetRealtimeCampaignStatsRequest(GetRealtimeCampaignStatsRequest &&) = default ;
    GetRealtimeCampaignStatsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetRealtimeCampaignStatsRequest() = default ;
    GetRealtimeCampaignStatsRequest& operator=(const GetRealtimeCampaignStatsRequest &) = default ;
    GetRealtimeCampaignStatsRequest& operator=(GetRealtimeCampaignStatsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceId_ == nullptr
        && return this->queueId_ == nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline GetRealtimeCampaignStatsRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // queueId Field Functions 
    bool hasQueueId() const { return this->queueId_ != nullptr;};
    void deleteQueueId() { this->queueId_ = nullptr;};
    inline string queueId() const { DARABONBA_PTR_GET_DEFAULT(queueId_, "") };
    inline GetRealtimeCampaignStatsRequest& setQueueId(string queueId) { DARABONBA_PTR_SET_VALUE(queueId_, queueId) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> queueId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CCC20200701
#endif
