// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEAPPLAYOUTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEAPPLAYOUTREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateAppLayoutRequestLayout.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rtc20180111
{
namespace Models
{
  class CreateAppLayoutRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateAppLayoutRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(Layout, layout_);
    };
    friend void from_json(const Darabonba::Json& j, CreateAppLayoutRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(Layout, layout_);
    };
    CreateAppLayoutRequest() = default ;
    CreateAppLayoutRequest(const CreateAppLayoutRequest &) = default ;
    CreateAppLayoutRequest(CreateAppLayoutRequest &&) = default ;
    CreateAppLayoutRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateAppLayoutRequest() = default ;
    CreateAppLayoutRequest& operator=(const CreateAppLayoutRequest &) = default ;
    CreateAppLayoutRequest& operator=(CreateAppLayoutRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appId_ == nullptr
        && return this->clientToken_ == nullptr && return this->layout_ == nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline CreateAppLayoutRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string clientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreateAppLayoutRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // layout Field Functions 
    bool hasLayout() const { return this->layout_ != nullptr;};
    void deleteLayout() { this->layout_ = nullptr;};
    inline const CreateAppLayoutRequestLayout & layout() const { DARABONBA_PTR_GET_CONST(layout_, CreateAppLayoutRequestLayout) };
    inline CreateAppLayoutRequestLayout layout() { DARABONBA_PTR_GET(layout_, CreateAppLayoutRequestLayout) };
    inline CreateAppLayoutRequest& setLayout(const CreateAppLayoutRequestLayout & layout) { DARABONBA_PTR_SET_VALUE(layout_, layout) };
    inline CreateAppLayoutRequest& setLayout(CreateAppLayoutRequestLayout && layout) { DARABONBA_PTR_SET_RVALUE(layout_, layout) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> appId_ = nullptr;
    std::shared_ptr<string> clientToken_ = nullptr;
    // This parameter is required.
    std::shared_ptr<CreateAppLayoutRequestLayout> layout_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rtc20180111
#endif
