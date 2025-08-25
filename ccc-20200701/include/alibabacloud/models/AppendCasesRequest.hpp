// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_APPENDCASESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_APPENDCASESREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/AppendCasesRequestBody.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CCC20200701
{
namespace Models
{
  class AppendCasesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AppendCasesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CampaignId, campaignId_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, AppendCasesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CampaignId, campaignId_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    AppendCasesRequest() = default ;
    AppendCasesRequest(const AppendCasesRequest &) = default ;
    AppendCasesRequest(AppendCasesRequest &&) = default ;
    AppendCasesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AppendCasesRequest() = default ;
    AppendCasesRequest& operator=(const AppendCasesRequest &) = default ;
    AppendCasesRequest& operator=(AppendCasesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->campaignId_ != nullptr
        && this->instanceId_ != nullptr && this->body_ != nullptr; };
    // campaignId Field Functions 
    bool hasCampaignId() const { return this->campaignId_ != nullptr;};
    void deleteCampaignId() { this->campaignId_ = nullptr;};
    inline string campaignId() const { DARABONBA_PTR_GET_DEFAULT(campaignId_, "") };
    inline AppendCasesRequest& setCampaignId(string campaignId) { DARABONBA_PTR_SET_VALUE(campaignId_, campaignId) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline AppendCasesRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const vector<AppendCasesRequestBody> & body() const { DARABONBA_PTR_GET_CONST(body_, vector<AppendCasesRequestBody>) };
    inline vector<AppendCasesRequestBody> body() { DARABONBA_PTR_GET(body_, vector<AppendCasesRequestBody>) };
    inline AppendCasesRequest& setBody(const vector<AppendCasesRequestBody> & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline AppendCasesRequest& setBody(vector<AppendCasesRequestBody> && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> campaignId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    std::shared_ptr<vector<AppendCasesRequestBody>> body_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CCC20200701
#endif
