// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCONSUMERACCESSOVERVIEWREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETCONSUMERACCESSOVERVIEWREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class GetConsumerAccessOverviewRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetConsumerAccessOverviewRequest& obj) { 
      DARABONBA_PTR_TO_JSON(gatewayId, gatewayId_);
      DARABONBA_PTR_TO_JSON(includeModelTpm, includeModelTpm_);
    };
    friend void from_json(const Darabonba::Json& j, GetConsumerAccessOverviewRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(gatewayId, gatewayId_);
      DARABONBA_PTR_FROM_JSON(includeModelTpm, includeModelTpm_);
    };
    GetConsumerAccessOverviewRequest() = default ;
    GetConsumerAccessOverviewRequest(const GetConsumerAccessOverviewRequest &) = default ;
    GetConsumerAccessOverviewRequest(GetConsumerAccessOverviewRequest &&) = default ;
    GetConsumerAccessOverviewRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetConsumerAccessOverviewRequest() = default ;
    GetConsumerAccessOverviewRequest& operator=(const GetConsumerAccessOverviewRequest &) = default ;
    GetConsumerAccessOverviewRequest& operator=(GetConsumerAccessOverviewRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->gatewayId_ == nullptr
        && this->includeModelTpm_ == nullptr; };
    // gatewayId Field Functions 
    bool hasGatewayId() const { return this->gatewayId_ != nullptr;};
    void deleteGatewayId() { this->gatewayId_ = nullptr;};
    inline string getGatewayId() const { DARABONBA_PTR_GET_DEFAULT(gatewayId_, "") };
    inline GetConsumerAccessOverviewRequest& setGatewayId(string gatewayId) { DARABONBA_PTR_SET_VALUE(gatewayId_, gatewayId) };


    // includeModelTpm Field Functions 
    bool hasIncludeModelTpm() const { return this->includeModelTpm_ != nullptr;};
    void deleteIncludeModelTpm() { this->includeModelTpm_ = nullptr;};
    inline bool getIncludeModelTpm() const { DARABONBA_PTR_GET_DEFAULT(includeModelTpm_, false) };
    inline GetConsumerAccessOverviewRequest& setIncludeModelTpm(bool includeModelTpm) { DARABONBA_PTR_SET_VALUE(includeModelTpm_, includeModelTpm) };


  protected:
    // The target AI gateway instance ID. Quotas and resources are isolated by instance.
    // 
    // This parameter is required.
    shared_ptr<string> gatewayId_ {};
    // Specifies whether to also query the model TPM limits. Default value: false. If set to true, modelTpmLimits is returned for dedicated instances.
    shared_ptr<bool> includeModelTpm_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
