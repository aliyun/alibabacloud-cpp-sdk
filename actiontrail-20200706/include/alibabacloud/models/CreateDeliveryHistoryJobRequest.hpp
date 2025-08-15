// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEDELIVERYHISTORYJOBREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEDELIVERYHISTORYJOBREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Actiontrail20200706
{
namespace Models
{
  class CreateDeliveryHistoryJobRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateDeliveryHistoryJobRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(TrailName, trailName_);
    };
    friend void from_json(const Darabonba::Json& j, CreateDeliveryHistoryJobRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(TrailName, trailName_);
    };
    CreateDeliveryHistoryJobRequest() = default ;
    CreateDeliveryHistoryJobRequest(const CreateDeliveryHistoryJobRequest &) = default ;
    CreateDeliveryHistoryJobRequest(CreateDeliveryHistoryJobRequest &&) = default ;
    CreateDeliveryHistoryJobRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateDeliveryHistoryJobRequest() = default ;
    CreateDeliveryHistoryJobRequest& operator=(const CreateDeliveryHistoryJobRequest &) = default ;
    CreateDeliveryHistoryJobRequest& operator=(CreateDeliveryHistoryJobRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->clientToken_ != nullptr
        && this->trailName_ != nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string clientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreateDeliveryHistoryJobRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // trailName Field Functions 
    bool hasTrailName() const { return this->trailName_ != nullptr;};
    void deleteTrailName() { this->trailName_ = nullptr;};
    inline string trailName() const { DARABONBA_PTR_GET_DEFAULT(trailName_, "") };
    inline CreateDeliveryHistoryJobRequest& setTrailName(string trailName) { DARABONBA_PTR_SET_VALUE(trailName_, trailName) };


  protected:
    // The client token that is used to ensure the idempotence of the request. You can use the client to generate the value, but you must make sure that it is unique among different requests.
    // 
    // The token can contain only ASCII characters and can be up to 64 characters in length.
    // 
    // For more information, see [How to ensure idempotence](https://help.aliyun.com/document_detail/25693.html).
    std::shared_ptr<string> clientToken_ = nullptr;
    // The name of the trail for which you want to create a historical event delivery task.
    // 
    // This parameter is required.
    std::shared_ptr<string> trailName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Actiontrail20200706
#endif
