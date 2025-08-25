// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITCAMPAIGNREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SUBMITCAMPAIGNREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CCC20200701
{
namespace Models
{
  class SubmitCampaignRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitCampaignRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CampaignId, campaignId_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitCampaignRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CampaignId, campaignId_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
    };
    SubmitCampaignRequest() = default ;
    SubmitCampaignRequest(const SubmitCampaignRequest &) = default ;
    SubmitCampaignRequest(SubmitCampaignRequest &&) = default ;
    SubmitCampaignRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitCampaignRequest() = default ;
    SubmitCampaignRequest& operator=(const SubmitCampaignRequest &) = default ;
    SubmitCampaignRequest& operator=(SubmitCampaignRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->campaignId_ != nullptr
        && this->instanceId_ != nullptr; };
    // campaignId Field Functions 
    bool hasCampaignId() const { return this->campaignId_ != nullptr;};
    void deleteCampaignId() { this->campaignId_ = nullptr;};
    inline string campaignId() const { DARABONBA_PTR_GET_DEFAULT(campaignId_, "") };
    inline SubmitCampaignRequest& setCampaignId(string campaignId) { DARABONBA_PTR_SET_VALUE(campaignId_, campaignId) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline SubmitCampaignRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> campaignId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CCC20200701
#endif
