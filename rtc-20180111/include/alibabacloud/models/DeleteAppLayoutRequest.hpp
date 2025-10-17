// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEAPPLAYOUTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEAPPLAYOUTREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DeleteAppLayoutRequestLayout.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rtc20180111
{
namespace Models
{
  class DeleteAppLayoutRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteAppLayoutRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(Layout, layout_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteAppLayoutRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(Layout, layout_);
    };
    DeleteAppLayoutRequest() = default ;
    DeleteAppLayoutRequest(const DeleteAppLayoutRequest &) = default ;
    DeleteAppLayoutRequest(DeleteAppLayoutRequest &&) = default ;
    DeleteAppLayoutRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteAppLayoutRequest() = default ;
    DeleteAppLayoutRequest& operator=(const DeleteAppLayoutRequest &) = default ;
    DeleteAppLayoutRequest& operator=(DeleteAppLayoutRequest &&) = default ;
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
    inline DeleteAppLayoutRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string clientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline DeleteAppLayoutRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // layout Field Functions 
    bool hasLayout() const { return this->layout_ != nullptr;};
    void deleteLayout() { this->layout_ = nullptr;};
    inline const DeleteAppLayoutRequestLayout & layout() const { DARABONBA_PTR_GET_CONST(layout_, DeleteAppLayoutRequestLayout) };
    inline DeleteAppLayoutRequestLayout layout() { DARABONBA_PTR_GET(layout_, DeleteAppLayoutRequestLayout) };
    inline DeleteAppLayoutRequest& setLayout(const DeleteAppLayoutRequestLayout & layout) { DARABONBA_PTR_SET_VALUE(layout_, layout) };
    inline DeleteAppLayoutRequest& setLayout(DeleteAppLayoutRequestLayout && layout) { DARABONBA_PTR_SET_RVALUE(layout_, layout) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> appId_ = nullptr;
    std::shared_ptr<string> clientToken_ = nullptr;
    std::shared_ptr<DeleteAppLayoutRequestLayout> layout_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rtc20180111
#endif
