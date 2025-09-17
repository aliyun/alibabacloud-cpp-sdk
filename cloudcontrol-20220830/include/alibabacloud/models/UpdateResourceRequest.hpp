// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATERESOURCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATERESOURCEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudcontrol20220830
{
namespace Models
{
  class UpdateResourceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateResourceRequest& obj) { 
      DARABONBA_ANY_TO_JSON(body, body_);
      DARABONBA_PTR_TO_JSON(clientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(regionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateResourceRequest& obj) { 
      DARABONBA_ANY_FROM_JSON(body, body_);
      DARABONBA_PTR_FROM_JSON(clientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(regionId, regionId_);
    };
    UpdateResourceRequest() = default ;
    UpdateResourceRequest(const UpdateResourceRequest &) = default ;
    UpdateResourceRequest(UpdateResourceRequest &&) = default ;
    UpdateResourceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateResourceRequest() = default ;
    UpdateResourceRequest& operator=(const UpdateResourceRequest &) = default ;
    UpdateResourceRequest& operator=(UpdateResourceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->body_ != nullptr
        && this->clientToken_ != nullptr && this->regionId_ != nullptr; };
    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline     const Darabonba::Json & body() const { DARABONBA_GET(body_) };
    Darabonba::Json & body() { DARABONBA_GET(body_) };
    inline UpdateResourceRequest& setBody(const Darabonba::Json & body) { DARABONBA_SET_VALUE(body_, body) };
    inline UpdateResourceRequest& setBody(Darabonba::Json & body) { DARABONBA_SET_RVALUE(body_, body) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string clientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline UpdateResourceRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline UpdateResourceRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The request body. The property of the resource to be updated is specified in JSON format.
    Darabonba::Json body_ = nullptr;
    // The client token that is used to ensure the idempotence of the request. If a cloud service supports idempotence, the parameter takes effect.
    std::shared_ptr<string> clientToken_ = nullptr;
    // The region ID. This parameter is required if a cloud service is a regionalized.
    std::shared_ptr<string> regionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudcontrol20220830
#endif
